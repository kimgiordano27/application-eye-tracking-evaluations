/*
FUNCTION_NAME: OVRHand_GetHandState_mBD1BF8D085AEC330690A94B4BF843B66AE1B45F7
ENTRY_POINT: 02e404b0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_14;validity_or_gating_hits_15;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_1
*/


void OVRHand_GetHandState_mBD1BF8D085AEC330690A94B4BF843B66AE1B45F7
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509 *param_5,undefined4 param_6)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_104;
  
  if ((OVRHand_GetHandState_mBD1BF8D085AEC330690A94B4BF843B66AE1B45F7::s_Il2CppMethodInitialized & 1
      ) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRHand_GetHandState_mBD1BF8D085AEC330690A94B4BF843B66AE1B45F7::s_Il2CppMethodInitialized = 1;
  }
  uVar6 = *(undefined4 *)(param_5 + 0x20);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar2 = OVRPlugin_GetHandState_mE2C770D20C35F76C32CF9EB09E1D7EA43A5BEAFA
                    (param_6,uVar6,param_5 + 0x40,0);
  if ((bVar2 & 1) == 0) {
    OVRHand_set_IsTracked_m28648B25A51EDC46857C5C69F48808A34FADEE3D_inline
              (param_5,false,(MethodInfo *)0x0);
    OVRHand_set_IsSystemGestureInProgress_m45940F8E9DBE11AC5F544D15F6C7EA87C630B1C8_inline
              (param_5,false,(MethodInfo *)0x0);
    System_Linq_Expressions_Error__VariableMustNotBeByRef(param_5,false,(MethodInfo *)0x0);
    pvVar4 = (void *)OVRHand_get_PointerPose_m73F63D96088BD85101E3960FAAE6075B40B98514_inline
                               (param_5,(MethodInfo *)0x0);
    uVar6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
    NullCheck(pvVar4);
    Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(uVar6,pvVar4,0);
    pvVar4 = (void *)OVRHand_get_PointerPose_m73F63D96088BD85101E3960FAAE6075B40B98514_inline
                               (param_5,(MethodInfo *)0x0);
    uVar6 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                      ((MethodInfo *)0x0);
    NullCheck(pvVar4);
    Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
              (uVar6,param_2,param_3,param_4,pvVar4,0);
    OVRHand_set_HandScale_mC79B4119754E3B5BD95A5D39C9F01C4DFE15EABF_inline
              (param_5,1.0,(MethodInfo *)0x0);
    OVRHand_set_HandConfidence_mD066797DAC7DC0108252381FBA515EE25796CB1C_inline
              (param_5,0,(MethodInfo *)0x0);
    OVRHand_set_IsDataValid_m4BF5D1BF64F2A4B2F43616203C0287D6C8FBE7C6_inline
              (param_5,false,(MethodInfo *)0x0);
    OVRHand_set_IsDataHighConfidence_mC9548B6D2A55891672287B9E2BFB554151E86383_inline
              (param_5,false,(MethodInfo *)0x0);
  }
  else {
    OVRHand_set_IsTracked_m28648B25A51EDC46857C5C69F48808A34FADEE3D_inline
              (param_5,(*(uint *)(param_5 + 0x40) & 1) != 0,(MethodInfo *)0x0);
    OVRHand_set_IsSystemGestureInProgress_m45940F8E9DBE11AC5F544D15F6C7EA87C630B1C8_inline
              (param_5,(*(uint *)(param_5 + 0x40) & 0x40) != 0,(MethodInfo *)0x0);
    System_Linq_Expressions_Error__VariableMustNotBeByRef
              (param_5,(*(uint *)(param_5 + 0x40) & 2) != 0,(MethodInfo *)0x0);
    OVRHand_set_IsDominantHand_m47E59C565B349B8EEC68A76713DF7A252336AB1A_inline
              (param_5,(*(uint *)(param_5 + 0x40) & 0x80) != 0,(MethodInfo *)0x0);
    pvVar4 = (void *)OVRHand_get_PointerPose_m73F63D96088BD85101E3960FAAE6075B40B98514_inline
                               (param_5,(MethodInfo *)0x0);
    uVar6 = *(undefined4 *)(param_5 + 0x90);
    uStack_104 = (undefined4)(*(ulong *)(param_5 + 0x88) >> 0x20);
    uVar5 = OVRExtensions_FromFlippedZVector3f_m32D17BCDA62BC3F8C9A6442F06A42BBE79140F62
                      (*(ulong *)(param_5 + 0x88) & 0xffffffff,0);
    NullCheck(pvVar4);
    Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
              (uVar5,uStack_104,uVar6,pvVar4,0);
    pvVar4 = (void *)OVRHand_get_PointerPose_m73F63D96088BD85101E3960FAAE6075B40B98514_inline
                               (param_5,(MethodInfo *)0x0);
    uStack_16c = (undefined4)(*(ulong *)(param_5 + 0x78) >> 0x20);
    uStack_168 = (undefined4)*(undefined8 *)(param_5 + 0x80);
    uStack_164 = (undefined4)((ulong)*(undefined8 *)(param_5 + 0x80) >> 0x20);
    uVar6 = OVRExtensions_FromFlippedZQuatf_mF626F183B84EA8C08153550313227736286F2657
                      (*(ulong *)(param_5 + 0x78) & 0xffffffff,0);
    NullCheck(pvVar4);
    Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
              (uVar6,uStack_16c,uStack_168,uStack_164,pvVar4,0);
    OVRHand_set_HandScale_mC79B4119754E3B5BD95A5D39C9F01C4DFE15EABF_inline
              (param_5,*(float *)(param_5 + 0x94),(MethodInfo *)0x0);
    OVRHand_set_HandConfidence_mD066797DAC7DC0108252381FBA515EE25796CB1C_inline
              (param_5,*(int *)(param_5 + 0x98),(MethodInfo *)0x0);
    OVRHand_set_IsDataValid_m4BF5D1BF64F2A4B2F43616203C0287D6C8FBE7C6_inline
              (param_5,true,(MethodInfo *)0x0);
    bVar2 = OVRHand_get_IsTracked_m869AA41C7CC8F224F1CD5A10FF6CD62E6F6BDFDA_inline
                      (param_5,(MethodInfo *)0x0);
    if ((bVar2 & 1) == 0) {
      bVar1 = false;
    }
    else {
      iVar3 = OVRHand_get_HandConfidence_m3B3B593995730923512B402CD57FC7D5E01D458F_inline
                        (param_5,(MethodInfo *)0x0);
      bVar1 = iVar3 == 0x3f800000;
    }
    NullCheck(param_5);
    OVRHand_set_IsDataHighConfidence_mC9548B6D2A55891672287B9E2BFB554151E86383_inline
              (param_5,bVar1,(MethodInfo *)0x0);
    uVar6 = *(undefined4 *)(param_5 + 0x20);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
              );
    iVar3 = OVRInput_GetControllerIsInHandState_m1F89D272E3F3FD38292CC65DA0C176F315C05C9A(uVar6,0);
    if (iVar3 == 1) {
      OVRHand_set_IsSystemGestureInProgress_m45940F8E9DBE11AC5F544D15F6C7EA87C630B1C8_inline
                (param_5,false,(MethodInfo *)0x0);
      System_Linq_Expressions_Error__VariableMustNotBeByRef(param_5,false,(MethodInfo *)0x0);
    }
    switch(*(undefined4 *)(param_5 + 0x30)) {
    case 0:
      break;
    case 1:
      if (iVar3 == 2) {
        OVRHand_set_IsDataValid_m4BF5D1BF64F2A4B2F43616203C0287D6C8FBE7C6_inline
                  (param_5,false,(MethodInfo *)0x0);
      }
      break;
    case 2:
      if (iVar3 != 1) {
        OVRHand_set_IsDataValid_m4BF5D1BF64F2A4B2F43616203C0287D6C8FBE7C6_inline
                  (param_5,false,(MethodInfo *)0x0);
      }
      break;
    case 3:
      if (iVar3 != 2) {
        OVRHand_set_IsDataValid_m4BF5D1BF64F2A4B2F43616203C0287D6C8FBE7C6_inline
                  (param_5,false,(MethodInfo *)0x0);
      }
      break;
    case 4:
      if (iVar3 != 0) {
        OVRHand_set_IsDataValid_m4BF5D1BF64F2A4B2F43616203C0287D6C8FBE7C6_inline
                  (param_5,false,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


