/*
FUNCTION_NAME: (*il2cpp_codegen_resolve_pinvoke<int(*)(int,int,EyeGazesStateInternal_tBF79AEE2A05EA3315FA4B97D5C758FA977BD39BF*),10ul,22ul>(char_const(&)[10ul],char_const(&)[22ul],Il2CppCallConvention,Il2CppCharSet,int,bool))
ENTRY_POINT: 01802b14
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_5;ui_or_gameplay_sink_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* int (*il2cpp_codegen_resolve_pinvoke<int (*)(int, int,
   EyeGazesStateInternal_tBF79AEE2A05EA3315FA4B97D5C758FA977BD39BF*), 10ul, 22ul>(char const (&)
   [10ul], char const (&) [22ul], Il2CppCallConvention, Il2CppCharSet, int, bool))(int, int,
   EyeGazesStateInternal_tBF79AEE2A05EA3315FA4B97D5C758FA977BD39BF*) */

int __il2cpp_codegen_resolve_pinvoke<int(*)(int,int,EyeGazesStateInternal_tBF79AEE2A05EA3315FA4B97D5C758FA977BD39BF*),10ul,22ul>_char_const____10ul__char_const____22ul__Il2CppCallConvention_Il2CppCharSet_int_bool__
              (int param_1,int param_2,
              EyeGazesStateInternal_tBF79AEE2A05EA3315FA4B97D5C758FA977BD39BF *param_3)

{
  int iVar1;
  undefined4 in_w3;
  undefined4 in_w4;
  byte in_w5;
  StringView<char> aSStack_60 [16];
  StringView<char> aSStack_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  byte local_34;
  byte local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  char *local_18;
  
  local_24 = SUB84(param_3,0);
  local_20 = (char *)(ulong)(uint)param_2;
  local_18 = (char *)(ulong)(uint)param_1;
  local_2d = in_w5 & 1;
  local_2c = in_w4;
  local_28 = in_w3;
  il2cpp::utils::StringView<char>::StringView(aSStack_60,local_18);
  il2cpp::utils::StringView<char>::StringView(aSStack_50,local_20);
  local_40 = local_24;
  local_3c = local_28;
  local_38 = local_2c;
  local_34 = local_2d & 1;
  iVar1 = il2cpp_codegen_resolve((PInvokeArguments *)aSStack_60);
  return iVar1;
}


