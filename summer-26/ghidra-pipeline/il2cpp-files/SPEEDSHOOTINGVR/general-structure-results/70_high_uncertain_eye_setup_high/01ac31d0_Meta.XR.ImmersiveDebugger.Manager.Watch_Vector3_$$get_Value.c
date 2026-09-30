/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_Value
ENTRY_POINT: 01ac31d0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_Value
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  long *unaff_x19;
  undefined1 auVar3 [12];
  
  auVar3._8_4_ = param_4;
  auVar3._0_8_ = param_1;
  lVar2 = unaff_x19[0x81];
  if (lVar2 != 0) {
    auVar3 = (**(code **)(lVar2 + 0x18))
                       (*(undefined8 *)(lVar2 + 0x40),param_1,param_4,*(undefined8 *)(lVar2 + 0x28))
    ;
  }
  *(undefined1 (*) [12])(unaff_x19 + 0x7f) = auVar3;
  uVar1 = FUN_01c42558(unaff_x19[0xb],0);
  if ((uVar1 & 1) == 0) {
    FUN_021afea8();
  }
  FUN_021af868();
  if ((char)unaff_x19[0x83] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x01ac3244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x888))();
    return;
  }
  return;
}


