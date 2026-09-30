/*
FUNCTION_NAME: OVRVirtualKeyboard_ShowKeyboard_mA26E98050B6D3E8079D835BDAB2FD3C2F7E301C7
ENTRY_POINT: 02e1b9a4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRVirtualKeyboard_ShowKeyboard_mA26E98050B6D3E8079D835BDAB2FD3C2F7E301C7
               (OVRVirtualKeyboard_t63B9829B9705A7EBB2E236CA38C35731E0BF8837 *param_1,
               undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140 *pIVar8;
  Il2CppFakeBox<int> aIStack_140 [28];
  int local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  int local_fc;
  OVRVirtualKeyboard_t63B9829B9705A7EBB2E236CA38C35731E0BF8837 *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 local_b0;
  undefined8 local_a8;
  Il2CppFakeBox<int> aIStack_a0 [24];
  int local_88;
  undefined1 local_81;
  int local_80;
  byte local_79;
  ExceptionSupportStack<Il2CppObject*,1> aEStack_78 [23];
  undefined1 local_61;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_34;
  undefined8 local_30;
  OVRVirtualKeyboard_t63B9829B9705A7EBB2E236CA38C35731E0BF8837 *local_28;
  
  puVar4 = 
  Field_<PrivateImplementationDetails>_85AA75D7B90CBA18B8326D7653A3B43E741161EB1AEB144AC1246CAD659B141B
  ;
  puVar3 = Method_spawnerRayos_<Tormenta>d__16_System_Collections_IEnumerator_Reset__;
  puVar2 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_30 = param_2;
  local_28 = param_1;
  if ((OVRVirtualKeyboard_ShowKeyboard_mA26E98050B6D3E8079D835BDAB2FD3C2F7E301C7::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_339);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_340);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_341);
    OVRVirtualKeyboard_ShowKeyboard_mA26E98050B6D3E8079D835BDAB2FD3C2F7E301C7::
    s_Il2CppMethodInitialized = 1;
  }
  local_34 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  local_61 = 0;
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::ExceptionSupportStack(aEStack_78);
  local_79 = (byte)local_28[0xf0] & 1;
  if (local_79 == 0) {
    il2cpp_codegen_initobj(&local_61,1);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_88 = OVRPlugin_CreateVirtualKeyboard_m2308DBE3518502D7F6464687BF0FBAE1379FF08C(local_81,0)
    ;
    local_80 = local_88;
    local_34 = local_88;
    if (local_88 != 0) {
      Il2CppFakeBox<int>::Il2CppFakeBox(aIStack_a0,*(Il2CppClass **)puVar3,&local_34);
      local_a8 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741(aIStack_a0);
      local_b0 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B
                           (*(undefined8 *)StringLiteral_341,local_a8,
                            *(undefined8 *)StringLiteral_339,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(local_b0,0);
      return;
    }
    il2cpp_codegen_initobj(&local_60,0x20);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
    puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
    local_d0 = *puVar6;
    uStack_c8 = (undefined4)puVar6[1];
    uStack_d8 = *(undefined8 *)((long)puVar6 + 0x14);
    local_e0 = *(undefined8 *)((long)puVar6 + 0xc);
    uStack_c4 = (undefined4)local_e0;
    uStack_c0 = (undefined4)((ulong)local_e0 >> 0x20);
    uStack_e8 = uStack_58;
    local_f0 = local_60;
    local_f8 = local_28 + 0xf8;
    uStack_bc = uStack_d8;
    local_50 = local_e0;
    uStack_48 = uStack_d8;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    uStack_118 = uStack_e8;
    local_120 = local_f0;
    uStack_108 = uStack_d8;
    local_110 = local_e0;
    local_124 = OVRPlugin_CreateVirtualKeyboardSpace_m16BEA48C1D88C8F097AD290FC51721CE7BDBFB20
                          (&local_120,local_f8,0);
    local_fc = local_124;
    local_34 = local_124;
    if (local_124 != 0) {
      Il2CppFakeBox<int>::Il2CppFakeBox(aIStack_140,*(Il2CppClass **)puVar3,&local_34);
      uVar7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741(aIStack_140);
      uVar7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                        (*(undefined8 *)StringLiteral_340,uVar7,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar7,0);
      return;
    }
    OVRVirtualKeyboard_UseSuggestedLocation_mB19E6823ADC820085AADCEF36E19E526C66F64C0
              (local_28,*(undefined4 *)(local_28 + 0x50),0);
    if (((byte)local_28[0x138] & 1) == 0) {
      local_28[0x138] = (OVRVirtualKeyboard_t63B9829B9705A7EBB2E236CA38C35731E0BF8837)0x1;
      bVar5 = OVRVirtualKeyboard_LoadRuntimeVirtualKeyboardMesh_m95F4F9B64FF4F6D195535BCEC816A07E5571FA7F
                        (local_28,0);
      if ((bVar5 & 1) == 0) {
        OVRVirtualKeyboard_DestroyKeyboard_m9CD5440A00E72F0D6295F2B0C89AF992D1C08490(local_28,0);
        return;
      }
      OVRVirtualKeyboard_UpdateVisibleState_m641FB716CB4B030577DA0CB344B5F5E6AB797EBC(local_28,0);
    }
    uVar7 = OVRVirtualKeyboard_get_TextCommitField_m8313B402A1340E387D786E8CC1A117884E27C862_inline
                      (local_28,(MethodInfo *)0x0);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__)
    ;
    bVar5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar7,0);
    if ((bVar5 & 1) != 0) {
      pIVar8 = (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140 *)
               OVRVirtualKeyboard_get_TextCommitField_m8313B402A1340E387D786E8CC1A117884E27C862_inline
                         (local_28,(MethodInfo *)0x0);
      NullCheck(pIVar8);
      uVar7 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline
                        (pIVar8,(MethodInfo *)0x0);
      OVRVirtualKeyboard_ChangeTextContextInternal_m06E115827D1BE0A6A9DFD9FA24C03DC22D1A3EC3
                (local_28,uVar7,0);
    }
  }
  OVRVirtualKeyboard_SetKeyboardVisibility_m6A66F265840F3E37DBB5A103FF05C2EEFE0D6D04(local_28,1,0);
  local_28[0xf0] = (OVRVirtualKeyboard_t63B9829B9705A7EBB2E236CA38C35731E0BF8837)0x1;
  return;
}


