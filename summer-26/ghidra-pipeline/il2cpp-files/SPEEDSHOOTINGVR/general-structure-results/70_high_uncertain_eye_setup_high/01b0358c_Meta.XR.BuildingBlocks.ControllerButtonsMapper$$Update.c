/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$Update
ENTRY_POINT: 01b0358c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_BuildingBlocks_ControllerButtonsMapper__Update(long param_1,void *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_b0 [72];
  undefined1 auStack_68 [72];
  
  lVar2 = *(long *)(param_1 + 0x10);
                    /* try { // try from 01b035a4 to 01c03607 has its CatchHandler @ 01b036b0 */
  memcpy(auStack_b0,param_2,0x48);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48);
    memcpy(auStack_68,auStack_b0,0x48);
    uVar1 = FUN_013c9ec8(lVar2,auStack_68,uVar3);
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


