/*
FUNCTION_NAME: OVRPlugin_GetVirtualKeyboardModelAnimationStates_mA1EB86CFED8B195BC2BB6602F95E30B6F30B7D6E
ENTRY_POINT: 02dbe07c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_17;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int OVRPlugin_GetVirtualKeyboardModelAnimationStates_mA1EB86CFED8B195BC2BB6602F95E30B6F30B7D6E
              (void **param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  __7 *extraout_x1;
  void *pvVar10;
  VirtualKeyboardModelAnimationStateU5BU5D_tC71D789E4115CC7C96ECFCAF73DB6E82526689EB *pVVar11;
  Il2CppFakeBox<int> aIStack_1d8 [28];
  int local_1bc;
  int local_1b8;
  undefined4 local_1b4;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  int local_184;
  int iStack_17c;
  undefined8 uStack_178;
  int local_16c;
  undefined8 *local_168;
  FinallyHelper<OVRPlugin_GetVirtualKeyboardModelAnimationStates_mA1EB86CFED8B195BC2BB6602F95E30B6F30B7D6E::__7,false>
  aFStack_160 [20];
  int local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  int local_128;
  int local_124;
  int iStack_11c;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  Il2CppFakeBox<int> aIStack_100 [28];
  int local_e4;
  void *local_e0;
  uint local_d4;
  uint uStack_cc;
  undefined8 uStack_c8;
  void **local_c0;
  int local_b4;
  ulong local_b0;
  undefined8 uStack_a8;
  byte local_99;
  undefined8 local_98;
  undefined8 local_90;
  void **local_88;
  int local_7c;
  long local_78;
  int local_6c;
  ulong local_68;
  undefined8 uStack_60;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined8 auStack_48 [2];
  undefined8 local_38;
  void **local_30;
  int local_24;
  
  puVar4 = 
  Field_<PrivateImplementationDetails>_8BBE66A1FC631CA10DD5B83C200A7BEE3CF9D8C782B22934839AA15CA4DF35B8
  ;
  puVar3 = Method_spawnerRayos_<Tormenta>d__16_System_Collections_IEnumerator_Reset__;
  puVar2 = Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_38 = param_2;
  local_30 = param_1;
  if ((OVRPlugin_GetVirtualKeyboardModelAnimationStates_mA1EB86CFED8B195BC2BB6602F95E30B6F30B7D6E::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_D9306783E6861F77276D81FA2A9E70B235B194A8A3FF6744B5A41F00A0D0A366
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_60DC958CF67774CFFC92F48F342F3E8DACFA5BEA4E29BD936EC2DED4619A8DD4
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_C03F9801DD3BC1DBB054DE5FC37FB519A30AFFA150D4014C0CC037B0D87FDB17
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_BD0AA59A5B9FF7F62EBEF5E68372663833C2D761BBE3549098AED749DB30B09A
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_FE51D44E1BF8104C65883F1C897A229A0B251F449C6B429A5CEEA75BA31F03AE
              );
    OVRPlugin_GetVirtualKeyboardModelAnimationStates_mA1EB86CFED8B195BC2BB6602F95E30B6F30B7D6E::
    s_Il2CppMethodInitialized = 1;
  }
  local_50 = 0;
  auStack_48[0] = 0;
  local_54 = 0;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_6c = 0;
  local_78 = 0;
  local_7c = 0;
  local_88 = local_30;
  il2cpp_codegen_initobj(local_30,8);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_90 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
  puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
  local_98 = *puVar7;
  local_99 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_90,local_98,0);
  local_99 = local_99 & 1;
  if (local_99 == 0) {
    local_24 = -0x3ec;
  }
  else {
    il2cpp_codegen_initobj(&local_68,0x10);
    local_68 = local_68 & 0xffffffff00000000;
    uStack_a8 = uStack_60;
    local_b0 = local_68;
    auStack_48[0] = uStack_60;
    local_50 = local_68;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
    local_b4 = OVRP_1_83_0_ovrp_GetVirtualKeyboardModelAnimationStates_m059CD58E4B8E3C6976D815A25D84045462B63933
                         (&local_50,0);
    local_c0 = local_30;
    uStack_c8 = auStack_48[0];
    uStack_cc = (uint)(local_50 >> 0x20);
    local_d4 = uStack_cc;
    local_54 = local_b4;
    local_e0 = (void *)SZArrayNew(*(Il2CppClass **)
                                   Field_<PrivateImplementationDetails>_60DC958CF67774CFFC92F48F342F3E8DACFA5BEA4E29BD936EC2DED4619A8DD4
                                  ,uStack_cc);
    *local_c0 = local_e0;
    Il2CppCodeGenWriteBarrier(local_c0,local_e0);
    local_e4 = local_54;
    if (local_54 != 0) {
      Il2CppFakeBox<int>::Il2CppFakeBox(aIStack_100,*(Il2CppClass **)puVar3,&local_54);
      local_108 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741(aIStack_100);
      local_110 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                            (*(undefined8 *)
                              Field_<PrivateImplementationDetails>_BD0AA59A5B9FF7F62EBEF5E68372663833C2D761BBE3549098AED749DB30B09A
                             ,local_108,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(local_110,0);
    }
    uStack_118 = auStack_48[0];
    iStack_11c = (int)(local_50 >> 0x20);
    local_124 = iStack_11c;
    if ((iStack_11c == 0) || (local_128 = local_54, local_54 != 0)) {
      local_24 = local_54;
    }
    else {
      local_138 = *(undefined8 *)
                   Field_<PrivateImplementationDetails>_C03F9801DD3BC1DBB054DE5FC37FB519A30AFFA150D4014C0CC037B0D87FDB17
      ;
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_Transform>__ctor__);
      local_148 = local_138;
      local_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(local_138);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      local_14c = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(local_140,0);
      local_168 = &local_50;
      local_58 = local_14c;
      il2cpp::utils::
      Finally<OVRPlugin_GetVirtualKeyboardModelAnimationStates_mA1EB86CFED8B195BC2BB6602F95E30B6F30B7D6E::__7>
                ((utils *)&local_168,extraout_x1);
      local_16c = local_58;
      uStack_178 = auStack_48[0];
      iStack_17c = (int)(local_50 >> 0x20);
      local_184 = iStack_17c;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      uVar5 = il2cpp_codegen_multiply<int,int>(local_16c,local_184);
      local_1a0 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(uVar5,0);
      uStack_1ac = (undefined4)(local_50 >> 0x20);
      local_1b4 = uStack_1ac;
      local_50 = CONCAT44(uStack_1ac,uStack_1ac);
      auStack_48[0] = local_1a0;
      uStack_1a8 = local_1a0;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
      local_1bc = OVRP_1_83_0_ovrp_GetVirtualKeyboardModelAnimationStates_m059CD58E4B8E3C6976D815A25D84045462B63933
                            (&local_50,0);
      local_1b8 = local_1bc;
      local_54 = local_1bc;
      if (local_1bc == 0) {
        for (local_6c = 0; iVar6 = local_6c, pvVar10 = *local_30, NullCheck(pvVar10),
            iVar6 < (int)*(undefined8 *)((long)pvVar10 + 0x18);
            local_6c = il2cpp_codegen_add<int,int>(local_6c,1)) {
          lVar8 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032(auStack_48,0);
          iVar6 = il2cpp_codegen_multiply<int,int>(local_6c,local_58);
          uVar9 = il2cpp_codegen_add<long,long>(lVar8,(long)iVar6);
          IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC(&local_78,uVar9,0);
          iVar6 = local_6c;
          lVar8 = local_78;
          pVVar11 = *local_30;
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
          uVar9 = Marshal_PtrToStructure_TisVirtualKeyboardModelAnimationState_t30F2DCB42CE518A63F2E189BEBCC391130073C6F_m82F6EF778E5C388815FE14F3CE79DAF456EE1A0C
                            (lVar8,*(MethodInfo **)
                                    Field_<PrivateImplementationDetails>_D9306783E6861F77276D81FA2A9E70B235B194A8A3FF6744B5A41F00A0D0A366
                            );
          NullCheck(pVVar11);
          VirtualKeyboardModelAnimationStateU5BU5D_tC71D789E4115CC7C96ECFCAF73DB6E82526689EB::SetAt
                    (pVVar11,(long)iVar6,uVar9);
        }
      }
      else {
        Il2CppFakeBox<int>::Il2CppFakeBox(aIStack_1d8,*(Il2CppClass **)puVar3,&local_54);
        uVar9 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741(aIStack_1d8,0);
        uVar9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                          (*(undefined8 *)
                            Field_<PrivateImplementationDetails>_FE51D44E1BF8104C65883F1C897A229A0B251F449C6B429A5CEEA75BA31F03AE
                           ,uVar9,0);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar9,0);
      }
      local_7c = local_54;
      il2cpp::utils::
      FinallyHelper<OVRPlugin_GetVirtualKeyboardModelAnimationStates_mA1EB86CFED8B195BC2BB6602F95E30B6F30B7D6E::$_7,false>
      ::~FinallyHelper(aFStack_160);
      local_24 = local_7c;
    }
  }
  return local_24;
}


