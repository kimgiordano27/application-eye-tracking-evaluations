/*
FUNCTION_NAME: UnityEngine.InputSystem.FastTouchscreen$$Initialize_ctrlTouchscreentouch5radiusy
ENTRY_POINT: 05662f94
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_InputSystem_FastTouchscreen__Initialize_ctrlTouchscreentouch5radiusy
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long in_x9;
  int *in_x10;
  long *unaff_x19;
  undefined8 uVar6;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_05663010;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_02b7654c();
LAB_05663010:
  lVar3 = (*(code *)*puVar2)();
  if (lVar3 != 0) {
    return;
  }
  uVar4 = thunk_FUN_02ba3594(PTR_DAT_06313048);
  uVar4 = FUN_02b3c908(uVar4,2);
  lVar3 = *unaff_x19;
  FUN_0275e13c(lVar3);
  uVar6 = *(undefined8 *)(lVar3 + 0x28);
  FUN_0275e13c(uVar6);
  plVar5 = (long *)thunk_FUN_02b4c898(uVar6,0);
  FUN_0275e13c();
  uVar6 = (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
  FUN_0275e13c(uVar4);
  FUN_0275a400(uVar4,uVar6);
  FUN_0275a434(uVar4,0,uVar6);
  puVar1 = 
  Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_MoveNext__
  ;
  uVar6 = thunk_FUN_02ba3594(
                            Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_MoveNext__
                            );
  FUN_0275a400(uVar4,uVar6);
  uVar6 = thunk_FUN_02ba3594(puVar1);
  FUN_0275a434(uVar4,1,uVar6);
  uVar6 = thunk_FUN_02ba3594(
                            Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
                            );
  uVar4 = FUN_04bec334(uVar6,uVar4,0);
  thunk_FUN_02ba3594(PTR_DAT_0631cb60);
  uVar6 = thunk_FUN_02b79644();
  FUN_04d7b3f4(uVar6,uVar4,0);
  uVar4 = thunk_FUN_02ba3594(
                            Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_Dispose__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar6,uVar4);
}


