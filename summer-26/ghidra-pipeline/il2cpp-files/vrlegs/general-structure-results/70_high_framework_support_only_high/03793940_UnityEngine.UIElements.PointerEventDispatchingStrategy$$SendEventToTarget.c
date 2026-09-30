/*
FUNCTION_NAME: UnityEngine.UIElements.PointerEventDispatchingStrategy$$SendEventToTarget
ENTRY_POINT: 03793940
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_UIElements_PointerEventDispatchingStrategy__SendEventToTarget
               (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               float param_5,undefined1 param_6 [16],float param_7)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined1 in_ZR;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint in_w8;
  long lVar13;
  uint uVar14;
  int in_w9;
  uint in_w10;
  long lVar16;
  float *pfVar17;
  long lVar18;
  long unaff_x19;
  char cVar19;
  int unaff_w20;
  long lVar20;
  int unaff_w21;
  long *unaff_x23;
  uint unaff_w24;
  uint unaff_w25;
  long unaff_x26;
  uint unaff_w28;
  long unaff_x29;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float unaff_s8;
  float fVar28;
  float unaff_s9;
  float fVar29;
  float unaff_s11;
  float unaff_s12;
  float fVar30;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000058;
  uint in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  undefined8 in_stack_000000b8;
  int iStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 in_stack_000000d0;
  float fStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  float in_stack_000000e0;
  undefined8 in_stack_000000e8;
  float in_stack_000000f0;
  long *in_stack_000000f8;
  undefined4 in_stack_00000100;
  long in_stack_00000110;
  undefined8 in_stack_00000118;
  float fStack0000000000000120;
  undefined4 uStack0000000000000124;
  float fStack0000000000000128;
  float fStack000000000000012c;
  float in_stack_00000130;
  int in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  long in_stack_00000150;
  float fStack0000000000000158;
  float fStack000000000000015c;
  uint in_stack_00000160;
  uint uStack0000000000000168;
  uint uStack000000000000016c;
  float fStack0000000000000170;
  float fStack0000000000000174;
  int iStack0000000000000178;
  uint uStack000000000000017c;
  byte bStack0000000000000180;
  uint uStack0000000000000184;
  long in_stack_00000188;
  float in_stack_00000190;
  long in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b0;
  undefined8 in_stack_000001b8;
  long in_stack_000001c0;
  long in_stack_000001c8;
  int *in_stack_000001d0;
  undefined8 in_stack_000001d8;
  long in_stack_000001e0;
  long *in_stack_000001e8;
  long in_stack_00001a38;
  uint uVar15;
  
code_r0x03793940:
  iVar8 = in_w9 - in_w10;
  if (!(bool)in_ZR) {
    param_1 = unaff_s13;
  }
  if (iVar8 < 1) {
    fVar29 = 1.0;
  }
  else {
    fVar29 = *(float *)(in_stack_000001e0 + 0x7c);
  }
  if (iVar8 < 2) {
    iVar8 = 1;
  }
  param_1 = unaff_s8 + param_1;
  uVar10 = in_stack_000001b8._4_4_;
  if (in_stack_000001d8._4_4_ == 9) {
LAB_037939d0:
    fStack00000000000000c4 = param_7;
    fStack0000000000000170 = param_5;
    if (in_w8 != 0) {
      param_1 = param_1 * (1.0 - fVar29);
      fVar23 = (float)iVar8;
      goto LAB_03793a0c;
    }
    fVar23 = (float)iVar8;
    param_1 = param_1 * (1.0 - fVar29);
LAB_03793a20:
    fStack0000000000000158 = fStack0000000000000158 + param_1 / fVar23;
    in_stack_00000148 =
         CONCAT44((float)((ulong)in_stack_00000148 >> 0x20) + 0.0,(float)in_stack_00000148 + 0.0);
  }
  else {
    if (in_stack_000001d8._4_4_ != 0xa0) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar11 = FUN_026b97f8(in_stack_000001d8._4_4_,0);
      in_w8 = (uint)*(byte *)(in_stack_000001e0 + 0xb6);
      param_4 = in_stack_00000190;
      param_5 = fStack0000000000000170;
      param_7 = fStack00000000000000c4;
      if ((uVar11 & 1) != 0) goto LAB_037939d0;
    }
    fStack00000000000000c4 = param_7;
    fStack0000000000000170 = param_5;
    param_1 = param_1 * fVar29;
    fVar23 = (float)(int)((unaff_w21 - (~in_stack_00000090 & 1)) + unaff_w20);
    if (in_w8 == 0) goto LAB_03793a20;
LAB_03793a0c:
    fStack0000000000000158 = fStack0000000000000158 - param_1 / fVar23;
  }
switchD_03791aa4_caseD_1003:
  in_stack_000001b8._4_4_ = uVar10;
  uVar12 = unaff_w25;
  uVar10 = (uint)*(undefined8 *)(in_stack_000001c8 + 0x18);
  if (uVar10 <= unaff_w28) goto thunk_FUN_01ab6c44;
  lVar20 = in_stack_000001c8 + unaff_x26 * unaff_x29;
  fVar27 = fStack0000000000000120 + fStack0000000000000158;
  fVar29 = (float)in_stack_00000118 + (float)in_stack_00000148;
  fVar23 = (float)((ulong)in_stack_00000118 >> 0x20) + (float)((ulong)in_stack_00000148 >> 0x20);
  if (*(char *)(lVar20 + 0x1a0) == '\0') goto LAB_037924bc;
  cVar1 = *(char *)(in_stack_000001c8 + unaff_x26 * unaff_x29 + 0x28);
  if (cVar1 != '\x01') goto LAB_0379225c;
  fVar21 = fmodf(*(float *)(in_stack_000001e0 + 0xfc) * (float)(int)uVar12,1.0);
  unaff_x23 = (long *)PTR_DAT_03cbded8;
  switch(*(undefined4 *)(in_stack_000001e0 + 0xf4)) {
  case 0:
    fVar21 = 1.0;
    lVar13 = in_stack_000001c8 + unaff_x26 * unaff_x29;
    *(undefined4 *)(lVar13 + 0xbc) = 0;
    *(undefined4 *)(lVar13 + 0x94) = 0;
    *(undefined4 *)(lVar13 + 0xe4) = 0x3f800000;
    break;
  case 1:
    fVar28 = *(float *)(in_stack_000001c8 + unaff_x26 * unaff_x29 + 0xa0);
    if (*(int *)(in_stack_000001e0 + 0x70) == 0x208) {
      lVar13 = in_stack_000001c8 + unaff_x26 * unaff_x29;
      fVar28 = (fStack0000000000000158 + fVar28) - *(float *)(unaff_x19 + 0x360);
      fVar30 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
      goto LAB_03791dcc;
    }
    lVar13 = in_stack_000001c8 + unaff_x26 * unaff_x29;
    fVar30 = unaff_s14 - unaff_s9;
    *(float *)(lVar13 + 0xbc) = fVar21 + (fVar28 - unaff_s9) / fVar30;
    *(float *)(lVar13 + 0x94) = fVar21 + (*(float *)(lVar13 + 0x78) - unaff_s9) / fVar30;
    *(float *)(lVar13 + 0xe4) = fVar21 + (*(float *)(lVar13 + 200) - unaff_s9) / fVar30;
    fVar21 = fVar21 + (*(float *)(lVar13 + 0xf0) - unaff_s9) / fVar30;
    break;
  case 2:
    lVar13 = in_stack_000001c8 + unaff_x26 * unaff_x29;
    fVar30 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
    fVar28 = (fStack0000000000000158 + *(float *)(lVar13 + 0xa0)) - *(float *)(unaff_x19 + 0x360);
LAB_03791dcc:
    *(float *)(lVar13 + 0xbc) = fVar21 + fVar28 / fVar30;
    *(float *)(lVar13 + 0x94) =
         fVar21 + ((fStack0000000000000158 + *(float *)(lVar13 + 0x78)) -
                  *(float *)(unaff_x19 + 0x360)) /
                  (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
    *(float *)(lVar13 + 0xe4) =
         fVar21 + ((fStack0000000000000158 + *(float *)(lVar13 + 200)) -
                  *(float *)(unaff_x19 + 0x360)) /
                  (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
    fVar21 = fVar21 + ((fStack0000000000000158 + *(float *)(lVar13 + 0xf0)) -
                      *(float *)(unaff_x19 + 0x360)) /
                      (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
    break;
  case 3:
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
    case 0:
      lVar13 = in_stack_000001c8 + unaff_x26 * unaff_x29;
      *(undefined4 *)(lVar13 + 0xc0) = 0;
      *(undefined4 *)(lVar13 + 0x98) = 0x3f800000;
      *(undefined4 *)(lVar13 + 0xe8) = 0;
      *(undefined4 *)(lVar13 + 0x110) = 0x3f800000;
      break;
    case 1:
      lVar13 = in_stack_000001c8 + unaff_x26 * unaff_x29;
      fVar28 = fVar21 + (*(float *)(lVar13 + 0xa4) - unaff_s12) /
                        (fStack00000000000000c4 - unaff_s12);
      fVar30 = fVar21 + (*(float *)(lVar13 + 0x7c) - unaff_s12) /
                        (fStack00000000000000c4 - unaff_s12);
      *(float *)(lVar13 + 0xc0) = fVar28;
      *(float *)(lVar13 + 0x98) = fVar30;
      *(float *)(lVar13 + 0xe8) = fVar28;
      *(float *)(lVar13 + 0x110) = fVar30;
      break;
    case 2:
      lVar13 = in_stack_000001c8 + unaff_x26 * unaff_x29;
      fVar28 = fVar21 + (*(float *)(lVar13 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
                        (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
      *(float *)(lVar13 + 0xc0) = fVar28;
      fVar30 = *(float *)(unaff_x19 + 0x364);
      fVar22 = *(float *)(unaff_x19 + 0x36c);
      *(float *)(lVar13 + 0xe8) = fVar28;
      fVar28 = fVar21 + (*(float *)(lVar13 + 0x7c) - fVar30) / (fVar22 - fVar30);
      *(float *)(lVar13 + 0x98) = fVar28;
      *(float *)(lVar13 + 0x110) = fVar28;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar10 = (uint)*(undefined8 *)(in_stack_000001c8 + 0x18);
    }
    if (uVar10 <= unaff_w28) goto thunk_FUN_01ab6c44;
    lVar13 = in_stack_000001c8 + unaff_x26 * unaff_x29;
    fVar28 = *(float *)(lVar13 + 0x168);
    fVar30 = (1.0 - (*(float *)(lVar13 + 0xc0) + *(float *)(lVar13 + 0x98)) * fVar28) * 0.5;
    fVar22 = fVar21 + *(float *)(lVar13 + 0xc0) * fVar28 + fVar30;
    fVar21 = fVar21 + *(float *)(lVar13 + 0x98) * fVar28 + fVar30;
    *(float *)(lVar13 + 0xbc) = fVar22;
    *(float *)(lVar13 + 0x94) = fVar22;
    *(float *)(lVar13 + 0xe4) = fVar21;
    break;
  default:
    goto switchD_03791d04_default;
  }
  *(float *)(in_stack_000001c8 + unaff_x26 * unaff_x29 + 0x10c) = fVar21;
switchD_03791d04_default:
  switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
  case 0:
    if (uVar10 <= unaff_w28) goto thunk_FUN_01ab6c44;
    lVar13 = in_stack_000001c8 + unaff_x26 * unaff_x29;
    *(undefined4 *)(lVar13 + 0xc0) = 0;
    *(undefined4 *)(lVar13 + 0x98) = 0x3f800000;
    *(undefined4 *)(lVar13 + 0xe8) = 0x3f800000;
    *(undefined4 *)(lVar13 + 0x110) = 0;
    break;
  case 1:
    if (unaff_w28 < uVar10) {
      lVar13 = in_stack_000001c8 + unaff_x26 * unaff_x29;
      fVar21 = (*(float *)(lVar13 + 0xa4) - fStack0000000000000170) /
               (param_4 - fStack0000000000000170);
      fVar28 = (*(float *)(lVar13 + 0x7c) - fStack0000000000000170) /
               (param_4 - fStack0000000000000170);
      *(float *)(lVar13 + 0xc0) = fVar21;
      goto LAB_0379217c;
    }
    goto thunk_FUN_01ab6c44;
  case 2:
    if (uVar10 <= unaff_w28) goto thunk_FUN_01ab6c44;
    lVar13 = in_stack_000001c8 + unaff_x26 * unaff_x29;
    fVar21 = (*(float *)(lVar13 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
             (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
    *(float *)(lVar13 + 0xc0) = fVar21;
    fVar28 = (*(float *)(lVar13 + 0x7c) - *(float *)(unaff_x19 + 0x364)) /
             (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
LAB_0379217c:
    *(float *)(lVar13 + 0x98) = fVar28;
    *(float *)(lVar13 + 0xe8) = fVar28;
    *(float *)(lVar13 + 0x110) = fVar21;
    break;
  case 3:
    if (uVar10 <= unaff_w28) goto thunk_FUN_01ab6c44;
    lVar13 = in_stack_000001c8 + unaff_x26 * unaff_x29;
    fVar30 = *(float *)(lVar13 + 0x168);
    fVar28 = (1.0 - (*(float *)(lVar13 + 0xbc) + *(float *)(lVar13 + 0xe4)) / fVar30) * 0.5;
    fVar21 = *(float *)(lVar13 + 0xbc) / fVar30 + fVar28;
    fVar28 = *(float *)(lVar13 + 0xe4) / fVar30 + fVar28;
    *(float *)(lVar13 + 0xc0) = fVar21;
    *(float *)(lVar13 + 0x98) = fVar28;
    *(float *)(lVar13 + 0x110) = fVar21;
    *(float *)(lVar13 + 0xe8) = fVar28;
  }
  if (uVar10 <= unaff_w28) goto thunk_FUN_01ab6c44;
  lVar13 = in_stack_000001c8 + unaff_x26 * unaff_x29;
  unaff_s11 = *(float *)(lVar13 + 0x16c) * (1.0 - *(float *)(unaff_x19 + 0x1594));
  if ((*(char *)(lVar13 + 100) == '\0') &&
     ((*(byte *)(in_stack_000001c8 + unaff_x26 * unaff_x29 + 0x19c) & 1) != 0)) {
    unaff_s11 = -unaff_s11;
  }
  lVar13 = in_stack_000001c8 + unaff_x26 * unaff_x29;
  *(float *)(lVar13 + 0xb8) = unaff_s11;
  *(float *)(lVar13 + 0x90) = unaff_s11;
  *(float *)(lVar13 + 0xe0) = unaff_s11;
  *(float *)(lVar13 + 0x108) = unaff_s11;
  *(undefined4 *)(lVar13 + 0xbc) = 0x3f800000;
  *(float *)(lVar13 + 0xc0) = unaff_s11;
  *(undefined4 *)(lVar13 + 0x94) = 0x3f800000;
  *(float *)(lVar13 + 0x98) = unaff_s11;
  *(undefined4 *)(lVar13 + 0xe4) = 0x3f800000;
  *(float *)(lVar13 + 0xe8) = unaff_s11;
  *(undefined4 *)(lVar13 + 0x10c) = 0x3f800000;
  *(float *)(lVar13 + 0x110) = unaff_s11;
LAB_0379225c:
  if (((int)unaff_w28 < *(int *)(in_stack_000001e0 + 0xd8)) &&
     (in_stack_00000138 < *(int *)(in_stack_000001e0 + 0xdc))) {
    if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar12) ||
       (*(int *)(in_stack_000001e0 + 0x74) == 5)) {
      if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar12) ||
         (*(int *)(in_stack_000001e0 + 0x74) != 5)) goto LAB_037922d4;
      if (unaff_w28 < uVar10) {
        bVar6 = *(int *)(in_stack_000001c8 + unaff_x26 * unaff_x29 + 0x70) ==
                in_stack_00000058._4_4_;
        goto LAB_037922d8;
      }
      goto thunk_FUN_01ab6c44;
    }
    if (uVar10 <= unaff_w28) goto thunk_FUN_01ab6c44;
LAB_037922e4:
    lVar20 = in_stack_000001c8 + unaff_x26 * unaff_x29;
    *(ulong *)(lVar20 + 0xa0) =
         CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar20 + 0xa0) >> 0x20),
                  fVar27 + (float)*(undefined8 *)(lVar20 + 0xa0));
    *(float *)(lVar20 + 0xa8) = fVar23 + *(float *)(lVar20 + 0xa8);
    *(ulong *)(lVar20 + 0x78) =
         CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar20 + 0x78) >> 0x20),
                  fVar27 + (float)*(undefined8 *)(lVar20 + 0x78));
    *(float *)(lVar20 + 0x80) = fVar23 + *(float *)(lVar20 + 0x80);
    *(ulong *)(lVar20 + 200) =
         CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar20 + 200) >> 0x20),
                  fVar27 + (float)*(undefined8 *)(lVar20 + 200));
    *(float *)(lVar20 + 0xd0) = fVar23 + *(float *)(lVar20 + 0xd0);
    *(ulong *)(lVar20 + 0xf0) =
         CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar20 + 0xf0) >> 0x20),
                  fVar27 + (float)*(undefined8 *)(lVar20 + 0xf0));
    *(float *)(lVar20 + 0xf8) = fVar23 + *(float *)(lVar20 + 0xf8);
  }
  else {
LAB_037922d4:
    bVar6 = false;
LAB_037922d8:
    if (uVar10 <= unaff_w28) goto thunk_FUN_01ab6c44;
    if (bVar6) goto LAB_037922e4;
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(unaff_x23);
      DAT_0411f172 = '\x01';
      uVar10 = *(uint *)(in_stack_000001c8 + 0x18);
    }
    uVar25 = *(undefined4 *)(*(undefined8 **)(*unaff_x23 + 0xb8) + 1);
    lVar13 = in_stack_000001c8 + unaff_x26 * unaff_x29;
    *(undefined8 *)(lVar13 + 0xa0) = **(undefined8 **)(*unaff_x23 + 0xb8);
    *(undefined4 *)(lVar13 + 0xa8) = uVar25;
    if (uVar10 <= unaff_w28) goto thunk_FUN_01ab6c44;
    uVar25 = *(undefined4 *)(*(undefined8 **)(*unaff_x23 + 0xb8) + 1);
    lVar13 = in_stack_000001c8 + unaff_x26 * unaff_x29;
    *(undefined8 *)(lVar13 + 0x78) = **(undefined8 **)(*unaff_x23 + 0xb8);
    *(undefined4 *)(lVar13 + 0x80) = uVar25;
    uVar25 = *(undefined4 *)(*(undefined8 **)(*unaff_x23 + 0xb8) + 1);
    *(undefined8 *)(lVar13 + 200) = **(undefined8 **)(*unaff_x23 + 0xb8);
    *(undefined4 *)(lVar13 + 0xd0) = uVar25;
    uVar25 = *(undefined4 *)(*(undefined8 **)(*unaff_x23 + 0xb8) + 1);
    *(undefined8 *)(lVar13 + 0xf0) = **(undefined8 **)(*unaff_x23 + 0xb8);
    *(undefined4 *)(lVar13 + 0xf8) = uVar25;
    *(undefined1 *)(lVar20 + 0x1a0) = 0;
  }
  iVar8 = FUN_0368e42c(0);
  if (iVar8 == 1) {
    cVar19 = *(char *)(in_stack_000001e0 + 0xa2);
  }
  else {
    cVar19 = '\0';
  }
  if (cVar1 == '\x01') {
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                ) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_037a429c(unaff_w28,cVar19 != '\0',in_stack_000001e0,in_stack_000001c0,0);
  }
  else if (cVar1 == '\x02') {
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                ) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_037a4cd4(unaff_w28,cVar19 != '\0',in_stack_000001e0,in_stack_000001c0,0);
  }
LAB_037924bc:
  lVar20 = *in_stack_000001e8;
  if (lVar20 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar20 + 0x18) <= unaff_w28) goto thunk_FUN_01ab6c44;
  lVar20 = lVar20 + unaff_x26 * unaff_x29;
  uVar24 = *(undefined8 *)(lVar20 + 0x124);
  *(undefined8 *)(lVar20 + 0x124) =
       CONCAT44(fVar29 + (float)((ulong)uVar24 >> 0x20),fVar27 + (float)uVar24);
  *(float *)(lVar20 + 300) = fVar23 + *(float *)(lVar20 + 300);
  lVar20 = *in_stack_000001e8;
  if (lVar20 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar20 + 0x18) <= unaff_w28) goto thunk_FUN_01ab6c44;
  lVar20 = lVar20 + unaff_x26 * unaff_x29;
  *(ulong *)(lVar20 + 0x118) =
       CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar20 + 0x118) >> 0x20),
                fVar27 + (float)*(undefined8 *)(lVar20 + 0x118));
  *(float *)(lVar20 + 0x120) = fVar23 + *(float *)(lVar20 + 0x120);
  lVar20 = *in_stack_000001e8;
  if (lVar20 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar20 + 0x18) <= unaff_w28) goto thunk_FUN_01ab6c44;
  lVar20 = lVar20 + unaff_x26 * unaff_x29;
  *(ulong *)(lVar20 + 0x130) =
       CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar20 + 0x130) >> 0x20),
                fVar27 + (float)*(undefined8 *)(lVar20 + 0x130));
  *(float *)(lVar20 + 0x138) = fVar23 + *(float *)(lVar20 + 0x138);
  lVar20 = *in_stack_000001e8;
  if (lVar20 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar20 + 0x18) <= unaff_w28) goto thunk_FUN_01ab6c44;
  lVar20 = lVar20 + unaff_x26 * unaff_x29;
  *(float *)(lVar20 + 0x13c) = fVar27 + *(float *)(lVar20 + 0x13c);
  *(ulong *)(lVar20 + 0x140) =
       CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar20 + 0x140) >> 0x20),
                fVar29 + (float)*(undefined8 *)(lVar20 + 0x140));
  lVar20 = *in_stack_000001e8;
  if (lVar20 == 0) goto LAB_03793c9c;
  uVar10 = *(uint *)(lVar20 + 0x18);
  if (uVar10 <= unaff_w28) goto thunk_FUN_01ab6c44;
  lVar13 = lVar20 + unaff_x26 * unaff_x29;
  *(float *)(lVar13 + 0x148) = fVar27 + *(float *)(lVar13 + 0x148);
  *(float *)(lVar13 + 0x164) = fVar27 + *(float *)(lVar13 + 0x164);
  *(float *)(lVar13 + 0x154) = fVar29 + *(float *)(lVar13 + 0x154);
  uVar24 = *(undefined8 *)(lVar13 + 0x14c);
  *(undefined8 *)(lVar13 + 0x14c) =
       CONCAT44(fVar29 + (float)((ulong)uVar24 >> 0x20),fVar29 + (float)uVar24);
  if (uVar12 == unaff_w24) {
    uVar10 = *in_stack_000001d0 - 1;
    if (unaff_w28 == uVar10) goto LAB_037926b4;
  }
  else {
    lVar13 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar13 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar13 + 0x18) <= unaff_w24) goto thunk_FUN_01ab6c44;
    lVar16 = (long)(int)unaff_w24;
    lVar18 = lVar13 + lVar16 * 0x60;
    fVar23 = fVar29 + *(float *)(lVar18 + 0x58);
    *(ulong *)(lVar18 + 0x50) =
         CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar18 + 0x50) >> 0x20),
                  fVar29 + (float)*(undefined8 *)(lVar18 + 0x50));
    *(float *)(lVar18 + 0x58) = fVar23;
    *(float *)(lVar18 + 0x5c) = fVar27 + *(float *)(lVar18 + 0x5c);
    if (uVar10 <= *(uint *)(lVar18 + 0x38)) goto thunk_FUN_01ab6c44;
    uVar25 = *(undefined4 *)(lVar20 + (int)*(uint *)(lVar18 + 0x38) * unaff_x29 + 0x124);
    lVar13 = lVar13 + lVar16 * 0x60;
    *(float *)(lVar13 + 0x74) = fVar23;
    *(undefined4 *)(lVar13 + 0x70) = uVar25;
    lVar20 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar20 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar20 + 0x18) <= unaff_w24) goto thunk_FUN_01ab6c44;
    lVar13 = *in_stack_000001e8;
    if (lVar13 == 0) goto LAB_03793c9c;
    uVar10 = *(uint *)(lVar20 + lVar16 * 0x60 + 0x44);
    if (*(uint *)(lVar13 + 0x18) <= uVar10) goto thunk_FUN_01ab6c44;
    lVar20 = lVar20 + lVar16 * 0x60;
    *(undefined4 *)(lVar20 + 0x78) = *(undefined4 *)(lVar13 + (int)uVar10 * unaff_x29 + 0x130);
    *(undefined4 *)(lVar20 + 0x7c) = *(undefined4 *)(lVar20 + 0x50);
    uVar10 = *in_stack_000001d0 - 1;
LAB_037926b4:
    if (unaff_w28 == uVar10) {
      lVar20 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar20 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar20 + 0x18) <= uVar12) goto thunk_FUN_01ab6c44;
      lVar13 = lVar20 + in_stack_000001a0 * 0x60;
      fVar23 = fVar29 + *(float *)(lVar13 + 0x58);
      *(ulong *)(lVar13 + 0x50) =
           CONCAT44(fVar29 + (float)((ulong)*(undefined8 *)(lVar13 + 0x50) >> 0x20),
                    fVar29 + (float)*(undefined8 *)(lVar13 + 0x50));
      *(float *)(lVar13 + 0x58) = fVar23;
      *(float *)(lVar13 + 0x5c) = fVar27 + *(float *)(lVar13 + 0x5c);
      lVar16 = *in_stack_000001e8;
      if (lVar16 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar16 + 0x18) <= *(uint *)(lVar13 + 0x38)) goto thunk_FUN_01ab6c44;
      uVar25 = *(undefined4 *)(lVar16 + (int)*(uint *)(lVar13 + 0x38) * unaff_x29 + 0x124);
      lVar20 = lVar20 + in_stack_000001a0 * 0x60;
      *(float *)(lVar20 + 0x74) = fVar23;
      *(undefined4 *)(lVar20 + 0x70) = uVar25;
      lVar20 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar20 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar20 + 0x18) <= uVar12) goto thunk_FUN_01ab6c44;
      lVar13 = *in_stack_000001e8;
      if (lVar13 == 0) goto LAB_03793c9c;
      uVar10 = *(uint *)(lVar20 + in_stack_000001a0 * 0x60 + 0x44);
      if (*(uint *)(lVar13 + 0x18) <= uVar10) goto thunk_FUN_01ab6c44;
      lVar20 = lVar20 + in_stack_000001a0 * 0x60;
      *(undefined4 *)(lVar20 + 0x78) = *(undefined4 *)(lVar13 + (int)uVar10 * unaff_x29 + 0x130);
      *(undefined4 *)(lVar20 + 0x7c) = *(undefined4 *)(lVar20 + 0x50);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar11 = FUN_026b82c4(in_stack_000001d8._4_4_,0);
  if (((((uVar11 & 1) == 0) && (1 < in_stack_000001d8._4_4_ - 0x2010)) &&
      (in_stack_000001d8._4_4_ != 0xad)) && (in_stack_000001d8._4_4_ != 0x2d)) {
    if ((uStack000000000000016c & 1) == 0) {
      if (in_stack_000001b8._4_4_ == 1) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar10 = FUN_026b81f8(in_stack_000001d8._4_4_,0);
        if (((in_stack_000001d8._4_4_ == 0x200b) ||
            (((uStack000000000000017c | uVar10 ^ 1) & 1) != 0)) || (*in_stack_000001d0 == 1))
        goto LAB_037930d8;
      }
      uStack000000000000016c = 0;
    }
    else {
      if (((in_stack_000001b8._4_4_ != 1) &&
          ((int)unaff_w28 < (int)(*(uint *)(in_stack_000001c8 + 0x18) - 1))) &&
         (((int)unaff_w28 < *in_stack_000001d0 &&
          ((in_stack_000001d8._4_4_ == 0x2019 || (in_stack_000001d8._4_4_ == 0x27)))))) {
        if (*(uint *)(in_stack_000001c8 + 0x18) <= in_stack_000001b8._4_4_ - 2)
        goto thunk_FUN_01ab6c44;
        uVar4 = *(undefined2 *)(in_stack_000001c8 + in_stack_000001a8 + -0x464);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b82c4(uVar4,0);
        if ((uVar11 & 1) != 0) {
          if (*(uint *)(in_stack_000001c8 + 0x18) <= in_stack_000001b8._4_4_)
          goto thunk_FUN_01ab6c44;
          uVar4 = *(undefined2 *)(in_stack_000001c8 + in_stack_000001a8 + -0x154);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b82c4(uVar4,0);
          if ((uVar11 & 1) != 0) goto LAB_0379289c;
        }
      }
LAB_037930d8:
      if (unaff_w28 == *in_stack_000001d0 - 1U) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b82c4(in_stack_000001d8._4_4_,0);
        fStack0000000000000170 = (float)unaff_w28;
        if ((uVar11 & 1) == 0) goto LAB_03793114;
      }
      else {
LAB_03793114:
        fStack0000000000000170 = (float)(iStack0000000000000178 - 1);
      }
      lVar20 = *in_stack_000000f8;
      if (lVar20 == 0) goto LAB_03793c9c;
      uVar10 = *(uint *)(in_stack_000001c0 + 0x1c);
      iVar8 = *(int *)(lVar20 + 0x18);
      if (iVar8 < (int)(uVar10 + 1)) {
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff37b8(in_stack_000000f8,iVar8 + 1,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
        lVar20 = *in_stack_000000f8;
        if (lVar20 == 0) goto LAB_03793c9c;
      }
      if (*(uint *)(lVar20 + 0x18) <= uVar10) goto thunk_FUN_01ab6c44;
      lVar20 = lVar20 + (long)(int)uVar10 * 0xc;
      *(uint *)(lVar20 + 0x20) = uStack0000000000000168;
      *(float *)(lVar20 + 0x24) = fStack0000000000000170;
      *(uint *)(lVar20 + 0x28) = ((int)fStack0000000000000170 - uStack0000000000000168) + 1;
      lVar20 = *(long *)(in_stack_000001c0 + 0x48);
      *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
      if (lVar20 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar20 + 0x18) <= uVar12) goto thunk_FUN_01ab6c44;
      lVar20 = lVar20 + in_stack_000001a0 * 0x60;
      uStack000000000000016c = 0;
      in_stack_00000138 = in_stack_00000138 + 1;
      *(int *)(lVar20 + 0x34) = *(int *)(lVar20 + 0x34) + 1;
    }
  }
  else {
    if ((uStack000000000000016c & 1) == 0) {
      uStack0000000000000168 = unaff_w28;
    }
    if (unaff_w28 == *in_stack_000001d0 - 1U) {
      lVar20 = *in_stack_000000f8;
      if (lVar20 == 0) goto LAB_03793c9c;
      uVar10 = *(uint *)(in_stack_000001c0 + 0x1c);
      iVar8 = *(int *)(lVar20 + 0x18);
      if (iVar8 < (int)(uVar10 + 1)) {
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff37b8(in_stack_000000f8,iVar8 + 1,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
        lVar20 = *in_stack_000000f8;
        if (lVar20 == 0) goto LAB_03793c9c;
      }
      if (*(uint *)(lVar20 + 0x18) <= uVar10) goto thunk_FUN_01ab6c44;
      lVar20 = lVar20 + (long)(int)uVar10 * 0xc;
      *(uint *)(lVar20 + 0x20) = uStack0000000000000168;
      *(uint *)(lVar20 + 0x24) = unaff_w28;
      *(uint *)(lVar20 + 0x28) = in_stack_000001b8._4_4_ - uStack0000000000000168;
      lVar20 = *(long *)(in_stack_000001c0 + 0x48);
      *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
      if (lVar20 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar20 + 0x18) <= uVar12) goto thunk_FUN_01ab6c44;
      lVar20 = lVar20 + in_stack_000001a0 * 0x60;
      in_stack_00000138 = in_stack_00000138 + 1;
      *(int *)(lVar20 + 0x34) = *(int *)(lVar20 + 0x34) + 1;
    }
LAB_0379289c:
    uStack000000000000016c = 1;
  }
  lVar20 = *in_stack_000001e8;
  if (lVar20 == 0) goto LAB_03793c9c;
  uVar10 = *(uint *)(lVar20 + 0x18);
  if (uVar10 <= unaff_w28) goto thunk_FUN_01ab6c44;
  uVar14 = (uint)in_stack_00000150;
  uVar15 = (uint)in_stack_000001b0;
  if ((*(byte *)(lVar20 + unaff_x26 * unaff_x29 + 0x19c) >> 2 & 1) == 0) {
    if ((uStack0000000000000184 & 1) != 0) {
LAB_037928d0:
      if (in_stack_000001b8._4_4_ - 2 < uVar10) {
        uVar25 = *(undefined4 *)(lVar20 + in_stack_000001a8 + -0x354);
        uVar26 = *(undefined4 *)(lVar20 + in_stack_000001a8 + -0x318);
        goto LAB_03792b34;
      }
      goto thunk_FUN_01ab6c44;
    }
LAB_03792a8c:
    uStack0000000000000184 = 0;
  }
  else {
    lVar13 = *(long *)(unaff_x19 + 0x15b8);
    if (lVar13 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) goto thunk_FUN_01ab6c44;
    iVar8 = *(int *)(lVar20 + unaff_x26 * unaff_x29 + 0x70);
    *(int *)(lVar20 + unaff_x26 * unaff_x29 + 0x178) =
         *(int *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
    if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)unaff_w28) ||
       (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar12)) {
      bVar6 = true;
    }
    else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
      bVar6 = iVar8 + 1 != *(int *)(in_stack_000001e0 + 0xf0);
    }
    else {
      bVar6 = false;
    }
    if (in_stack_000001d8._4_4_ != 0x200b && (uStack000000000000017c & 1) == 0) {
      fVar23 = *(float *)(lVar20 + unaff_x26 * unaff_x29 + 0x16c);
      if (unaff_s15 <= fVar23) {
        unaff_s15 = fVar23;
      }
      if (iVar8 != iStack00000000000000c0) {
        fStack000000000000015c = fStack00000000000000ac;
      }
      if (in_stack_00000188 == 0) goto LAB_03793c9c;
      fVar23 = *(float *)(lVar20 + unaff_x26 * unaff_x29 + 0x150);
      if (fStack0000000000000174 <= ABS(unaff_s11)) {
        fStack0000000000000174 = ABS(unaff_s11);
      }
      FUN_03779650(&stack0x000016a0,in_stack_00000188,0);
      memcpy(&stack0x00001610,&stack0x000016a0,0x60);
      fVar27 = (float)FUN_03776a10(&stack0x00001610,0);
      fVar23 = fVar23 + unaff_s15 * fVar27;
      iStack00000000000000c0 = iVar8;
      if (fVar23 <= fStack000000000000015c) {
        fStack000000000000015c = fVar23;
      }
    }
    if ((((in_stack_000001d8._4_4_ == 0xd) || ((in_stack_000001d8._4_4_ & 0xfffe) == 10)) ||
        ((int)uVar15 < (int)unaff_w28)) || ((uStack0000000000000184 & 1) != 0 || bVar6)) {
LAB_03792a80:
      if ((uStack0000000000000184 & 1) == 0) goto LAB_03792a8c;
    }
    else {
      if (unaff_w28 == uVar15) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b97f8(in_stack_000001d8._4_4_,0);
        if ((uVar11 & 1) != 0) goto LAB_03792a80;
      }
      lVar20 = *in_stack_000001e8;
      if (lVar20 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar20 + 0x18) <= unaff_w28) goto thunk_FUN_01ab6c44;
      lVar20 = lVar20 + unaff_x26 * unaff_x29;
      fStack00000000000000d8 = *(float *)(lVar20 + 0x16c);
      in_stack_000000d0 = *(undefined4 *)(lVar20 + 0x124);
      bVar7 = unaff_s15 != 0.0;
      fVar23 = fStack00000000000000d8;
      if (bVar7) {
        fVar23 = unaff_s15;
      }
      unaff_s15 = fVar23;
      in_stack_00000100 = *(undefined4 *)(lVar20 + 0x174);
      uStack00000000000000cc = 0;
      fVar23 = unaff_s11;
      if (bVar7) {
        fVar23 = fStack0000000000000174;
      }
      fStack00000000000000c8 = fStack000000000000015c;
      fStack0000000000000174 = fVar23;
    }
    if (*in_stack_000001d0 == 1) {
      lVar20 = *in_stack_000001e8;
      if (lVar20 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar20 + 0x18) <= unaff_w28) goto thunk_FUN_01ab6c44;
      lVar20 = lVar20 + unaff_x26 * unaff_x29;
      uVar25 = *(undefined4 *)(lVar20 + 0x130);
      uVar26 = *(undefined4 *)(lVar20 + 0x16c);
LAB_03792b34:
      FUN_0379d0d0(in_stack_000000d0,fStack00000000000000c8,uStack00000000000000cc,uVar25,
                   fStack000000000000015c,0,fStack00000000000000d8,uVar26);
    }
    else {
      if ((unaff_w28 == uVar14) || ((int)uVar15 <= (int)unaff_w28)) {
        lVar20 = *in_stack_000001e8;
        if (lVar20 != 0) {
          lVar13 = unaff_x26;
          uVar10 = unaff_w28;
          if (in_stack_000001d8._4_4_ == 0x200b || (uStack000000000000017c & 1) != 0) {
            lVar13 = in_stack_000001b0;
            uVar10 = uVar15;
          }
          if (uVar10 < *(uint *)(lVar20 + 0x18)) {
            lVar20 = lVar20 + lVar13 * unaff_x29;
            uVar25 = *(undefined4 *)(lVar20 + 0x130);
            uVar26 = *(undefined4 *)(lVar20 + 0x16c);
            goto LAB_03792b34;
          }
          goto thunk_FUN_01ab6c44;
        }
        goto LAB_03793c9c;
      }
      if (bVar6) {
        lVar20 = *in_stack_000001e8;
        if (lVar20 != 0) {
          uVar10 = *(uint *)(lVar20 + 0x18);
          goto LAB_037928d0;
        }
        goto LAB_03793c9c;
      }
      if (*in_stack_000001d0 + -1 <= (int)unaff_w28) {
LAB_03793294:
        uStack0000000000000184 = 1;
        goto LAB_03792b70;
      }
      lVar20 = *in_stack_000001e8;
      if (lVar20 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar20 + 0x18) <= in_stack_000001b8._4_4_) goto thunk_FUN_01ab6c44;
      uVar11 = FUN_03779528(in_stack_00000100,*(undefined4 *)(lVar20 + in_stack_000001a8),0);
      if ((uVar11 & 1) != 0) goto LAB_03793294;
      lVar20 = *in_stack_000001e8;
      if (lVar20 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar20 + 0x18) <= unaff_w28) goto thunk_FUN_01ab6c44;
      lVar20 = lVar20 + unaff_x26 * unaff_x29;
      FUN_0379d0d0(in_stack_000000d0,fStack00000000000000c8,uStack00000000000000cc,
                   *(undefined4 *)(lVar20 + 0x130),fStack000000000000015c,0,fStack00000000000000d8,
                   *(undefined4 *)(lVar20 + 0x16c));
    }
    unaff_s15 = 0.0;
    uStack0000000000000184 = 0;
    fStack000000000000015c = DAT_00d38d70;
    fStack0000000000000174 = 0.0;
  }
LAB_03792b70:
  lVar20 = *in_stack_000001e8;
  if (lVar20 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar20 + 0x18) <= unaff_w28) goto thunk_FUN_01ab6c44;
  if (in_stack_00000188 == 0) goto LAB_03793c9c;
  uVar10 = *(uint *)(lVar20 + unaff_x26 * unaff_x29 + 0x19c);
  FUN_03779650(&stack0x000016a0,in_stack_00000188,0);
  memcpy(&stack0x00001610,&stack0x000016a0,0x60);
  fVar23 = (float)FUN_03776a30(&stack0x00001610,0);
  if ((uVar10 >> 6 & 1) == 0) {
    if ((bStack0000000000000180 & 1) != 0) {
      lVar20 = *in_stack_000001e8;
      if (lVar20 != 0) {
        if (in_stack_000001b8._4_4_ - 2 < *(uint *)(lVar20 + 0x18)) {
          fVar29 = *(float *)(lVar20 + in_stack_000001a8 + -0x334);
          uVar25 = *(undefined4 *)(lVar20 + in_stack_000001a8 + -0x354);
          goto LAB_037932fc;
        }
        goto thunk_FUN_01ab6c44;
      }
      goto LAB_03793c9c;
    }
LAB_03792cf8:
    bStack0000000000000180 = 0;
  }
  else {
    lVar20 = *in_stack_000001e8;
    if ((lVar20 == 0) || (lVar13 = *(long *)(unaff_x19 + 0x15b8), lVar13 == 0)) goto LAB_03793c9c;
    if ((*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) ||
       (*(uint *)(lVar20 + 0x18) <= unaff_w28)) goto thunk_FUN_01ab6c44;
    *(int *)(lVar20 + unaff_x26 * unaff_x29 + 0x180) =
         *(int *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
    if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)unaff_w28) ||
       (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar12)) {
      bVar6 = true;
    }
    else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
      bVar6 = *(int *)(lVar20 + unaff_x26 * unaff_x29 + 0x70) + 1 !=
              *(int *)(in_stack_000001e0 + 0xf0);
    }
    else {
      bVar6 = false;
    }
    if ((((in_stack_000001d8._4_4_ == 0xd) || ((in_stack_000001d8._4_4_ & 0xfffe) == 10)) ||
        ((int)uVar15 < (int)unaff_w28)) || ((~bStack0000000000000180 & (bVar6 ^ 0xffU) & 1) == 0)) {
LAB_03792cf0:
      if ((bStack0000000000000180 & 1) == 0) goto LAB_03792cf8;
    }
    else {
      if (unaff_w28 == uVar15) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b97f8(in_stack_000001d8._4_4_,0);
        if ((uVar11 & 1) != 0) goto LAB_03792cf0;
        lVar20 = *in_stack_000001e8;
        if (lVar20 == 0) goto LAB_03793c9c;
      }
      if (*(uint *)(lVar20 + 0x18) <= unaff_w28) goto thunk_FUN_01ab6c44;
      lVar20 = lVar20 + unaff_x26 * unaff_x29;
      in_stack_000000f0 = *(float *)(lVar20 + 0x16c);
      in_stack_000000e8._4_4_ = *(undefined4 *)(lVar20 + 0x124);
      fStack00000000000000a8 = *(float *)(lVar20 + 0x68);
      in_stack_000000a0._4_4_ = *(float *)(lVar20 + 0x150);
      in_stack_000000e0 = fVar23 * in_stack_000000f0 + in_stack_000000a0._4_4_;
      uStack00000000000000dc = 0;
    }
    iVar8 = *in_stack_000001d0;
    if (iVar8 == 1) {
LAB_03792ef4:
      lVar13 = *in_stack_000001e8;
      if (lVar13 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar13 + 0x18) <= unaff_w28) goto thunk_FUN_01ab6c44;
      lVar13 = lVar13 + unaff_x26 * unaff_x29;
    }
    else {
      lVar20 = unaff_x26;
      if (unaff_w28 == uVar14) {
        lVar13 = *in_stack_000001e8;
        if (lVar13 == 0) goto LAB_03793c9c;
        uVar10 = unaff_w28;
        if (((uint)(in_stack_000001d8._4_4_ != 0x200b) & (uStack000000000000017c ^ 1)) == 0) {
          lVar20 = in_stack_000001b0;
          uVar10 = uVar15;
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar10) goto thunk_FUN_01ab6c44;
      }
      else {
        if (iVar8 <= (int)unaff_w28) {
LAB_03792fdc:
          if ((int)unaff_w28 < iVar8) {
            iVar8 = FUN_036d3364(in_stack_00000188,0);
            if (*(uint *)(in_stack_000001c8 + 0x18) <= in_stack_000001b8._4_4_)
            goto thunk_FUN_01ab6c44;
            lVar20 = *(long *)(in_stack_000001c8 + in_stack_000001a8 + -0x134);
            if (lVar20 == 0) goto LAB_03793c9c;
            iVar9 = FUN_036d3364(lVar20,0);
            if (iVar8 != iVar9) goto LAB_03792ef4;
          }
          if (bVar6 == false) {
            bStack0000000000000180 = 1;
            goto LAB_03793338;
          }
          lVar20 = *in_stack_000001e8;
          if (lVar20 != 0) {
            if (in_stack_000001b8._4_4_ - 2 < *(uint *)(lVar20 + 0x18)) {
              fVar29 = *(float *)(lVar20 + in_stack_000001a8 + -0x334);
              uVar25 = *(undefined4 *)(lVar20 + in_stack_000001a8 + -0x354);
              goto LAB_037932fc;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
        lVar13 = *in_stack_000001e8;
        if (lVar13 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar13 + 0x18) <= in_stack_000001b8._4_4_) goto thunk_FUN_01ab6c44;
        if (*(float *)(lVar13 + in_stack_000001a8 + -0x10c) == fStack00000000000000a8) {
          fVar27 = *(float *)(lVar13 + in_stack_000001a8 + -0x24);
          if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_037a2200(fVar29 + fVar27,in_stack_000000a0._4_4_,0);
          if ((uVar11 & 1) != 0) {
            iVar8 = *in_stack_000001d0;
            goto LAB_03792fdc;
          }
          lVar13 = *in_stack_000001e8;
          if (lVar13 == 0) goto LAB_03793c9c;
        }
        uVar10 = unaff_w28;
        if ((int)uVar15 < (int)unaff_w28) {
          lVar20 = in_stack_000001b0;
          uVar10 = uVar15;
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar10) goto thunk_FUN_01ab6c44;
      }
      lVar13 = lVar13 + lVar20 * unaff_x29;
    }
    fVar29 = *(float *)(lVar13 + 0x150);
    uVar25 = *(undefined4 *)(lVar13 + 0x130);
LAB_037932fc:
    FUN_0379d0d0(in_stack_000000e8._4_4_,in_stack_000000e0,uStack00000000000000dc,uVar25,
                 in_stack_000000f0 * fVar23 + fVar29,0,in_stack_000000f0,in_stack_000000f0);
    bStack0000000000000180 = 0;
  }
LAB_03793338:
  lVar20 = *in_stack_000001e8;
  if (lVar20 == 0) goto LAB_03793c9c;
  uVar10 = (uint)*(undefined8 *)(lVar20 + 0x18);
  if (uVar10 <= unaff_w28) goto thunk_FUN_01ab6c44;
  if ((*(byte *)(lVar20 + unaff_x26 * unaff_x29 + 0x19d) >> 1 & 1) == 0) {
    if ((in_stack_00000160 & 1) != 0) {
      FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                   fStack000000000000012c,in_stack_00000130,uStack0000000000000124);
    }
LAB_03793428:
    in_stack_00000160 = 0;
  }
  else {
    if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)unaff_w28) ||
       (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar12)) {
      bVar6 = true;
    }
    else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
      bVar6 = *(int *)(lVar20 + unaff_x26 * unaff_x29 + 0x70) + 1 !=
              *(int *)(in_stack_000001e0 + 0xf0);
    }
    else {
      bVar6 = false;
    }
    if ((in_stack_00000160 & 1) == 0) {
      if (((in_stack_000001d8._4_4_ == 0xd) || ((in_stack_000001d8._4_4_ & 0xfffe) == 10)) ||
         (((int)uVar15 < (int)unaff_w28 || (bVar6)))) goto LAB_03793428;
      if (unaff_w28 == uVar15) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar11 = FUN_026b97f8(in_stack_000001d8._4_4_,0);
        if ((uVar11 & 1) != 0) goto LAB_03793428;
      }
      puVar5 = Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
      lVar13 = *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar13 = *(long *)puVar5;
      }
      lVar20 = *in_stack_000001e8;
      if (lVar20 == 0) goto LAB_03793c9c;
      uVar10 = (uint)*(undefined8 *)(lVar20 + 0x18);
      if (uVar10 <= unaff_w28) goto thunk_FUN_01ab6c44;
      pfVar17 = *(float **)(lVar13 + 0xb8);
      fStack0000000000000128 = *pfVar17;
      in_stack_00000140._4_4_ = pfVar17[1];
      fStack000000000000012c = pfVar17[2];
      in_stack_00000130 = pfVar17[3];
      uStack0000000000000124 = 0;
    }
    if (uVar10 <= unaff_w28) goto thunk_FUN_01ab6c44;
    lVar20 = lVar20 + unaff_x26 * unaff_x29;
    fVar27 = *(float *)(lVar20 + 0x130);
    fVar30 = *(float *)(lVar20 + 0x124);
    fVar29 = *(float *)(lVar20 + 0x148);
    fVar21 = *(float *)(lVar20 + 0x14c);
    fVar28 = *(float *)(lVar20 + 0x154);
    fVar23 = *(float *)(lVar20 + 0x164);
    uVar11 = FUN_037a20cc(&stack0x00000210,&stack0x000001f0,0);
    lVar20 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
    if ((uVar11 & 1) == 0) {
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar20);
      }
      fVar22 = (float)FUN_037a1dd8(in_stack_000000b8,0);
      bVar7 = (uStack000000000000017c & 1) == 0;
      if (bVar7) {
        fVar29 = fVar30;
      }
      if (bVar7) {
        fVar23 = fVar27;
      }
      if (fVar29 - fVar22 <= fStack0000000000000128) {
        fStack0000000000000128 = fVar29 - fVar22;
      }
      fVar29 = (float)FUN_037a1de0(in_stack_000000b8,0);
      if (fStack000000000000012c <= fVar23 + fVar29) {
        fStack000000000000012c = fVar23 + fVar29;
      }
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar29 = (float)FUN_037a1df0(in_stack_000000b8,0);
      if (fVar28 - fVar29 <= in_stack_00000140._4_4_) {
        in_stack_00000140._4_4_ = fVar28 - fVar29;
      }
      fVar29 = (float)FUN_037a1de8(in_stack_000000b8,0);
      if (in_stack_00000130 <= fVar21 + fVar29) {
        in_stack_00000130 = fVar21 + fVar29;
      }
    }
    else {
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar20);
      }
      fVar22 = (float)FUN_037a1de0(in_stack_000000b8,0);
      if ((uStack000000000000017c & 1) == 0) {
        fVar29 = fVar30;
      }
      if (fVar28 <= in_stack_00000140._4_4_) {
        in_stack_00000140._4_4_ = fVar28;
      }
      fVar29 = (fVar29 + (fStack000000000000012c - fVar22)) * 0.5;
      if (in_stack_00000130 <= fVar21) {
        in_stack_00000130 = fVar21;
      }
      FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,fVar29,
                   in_stack_00000130,uStack0000000000000124);
      puVar5 = Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_00000140._4_4_ = (float)FUN_037a1df0(in_stack_00000098,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_00000140._4_4_ = fVar28 - in_stack_00000140._4_4_;
      fStack000000000000012c = (float)FUN_037a1de0(in_stack_00000098,0);
      fVar28 = (float)FUN_037a1de8(in_stack_00000098,0);
      if ((uStack000000000000017c & 1) == 0) {
        fVar23 = fVar27;
      }
      fStack000000000000012c = fVar23 + fStack000000000000012c;
      uStack0000000000000124 = 0;
      fStack0000000000000128 = fVar29;
      in_stack_00000130 = fVar21 + fVar28;
    }
    if ((((*in_stack_000001d0 == 1) || (unaff_w28 == uVar14)) || ((int)uVar15 <= (int)unaff_w28)) ||
       (bVar6)) {
      FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                   fStack000000000000012c,in_stack_00000130,uStack0000000000000124);
      in_stack_00000160 = 0;
    }
    else {
      in_stack_00000160 = 1;
    }
  }
  puVar5 = Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
  iVar8 = *in_stack_000001d0;
  iStack0000000000000178 = iStack0000000000000178 + 1;
  uVar10 = in_stack_000001b8._4_4_ + 1;
  in_stack_000001a8 = in_stack_000001a8 + 0x188;
  if (iVar8 <= (int)in_stack_000001b8._4_4_) {
    *(int *)(in_stack_000001c0 + 0x10) = iVar8;
    uVar25 = *(undefined4 *)(unaff_x19 + 0x15c0);
    *(uint *)(in_stack_000001c0 + 0x24) = uVar12 + 1;
    if (iVar8 < 1 || in_stack_00000138 == 0) {
      in_stack_00000138 = 1;
    }
    *(int *)(in_stack_000001c0 + 0x1c) = in_stack_00000138;
    *(undefined4 *)(in_stack_000001c0 + 0x14) = uVar25;
    *(int *)(in_stack_000001c0 + 0x28) = *(int *)(unaff_x19 + 0x350) + 1;
    if (*(int *)(in_stack_000001c0 + 0x2c) < 2) goto LAB_0378c81c;
    uVar11 = 1;
    lVar20 = 0x70;
    goto LAB_03793aa0;
  }
  if (*(uint *)(in_stack_000001c8 + 0x18) <= in_stack_000001b8._4_4_) goto thunk_FUN_01ab6c44;
  unaff_x26 = (long)(int)in_stack_000001b8._4_4_;
  lVar20 = in_stack_000001c8 + unaff_x26 * unaff_x29;
  in_stack_00000188 = *(long *)(lVar20 + 0x40);
  uVar3 = *(ushort *)(lVar20 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uStack000000000000017c = FUN_026b63d8(uVar3,0);
  if (*(uint *)(in_stack_000001c8 + 0x18) <= in_stack_000001b8._4_4_) goto thunk_FUN_01ab6c44;
  lVar20 = *(long *)(in_stack_000001c0 + 0x48);
  in_stack_000001d8._4_4_ = (uint)uVar3;
  if (lVar20 == 0) goto LAB_03793c9c;
  unaff_w25 = *(uint *)(in_stack_000001c8 + unaff_x26 * unaff_x29 + 0x6c);
  if (*(uint *)(lVar20 + 0x18) <= unaff_w25) goto thunk_FUN_01ab6c44;
  in_stack_000001a0 = (long)(int)unaff_w25;
  lVar20 = lVar20 + in_stack_000001a0 * 0x60;
  in_stack_00000150 = (long)(int)*(uint *)(lVar20 + 0x40);
  uVar14 = *(uint *)(lVar20 + 0x6c);
  unaff_w21 = *(int *)(lVar20 + 0x20);
  unaff_w20 = *(int *)(lVar20 + 0x28);
  iVar8 = *(int *)(lVar20 + 0x2c);
  in_stack_000001b0 = (long)*(int *)(lVar20 + 0x44);
  param_4 = *(float *)(lVar20 + 0x50);
  fStack0000000000000170 = *(float *)(lVar20 + 0x58);
  unaff_s13 = *(float *)(lVar20 + 0x5c);
  unaff_s8 = *(float *)(lVar20 + 0x60);
  fVar29 = *(float *)(lVar20 + 100);
  unaff_s9 = *(float *)(lVar20 + 0x70);
  unaff_s12 = *(float *)(lVar20 + 0x74);
  unaff_s14 = *(float *)(lVar20 + 0x78);
  fStack00000000000000c4 = *(float *)(lVar20 + 0x7c);
  unaff_w28 = in_stack_000001b8._4_4_;
  unaff_w24 = uVar12;
  if ((int)uVar14 < 0x421) {
    if ((int)uVar14 < 0x209) {
      if ((int)uVar14 < 0x111) goto code_r0x03791b58;
      switch(uVar14) {
      case 0x201:
        goto switchD_03791aa4_caseD_1001;
      case 0x202:
        goto switchD_03791aa4_caseD_1002;
      case 0x203:
      case 0x205:
      case 0x206:
      case 0x207:
        break;
      case 0x204:
        goto switchD_03791aa4_caseD_1004;
      case 0x208:
        goto switchD_03791aa4_caseD_1008;
      default:
        if (uVar14 == 0x120) goto LAB_03791c08;
      }
    }
    else if ((int)uVar14 < 0x405) {
      if ((int)uVar14 < 0x401) {
        if (uVar14 == 0x210) goto switchD_03791aa4_caseD_1008;
        if (uVar14 == 0x220) goto LAB_03791c08;
      }
      else {
        if (uVar14 == 0x401) goto switchD_03791aa4_caseD_1001;
        if (uVar14 == 0x402) goto switchD_03791aa4_caseD_1002;
        if (uVar14 == 0x404) goto switchD_03791aa4_caseD_1004;
      }
    }
    else {
      if ((uVar14 == 0x408) || (uVar14 == 0x410)) goto switchD_03791aa4_caseD_1008;
      if (uVar14 == 0x420) {
LAB_03791c08:
        unaff_s13 = unaff_s9 + unaff_s14;
        goto LAB_03791c1c;
      }
    }
    goto switchD_03791aa4_caseD_1003;
  }
  if ((int)uVar14 < 0x1009) {
    if (0x810 < (int)uVar14) {
      switch(uVar14) {
      case 0x1001:
        goto switchD_03791aa4_caseD_1001;
      case 0x1002:
        goto switchD_03791aa4_caseD_1002;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        break;
      case 0x1004:
        goto switchD_03791aa4_caseD_1004;
      case 0x1008:
        goto switchD_03791aa4_caseD_1008;
      default:
        if (uVar14 == 0x820) goto LAB_03791c08;
      }
      goto switchD_03791aa4_caseD_1003;
    }
    switch(uVar14) {
    case 0x801:
      goto switchD_03791aa4_caseD_1001;
    case 0x802:
      goto switchD_03791aa4_caseD_1002;
    case 0x803:
    case 0x805:
    case 0x806:
    case 0x807:
      goto switchD_03791aa4_caseD_1003;
    case 0x804:
      goto switchD_03791aa4_caseD_1004;
    case 0x808:
      break;
    default:
      if (uVar14 != 0x810) goto switchD_03791aa4_caseD_1003;
    }
  }
  else {
    if ((int)uVar14 < 0x2005) {
      if ((int)uVar14 < 0x2001) {
        if (uVar14 != 0x1010) {
          uVar12 = 0x1020;
          goto LAB_03791bc8;
        }
        goto switchD_03791aa4_caseD_1008;
      }
      if (uVar14 == 0x2001) goto switchD_03791aa4_caseD_1001;
      if (uVar14 == 0x2002) goto switchD_03791aa4_caseD_1002;
      if (uVar14 == 0x2004) goto switchD_03791aa4_caseD_1004;
      goto switchD_03791aa4_caseD_1003;
    }
    if ((uVar14 != 0x2008) && (uVar14 != 0x2010)) {
      uVar12 = 0x2020;
LAB_03791bc8:
      if (uVar14 == uVar12) goto LAB_03791c08;
      goto switchD_03791aa4_caseD_1003;
    }
  }
  goto switchD_03791aa4_caseD_1008;
LAB_03793aa0:
  lVar13 = *(long *)(in_stack_000001c0 + 0x58);
  if (lVar13 == 0) {
LAB_03793c9c:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (*(uint *)(lVar13 + 0x18) <= uVar11) goto thunk_FUN_01ab6c44;
  FUN_03785ba0(lVar13 + lVar20,0);
  if (*(int *)(in_stack_000001e0 + 0x100) != 0) {
    lVar13 = *(long *)(in_stack_000001c0 + 0x58);
    if (lVar13 == 0) goto LAB_03793c9c;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar11) {
thunk_FUN_01ab6c44:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    FUN_03785bdc(lVar13 + lVar20,1,0);
  }
  uVar11 = uVar11 + 1;
  lVar20 = lVar20 + 0x50;
  if ((long)*(int *)(in_stack_000001c0 + 0x2c) <= (long)uVar11) {
LAB_0378c81c:
    if (*(long *)(in_stack_00000110 + 0x28) == in_stack_00001a38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_03793aa0;
code_r0x03791b58:
  switch(uVar14) {
  case 0x101:
switchD_03791aa4_caseD_1001:
    if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
      fStack0000000000000158 = fVar29 + 0.0;
    }
    else {
      fStack0000000000000158 = 0.0 - unaff_s13;
    }
    break;
  case 0x102:
switchD_03791aa4_caseD_1002:
LAB_03791c1c:
    fStack0000000000000158 = (fVar29 + unaff_s8 * 0.5) - unaff_s13 * 0.5;
    break;
  case 0x103:
  case 0x105:
  case 0x106:
  case 0x107:
    goto switchD_03791aa4_caseD_1003;
  case 0x104:
switchD_03791aa4_caseD_1004:
    fStack0000000000000158 = (unaff_s8 + fVar29) - unaff_s13;
    if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
      fStack0000000000000158 = unaff_s8 + fVar29;
    }
    break;
  default:
    if (uVar14 != 0x110) goto switchD_03791aa4_caseD_1003;
  case 0x108:
switchD_03791aa4_caseD_1008:
    if (*(int *)(lVar20 + 0x44) < (int)in_stack_000001b8._4_4_) goto switchD_03791aa4_caseD_1003;
    if (in_stack_000001d8._4_4_ < 0xad) {
      if ((in_stack_000001d8._4_4_ == 3) || (in_stack_000001d8._4_4_ == 10))
      goto switchD_03791aa4_caseD_1003;
    }
    else if ((in_stack_000001d8._4_4_ == 0xad) ||
            ((in_stack_000001d8._4_4_ == 0x200b || (in_stack_000001d8._4_4_ == 0x2060))))
    goto switchD_03791aa4_caseD_1003;
    if (*(uint *)(in_stack_000001c8 + 0x18) <= *(uint *)(lVar20 + 0x40)) goto thunk_FUN_01ab6c44;
    uVar4 = *(undefined2 *)(in_stack_000001c8 + in_stack_00000150 * unaff_x29 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      unaff_x23 = (long *)PTR_DAT_03cbded8;
    }
    uVar11 = FUN_026b8cc4(uVar4,0);
    if ((uVar11 & 1) == 0) {
      bVar6 = (int)unaff_w25 < *(int *)(unaff_x19 + 0x340);
    }
    else {
      bVar6 = false;
    }
    if ((unaff_s8 < unaff_s13) || (bVar6 || (uVar14 >> 4 & 1) != 0)) {
      if ((uVar10 == 1) || (unaff_w25 != uVar12)) {
        bVar2 = *(byte *)(in_stack_000001e0 + 0xb6);
      }
      else {
        bVar2 = *(byte *)(in_stack_000001e0 + 0xb6);
        in_w8 = (uint)bVar2;
        if (in_stack_000001b8._4_4_ != *(uint *)(in_stack_000001e0 + 0xe4)) goto LAB_0379392c;
      }
      fStack0000000000000158 = fVar29;
      if (bVar2 != 0) {
        fStack0000000000000158 = unaff_s8 + fVar29;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_00000090 = FUN_026b97f8(in_stack_000001d8._4_4_,0);
      in_stack_00000148 = 0;
      goto switchD_03791aa4_caseD_1003;
    }
    fStack0000000000000158 = fVar29;
    if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
      fStack0000000000000158 = unaff_s8 + fVar29;
    }
  }
  in_stack_00000148 = 0;
  goto switchD_03791aa4_caseD_1003;
LAB_0379392c:
  in_w9 = iVar8 - unaff_w21;
  param_1 = -unaff_s13;
  in_ZR = bVar2 == 0;
  in_w10 = in_stack_00000090 & 1;
  in_stack_000001b8._4_4_ = uVar10;
  param_5 = fStack0000000000000170;
  param_7 = fStack00000000000000c4;
  in_stack_00000190 = param_4;
  goto code_r0x03793940;
}


