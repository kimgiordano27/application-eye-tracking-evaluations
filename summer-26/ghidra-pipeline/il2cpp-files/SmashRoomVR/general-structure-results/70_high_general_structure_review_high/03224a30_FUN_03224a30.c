/*
FUNCTION_NAME: FUN_03224a30
ENTRY_POINT: 03224a30
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void FUN_03224a30(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  float *pfVar7;
  long *plVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  
  if ((DAT_03ff4677 & 1) == 0) {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass16_0_<EncodePostBytesAsync>b__1__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d83cc0);
    thunk_FUN_01ad9084(StringLiteral_2932);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor_<>c_<_ctor>b__226_0__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__);
    thunk_FUN_01ad9084(StringLiteral_452);
    DAT_03ff4677 = 1;
  }
  puVar1 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__;
  if (*(char *)(param_1 + 0x5d) == '\0') {
    lVar4 = *(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar4 = *(long *)puVar1;
    }
    if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x180) == '\0') {
      return;
    }
    uVar3 = FUN_0390e2b8(0);
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03fed3d9 == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
      DAT_03fed3d9 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar4 = *(long *)puVar1;
    }
    plVar8 = (long *)(param_1 + 0x38);
    *plVar8 = **(long **)(lVar4 + 0xb8);
    thunk_FUN_01b4f09c(plVar8);
    lVar4 = *plVar8;
    if (lVar4 == 0) goto LAB_03224ea0;
    uVar3 = *(undefined4 *)(lVar4 + 0x60);
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(lVar4 + 0x58);
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
    uVar10 = *(undefined8 *)(lVar4 + 0x4c);
    uVar3 = *(undefined4 *)(lVar4 + 0x54);
    *(undefined1 *)(param_1 + 0x5d) = 1;
    *(undefined8 *)(param_1 + 0x50) = uVar10;
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  bVar2 = FUN_03224ea4(param_1);
  if ((bVar2 & 1) == 0) {
    if (*(char *)(param_1 + 0x40) != '\0') {
      FUN_0390e2e0(*(undefined4 *)(param_1 + 0x60),0);
      lVar4 = *(long *)(param_1 + 0x38);
      if (lVar4 == 0) goto LAB_03224ea0;
      uVar3 = *(undefined4 *)(lVar4 + 0x60);
      *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(lVar4 + 0x58);
      *(undefined4 *)(param_1 + 0x4c) = uVar3;
      uVar3 = *(undefined4 *)(lVar4 + 0x54);
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar4 + 0x4c);
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      if (*(char *)(param_1 + 0x24) != '\0') {
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
        puVar6 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        FUN_03236424(*puVar6,puVar6[1],puVar6[2],lVar4,0);
        lVar4 = *(long *)(param_1 + 0x38);
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        if (lVar4 == 0) goto LAB_03224ea0;
        puVar6 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
        FUN_03236330(*puVar6,puVar6[1],puVar6[2],lVar4,0);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x40) == '\0') {
      uVar3 = FUN_0390e2b8(0);
      *(undefined4 *)(param_1 + 0x60) = uVar3;
      FUN_0390e2e0(1,0);
      if ((*(char *)(param_1 + 0x40) == '\0') && (*(char *)(param_1 + 0x24) != '\0')) {
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_03224ea0;
        FUN_03236424(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48),
                     *(undefined4 *)(param_1 + 0x4c),*(long *)(param_1 + 0x38),0);
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_03224ea0;
        FUN_03236330(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                     *(undefined4 *)(param_1 + 0x58),*(long *)(param_1 + 0x38),0);
      }
    }
    if ((*(char *)(param_1 + 0x25) == '\0') || (uVar5 = FUN_0394f76c(2,0), (uVar5 & 1) == 0)) {
      lVar4 = *(long *)(param_1 + 0x38);
      if (lVar4 == 0) goto LAB_03224ea0;
      uVar3 = *(undefined4 *)(lVar4 + 0x58);
      fVar15 = *(float *)(lVar4 + 0x5c);
      uVar13 = *(undefined4 *)(lVar4 + 0x60);
      fVar9 = (float)FUN_0394f4d8(*(undefined8 *)StringLiteral_452,0);
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_03224ea0;
      FUN_03236424(uVar3,fVar15 + fVar9,uVar13,*(long *)(param_1 + 0x38),0);
      fVar9 = (float)FUN_0394f4d8(*(undefined8 *)
                                   Method_UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor_<>c_<_ctor>b__226_0__
                                  ,0);
      fVar15 = (float)FUN_0394f4d8(*(undefined8 *)
                                    Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass16_0_<EncodePostBytesAsync>b__1__
                                   ,0);
      lVar4 = *(long *)(param_1 + 0x38);
      if (lVar4 == 0) goto LAB_03224ea0;
      fVar14 = *(float *)(lVar4 + 0x4c);
      fVar12 = *(float *)(lVar4 + 0x50);
      fVar11 = *(float *)(lVar4 + 0x54);
      uVar5 = System_Linq_Expressions_Interpreter_MethodInfoCallInstruction__get_ArgumentCount
                        (param_1);
      if ((uVar5 & 1) == 0) {
        fVar14 = fVar15 + fVar15 + fVar14;
        fVar12 = fVar12 - (fVar9 + fVar9);
      }
      else {
        fVar11 = fVar11 - (fVar9 + fVar9);
      }
      lVar4 = *(long *)(param_1 + 0x38);
      if (lVar4 == 0) goto LAB_03224ea0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x38);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
      if (lVar4 == 0) {
LAB_03224ea0:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      puVar6 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      FUN_03236424(*puVar6,puVar6[1],puVar6[2],lVar4,0);
      lVar4 = *(long *)(param_1 + 0x38);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      if (lVar4 == 0) goto LAB_03224ea0;
      pfVar7 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar12 = pfVar7[1];
      fVar11 = pfVar7[2];
      fVar14 = *pfVar7;
    }
    FUN_03236330(fVar14,fVar12,fVar11,lVar4,0);
    if (*(char *)(param_1 + 0x5c) == '\0') {
      if (*(int *)(*(long *)
                    Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_03257618(*(undefined8 *)PTR_DAT_03d83cc0,*(undefined8 *)StringLiteral_2932,
                   *(undefined8 *)
                    Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__,0);
      *(undefined1 *)(param_1 + 0x5c) = 1;
    }
  }
  *(byte *)(param_1 + 0x40) = bVar2 & 1;
  return;
}


