/*
FUNCTION_NAME: OVRPassthroughColorLut$$GetTextureSizeFromByteArray
ENTRY_POINT: 02d6c46c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_11;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1
OVRPassthroughColorLut__GetTextureSizeFromByteArray
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          int param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
          undefined8 *param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uStack_724;
  undefined1 auStack_6f0 [52];
  ulong uStack_6bc;
  undefined4 uStack_6b4;
  undefined8 *puStack_698;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_66c;
  undefined8 uStack_65c;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_620;
  undefined8 auStack_600 [2];
  undefined8 uStack_5ec;
  undefined8 *puStack_5a8;
  byte bStack_59d;
  int iStack_59c;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined8 uStack_580;
  undefined4 uStack_568;
  undefined1 auStack_560 [28];
  ulong uStack_544;
  undefined4 uStack_53c;
  undefined8 *puStack_508;
  undefined8 uStack_500;
  undefined4 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e4;
  undefined8 uStack_4dc;
  undefined8 uStack_4cc;
  undefined4 uStack_4a8;
  undefined8 uStack_490;
  undefined4 uStack_488;
  undefined8 uStack_484;
  undefined8 uStack_470;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined8 uStack_45c;
  undefined8 *puStack_418;
  byte bStack_40d;
  int iStack_40c;
  undefined1 auStack_408 [88];
  undefined1 auStack_3b0 [88];
  undefined1 auStack_358 [88];
  undefined1 auStack_300 [88];
  undefined1 auStack_2a8 [88];
  undefined1 auStack_250 [88];
  undefined1 auStack_1f8 [88];
  undefined1 auStack_1a0 [88];
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 *puStack_110;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 *puStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_b8;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 *puStack_90;
  undefined1 auStack_88 [88];
  undefined8 uStack_30;
  undefined8 *puStack_28;
  undefined8 *puStack_20;
  undefined8 *puStack_18;
  undefined8 *puStack_10;
  int iStack_8;
  
  puVar3 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
  ;
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  uVar4 = _uStack_468;
  uStack_30 = param_10;
  puStack_28 = param_9;
  puStack_20 = param_8;
  puStack_18 = param_7;
  puStack_10 = param_6;
  iStack_8 = param_5;
  if ((OVRInput_GetLocalControllerStatesWithoutPrediction_m103D67215F6473717F5FA7747FD6B835070248C2
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
              );
    uVar4 = _uStack_468;
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    _uStack_468 = uVar4;
    uVar4 = _uStack_468;
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    _uStack_468 = uVar4;
    uVar4 = _uStack_468;
    OVRInput_GetLocalControllerStatesWithoutPrediction_m103D67215F6473717F5FA7747FD6B835070248C2::
    s_Il2CppMethodInitialized = 1;
  }
  _uStack_468 = uVar4;
  uVar6 = uStack_464;
  uStack_464 = uVar6;
  memset(auStack_88,0,0x58);
  puStack_90 = puStack_10;
  uStack_ac = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
  uStack_a0 = CONCAT44(param_2,uStack_ac);
  *puStack_90 = uStack_a0;
  *(undefined4 *)(puStack_90 + 1) = param_3;
  puStack_b8 = puStack_18;
  uStack_a8 = param_2;
  uStack_a4 = param_3;
  uStack_98 = param_3;
  uStack_e0 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                        ((MethodInfo *)0x0);
  uStack_c8 = CONCAT44(param_4,param_3);
  uStack_d0 = CONCAT44(param_2,uStack_e0);
  puStack_b8[1] = uStack_c8;
  *puStack_b8 = uStack_d0;
  puStack_e8 = puStack_20;
  uStack_dc = param_2;
  uStack_d8 = param_3;
  uStack_d4 = param_4;
  uStack_104 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
  uStack_f8 = CONCAT44(param_2,uStack_104);
  *puStack_e8 = uStack_f8;
  *(undefined4 *)(puStack_e8 + 1) = param_3;
  puStack_110 = puStack_28;
  uStack_100 = param_2;
  uStack_fc = param_3;
  uStack_f0 = param_3;
  uStack_12c = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
  uStack_120 = CONCAT44(param_2,uStack_12c);
  *puStack_110 = uStack_120;
  *(undefined4 *)(puStack_110 + 1) = param_3;
  uStack_128 = param_2;
  uStack_124 = param_3;
  uStack_118 = param_3;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  iStack_130 = *(int *)(lVar5 + 0x100);
  if (iStack_130 == 1) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    iStack_134 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
    if (iStack_134 != 3) {
      return 0;
    }
    iStack_138 = iStack_8;
    if (iStack_8 < 3) {
      iStack_13c = iStack_8;
      if (iStack_8 == 1) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        OVRPlugin_GetNodePoseStateImmediate_m82DA3F8A7A7287C93F32AE7FE510509392F2F288(0xc,0);
        memcpy(auStack_1a0,auStack_1f8,0x58);
        memcpy(auStack_88,auStack_1a0,0x58);
      }
      else {
        iStack_140 = iStack_8;
        if (iStack_8 != 2) {
          return 0;
        }
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        OVRPlugin_GetNodePoseStateImmediate_m82DA3F8A7A7287C93F32AE7FE510509392F2F288(0xd,0);
        memcpy(auStack_300,auStack_358,0x58);
        memcpy(auStack_88,auStack_300,0x58);
      }
    }
    else {
      iStack_144 = iStack_8;
      if (iStack_8 == 0x20) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        OVRPlugin_GetNodePoseStateImmediate_m82DA3F8A7A7287C93F32AE7FE510509392F2F288(3,0);
        memcpy(auStack_250,auStack_2a8,0x58);
        memcpy(auStack_88,auStack_250,0x58);
      }
      else {
        iStack_148 = iStack_8;
        if (iStack_8 != 0x40) {
          return 0;
        }
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        OVRPlugin_GetNodePoseStateImmediate_m82DA3F8A7A7287C93F32AE7FE510509392F2F288(4,0);
        memcpy(auStack_3b0,auStack_408,0x58);
        memcpy(auStack_88,auStack_3b0,0x58);
      }
    }
    iStack_40c = iStack_8;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    bStack_40d = OVRInput_GetControllerPositionValid_m3ACDABE2BD5335A8DE615A2F9A5C9D63CE329E94
                           (iStack_40c,0);
    bStack_40d = bStack_40d & 1;
    if (bStack_40d != 0) {
      puStack_418 = puStack_10;
      memcpy(&uStack_470,auStack_88,0x58);
      uStack_488 = uStack_468;
      uStack_490 = uStack_470;
      uStack_4e4 = CONCAT44(uStack_460,uStack_464);
      uStack_4f0 = uStack_470;
      uStack_4dc = uStack_45c;
      uStack_484 = uStack_4e4;
      OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F();
      uStack_500 = uStack_4cc;
      uStack_4f8 = uStack_4a8;
      *puStack_418 = uStack_4cc;
      *(undefined4 *)(puStack_418 + 1) = uStack_4a8;
      puStack_508 = puStack_20;
      memcpy(auStack_560,auStack_88,0x58);
      uStack_568 = uStack_53c;
      uStack_590 = uStack_53c;
      uStack_594 = (undefined4)(uStack_544 >> 0x20);
      uStack_58c = OVRExtensions_FromFlippedZVector3f_m32D17BCDA62BC3F8C9A6442F06A42BBE79140F62
                             (uStack_544 & 0xffffffff,0);
      uStack_580 = CONCAT44(uStack_594,uStack_58c);
      *puStack_508 = uStack_580;
      *(undefined4 *)(puStack_508 + 1) = uStack_53c;
      uStack_588 = uStack_594;
    }
    iStack_59c = iStack_8;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    bStack_59d = OVRInput_GetControllerOrientationValid_m9EE0634367BCEAF60C6DDBA9CF527F2CEC8327C1
                           (iStack_59c,0);
    bStack_59d = bStack_59d & 1;
    if (bStack_59d != 0) {
      puStack_5a8 = puStack_18;
      memcpy(auStack_600,auStack_88,0x58);
      uStack_620 = auStack_600[0];
      uStack_680 = auStack_600[0];
      uStack_66c = uStack_5ec;
      OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F();
      uStack_640 = uStack_65c;
      uStack_688 = uStack_648;
      puStack_5a8[1] = uStack_648;
      *puStack_5a8 = CONCAT44(uStack_64c,uStack_650);
      puStack_698 = puStack_28;
      memcpy(auStack_6f0,auStack_88,0x58);
      uStack_724 = (undefined4)(uStack_6bc >> 0x20);
      uVar6 = OVRExtensions_FromFlippedZVector3f_m32D17BCDA62BC3F8C9A6442F06A42BBE79140F62
                        (uStack_6bc & 0xffffffff,0);
      *puStack_698 = CONCAT44(uStack_724,uVar6);
      *(undefined4 *)(puStack_698 + 1) = uStack_6b4;
    }
    return 1;
  }
  return 0;
}


