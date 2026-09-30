/*
FUNCTION_NAME: FUN_05b07be4
ENTRY_POINT: 05b07be4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05b07be4(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  if ((DAT_06bc2861 & 1) == 0) {
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<OVRAnchor_Tracker_<Dispose>d__12>__
                );
    FUN_02f08768(Method_UnityEngine_Awaitable_OnDelayedCallManagerCleared__);
    FUN_02f08768(Method_UnityEngine_Awaitable_ThrowIfNotMainThread__);
    FUN_02f08768(Method_UnityEngine_Awaitable_WireupCancellation__);
    FUN_02f08768(Method_Oculus_Interaction_Surfaces_AxisAlignedBox_ClosestSurfaceNormal__);
    FUN_02f08768(Method_System_Xml_Base64Decoder_Decode__);
    FUN_02f08768(Method_System_Xml_Base64Decoder_Decode__);
    FUN_02f08768(PTR_DAT_067ca548);
    FUN_02f08768(PTR_DAT_067ca648);
    DAT_06bc2861 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_58 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_a8 = 0;
  uVar6 = FUN_04f6ebb4(param_2,0);
  if ((uVar6 & 1) != 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar8 = thunk_FUN_02f45270();
    uVar7 = thunk_FUN_02f6ef30(System_Collections_Generic_IEnumerator<XAttribute>_TypeInfo);
    FUN_0504ee1c(uVar8,uVar7,0);
LAB_05b07fc4:
    uVar7 = thunk_FUN_02f6ef30(Method_System_Xml_Base64Encoder_Encode__);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar8,uVar7);
  }
  if (*(int *)(*(long *)PTR_DAT_067ca548 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05b65a08(param_2,&local_70,&local_90,&local_58,0);
  FUN_05a9e398(&local_a0,param_3,0);
  uVar6 = FUN_05aa67f4(&local_a0,0);
  if ((uVar6 & 1) != 0) {
    uStack_98 = uStack_68;
    local_a0 = local_70;
    uVar6 = FUN_05aa67f4(&local_a0,0);
    if ((uVar6 & 1) != 0) {
      thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
      uVar8 = thunk_FUN_02f45270();
      uVar7 = thunk_FUN_02f6ef30(Method_Newtonsoft_Json_Utilities_Base64Encoder_ValidateEncode__);
      uVar9 = thunk_FUN_02f6ef30(PTR_DAT_067cd778);
      FUN_0504ee88(uVar8,uVar7,uVar9,0);
      goto LAB_05b07fc4;
    }
  }
  if (((param_4 & 1) != 0) && ((int)local_90 == 0)) {
    uStack_b8 = uStack_98;
    local_c0 = local_a0;
    uVar7 = thunk_FUN_02f6ef30(Method_UnityEngine_XR_ARFoundation_ARDebugMenu_OnPointCloudChanged__)
    ;
    uVar7 = thunk_FUN_02f44ec4(uVar7,&local_c0);
    uVar8 = thunk_FUN_02f6ef30(Method_System_Xml_Base64Decoder_Decode__);
    uVar7 = FUN_04f65e2c(uVar8,uVar7,0);
    thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
    uVar9 = thunk_FUN_02f45270();
    uVar8 = thunk_FUN_02f6ef30(System_Collections_Generic_IEnumerator<XAttribute>_TypeInfo);
    FUN_0504ee88(uVar9,uVar7,uVar8,0);
LAB_05b08098:
    uVar7 = thunk_FUN_02f6ef30(Method_System_Xml_Base64Encoder_Encode__);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar9,uVar7);
  }
  uVar5 = FUN_05b63e60(param_1 + 0x18,local_a0,uStack_98,0);
  if (((uVar5 & 1) != 0) && ((param_4 & 1) != 0)) {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_05b07ed4;
    uVar6 = FUN_03738d98(*(long *)(param_1 + 0x40),local_a0,uStack_98,
                         *(undefined8 *)Method_System_Xml_Base64Decoder_Decode__);
    puVar1 = Method_UnityEngine_XR_ARFoundation_ARDebugMenu_OnPointCloudChanged__;
    if ((uVar6 & 1) == 0) {
      uStack_b8 = uStack_98;
      local_c0 = local_a0;
      uVar7 = thunk_FUN_02f6ef30(
                                Method_UnityEngine_XR_ARFoundation_ARDebugMenu_OnPointCloudChanged__
                                );
      uVar7 = thunk_FUN_02f44ec4(uVar7,&local_c0);
      uVar8 = thunk_FUN_02f6ef30(Method_System_Text_Base64Encoding_GetByteCount__);
      uVar7 = FUN_04f65e2c(uVar8,uVar7,0);
      uStack_c8 = uStack_98;
      local_d0 = local_a0;
      uVar8 = thunk_FUN_02f6ef30(puVar1);
      uVar8 = thunk_FUN_02f44ec4(uVar8,&local_d0);
      uVar9 = thunk_FUN_02f6ef30(Method_System_Text_Base64Encoding_GetBytes__);
      uVar8 = FUN_04f65e2c(uVar9,uVar8,0);
      uVar9 = thunk_FUN_02f6ef30(Method_System_Text_Base64Encoding_GetBytes__);
      uVar7 = FUN_04f6f6b4(uVar7,uVar8,uVar9,0);
      thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
      uVar9 = thunk_FUN_02f45270();
      FUN_05055664(uVar9,uVar7,0);
      goto LAB_05b08098;
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_048d11c4(*(long *)(param_1 + 0x20),local_a0,uStack_98,param_2,
                 *(undefined8 *)Method_UnityEngine_Awaitable_ThrowIfNotMainThread__);
    if ((param_4 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_05b07ed4;
      FUN_03739890(*(long *)(param_1 + 0x40),local_a0,uStack_98,
                   *(undefined8 *)
                    Method_Oculus_Interaction_Surfaces_AxisAlignedBox_ClosestSurfaceNormal__);
      puVar4 = Method_System_Xml_Base64Decoder_Decode__;
      puVar3 = Method_UnityEngine_Awaitable_WireupCancellation__;
      puVar2 = Method_UnityEngine_Awaitable_OnDelayedCallManagerCleared__;
      puVar1 = 
      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<OVRAnchor_Tracker_<Dispose>d__12>__
      ;
      if (0 < (int)local_90) {
        iVar10 = 0;
        do {
          auVar11 = FUN_037a5de8(&local_90,iVar10,*(undefined8 *)puVar4);
          if (*(long *)(param_1 + 0x38) == 0) goto LAB_05b07ed4;
          FUN_048d2c20(*(long *)(param_1 + 0x38),auVar11._0_8_,auVar11._8_8_,&local_a8,
                       *(undefined8 *)puVar2);
          if ((uVar5 & 1) == 0) {
            FUN_032e9220(&local_a8,local_a0,uStack_98,*(undefined8 *)puVar1);
          }
          if (*(long *)(param_1 + 0x38) == 0) goto LAB_05b07ed4;
          FUN_048d11c4(*(long *)(param_1 + 0x38),auVar11._0_8_,auVar11._8_8_,local_a8,
                       *(undefined8 *)puVar3);
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)local_90);
      }
    }
    puVar1 = PTR_DAT_067ca648;
    uStack_e8 = uStack_88;
    local_f0 = local_90;
    uStack_d8 = uStack_78;
    uStack_e0 = uStack_80;
    FUN_05b0e964(param_1,local_a0,uStack_98,&local_f0,uVar5 & 1,0,param_4 & 1);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar6 = FUN_05a9d164(&local_58,0);
    if ((uVar6 & 1) == 0) {
      uVar7 = FUN_05a9e714(local_a0,uStack_98,0);
      FUN_05b0edfc(param_1,uVar7,local_58);
    }
    return;
  }
LAB_05b07ed4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


