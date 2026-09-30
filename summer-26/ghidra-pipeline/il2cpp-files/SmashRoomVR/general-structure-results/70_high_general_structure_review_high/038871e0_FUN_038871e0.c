/*
FUNCTION_NAME: FUN_038871e0
ENTRY_POINT: 038871e0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_5
*/


void FUN_038871e0(undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4,long param_5)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  uint *puVar9;
  float *pfVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 local_120;
  float local_118;
  undefined8 local_110;
  float local_108;
  undefined8 local_100;
  float local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  
  puVar1 = (undefined8 *)(param_5 + 0x2b4);
  if ((DAT_03ff87c4 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da82c0);
    DAT_03ff87c4 = 1;
  }
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0.0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0.0;
  local_100 = 0;
  local_108 = 0.0;
  local_110 = 0;
  local_118 = 0.0;
  local_120 = 0;
  *(undefined1 *)(param_5 + 0x313) = *(undefined1 *)(param_5 + 0x1d8);
  *(undefined1 *)(param_5 + 0x352) = *(undefined1 *)(param_5 + 0x1e0);
  *(undefined1 *)(param_5 + 0x2d4) = *(undefined1 *)(param_5 + 0x1d0);
  *(undefined4 *)(param_5 + 0x30f) = *(undefined4 *)(param_5 + 0x1dc);
  *(undefined4 *)(param_5 + 0x34e) = *(undefined4 *)(param_5 + 0x1e4);
  *(undefined4 *)(param_5 + 0x2d0) = *(undefined4 *)(param_5 + 0x1d4);
  if (*(int *)(param_5 + 0x1f8) == 0) {
    return;
  }
  uVar6 = FUN_03886b94(param_5);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(long *)(param_5 + 0x178) == 0) {
LAB_03888f00:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar7 = FUN_03928c2c(*(long *)(param_5 + 0x178),0);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  }
  uVar6 = FUN_0391f968(lVar7,0,0);
  if ((uVar6 & 1) == 0) {
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    puVar9 = *(uint **)(*(long *)
                         Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                       0xb8);
    uVar6 = (ulong)*puVar9;
    param_2 = (ulong)puVar9[1];
    param_3 = (ulong)puVar9[2];
    param_4 = (ulong)puVar9[3];
  }
  else {
    if (lVar7 == 0) goto LAB_03888f00;
    uVar6 = FUN_039274a0(lVar7,0);
  }
  pbVar2 = (byte *)(param_5 + 0x1f8);
  uVar24 = param_2;
  uVar25 = param_3;
  uVar31 = param_4;
  uVar13 = FUN_03914250(uVar6,0);
  fVar17 = (float)uVar24;
  local_b0 = CONCAT44(fVar17,uVar13);
  fVar16 = (float)uVar25;
  local_a8 = CONCAT44((int)uVar31,fVar16);
  fVar15 = fVar16;
  if ((*(int *)pbVar2 == 1) && (fVar14 = (float)FUN_03925ca4(0), 1.0 < fVar14)) {
    FUN_03925cf4(0);
    FUN_03925cf4(0);
    uVar26 = (ulong)*(uint *)(param_5 + 0x220);
    uVar23 = (ulong)*(uint *)(param_5 + 0x194);
    FUN_03925cf4(0);
    if (*(long *)(param_5 + 0x178) == 0) goto LAB_03888f00;
    uVar18 = FUN_039291ac(*(long *)(param_5 + 0x178),0);
    if (DAT_03fed25b == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed25b = '\x01';
    }
    puVar3 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    lVar7 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    fVar15 = (float)FUN_03914a7c(uVar6,param_2,param_3,param_4,*(undefined4 *)(lVar7 + 0x18),
                                 *(undefined4 *)(lVar7 + 0x1c),*(undefined4 *)(lVar7 + 0x20),0);
    fVar14 = (float)param_2;
    fVar29 = (float)param_3;
    fVar36 = ABS((float)uVar26 * fVar29 + (float)uVar18 * fVar15 + (float)uVar23 * fVar14);
    if (DAT_03fed263 == '\0') {
      thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
      DAT_03fed263 = '\x01';
    }
    puVar4 = Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__;
    fVar22 = fVar36;
    if (fVar36 <= 1.0) {
      fVar22 = 1.0;
    }
    fVar28 = **(float **)
               (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8)
             * 8.0;
    fVar32 = fVar22 * DAT_00b55490;
    if (fVar22 * DAT_00b55490 <= fVar28) {
      fVar32 = fVar28;
    }
    if (ABS(1.0 - fVar36) < fVar32) {
      if (*(long *)(param_5 + 0x178) == 0) goto LAB_03888f00;
      fVar36 = (float)FUN_03929130(*(long *)(param_5 + 0x178),0);
      uVar18 = (ulong)(uint)-fVar36;
      uVar23 = (ulong)(uint)-fVar32;
      uVar26 = (ulong)(uint)-(float)uVar26;
    }
    if (DAT_03fed45d == '\0') {
      thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
      DAT_03fed45d = '\x01';
    }
    fVar36 = fVar29 * fVar29 + fVar15 * fVar15 + fVar14 * fVar14;
    if (**(float **)(*(long *)puVar4 + 0xb8) <= fVar36) {
      fVar22 = fVar29 * (float)uVar26 + fVar14 * (float)uVar23 + fVar15 * (float)uVar18;
      uVar18 = (ulong)(uint)((float)uVar18 - (fVar15 * fVar22) / fVar36);
      uVar23 = (ulong)(uint)((float)uVar23 - (fVar14 * fVar22) / fVar36);
      uVar26 = (ulong)(uint)((float)uVar26 - (fVar29 * fVar22) / fVar36);
    }
    FUN_03914800(uVar18,uVar23,uVar26,fVar15,param_2,0);
    uVar19 = FUN_03914a7c(0);
    fVar15 = (float)FUN_03914a7c(uVar13,uVar24 & 0xffffffff,uVar25 & 0xffffffff,uVar31,uVar19,uVar23
                                 ,uVar26,0);
    puVar11 = (undefined8 *)(param_5 + 0x314);
    *puVar11 = CONCAT44((float)((ulong)*puVar11 >> 0x20) + fVar17,(float)*puVar11 + fVar15);
    *(float *)(param_5 + 0x31c) = fVar16 + *(float *)(param_5 + 0x31c);
    puVar12 = (undefined8 *)(param_5 + 0x353);
    *puVar12 = CONCAT44(fVar17 + (float)((ulong)*puVar12 >> 0x20),fVar15 + (float)*puVar12);
    *(float *)(param_5 + 0x35b) = fVar16 + *(float *)(param_5 + 0x35b);
    *(ulong *)(param_5 + 0x390) =
         CONCAT44(fVar17 + (float)((ulong)*(undefined8 *)(param_5 + 0x390) >> 0x20),
                  fVar15 + (float)*(undefined8 *)(param_5 + 0x390));
    *(float *)(param_5 + 0x398) = fVar16 + *(float *)(param_5 + 0x398);
    *(ulong *)(param_5 + 0x3c8) =
         CONCAT44(fVar17 + (float)((ulong)*(undefined8 *)(param_5 + 0x3c8) >> 0x20),
                  fVar15 + (float)*(undefined8 *)(param_5 + 0x3c8));
    *(float *)(param_5 + 0x3d0) = fVar16 + *(float *)(param_5 + 0x3d0);
    *puVar1 = CONCAT44(fVar17 + (float)((ulong)*puVar1 >> 0x20),fVar15 + (float)*puVar1);
    *(float *)(param_5 + 700) = fVar16 + *(float *)(param_5 + 700);
    *(undefined4 *)(param_5 + 0x2dd) = *(undefined4 *)(param_5 + 700);
    *(undefined8 *)(param_5 + 0x2d5) = *puVar1;
    fVar17 = DAT_00b552c8;
    fVar16 = *(float *)(param_5 + 0x224) * *(float *)(param_5 + 0x1a4);
    local_b8 = *(float *)(param_5 + 0x230) * *(float *)(param_5 + 0x1ac);
    fVar15 = -(*(float *)(param_5 + 0x228) * *(float *)(param_5 + 0x1a8));
    if (*(char *)(param_5 + 0x1b0) != '\0') {
      fVar15 = *(float *)(param_5 + 0x228) * *(float *)(param_5 + 0x1a8);
    }
    local_c0 = CONCAT44(fVar15,fVar16);
    if (*(char *)(param_5 + 0x235) == '\0') {
      if ((*(char *)(param_5 + 0x236) != '\0') && (*(char *)(param_5 + 0x237) == '\0')) {
        fVar16 = fVar16 - fVar15;
        fVar15 = 0.0;
      }
    }
    else if ((*(char *)(param_5 + 0x236) == '\0') && (*(char *)(param_5 + 0x237) == '\0')) {
      fVar15 = fVar15 - fVar16;
      fVar16 = 0.0;
    }
    fVar15 = fVar15 + *(float *)(param_5 + 0x270);
    fVar29 = *(float *)(param_5 + 0x278) + 0.0;
    uVar6 = (ulong)(uint)fVar29;
    fVar14 = fVar15;
    if (80.0 < fVar15) {
      fVar14 = 80.0;
    }
    fVar36 = fVar16 + *(float *)(param_5 + 0x274);
    *(float *)(param_5 + 0x274) = fVar36;
    fVar36 = fVar36 * fVar17;
    if (fVar15 < -80.0) {
      fVar14 = -80.0;
    }
    *(float *)(param_5 + 0x270) = fVar14;
    fVar15 = fVar29 * fVar17;
    *(float *)(param_5 + 0x278) = fVar29;
    uVar13 = FUN_03914564(fVar14 * fVar17,0);
    *(undefined4 *)(param_5 + 0x2c0) = uVar13;
    *(float *)(param_5 + 0x2c4) = fVar36;
    *(float *)(param_5 + 0x2c8) = fVar15;
    *(int *)(param_5 + 0x2cc) = (int)uVar6;
    uVar27 = 0;
    *(undefined8 *)(param_5 + 0x2e9) = *(undefined8 *)(param_5 + 0x2c8);
    *(undefined8 *)(param_5 + 0x2e1) = *(undefined8 *)(param_5 + 0x2c0);
    uVar24 = (ulong)(uint)(*(float *)(param_5 + 0x274) * fVar17);
    uVar19 = FUN_03914564(0,0);
    if (DAT_03fed25b == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed25b = '\x01';
    }
    lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
    uVar20 = FUN_03914a7c(uVar19,uVar24,uVar27,uVar6,*(undefined4 *)(lVar7 + 0x18),
                          *(undefined4 *)(lVar7 + 0x1c),*(undefined4 *)(lVar7 + 0x20),0);
    uVar21 = FUN_03914748(fVar16,0);
    fVar37 = *(float *)(param_5 + 0x2b4);
    fVar38 = *(float *)(param_5 + 0x2b8);
    fVar39 = *(float *)(param_5 + 700);
    uVar19 = uVar20;
    uVar6 = uVar24;
    fVar15 = (float)FUN_03914a7c(uVar21,0);
    fVar16 = *(float *)(param_5 + 800);
    fVar14 = *(float *)(param_5 + 0x324);
    fVar36 = *(float *)(param_5 + 0x32c);
    fVar29 = *(float *)(param_5 + 0x328);
    *(float *)(param_5 + 0x314) = fVar37 + fVar15;
    *(float *)(param_5 + 0x318) = fVar38 + (float)uVar19;
    *(float *)(param_5 + 0x31c) = fVar39 + (float)uVar6;
    fVar35 = (float)uVar27;
    fVar34 = (float)uVar21;
    fVar33 = (float)uVar20;
    fVar40 = (float)uVar24;
    *(float *)(param_5 + 800) =
         (fVar33 * fVar29 + fVar35 * fVar16 + fVar34 * fVar36) - fVar40 * fVar14;
    *(float *)(param_5 + 0x324) =
         (fVar40 * fVar16 + fVar35 * fVar14 + fVar33 * fVar36) - fVar34 * fVar29;
    *(float *)(param_5 + 0x328) =
         (fVar34 * fVar14 + fVar35 * fVar29 + fVar40 * fVar36) - fVar33 * fVar16;
    *(float *)(param_5 + 0x32c) =
         ((fVar35 * fVar36 - fVar34 * fVar16) - fVar33 * fVar14) - fVar40 * fVar29;
    uVar19 = uVar20;
    uVar6 = uVar24;
    fVar15 = (float)FUN_03914a7c(uVar21,uVar20,uVar24,uVar27,*(float *)(param_5 + 0x353) - fVar37,
                                 *(float *)(param_5 + 0x357) - fVar38,
                                 *(float *)(param_5 + 0x35b) - fVar39,0);
    fVar16 = *(float *)(param_5 + 0x35f);
    fVar14 = *(float *)(param_5 + 0x363);
    fVar36 = *(float *)(param_5 + 0x36b);
    fVar29 = *(float *)(param_5 + 0x367);
    *(float *)(param_5 + 0x353) = fVar37 + fVar15;
    *(float *)(param_5 + 0x357) = fVar38 + (float)uVar19;
    *(float *)(param_5 + 0x35b) = fVar39 + (float)uVar6;
    *(float *)(param_5 + 0x35f) =
         (fVar33 * fVar29 + fVar35 * fVar16 + fVar34 * fVar36) - fVar40 * fVar14;
    *(float *)(param_5 + 0x363) =
         (fVar40 * fVar16 + fVar35 * fVar14 + fVar33 * fVar36) - fVar34 * fVar29;
    *(float *)(param_5 + 0x367) =
         (fVar34 * fVar14 + fVar35 * fVar29 + fVar40 * fVar36) - fVar33 * fVar16;
    *(float *)(param_5 + 0x36b) =
         ((fVar35 * fVar36 - fVar34 * fVar16) - fVar33 * fVar14) - fVar40 * fVar29;
    fVar14 = *(float *)(param_5 + 0x324);
    fVar29 = *(float *)(param_5 + 0x328);
    fVar15 = (float)FUN_039145fc(*(undefined4 *)(param_5 + 800),fVar14,fVar29,
                                 *(undefined4 *)(param_5 + 0x32c),0);
    fVar16 = DAT_00b556e8;
    fVar14 = fVar14 * DAT_00b556e8;
    fVar29 = fVar29 * DAT_00b556e8;
    uVar13 = FUN_03914cb4(fVar15 * DAT_00b556e8,0);
    *(undefined4 *)(param_5 + 600) = uVar13;
    *(float *)(param_5 + 0x25c) = fVar14;
    *(float *)(param_5 + 0x260) = fVar29;
    fVar14 = *(float *)(param_5 + 0x363);
    fVar29 = *(float *)(param_5 + 0x367);
    fVar15 = (float)FUN_039145fc(*(undefined4 *)(param_5 + 0x35f),fVar14,fVar29,
                                 *(undefined4 *)(param_5 + 0x36b),0);
    fVar14 = fVar14 * fVar16;
    fVar29 = fVar29 * fVar16;
    uVar13 = FUN_03914cb4(fVar15 * fVar16,0);
    *(undefined4 *)(param_5 + 0x264) = uVar13;
    *(float *)(param_5 + 0x268) = fVar14;
    *(float *)(param_5 + 0x26c) = fVar29;
    uVar19 = uVar20;
    uVar6 = uVar24;
    fVar15 = (float)FUN_03914a7c(uVar21,uVar20,uVar24,uVar27,*(float *)(param_5 + 0x390) - fVar37,
                                 *(float *)(param_5 + 0x394) - fVar38,
                                 *(float *)(param_5 + 0x398) - fVar39,0);
    fVar14 = *(float *)(param_5 + 0x39c);
    fVar29 = *(float *)(param_5 + 0x3a0);
    fVar22 = *(float *)(param_5 + 0x3a8);
    fVar36 = *(float *)(param_5 + 0x3a4);
    *(float *)(param_5 + 0x390) = fVar37 + fVar15;
    *(float *)(param_5 + 0x394) = fVar38 + (float)uVar19;
    *(float *)(param_5 + 0x398) = fVar39 + (float)uVar6;
    *(float *)(param_5 + 0x39c) =
         (fVar33 * fVar36 + fVar35 * fVar14 + fVar34 * fVar22) - fVar40 * fVar29;
    *(float *)(param_5 + 0x3a0) =
         (fVar40 * fVar14 + fVar35 * fVar29 + fVar33 * fVar22) - fVar34 * fVar36;
    *(float *)(param_5 + 0x3a4) =
         (fVar34 * fVar29 + fVar35 * fVar36 + fVar40 * fVar22) - fVar33 * fVar14;
    *(float *)(param_5 + 0x3a8) =
         ((fVar35 * fVar22 - fVar34 * fVar14) - fVar33 * fVar29) - fVar40 * fVar36;
    fVar15 = (float)FUN_03914a7c(uVar21,uVar20,uVar24,uVar27,*(float *)(param_5 + 0x3c8) - fVar37,
                                 *(float *)(param_5 + 0x3cc) - fVar38,
                                 *(float *)(param_5 + 0x3d0) - fVar39,0);
    fVar29 = *(float *)(param_5 + 0x3d4);
    fVar22 = *(float *)(param_5 + 0x3d8);
    fVar32 = *(float *)(param_5 + 0x3dc);
    fVar28 = *(float *)(param_5 + 0x3e0);
    *(float *)(param_5 + 0x3c8) = fVar37 + fVar15;
    *(float *)(param_5 + 0x3cc) = fVar38 + (float)uVar20;
    *(float *)(param_5 + 0x3d0) = fVar39 + (float)uVar24;
    fVar14 = *(float *)(param_5 + 0x3a0);
    fVar36 = *(float *)(param_5 + 0x3a4);
    *(float *)(param_5 + 0x3d4) =
         (fVar33 * fVar32 + fVar35 * fVar29 + fVar34 * fVar28) - fVar40 * fVar22;
    *(float *)(param_5 + 0x3d8) =
         (fVar40 * fVar29 + fVar35 * fVar22 + fVar33 * fVar28) - fVar34 * fVar32;
    *(float *)(param_5 + 0x3dc) =
         (fVar34 * fVar22 + fVar35 * fVar32 + fVar40 * fVar28) - fVar33 * fVar29;
    *(float *)(param_5 + 0x3e0) =
         ((fVar35 * fVar28 - fVar34 * fVar29) - fVar33 * fVar22) - fVar40 * fVar32;
    fVar15 = (float)FUN_039145fc(*(undefined4 *)(param_5 + 0x39c),fVar14,fVar36,
                                 *(undefined4 *)(param_5 + 0x3a8),0);
    fVar14 = fVar14 * fVar16;
    fVar36 = fVar36 * fVar16;
    uVar13 = FUN_03914cb4(fVar15 * fVar16,0);
    fVar29 = *(float *)(param_5 + 0x3d8);
    fVar15 = *(float *)(param_5 + 0x3dc);
    uVar30 = *(undefined4 *)(param_5 + 0x3e0);
    *(undefined4 *)(param_5 + 0x3ac) = uVar13;
    *(float *)(param_5 + 0x3b0) = fVar14;
    *(float *)(param_5 + 0x3b4) = fVar36;
    fVar14 = (float)FUN_039145fc(*(undefined4 *)(param_5 + 0x3d4),0);
    fVar29 = fVar29 * fVar16;
    fVar15 = fVar15 * fVar16;
    uVar13 = FUN_03914cb4(fVar14 * fVar16,0);
    *(undefined4 *)(param_5 + 0x3e4) = uVar13;
    *(float *)(param_5 + 1000) = fVar29;
    *(float *)(param_5 + 0x3ec) = fVar15;
    puVar5 = PTR_DAT_03da82c0;
    if (*(char *)(param_5 + 0x238) != '\0') {
      lVar7 = *(long *)PTR_DAT_03da82c0;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar7 = *(long *)puVar5;
      }
      uVar19 = **(undefined8 **)(lVar7 + 0xb8);
      *(undefined4 *)(param_5 + 0x31c) = *(undefined4 *)(*(undefined8 **)(lVar7 + 0xb8) + 1);
      *puVar11 = uVar19;
      uVar19 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0xc);
      *(undefined4 *)(param_5 + 0x35b) = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x14);
      *puVar12 = uVar19;
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar10 = *(float **)(*(long *)puVar3 + 0xb8);
      fVar15 = *pfVar10;
      fVar16 = pfVar10[1];
      fVar14 = pfVar10[2];
      *(float *)(param_5 + 600) = fVar15;
      *(float *)(param_5 + 0x25c) = fVar16;
      *(float *)(param_5 + 0x260) = fVar14;
      fVar16 = fVar16 * fVar17;
      fVar14 = fVar14 * fVar17;
      uVar13 = FUN_03914564(fVar15 * fVar17,0);
      *(undefined4 *)(param_5 + 800) = uVar13;
      *(float *)(param_5 + 0x324) = fVar16;
      *(float *)(param_5 + 0x328) = fVar14;
      *(undefined4 *)(param_5 + 0x32c) = uVar30;
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar10 = *(float **)(*(long *)puVar3 + 0xb8);
      fVar15 = *pfVar10;
      fVar16 = pfVar10[1];
      fVar14 = pfVar10[2];
      *(float *)(param_5 + 0x264) = fVar15;
      *(float *)(param_5 + 0x268) = fVar16;
      *(float *)(param_5 + 0x26c) = fVar14;
      fVar16 = fVar16 * fVar17;
      fVar14 = fVar14 * fVar17;
      uVar13 = FUN_03914564(fVar15 * fVar17,0);
      *(undefined4 *)(param_5 + 0x35f) = uVar13;
      *(float *)(param_5 + 0x363) = fVar16;
      *(float *)(param_5 + 0x367) = fVar14;
      *(undefined4 *)(param_5 + 0x36b) = uVar30;
      lVar7 = *(long *)puVar5;
      puVar11 = *(undefined8 **)(lVar7 + 0xb8);
      uVar13 = *(undefined4 *)(puVar11 + 1);
      *(undefined8 *)(param_5 + 0x390) = *puVar11;
      *(undefined4 *)(param_5 + 0x398) = uVar13;
      lVar7 = *(long *)(lVar7 + 0xb8);
      uVar13 = *(undefined4 *)(lVar7 + 0x14);
      *(undefined8 *)(param_5 + 0x3c8) = *(undefined8 *)(lVar7 + 0xc);
      *(undefined4 *)(param_5 + 0x3d0) = uVar13;
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar10 = *(float **)(*(long *)puVar3 + 0xb8);
      fVar15 = *pfVar10;
      fVar16 = pfVar10[1];
      fVar14 = pfVar10[2];
      *(float *)(param_5 + 0x3ac) = fVar15;
      *(float *)(param_5 + 0x3b0) = fVar16;
      *(float *)(param_5 + 0x3b4) = fVar14;
      fVar16 = fVar16 * fVar17;
      fVar14 = fVar14 * fVar17;
      uVar13 = FUN_03914564(fVar15 * fVar17,0);
      *(undefined4 *)(param_5 + 0x39c) = uVar13;
      *(float *)(param_5 + 0x3a0) = fVar16;
      *(float *)(param_5 + 0x3a4) = fVar14;
      *(undefined4 *)(param_5 + 0x3a8) = uVar30;
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar10 = *(float **)(*(long *)puVar3 + 0xb8);
      fVar15 = *pfVar10;
      fVar16 = pfVar10[1];
      fVar14 = pfVar10[2];
      *(float *)(param_5 + 0x3e4) = fVar15;
      *(float *)(param_5 + 1000) = fVar16;
      *(float *)(param_5 + 0x3ec) = fVar14;
      fVar16 = fVar16 * fVar17;
      fVar14 = fVar14 * fVar17;
      uVar13 = FUN_03914564(fVar15 * fVar17,0);
      *(undefined4 *)(param_5 + 0x3d4) = uVar13;
      *(float *)(param_5 + 0x3d8) = fVar16;
      *(float *)(param_5 + 0x3dc) = fVar14;
      *(undefined4 *)(param_5 + 0x3e0) = uVar30;
      uVar13 = **(undefined4 **)(*(long *)puVar4 + 0xb8);
      *(undefined4 *)(param_5 + 0x2b4) = uVar13;
      *(undefined4 *)(param_5 + 0x2b8) = uVar13;
      *(undefined4 *)(param_5 + 700) = uVar13;
      *(undefined4 *)(param_5 + 0x2dd) = *(undefined4 *)(param_5 + 700);
      *(undefined8 *)(param_5 + 0x2d5) = *puVar1;
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar10 = *(float **)(*(long *)puVar3 + 0xb8);
      fVar16 = *pfVar10;
      fVar14 = pfVar10[1];
      fVar15 = pfVar10[2];
      *(float *)(param_5 + 0x270) = fVar16;
      *(float *)(param_5 + 0x274) = fVar14;
      *(float *)(param_5 + 0x278) = fVar15;
      fVar14 = fVar14 * fVar17;
      fVar15 = fVar15 * fVar17;
      uVar13 = FUN_03914564(fVar16 * fVar17,0);
      *(undefined4 *)(param_5 + 0x2c0) = uVar13;
      *(float *)(param_5 + 0x2c4) = fVar14;
      *(float *)(param_5 + 0x2c8) = fVar15;
      *(undefined4 *)(param_5 + 0x2cc) = uVar30;
      *(undefined8 *)(param_5 + 0x2e9) = *(undefined8 *)(param_5 + 0x2c8);
      *(undefined8 *)(param_5 + 0x2e1) = *(undefined8 *)(param_5 + 0x2c0);
    }
  }
  puVar3 = PTR_DAT_03da82c0;
  if ((*(byte *)(param_5 + 500) & 1) != 0) {
    uVar13 = *(undefined4 *)(param_5 + 0x180);
    uVar19 = *(undefined8 *)(param_5 + 0x178);
    if (*(int *)(*(long *)PTR_DAT_03da82c0 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03888f04(uVar13,uVar19,&local_d0,&local_e0,&local_f0);
    uVar20 = local_d0;
    fVar29 = *(float *)(param_5 + 0x218);
    fVar36 = *(float *)(param_5 + 0x188);
    fVar17 = (float)FUN_03925cf4(0);
    uVar27 = local_e0;
    fVar22 = *(float *)(param_5 + 0x21c);
    fVar32 = *(float *)(param_5 + 0x18c);
    fVar16 = (float)FUN_03925cf4(0);
    uVar19 = local_f0;
    fVar28 = *(float *)(param_5 + 0x220);
    fVar40 = *(float *)(param_5 + 400);
    fVar14 = (float)FUN_03925cf4(0);
    iVar8 = *(int *)(param_5 + 0x1fc);
    fVar17 = (float)uVar20 * fVar29 * fVar36 * fVar17 + (float)uVar27 * fVar22 * fVar32 * fVar16 +
             (float)uVar19 * fVar28 * fVar40 * fVar14;
    if (iVar8 == 0) {
      if ((*pbVar2 >> 1 & 1) != 0) {
        uVar13 = *(undefined4 *)(param_5 + 0x180);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038892d0(uVar13,param_5 + 0x2f1,&local_b0);
        uVar19 = *(undefined8 *)(param_5 + 0x314);
        fVar14 = *(float *)(param_5 + 0x31c);
        fVar16 = (float)FUN_03914a7c(0);
        *(ulong *)(param_5 + 0x314) =
             CONCAT44((float)((ulong)uVar19 >> 0x20) + fVar17,(float)uVar19 + fVar16);
        iVar8 = *(int *)(param_5 + 0x1fc);
        *(float *)(param_5 + 0x31c) = fVar14 + fVar15;
        if (iVar8 != 0) goto LAB_038880a0;
      }
      if ((*pbVar2 >> 2 & 1) != 0) {
        uVar13 = *(undefined4 *)(param_5 + 0x180);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038892d0(uVar13,param_5 + 0x330,&local_b0);
        uVar19 = *(undefined8 *)(param_5 + 0x353);
        fVar14 = *(float *)(param_5 + 0x35b);
        fVar16 = (float)FUN_03914a7c(0);
        fVar15 = fVar14 + fVar15;
        *(ulong *)(param_5 + 0x353) =
             CONCAT44((float)((ulong)uVar19 >> 0x20) + fVar17,(float)uVar19 + fVar16);
        *(float *)(param_5 + 0x35b) = fVar15;
        iVar8 = *(int *)(param_5 + 0x1fc);
        goto LAB_038880a0;
      }
    }
    else {
LAB_038880a0:
      if (iVar8 == 1) {
        if ((*pbVar2 >> 1 & 1) != 0) {
          uVar13 = *(undefined4 *)(param_5 + 0x180);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_03889368(uVar13,param_5 + 0x390,&local_b0);
          uVar19 = *(undefined8 *)(param_5 + 0x390);
          fVar29 = *(float *)(param_5 + 0x398);
          fVar16 = (float)FUN_03914a7c(0);
          fVar14 = (float)((ulong)uVar19 >> 0x20) + fVar17;
          fVar17 = fVar29 + fVar15;
          *(ulong *)(param_5 + 0x390) = CONCAT44(fVar14,(float)uVar19 + fVar16);
          *(float *)(param_5 + 0x398) = fVar17;
          if (*(int *)(param_5 + 0x1fc) != 1) goto LAB_038881e4;
        }
        if ((*pbVar2 >> 2 & 1) != 0) {
          uVar13 = *(undefined4 *)(param_5 + 0x180);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_03889368(uVar13,param_5 + 0x3c8,&local_b0);
          uVar19 = *(undefined8 *)(param_5 + 0x3c8);
          fVar14 = *(float *)(param_5 + 0x3d0);
          fVar16 = (float)FUN_03914a7c(0);
          fVar15 = fVar14 + fVar15;
          *(ulong *)(param_5 + 0x3c8) =
               CONCAT44((float)((ulong)uVar19 >> 0x20) + fVar17,(float)uVar19 + fVar16);
          *(float *)(param_5 + 0x3d0) = fVar15;
        }
      }
    }
LAB_038881e4:
    if ((*pbVar2 >> 3 & 1) != 0) {
      uVar13 = *(undefined4 *)(param_5 + 0x180);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038893f8(uVar13,param_5 + 0x27c,&local_b0);
      uVar19 = *puVar1;
      fVar14 = *(float *)(param_5 + 700);
      fVar16 = (float)FUN_03914a7c(0);
      *puVar1 = CONCAT44((float)((ulong)uVar19 >> 0x20) + fVar17,(float)uVar19 + fVar16);
      *(float *)(param_5 + 700) = fVar14 + fVar15;
      *(undefined4 *)(param_5 + 0x2dd) = *(undefined4 *)(param_5 + 700);
      *(undefined8 *)(param_5 + 0x2d5) = *puVar1;
    }
  }
  puVar3 = PTR_DAT_03da82c0;
  fVar15 = DAT_00b552c8;
  if (*(int *)(param_5 + 0x1ec) == 1) {
LAB_03888284:
    if (*(char *)(param_5 + 0x1f0) == '\0') {
LAB_0388830c:
      fVar16 = *(float *)(param_5 + 0x224) * *(float *)(param_5 + 0x1a4);
      fVar17 = -(*(float *)(param_5 + 0x228) * *(float *)(param_5 + 0x1a8));
      if (*(char *)(param_5 + 0x1b0) != '\0') {
        fVar17 = *(float *)(param_5 + 0x228) * *(float *)(param_5 + 0x1a8);
      }
      fVar14 = fVar17;
      if (*(char *)(param_5 + 0x235) == '\0') {
        if (*(char *)(param_5 + 0x236) == '\0') {
          if (*(char *)(param_5 + 0x237) != '\0') {
            fVar14 = 0.0;
            fVar17 = -fVar17 - fVar16;
            goto LAB_038888e8;
          }
        }
        else {
          if (*(char *)(param_5 + 0x237) != '\0') {
            fVar17 = -fVar17;
            fVar14 = 0.0;
            goto LAB_038888ec;
          }
          if (*(char *)(param_5 + 0x237) == '\0') {
            fVar16 = fVar16 - fVar17;
            fVar14 = 0.0;
          }
        }
LAB_0388835c:
        fVar17 = 0.0;
      }
      else {
        if (*(char *)(param_5 + 0x236) != '\0') goto LAB_0388835c;
        if (*(char *)(param_5 + 0x237) == '\0') {
          if (*(char *)(param_5 + 0x237) == '\0') {
            fVar14 = fVar17 - fVar16;
            fVar16 = 0.0;
          }
          goto LAB_0388835c;
        }
        fVar17 = -fVar16;
LAB_038888e8:
        fVar16 = 0.0;
      }
LAB_038888ec:
      iVar8 = *(int *)(param_5 + 0x1fc);
      fVar14 = fVar14 + 0.0;
      fVar29 = fVar16 + 0.0;
      fVar36 = fVar17 + *(float *)(param_5 + 0x230) * *(float *)(param_5 + 0x1ac);
      if (iVar8 == 0) {
        if ((*pbVar2 >> 1 & 1) != 0) {
          fVar22 = fVar14 + *(float *)(param_5 + 600);
          fVar16 = fVar29 + *(float *)(param_5 + 0x25c);
          fVar17 = fVar36 + *(float *)(param_5 + 0x260);
          *(float *)(param_5 + 600) = fVar22;
          *(float *)(param_5 + 0x25c) = fVar16;
          *(float *)(param_5 + 0x260) = fVar17;
          fVar16 = fVar16 * fVar15;
          fVar17 = fVar17 * fVar15;
          uVar13 = FUN_03914564(fVar22 * fVar15,0);
          iVar8 = *(int *)(param_5 + 0x1fc);
          *(undefined4 *)(param_5 + 800) = uVar13;
          *(float *)(param_5 + 0x324) = fVar16;
          *(float *)(param_5 + 0x328) = fVar17;
          *(float *)(param_5 + 0x32c) = fVar15;
          if (iVar8 != 0) goto LAB_03888908;
        }
        fVar15 = DAT_00b552c8;
        if ((*pbVar2 >> 2 & 1) != 0) {
          fVar22 = fVar14 + *(float *)(param_5 + 0x264);
          fVar16 = fVar29 + *(float *)(param_5 + 0x268);
          fVar17 = fVar36 + *(float *)(param_5 + 0x26c);
          *(float *)(param_5 + 0x264) = fVar22;
          *(float *)(param_5 + 0x268) = fVar16;
          *(float *)(param_5 + 0x26c) = fVar17;
          fVar16 = fVar16 * fVar15;
          fVar17 = fVar17 * fVar15;
          uVar13 = FUN_03914564(fVar22 * fVar15,0);
          *(undefined4 *)(param_5 + 0x35f) = uVar13;
          *(float *)(param_5 + 0x363) = fVar16;
          *(float *)(param_5 + 0x367) = fVar17;
          *(float *)(param_5 + 0x36b) = fVar15;
          iVar8 = *(int *)(param_5 + 0x1fc);
          goto LAB_03888908;
        }
      }
      else {
LAB_03888908:
        fVar15 = DAT_00b552c8;
        if (iVar8 == 1) {
          if ((*pbVar2 >> 1 & 1) != 0) {
            fVar22 = fVar14 + *(float *)(param_5 + 0x3ac);
            fVar16 = fVar29 + *(float *)(param_5 + 0x3b0);
            fVar17 = fVar36 + *(float *)(param_5 + 0x3b4);
            *(float *)(param_5 + 0x3ac) = fVar22;
            *(float *)(param_5 + 0x3b0) = fVar16;
            *(float *)(param_5 + 0x3b4) = fVar17;
            fVar16 = fVar16 * fVar15;
            fVar17 = fVar17 * fVar15;
            uVar13 = FUN_03914564(fVar22 * fVar15,0);
            *(undefined4 *)(param_5 + 0x39c) = uVar13;
            *(float *)(param_5 + 0x3a0) = fVar16;
            *(float *)(param_5 + 0x3a4) = fVar17;
            *(float *)(param_5 + 0x3a8) = fVar15;
            if (*(int *)(param_5 + 0x1fc) != 1) goto LAB_03888a38;
          }
          fVar15 = DAT_00b552c8;
          if ((*pbVar2 >> 2 & 1) != 0) {
            fVar22 = fVar14 + *(float *)(param_5 + 0x3e4);
            fVar16 = fVar29 + *(float *)(param_5 + 1000);
            fVar17 = fVar36 + *(float *)(param_5 + 0x3ec);
            *(float *)(param_5 + 0x3e4) = fVar22;
            *(float *)(param_5 + 1000) = fVar16;
            *(float *)(param_5 + 0x3ec) = fVar17;
            fVar16 = fVar16 * fVar15;
            fVar17 = fVar17 * fVar15;
            uVar13 = FUN_03914564(fVar22 * fVar15,0);
            *(undefined4 *)(param_5 + 0x3d4) = uVar13;
            *(float *)(param_5 + 0x3d8) = fVar16;
            *(float *)(param_5 + 0x3dc) = fVar17;
            *(float *)(param_5 + 0x3e0) = fVar15;
          }
        }
      }
LAB_03888a38:
      fVar15 = DAT_00b552c8;
      if ((*pbVar2 >> 3 & 1) != 0) {
        fVar14 = fVar14 + *(float *)(param_5 + 0x270);
        fVar29 = fVar29 + *(float *)(param_5 + 0x274);
        fVar36 = fVar36 + *(float *)(param_5 + 0x278);
        *(float *)(param_5 + 0x270) = fVar14;
        *(float *)(param_5 + 0x274) = fVar29;
        *(float *)(param_5 + 0x278) = fVar36;
        fVar16 = fVar29 * fVar15;
        fVar17 = fVar36 * fVar15;
        uVar13 = FUN_03914564(fVar14 * fVar15,0);
        *(undefined4 *)(param_5 + 0x2c0) = uVar13;
        *(float *)(param_5 + 0x2c4) = fVar16;
        *(float *)(param_5 + 0x2c8) = fVar17;
        *(float *)(param_5 + 0x2cc) = fVar15;
        *(undefined8 *)(param_5 + 0x2e9) = *(undefined8 *)(param_5 + 0x2c8);
        *(undefined8 *)(param_5 + 0x2e1) = *(undefined8 *)(param_5 + 0x2c0);
      }
      if (*(char *)(param_5 + 0x238) == '\0') {
        return;
      }
      fVar14 = (float)FUN_03889488(param_5);
      fVar15 = DAT_00b552c8;
      iVar8 = *(int *)(param_5 + 0x1fc);
      if (iVar8 == 0) {
        if ((*pbVar2 >> 1 & 1) != 0) {
          fVar29 = fVar14 * *(float *)(param_5 + 600);
          fVar36 = fVar16 * *(float *)(param_5 + 0x25c);
          fVar22 = fVar17 * *(float *)(param_5 + 0x260);
          *(float *)(param_5 + 600) = fVar29;
          *(float *)(param_5 + 0x25c) = fVar36;
          *(float *)(param_5 + 0x260) = fVar22;
          fVar36 = fVar36 * fVar15;
          fVar22 = fVar22 * fVar15;
          uVar13 = FUN_03914564(fVar29 * fVar15,0);
          iVar8 = *(int *)(param_5 + 0x1fc);
          *(undefined4 *)(param_5 + 800) = uVar13;
          *(float *)(param_5 + 0x324) = fVar36;
          *(float *)(param_5 + 0x328) = fVar22;
          *(float *)(param_5 + 0x32c) = fVar15;
          if (iVar8 != 0) goto LAB_03888ac0;
        }
        fVar15 = DAT_00b552c8;
        if ((*pbVar2 >> 2 & 1) == 0) goto LAB_03888bf0;
        fVar29 = fVar14 * *(float *)(param_5 + 0x264);
        fVar36 = fVar16 * *(float *)(param_5 + 0x268);
        fVar22 = fVar17 * *(float *)(param_5 + 0x26c);
        *(float *)(param_5 + 0x264) = fVar29;
        *(float *)(param_5 + 0x268) = fVar36;
        *(float *)(param_5 + 0x26c) = fVar22;
        fVar36 = fVar36 * fVar15;
        fVar22 = fVar22 * fVar15;
        uVar13 = FUN_03914564(fVar29 * fVar15,0);
        *(undefined4 *)(param_5 + 0x35f) = uVar13;
        *(float *)(param_5 + 0x363) = fVar36;
        *(float *)(param_5 + 0x367) = fVar22;
        *(float *)(param_5 + 0x36b) = fVar15;
        iVar8 = *(int *)(param_5 + 0x1fc);
      }
LAB_03888ac0:
      fVar15 = DAT_00b552c8;
      if (iVar8 == 1) {
        if ((*pbVar2 >> 1 & 1) != 0) {
          fVar29 = fVar14 * *(float *)(param_5 + 0x3ac);
          fVar36 = fVar16 * *(float *)(param_5 + 0x3b0);
          fVar22 = fVar17 * *(float *)(param_5 + 0x3b4);
          *(float *)(param_5 + 0x3ac) = fVar29;
          *(float *)(param_5 + 0x3b0) = fVar36;
          *(float *)(param_5 + 0x3b4) = fVar22;
          fVar36 = fVar36 * fVar15;
          fVar22 = fVar22 * fVar15;
          uVar13 = FUN_03914564(fVar29 * fVar15,0);
          *(undefined4 *)(param_5 + 0x39c) = uVar13;
          *(float *)(param_5 + 0x3a0) = fVar36;
          *(float *)(param_5 + 0x3a4) = fVar22;
          *(float *)(param_5 + 0x3a8) = fVar15;
          if (*(int *)(param_5 + 0x1fc) != 1) goto LAB_03888bf0;
        }
        fVar15 = DAT_00b552c8;
        if ((*pbVar2 >> 2 & 1) != 0) {
          fVar29 = fVar14 * *(float *)(param_5 + 0x3e4);
          fVar36 = fVar16 * *(float *)(param_5 + 1000);
          fVar22 = fVar17 * *(float *)(param_5 + 0x3ec);
          *(float *)(param_5 + 0x3e4) = fVar29;
          *(float *)(param_5 + 1000) = fVar36;
          *(float *)(param_5 + 0x3ec) = fVar22;
          fVar36 = fVar36 * fVar15;
          fVar22 = fVar22 * fVar15;
          uVar13 = FUN_03914564(fVar29 * fVar15,0);
          *(undefined4 *)(param_5 + 0x3d4) = uVar13;
          *(float *)(param_5 + 0x3d8) = fVar36;
          *(float *)(param_5 + 0x3dc) = fVar22;
          *(float *)(param_5 + 0x3e0) = fVar15;
        }
      }
LAB_03888bf0:
      fVar15 = DAT_00b552c8;
      if ((*pbVar2 >> 3 & 1) == 0) {
        return;
      }
      fVar14 = fVar14 * *(float *)(param_5 + 0x270);
      fVar16 = fVar16 * *(float *)(param_5 + 0x274);
      fVar17 = fVar17 * *(float *)(param_5 + 0x278);
      *(float *)(param_5 + 0x270) = fVar14;
      *(float *)(param_5 + 0x274) = fVar16;
      *(float *)(param_5 + 0x278) = fVar17;
      fVar16 = fVar16 * fVar15;
      fVar17 = fVar17 * fVar15;
      uVar13 = FUN_03914564(fVar14 * fVar15,0);
      *(undefined4 *)(param_5 + 0x2c0) = uVar13;
      *(float *)(param_5 + 0x2c4) = fVar16;
      *(float *)(param_5 + 0x2c8) = fVar17;
      *(float *)(param_5 + 0x2cc) = fVar15;
      *(undefined8 *)(param_5 + 0x2e9) = *(undefined8 *)(param_5 + 0x2c8);
      *(undefined8 *)(param_5 + 0x2e1) = *(undefined8 *)(param_5 + 0x2c0);
      return;
    }
  }
  else {
    if (*(int *)(param_5 + 0x1ec) != 0) {
      if (*(char *)(param_5 + 0x234) != '\0') goto LAB_03888284;
      goto LAB_0388830c;
    }
    if (*(char *)(param_5 + 0x234) != '\0') goto LAB_03888284;
    if (*(char *)(param_5 + 0x1f0) != '\0') goto LAB_0388830c;
  }
  uVar13 = *(undefined4 *)(param_5 + 0x184);
  uVar19 = *(undefined8 *)(param_5 + 0x178);
  if (*(int *)(*(long *)PTR_DAT_03da82c0 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_03888f04(uVar13,uVar19,&local_100,&local_110,&local_120);
  fVar16 = *(float *)(param_5 + 0x224) * *(float *)(param_5 + 0x198);
  fVar17 = *(float *)(param_5 + 0x228) * *(float *)(param_5 + 0x19c);
  uVar19 = local_110;
  fVar15 = local_108;
  if (*(char *)(param_5 + 0x235) == '\0') {
    if (*(char *)(param_5 + 0x236) == '\0') {
      uVar27 = local_120;
      fVar14 = local_118;
      if (*(char *)(param_5 + 0x237) != '\0') goto LAB_03888db8;
    }
    else {
      if (*(char *)(param_5 + 0x237) != '\0') {
        fVar29 = (float)local_110 * fVar17 + (float)local_120 * fVar16;
        fVar14 = fVar17 * local_108 + fVar16 * local_118;
        goto LAB_038883e8;
      }
      uVar27 = local_110;
      fVar14 = local_108;
      if (*(char *)(param_5 + 0x237) == '\0') goto LAB_03888db8;
    }
LAB_038883d0:
    fVar29 = (float)local_100 * fVar16 + (float)uVar19 * fVar17;
    fVar14 = fVar16 * local_f8 + fVar17 * fVar15;
  }
  else {
    if (((*(char *)(param_5 + 0x236) != '\0') ||
        (uVar19 = local_120, fVar15 = local_118, *(char *)(param_5 + 0x237) != '\0')) ||
       (uVar27 = local_100, uVar19 = local_110, fVar15 = local_108, fVar14 = local_f8,
       *(char *)(param_5 + 0x237) != '\0')) goto LAB_038883d0;
LAB_03888db8:
    fVar29 = (float)uVar27 * (fVar16 + fVar17);
    fVar14 = (fVar16 + fVar17) * fVar14;
  }
LAB_038883e8:
  iVar8 = *(int *)(param_5 + 0x1fc);
  fVar29 = fVar29 + (float)local_120 * *(float *)(param_5 + 0x230) * *(float *)(param_5 + 0x1a0);
  if (iVar8 == 0) {
    if ((*pbVar2 >> 1 & 1) != 0) {
      uVar13 = *(undefined4 *)(param_5 + 0x184);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038892d0(uVar13,param_5 + 0x2f1,&local_b0);
      uVar19 = *(undefined8 *)(param_5 + 0x314);
      fVar17 = *(float *)(param_5 + 0x31c);
      fVar15 = (float)FUN_03914a7c(0);
      *(ulong *)(param_5 + 0x314) =
           CONCAT44((float)((ulong)uVar19 >> 0x20) + fVar29,(float)uVar19 + fVar15);
      iVar8 = *(int *)(param_5 + 0x1fc);
      *(float *)(param_5 + 0x31c) = fVar17 + fVar14;
      if (iVar8 != 0) goto LAB_0388840c;
    }
    if ((*pbVar2 >> 2 & 1) != 0) {
      uVar13 = *(undefined4 *)(param_5 + 0x184);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038892d0(uVar13,param_5 + 0x330,&local_b0);
      uVar19 = *(undefined8 *)(param_5 + 0x353);
      fVar17 = *(float *)(param_5 + 0x35b);
      fVar15 = (float)FUN_03914a7c(0);
      fVar14 = fVar17 + fVar14;
      *(ulong *)(param_5 + 0x353) =
           CONCAT44((float)((ulong)uVar19 >> 0x20) + fVar29,(float)uVar19 + fVar15);
      *(float *)(param_5 + 0x35b) = fVar14;
      iVar8 = *(int *)(param_5 + 0x1fc);
      goto LAB_0388840c;
    }
  }
  else {
LAB_0388840c:
    if (iVar8 == 1) {
      if ((*pbVar2 >> 1 & 1) != 0) {
        uVar13 = *(undefined4 *)(param_5 + 0x184);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_03889368(uVar13,param_5 + 0x390,&local_b0);
        uVar19 = *(undefined8 *)(param_5 + 0x390);
        fVar16 = *(float *)(param_5 + 0x398);
        fVar15 = (float)FUN_03914a7c(0);
        fVar17 = (float)((ulong)uVar19 >> 0x20) + fVar29;
        fVar29 = fVar16 + fVar14;
        *(ulong *)(param_5 + 0x390) = CONCAT44(fVar17,(float)uVar19 + fVar15);
        *(float *)(param_5 + 0x398) = fVar29;
        if (*(int *)(param_5 + 0x1fc) != 1) goto LAB_03888550;
      }
      if ((*pbVar2 >> 2 & 1) != 0) {
        uVar13 = *(undefined4 *)(param_5 + 0x184);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_03889368(uVar13,param_5 + 0x3c8,&local_b0);
        uVar19 = *(undefined8 *)(param_5 + 0x3c8);
        fVar17 = *(float *)(param_5 + 0x3d0);
        fVar15 = (float)FUN_03914a7c(0);
        fVar14 = fVar17 + fVar14;
        *(ulong *)(param_5 + 0x3c8) =
             CONCAT44((float)((ulong)uVar19 >> 0x20) + fVar29,(float)uVar19 + fVar15);
        *(float *)(param_5 + 0x3d0) = fVar14;
      }
    }
  }
LAB_03888550:
  if ((*pbVar2 >> 3 & 1) != 0) {
    uVar13 = *(undefined4 *)(param_5 + 0x184);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038893f8(uVar13,param_5 + 0x27c,&local_b0);
    uVar19 = *puVar1;
    fVar17 = *(float *)(param_5 + 700);
    fVar15 = (float)FUN_03914a7c(0);
    fVar14 = fVar17 + fVar14;
    *puVar1 = CONCAT44((float)((ulong)uVar19 >> 0x20) + fVar29,(float)uVar19 + fVar15);
    *(float *)(param_5 + 700) = fVar14;
    *(undefined4 *)(param_5 + 0x2dd) = *(undefined4 *)(param_5 + 700);
    *(undefined8 *)(param_5 + 0x2d5) = *puVar1;
  }
  if (*(char *)(param_5 + 0x238) == '\0') {
    return;
  }
  fVar15 = (float)FUN_03889488(param_5);
  iVar8 = *(int *)(param_5 + 0x1fc);
  if (iVar8 == 0) {
    if ((*pbVar2 >> 1 & 1) != 0) {
      fVar36 = *(float *)(param_5 + 0x314);
      fVar16 = *(float *)(param_5 + 0x318);
      fVar17 = *(float *)(param_5 + 0x31c);
      if (DAT_03fed25c == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25c = '\x01';
      }
      fVar36 = fVar15 * fVar36;
      fVar16 = fVar29 * fVar16;
      fVar17 = fVar14 * fVar17;
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (SQRT(fVar36 * fVar36 + fVar16 * fVar16 + fVar17 * fVar17) <= 0.0) {
        fVar36 = **(float **)
                   (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ +
                   0xb8);
        fVar17 = fVar36;
        fVar16 = fVar36;
      }
      iVar8 = *(int *)(param_5 + 0x1fc);
      *(float *)(param_5 + 0x314) = fVar36;
      *(float *)(param_5 + 0x318) = fVar16;
      *(float *)(param_5 + 0x31c) = fVar17;
      if (iVar8 != 0) goto LAB_038885e8;
    }
    if ((*pbVar2 >> 2 & 1) == 0) goto LAB_038887f0;
    fVar36 = *(float *)(param_5 + 0x353);
    fVar16 = *(float *)(param_5 + 0x357);
    fVar17 = *(float *)(param_5 + 0x35b);
    if (DAT_03fed25c == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25c = '\x01';
    }
    fVar36 = fVar15 * fVar36;
    fVar16 = fVar29 * fVar16;
    fVar17 = fVar14 * fVar17;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (SQRT(fVar36 * fVar36 + fVar16 * fVar16 + fVar17 * fVar17) <= 0.0) {
      fVar36 = **(float **)
                 (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8
                 );
      fVar17 = fVar36;
      fVar16 = fVar36;
    }
    *(float *)(param_5 + 0x353) = fVar36;
    *(float *)(param_5 + 0x357) = fVar16;
    *(float *)(param_5 + 0x35b) = fVar17;
    iVar8 = *(int *)(param_5 + 0x1fc);
  }
LAB_038885e8:
  if (iVar8 == 1) {
    if ((*pbVar2 >> 1 & 1) != 0) {
      fVar36 = *(float *)(param_5 + 0x390);
      fVar16 = *(float *)(param_5 + 0x394);
      fVar17 = *(float *)(param_5 + 0x398);
      if (DAT_03fed25c == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25c = '\x01';
      }
      fVar36 = fVar15 * fVar36;
      fVar16 = fVar29 * fVar16;
      fVar17 = fVar14 * fVar17;
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (SQRT(fVar36 * fVar36 + fVar16 * fVar16 + fVar17 * fVar17) <= 0.0) {
        fVar36 = **(float **)
                   (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ +
                   0xb8);
        fVar17 = fVar36;
        fVar16 = fVar36;
      }
      *(float *)(param_5 + 0x390) = fVar36;
      *(float *)(param_5 + 0x394) = fVar16;
      *(float *)(param_5 + 0x398) = fVar17;
      if (*(int *)(param_5 + 0x1fc) != 1) goto LAB_038887f0;
    }
    if ((*pbVar2 >> 2 & 1) != 0) {
      fVar36 = *(float *)(param_5 + 0x3c8);
      fVar16 = *(float *)(param_5 + 0x3cc);
      fVar17 = *(float *)(param_5 + 0x3d0);
      if (DAT_03fed25c == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25c = '\x01';
      }
      fVar36 = fVar15 * fVar36;
      fVar16 = fVar29 * fVar16;
      fVar17 = fVar14 * fVar17;
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (SQRT(fVar36 * fVar36 + fVar16 * fVar16 + fVar17 * fVar17) <= 0.0) {
        fVar36 = **(float **)
                   (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ +
                   0xb8);
        fVar17 = fVar36;
        fVar16 = fVar36;
      }
      *(float *)(param_5 + 0x3c8) = fVar36;
      *(float *)(param_5 + 0x3cc) = fVar16;
      *(float *)(param_5 + 0x3d0) = fVar17;
    }
  }
LAB_038887f0:
  if ((*pbVar2 >> 3 & 1) != 0) {
    fVar17 = *(float *)(param_5 + 0x2b4);
    fVar16 = *(float *)(param_5 + 0x2b8);
    fVar36 = *(float *)(param_5 + 700);
    if (DAT_03fed25c == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25c = '\x01';
    }
    fVar15 = fVar15 * fVar17;
    fVar29 = fVar29 * fVar16;
    fVar14 = fVar14 * fVar36;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (SQRT(fVar15 * fVar15 + fVar29 * fVar29 + fVar14 * fVar14) <= 0.0) {
      fVar15 = **(float **)
                 (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8
                 );
      fVar14 = fVar15;
      fVar29 = fVar15;
    }
    *(float *)(param_5 + 0x2b4) = fVar15;
    *(float *)(param_5 + 0x2b8) = fVar29;
    *(float *)(param_5 + 700) = fVar14;
    *(undefined4 *)(param_5 + 0x2dd) = *(undefined4 *)(param_5 + 700);
    *(undefined8 *)(param_5 + 0x2d5) = *(undefined8 *)(param_5 + 0x2b4);
  }
  return;
}


