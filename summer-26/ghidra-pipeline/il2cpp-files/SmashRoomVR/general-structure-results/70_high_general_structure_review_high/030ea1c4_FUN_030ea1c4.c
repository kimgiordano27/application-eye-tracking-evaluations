/*
FUNCTION_NAME: FUN_030ea1c4
ENTRY_POINT: 030ea1c4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_12;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_030ea1c4(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  undefined4 *puVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uStack_c0;
  float fStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 local_a0;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  
  if ((DAT_03ff1b83 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13530);
    thunk_FUN_01ad9084(StringLiteral_13531);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff1b83 = 1;
  }
  puVar3 = StringLiteral_13530;
  plVar11 = *(long **)(param_5 + 0x40);
  if (plVar11 != (long *)0x0) {
    lVar5 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_13530) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_030ea280;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)StringLiteral_13530,0);
LAB_030ea280:
    lVar5 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    if (lVar5 == 0) goto LAB_030ea7fc;
    FUN_02b88e18(&local_a0,lVar5,0,*(undefined8 *)StringLiteral_13531);
    fVar29 = fStack_98;
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    plVar11 = *(long **)(param_5 + 0x40);
    if (plVar11 == (long *)0x0) goto LAB_030ea7fc;
    lVar5 = *plVar11;
    fVar23 = (float)local_a0;
    fVar26 = local_a0._4_4_;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto Oculus_Platform_Samples_EntitlementCheck_EntitlementCheck__Start;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar3,1);
Oculus_Platform_Samples_EntitlementCheck_EntitlementCheck__Start:
    lVar5 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    lVar6 = *(long *)puVar2;
    uVar12 = *(undefined8 *)(param_5 + 0x20);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar6);
    }
    uVar8 = FUN_03922f24(uVar12,0,0);
    if ((uVar8 & 1) != 0) {
      if (lVar5 == 0) goto LAB_030ea7fc;
      uVar13 = FUN_03928fd8(lVar5,0);
      *(undefined4 *)(param_5 + 0x98) = uVar13;
      *(undefined4 *)(param_5 + 0x9c) = param_2;
      *(undefined4 *)(param_5 + 0xa0) = param_3;
      *(undefined4 *)(param_5 + 0xa4) = param_4;
    }
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    puVar3 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    puVar9 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    iVar1 = *(int *)(param_5 + 0x28);
    uVar27 = puVar9[1];
    uVar13 = puVar9[2];
    if (iVar1 == 0) {
      uVar24 = 0x3f800000;
    }
    else {
      uVar24 = *puVar9;
      if (iVar1 == 2) {
        uVar13 = 0x3f800000;
      }
      else {
        if (iVar1 != 1) goto LAB_030ea800;
        uVar27 = 0x3f800000;
      }
    }
    FUN_030e9f6c(&uStack_c0,param_5);
    uStack_8c = (undefined4)uStack_ac;
    uStack_88 = (undefined4)((ulong)uStack_ac >> 0x20);
    uStack_90 = uStack_b0;
    fStack_98 = fStack_b8;
    uStack_94 = local_b4;
    local_a0 = uStack_c0;
    *(ulong *)(param_5 + 0x78) = CONCAT44(local_b4,fStack_b8);
    *(undefined8 *)(param_5 + 0x70) = uStack_c0;
    *(undefined8 *)(param_5 + 0x84) = uStack_ac;
    *(ulong *)(param_5 + 0x7c) = CONCAT44(uStack_b0,local_b4);
    FUN_03914a7c(*(undefined4 *)(param_5 + 0x7c),*(undefined4 *)(param_5 + 0x80),
                 *(undefined4 *)(param_5 + 0x84),*(undefined4 *)(param_5 + 0x88),uVar24,uVar27,
                 uVar13,0);
    uVar18 = (ulong)*(uint *)(param_5 + 0x84);
    uVar21 = (ulong)*(uint *)(param_5 + 0x88);
    uVar8 = (ulong)*(uint *)(param_5 + 0x80);
    uVar12 = FUN_03914250(*(undefined4 *)(param_5 + 0x7c),uVar8,uVar18,uVar21,0);
    fVar22 = *(float *)(param_5 + 0x70);
    fVar25 = *(float *)(param_5 + 0x74);
    fVar28 = *(float *)(param_5 + 0x78);
    if (DAT_03fed25c == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25c = '\x01';
    }
    fVar26 = fVar26 - fVar25;
    uVar16 = (ulong)(uint)fVar26;
    fVar23 = fVar23 - fVar22;
    uVar14 = (ulong)(uint)fVar23;
    fVar29 = fVar29 - fVar28;
    uVar19 = (ulong)(uint)fVar29;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar22 = DAT_00b5568c;
    if (ABS(SQRT(fVar23 * fVar23 + fVar26 * fVar26 + fVar29 * fVar29)) < DAT_00b5568c) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar7 = *(float **)(*(long *)puVar3 + 0xb8);
      iVar1 = (*(int *)(param_5 + 0x28) + 1) % 3;
      fVar29 = pfVar7[1];
      fVar23 = pfVar7[2];
      if (((iVar1 != 0) && (fVar22 = *pfVar7, fVar23 = DAT_00b5568c, iVar1 != 2)) &&
         (fVar29 = DAT_00b5568c, fVar23 = pfVar7[2], iVar1 != 1)) {
LAB_030ea800:
        thunk_FUN_01ad9084(StringLiteral_2609);
        uVar12 = thunk_FUN_01afaadc();
        uVar15 = thunk_FUN_01ad9084(StringLiteral_13295);
        FUN_0303c28c(uVar12,uVar15,0);
        uVar15 = thunk_FUN_01ad9084(StringLiteral_13541);
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar12,uVar15);
      }
      uVar16 = (ulong)*(uint *)(param_5 + 0x80);
      uVar19 = (ulong)*(uint *)(param_5 + 0x84);
      uVar14 = FUN_03914a7c(*(undefined4 *)(param_5 + 0x7c),uVar16,uVar19,
                            *(undefined4 *)(param_5 + 0x88),fVar22,fVar29,fVar23,0);
    }
    uVar17 = uVar8;
    uVar20 = uVar18;
    uVar13 = FUN_03914a7c(uVar12,uVar8,uVar18,uVar21,uVar14,uVar16,uVar19,0);
    *(undefined4 *)(param_5 + 0x48) = uVar13;
    fVar29 = (float)uVar17;
    *(float *)(param_5 + 0x4c) = fVar29;
    fVar23 = (float)uVar20;
    *(float *)(param_5 + 0x50) = fVar23;
    if (lVar5 != 0) {
      fVar26 = (float)FUN_03928d34(lVar5,0);
      uVar14 = uVar8;
      uVar19 = uVar18;
      uVar16 = uVar21;
      uVar15 = FUN_03914a7c(uVar12,uVar8,uVar18,uVar21,fVar26 - *(float *)(param_5 + 0x70),
                            fVar29 - *(float *)(param_5 + 0x74),fVar23 - *(float *)(param_5 + 0x78),
                            0);
      fVar22 = (float)uVar16;
      uVar16 = uVar14;
      uVar17 = uVar19;
      fVar29 = (float)FUN_039274a0(lVar5,0);
      fVar31 = (float)uVar21;
      fVar30 = (float)uVar12;
      fVar23 = (float)uVar16;
      fVar28 = (float)uVar8;
      fVar26 = (float)uVar17;
      fVar25 = (float)uVar18;
      local_a0 = 0;
      fStack_98 = 0.0;
      uStack_94 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      FUN_03927140(uVar15,uVar14,uVar19,
                   (fVar28 * fVar26 + fVar31 * fVar29 + fVar30 * fVar22) - fVar25 * fVar23,
                   (fVar25 * fVar29 + fVar31 * fVar23 + fVar28 * fVar22) - fVar30 * fVar26,
                   (fVar30 * fVar23 + fVar31 * fVar26 + fVar25 * fVar22) - fVar28 * fVar29,
                   ((fVar31 * fVar22 - fVar30 * fVar29) - fVar28 * fVar23) - fVar25 * fVar26,
                   &local_a0,0);
      *(ulong *)(param_5 + 0x68) = CONCAT44(uStack_88,uStack_8c);
      *(ulong *)(param_5 + 0x60) = CONCAT44(uStack_90,uStack_94);
      *(ulong *)(param_5 + 0x5c) = CONCAT44(uStack_94,fStack_98);
      *(undefined8 *)(param_5 + 0x54) = local_a0;
      FUN_03914a7c(*(undefined4 *)(param_5 + 0x7c),*(undefined4 *)(param_5 + 0x80),
                   *(undefined4 *)(param_5 + 0x84),*(undefined4 *)(param_5 + 0x88),
                   *(undefined4 *)(param_5 + 0x48),*(undefined4 *)(param_5 + 0x4c),
                   *(undefined4 *)(param_5 + 0x50),0);
      if (DAT_03fed45d == '\0') {
        thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
        DAT_03fed45d = '\x01';
      }
      uVar27 = *(undefined4 *)(param_5 + 0x80);
      uVar24 = *(undefined4 *)(param_5 + 0x84);
      FUN_03914250(*(undefined4 *)(param_5 + 0x7c),uVar27,uVar24,*(undefined4 *)(param_5 + 0x88),0);
      uVar13 = FUN_03914a7c(0);
      *(undefined4 *)(param_5 + 0x8c) = uVar13;
      *(undefined4 *)(param_5 + 0x90) = uVar27;
      *(undefined4 *)(param_5 + 0x94) = uVar24;
      *(undefined4 *)(param_5 + 0xa8) = *(undefined4 *)(param_5 + 0x3c);
      *(undefined4 *)(param_5 + 0x38) = *(undefined4 *)(param_5 + 0x3c);
      uVar12 = FUN_03928c2c(lVar5,0);
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar6);
      }
      uVar8 = FUN_0391f968(uVar12,0,0);
      fVar29 = 1.0;
      if ((uVar8 & 1) != 0) {
        lVar5 = FUN_03928c2c(lVar5,0);
        if (lVar5 == 0) goto LAB_030ea7fc;
        fVar29 = (float)FUN_0392a7f0(lVar5,0);
      }
      *(ulong *)(param_5 + 0x54) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x54) >> 0x20) / fVar29,
                    (float)*(undefined8 *)(param_5 + 0x54) / fVar29);
      *(float *)(param_5 + 0x5c) = *(float *)(param_5 + 0x5c) / fVar29;
      return;
    }
  }
LAB_030ea7fc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


