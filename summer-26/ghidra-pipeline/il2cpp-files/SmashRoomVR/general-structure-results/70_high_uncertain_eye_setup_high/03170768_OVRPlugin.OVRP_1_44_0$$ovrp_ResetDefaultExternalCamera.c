/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_ResetDefaultExternalCamera
ENTRY_POINT: 03170768
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_ResetDefaultExternalCamera(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  long lVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  ulong uVar24;
  undefined4 uVar25;
  float fVar26;
  ulong uVar27;
  undefined4 uVar28;
  ulong in_d3;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  if ((DAT_03ff20ee & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13715);
    DAT_03ff20ee = 1;
  }
  puVar6 = StringLiteral_13715;
  fVar4 = DAT_00b552c8;
  if (param_2 == 0) {
LAB_03170dc4:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar13 = *(long *)(param_2 + 0x38);
  uVar12 = 0;
  fVar34 = 0.0;
  while( true ) {
    fVar35 = (float)in_d3;
    lVar7 = *(long *)puVar6;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar7 = *(long *)puVar6;
    }
    plVar8 = *(long **)(lVar7 + 0xb8);
    lVar9 = *plVar8;
    if (lVar9 == 0) goto LAB_03170dc4;
    if (*(int *)(lVar9 + 0x18) <= (int)uVar12) {
      return;
    }
    lVar10 = *(long *)(param_1 + 0x158);
    if (lVar10 == 0) goto LAB_03170dc4;
    if (*(uint *)(lVar10 + 0x18) <= uVar12) break;
    lVar11 = *(long *)(param_1 + 0x140);
    if (lVar11 == 0) goto LAB_03170dc4;
    if (*(uint *)(lVar11 + 0x18) <= uVar12) break;
    if (*(long *)(param_1 + 0xd0) == 0) goto LAB_03170dc4;
    if (*(uint *)(*(long *)(param_1 + 0xd0) + 0x18) <= uVar12) break;
    lVar18 = (long)(int)uVar12;
    lVar11 = lVar11 + lVar18 * 0x10;
    iVar1 = *(int *)(lVar10 + lVar18 * 4 + 0x20);
    fVar33 = *(float *)(lVar11 + 0x20);
    fVar32 = *(float *)(lVar11 + 0x24);
    fVar29 = *(float *)(lVar11 + 0x28);
    fVar31 = *(float *)(lVar11 + 0x2c);
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar7 = *(long *)puVar6;
      plVar8 = *(long **)(lVar7 + 0xb8);
      lVar9 = *plVar8;
      if (lVar9 == 0) goto LAB_03170dc4;
    }
    if (*(uint *)(lVar9 + 0x18) <= uVar12) break;
    uVar3 = *(uint *)(lVar9 + lVar18 * 4 + 0x20);
    lVar9 = (long)(int)uVar3;
    if (iVar1 == 1) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        plVar8 = *(long **)(*(long *)puVar6 + 0xb8);
      }
      lVar7 = plVar8[3];
      if (lVar7 == 0) goto LAB_03170dc4;
      if (*(uint *)(lVar7 + 0x18) <= uVar12) break;
      cVar2 = *(char *)(lVar7 + lVar18 + 0x20);
      if (cVar2 != '\0') {
        fVar34 = 0.0;
      }
      fVar26 = fVar34 * -90.0 * fVar4;
      fVar21 = 0.0;
      fVar20 = (float)FUN_03914564(0,0);
      fVar30 = (fVar32 * fVar26 + fVar31 * fVar20 + fVar33 * fVar35) - fVar29 * fVar21;
      fStack0000000000000044 =
           (fVar29 * fVar20 + fVar31 * fVar21 + fVar32 * fVar35) - fVar33 * fVar26;
      uVar24 = (ulong)(uint)fStack0000000000000044;
      fStack0000000000000048 =
           (fVar33 * fVar21 + fVar31 * fVar26 + fVar29 * fVar35) - fVar32 * fVar20;
      uVar27 = (ulong)(uint)fStack0000000000000048;
      fVar35 = ((fVar31 * fVar35 - fVar33 * fVar20) - fVar32 * fVar21) - fVar29 * fVar26;
      fStack0000000000000040 = fVar30;
      fStack000000000000004c = fVar35;
      if (lVar13 == 0) goto LAB_03170dc4;
      if (*(uint *)(lVar13 + 0x18) <= uVar3) break;
      fVar29 = (float)FUN_03170f20(lVar13 + lVar9 * 0x10 + 0x20,&stack0x00000040);
      if (fVar34 <= fVar29) {
        fVar34 = fVar29;
      }
      if (fVar29 < 0.0) {
        if (uVar3 < *(uint *)(lVar13 + 0x18)) {
          lVar7 = lVar13 + lVar9 * 0x10;
          puVar14 = (undefined4 *)(lVar7 + 0x20);
          uVar19 = *puVar14;
          puVar15 = (undefined4 *)(lVar7 + 0x24);
          uVar23 = *puVar15;
          puVar16 = (undefined4 *)(lVar7 + 0x28);
          uVar25 = *puVar16;
          puVar17 = (undefined4 *)(lVar7 + 0x2c);
          uVar28 = *puVar17;
          goto LAB_03170a24;
        }
        break;
      }
      if (cVar2 != '\0') {
        if (*(uint *)(lVar13 + 0x18) <= uVar3) break;
        lVar7 = lVar13 + lVar9 * 0x10;
        fVar20 = *(float *)(lVar7 + 0x20);
        fVar32 = *(float *)(lVar7 + 0x24);
        fVar31 = *(float *)(lVar7 + 0x28);
        fVar33 = *(float *)(lVar7 + 0x2c);
        if (DAT_03fed260 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed260 = '\x01';
        }
        puVar5 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
        lVar10 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        fVar21 = fVar32;
        fVar26 = fVar31;
        uVar19 = FUN_03914a7c(fVar20,fVar32,fVar31,fVar33,*(undefined4 *)(lVar10 + 0x48),
                              *(undefined4 *)(lVar10 + 0x4c),*(undefined4 *)(lVar10 + 0x50),0);
        if (DAT_03fed260 == '\0') {
          thunk_FUN_01ad9084(puVar5);
          DAT_03fed260 = '\x01';
        }
        lVar10 = *(long *)(*(long *)puVar5 + 0xb8);
        uVar22 = FUN_03914a7c(fVar30,uVar24,uVar27,fVar35,*(undefined4 *)(lVar10 + 0x48),
                              *(undefined4 *)(lVar10 + 0x4c),*(undefined4 *)(lVar10 + 0x50),0);
        if (DAT_03fed25b == '\0') {
          thunk_FUN_01ad9084(puVar5);
          DAT_03fed25b = '\x01';
        }
        lVar10 = *(long *)(*(long *)puVar5 + 0xb8);
        FUN_03914a7c(fVar20,fVar32,fVar31,fVar33,*(undefined4 *)(lVar10 + 0x18),
                     *(undefined4 *)(lVar10 + 0x1c),*(undefined4 *)(lVar10 + 0x20),0);
        fVar21 = (float)FUN_01bf693c(uVar19,fVar21,fVar26,uVar22,uVar24,uVar27,0);
        fVar26 = 1.0;
        fVar29 = fVar29 * *(float *)(param_1 + 0xb0);
        fVar35 = fVar29;
        if (1.0 < fVar29) {
          fVar35 = 1.0;
        }
        fVar35 = 1.0 - fVar35;
        if (fVar29 < 0.0) {
          fVar35 = 1.0;
        }
        fVar30 = 0.0;
        fVar29 = fVar21 * fVar35 * fVar4;
        fVar35 = (float)FUN_03914564(0,0);
        if (*(uint *)(lVar13 + 0x18) <= uVar3) break;
        *(float *)(lVar7 + 0x20) =
             (fVar32 * fVar30 + fVar33 * fVar35 + fVar20 * fVar26) - fVar31 * fVar29;
        *(float *)(lVar7 + 0x24) =
             (fVar31 * fVar35 + fVar33 * fVar29 + fVar32 * fVar26) - fVar20 * fVar30;
        *(float *)(lVar7 + 0x28) =
             (fVar20 * fVar29 + fVar33 * fVar30 + fVar31 * fVar26) - fVar32 * fVar35;
        *(float *)(lVar7 + 0x2c) =
             ((fVar33 * fVar26 - fVar20 * fVar35) - fVar32 * fVar29) - fVar31 * fVar30;
      }
    }
    else if (iVar1 == 2) {
      if (lVar13 == 0) goto LAB_03170dc4;
      if (*(uint *)(lVar13 + 0x18) <= uVar3) break;
      lVar7 = lVar13 + lVar9 * 0x10;
      puVar14 = (undefined4 *)(lVar7 + 0x20);
      uVar19 = *puVar14;
      puVar15 = (undefined4 *)(lVar7 + 0x24);
      uVar23 = *puVar15;
      puVar16 = (undefined4 *)(lVar7 + 0x28);
      uVar25 = *puVar16;
      puVar17 = (undefined4 *)(lVar7 + 0x2c);
      uVar28 = *puVar17;
LAB_03170a24:
      uVar19 = FUN_039142e8(uVar19,0);
      if (*(uint *)(lVar13 + 0x18) <= uVar3) break;
      *puVar14 = uVar19;
      *puVar15 = uVar23;
      *puVar16 = uVar25;
      *puVar17 = uVar28;
    }
    lVar7 = *(long *)(param_1 + 0x158);
    if (lVar7 == 0) goto LAB_03170dc4;
    if (*(uint *)(lVar7 + 0x18) <= uVar12) break;
    if (*(int *)(lVar7 + lVar18 * 4 + 0x20) == 0) {
      lVar7 = *(long *)(param_1 + 0xe0);
    }
    else {
      lVar7 = *(long *)(param_1 + 0xd8);
    }
    if (lVar7 == 0) goto LAB_03170dc4;
    if (*(uint *)(lVar7 + 0x18) <= uVar12) break;
    lVar7 = *(long *)(lVar7 + lVar18 * 8 + 0x20);
    if (lVar7 == 0) goto LAB_03170dc4;
    FUN_0313815c(lVar7,0);
    lVar7 = *(long *)(param_1 + 0x148);
    if (lVar7 == 0) goto LAB_03170dc4;
    if (*(uint *)(lVar7 + 0x18) <= uVar12) break;
    if (lVar13 == 0) goto LAB_03170dc4;
    if (*(uint *)(lVar13 + 0x18) <= uVar3) break;
    lVar7 = lVar7 + lVar18 * 0x10;
    lVar9 = lVar13 + lVar9 * 0x10;
    uVar23 = *(undefined4 *)(lVar7 + 0x24);
    uVar25 = *(undefined4 *)(lVar7 + 0x28);
    in_d3 = (ulong)*(uint *)(lVar7 + 0x2c);
    uVar19 = FUN_039142e8(*(undefined4 *)(lVar7 + 0x20),0);
    if (*(uint *)(lVar13 + 0x18) <= uVar3) break;
    *(undefined4 *)(lVar9 + 0x20) = uVar19;
    *(undefined4 *)(lVar9 + 0x24) = uVar23;
    *(undefined4 *)(lVar9 + 0x28) = uVar25;
    *(int *)(lVar9 + 0x2c) = (int)in_d3;
    if (*(uint *)(lVar13 + 0x18) <= uVar3) break;
    lVar7 = *(long *)(param_1 + 0x150);
    if (lVar7 == 0) goto LAB_03170dc4;
    if (*(uint *)(lVar7 + 0x18) <= uVar12) break;
    lVar7 = lVar7 + lVar18 * 0x10;
    uVar12 = uVar12 + 1;
    *(undefined4 *)(lVar7 + 0x20) = uVar19;
    *(undefined4 *)(lVar7 + 0x24) = uVar23;
    *(undefined4 *)(lVar7 + 0x28) = uVar25;
    *(int *)(lVar7 + 0x2c) = (int)in_d3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


