/*
FUNCTION_NAME: U3CStartKeyboardTrackingCoroutineU3Ed__93_MoveNext_mCD717FE39F494757DFF7C9469CCC5225EBCBE11A
ENTRY_POINT: 02e10ed4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4
U3CStartKeyboardTrackingCoroutineU3Ed__93_MoveNext_mCD717FE39F494757DFF7C9469CCC5225EBCBE11A
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *pOVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  float *pfVar6;
  long lVar7;
  undefined4 uVar8;
  TrackedKeyboardSetActiveEvent_tC4974BE476053C526BBCA04CEBD40BA05EED61B5 local_429;
  void *local_428;
  void *local_420;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_418;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_410;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_408;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_400;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_3f8;
  void *local_3f0;
  undefined8 local_3e8;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_3e0;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_3d8;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_3d0;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_3c8;
  undefined1 auStack_3c0 [40];
  undefined1 auStack_398 [40];
  undefined1 auStack_370 [40];
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_348;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_340;
  undefined4 local_334;
  undefined1 auStack_330 [40];
  undefined1 auStack_308 [32];
  undefined4 local_2e8;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_2e0;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  float local_2b0;
  float local_2ac;
  undefined8 local_2a8;
  float local_2a0;
  undefined1 auStack_298 [40];
  undefined1 auStack_270 [16];
  undefined8 local_260;
  float local_258;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_248;
  undefined4 local_23c;
  float local_238;
  float local_234;
  undefined8 local_230;
  undefined4 local_228;
  undefined1 auStack_220 [40];
  undefined1 auStack_1f8 [16];
  undefined8 local_1e8;
  undefined4 local_1e0;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_1d0;
  void *local_1c8;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_1c0;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_1b8;
  byte local_1a9;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_1a8;
  byte local_199;
  undefined8 local_198;
  undefined1 auStack_190 [40];
  undefined1 auStack_168 [8];
  undefined8 local_160;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 *local_128;
  undefined1 auStack_120 [40];
  undefined1 auStack_f8 [40];
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_d0;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_c8;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_c0;
  byte local_b1;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_b0;
  int local_a4;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_a0;
  int local_94;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [32];
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_48;
  int local_3c;
  undefined8 local_38;
  long local_30;
  
  puVar2 = StringLiteral_232;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_38 = param_2;
  local_30 = param_1;
  if ((U3CStartKeyboardTrackingCoroutineU3Ed__93_MoveNext_mCD717FE39F494757DFF7C9469CCC5225EBCBE11A
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_249);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_250);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_251);
    U3CStartKeyboardTrackingCoroutineU3Ed__93_MoveNext_mCD717FE39F494757DFF7C9469CCC5225EBCBE11A::
    s_Il2CppMethodInitialized = 1;
  }
  local_3c = 0;
  local_48 = (OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *)0x0;
  memset(auStack_70,0,0x28);
  local_80 = 0;
  local_78 = 0;
  local_88 = (void *)0x0;
  local_90 = 0;
  local_a4 = *(int *)(local_30 + 0x10);
  local_b0 = *(OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF **)(local_30 + 0x20);
  if (local_a4 == 0) {
    *(undefined4 *)(local_30 + 0x10) = 0xffffffff;
    local_a0 = local_b0;
    local_94 = local_a4;
    local_48 = local_b0;
    local_3c = local_a4;
    NullCheck(local_b0);
    local_b1 = OVRTrackedKeyboard_KeyboardTrackerIsRunning_m89EBBC7FE1BFE0EE1214FD83682CC1EE35576B28
                         (local_b0,0);
    local_b1 = local_b1 & 1;
    if (local_b1 == 0) {
      local_c0 = local_48;
      NullCheck(local_48);
      OVRTrackedKeyboard_InitializeKeyboardInfo_m3B11D620CD998265CC299672D57C2501945E1C9B(local_c0);
      local_c8 = local_48;
      NullCheck(local_48);
      OVRTrackedKeyboard_RegisterPassthroughMeshToSDK_m9DEE28B5A973CA40F0BC89F84E31F3D45FD23D27
                (local_c8,0);
      local_d0 = local_48;
      NullCheck(local_48);
      OVRTrackedKeyboard_get_SystemKeyboardInfo_mF661887E609CD0F03D94FAB1BB7B93A2AC42F0A1_inline
                (local_d0,(MethodInfo *)0x0);
      memcpy(auStack_f8,auStack_120,0x28);
      memcpy(auStack_70,auStack_f8,0x28);
      local_128 = auStack_68;
      local_130 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(local_128,0);
      local_138 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                            (*(undefined8 *)StringLiteral_251,local_130,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(local_138,0);
      local_140 = local_48;
      NullCheck(local_48);
      OVRTrackedKeyboard_get_SystemKeyboardInfo_mF661887E609CD0F03D94FAB1BB7B93A2AC42F0A1_inline
                (local_140,(MethodInfo *)0x0);
      memcpy(auStack_168,auStack_190,0x28);
      local_198 = local_160;
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
      local_199 = OVRPlugin_StartKeyboardTracking_mAA0B649E8AFD8CF13885AA51C7013BBD29BCD05A
                            (local_198,0);
      local_199 = local_199 & 1;
      if (local_199 == 0) {
        local_1a8 = local_48;
        NullCheck(local_48);
        local_1a9 = (byte)local_1a8[0x7a] & 1;
        if (local_1a9 == 0) {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                    (*(undefined8 *)StringLiteral_250);
          local_1b8 = local_48;
          NullCheck(local_48);
          OVRTrackedKeyboard_SetKeyboardState_m630A09B00CE44F467EC1D6F0453AAB17DA8C507D
                    (local_1b8,6,0);
          return 0;
        }
      }
      local_1c0 = local_48;
      NullCheck(local_48);
      local_1c8 = *(void **)(local_1c0 + 0xf0);
      il2cpp_codegen_initobj(&local_80,0xc);
      local_1d0 = local_48;
      NullCheck(local_48);
      OVRTrackedKeyboard_get_SystemKeyboardInfo_mF661887E609CD0F03D94FAB1BB7B93A2AC42F0A1_inline
                (local_1d0,(MethodInfo *)0x0);
      memcpy(auStack_1f8,auStack_220,0x28);
      local_230 = local_1e8;
      uVar4 = local_230;
      local_228 = local_1e0;
      local_230._0_4_ = (float)local_1e8;
      local_234 = (float)local_230;
      local_230 = uVar4;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      pfVar6 = (float *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      local_238 = *pfVar6;
      uVar8 = il2cpp_codegen_multiply<float,float>(local_234,local_238);
      local_80 = CONCAT44(local_80._4_4_,uVar8);
      lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      local_23c = *(undefined4 *)(lVar7 + 4);
      local_80 = CONCAT44(local_23c,(undefined4)local_80);
      local_248 = local_48;
      NullCheck(local_48);
      OVRTrackedKeyboard_get_SystemKeyboardInfo_mF661887E609CD0F03D94FAB1BB7B93A2AC42F0A1_inline
                (local_248,(MethodInfo *)0x0);
      memcpy(auStack_270,auStack_298,0x28);
      local_2a8 = local_260;
      local_2a0 = local_258;
      local_2ac = local_258;
      lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      local_2b0 = *(float *)(lVar7 + 8);
      local_2b8 = il2cpp_codegen_multiply<float,float>(local_2ac,local_2b0);
      local_2c0 = local_80;
      local_78 = local_2b8;
      NullCheck(local_1c8);
      local_2d0 = local_2c0;
      uVar4 = local_2d0;
      local_2c8 = local_2b8;
      local_2d0._0_4_ = (undefined4)local_2c0;
      uVar8 = (undefined4)local_2d0;
      local_2d0._4_4_ = (undefined4)((ulong)local_2c0 >> 0x20);
      uVar5 = local_2d0._4_4_;
      local_2d0 = uVar4;
      Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633
                (uVar8,uVar5,local_2b8,local_1c8,0);
      local_2d8 = local_48;
      local_2e0 = local_48;
      NullCheck(local_48);
      OVRTrackedKeyboard_get_SystemKeyboardInfo_mF661887E609CD0F03D94FAB1BB7B93A2AC42F0A1_inline
                (local_2e0,(MethodInfo *)0x0);
      memcpy(auStack_308,auStack_330,0x28);
      local_334 = local_2e8;
      NullCheck(local_2d8);
      *(undefined4 *)(local_2d8 + 0xa0) = local_334;
      local_340 = local_48;
      local_348 = local_48;
      NullCheck(local_48);
      OVRTrackedKeyboard_get_SystemKeyboardInfo_mF661887E609CD0F03D94FAB1BB7B93A2AC42F0A1_inline
                (local_348,(MethodInfo *)0x0);
      memcpy(auStack_370,auStack_398,0x28);
      NullCheck(local_340);
      pOVar3 = local_340;
      memcpy(auStack_3c0,auStack_370,0x28);
      OVRTrackedKeyboard_set_ActiveKeyboardInfo_m4B2DC0A51C8C4CA3CEC0B9CAB27F7446FEB4031F_inline
                (pOVar3,auStack_3c0,0);
      local_3c8 = local_48;
      NullCheck(local_48);
      OVRTrackedKeyboard_LoadKeyboardMesh_m050A53F6358B524AE6A4619B7C7ECAF5CF9FB4F2(local_3c8,0);
      local_3d0 = local_48;
      local_3d8 = local_48;
      local_3e0 = local_48;
      NullCheck(local_48);
      local_3e8 = OVRTrackedKeyboard_UpdateKeyboardPose_mEFB9F00A6F984242ADF546F1115F0E9EAACFB273
                            (local_3e0,0);
      NullCheck(local_3d8);
      local_3f0 = (void *)MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812
                                    (local_3d8,local_3e8,0);
      NullCheck(local_3d0);
      *(void **)(local_3d0 + 0x130) = local_3f0;
      Il2CppCodeGenWriteBarrier((void **)(local_3d0 + 0x130),local_3f0);
      local_3f8 = local_48;
      NullCheck(local_48);
      local_400 = local_3f8 + 0x150;
      il2cpp_codegen_initobj(local_400,0x10);
      local_408 = local_48;
      NullCheck(local_48);
      local_410 = local_408 + 0x160;
      il2cpp_codegen_initobj(local_410,0x14);
      local_418 = local_48;
      NullCheck(local_48);
      local_428 = *(void **)(local_418 + 0x108);
      local_420 = local_428;
      if (local_428 == (void *)0x0) {
        local_90 = 0;
      }
      else {
        local_429 = 0;
        local_88 = local_428;
        TrackedKeyboardSetActiveEvent__ctor_m8802E85290C3CFAACE052E0382F12B1146F44A09_inline
                  (&local_429,true,(MethodInfo *)0x0);
        NullCheck(local_88);
        Action_1_Invoke_m3879B064FDB31C39BCA16CAEB7736C541A5E146B_inline(local_88,local_429,0);
      }
      pOVar3 = local_48;
      NullCheck(local_48);
      OVRTrackedKeyboard_SetKeyboardState_m630A09B00CE44F467EC1D6F0453AAB17DA8C507D(pOVar3,3,0);
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(*(undefined8 *)StringLiteral_249,0);
    }
  }
  return 0;
}


