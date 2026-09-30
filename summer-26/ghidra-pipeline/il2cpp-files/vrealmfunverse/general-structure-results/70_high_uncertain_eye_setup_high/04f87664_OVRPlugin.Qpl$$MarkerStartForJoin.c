/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerStartForJoin
ENTRY_POINT: 04f87664
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerStartForJoin(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar6;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  FUN_049b830c(param_2,param_3,*param_1);
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8) = unaff_x20;
  thunk_FUN_02bb0e9c();
  *(undefined8 *)(unaff_x19 + 0x48) = unaff_x20;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x48));
  uVar2 = *unaff_x25;
  *(undefined8 *)(unaff_x19 + 0x50) = 0xffffffffffffffff;
  uVar1 = FUN_05c220a0(uVar2,0);
  uVar2 = *unaff_x24;
  *(undefined4 *)(unaff_x19 + 0x58) = uVar1;
  uVar1 = FUN_05c220a0(uVar2,0);
  uVar2 = *unaff_x23;
  *(undefined4 *)(unaff_x19 + 0x5c) = uVar1;
  uVar1 = FUN_05c220a0(uVar2,0);
  lVar4 = *unaff_x22;
  *(undefined4 *)(unaff_x19 + 0x60) = uVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar4);
    lVar4 = *unaff_x22;
  }
  puVar5 = *(undefined8 **)(lVar4 + 0xb8);
  lVar6 = puVar5[2];
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar4);
      puVar5 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar2 = *puVar5;
    lVar6 = thunk_FUN_02b79644(*(undefined8 *)UnityEngine_Timeline_PlayableTrack_var);
    FUN_049b830c(lVar6,uVar2,
                 *(undefined8 *)System_Func<InteractionGroupUnregisteredEventArgs>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar3 = lVar6;
    thunk_FUN_02bb0e9c(plVar3,lVar6);
  }
  *(long *)(unaff_x19 + 0x88) = lVar6;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x88),lVar6);
  thunk_FUN_05c88cb0();
  return;
}


