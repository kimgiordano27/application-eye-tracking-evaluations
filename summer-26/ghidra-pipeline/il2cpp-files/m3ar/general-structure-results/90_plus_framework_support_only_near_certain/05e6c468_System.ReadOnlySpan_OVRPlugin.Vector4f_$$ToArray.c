/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.Vector4f>$$ToArray
ENTRY_POINT: 05e6c468
PROGRAM: m3ar-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_ReadOnlySpan<OVRPlugin_Vector4f>__ToArray(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int iVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000008;
  
  if (param_1 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*param_1 + 0x448))(param_1,*(undefined8 *)(*param_1 + 0x450));
    uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
    if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0408f364(*(long *)(PTR_DAT_08f65618 + 0xe0));
    }
    plVar3 = (long *)FUN_074f3c94(uVar10,0);
    if (plVar2 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar2 + 0x2b8))(plVar2,plVar3,*(undefined8 *)(*plVar2 + 0x2c0));
      if ((uVar4 & 1) == 0) {
        if (plVar3 == (long *)0x0) goto LAB_05e6c704;
        uVar4 = (**(code **)(*plVar3 + 0x2b8))(plVar3,plVar2,*(undefined8 *)(*plVar3 + 0x2c0));
        if ((uVar4 & 1) == 0) {
          FUN_07506c0c(0);
        }
      }
      plVar2 = (long *)thunk_FUN_0406ddbc();
      if (plVar2 == (long *)0x0) {
        FUN_07506c0c();
      }
      plVar3 = *(long **)(unaff_x21 + 0x10);
      if (plVar3 != (long *)0x0) {
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0406aaec(lVar6);
        }
        lVar7 = *plVar3;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto System_ReadOnlySpan<OVRPlugin_Vector4f>__GetHashCode;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_0406ae20(plVar3,lVar6,0);
System_ReadOnlySpan<OVRPlugin_Vector4f>__GetHashCode:
        iVar1 = (*(code *)*puVar5)(plVar3,puVar5[1]);
        if (0 < iVar1) {
          iVar9 = 0;
          do {
            plVar3 = *(long **)(unaff_x21 + 0x10);
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0403188c();
            }
            lVar6 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_0406aaec(lVar6);
            }
            lVar7 = *plVar3;
            uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == lVar6) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_05e6c65c;
                }
                uVar4 = uVar4 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_0406ae20(plVar3,lVar6,0);
LAB_05e6c65c:
            in_stack_00000008 = (*(code *)*puVar5)(plVar3,iVar9,puVar5[1]);
            lVar6 = thunk_FUN_0406db0c(*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28),
                                       &stack0x00000008);
            if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0403188c();
            }
            if ((lVar6 != 0) &&
               (lVar7 = thunk_FUN_0406ddbc(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0)) {
              uVar10 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
              FUN_04031750(uVar10,0);
            }
            if (*(uint *)(plVar2 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
              FUN_04031894();
            }
            lVar7 = (long)(int)unaff_w19;
            iVar9 = iVar9 + 1;
            unaff_w19 = unaff_w19 + 1;
            plVar2[lVar7 + 4] = lVar6;
          } while (iVar9 != iVar1);
        }
        return;
      }
    }
  }
LAB_05e6c704:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


