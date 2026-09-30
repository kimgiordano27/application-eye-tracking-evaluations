/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JToken$$op_Explicit
ENTRY_POINT: 017b5e04
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


void Newtonsoft_Json_Linq_JToken__op_Explicit(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x23;
  undefined8 uVar3;
  long *unaff_x24;
  long unaff_x25;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo);
  thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  thunk_FUN_00d48444(StringLiteral_13970);
  thunk_FUN_00d48444(PTR_DAT_033eecd8);
  thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_79__);
  thunk_FUN_00d48444(StringLiteral_8407);
  *(undefined1 *)(unaff_x25 + 0xff5) = 1;
  uVar3 = *unaff_x23;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01780344(uVar3,0);
  puVar1 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  if (unaff_x19 == 0) {
LAB_017b5f48:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0166bb38();
  FUN_01780344(*(undefined8 *)puVar1,0);
  FUN_01682ab8();
  FUN_01677d98();
  uVar2 = FUN_016b4204();
  if ((uVar2 & 1) == 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_017b5f48;
    (**(code **)(*unaff_x20 + 0x1c8))();
  }
  FUN_0166bc70();
  return;
}


