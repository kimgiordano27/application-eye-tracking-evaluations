/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetLocalTrackingSpaceRecenterCount
ENTRY_POINT: 0317087c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_20;weak_xr_or_state_hits_21;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetLocalTrackingSpaceRecenterCount(long *param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  int unaff_w24;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long unaff_x28;
  uint uVar10;
  long unaff_x29;
  undefined4 uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  float fVar15;
  ulong uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong uVar21;
  undefined4 uVar22;
  ulong in_d3;
  float unaff_s8;
  float fVar23;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar24;
  float unaff_s12;
  float fVar25;
  float fVar26;
  float in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  do {
    fVar26 = (float)in_d3;
    uVar10 = (uint)unaff_x29;
    if (unaff_w24 == 1) {
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        param_1 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar3 = param_1[3];
      if (lVar3 == 0) goto LAB_03170dc4;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      cVar1 = *(char *)(lVar3 + unaff_x28 + 0x20);
      if (cVar1 != '\0') {
        unaff_s12 = 0.0;
      }
      fVar18 = unaff_s12 * -90.0 * in_stack_00000038;
      fVar19 = 0.0;
      fVar12 = (float)FUN_03914564(0,0);
      fVar23 = (unaff_s10 * fVar18 + unaff_s9 * fVar12 + unaff_s11 * fVar26) - unaff_s8 * fVar19;
      fStack0000000000000044 =
           (unaff_s8 * fVar12 + unaff_s9 * fVar19 + unaff_s10 * fVar26) - unaff_s11 * fVar18;
      uVar16 = (ulong)(uint)fStack0000000000000044;
      fStack0000000000000048 =
           (unaff_s11 * fVar19 + unaff_s9 * fVar18 + unaff_s8 * fVar26) - unaff_s10 * fVar12;
      uVar21 = (ulong)(uint)fStack0000000000000048;
      fVar26 = ((unaff_s9 * fVar26 - unaff_s11 * fVar12) - unaff_s10 * fVar19) - unaff_s8 * fVar18;
      fStack0000000000000040 = fVar23;
      fStack000000000000004c = fVar26;
      if (unaff_x23 == 0) goto LAB_03170dc4;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar10)
      goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      fVar12 = (float)FUN_03170f20(unaff_x23 + unaff_x29 * 0x10 + 0x20,&stack0x00000040);
      if (unaff_s12 <= fVar12) {
        unaff_s12 = fVar12;
      }
      if (fVar12 < 0.0) {
        if (uVar10 < *(uint *)(unaff_x23 + 0x18)) {
          lVar3 = unaff_x23 + unaff_x29 * 0x10;
          puVar6 = (undefined4 *)(lVar3 + 0x20);
          uVar11 = *puVar6;
          puVar7 = (undefined4 *)(lVar3 + 0x24);
          uVar14 = *puVar7;
          puVar8 = (undefined4 *)(lVar3 + 0x28);
          uVar17 = *puVar8;
          puVar9 = (undefined4 *)(lVar3 + 0x2c);
          uVar22 = *puVar9;
          goto LAB_03170a24;
        }
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      }
      if (cVar1 != '\0') {
        if (*(uint *)(unaff_x23 + 0x18) <= uVar10) {
OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        lVar3 = unaff_x23 + unaff_x29 * 0x10;
        fVar25 = *(float *)(lVar3 + 0x20);
        fVar18 = *(float *)(lVar3 + 0x24);
        fVar19 = *(float *)(lVar3 + 0x28);
        fVar24 = *(float *)(lVar3 + 0x2c);
        if (*(char *)(unaff_x20 + 0x260) == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          *(undefined1 *)(unaff_x20 + 0x260) = 1;
        }
        puVar2 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
        lVar4 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        fVar15 = fVar18;
        fVar20 = fVar19;
        uVar11 = FUN_03914a7c(fVar25,fVar18,fVar19,fVar24,*(undefined4 *)(lVar4 + 0x48),
                              *(undefined4 *)(lVar4 + 0x4c),*(undefined4 *)(lVar4 + 0x50),0);
        if (*(char *)(unaff_x20 + 0x260) == '\0') {
          thunk_FUN_01ad9084(puVar2);
          *(undefined1 *)(unaff_x20 + 0x260) = 1;
        }
        lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
        uVar13 = FUN_03914a7c(fVar23,uVar16,uVar21,fVar26,*(undefined4 *)(lVar4 + 0x48),
                              *(undefined4 *)(lVar4 + 0x4c),*(undefined4 *)(lVar4 + 0x50),0);
        if (DAT_03fed25b == '\0') {
          thunk_FUN_01ad9084(puVar2);
          DAT_03fed25b = '\x01';
        }
        lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
        FUN_03914a7c(fVar25,fVar18,fVar19,fVar24,*(undefined4 *)(lVar4 + 0x18),
                     *(undefined4 *)(lVar4 + 0x1c),*(undefined4 *)(lVar4 + 0x20),0);
        fVar23 = (float)FUN_01bf693c(uVar11,fVar15,fVar20,uVar13,uVar16,uVar21,0);
        fVar15 = 1.0;
        fVar12 = fVar12 * *(float *)(unaff_x19 + 0xb0);
        fVar26 = fVar12;
        if (1.0 < fVar12) {
          fVar26 = 1.0;
        }
        fVar26 = 1.0 - fVar26;
        if (fVar12 < 0.0) {
          fVar26 = 1.0;
        }
        fVar20 = 0.0;
        fVar12 = fVar23 * fVar26 * in_stack_00000038;
        fVar26 = (float)FUN_03914564(0,0);
        if (*(uint *)(unaff_x23 + 0x18) <= uVar10)
        goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
        *(float *)(lVar3 + 0x20) =
             (fVar18 * fVar20 + fVar24 * fVar26 + fVar25 * fVar15) - fVar19 * fVar12;
        *(float *)(lVar3 + 0x24) =
             (fVar19 * fVar26 + fVar24 * fVar12 + fVar18 * fVar15) - fVar25 * fVar20;
        *(float *)(lVar3 + 0x28) =
             (fVar25 * fVar12 + fVar24 * fVar20 + fVar19 * fVar15) - fVar18 * fVar26;
        *(float *)(lVar3 + 0x2c) =
             ((fVar24 * fVar15 - fVar25 * fVar26) - fVar18 * fVar12) - fVar19 * fVar20;
      }
    }
    else if (unaff_w24 == 2) {
      if (unaff_x23 == 0) goto LAB_03170dc4;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar10)
      goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      lVar3 = unaff_x23 + unaff_x29 * 0x10;
      puVar6 = (undefined4 *)(lVar3 + 0x20);
      uVar11 = *puVar6;
      puVar7 = (undefined4 *)(lVar3 + 0x24);
      uVar14 = *puVar7;
      puVar8 = (undefined4 *)(lVar3 + 0x28);
      uVar17 = *puVar8;
      puVar9 = (undefined4 *)(lVar3 + 0x2c);
      uVar22 = *puVar9;
LAB_03170a24:
      uVar11 = FUN_039142e8(uVar11,0);
      if (*(uint *)(unaff_x23 + 0x18) <= uVar10)
      goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
      *puVar6 = uVar11;
      *puVar7 = uVar14;
      *puVar8 = uVar17;
      *puVar9 = uVar22;
    }
    lVar3 = *(long *)(unaff_x19 + 0x158);
    if (lVar3 == 0) {
LAB_03170dc4:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar3 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
    if (*(int *)(lVar3 + unaff_x28 * 4 + 0x20) == 0) {
      lVar3 = *(long *)(unaff_x19 + 0xe0);
    }
    else {
      lVar3 = *(long *)(unaff_x19 + 0xd8);
    }
    if (lVar3 == 0) goto LAB_03170dc4;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
    lVar3 = *(long *)(lVar3 + unaff_x28 * 8 + 0x20);
    if (lVar3 == 0) goto LAB_03170dc4;
    FUN_0313815c(lVar3,0);
    lVar3 = *(long *)(unaff_x19 + 0x148);
    if (lVar3 == 0) goto LAB_03170dc4;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
    if (unaff_x23 == 0) goto LAB_03170dc4;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar10) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
    lVar3 = lVar3 + unaff_x28 * 0x10;
    lVar4 = unaff_x23 + unaff_x29 * 0x10;
    uVar14 = *(undefined4 *)(lVar3 + 0x24);
    uVar17 = *(undefined4 *)(lVar3 + 0x28);
    in_d3 = (ulong)*(uint *)(lVar3 + 0x2c);
    uVar11 = FUN_039142e8(*(undefined4 *)(lVar3 + 0x20),0);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar10) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
    *(undefined4 *)(lVar4 + 0x20) = uVar11;
    *(undefined4 *)(lVar4 + 0x24) = uVar14;
    *(undefined4 *)(lVar4 + 0x28) = uVar17;
    *(int *)(lVar4 + 0x2c) = (int)in_d3;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar10) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
    lVar3 = *(long *)(unaff_x19 + 0x150);
    if (lVar3 == 0) goto LAB_03170dc4;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
    lVar3 = lVar3 + unaff_x28 * 0x10;
    unaff_w21 = unaff_w21 + 1;
    *(undefined4 *)(lVar3 + 0x20) = uVar11;
    *(undefined4 *)(lVar3 + 0x24) = uVar14;
    *(undefined4 *)(lVar3 + 0x28) = uVar17;
    *(int *)(lVar3 + 0x2c) = (int)in_d3;
    param_2 = *unaff_x22;
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      param_2 = *unaff_x22;
    }
    param_1 = *(long **)(param_2 + 0xb8);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_03170dc4;
    if (*(int *)(lVar3 + 0x18) <= (int)unaff_w21) {
      return;
    }
    lVar4 = *(long *)(unaff_x19 + 0x158);
    if (lVar4 == 0) goto LAB_03170dc4;
    if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
    lVar5 = *(long *)(unaff_x19 + 0x140);
    if (lVar5 == 0) goto LAB_03170dc4;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
    if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_03170dc4;
    if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21)
    goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
    unaff_x28 = (long)(int)unaff_w21;
    lVar5 = lVar5 + unaff_x28 * 0x10;
    unaff_w24 = *(int *)(lVar4 + unaff_x28 * 4 + 0x20);
    unaff_s11 = *(float *)(lVar5 + 0x20);
    unaff_s10 = *(float *)(lVar5 + 0x24);
    unaff_s8 = *(float *)(lVar5 + 0x28);
    unaff_s9 = *(float *)(lVar5 + 0x2c);
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      param_2 = *unaff_x22;
      param_1 = *(long **)(param_2 + 0xb8);
      lVar3 = *param_1;
      if (lVar3 == 0) goto LAB_03170dc4;
    }
    if (*(uint *)(lVar3 + 0x18) <= unaff_w21) goto OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc;
    unaff_x29 = (long)*(int *)(lVar3 + unaff_x28 * 4 + 0x20);
  } while( true );
}


