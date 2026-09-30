/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 0419f658
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0419faac) */
/* WARNING: Removing unreachable block (ram,0x0419faf8) */

void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe
               (ulong param_1,long *param_2)

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
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  undefined1 auVar11 [16];
  
  if ((param_1 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(PTR_DAT_069fbff8);
    *(undefined1 *)(unaff_x23 + 0x734) = 1;
  }
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_054fa008(6,0);
  }
  if (*(uint *)(param_2 + 3) < unaff_w21) {
    FUN_055097d4(0);
  }
                    /* try { // try from 0419f6a8 to 0429f6ef has its CatchHandler @ 0419f6a8
                       catch() { ... } // from try @ 0419f6a8 with catch @ 0419f6a8
                       catch() { ... } // from try @ 0419f7a8 with catch @ 0419f6a8
                       catch() { ... } // from try @ 0419f7d8 with catch @ 0419f6a8
                       catch() { ... } // from try @ 0419f84c with catch @ 0419f6a8 */
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    FUN_02dcfd18(lVar6);
  }
  plVar4 = (long *)thunk_FUN_02dd3048();
  if (plVar4 == (long *)0x0) {
    if ((int)unaff_w21 < (int)param_2[3]) {
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02dcfd18(lVar6);
      }
      lVar7 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0419f8fc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_02dd004c();
LAB_0419f8fc:
      plVar4 = (long *)(*(code *)*puVar5)();
      puVar2 = PTR_DAT_069fbff8;
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar6 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0419f970;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)puVar2,0);
LAB_0419f970:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_0419fac8;
          lVar6 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 == 0) goto LAB_0419fa78;
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_0419fa60;
        }
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02dcfd18(lVar6);
        }
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0419f9f4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02dd004c(plVar4,lVar6,0);
LAB_0419f9f4:
        auVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        FUN_0419f3ec(param_2,unaff_w21,auVar11._0_8_,auVar11._8_8_,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x150));
        unaff_w21 = unaff_w21 + 1;
      } while( true );
    }
    FUN_041a02a0(param_2);
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
                    /* try { // try from 0419f6f0 to 0429f7a7 has its CatchHandler @ 0419f7a8 */
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02dcfd18(lVar6);
    }
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0419f7b8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02dd004c(plVar4,lVar6,0);
LAB_0419f7b8:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (0 < iVar3) {
      FUN_0419ed24(param_2,(int)param_2[3] + iVar3,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78));
      iVar1 = (int)param_2[3] - unaff_w21;
      if (iVar1 != 0 && (int)unaff_w21 <= (int)param_2[3]) {
        FUN_0550b264(param_2[2],unaff_w21,param_2[2],iVar3 + unaff_w21,iVar1,0);
      }
      lVar6 = param_2[2];
      if (plVar4 == param_2) {
        FUN_0550b264(lVar6,0,lVar6,unaff_w21,unaff_w21,0);
        FUN_0550b264(param_2[2],iVar3 + unaff_w21,param_2[2],unaff_w21 << 1,
                     (int)param_2[3] - unaff_w21,0);
      }
      else {
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02dcfd18(lVar7);
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_0419f8cc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02dd004c(plVar4,lVar7,5);
LAB_0419f8cc:
        (*(code *)*puVar5)(plVar4,lVar6,unaff_w21,puVar5[1]);
      }
      *(int *)(param_2 + 3) = (int)param_2[3] + iVar3;
    }
  }
LAB_0419fac8:
  *(int *)((long)param_2 + 0x1c) = *(int *)((long)param_2 + 0x1c) + 1;
  return;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0419fa60:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0419fa94;
    }
  }
LAB_0419fa78:
  puVar5 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)PTR_DAT_069fbff0,0);
LAB_0419fa94:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  goto LAB_0419fac8;
}


