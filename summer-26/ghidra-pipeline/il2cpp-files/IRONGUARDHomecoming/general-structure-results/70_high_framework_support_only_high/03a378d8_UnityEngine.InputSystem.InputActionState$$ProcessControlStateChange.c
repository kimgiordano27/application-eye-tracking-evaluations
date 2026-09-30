/*
FUNCTION_NAME: UnityEngine.InputSystem.InputActionState$$ProcessControlStateChange
ENTRY_POINT: 03a378d8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a37dbc) */
/* WARNING: Removing unreachable block (ram,0x03a37de8) */

void UnityEngine_InputSystem_InputActionState__ProcessControlStateChange(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  
  FUN_03418bf0(param_1,0);
  FUN_03418c10();
  FUN_03418748();
  lVar2 = FUN_03a36f54();
  if (lVar2 != 0) {
    FUN_03a3263c();
    FUN_03418748();
    FUN_03419060();
    lVar2 = FUN_03a36f54();
    if (lVar2 != 0) {
      FUN_03418748();
      FUN_03418c10();
      FUN_03418bf0();
      FUN_03418748();
      lVar2 = FUN_03a36d80();
      FUN_03418bf0();
      FUN_03418748();
      FUN_03418748();
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(lVar2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03a3263c();
      FUN_03418748();
      FUN_03418bf0();
      FUN_03418748();
      FUN_03418748();
      plVar3 = (long *)FUN_03970fb4();
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
        FUN_03419108();
        lVar5 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_03a37ac0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01ecb238(plVar3,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_03a37ac0:
        (*(code *)*puVar4)(plVar3,puVar4[1]);
      }
      FUN_03418bf0();
      FUN_03418748();
      FUN_03418748();
      plVar3 = *(long **)(lVar2 + 0x10);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar3 + 0x188))(plVar3,1,*(undefined8 *)(*plVar3 + 400));
      FUN_03418c10();
      FUN_03418748();
      FUN_03418748();
      plVar3 = *(long **)(lVar2 + 0x18);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar3 + 0x188))(plVar3,1,*(undefined8 *)(*plVar3 + 400));
      FUN_03418748();
      plVar3 = (long *)FUN_03a368a8();
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x328))();
        lVar2 = FUN_03a36468();
        if ((lVar2 != 0) && (plVar3 = *(long **)(lVar2 + 0x10), plVar3 != (long *)0x0)) {
          iVar1 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
          if (0 < iVar1) {
            FUN_03418bf0();
            FUN_03418bf0();
            FUN_03418748();
            lVar2 = FUN_03a38040(lVar2);
            if (lVar2 == 0) goto LAB_03a37dd4;
            uVar6 = FUN_03a3818c();
            while ((uVar6 & 1) != 0) {
              plVar3 = (long *)UnityEngine_InputSystem_InputActionState__GetComplexityFromMonitorIndex
                                         (lVar2);
              FUN_03418bf0();
              FUN_03418748();
              if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (plVar3[2] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              FUN_03a3263c();
              FUN_03418748();
              FUN_03419060();
              if (plVar3[2] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              FUN_03418748();
              FUN_03418748();
              FUN_03418bf0();
              FUN_03418748();
              (**(code **)(*plVar3 + 0x188))(plVar3,1,*(undefined8 *)(*plVar3 + 400));
              FUN_03418748();
              uVar6 = FUN_03a3818c(lVar2);
            }
          }
          FUN_03418bf0();
                    /* WARNING: Could not recover jumptable at 0x03a37db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_x19 + 0x168))();
          return;
        }
      }
    }
  }
LAB_03a37dd4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


