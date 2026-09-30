/*
FUNCTION_NAME: Unity.Services.Multiplayer.SessionManager.<OnRemovedFromSession>d__32$$SetStateMachine
ENTRY_POINT: 05f76238
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: pose_vector;ui_interaction;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


uint Unity_Services_Multiplayer_SessionManager_<OnRemovedFromSession>d__32__SetStateMachine(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  
  puVar1 = 
  Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SliderDirection>_set_defaultValue__;
  lVar3 = *(long *)
           Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SliderDirection>_set_defaultValue__
  ;
  if (*unaff_x19 == lVar3) {
    uStack0000000000000038 = unaff_x20[1];
    uStack0000000000000030 = *unaff_x20;
    uStack0000000000000048 = unaff_x20[3];
    uStack0000000000000040 = unaff_x20[2];
    uStack0000000000000058 = unaff_x20[5];
    uStack0000000000000050 = unaff_x20[4];
    lVar4 = lVar3;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar3 = *unaff_x19;
      lVar4 = *(long *)puVar1;
    }
    if (*(long *)(lVar3 + 0x40) != *(long *)(lVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0();
    }
    thunk_FUN_02dd328c();
    uVar2 = FUN_05f760b8(&stack0x00000030);
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 1;
}


