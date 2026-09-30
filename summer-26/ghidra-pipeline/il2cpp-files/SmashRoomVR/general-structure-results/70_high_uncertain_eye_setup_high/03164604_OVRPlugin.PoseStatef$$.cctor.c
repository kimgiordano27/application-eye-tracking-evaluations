/*
FUNCTION_NAME: OVRPlugin.PoseStatef$$.cctor
ENTRY_POINT: 03164604
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PoseStatef___cctor(long param_1)

{
  float *pfVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float fVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  float unaff_s8;
  float fVar10;
  float unaff_s9;
  float fVar11;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  ulong uVar12;
  float unaff_s13;
  ulong uVar13;
  float unaff_s14;
  float fVar14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0x438));
  *(undefined1 *)(unaff_x21 + 0x25d) = 1;
  fVar14 = unaff_s14 - unaff_s8;
  fVar11 = unaff_s13 - unaff_s9;
  fVar10 = unaff_s12 - unaff_s11;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = (ulong)(uint)(fVar10 * fVar10);
  fVar2 = SQRT(fVar10 * fVar10 + fVar14 * fVar14 + fVar11 * fVar11);
  if (fVar2 <= DAT_00b55370) {
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    fVar14 = *pfVar1;
    fVar11 = pfVar1[1];
    fVar10 = pfVar1[2];
  }
  else {
    fVar14 = fVar14 / fVar2;
    fVar11 = fVar11 / fVar2;
    fVar10 = fVar10 / fVar2;
  }
  uVar4 = (ulong)(uint)fVar14;
  uVar6 = (ulong)(uint)(fVar10 * fVar10);
  uVar12 = (ulong)(uint)fVar11;
  uVar13 = (ulong)(uint)fVar10;
  if (fVar14 * fVar14 + fVar11 * fVar11 + fVar10 * fVar10 == 0.0) {
    if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_03164788;
    uVar4 = FUN_039291ac(*(long *)(unaff_x20 + 0x28),0);
    uVar12 = uVar6;
    uVar13 = uVar8;
  }
  FUN_039148b4(uVar4,uVar12,uVar13,0);
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    FUN_038ee05c((in_stack_00000008._4_4_ * (float)uVar13 +
                 unaff_s15 * (float)uVar4 + unaff_s10 * (float)uVar12) * 0.5 + 0.5,
                 *(long *)(unaff_x20 + 0x38),0);
    uVar5 = *(undefined4 *)(unaff_x19 + 0x10);
    uVar7 = *(undefined4 *)(unaff_x19 + 0x14);
    uVar9 = *(undefined4 *)(unaff_x19 + 0x18);
    uVar3 = FUN_03914490(*(undefined4 *)(unaff_x19 + 0xc),0);
    *(undefined4 *)(unaff_x19 + 0xc) = uVar3;
    *(undefined4 *)(unaff_x19 + 0x10) = uVar5;
    *(undefined4 *)(unaff_x19 + 0x14) = uVar7;
    *(undefined4 *)(unaff_x19 + 0x18) = uVar9;
    return;
  }
LAB_03164788:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


