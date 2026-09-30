/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$UpdatePillPosition
ENTRY_POINT: 01b2d37c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 134
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__UpdatePillPosition
               (long param_1,undefined4 *param_2,ulong param_3,undefined4 param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0103c244(param_1);
  }
  plVar2 = (long *)FUN_0133a3c0(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x198))
                      (plVar2,*param_2,param_3 & 0xffffffff,*(undefined8 *)(*plVar2 + 0x1a0));
    if (iVar1 != 0) {
      return;
    }
    lVar3 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    plVar2 = (long *)FUN_013473e8(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x90));
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01b2d418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x198))
                (param_2[1],param_2[2],(int)(param_3 >> 0x20),param_4,plVar2,
                 *(undefined8 *)(*plVar2 + 0x1a0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


