/*
FUNCTION_NAME: OVRVirtualKeyboard_UpdateAnimationState_m97D475B7489C7DF017727831C6AFB8B092E3D310
ENTRY_POINT: 02e1ebf4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_21;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRVirtualKeyboard_UpdateAnimationState_m97D475B7489C7DF017727831C6AFB8B092E3D310
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  long lVar7;
  void *pvVar8;
  __13 *extraout_x1;
  __14 *extraout_x1_00;
  __15 *extraout_x1_01;
  undefined8 *local_4b0;
  FinallyHelper<OVRVirtualKeyboard_UpdateAnimationState_m97D475B7489C7DF017727831C6AFB8B092E3D310::__15,false>
  aFStack_4a8 [16];
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  List_1_tE67E1B13456EC1B27DB7A7109639867876B3914D *local_460;
  long local_458;
  VirtualKeyboardModelAnimationStateU5BU5D_tC71D789E4115CC7C96ECFCAF73DB6E82526689EB *local_450;
  VirtualKeyboardModelAnimationStateU5BU5D_tC71D789E4115CC7C96ECFCAF73DB6E82526689EB *local_448;
  VirtualKeyboardModelAnimationStateU5BU5D_tC71D789E4115CC7C96ECFCAF73DB6E82526689EB *local_440;
  VirtualKeyboardModelAnimationStateU5BU5D_tC71D789E4115CC7C96ECFCAF73DB6E82526689EB *local_438;
  int local_430;
  int local_42c;
  OVRGLTFAnimatinonNodeU5BU5D_tC9CC993B6525D009E66799094A4B4FBA531421D2 *local_428;
  int local_420;
  int local_41c;
  undefined4 local_418;
  int local_414;
  VirtualKeyboardModelAnimationStateU5BU5D_tC71D789E4115CC7C96ECFCAF73DB6E82526689EB *local_410;
  VirtualKeyboardModelAnimationStateU5BU5D_tC71D789E4115CC7C96ECFCAF73DB6E82526689EB *local_408;
  void *local_400;
  int local_3f8;
  int local_3f4;
  OVRGLTFAnimatinonNodeU5BU5D_tC9CC993B6525D009E66799094A4B4FBA531421D2 *local_3f0;
  OVRGLTFAnimatinonNodeU5BU5D_tC9CC993B6525D009E66799094A4B4FBA531421D2 *local_3e8;
  int local_3e0;
  int local_3dc;
  VirtualKeyboardModelAnimationStateU5BU5D_tC71D789E4115CC7C96ECFCAF73DB6E82526689EB *local_3d8;
  VirtualKeyboardModelAnimationStateU5BU5D_tC71D789E4115CC7C96ECFCAF73DB6E82526689EB *local_3d0;
  Dictionary_2_tC51E1B8C1DE7A1A4169283F6F05265525E2F4AA2 *local_3c8;
  long local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a4;
  undefined4 local_3a0;
  int local_39c;
  VirtualKeyboardModelAnimationStateU5BU5D_tC71D789E4115CC7C96ECFCAF73DB6E82526689EB *local_398;
  VirtualKeyboardModelAnimationStateU5BU5D_tC71D789E4115CC7C96ECFCAF73DB6E82526689EB *local_390;
  byte local_381;
  int local_380;
  int local_37c;
  VirtualKeyboardModelAnimationStateU5BU5D_tC71D789E4115CC7C96ECFCAF73DB6E82526689EB *local_378;
  VirtualKeyboardModelAnimationStateU5BU5D_tC71D789E4115CC7C96ECFCAF73DB6E82526689EB *local_370;
  Dictionary_2_tC51E1B8C1DE7A1A4169283F6F05265525E2F4AA2 *local_368;
  long local_360;
  undefined4 local_354;
  UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299 *local_350;
  int local_348;
  int local_344;
  int local_334;
  byte local_321;
  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 *local_320;
  void *local_318;
  undefined8 *local_310;
  FinallyHelper<OVRVirtualKeyboard_UpdateAnimationState_m97D475B7489C7DF017727831C6AFB8B092E3D310::__14,false>
  aFStack_308 [16];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B *local_2c8;
  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 *local_2c0;
  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *local_2b8;
  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 *local_2b0;
  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 *local_2a8;
  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 *local_2a0;
  undefined4 local_294;
  undefined4 uStack_28c;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined4 local_274;
  undefined4 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined4 local_254;
  undefined8 local_250;
  undefined4 uStack_244;
  undefined8 local_240;
  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *local_200;
  uint local_1f4;
  undefined8 local_1f0;
  uint uStack_1e4;
  undefined8 local_1e0;
  undefined4 local_1d4;
  ulong local_1d0;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 *local_160;
  FinallyHelper<OVRVirtualKeyboard_UpdateAnimationState_m97D475B7489C7DF017727831C6AFB8B092E3D310::__13,false>
  aFStack_158 [20];
  int local_144;
  undefined8 local_140;
  int iStack_134;
  undefined8 local_130;
  undefined4 local_124;
  ulong local_120;
  byte local_111;
  ulong local_110;
  Dictionary_2_tC0C7D1C32C8F3838E16A6ABE867FDED2F8C818FB *local_108;
  ulong local_100;
  int local_f8;
  int local_f4;
  UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299 *local_f0;
  UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299 *local_e8;
  UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299 *local_e0;
  undefined4 local_d8;
  byte local_d1;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  OVRGLTFAnimatinonNodeU5BU5D_tC9CC993B6525D009E66799094A4B4FBA531421D2 *local_b0;
  int local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 *local_88;
  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B *local_60;
  ulong local_58;
  int local_4c;
  UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299 *local_48;
  VirtualKeyboardModelAnimationStateU5BU5D_tC71D789E4115CC7C96ECFCAF73DB6E82526689EB *local_40;
  UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299 *local_38;
  undefined8 local_30;
  long local_28;
  
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_30 = param_2;
  local_28 = param_1;
  if ((OVRVirtualKeyboard_UpdateAnimationState_m97D475B7489C7DF017727831C6AFB8B092E3D310::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_Clear__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_379);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_380);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_381);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_382);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_383);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_384);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_385);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_386);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_387);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<Transform,_HashSetList<object>>_set_Item__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_388);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_389);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_390);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_TreeItem>_Add__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_391);
    OVRVirtualKeyboard_UpdateAnimationState_m97D475B7489C7DF017727831C6AFB8B092E3D310::
    s_Il2CppMethodInitialized = 1;
  }
  local_38 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299 *)0x0;
  local_40 = (VirtualKeyboardModelAnimationStateU5BU5D_tC71D789E4115CC7C96ECFCAF73DB6E82526689EB *)
             0x0;
  local_48 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299 *)0x0;
  local_4c = 0;
  local_58 = 0;
  local_60 = (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B *)0x0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_80 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *)0x0;
  local_88 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 *)0x0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_a4 = 0;
  local_b0 = (OVRGLTFAnimatinonNodeU5BU5D_tC9CC993B6525D009E66799094A4B4FBA531421D2 *)0x0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_d1 = *(byte *)(local_28 + 0x139) & 1;
  if (local_d1 != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_d8 = OVRPlugin_GetVirtualKeyboardDirtyTextures_mCE16CF961B69D7C1B2EAC59027CF1E0B7A70B6A3
                         (&local_38,0);
    local_e0 = local_38;
    local_e8 = local_38;
    local_48 = local_38;
    local_4c = 0;
    while( true ) {
      local_348 = local_4c;
      local_350 = local_48;
      NullCheck(local_48);
      if ((int)*(undefined8 *)(local_350 + 0x18) <= local_348) break;
      local_f0 = local_48;
      local_f4 = local_4c;
      NullCheck(local_48);
      local_f8 = local_f4;
      local_110 = UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299::GetAt
                            (local_f0,(long)local_f4);
      local_108 = *(Dictionary_2_tC0C7D1C32C8F3838E16A6ABE867FDED2F8C818FB **)(local_28 + 0x100);
      local_100 = local_110;
      local_58 = local_110;
      NullCheck(local_108);
      local_111 = Dictionary_2_TryGetValue_m10F4E6C249CE80EC2234CAD510DCA4646869DEA9
                            (local_108,local_110,&local_60,*(MethodInfo **)StringLiteral_380);
      local_111 = local_111 & 1;
      if (local_111 != 0) {
        il2cpp_codegen_initobj(&local_78,0x18);
        local_120 = local_58;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        local_124 = OVRPlugin_GetVirtualKeyboardTextureData_mDF2AD39B644CCEC7A871B62D61107E7360C245C9
                              (local_120,&local_78,0);
        iStack_134 = (int)((ulong)uStack_70 >> 0x20);
        local_140 = local_78;
        local_130 = local_68;
        local_144 = iStack_134;
        if (iStack_134 != 0) {
          local_160 = &local_78;
          il2cpp::utils::
          Finally<OVRVirtualKeyboard_UpdateAnimationState_m97D475B7489C7DF017727831C6AFB8B092E3D310::__13>
                    ((utils *)&local_160,extraout_x1);
          uStack_174 = (undefined4)((ulong)uStack_70 >> 0x20);
          local_180 = local_78;
          local_170 = local_68;
          local_184 = uStack_174;
          il2cpp_codegen_runtime_class_init_inline
                    (*(Il2CppClass **)
                      Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__
                    );
          local_1b0 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(local_184,0);
          uStack_1b4 = (undefined4)((ulong)uStack_70 >> 0x20);
          local_1c0 = local_78;
          local_1c4 = uStack_1b4;
          uStack_70 = CONCAT44(uStack_1b4,uStack_1b4);
          local_1d0 = local_58;
          local_1a0 = local_1b0;
          local_68 = local_1b0;
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          local_1d4 = OVRPlugin_GetVirtualKeyboardTextureData_mDF2AD39B644CCEC7A871B62D61107E7360C245C9
                                (local_1d0,&local_78,0);
          uStack_1e4 = (uint)((ulong)uStack_70 >> 0x20);
          local_1f0 = local_78;
          local_1e0 = local_68;
          local_1f4 = uStack_1e4;
          local_230 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 *)
                      SZArrayNew(*(Il2CppClass **)
                                  Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_Clear__
                                 ,uStack_1e4);
          uStack_218 = uStack_70;
          local_220 = local_78;
          local_210 = local_68;
          local_228 = local_68;
          uStack_244 = (undefined4)((ulong)uStack_70 >> 0x20);
          local_250 = local_78;
          local_240 = local_68;
          local_254 = uStack_244;
          local_200 = local_230;
          local_80 = local_230;
          Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(local_68,local_230,0,uStack_244,0);
          uStack_268 = uStack_70;
          local_270 = (undefined4)local_78;
          local_260 = local_68;
          local_274 = local_270;
          uStack_288 = uStack_70;
          uStack_28c = (undefined4)((ulong)local_78 >> 0x20);
          local_280 = local_68;
          local_294 = uStack_28c;
          local_2a0 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 *)
                      il2cpp_codegen_object_new
                                (*(Il2CppClass **)
                                  Method_System_Collections_Generic_Dictionary<int,_TreeItem>_Add__)
          ;
          Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917
                    (local_2a0,local_274,local_294,4,0,0);
          local_88 = local_2a0;
          local_2a8 = local_2a0;
          NullCheck(local_2a0);
          Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(local_2a8,2,0);
          local_2b0 = local_88;
          local_2b8 = local_80;
          NullCheck(local_88);
          Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8F7BB702A47AD6D81A8C7944D02211C417691BB5
                    (local_2b0,local_2b8,0,0,*(MethodInfo **)StringLiteral_390);
          local_2c0 = local_88;
          NullCheck(local_88);
          Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(local_2c0,1,1,0);
          local_2c8 = local_60;
          NullCheck(local_60);
          List_1_GetEnumerator_mF472961C4665B7EE4F1C4C8A05B00B08153BB96A
                    (local_2c8,*(MethodInfo **)StringLiteral_389);
          uStack_2d8 = uStack_2f0;
          local_2e0 = local_2f8;
          local_2d0 = local_2e8;
          local_310 = &local_a0;
          uStack_98 = uStack_2f0;
          local_a0 = local_2f8;
          local_90 = local_2e8;
          il2cpp::utils::
          Finally<OVRVirtualKeyboard_UpdateAnimationState_m97D475B7489C7DF017727831C6AFB8B092E3D310::__14>
                    ((utils *)&local_310,extraout_x1_00);
          while( true ) {
            bVar2 = Enumerator_MoveNext_mBA548D3D8366081A2D80A286DFBAE0744464D0EC
                              ((Enumerator_tEF58C7D40DDB41B6D712E0CAD7DA2883F14744B8 *)&local_a0,
                               *(MethodInfo **)StringLiteral_385);
            local_321 = bVar2 & 1;
            if ((bVar2 & 1) == 0) break;
            local_318 = (void *)Enumerator_get_Current_m2194C411E1208AC29EFC254376D8F58E0B011CFD_inline
                                          ((Enumerator_tEF58C7D40DDB41B6D712E0CAD7DA2883F14744B8 *)
                                           &local_a0,*(MethodInfo **)StringLiteral_387);
            local_320 = local_88;
            NullCheck(local_318);
            Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0
                      (local_318,local_320,0);
          }
          local_334 = 5;
          il2cpp::utils::
          FinallyHelper<OVRVirtualKeyboard_UpdateAnimationState_m97D475B7489C7DF017727831C6AFB8B092E3D310::$_14,false>
          ::~FinallyHelper(aFStack_308);
          if (local_334 == 0) {
            local_334 = 0;
          }
          il2cpp::utils::
          FinallyHelper<OVRVirtualKeyboard_UpdateAnimationState_m97D475B7489C7DF017727831C6AFB8B092E3D310::$_13,false>
          ::~FinallyHelper(aFStack_158);
        }
      }
      local_344 = local_4c;
      local_4c = il2cpp_codegen_add<int,int>(local_4c,1);
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar3 = OVRPlugin_GetVirtualKeyboardModelAnimationStates_mA1EB86CFED8B195BC2BB6602F95E30B6F30B7D6E
                      (&local_40,0);
    if (iVar3 == 0) {
      local_a4 = 0;
      local_354 = 0;
      while( true ) {
        local_430 = local_a4;
        local_438 = local_40;
        local_440 = local_40;
        NullCheck(local_40);
        if ((int)*(undefined8 *)(local_440 + 0x18) <= local_430) break;
        local_360 = local_28 + 0x108;
        local_368 = *(Dictionary_2_tC51E1B8C1DE7A1A4169283F6F05265525E2F4AA2 **)(local_28 + 0x120);
        local_370 = local_40;
        local_378 = local_40;
        local_37c = local_a4;
        NullCheck(local_40);
        piVar5 = (int *)VirtualKeyboardModelAnimationStateU5BU5D_tC71D789E4115CC7C96ECFCAF73DB6E82526689EB
                        ::GetAddressAt(local_378,(long)local_37c);
        local_380 = *piVar5;
        NullCheck(local_368);
        local_381 = Dictionary_2_ContainsKey_m277905B6926B43149A9582A7BC3DB7FF538F2569
                              (local_368,local_380,*(MethodInfo **)StringLiteral_379);
        local_381 = local_381 & 1;
        if (local_381 == 0) {
          local_390 = local_40;
          local_398 = local_40;
          local_39c = local_a4;
          NullCheck(local_40);
          puVar6 = (undefined4 *)
                   VirtualKeyboardModelAnimationStateU5BU5D_tC71D789E4115CC7C96ECFCAF73DB6E82526689EB
                   ::GetAddressAt(local_398,(long)local_39c);
          local_3a4 = *puVar6;
          local_3a0 = local_3a4;
          local_3b0 = Box(*(Il2CppClass **)
                           Method_System_Collections_Generic_Dictionary<Transform,_HashSetList<object>>_set_Item__
                          ,&local_3a4);
          local_3b8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8
                                (*(undefined8 *)StringLiteral_391,local_3b0);
          il2cpp_codegen_runtime_class_init_inline
                    (*(Il2CppClass **)
                      Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                    );
          Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(local_3b8,0);
        }
        else {
          local_3c0 = local_28 + 0x108;
          local_3c8 = *(Dictionary_2_tC51E1B8C1DE7A1A4169283F6F05265525E2F4AA2 **)(local_28 + 0x120)
          ;
          local_3d0 = local_40;
          local_3d8 = local_40;
          local_3dc = local_a4;
          NullCheck(local_40);
          piVar5 = (int *)VirtualKeyboardModelAnimationStateU5BU5D_tC71D789E4115CC7C96ECFCAF73DB6E82526689EB
                          ::GetAddressAt(local_3d8,(long)local_3dc);
          local_3e0 = *piVar5;
          NullCheck(local_3c8);
          local_3e8 = (OVRGLTFAnimatinonNodeU5BU5D_tC9CC993B6525D009E66799094A4B4FBA531421D2 *)
                      Dictionary_2_get_Item_mA26C006F1CD304A47D0112FEA85D964714633CA8
                                (local_3c8,local_3e0,*(MethodInfo **)StringLiteral_381);
          local_4c = 0;
          local_b0 = local_3e8;
          while( true ) {
            local_420 = local_4c;
            local_428 = local_b0;
            NullCheck(local_b0);
            if ((int)*(undefined8 *)(local_428 + 0x18) <= local_420) break;
            local_3f0 = local_b0;
            local_3f4 = local_4c;
            NullCheck(local_b0);
            local_3f8 = local_3f4;
            local_400 = (void *)OVRGLTFAnimatinonNodeU5BU5D_tC9CC993B6525D009E66799094A4B4FBA531421D2
                                ::GetAt(local_3f0,(long)local_3f4);
            local_408 = local_40;
            local_410 = local_40;
            local_414 = local_a4;
            NullCheck(local_40);
            lVar7 = VirtualKeyboardModelAnimationStateU5BU5D_tC71D789E4115CC7C96ECFCAF73DB6E82526689EB
                    ::GetAddressAt(local_410,(long)local_414);
            local_418 = *(undefined4 *)(lVar7 + 4);
            NullCheck(local_400);
            OVRGLTFAnimatinonNode_UpdatePose_mD575C4734263BB9B1EAC7372C49C9C913FF09B45
                      (local_418,local_400,0,0);
            local_41c = local_4c;
            local_4c = il2cpp_codegen_add<int,int>(local_4c,1);
          }
        }
        local_42c = local_a4;
        local_a4 = il2cpp_codegen_add<int,int>(local_a4,1);
      }
      local_448 = local_40;
      local_450 = local_40;
      NullCheck(local_40);
      if (*(long *)(local_450 + 0x18) != 0) {
        local_458 = local_28 + 0x108;
        local_460 = *(List_1_tE67E1B13456EC1B27DB7A7109639867876B3914D **)(local_28 + 0x128);
        NullCheck(local_460);
        List_1_GetEnumerator_m7F05F79EE2EDC914A2E8745560857026707A5136
                  (local_460,*(MethodInfo **)StringLiteral_388);
        uStack_478 = uStack_490;
        local_480 = local_498;
        local_470 = local_488;
        local_4b0 = &local_d0;
        local_c0 = local_488;
        il2cpp::utils::
        Finally<OVRVirtualKeyboard_UpdateAnimationState_m97D475B7489C7DF017727831C6AFB8B092E3D310::__15>
                  ((utils *)&local_4b0,extraout_x1_01);
        while (uVar4 = Enumerator_MoveNext_m711E4488EBE5C528E92526E27F5CFD5915EE0D6A
                                 ((Enumerator_tE0B4C9CA39383C89E33B3F67FBB1783085E9897D *)&local_d0,
                                  *(MethodInfo **)StringLiteral_384), (uVar4 & 1) != 0) {
          pvVar8 = (void *)Enumerator_get_Current_m190FDBA94859F12276B558956A2F6071E0BD657D_inline
                                     ((Enumerator_tE0B4C9CA39383C89E33B3F67FBB1783085E9897D *)
                                      &local_d0,*(MethodInfo **)StringLiteral_386);
          NullCheck(pvVar8);
          OVRGLTFAnimationNodeMorphTargetHandler_Update_mA577737E55F2F75F8553D3972C86ED4B130F5CA5
                    (pvVar8,0);
        }
        local_334 = 8;
        il2cpp::utils::
        FinallyHelper<OVRVirtualKeyboard_UpdateAnimationState_m97D475B7489C7DF017727831C6AFB8B092E3D310::$_15,false>
        ::~FinallyHelper(aFStack_4a8);
      }
    }
  }
  return;
}


