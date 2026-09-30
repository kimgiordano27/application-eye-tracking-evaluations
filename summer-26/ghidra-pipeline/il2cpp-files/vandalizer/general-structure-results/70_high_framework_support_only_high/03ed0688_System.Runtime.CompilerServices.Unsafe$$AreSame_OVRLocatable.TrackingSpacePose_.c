/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AreSame<OVRLocatable.TrackingSpacePose>
ENTRY_POINT: 03ed0688
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void System_Runtime_CompilerServices_Unsafe__AreSame<OVRLocatable_TrackingSpacePose>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  long in_x10;
  int *piVar2;
  
  piVar2 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar2 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
      goto System_Runtime_CompilerServices_Unsafe__AreSame<OVRPlugin_Qpl_Annotation>;
    }
    in_x9 = in_x9 + -1;
    piVar2 = piVar2 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_0322c1e8();
System_Runtime_CompilerServices_Unsafe__AreSame<OVRPlugin_Qpl_Annotation>:
                    /* WARNING: Could not recover jumptable at 0x03ed0774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


