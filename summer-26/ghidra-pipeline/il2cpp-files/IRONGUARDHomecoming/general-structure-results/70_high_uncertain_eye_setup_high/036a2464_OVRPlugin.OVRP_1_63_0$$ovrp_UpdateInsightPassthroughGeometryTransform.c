/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 036a2464
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_63_0__ovrp_UpdateInsightPassthroughGeometryTransform(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  thunk_FUN_01f51358();
  uVar6 = FUN_01f08890(*unaff_x24,3);
  FUN_034a9d80(uVar6,*unaff_x25,0);
  puVar1 = Method_Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_Decode__;
  if (3 < *(uint *)(unaff_x21 + -0x18)) {
    *(undefined8 *)(unaff_x19 + 0x38) = uVar6;
    thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x38),uVar6);
    uVar6 = FUN_01f08890(*unaff_x24,4);
    FUN_034a9d80(uVar6,*(undefined8 *)puVar1,0);
    puVar5 = Method_Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_DecodeRSA__;
    puVar4 = Method_Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_DecodeDSA__;
    puVar3 = Method_Outline_<>c_<SmoothNormals>b__30_1__;
    puVar2 = Method_Outline_<>c_<SmoothNormals>b__30_0__;
    puVar1 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__;
    if (4 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x40) = uVar6;
      thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x40),uVar6);
      *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = unaff_x19;
      thunk_FUN_01f51358();
      uVar6 = FUN_01f08890(*(undefined8 *)puVar1,0x11);
      FUN_034a9d80(uVar6,*(undefined8 *)puVar4,0);
      puVar7 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
      *puVar7 = uVar6;
      thunk_FUN_01f51358(puVar7,uVar6);
      uVar6 = FUN_01f08890(*(undefined8 *)puVar2,0x18);
      FUN_034a9d80(uVar6,*(undefined8 *)puVar5,0);
      puVar7 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
      *puVar7 = uVar6;
      thunk_FUN_01f51358(puVar7,uVar6);
      uVar6 = FUN_01f08890(*unaff_x23,0x18);
      FUN_034a9d80(uVar6,*(undefined8 *)puVar3,0);
      puVar7 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
      *puVar7 = uVar6;
      thunk_FUN_01f51358(puVar7,uVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


