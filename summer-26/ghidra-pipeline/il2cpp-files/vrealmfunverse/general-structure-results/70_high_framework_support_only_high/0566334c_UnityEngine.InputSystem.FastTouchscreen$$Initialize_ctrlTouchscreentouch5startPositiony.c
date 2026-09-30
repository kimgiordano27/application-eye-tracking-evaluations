/*
FUNCTION_NAME: UnityEngine.InputSystem.FastTouchscreen$$Initialize_ctrlTouchscreentouch5startPositiony
ENTRY_POINT: 0566334c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_InputSystem_FastTouchscreen__Initialize_ctrlTouchscreentouch5startPositiony
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long *unaff_x19;
  long lVar4;
  undefined8 uVar5;
  
  uVar2 = thunk_FUN_02ba3594(*(undefined8 *)(param_1 + 0x48));
  uVar2 = FUN_02b3c908(uVar2,2);
  lVar4 = *unaff_x19;
  FUN_0275e13c(lVar4);
  uVar5 = *(undefined8 *)(lVar4 + 0x28);
  FUN_0275e13c(uVar5);
  plVar3 = (long *)thunk_FUN_02b4c898(uVar5,0);
  FUN_0275e13c();
  uVar5 = (**(code **)(*plVar3 + 0x2d8))(plVar3,*(undefined8 *)(*plVar3 + 0x2e0));
  FUN_0275e13c(uVar2);
  FUN_0275a400(uVar2,uVar5);
  FUN_0275a434(uVar2,0,uVar5);
  puVar1 = Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_MoveNext__;
  uVar5 = thunk_FUN_02ba3594(
                            Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_MoveNext__
                            );
  FUN_0275a400(uVar2,uVar5);
  uVar5 = thunk_FUN_02ba3594(puVar1);
  FUN_0275a434(uVar2,1,uVar5);
  uVar5 = thunk_FUN_02ba3594(
                            Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
                            );
  uVar2 = FUN_04bec334(uVar5,uVar2,0);
  thunk_FUN_02ba3594(PTR_DAT_0631cb60);
  uVar5 = thunk_FUN_02b79644();
  FUN_04d7b3f4(uVar5,uVar2,0);
  uVar2 = thunk_FUN_02ba3594(
                            Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar5,uVar2);
}


