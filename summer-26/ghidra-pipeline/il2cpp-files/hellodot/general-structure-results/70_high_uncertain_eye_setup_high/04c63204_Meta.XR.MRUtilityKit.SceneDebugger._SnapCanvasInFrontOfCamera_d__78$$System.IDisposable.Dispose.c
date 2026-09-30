/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger.<SnapCanvasInFrontOfCamera>d__78$$System.IDisposable.Dispose
ENTRY_POINT: 04c63204
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>d__78__System_IDisposable_Dispose
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
  uVar3 = FUN_03c86c80();
  FUN_03427f10(uVar3,*unaff_x21,*unaff_x22);
  Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value();
  if (unaff_x19 != (long *)0x0) {
    (**(code **)(*unaff_x19 + 0x428))();
    puVar2 = PTR_DAT_065e7420;
    puVar1 = PTR_DAT_065e7248;
    in_stack_00000010 = *(ulong *)(unaff_x20 + 0x38);
    if ((in_stack_00000010 & 0xff) != 0) {
      uVar3 = FUN_03c86c80(&stack0x00000010,*(undefined8 *)PTR_DAT_065e7240);
      FUN_03427f10(uVar3,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
      Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value();
      if (unaff_x19 == (long *)0x0) goto LAB_04c63374;
      (**(code **)(*unaff_x19 + 1000))();
    }
    puVar2 = PTR_DAT_065e7428;
    puVar1 = PTR_DAT_065e7250;
    in_stack_00000008 = *(ulong *)(unaff_x20 + 0x40);
    if ((in_stack_00000008 & 0xff) != 0) {
      uVar3 = FUN_03c86c80(&stack0x00000008,*(undefined8 *)PTR_DAT_065e71b8);
      FUN_03427f10(uVar3,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
      Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value();
      if (unaff_x19 == (long *)0x0) goto LAB_04c63374;
      (**(code **)(*unaff_x19 + 0x408))();
    }
    if (*(long *)(unaff_x20 + 0x48) != 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_04c63374;
      (**(code **)(*unaff_x19 + 0x448))();
    }
    return;
  }
LAB_04c63374:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


