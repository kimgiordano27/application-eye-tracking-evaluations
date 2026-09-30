/*
FUNCTION_NAME: OVRPlugin$$IsPassthroughShape
ENTRY_POINT: 02ca8798
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsPassthroughShape(void)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  long lVar4;
  undefined1 in_w8;
  long unaff_x29;
  undefined4 uStack0000000000000004;
  undefined8 *in_stack_00000010;
  
                    /* try { // try from 02ca87a8 to 02da87af has its CatchHandler @ 02ca87e4 */
  OVRLipSync__cctor_mEFF2260DAC6C1A4E1ED1A3A715210F82132419A6::s_Il2CppMethodInitialized = in_w8;
  *(undefined8 *)(unaff_x29 + -0x10) =
       *(undefined8 *)
        Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass24_0_<TryBuildImmutableForArrayContract>b__0__
  ;
                    /* try { // try from 02ca87b0 to 02da87b3 has its CatchHandler @ 02ca87fc */
                    /* try { // try from 02ca87b4 to 02da87f3 has its CatchHandler @ 02ca85d0 */
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__);
  *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x10);
  uVar1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                    (*(undefined8 *)(unaff_x29 + -0x20));
  *(undefined8 *)(unaff_x29 + -0x18) = uVar1;
                    /* catch() { ... } // from try @ 02ca87a8 with catch @ 02ca87e4 */
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputDevice>_AppendWithCapacity__
            );
                    /* try { // try from 02ca87f4 to 02da8813 has its CatchHandler @ 02ca881c */
  uVar1 = Enum_GetNames_m382A68AE28D7B6035331EC0685315144F15957C3
                    (*(undefined8 *)(unaff_x29 + -0x18),0);
  *(undefined8 *)(unaff_x29 + -0x28) = uVar1;
                    /* catch() { ... } // from try @ 02ca87b0 with catch @ 02ca87fc */
  NullCheck(*(void **)(unaff_x29 + -0x28));
  uVar1 = *(undefined8 *)(*(long *)(unaff_x29 + -0x28) + 0x18);
                    /* try { // try from 02ca8814 to 02da881f has its CatchHandler @ 02ca85d0 */
  puVar2 = (undefined4 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02ca87f4 with catch @ 02ca881c
                        */
  *puVar2 = (int)uVar1;
  uVar1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57
                    (*(undefined8 *)
                      Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c_<TryBuildImmutableForDictionaryContract>b__25_1__
                     ,0);
  pvVar3 = (void *)Enum_GetNames_m382A68AE28D7B6035331EC0685315144F15957C3(uVar1,0);
  NullCheck(pvVar3);
  uStack0000000000000004 = (undefined4)*(undefined8 *)((long)pvVar3 + 0x18);
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  *(undefined4 *)(lVar4 + 4) = uStack0000000000000004;
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  *(undefined4 *)(lVar4 + 8) = 0xfffff768;
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  Il2CppCodeGenWriteBarrier((void **)(lVar4 + 0x10),(void *)0x0);
  return;
}


