/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 057a9458
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24__System_Collections_IEnumerator_Reset
               (undefined8 param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x19;
  long unaff_x21;
  
  thunk_FUN_03048534();
  cVar1 = *(char *)(unaff_x21 + 0x52);
  *(long *)(unaff_x19 + 0x40) = unaff_x19;
  uVar2 = FUN_02fe9358();
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\x04') {
      if (param_2 == 0) {
        uVar3 = thunk_FUN_03022100(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar3,0);
      }
      goto LAB_057a94a4;
    }
    pcVar4 = FUN_02c667a8;
  }
  else {
    if (cVar1 != '\x05') {
LAB_057a94a4:
      *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
      goto LAB_057a94b4;
    }
    pcVar4 = FUN_02c667c8;
  }
  *(code **)(unaff_x19 + 0x18) = pcVar4;
LAB_057a94b4:
  *(code **)(unaff_x19 + 0x38) = FUN_02c66730;
  return;
}


