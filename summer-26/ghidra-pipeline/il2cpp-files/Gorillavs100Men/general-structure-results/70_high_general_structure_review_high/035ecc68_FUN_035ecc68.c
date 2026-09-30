/*
FUNCTION_NAME: FUN_035ecc68
ENTRY_POINT: 035ecc68
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035ed0f8) */
/* WARNING: Removing unreachable block (ram,0x035ed140) */

void FUN_035ecc68(long *param_1,uint param_2,long *param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  long **pplStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_38;
  
                    /* try { // try from 035ecc70 to 036ecc87 has its CatchHandler @ 035eccf4 */
                    /* try { // try from 035ecc88 to 036ecce3 has its CatchHandler @ 035ecb5c */
  if ((DAT_0491ed3d & 1) == 0) {
    FUN_020612a4(StringLiteral_9261);
    FUN_020612a4(StringLiteral_9262);
    DAT_0491ed3d = 1;
  }
  local_38 = (long *)0x0;
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0383e6fc(6,0);
  }
  if (*(uint *)(param_1 + 3) < param_2) {
    FUN_0384c7c8(0);
  }
                    /* try { // try from 035ecce4 to 036eccf3 has its CatchHandler @ 035eccf4 */
  lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
                    /* catch() { ... } // from try @ 035ecc44 with catch @ 035eccf4
                       catch() { ... } // from try @ 035ecc70 with catch @ 035eccf4
                       catch() { ... } // from try @ 035ecce4 with catch @ 035eccf4 */
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                    /* try { // try from 035eccf8 to 036eccfb has its CatchHandler @ 035ecd04 */
                    /* try { // try from 035eccfc to 036ecd07 has its CatchHandler @ 035ecb5c */
    lVar6 = FUN_02091334(lVar6);
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035eccf8 with catch @ 035ecd04
                        */
                    /* catch() { ... } // from try @ 035ecd98 with catch @ 035ecd08
                       catch() { ... } // from try @ 035ecdd8 with catch @ 035ecd08
                       catch() { ... } // from try @ 035ece10 with catch @ 035ecd08
                       catch() { ... } // from try @ 035ece3c with catch @ 035ecd08
                       catch() { ... } // from try @ 035eceb0 with catch @ 035ecd08 */
  plVar4 = (long *)thunk_FUN_02094664(param_3,lVar6);
  if (plVar4 == (long *)0x0) {
    if ((int)param_2 < (int)param_1[3]) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0206154c();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02091334(lVar6);
      }
      lVar7 = *param_3;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_035ecf34;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_02091668(param_3,lVar6,0);
LAB_035ecf34:
      plVar4 = (long *)(*(code *)*puVar5)(param_3,puVar5[1]);
      puVar2 = StringLiteral_9262;
      pplStack_68 = &local_38;
      local_70 = 0;
      do {
        local_38 = plVar4;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0206154c();
        }
        lVar6 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_035ecfa8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02091668(plVar4,*(long *)puVar2,0);
LAB_035ecfa8:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        plVar4 = local_38;
        if ((uVar9 & 1) == 0) {
          if (local_38 == (long *)0x0) goto LAB_035ed114;
          lVar6 = *local_38;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 == 0) goto LAB_035ed0c4;
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_035ed0ac;
        }
        if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0206154c();
        }
        lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x140);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02091334(lVar6);
        }
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_035ed02c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02091668(plVar4,lVar6,0);
LAB_035ed02c:
        (*(code *)*puVar5)(&local_88,plVar4,puVar5[1]);
        uStack_58 = uStack_80;
        local_60 = local_88;
        local_50 = local_78;
        FUN_035ec9f4(param_1,param_2,&local_60,
                     *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x158));
        param_2 = param_2 + 1;
        plVar4 = local_38;
      } while( true );
    }
    FUN_035ed918(param_1,param_3,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x40)
                );
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02091334(lVar6);
    }
                    /* try { // try from 035ecd38 to 036ecd97 has its CatchHandler @ 035ecda8 */
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto Unity_Collections_NativeArray<InstanceOcclusionEventDebugArray_Request>__Allocate;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02091668(plVar4,lVar6,0);
Unity_Collections_NativeArray<InstanceOcclusionEventDebugArray_Request>__Allocate:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (0 < iVar3) {
      FUN_035ec1e4(param_1,(int)param_1[3] + iVar3,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78));
      iVar1 = (int)param_1[3] - param_2;
      if (iVar1 != 0 && (int)param_2 <= (int)param_1[3]) {
        Sirenix_Utilities_RectExtensions__AlignCenterY
                  (param_1[2],param_2,param_1[2],iVar3 + param_2,iVar1,0);
      }
      lVar6 = param_1[2];
      if (plVar4 == param_1) {
        Sirenix_Utilities_RectExtensions__AlignCenterY(lVar6,0,lVar6,param_2,param_2,0);
        Sirenix_Utilities_RectExtensions__AlignCenterY
                  (param_1[2],iVar3 + param_2,param_1[2],param_2 << 1,(int)param_1[3] - param_2,0);
      }
      else {
        lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02091334(lVar7);
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_035ecf04;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02091668(plVar4,lVar7,5);
LAB_035ecf04:
        (*(code *)*puVar5)(plVar4,lVar6,param_2,puVar5[1]);
      }
      *(int *)(param_1 + 3) = (int)param_1[3] + iVar3;
    }
  }
LAB_035ed114:
  *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
  return;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_035ed0ac:
    if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_9261) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_035ed0e0;
    }
  }
LAB_035ed0c4:
  puVar5 = (undefined8 *)FUN_02091668(local_38,*(long *)StringLiteral_9261,0);
LAB_035ed0e0:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  goto LAB_035ed114;
}


