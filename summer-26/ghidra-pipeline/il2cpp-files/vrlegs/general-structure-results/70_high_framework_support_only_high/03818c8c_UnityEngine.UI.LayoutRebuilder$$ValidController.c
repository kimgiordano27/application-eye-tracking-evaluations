/*
FUNCTION_NAME: UnityEngine.UI.LayoutRebuilder$$ValidController
ENTRY_POINT: 03818c8c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_UI_LayoutRebuilder__ValidController
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined4 unaff_s13;
  undefined1 auVar2 [16];
  undefined4 in_stack_000001c0;
  undefined4 uStack00000000000001c4;
  undefined4 in_stack_000001c8;
  undefined4 uStack00000000000001cc;
  
  uVar1 = FUN_038d8768();
  if (unaff_x19 != 0) {
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      FUN_02093028(*(long *)(unaff_x19 + 0x18),&stack0x000001c0,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TryGetValue__
                  );
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TryGetValue__
                  + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar1 = FUN_0381aa60(uVar1);
      if (*(long *)(unaff_x19 + 0x18) != 0) {
        in_stack_000001c0 = (undefined4)uVar1;
        uStack00000000000001c4 = (undefined4)param_2;
        in_stack_000001c8 = (undefined4)param_3;
        uStack00000000000001cc = (undefined4)param_4;
        FUN_02093610(*(long *)(unaff_x19 + 0x18),&stack0x000001c0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TryGetValue__
                    );
        auVar2 = FUN_0381a6f8(uVar1,param_2,param_3,param_4,unaff_s13);
        if (*(int *)(*(long *)PTR_DAT_03cd92a8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_03804b0c(auVar2._0_8_,auVar2._8_8_,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


