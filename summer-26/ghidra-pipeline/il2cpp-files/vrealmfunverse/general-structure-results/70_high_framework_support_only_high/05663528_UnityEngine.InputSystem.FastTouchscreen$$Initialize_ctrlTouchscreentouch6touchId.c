/*
FUNCTION_NAME: UnityEngine.InputSystem.FastTouchscreen$$Initialize_ctrlTouchscreentouch6touchId
ENTRY_POINT: 05663528
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_InputSystem_FastTouchscreen__Initialize_ctrlTouchscreentouch6touchId
               (undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *unaff_x19;
  undefined8 uVar5;
  
  lVar2 = (*(code *)*param_1)();
  if (lVar2 != 0) {
    return;
  }
  uVar3 = thunk_FUN_02ba3594(PTR_DAT_06313048);
  uVar3 = FUN_02b3c908(uVar3,2);
  lVar2 = *unaff_x19;
  FUN_0275e13c(lVar2);
  uVar5 = *(undefined8 *)(lVar2 + 0x28);
  FUN_0275e13c(uVar5);
  plVar4 = (long *)thunk_FUN_02b4c898(uVar5,0);
  FUN_0275e13c();
  uVar5 = (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
  FUN_0275e13c(uVar3);
  FUN_0275a400(uVar3,uVar5);
                    /* try { // try from 05663650 to 05763713 has its CatchHandler @ 05663650
                       catch() { ... } // from try @ 05663650 with catch @ 05663650
                       catch() { ... } // from try @ 0566379c with catch @ 05663650
                       catch() { ... } // from try @ 056637f8 with catch @ 05663650
                       catch() { ... } // from try @ 05663800 with catch @ 05663650
                       catch() { ... } // from try @ 0566380c with catch @ 05663650
                       catch() { ... } // from try @ 05663868 with catch @ 05663650 */
  FUN_0275a434(uVar3,0,uVar5);
  puVar1 = 
  Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__;
  uVar5 = thunk_FUN_02ba3594(
                            Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
                            );
  FUN_0275a400(uVar3,uVar5);
  uVar5 = thunk_FUN_02ba3594(puVar1);
  FUN_0275a434(uVar3,1,uVar5);
  uVar5 = thunk_FUN_02ba3594(
                            Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
                            );
  uVar3 = FUN_04bec334(uVar5,uVar3,0);
  thunk_FUN_02ba3594(PTR_DAT_0631cb60);
  uVar5 = thunk_FUN_02b79644();
  FUN_04d7b3f4(uVar5,uVar3,0);
  uVar3 = thunk_FUN_02ba3594(
                            Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar5,uVar3);
}


