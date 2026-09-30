/*
FUNCTION_NAME: OVR.OpenVR.IVRInput._ShowActionOrigins$$Invoke
ENTRY_POINT: 02dad1f4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVR_OpenVR_IVRInput__ShowActionOrigins__Invoke
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  void *__src;
  long unaff_x29;
  int iStack0000000000000034;
  void *in_stack_00000040;
  undefined8 *puStack0000000000000048;
  ulong *puStack0000000000000050;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000064;
  undefined4 uStack000000000000006c;
  byte bStack000000000000008f;
  
  puVar4 = 
  Field_<PrivateImplementationDetails>_2F185E0012E1EDA353E8BFCA3DF97956ADA929690FC2A81C4A04F58E49DAD40A
  ;
  puStack0000000000000048 =
       (undefined8 *)
       Field_<PrivateImplementationDetails>_2F185E0012E1EDA353E8BFCA3DF97956ADA929690FC2A81C4A04F58E49DAD40A
  ;
  puStack0000000000000050 =
       (ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  *(undefined8 *)(unaff_x29 + -8) = param_3;
  *(undefined4 *)(unaff_x29 + -0xc) = param_1;
  *(undefined4 *)(unaff_x29 + -0x10) = param_2;
  *(undefined4 *)(unaff_x29 + -0x14) = param_4;
  *(undefined4 *)(unaff_x29 + -0x18) = param_5;
  *(undefined4 *)(unaff_x29 + -0x1c) = param_6;
  *(undefined4 *)(unaff_x29 + -0x20) = param_7;
  *(undefined8 *)(unaff_x29 + -0x28) = param_8;
  if ((OVRPlugin_CalculateLayerDesc_m1C5C994D88D2EB1BC56103558F7DB7AFDFDF04C9::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000050);
    OVRPlugin_CalculateLayerDesc_m1C5C994D88D2EB1BC56103558F7DB7AFDFDF04C9::
    s_Il2CppMethodInitialized = 1;
  }
  iStack0000000000000034 = 0;
  memset((void *)(unaff_x29 + -0xa4),0,0x7c);
  memset(&stack0x00000090,iStack0000000000000034,0x7c);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000050);
  bStack000000000000008f = OVRPlugin_get_initialized_m7D7AAEEED41ED4B5798882B6038CF169E2BF0443(0);
  bStack000000000000008f = bStack000000000000008f & 1;
  if (bStack000000000000008f != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000050);
    uVar6 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000048);
    puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000048)
    ;
    bVar5 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E(uVar6,*puVar7,0);
    if ((bVar5 & 1) == 0) {
      __src = (void *)(unaff_x29 + -0xa4);
      il2cpp_codegen_initobj(__src,0x7c);
      uVar1 = *(undefined4 *)(unaff_x29 + -0xc);
      uStack000000000000006c = *(undefined4 *)(unaff_x29 + -0x10);
      uVar2 = *(undefined4 *)(unaff_x29 + -0x14);
      uStack0000000000000064 = *(undefined4 *)(unaff_x29 + -0x18);
      uVar3 = *(undefined4 *)(unaff_x29 + -0x1c);
      uStack000000000000005c = *(undefined4 *)(unaff_x29 + -0x20);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000048);
      OVRP_1_15_0_ovrp_CalculateLayerDesc_mD7F485408AF95776AA32126F2F2B168A4B796D40
                (uVar1,uStack000000000000006c,unaff_x29 + -8,uVar2,uStack0000000000000064,uVar3,
                 uStack000000000000005c,__src);
      memcpy(in_stack_00000040,__src,0x7c);
      return;
    }
  }
  il2cpp_codegen_initobj(&stack0x00000090,0x7c);
  memcpy(in_stack_00000040,&stack0x00000090,0x7c);
  return;
}


