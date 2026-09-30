/*
FUNCTION_NAME: TinyJSON.Encoder$$AppendCloseBracket
ENTRY_POINT: 01fd0d90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2
*/


undefined8
TinyJSON_Encoder__AppendCloseBracket
          (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long *param_5,
          undefined8 param_6)

{
  ulong uVar1;
  short *psVar2;
  undefined8 *unaff_x24;
  undefined8 uVar3;
  long *unaff_x25;
  long unaff_x26;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    *(undefined1 *)(unaff_x26 + 0x70c) = 1;
  }
  uVar3 = *unaff_x24;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_01780344(uVar3,0);
  uVar1 = FUN_01789ac0(param_6,uVar3,0);
  if ((((param_5 != (long *)0x0) && ((uVar1 & 1) != 0)) &&
      (*param_5 == *(long *)Newtonsoft_Json_JsonReader_State_TypeInfo)) &&
     (psVar2 = (short *)thunk_FUN_00d624a0(param_5), *psVar2 == 0)) {
    return *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
  }
  uVar3 = FUN_01ff79f8(param_2,param_3,param_4,param_5,param_6,0);
  return uVar3;
}


