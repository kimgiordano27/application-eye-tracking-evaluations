/*
FUNCTION_NAME: Unity.Services.Wire.Protocol.Internal.Command$$.ctor
ENTRY_POINT: 0602108c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0602151c) */

void Unity_Services_Wire_Protocol_Internal_Command___ctor(code *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  
  uVar3 = (*param_1)();
  FUN_05362cb4(*(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__28>__
               ,uVar3,0);
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
      FUN_02d966a4(*(undefined8 *)puVar1,0);
      lVar4 = FUN_02d966a4(*(undefined8 *)puVar1,5);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) != 0) {
          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_06a0e3f8;
          LeanTween__value((undefined8 *)(lVar4 + 0x20));
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar4 + 0x28) =
                 *(undefined8 *)Method_System_Threading_CancellationToken_Register__;
            LeanTween__value((undefined8 *)(lVar4 + 0x28));
            if (2 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x30) =
                   *(undefined8 *)Method_System_Threading_CancellationToken_Register__;
              LeanTween__value((undefined8 *)(lVar4 + 0x30));
              if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
                *(undefined8 *)(lVar4 + 0x38) =
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_Start<HttpClient_<>c__DisplayClass4_0_<<CreateHttpClientResponse>b__0>d>__
                ;
                LeanTween__value((undefined8 *)(lVar4 + 0x38));
                puVar1 = OVRPlugin_OVRP_1_36_0_TypeInfo;
                if (4 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + 0x40) =
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<UpdateKickedUsersList>d__67>__
                  ;
                  LeanTween__value();
                  uVar3 = FUN_0601f9e0();
                  uVar5 = FUN_0536c9cc(uVar3,0);
                  if ((uVar5 & 1) == 0) {
                    FUN_04e935f0();
                  }
                  uVar9 = *(undefined8 *)puVar1;
                  uVar3 = FUN_0601fab8();
                  uVar5 = FUN_0536c9cc(uVar3,0);
                  if ((((uVar5 & 1) == 0) ||
                      (uVar5 = thunk_FUN_0536b75c(uVar9,*(undefined8 *)PTR_DAT_069ff540,0),
                      (uVar5 & 1) != 0)) ||
                     (uVar5 = thunk_FUN_0536b75c(uVar9,*(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                                 ,0), (uVar5 & 1) != 0)) {
                    FUN_04e935f0();
                  }
                  if (unaff_x20 == 0) {
                    return;
                  }
                  plVar8 = *(long **)(unaff_x20 + 0x28);
                  if (plVar8 == (long *)0x0) {
                    return;
                  }
                  lVar4 = *plVar8;
                  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                  if (uVar5 != 0) {
                    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) ==
                          *(long *)
                           UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo)
                      {
                        puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                        goto LAB_06021364;
                      }
                      uVar5 = uVar5 - 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar5 != 0);
                  }
                  puVar6 = (undefined8 *)
                           FUN_02dd004c(plVar8,*(long *)
                                                UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo
                                        ,0);
LAB_06021364:
                  plVar8 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
                  puVar2 = 
                  UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyGroundPosition_TypeInfo;
                  puVar1 = PTR_DAT_069fbff8;
                  do {
                    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    lVar4 = *plVar8;
                    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    if (uVar5 != 0) {
                      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                          puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                          goto LAB_060213e8;
                        }
                        uVar5 = uVar5 - 1;
                        piVar7 = piVar7 + 4;
                      } while (uVar5 != 0);
                    }
                    puVar6 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)puVar1,0);
LAB_060213e8:
                    uVar5 = (*(code *)*puVar6)(plVar8,puVar6[1]);
                    if ((uVar5 & 1) == 0) {
                      if (plVar8 == (long *)0x0) {
                        return;
                      }
                      lVar4 = *plVar8;
                      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                      if (uVar5 == 0) goto LAB_060214c0;
                      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                      goto LAB_060214a8;
                    }
                    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    lVar4 = *plVar8;
                    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    if (uVar5 != 0) {
                      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                          puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                          goto LAB_0602144c;
                        }
                        uVar5 = uVar5 - 1;
                        piVar7 = piVar7 + 4;
                      } while (uVar5 != 0);
                    }
                    puVar6 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)puVar2,0);
LAB_0602144c:
                    (*(code *)*puVar6)(plVar8,puVar6[1]);
                    FUN_04e935dc();
                  } while( true );
                }
              }
            }
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
    uVar5 = uVar5 - 1;
    piVar7 = piVar7 + 4;
    if (uVar5 == 0) break;
LAB_060214a8:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_060214dc;
    }
  }
LAB_060214c0:
  puVar6 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)PTR_DAT_069fbff0,0);
LAB_060214dc:
  (*(code *)*puVar6)(plVar8,puVar6[1]);
  return;
}


