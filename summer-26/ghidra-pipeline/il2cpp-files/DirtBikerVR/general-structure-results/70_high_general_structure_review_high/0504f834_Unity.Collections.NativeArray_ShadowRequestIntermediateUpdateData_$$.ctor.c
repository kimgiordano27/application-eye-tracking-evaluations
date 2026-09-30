/*
FUNCTION_NAME: Unity.Collections.NativeArray<ShadowRequestIntermediateUpdateData>$$.ctor
ENTRY_POINT: 0504f834
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x0504fc78) */
/* WARNING: Removing unreachable block (ram,0x0504fcc0) */

void Unity_Collections_NativeArray<ShadowRequestIntermediateUpdateData>___ctor(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 in_w8;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined1 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  long *plStack0000000000000058;
  
  *(undefined1 *)(unaff_x23 + 0xa06) = in_w8;
  plStack0000000000000058 = (long *)0x0;
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_06762bd8(6,0);
  }
  if (*(uint *)(unaff_x19 + 3) < unaff_w21) {
    FUN_0677218c(0);
  }
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    FUN_03ac4090(lVar6);
  }
  plVar4 = (long *)thunk_FUN_03ac73c0();
  if (plVar4 == (long *)0x0) {
    if ((int)unaff_w21 < (int)unaff_x19[3]) {
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03ac4090(lVar6);
      }
      lVar7 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0504fab4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03ac43c4();
LAB_0504fab4:
      plVar4 = (long *)(*(code *)*puVar5)();
      puVar2 = PTR_DAT_08488568;
      in_stack_00000028 = (undefined1 *)&stack0x00000058;
      in_stack_00000020 = 0;
      do {
        plStack0000000000000058 = plVar4;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar6 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0504fb28;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0);
LAB_0504fb28:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        plVar4 = plStack0000000000000058;
        if ((uVar9 & 1) == 0) {
          if (plStack0000000000000058 == (long *)0x0) goto LAB_0504fc94;
          lVar6 = *plStack0000000000000058;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 == 0) goto LAB_0504fc44;
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_0504fc2c;
        }
        if (plStack0000000000000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03ac4090(lVar6);
        }
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0504fbac;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,lVar6,0);
LAB_0504fbac:
        (*(code *)*puVar5)(&stack0x00000000 + 4,plVar4,puVar5[1]);
        uStack0000000000000038 = in_stack_00000000._12_4_;
        in_stack_00000030 = in_stack_00000000._4_8_;
        uStack0000000000000044 = in_stack_00000018;
        uStack000000000000003c = uStack0000000000000010;
        uStack0000000000000040 = uStack0000000000000014;
        FUN_0504f578();
        plVar4 = plStack0000000000000058;
      } while( true );
    }
    FUN_05050498();
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03ac4090(lVar6);
    }
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0504f970;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,lVar6,0);
LAB_0504f970:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (0 < iVar3) {
      FUN_0504ec4c();
      iVar1 = (int)unaff_x19[3] - unaff_w21;
      if (iVar1 != 0 && (int)unaff_w21 <= (int)unaff_x19[3]) {
        FUN_06773c1c(unaff_x19[2],unaff_w21,unaff_x19[2],iVar3 + unaff_w21,iVar1,0);
      }
      lVar6 = unaff_x19[2];
      if (plVar4 == unaff_x19) {
        FUN_06773c1c(lVar6,0,lVar6,unaff_w21,unaff_w21,0);
        FUN_06773c1c(unaff_x19[2],iVar3 + unaff_w21,unaff_x19[2],unaff_w21 << 1,
                     (int)unaff_x19[3] - unaff_w21,0);
      }
      else {
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03ac4090(lVar7);
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_0504fa84;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,lVar7,5);
LAB_0504fa84:
        (*(code *)*puVar5)(plVar4,lVar6,unaff_w21,puVar5[1]);
      }
      *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + iVar3;
    }
  }
LAB_0504fc94:
  *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
  return;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0504fc2c:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08488550) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0504fc60;
    }
  }
LAB_0504fc44:
  puVar5 = (undefined8 *)FUN_03ac43c4(plStack0000000000000058,*(long *)PTR_DAT_08488550,0);
LAB_0504fc60:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  goto LAB_0504fc94;
}


