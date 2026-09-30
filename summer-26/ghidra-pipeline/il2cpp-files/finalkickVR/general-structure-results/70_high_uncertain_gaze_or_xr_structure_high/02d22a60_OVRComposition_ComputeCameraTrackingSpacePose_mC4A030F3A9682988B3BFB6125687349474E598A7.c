/*
FUNCTION_NAME: OVRComposition_ComputeCameraTrackingSpacePose_mC4A030F3A9682988B3BFB6125687349474E598A7
ENTRY_POINT: 02d22a60
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRComposition_ComputeCameraTrackingSpacePose_mC4A030F3A9682988B3BFB6125687349474E598A7
               (undefined8 *param_1,long param_2,void *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_5f0 [2];
  undefined8 uStack_5dc;
  undefined8 local_5d0;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined8 uStack_5bc;
  undefined8 local_5ac;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined8 uStack_598;
  undefined8 local_570;
  undefined8 uStack_55c;
  undefined8 local_550;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined8 uStack_53c;
  byte local_52d;
  int local_52c;
  undefined1 auStack_528 [20];
  int local_514;
  undefined8 local_4f0 [2];
  undefined8 uStack_4dc;
  undefined1 local_4d0 [36];
  undefined8 local_4ac;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined8 uStack_498;
  undefined8 local_470;
  undefined8 uStack_45c;
  undefined1 local_410 [36];
  undefined8 local_3ec;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 uStack_3d8;
  undefined4 local_36c;
  undefined1 auStack_368 [20];
  undefined4 local_354;
  byte local_32e;
  byte local_32d;
  undefined4 local_32c;
  undefined1 auStack_328 [20];
  undefined4 local_314;
  int local_2ec;
  undefined1 auStack_2e8 [20];
  int local_2d4;
  undefined8 local_2b0;
  undefined8 uStack_29c;
  undefined8 local_290 [2];
  undefined4 uStack_280;
  undefined8 uStack_27c;
  undefined1 local_270 [36];
  undefined8 local_24c;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined8 local_210;
  undefined4 uStack_200;
  undefined8 uStack_1fc;
  undefined1 local_1f0 [196];
  undefined8 local_12c;
  undefined4 uStack_118;
  undefined1 auStack_c8 [56];
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined8 local_30;
  long local_28;
  
  puVar2 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  uVar3 = _uStack_5a4;
  local_30 = param_4;
  local_28 = param_2;
  if ((OVRComposition_ComputeCameraTrackingSpacePose_mC4A030F3A9682988B3BFB6125687349474E598A7::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    uVar3 = _uStack_5a4;
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    _uStack_5a4 = uVar3;
    uVar3 = _uStack_5a4;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<Awake>b__90_0__);
    _uStack_5a4 = uVar3;
    uVar3 = _uStack_5a4;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_IO_Stream_<>c_<BeginEndReadAsync>b__45_0__);
    _uStack_5a4 = uVar3;
    uVar3 = _uStack_5a4;
    OVRComposition_ComputeCameraTrackingSpacePose_mC4A030F3A9682988B3BFB6125687349474E598A7::
    s_Il2CppMethodInitialized = 1;
  }
  _uStack_5a4 = uVar3;
  uVar4 = uStack_5a0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_40 = 0;
  uStack_3c = 0;
  local_38 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_60._4_4_ = 0;
  local_58 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_80 = 0;
  uStack_7c = 0;
  local_78 = 0;
  uStack_5a0 = uVar4;
  il2cpp_codegen_initobj(&local_50,0x1c);
  uVar3 = local_60;
  uVar4 = local_60._4_4_;
  local_60 = uVar3;
  uVar3 = local_60;
  local_60._4_4_ = uVar4;
  memcpy(auStack_c8,param_3,0x38);
  uVar3 = local_60;
  uVar4 = local_60._4_4_;
  local_60 = uVar3;
  uVar3 = local_60;
  local_60._4_4_ = uVar4;
  OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F();
  uVar3 = local_60;
  local_70 = local_12c;
  local_60._4_4_ = uStack_118;
  uVar4 = local_60._4_4_;
  local_60 = uVar3;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  local_60._4_4_ = uVar4;
  uVar3 = local_60;
  uVar4 = local_60._4_4_;
  local_60 = uVar3;
  OVRPlugin_GetTrackingTransformRelativePose_m594736E2B1E616394C8BEBE60A2ACB5FEE4F3005(2,0);
  local_60._4_4_ = uVar4;
  uVar3 = local_60;
  uVar4 = local_60._4_4_;
  local_60 = uVar3;
  OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F(local_1f0,0);
  local_60._4_4_ = uVar4;
  uVar3 = local_60;
  local_210 = local_70;
  uStack_27c = CONCAT44(local_58,local_60._4_4_);
  uStack_200 = (undefined4)uVar3;
  local_290[0] = local_70;
  uStack_280 = uStack_200;
  uStack_1fc = uStack_27c;
  local_60 = uVar3;
  OVRPose_op_Multiply_mCAC208D92589C2CA928CB093B3C504DFA9866AFE(local_270,local_290,0);
  local_2b0 = local_24c;
  uStack_29c = CONCAT44(local_58,uStack_238);
  uStack_48 = uStack_244;
  local_50 = local_24c;
  local_38 = local_58;
  uStack_3c = uStack_238;
  local_40 = uStack_23c;
  uStack_44 = uStack_240;
  memcpy(auStack_2e8,param_3,0x38);
  local_2ec = local_2d4;
  if (local_2d4 != -1) {
    memcpy(auStack_328,param_3,0x38);
    local_32c = local_314;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_32d = OVRPlugin_GetNodePresent_m5650738AE833C3C1DD04EBF700433AF236A2B20B(local_32c,0);
    local_32d = local_32d & 1;
    if (local_32d != 0) {
      local_32e = *(byte *)(local_28 + 0x20) & 1;
      if (local_32e != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                  (*(undefined8 *)Method_System_IO_Stream_<>c_<BeginEndReadAsync>b__45_0__,0);
        *(undefined1 *)(local_28 + 0x20) = 0;
      }
      memcpy(auStack_368,param_3,0x38);
      local_36c = local_354;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3(local_36c,0xffffffff);
      OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F(local_410,0);
      uStack_7c = (undefined4)uStack_3d8;
      local_78 = (undefined4)((ulong)uStack_3d8 >> 0x20);
      *(ulong *)(local_28 + 0x2c) = CONCAT44(uStack_3e0,uStack_3e4);
      *(undefined8 *)(local_28 + 0x24) = local_3ec;
      *(undefined8 *)(local_28 + 0x38) = uStack_3d8;
      *(ulong *)(local_28 + 0x30) = CONCAT44(uStack_3dc,uStack_3e0);
      local_470 = local_50;
      uStack_4dc = CONCAT44(local_38,uStack_3c);
      local_4f0[0] = local_50;
      uStack_45c = uStack_4dc;
      OVRPose_op_Multiply_mCAC208D92589C2CA928CB093B3C504DFA9866AFE(local_4d0,local_4f0,0);
      local_50 = local_4ac;
      uStack_48 = uStack_4a4;
      local_38 = (undefined4)((ulong)uStack_498 >> 0x20);
      uStack_3c = (undefined4)uStack_498;
      local_40 = uStack_49c;
      uStack_44 = uStack_4a0;
      goto LAB_02d23004;
    }
    local_32d = 0;
  }
  memcpy(auStack_528,param_3,0x38);
  local_52c = local_514;
  if (local_514 != -1) {
    local_52d = *(byte *)(local_28 + 0x20) & 1;
    if (local_52d == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)
                  Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<Awake>b__90_0__,0)
      ;
      *(undefined1 *)(local_28 + 0x20) = 1;
    }
    local_5d0 = *(undefined8 *)(local_28 + 0x24);
    uStack_548 = (undefined4)*(undefined8 *)(local_28 + 0x2c);
    uStack_5bc = *(undefined8 *)(local_28 + 0x38);
    uStack_544 = (undefined4)*(undefined8 *)(local_28 + 0x30);
    uStack_540 = (undefined4)((ulong)*(undefined8 *)(local_28 + 0x30) >> 0x20);
    local_570 = local_50;
    uStack_5dc = CONCAT44(local_38,uStack_3c);
    uStack_5c8 = uStack_548;
    local_5f0[0] = local_50;
    uStack_5c4 = uStack_544;
    uStack_5c0 = uStack_540;
    uStack_55c = uStack_5dc;
    local_550 = local_5d0;
    uStack_53c = uStack_5bc;
    OVRPose_op_Multiply_mCAC208D92589C2CA928CB093B3C504DFA9866AFE(&local_5d0,local_5f0,0);
    uStack_48 = uStack_5a4;
    local_50 = local_5ac;
    local_38 = (undefined4)((ulong)uStack_598 >> 0x20);
    uStack_3c = (undefined4)uStack_598;
    local_40 = uStack_59c;
    uStack_44 = uStack_5a0;
  }
LAB_02d23004:
  param_1[1] = CONCAT44(uStack_44,uStack_48);
  *param_1 = local_50;
  *(ulong *)((long)param_1 + 0x14) = CONCAT44(local_38,uStack_3c);
  *(ulong *)((long)param_1 + 0xc) = CONCAT44(local_40,uStack_44);
  return;
}


