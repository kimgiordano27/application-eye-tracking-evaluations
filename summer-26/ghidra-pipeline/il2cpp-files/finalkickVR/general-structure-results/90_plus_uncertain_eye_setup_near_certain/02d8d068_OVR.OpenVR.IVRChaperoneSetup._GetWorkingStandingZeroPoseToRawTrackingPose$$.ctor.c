/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$.ctor
ENTRY_POINT: 02d8d068
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_7;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose___ctor
               (undefined8 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  byte in_w9;
  byte in_w10;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 *in_stack_00000058;
  
  *(byte *)(unaff_x29 + -0x15) = in_w9 & in_w10;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*param_1);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
  *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(lVar3 + 0x1d0);
  NullCheck(*(void **)(unaff_x29 + -0x20));
  uVar2 = Observable_1_get_Value_mB8F26CF39635F02B4782AD1798CAC3E90FCB9D79_inline
                    (*(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)(unaff_x29 + -0x20)
                     ,(MethodInfo *)*in_stack_00000020);
  *(undefined4 *)(unaff_x29 + -0x24) = uVar2;
  bVar1 = OVRManager_PassthroughInitializedOrPending_m7B360381FEDC2014AFB1ABB74E907B62B0D14348
                    (*(undefined4 *)(unaff_x29 + -0x24),0);
  *(byte *)(unaff_x29 + -0x25) = bVar1 & in_stack_00000010._4_1_;
  if ((*(byte *)(unaff_x29 + -0x15) & 1) == (*(byte *)(unaff_x29 + -0x25) & 1)) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
    *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(lVar3 + 0x1d0);
    NullCheck(*(void **)(unaff_x29 + -0x40));
    uVar2 = Observable_1_get_Value_mB8F26CF39635F02B4782AD1798CAC3E90FCB9D79_inline
                      (*(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)
                        (unaff_x29 + -0x40),(MethodInfo *)*in_stack_00000020);
    *(undefined4 *)(unaff_x29 + -0x44) = uVar2;
    if (*(int *)(unaff_x29 + -0x44) == 1) {
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
      uVar2 = OVRPlugin_GetInsightPassthroughInitializationState_m3E668E023B953E8204B732EBCD358FAC7B7660C4
                        (0);
      *(undefined4 *)(unaff_x29 + -0x48) = uVar2;
      *(undefined4 *)(unaff_x29 + -0x14) = *(undefined4 *)(unaff_x29 + -0x48);
      *(undefined4 *)(unaff_x29 + -0x4c) = *(undefined4 *)(unaff_x29 + -0x14);
      if (*(int *)(unaff_x29 + -0x4c) == 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
        lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
        *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(lVar3 + 0x1d0);
        NullCheck(*(void **)(unaff_x29 + -0x58));
        Observable_1_set_Value_m14A1DD2298CBF1606D9492E3EED5ED3206EAD5D1
                  (*(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)(unaff_x29 + -0x58),2
                   ,(MethodInfo *)*in_stack_00000028);
      }
      else {
        *(undefined4 *)(unaff_x29 + -0x5c) = *(undefined4 *)(unaff_x29 + -0x14);
        if (*(int *)(unaff_x29 + -0x5c) < 0) {
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
          lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
          in_stack_00000058 =
               *(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)(lVar3 + 0x1d0);
          NullCheck(in_stack_00000058);
          Observable_1_set_Value_m14A1DD2298CBF1606D9492E3EED5ED3206EAD5D1
                    (in_stack_00000058,3,(MethodInfo *)*in_stack_00000028);
          Il2CppFakeBox<int>::Il2CppFakeBox
                    ((Il2CppFakeBox<int> *)&stack0x00000040,
                     *(Il2CppClass **)
                      Method_spawnerRayos_<Tormenta>d__16_System_Collections_IEnumerator_Reset__,
                     (int *)(unaff_x29 + -0x14));
          uVar4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741
                            ((Il2CppFakeBox<int> *)&stack0x00000040);
          uVar4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B
                            (*(undefined8 *)
                              Method_spawnerRayos_<instaciarRayo>d__14_System_Collections_IEnumerator_Reset__
                             ,uVar4,*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<string,_JsonSchemaType>_Add__
                             ,0);
          il2cpp_codegen_runtime_class_init_inline
                    (*(Il2CppClass **)
                      Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                    );
          Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar4,0);
        }
      }
    }
  }
  else {
    *(byte *)(unaff_x29 + -0x26) = *(byte *)(unaff_x29 + -1) & 1;
    if ((*(byte *)(unaff_x29 + -0x26) & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
      OVRManager_ShutdownInsightPassthrough_mBBB77D5EB2CE95920737C34F1A0A5E6C14A6E576(0);
    }
    else {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
      lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
      *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(lVar3 + 0x1d0);
      NullCheck(*(void **)(unaff_x29 + -0x30));
      uVar2 = Observable_1_get_Value_mB8F26CF39635F02B4782AD1798CAC3E90FCB9D79_inline
                        (*(Observable_1_t8B0ED472F997DCC0EB03DB275E12BFF3D1B970F8 **)
                          (unaff_x29 + -0x30),(MethodInfo *)*in_stack_00000020);
      *(undefined4 *)(unaff_x29 + -0x34) = uVar2;
      if (*(int *)(unaff_x29 + -0x34) != 3) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
        bVar1 = OVRManager_InitializeInsightPassthrough_m016E6C16576A1E4F6B7871E7FDE7D2671119F67E(0)
        ;
        *(byte *)(unaff_x29 + -0x35) = bVar1 & 1;
      }
    }
  }
  return;
}


