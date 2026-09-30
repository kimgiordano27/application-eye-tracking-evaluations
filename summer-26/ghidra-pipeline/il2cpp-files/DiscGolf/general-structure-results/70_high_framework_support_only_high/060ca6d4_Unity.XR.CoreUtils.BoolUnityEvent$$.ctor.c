/*
FUNCTION_NAME: Unity.XR.CoreUtils.BoolUnityEvent$$.ctor
ENTRY_POINT: 060ca6d4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x060caac4) */

void Unity_XR_CoreUtils_BoolUnityEvent___ctor(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  
  FUN_05362cb4(param_1);
  if (unaff_x19 != 0) {
    FUN_04e935f0();
    if (*(int *)(*(long *)PTR_DAT_069fc218 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_06304ca4(0);
    puVar1 = PTR_DAT_069fb9d8;
    if (unaff_x19 != 0) {
      FUN_04e935f0();
      FUN_04e935f0();
      uVar3 = FUN_02d966a4(*(undefined8 *)puVar1,0);
      lVar4 = FUN_02d966a4(*(undefined8 *)puVar1,2);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) != 0) {
          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_06a0e3f8;
          LeanTween__value((undefined8 *)(lVar4 + 0x20));
          puVar1 = OVRPlugin_OVRP_1_36_0_TypeInfo;
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar4 + 0x28) =
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<UpdateKickedUsersList>d__67>__
            ;
            uVar5 = LeanTween__value();
            uVar5 = FUN_060ca1b0(uVar5,lVar4);
            uVar6 = FUN_0536c9cc(uVar5,0);
            if ((uVar6 & 1) == 0) {
              uVar6 = FUN_04e935f0();
            }
            uVar5 = *(undefined8 *)puVar1;
            uVar3 = FUN_060ca288(uVar6,uVar3);
            uVar6 = FUN_0536c9cc(uVar3,0);
            if ((((uVar6 & 1) == 0) ||
                (uVar6 = thunk_FUN_0536b75c(uVar5,*(undefined8 *)PTR_DAT_069ff540,0),
                (uVar6 & 1) != 0)) ||
               (uVar6 = thunk_FUN_0536b75c(uVar5,*(undefined8 *)
                                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                           ,0), (uVar6 & 1) != 0)) {
              FUN_04e935f0();
            }
            if (unaff_x20 == 0) {
              return;
            }
            plVar9 = *(long **)(unaff_x20 + 0x28);
            if (plVar9 == (long *)0x0) {
              return;
            }
            lVar4 = *plVar9;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar6 != 0) {
              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) ==
                    *(long *)
                     UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_060ca90c;
                }
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)
                     FUN_02dd004c(plVar9,*(long *)
                                          UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo
                                  ,0);
LAB_060ca90c:
            plVar9 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
            puVar2 = UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyGroundPosition_TypeInfo;
            puVar1 = PTR_DAT_069fbff8;
            do {
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar4 = *plVar9;
              uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar6 != 0) {
                piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                    puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                    goto Unity_XR_CoreUtils_Vector3Extensions__Inverse;
                  }
                  uVar6 = uVar6 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar6 != 0);
              }
              puVar7 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)puVar1,0);
Unity_XR_CoreUtils_Vector3Extensions__Inverse:
              uVar6 = (*(code *)*puVar7)(plVar9,puVar7[1]);
              if ((uVar6 & 1) == 0) {
                if (plVar9 == (long *)0x0) {
                  return;
                }
                lVar4 = *plVar9;
                uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar6 == 0) goto LAB_060caa68;
                piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                goto LAB_060caa50;
              }
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar4 = *plVar9;
              uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar6 != 0) {
                piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                    puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_060ca9f4;
                  }
                  uVar6 = uVar6 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar6 != 0);
              }
              puVar7 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)puVar2,0);
LAB_060ca9f4:
              (*(code *)*puVar7)(plVar9,puVar7[1]);
              FUN_04e935dc();
            } while( true );
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar8 = piVar8 + 4;
    if (uVar6 == 0) break;
LAB_060caa50:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_060caa84;
    }
  }
LAB_060caa68:
  puVar7 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)PTR_DAT_069fbff0,0);
LAB_060caa84:
  (*(code *)*puVar7)(plVar9,puVar7[1]);
  return;
}


