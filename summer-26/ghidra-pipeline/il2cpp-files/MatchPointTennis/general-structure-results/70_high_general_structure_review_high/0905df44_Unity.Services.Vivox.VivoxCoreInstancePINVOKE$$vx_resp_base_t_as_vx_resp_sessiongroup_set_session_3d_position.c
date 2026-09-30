/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_base_t_as_vx_resp_sessiongroup_set_session_3d_position
ENTRY_POINT: 0905df44
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0905e3dc) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_sessiongroup_set_session_3d_position
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  
  uVar3 = FUN_078b4450();
  if ((uVar3 & 1) == 0) {
    lVar7 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x23) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0905df98;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac();
LAB_0905df98:
    uVar5 = (*(code *)*puVar4)();
    FUN_078a7764(*(undefined8 *)PTR_DAT_09f22d90,uVar5,0);
    if (unaff_x19 == 0) goto LAB_0905e3d0;
    FUN_0744298c();
  }
  if (*(int *)(*(long *)PTR_DAT_09f1e6b8 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_094bc3a0(0);
  puVar1 = PTR_DAT_09f1e5f0;
  if (unaff_x19 != 0) {
    FUN_0744298c();
    FUN_0744298c();
    uVar5 = FUN_04447c90(*(undefined8 *)puVar1,0);
    lVar7 = FUN_04447c90(*(undefined8 *)puVar1,2);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) != 0) {
        *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_09f20e28;
        thunk_FUN_044bb4b4((undefined8 *)(lVar7 + 0x20));
        puVar1 = PTR_DAT_09f20d70;
        if (1 < *(uint *)(lVar7 + 0x18)) {
          *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)PTR_DAT_09fb9e28;
          uVar6 = thunk_FUN_044bb4b4();
          uVar6 = FUN_0905ad54(uVar6,lVar7);
          uVar3 = FUN_078b4450(uVar6,0);
          if ((uVar3 & 1) == 0) {
            uVar3 = FUN_0744298c();
          }
          uVar6 = *(undefined8 *)puVar1;
          uVar5 = FUN_0905ae2c(uVar3,uVar5);
          uVar3 = FUN_078b4450(uVar5,0);
          if ((((uVar3 & 1) == 0) ||
              (uVar3 = thunk_FUN_078b3114(uVar6,*(undefined8 *)PTR_DAT_09f20c90,0), (uVar3 & 1) != 0
              )) || (uVar3 = thunk_FUN_078b3114(uVar6,*(undefined8 *)PTR_DAT_09f22ec0,0),
                    (uVar3 & 1) != 0)) {
            FUN_0744298c();
          }
          uVar3 = FUN_078b4450(*(undefined8 *)(unaff_x21 + 0x10),0);
          if ((uVar3 & 1) == 0) {
            FUN_0744298c();
          }
          uVar3 = FUN_078b4450(*(undefined8 *)(unaff_x21 + 0x18),0);
          if ((uVar3 & 1) == 0) {
            FUN_0744298c();
          }
          if (unaff_x20 == 0) {
            return;
          }
          plVar9 = *(long **)(unaff_x20 + 0x28);
          if (plVar9 == (long *)0x0) {
            return;
          }
          lVar7 = *plVar9;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f2bbb0) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0905e248;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_044822ac(plVar9,*(long *)PTR_DAT_09f2bbb0,0);
LAB_0905e248:
          plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
          puVar2 = PTR_DAT_09f2bbb8;
          puVar1 = PTR_DAT_09f1f018;
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          do {
            lVar7 = *plVar9;
            uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar3 != 0) {
              piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                  puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_0905e2c0;
                }
                uVar3 = uVar3 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined8 *)FUN_044822ac(plVar9,*(long *)puVar1,0);
LAB_0905e2c0:
            uVar3 = (*(code *)*puVar4)(plVar9,puVar4[1]);
            if ((uVar3 & 1) == 0) goto LAB_0905e348;
            lVar7 = *plVar9;
            uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar3 != 0) {
              piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_0905e31c;
                }
                uVar3 = uVar3 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined8 *)FUN_044822ac(plVar9,*(long *)puVar2,0);
LAB_0905e31c:
            (*(code *)*puVar4)(plVar9,puVar4[1]);
            FUN_07442978();
          } while( true );
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
  }
LAB_0905e3d0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_0905e348:
  if (plVar9 != (long *)0x0) {
    lVar7 = *plVar9;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0905e3a4;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar9,*(long *)PTR_DAT_09f1f008,0);
LAB_0905e3a4:
    (*(code *)*puVar4)(plVar9,puVar4[1]);
  }
  return;
}


