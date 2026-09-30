/*
FUNCTION_NAME: ParameterEnumerator__ctor_m4EF426FC2AE59260C2BF70EA6D63FF75AA287FAD
ENTRY_POINT: 037335c8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 184
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_6
*/


void ParameterEnumerator__ctor_m4EF426FC2AE59260C2BF70EA6D63FF75AA287FAD
               (void **param_1,void *param_2,void *param_3,undefined4 param_4,undefined8 param_5)

{
  undefined *puVar1;
  byte bVar2;
  undefined1 auStack_2b0 [88];
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [111];
  byte local_1d9;
  Type_t *local_1d8;
  undefined8 local_1d0;
  Il2CppObject *local_1c8;
  undefined8 local_1c0;
  byte local_1b1;
  void *local_1b0;
  byte local_1a1;
  Type_t *local_1a0;
  undefined8 local_198;
  Il2CppObject *local_190;
  undefined8 local_188;
  byte local_179;
  void *local_178;
  byte local_169;
  Type_t *local_168;
  undefined8 local_160;
  Il2CppObject *local_158;
  undefined8 local_150;
  byte local_141;
  void *local_140;
  void *local_138;
  undefined4 local_12c;
  void *local_128;
  undefined1 auStack_120 [8];
  void *local_118;
  void *local_a8;
  void **local_a0;
  uint local_94;
  void **local_90;
  void **local_88;
  void **local_80;
  uint local_74;
  void **local_70;
  void **local_68;
  void **local_60;
  uint local_54;
  void **local_50;
  void **local_48;
  undefined8 local_40;
  undefined4 local_34;
  void *local_30;
  void **local_28;
  
                    /* try { // try from 037335c8 to 038335cb has its CatchHandler @ 03733610 */
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__;
                    /* try { // try from 037335cc to 03833607 has its CatchHandler @ 0373330c */
                    /* catch() { ... } // from try @ 037335c0 with catch @ 037335f8 */
  local_40 = param_5;
  local_34 = param_4;
  local_30 = param_2;
  local_28 = param_1;
  if ((ParameterEnumerator__ctor_m4EF426FC2AE59260C2BF70EA6D63FF75AA287FAD::
       s_Il2CppMethodInitialized & 1) == 0) {
                    /* try { // try from 03733608 to 03833627 has its CatchHandler @ 03733648 */
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__);
                    /* catch() { ... } // from try @ 037335c8 with catch @ 03733610 */
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Collections_NativeArray<ShaderInput_LightData>_Dispose__);
                    /* try { // try from 03733628 to 0383364b has its CatchHandler @ 0373330c */
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    ParameterEnumerator__ctor_m4EF426FC2AE59260C2BF70EA6D63FF75AA287FAD::s_Il2CppMethodInitialized =
         1;
  }
  local_48 = (void **)0x0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03733608 with catch @ 03733648
                        */
  local_50 = (void **)0x0;
  local_54 = 0;
  local_60 = (void **)0x0;
  local_68 = (void **)0x0;
  local_70 = (void **)0x0;
  local_74 = 0;
  local_80 = (void **)0x0;
  local_88 = (void **)0x0;
  local_90 = (void **)0x0;
  local_94 = 0;
  local_a0 = (void **)0x0;
  il2cpp_codegen_initobj(local_28,0xa8);
  local_a8 = local_30;
  *local_28 = local_30;
  Il2CppCodeGenWriteBarrier(local_28,local_30);
  memcpy(auStack_120,param_3,0x78);
  local_128 = local_118;
  local_28[0x11] = local_118;
  Il2CppCodeGenWriteBarrier(local_28 + 0x11,local_118);
  local_12c = local_34;
  *(undefined4 *)(local_28 + 1) = local_34;
  local_138 = (void *)ParameterOverride_get_objectType_m34B44DCE8665DF01D783046D17ABD166AF228D8E
                                (param_3,0);
  local_28[0x10] = local_138;
  Il2CppCodeGenWriteBarrier(local_28 + 0x10,local_138);
  local_140 = local_28[0x10];
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_141 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(local_140,0);
  local_141 = local_141 & 1;
  if (local_141 == 0) {
    local_50 = local_28;
    local_150 = *(undefined8 *)
                 Method_Unity_Collections_NativeArray<ProbeBrickIndex_Brick>_GetSubArray__;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_160 = local_150;
    local_158 = (Il2CppObject *)
                Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(local_150,0);
    local_168 = local_28[0x10];
    NullCheck(local_158);
    local_169 = VirtualFuncInvoker1<bool,Type_t*>::Invoke(0x18,local_158,local_168);
    local_169 = local_169 & 1;
    local_54 = (uint)local_169;
    local_60 = local_50;
  }
  else {
    local_48 = local_28;
    local_54 = 1;
    local_60 = local_28;
  }
  *(bool *)((long)local_60 + 0x92) = local_54 != 0;
  local_178 = local_28[0x10];
                    /* try { // try from 03733824 to 038338d3 has its CatchHandler @ 03733824
                       catch() { ... } // from try @ 03733824 with catch @ 03733824
                       catch() { ... } // from try @ 03733a38 with catch @ 03733824
                       catch() { ... } // from try @ 03733ae4 with catch @ 03733824
                       catch() { ... } // from try @ 03733b10 with catch @ 03733824
                       catch() { ... } // from try @ 03733b74 with catch @ 03733824 */
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar2 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(local_178,0);
  local_179 = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    local_70 = local_28;
    local_188 = *(undefined8 *)Method_Unity_Collections_NativeArray<ShaderInput_LightData>_Dispose__
    ;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_198 = local_188;
    local_190 = (Il2CppObject *)
                Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(local_188,0);
    local_1a0 = local_28[0x10];
    NullCheck(local_190);
    local_1a1 = VirtualFuncInvoker1<bool,Type_t*>::Invoke(0x18,local_190,local_1a0);
    local_1a1 = local_1a1 & 1;
    local_74 = (uint)local_1a1;
                    /* try { // try from 037338d4 to 0383390f has its CatchHandler @ 03733a54 */
    local_80 = local_70;
  }
  else {
    local_68 = local_28;
    local_74 = 1;
    local_80 = local_28;
  }
  *(bool *)((long)local_80 + 0x91) = local_74 != 0;
  local_1b0 = local_28[0x10];
                    /* try { // try from 0373391c to 03833a37 has its CatchHandler @ 03733a64 */
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar2 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(local_1b0,0);
  local_1b1 = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    local_90 = local_28;
    local_1c0 = *(undefined8 *)
                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_1d0 = local_1c0;
    local_1c8 = (Il2CppObject *)
                Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(local_1c0,0);
    local_1d8 = local_28[0x10];
    NullCheck(local_1c8);
    local_1d9 = VirtualFuncInvoker1<bool,Type_t*>::Invoke(0x18,local_1c8,local_1d8);
    local_1d9 = local_1d9 & 1;
    local_94 = (uint)local_1d9;
    local_a0 = local_90;
  }
  else {
    local_88 = local_28;
    local_94 = 1;
    local_a0 = local_28;
  }
  *(bool *)(local_a0 + 0x12) = local_94 != 0;
  memcpy(auStack_258,param_3,0x78);
  memcpy(auStack_2b0,auStack_248,0x58);
                    /* try { // try from 03733a38 to 03833a8f has its CatchHandler @ 03733824 */
  memcpy(local_28 + 5,auStack_2b0,0x58);
                    /* catch(type#1 @ 0474a728) { ... } // from try @ 037338d4 with catch @ 03733a54
                       catch(type#1 @ 0474a728) { ... } // from try @ 03733aa0 with catch @ 03733a54
                        */
  Il2CppCodeGenWriteBarrier(local_28 + 5,(void *)0x0);
  ParameterEnumerator_Reset_m880D25C0A69D36C7B4BFD5A2566295FFDB36ED15(local_28,0);
                    /* catch(type#1 @ 0474a728) { ... } // from try @ 0373391c with catch @ 03733a64
                        */
  return;
}


