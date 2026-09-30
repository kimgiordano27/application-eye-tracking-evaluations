/*
FUNCTION_NAME: OVRPlugin.TextureRectMatrixf$$.cctor
ENTRY_POINT: 031645a8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_TextureRectMatrixf___cctor
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,float *param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  ulong uVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  
  if (*(long *)(param_4 + 0x28) != 0) {
    fVar2 = (float)FUN_03929130(*(long *)(param_4 + 0x28),0);
    if (*(long *)(param_4 + 0x28) != 0) {
      fVar11 = param_5[1];
      fVar9 = param_5[2];
      fVar13 = *param_5;
      fVar4 = param_2;
      fVar7 = param_3;
      fVar3 = (float)FUN_03928d34(*(long *)(param_4 + 0x28),0);
      if (DAT_03fed25d == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25d = '\x01';
      }
      fVar13 = fVar13 - fVar3;
      fVar11 = fVar11 - fVar4;
      fVar9 = fVar9 - fVar7;
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = (ulong)(uint)(fVar9 * fVar9);
      fVar4 = SQRT(fVar9 * fVar9 + fVar13 * fVar13 + fVar11 * fVar11);
      if (fVar4 <= DAT_00b55370) {
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        pfVar1 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        fVar13 = *pfVar1;
        fVar11 = pfVar1[1];
        fVar9 = pfVar1[2];
      }
      else {
        fVar13 = fVar13 / fVar4;
        fVar11 = fVar11 / fVar4;
        fVar9 = fVar9 / fVar4;
      }
      uVar5 = (ulong)(uint)fVar13;
      uVar6 = (ulong)(uint)(fVar9 * fVar9);
      uVar10 = (ulong)(uint)fVar11;
      uVar12 = (ulong)(uint)fVar9;
      if (fVar13 * fVar13 + fVar11 * fVar11 + fVar9 * fVar9 == 0.0) {
        if (*(long *)(param_4 + 0x28) == 0) goto LAB_03164788;
        uVar5 = FUN_039291ac(*(long *)(param_4 + 0x28),0);
        uVar10 = uVar6;
        uVar12 = uVar8;
      }
      FUN_039148b4(uVar5,uVar10,uVar12,0);
      if (*(long *)(param_4 + 0x38) != 0) {
        FUN_038ee05c((param_3 * (float)uVar12 + fVar2 * (float)uVar5 + param_2 * (float)uVar10) *
                     0.5 + 0.5,*(long *)(param_4 + 0x38),0);
        fVar4 = param_5[4];
        fVar7 = param_5[5];
        fVar3 = param_5[6];
        fVar2 = (float)FUN_03914490(param_5[3],0);
        param_5[3] = fVar2;
        param_5[4] = fVar4;
        param_5[5] = fVar7;
        param_5[6] = fVar3;
        return;
      }
    }
  }
LAB_03164788:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


