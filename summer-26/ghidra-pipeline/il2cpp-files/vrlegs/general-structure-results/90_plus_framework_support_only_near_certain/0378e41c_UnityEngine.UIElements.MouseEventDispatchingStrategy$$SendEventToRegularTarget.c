/*
FUNCTION_NAME: UnityEngine.UIElements.MouseEventDispatchingStrategy$$SendEventToRegularTarget
ENTRY_POINT: 0378e41c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 113
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_UIElements_MouseEventDispatchingStrategy__SendEventToRegularTarget(float param_1)

{
  int iVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  long *plVar18;
  undefined1 *puVar19;
  ulong uVar20;
  undefined1 uVar21;
  char cVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  float *pfVar27;
  long lVar28;
  uint uVar29;
  ulong uVar30;
  long *plVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  float *pfVar36;
  uint uVar37;
  long lVar38;
  long unaff_x19;
  char cVar39;
  uint unaff_w20;
  long lVar40;
  uint uVar41;
  long *plVar42;
  ulong unaff_x22;
  uint unaff_w23;
  char *unaff_x24;
  uint unaff_w25;
  long *unaff_x26;
  long lVar43;
  ulong unaff_x27;
  long *unaff_x28;
  uint *unaff_x29;
  undefined4 uVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  float fVar52;
  float fVar53;
  undefined4 uVar54;
  float unaff_s8;
  float fVar55;
  undefined8 uVar56;
  float unaff_s9;
  float fVar57;
  undefined8 uVar58;
  float fVar59;
  float unaff_s11;
  float fVar60;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar61;
  float unaff_s15;
  float fVar62;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  int iStack0000000000000028;
  float fStack000000000000002c;
  int *in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  long *in_stack_00000050;
  float fStack0000000000000058;
  uint uStack000000000000005c;
  long in_stack_00000060;
  void *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  float fStack0000000000000088;
  int iStack000000000000008c;
  uint uStack0000000000000090;
  undefined8 in_stack_000000a0;
  float fStack00000000000000a8;
  uint uStack00000000000000ac;
  byte in_stack_000000b8;
  int iStack00000000000000c0;
  float fStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  float fStack00000000000000d0;
  byte bStack00000000000000d8;
  uint uStack00000000000000dc;
  float fStack00000000000000e0;
  undefined8 in_stack_000000e8;
  float fStack00000000000000f0;
  undefined8 *in_stack_000000f8;
  undefined8 *in_stack_00000100;
  float in_stack_00000108;
  long in_stack_00000110;
  undefined8 uStack0000000000000118;
  float fStack0000000000000120;
  undefined4 uStack0000000000000124;
  float fStack0000000000000128;
  float fStack000000000000012c;
  float fStack0000000000000130;
  int iStack0000000000000138;
  undefined8 in_stack_00000140;
  float in_stack_00000148;
  float in_stack_00000150;
  float fStack0000000000000158;
  float fStack000000000000015c;
  long *in_stack_00000160;
  float fStack0000000000000168;
  float fStack000000000000016c;
  float fStack0000000000000170;
  float fStack0000000000000174;
  int iStack0000000000000178;
  float fStack000000000000017c;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float in_stack_00000188;
  long *in_stack_00000190;
  float in_stack_000001a0;
  long *in_stack_000001a8;
  undefined8 in_stack_000001b8;
  long in_stack_000001c0;
  long *in_stack_000001c8;
  uint *in_stack_000001d0;
  undefined8 in_stack_000001d8;
  long in_stack_000001e0;
  long *in_stack_000001e8;
  uint in_stack_000015dc;
  uint in_stack_0000160c;
  undefined8 in_stack_00001688;
  char in_stack_00001694;
  float in_stack_00001698;
  uint in_stack_0000169c;
  undefined8 in_stack_000016a0;
  long in_stack_00001a38;
  
code_r0x0378e41c:
  fVar53 = unaff_s9 +
           (unaff_s15 - *(float *)(unaff_x19 + 0x1594)) *
           unaff_s13 * (unaff_s12 + unaff_s12 + unaff_s8 + param_1 * *(float *)(unaff_x19 + 0x19a8))
  ;
  fVar46 = unaff_s14;
  fVar49 = fVar53;
  if (((unaff_w20 == 0) && (*unaff_x24 == '\x01')) && ((*(byte *)(unaff_x19 + 0x124) >> 1 & 1) != 0)
     ) {
    if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
    iVar15 = *(int *)(unaff_x19 + 0x19a4);
    fVar49 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
    if (*unaff_x26 == 0) goto LAB_03793c9c;
    fVar46 = (float)FUN_037769b0(*unaff_x26 + 0xb0,0);
    if (*unaff_x26 == 0) goto LAB_03793c9c;
    fVar52 = *(float *)(unaff_x19 + 0xf0);
    fVar59 = *(float *)(unaff_x19 + 0x180);
    fVar62 = (float)iVar15 * fStack00000000000000a8;
    fVar48 = (float)FUN_03776960(*unaff_x26 + 0xb0,0);
    fVar48 = fVar48 * fVar52 * (fVar49 - (fVar46 + fVar59)) * 0.5;
    fVar49 = (float)FUN_03776cac(&stack0x000015f0,0);
    fVar49 = fVar62 * unaff_s13 * ((unaff_s12 + in_stack_000001a0 + fVar49) - fVar48);
    fVar52 = (float)FUN_03776cac(&stack0x000015f0,0);
    fVar59 = (float)FUN_03776c9c(&stack0x000015f0,0);
    in_stack_000001b8._4_4_ = in_stack_000001b8._4_4_ + 0.0;
    fVar46 = unaff_s14 + fVar49;
    fVar49 = fVar53 + fVar49;
    fVar62 = fVar62 * unaff_s13 * ((((fVar52 - fVar59) - in_stack_000001a0) - unaff_s12) - fVar48);
    unaff_s14 = unaff_s14 + fVar62;
    fVar53 = fVar53 + fVar62;
    _fStack0000000000000180 = CONCAT44(fStack0000000000000184 + 0.0,fStack0000000000000180);
  }
  uVar56 = *in_stack_000000f8;
  uVar58 = *_fStack00000000000000f0;
  if (DAT_0411f169 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbdeb8);
    DAT_0411f169 = '\x01';
  }
  uVar50 = **(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8);
  uVar51 = (*(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8))[1];
  fVar48 = 0.0;
  if (DAT_00d38b04 <
      (float)((ulong)uVar58 >> 0x20) * (float)((ulong)uVar51 >> 0x20) +
      (float)uVar58 * (float)uVar51 +
      (float)uVar56 * (float)uVar50 +
      (float)((ulong)uVar56 >> 0x20) * (float)((ulong)uVar50 >> 0x20)) {
    fVar55 = 0.0;
    fVar57 = 0.0;
    fVar47 = 0.0;
    fVar52 = in_stack_000001b8._4_4_;
    fVar59 = fStack0000000000000184;
    fVar62 = fStack0000000000000184;
  }
  else {
    FUN_036be00c(&stack0x000016a0,*(undefined4 *)(unaff_x19 + 0x19b4),
                 *(undefined4 *)(unaff_x19 + 0x19b8),*(undefined4 *)(unaff_x19 + 0x19bc),
                 *(undefined4 *)(unaff_x19 + 0x19c0),0);
    fVar60 = (fVar49 + unaff_s14) * 0.5;
    fVar61 = (fStack0000000000000184 + in_stack_000001b8._4_4_) * 0.5;
    in_stack_000001b8._4_4_ = in_stack_000001b8._4_4_ - fVar61;
    fVar47 = 0.0;
    fVar52 = in_stack_000001b8._4_4_;
    fVar46 = (float)FUN_036bdd2c(fVar46 - fVar60,&stack0x000014d0,0);
    fVar46 = fVar60 + fVar46;
    fVar47 = fVar47 + 0.0;
    fVar62 = fStack0000000000000184 - fVar61;
    fVar57 = 0.0;
    fVar59 = fVar62;
    fVar48 = (float)FUN_036bdd2c(unaff_s14 - fVar60,&stack0x000014d0,0);
    unaff_s14 = fVar60 + fVar48;
    fVar57 = fVar57 + 0.0;
    fVar55 = 0.0;
    fVar49 = (float)FUN_036bdd2c(fVar49 - fVar60,&stack0x000014d0,0);
    fVar49 = fVar60 + fVar49;
    in_stack_000001b8._4_4_ = fVar61 + in_stack_000001b8._4_4_;
    fVar55 = fVar55 + 0.0;
    fVar48 = 0.0;
    fVar53 = (float)FUN_036bdd2c(fVar53 - fVar60,&stack0x000014d0,0);
    fVar53 = fVar60 + fVar53;
    fVar48 = fVar48 + 0.0;
    fVar52 = fVar61 + fVar52;
    fVar59 = fVar61 + fVar59;
    fVar62 = fVar61 + fVar62;
  }
  lVar26 = *in_stack_000001e8;
  if (lVar26 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
  lVar26 = lVar26 + (long)(int)*unaff_x29 * unaff_x27;
  *(float *)(lVar26 + 0x124) = unaff_s14;
  *(float *)(lVar26 + 0x128) = fVar59;
  *(float *)(lVar26 + 300) = fVar57;
  lVar26 = *in_stack_000001e8;
  if (lVar26 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
  lVar26 = lVar26 + (long)(int)*unaff_x29 * unaff_x27;
  *(float *)(lVar26 + 0x118) = fVar46;
  *(float *)(lVar26 + 0x11c) = fVar52;
  *(float *)(lVar26 + 0x120) = fVar47;
  lVar26 = *in_stack_000001e8;
  if (lVar26 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
  lVar26 = lVar26 + (long)(int)*unaff_x29 * unaff_x27;
  *(float *)(lVar26 + 0x138) = fVar55;
  *(float *)(lVar26 + 0x130) = fVar49;
  *(float *)(lVar26 + 0x134) = in_stack_000001b8._4_4_;
  lVar26 = *in_stack_000001e8;
  if (lVar26 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
  lVar26 = lVar26 + (long)(int)*unaff_x29 * unaff_x27;
  *(float *)(lVar26 + 0x13c) = fVar53;
  *(float *)(lVar26 + 0x140) = fVar62;
  *(float *)(lVar26 + 0x144) = fVar48;
  lVar26 = *in_stack_000001e8;
  if (lVar26 == 0) goto LAB_03793c9c;
  uVar13 = *unaff_x29;
  fVar53 = *(float *)(unaff_x19 + 0x2f4);
  fVar46 = (float)FUN_03778e5c(&stack0x000015e0,0);
  if (*(uint *)(lVar26 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
  *(float *)(lVar26 + (long)(int)uVar13 * unaff_x27 + 0x148) = fVar53 + unaff_s13 * fVar46;
  lVar26 = *in_stack_000001e8;
  if (lVar26 == 0) goto LAB_03793c9c;
  uVar13 = *unaff_x29;
  fVar48 = *(float *)(unaff_x19 + 0x2e0);
  fVar53 = *(float *)(unaff_x19 + 0x180);
  fVar46 = (float)FUN_03778e6c(&stack0x000015e0,0);
  if (*(uint *)(lVar26 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
  *(float *)(lVar26 + (long)(int)uVar13 * unaff_x27 + 0x150) =
       (unaff_s11 - fVar48) + fVar53 + unaff_s13 * fVar46;
  lVar26 = *in_stack_000001e8;
  if (lVar26 == 0) goto LAB_03793c9c;
  uVar13 = *unaff_x29;
  lVar40 = (long)(int)uVar13;
  if (*(uint *)(lVar26 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
  *(float *)(lVar26 + lVar40 * unaff_x27 + 0x168) = (fVar49 - unaff_s14) / (fVar52 - fVar59);
  fVar49 = unaff_s13 * (fStack0000000000000180 + fStack000000000000016c);
  if (*unaff_x24 == '\x01') {
    fVar49 = fVar49 / fStack000000000000017c;
    fVar46 = (unaff_s13 * (fStack0000000000000170 + fStack0000000000000168)) /
             fStack000000000000017c;
  }
  else {
    fVar46 = unaff_s13 * (fStack0000000000000170 + fStack0000000000000168);
  }
  uVar29 = *(uint *)(unaff_x19 + 0x328);
  fVar53 = *(float *)(unaff_x19 + 0x180);
  bVar8 = uVar13 == uVar29;
  bVar9 = unaff_w25 == 0;
  fVar49 = fVar53 + fVar49;
  if (bVar9 || bVar8) {
    fVar46 = fVar53 + fVar46;
    fVar48 = fVar49;
    fVar52 = fVar46;
    if (fVar53 != 0.0) {
      fVar48 = (fVar49 - fVar53) / *(float *)(unaff_x19 + 0xf0);
      fVar52 = (fVar46 - fVar53) / *(float *)(unaff_x19 + 0xf0);
      if (fVar48 <= fVar49) {
        fVar48 = fVar49;
      }
      if (fVar46 <= fVar52) {
        fVar52 = fVar46;
      }
    }
    lVar32 = lVar26 + lVar40 * unaff_x27;
    fVar53 = fVar48;
    if (fVar48 <= *(float *)(unaff_x19 + 0x338)) {
      fVar53 = *(float *)(unaff_x19 + 0x338);
    }
    fVar59 = fVar52;
    if (*(float *)(unaff_x19 + 0x33c) <= fVar52) {
      fVar59 = *(float *)(unaff_x19 + 0x33c);
    }
    *(float *)(unaff_x19 + 0x338) = fVar53;
    *(float *)(unaff_x19 + 0x33c) = fVar59;
    *(float *)(lVar32 + 0x158) = fVar48;
    *(float *)(lVar32 + 0x15c) = fVar52;
    fVar48 = *(float *)(unaff_x19 + 0x2e0);
    fVar52 = fVar49 - fVar48;
  }
  else {
    fVar53 = *(float *)(unaff_x19 + 0x338);
    lVar32 = lVar26 + lVar40 * unaff_x27;
    *(float *)(lVar32 + 0x158) = fVar53;
    fVar46 = *(float *)(unaff_x19 + 0x33c);
    *(float *)(lVar32 + 0x15c) = fVar46;
    fVar48 = *(float *)(unaff_x19 + 0x2e0);
    fVar52 = fVar53 - fVar48;
  }
  *(float *)(lVar32 + 0x14c) = fVar52;
  *(float *)(lVar26 + lVar40 * unaff_x27 + 0x154) = fVar46 - fVar48;
  *(float *)(unaff_x19 + 0x378) = fVar46 - fVar48;
  if ((*(int *)(unaff_x19 + 0x340) == 0) || (*(char *)(unaff_x19 + 0x37c) != '\0')) {
    if (bVar9 || bVar8) {
      *(float *)(unaff_x19 + 0x374) = fVar53;
      if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
      fVar46 = *(float *)(unaff_x19 + 0x370);
      fVar53 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
      fVar48 = *(float *)(unaff_x19 + 0x2e0);
      fStack000000000000017c = (unaff_s13 * fVar53) / fStack000000000000017c;
      if (fVar46 <= fStack000000000000017c) {
        fVar46 = fStack000000000000017c;
      }
      *(float *)(unaff_x19 + 0x370) = fVar46;
      if (fVar48 == 0.0) goto LAB_0378ee0c;
    }
  }
  else if ((bVar9 || bVar8) && fVar48 == 0.0) {
LAB_0378ee0c:
    fVar46 = *(float *)(unaff_x19 + 0x19c8);
    if (*(float *)(unaff_x19 + 0x19c8) <= fVar49) {
      fVar46 = fVar49;
    }
    *(float *)(unaff_x19 + 0x19c8) = fVar46;
  }
  lVar26 = *in_stack_000001e8;
  if (lVar26 == 0) goto LAB_03793c9c;
  uVar23 = *unaff_x29;
  if (*(uint *)(lVar26 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
  lVar26 = lVar26 + (long)(int)uVar23 * unaff_x27;
  *(undefined1 *)(lVar26 + 0x1a0) = 0;
  uVar37 = *(uint *)(unaff_x19 + 0x158) & 0x18;
  iVar15 = (int)unaff_x27;
  if ((in_stack_0000169c == 9) ||
     ((((unaff_w25 == 0 && (in_stack_0000169c != 3)) &&
       ((in_stack_0000169c != 0x200b && (in_stack_0000169c != 0xad)))) ||
      (((in_stack_0000169c == 0xad & (in_stack_000000b8 ^ 0xff)) != 0 || (*unaff_x24 == '\x02'))))))
  {
    *(undefined1 *)(lVar26 + 0x1a0) = 1;
    pfVar27 = _fStack0000000000000130;
    pfVar36 = _iStack0000000000000138;
    if (unaff_w23 != 0) {
      lVar26 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar26 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
      lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      pfVar36 = (float *)(lVar26 + 100);
      pfVar27 = (float *)(lVar26 + 0x68);
    }
    fVar53 = *pfVar36;
    fVar46 = *pfVar27;
    fVar49 = *(float *)(unaff_x19 + 0x35c);
    fVar52 = *(float *)(unaff_x19 + 0x2f4);
    fStack0000000000000174 = (fStack000000000000012c - fVar53) - fVar46;
    bVar8 = true;
    if ((fVar49 <= fStack0000000000000174) && (bVar8 = false, !NAN(fVar49))) {
      bVar8 = fVar49 == -1.0;
    }
    if (!bVar8) {
      fStack0000000000000174 = fVar49;
    }
    fVar49 = 0.0;
    fVar59 = 0.0;
    if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
      fVar59 = (float)FUN_03776cb4(&stack0x000015f0,0);
      fVar48 = *(float *)(unaff_x19 + 0x2e0);
    }
    fVar62 = *(float *)(unaff_x19 + 0x1594);
    fVar47 = *(float *)(unaff_x19 + 0x33c);
    if (in_stack_0000169c != 0xad) {
      fStack000000000000015c = unaff_s13;
    }
    if ((0.0 < fVar48) && (fVar49 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
      fVar49 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
    }
    uVar23 = *in_stack_000001d0;
    fVar49 = (*(float *)(unaff_x19 + 0x374) - (fVar47 - fVar48)) + fVar49;
    if (fVar49 <= in_stack_00000108) goto switchD_0378f0dc_caseD_2;
    if (*(int *)(unaff_x19 + 0x34c) == -1) {
      *(uint *)(unaff_x19 + 0x34c) = uVar23;
    }
    uVar56 = DAT_00d37868;
    if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
      fVar57 = *(float *)(in_stack_000001e0 + 0xd0);
      if (((*(float *)(unaff_x19 + 0x15b0) <= fVar57) || (fVar48 <= 0.0)) ||
         (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
        fVar48 = *_fStack00000000000000d0;
        fVar49 = *(float *)(in_stack_000001e0 + 0xac);
        if ((fVar48 <= fVar49) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)))
        goto LAB_0378f0b8;
        fVar46 = (fVar48 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
        if (fVar46 <= DAT_00d38b84) {
          fVar46 = DAT_00d38b84;
        }
        fVar53 = (fVar48 - fVar46) * 20.0 + 0.5;
        fVar46 = DAT_00d38e60;
        if (fVar53 != INFINITY) {
          fVar46 = (float)(int)fVar53 / 20.0;
        }
        if (fVar46 <= fVar49) {
          fVar46 = fVar49;
        }
        *(float *)(unaff_x19 + 0x1598) = fVar48;
LAB_037910ac:
        *(float *)(unaff_x19 + 0xec) = fVar46;
      }
      else {
        fVar49 = *(float *)(unaff_x19 + 0x15b0) +
                 ((in_stack_00000018._4_4_ - fVar49) / (float)*(int *)(unaff_x19 + 0x340)) /
                 fStack0000000000000088;
        if (fVar49 <= fVar57) {
          fVar49 = fVar57;
        }
LAB_03793b50:
        *(float *)(unaff_x19 + 0x15b0) = fVar49;
      }
      goto LAB_0378c81c;
    }
LAB_0378f0b8:
    switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
    case 1:
      if (*(int *)(unaff_x19 + 0x340) < 1) goto switchD_0378f0dc_caseD_2;
      iVar14 = FUN_020aa428(in_stack_00000078,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                           );
      in_stack_00001688 = DAT_00d37868;
      if (iVar14 == 0) {
        in_stack_000001d0[0] = 0;
        in_stack_000001d0[1] = 0;
        in_stack_0000160c = 0xffffffff;
      }
      else {
        FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
        memcpy(&stack0x00001138,&stack0x000016a0,0x398);
        iVar16 = FUN_03797154();
        iVar14 = *(int *)(unaff_x19 + 0x324) + -1;
        *(int *)(unaff_x19 + 0x324) = iVar14;
        in_stack_00001688 = CONCAT44(0x2026,iVar14);
        in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
        in_stack_0000160c = iVar16 - 1;
      }
      break;
    default:
switchD_0378f0dc_caseD_2:
      if ((unaff_x22 & 1) == 0) {
LAB_0378f1e0:
        if (unaff_w25 == 0) {
          if (in_stack_0000169c != 0xad) {
            if (*unaff_x24 == '\x02') {
              FUN_0379c8ac();
            }
            else if (*unaff_x24 == '\x01') {
              FUN_0379bd40(in_stack_000001a0);
            }
            uVar23 = *in_stack_000001d0;
            if ((uStack00000000000000ac & 1) != 0) {
              *(uint *)(unaff_x19 + 0x330) = uVar23;
            }
            *(uint *)(unaff_x19 + 0x334) = uVar23;
            *(int *)(unaff_x19 + 0x344) = *(int *)(unaff_x19 + 0x344) + 1;
            lVar26 = *(long *)(in_stack_000001c0 + 0x48);
            if (lVar26 != 0) {
              if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar26 + 0x18)) {
                lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                uStack00000000000000ac = 0;
                *(float *)(lVar26 + 100) = fVar53;
                *(float *)(lVar26 + 0x68) = fVar46;
                goto LAB_0378f884;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          lVar26 = *in_stack_000001e8;
          if (lVar26 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar26 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
          *(undefined1 *)(lVar26 + (long)(int)uVar23 * (long)iVar15 + 0x1a0) = 0;
        }
        else {
          lVar26 = *in_stack_000001e8;
          if (lVar26 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar26 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
          *(undefined1 *)(lVar26 + (long)(int)uVar23 * (long)iVar15 + 0x1a0) = 0;
          *(uint *)(unaff_x19 + 0x334) = uVar23;
          lVar26 = *(long *)(in_stack_000001c0 + 0x48);
          if (lVar26 == 0) goto LAB_03793c9c;
          uVar23 = *(uint *)(lVar26 + 0x18);
          if (uVar23 <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
          lVar40 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
          iVar14 = *(int *)(lVar40 + 0x2c) + 1;
          *(int *)(lVar40 + 0x2c) = iVar14;
          *(int *)(unaff_x19 + 0x348) = iVar14;
          if (uVar23 <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
          lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
          *(float *)(lVar26 + 100) = fVar53;
          *(float *)(lVar26 + 0x68) = fVar46;
          *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
        }
        goto LAB_0378f884;
      }
      fVar48 = ABS(fVar52) + fVar59 * (1.0 - fVar62) * fStack000000000000015c;
      fVar49 = 1.0;
      if (uVar37 != 0) {
        fVar49 = DAT_00d38acc;
      }
      if (fVar48 <= fVar49 * fStack0000000000000174) goto LAB_0378f1e0;
      if ((iStack000000000000008c == 0) || (uVar23 == *(uint *)(unaff_x19 + 0x328))) {
        if ((*(char *)(in_stack_000001e0 + 0xa8) == '\0') ||
           (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
LAB_0378f2f0:
          iVar14 = *(int *)(in_stack_000001e0 + 0x74);
          if (iVar14 == 1) {
            iVar14 = FUN_020aa428(in_stack_00000078,
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                                 );
            in_stack_00001688 = DAT_00d37868;
            if (iVar14 == 0) {
              in_stack_000001d0[0] = 0;
              in_stack_000001d0[1] = 0;
              in_stack_0000160c = 0xffffffff;
            }
            else {
              FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
              memcpy(&stack0x00000a08,&stack0x000016a0,0x398);
              iVar16 = FUN_03797154();
              iVar14 = *(int *)(unaff_x19 + 0x324) + -1;
              *(int *)(unaff_x19 + 0x324) = iVar14;
              in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
              in_stack_0000160c = iVar16 - 1;
              in_stack_00001688 = CONCAT44(0x2026,iVar14);
            }
            break;
          }
          if (iVar14 == 6) {
            in_stack_0000160c = FUN_03797154();
            uVar23 = *(uint *)(unaff_x19 + 0x324);
          }
          else {
            if (iVar14 != 3) goto LAB_0378f1e0;
            in_stack_0000160c = FUN_03797154();
          }
          goto LAB_037909d0;
        }
        fVar52 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
        if (fVar52 <= fVar62) {
          fVar52 = *(float *)(in_stack_000001e0 + 0xac);
          fVar59 = *_fStack00000000000000d0;
          if (fVar59 <= fVar52) goto LAB_0378f2f0;
LAB_03793bbc:
          fVar49 = (fVar59 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
          if (fVar49 <= DAT_00d38b84) {
            fVar49 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x1598) = fVar59;
          fVar49 = (fVar59 - fVar49) * 20.0 + 0.5;
          fVar46 = DAT_00d38e60;
          if (fVar49 != INFINITY) {
            fVar46 = (float)(int)fVar49 / 20.0;
          }
          if (fVar46 <= fVar52) {
            fVar46 = fVar52;
          }
          goto LAB_037910ac;
        }
        fVar46 = fVar48 / (1.0 - fVar62);
        if (fVar62 <= 0.0) {
          fVar46 = fVar48;
        }
        fVar62 = fVar62 + (fVar48 - fVar49 * (fStack0000000000000174 + DAT_00d38cc4)) / fVar46;
FUN_03793c4c:
        if (fVar52 <= fVar62) {
          fVar62 = fVar52;
        }
        *(float *)(unaff_x19 + 0x1594) = fVar62;
        goto LAB_0378c81c;
      }
      in_stack_0000160c = FUN_03797154();
      if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto LAB_03793c9c;
        uVar24 = *in_stack_000001d0;
        if (*(uint *)(lVar26 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
        fVar59 = *(float *)(unaff_x19 + 0x2e0);
        fVar52 = 0.0;
        if ((0.0 < fVar59) && (fVar52 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
          fVar52 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
        }
        fVar52 = fStack0000000000000158 * *(float *)(in_stack_000001e0 + 200) +
                 *(float *)(lVar26 + (long)(int)uVar24 * unaff_x27 + 0x158) +
                 (fVar52 - *(float *)(unaff_x19 + 0x33c)) +
                 fStack0000000000000088 * (in_stack_00000080._4_4_ + *(float *)(unaff_x19 + 0x15b0))
        ;
      }
      else {
        fVar52 = *(float *)(in_stack_000001e0 + 200);
        *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto LAB_03793c9c;
        fVar59 = *(float *)(unaff_x19 + 0x2e0);
        uVar24 = *(uint *)(unaff_x19 + 0x324);
        fVar52 = *(float *)(unaff_x19 + 0x2e4) + fStack0000000000000158 * fVar52;
      }
      if ((*(uint *)(lVar26 + 0x18) <= uVar24) ||
         (uVar41 = uVar24 - 1, *(uint *)(lVar26 + 0x18) <= uVar41)) goto thunk_FUN_01ab6c44;
      fVar47 = (fVar52 + *(float *)(unaff_x19 + 0x374) + fVar59) -
               *(float *)(lVar26 + (long)(int)uVar24 * (long)iVar15 + 0x15c);
      if (((in_stack_000000b8 & 1) == 0 &&
           *(short *)(lVar26 + (long)(int)uVar41 * (long)iVar15 + 0x20) == 0xad) &&
         ((fVar47 < in_stack_00000108 || (*(int *)(in_stack_000001e0 + 0x74) == 0)))) {
        in_stack_000000b8 = 0;
        in_stack_00001688 = CONCAT44(0x2d,uVar41);
        *in_stack_000001d0 = uVar41;
        in_stack_0000160c = in_stack_0000160c - 1;
        break;
      }
      if (*(short *)(lVar26 + (long)(int)uVar24 * unaff_x27 + 0x20) == 0xad) {
        in_stack_000000b8 = 1;
        break;
      }
      if ((bStack00000000000000d8 & *(byte *)(in_stack_000001e0 + 0xa8) & 1) != 0) {
        fVar62 = *(float *)(unaff_x19 + 0x1594);
        fVar52 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
        if ((fVar52 <= fVar62) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
          fVar59 = *_fStack00000000000000d0;
          fVar52 = *(float *)(in_stack_000001e0 + 0xac);
          if ((fVar52 < fVar59) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
          goto LAB_03793bbc;
          goto LAB_03790b7c;
        }
LAB_03793c60:
        fVar46 = fVar48;
        if (0.0 < fVar62) {
          fVar46 = fVar48 / (1.0 - fVar62);
        }
        fVar62 = fVar62 + (fVar48 - fVar49 * (fStack0000000000000174 + DAT_00d38cc4)) / fVar46;
        goto FUN_03793c4c;
      }
LAB_03790b7c:
      iVar14 = *in_stack_00000030;
      if ((iVar14 != iStack0000000000000028) && ((bStack00000000000000d8 & iVar14 != -1) != 0)) {
        in_stack_0000160c = FUN_03797154();
        unaff_x28 = (long *)PTR_DAT_03cbe438;
        lVar26 = *(long *)(in_stack_000001c0 + 0x30);
        if (lVar26 == 0) goto LAB_03793c9c;
        uVar24 = *in_stack_000001d0;
        uVar41 = uVar24 - 1;
        if (*(uint *)(lVar26 + 0x18) <= uVar41) goto thunk_FUN_01ab6c44;
        iStack0000000000000028 = iVar14;
        if (*(short *)(lVar26 + (long)(int)uVar41 * (long)iVar15 + 0x20) == 0xad) {
          in_stack_000000b8 = 0;
          in_stack_00001688 = CONCAT44(0x2d,uVar41);
          *in_stack_000001d0 = uVar41;
          in_stack_0000160c = in_stack_0000160c - 1;
          break;
        }
      }
      if (fVar47 <= in_stack_00000108) {
        FUN_037a1530(fStack0000000000000088);
        bStack00000000000000d8 = 1;
        in_stack_000000b8 = 0;
        uStack00000000000000ac = 1;
        break;
      }
      if (*(int *)(unaff_x19 + 0x34c) == -1) {
        *(uint *)(unaff_x19 + 0x34c) = uVar24;
      }
      if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
        fVar52 = *(float *)(in_stack_000001e0 + 0xd0);
        if ((fVar52 < *(float *)(unaff_x19 + 0x15b0)) &&
           (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
          fVar49 = *(float *)(unaff_x19 + 0x15b0) +
                   ((in_stack_00000018._4_4_ - fVar47) / (float)(*(int *)(unaff_x19 + 0x340) + 1)) /
                   fStack0000000000000088;
          if (fVar49 <= fVar52) {
            fVar49 = fVar52;
          }
          goto LAB_03793b50;
        }
        fVar62 = *(float *)(unaff_x19 + 0x1594);
        fVar52 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
        if ((fVar62 < fVar52) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
        goto LAB_03793c60;
        fVar59 = *_fStack00000000000000d0;
        fVar52 = *(float *)(in_stack_000001e0 + 0xac);
        if ((fVar52 < fVar59) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
        goto LAB_03793bbc;
      }
      switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
      case 0:
      case 2:
      case 4:
        FUN_037a1530(fStack0000000000000088);
        break;
      case 1:
        iVar14 = FUN_020aa428(in_stack_00000078,
                              *(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                             );
        in_stack_00001688 = DAT_00d37868;
        if (iVar14 == 0) {
          in_stack_000000b8 = 0;
          in_stack_000001d0[0] = 0;
          in_stack_000001d0[1] = 0;
          in_stack_0000160c = 0xffffffff;
        }
        else {
          FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
          memcpy(&stack0x00000da0,&stack0x000016a0,0x398);
          iVar16 = FUN_03797154();
          in_stack_000000b8 = 0;
          iVar14 = *(int *)(unaff_x19 + 0x324) + -1;
          *(int *)(unaff_x19 + 0x324) = iVar14;
          in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
          in_stack_0000160c = iVar16 - 1;
          in_stack_00001688 = CONCAT44(0x2026,iVar14);
        }
        goto LAB_0378d260;
      case 3:
        in_stack_0000160c = FUN_03797154();
        in_stack_000000b8 = 0;
        goto LAB_037909d0;
      case 5:
        *(undefined1 *)(unaff_x19 + 0x37c) = 1;
        FUN_037a1530(fStack0000000000000088);
        *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
        *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
        *(undefined4 *)(unaff_x19 + 0x374) = 0;
        *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
        *(int *)(unaff_x19 + 0x350) = *(int *)(unaff_x19 + 0x350) + 1;
        break;
      case 6:
        in_stack_000000b8 = 0;
        uVar23 = uVar24;
LAB_037909d0:
        in_stack_00001688 = CONCAT44(3,uVar23);
        goto LAB_0378d260;
      default:
        in_stack_000000b8 = 0;
        uVar23 = uVar24;
        goto LAB_0378f1e0;
      }
      in_stack_000000b8 = 0;
LAB_0379053c:
      bStack00000000000000d8 = 1;
      uStack00000000000000ac = 1;
      break;
    case 3:
      in_stack_0000160c = FUN_03797154();
      in_stack_00001688 = CONCAT44((int)((ulong)in_stack_00001688 >> 0x20),uVar23);
      break;
    case 5:
      if (uVar23 == 0 || (int)in_stack_0000160c < 0) {
        *in_stack_000001d0 = 0;
        in_stack_0000160c = 0xffffffff;
        in_stack_00001688 = uVar56;
      }
      else {
        fVar49 = *(float *)(unaff_x19 + 0x338);
        in_stack_0000160c = FUN_03797154();
        if (in_stack_00000108 < fVar49 - fVar47) goto LAB_0378f7e8;
        *(undefined4 *)(unaff_x19 + 0x328) = *(undefined4 *)(unaff_x19 + 0x324);
        *(undefined8 *)(unaff_x19 + 0x338) = _uStack0000000000000090;
        *(int *)(unaff_x19 + 0x340) = *(int *)(unaff_x19 + 0x340) + 1;
        *(undefined1 *)(unaff_x19 + 0x37c) = 1;
        *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
        *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
        *(undefined4 *)(unaff_x19 + 0x374) = 0;
        *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
        *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
        *(int *)(unaff_x19 + 0x350) = *(int *)(unaff_x19 + 0x350) + 1;
      }
      break;
    case 6:
      in_stack_0000160c = FUN_03797154();
      in_stack_00001688 = CONCAT44(3,uVar23);
    }
LAB_0378d260:
    in_stack_0000160c = in_stack_0000160c + 1;
    lVar26 = *(long *)(unaff_x19 + 0x20);
    if (lVar26 == 0) goto LAB_03793c9c;
    if ((int)in_stack_0000160c < (int)*(uint *)(lVar26 + 0x18)) {
      if (*(uint *)(lVar26 + 0x18) <= in_stack_0000160c) goto thunk_FUN_01ab6c44;
      uVar13 = *(uint *)(lVar26 + (long)(int)in_stack_0000160c * 0x10 + 0x24);
      if (uVar13 == 0) goto LAB_03790fec;
      if (5 < in_stack_000001d8._4_4_) {
        uVar56 = FUN_0278d4e8(&stack0x0000169c,0);
        uVar58 = FUN_0276793c(&stack0x0000160c,0);
        uVar56 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar56,
                              *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar58,0);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*unaff_x28);
        }
        FUN_0367ae18(uVar56,0);
        in_stack_00001688 = CONCAT44(3,*in_stack_000001d0);
      }
      in_stack_0000169c = uVar13;
      if (uVar13 == 0x1a) goto LAB_0378d260;
      if ((uVar13 == 0x3c) && (*(char *)(in_stack_000001e0 + 0xb5) != '\0')) {
        unaff_x24[0] = '\x01';
        unaff_x24[1] = '\x01';
        uVar17 = FUN_037974c0();
        if (((uVar17 & 1) != 0) && (in_stack_0000160c = in_stack_000015dc, *unaff_x24 == '\x01'))
        goto LAB_0378d260;
      }
      else {
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
        lVar26 = lVar26 + (long)(int)*in_stack_000001d0 * unaff_x27;
        *unaff_x24 = *(char *)(lVar26 + 0x28);
        *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar26 + 0x60);
        *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(lVar26 + 0x40);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001c8);
      }
      lVar26 = *in_stack_000001e8;
      if (lVar26 == 0) goto LAB_03793c9c;
      uVar13 = *(uint *)(unaff_x19 + 0x324);
      if (*(uint *)(lVar26 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
      lVar40 = (long)(int)uVar13;
      uVar44 = *(undefined4 *)(unaff_x19 + 0x78);
      bVar11 = *(byte *)(lVar26 + lVar40 * unaff_x27 + 100);
      unaff_w20 = (uint)bVar11;
      unaff_x24[1] = '\0';
      if ((uint)in_stack_00001688 == uVar13) {
        in_stack_0000169c = (uint)((ulong)in_stack_00001688 >> 0x20);
        unaff_w23 = 1;
        *unaff_x24 = '\x01';
        if (in_stack_0000169c == 0x2026) {
          *(undefined8 *)(lVar26 + lVar40 * unaff_x27 + 0x30) = *(undefined8 *)(unaff_x19 + 0x1a00);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar26 = *in_stack_000001e8;
          if (lVar26 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
          lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
          *(undefined1 *)(lVar26 + 0x28) = 1;
          *(undefined8 *)(lVar26 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1a08);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar26 = *in_stack_000001e8;
          if (lVar26 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
          *(undefined8 *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x58) =
               *(undefined8 *)(unaff_x19 + 0x1a10);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar26 = *in_stack_000001e8;
          if (lVar26 == 0) goto LAB_03793c9c;
          uVar13 = *in_stack_000001d0;
          if (*(uint *)(lVar26 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
          unaff_w23 = 1;
          *(undefined4 *)(lVar26 + (long)(int)uVar13 * unaff_x27 + 0x60) =
               *(undefined4 *)(unaff_x19 + 0x1a18);
          *(undefined1 *)
           (*(long *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__ +
                     0xb8) + 8) = 1;
          in_stack_00001688 = CONCAT44(3,uVar13 + 1);
        }
        else if (in_stack_0000169c == 3) {
          if ((*in_stack_000001c8 == 0) ||
             (lVar32 = FUN_03779b3c(*in_stack_000001c8,0), lVar32 == 0)) goto LAB_03793c9c;
          FUN_0219b634(lVar32,&stack0x00000978,&stack0x000016a0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_List<IIdleAutoDespawn>>__ctor__
                      );
          if (*(uint *)(lVar26 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
          *(undefined8 *)(lVar26 + lVar40 * unaff_x27 + 0x30) = in_stack_000016a0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          unaff_w23 = 1;
          *(undefined1 *)
           (*(long *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__ +
                     0xb8) + 8) = 1;
          uVar13 = *in_stack_000001d0;
        }
      }
      else {
        unaff_w23 = 0;
      }
      if (((int)uVar13 < *(int *)(in_stack_000001e0 + 0xe4)) && (in_stack_0000169c != 3)) {
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar26 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        lVar26 = lVar26 + (long)(int)uVar13 * (long)iVar15;
        *(undefined1 *)(lVar26 + 0x1a0) = 0;
        *(undefined2 *)(lVar26 + 0x20) = 0x200b;
        *(undefined4 *)(lVar26 + 0x6c) = 0;
        *in_stack_000001d0 = uVar13 + 1;
        goto LAB_0378d260;
      }
      cVar22 = *unaff_x24;
      if (cVar22 == '\x01') {
        uVar13 = *(uint *)(unaff_x19 + 0x124);
        if ((uVar13 >> 4 & 1) == 0) {
          if ((uVar13 >> 3 & 1) == 0) {
            fStack000000000000017c = 1.0;
            if ((uVar13 >> 5 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar17 = FUN_026b812c(in_stack_0000169c,0);
              if ((uVar17 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar13 = FUN_026b8410(in_stack_0000169c,0);
                in_stack_0000169c = uVar13 & 0xffff;
                fStack000000000000017c = fStack000000000000002c;
              }
            }
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar17 = FUN_026b8070(in_stack_0000169c,0);
            fStack000000000000017c = 1.0;
            if ((uVar17 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar13 = FUN_026b8594(in_stack_0000169c,0);
              goto LAB_0378d3d0;
            }
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_026b812c(in_stack_0000169c,0);
          fStack000000000000017c = 1.0;
          if ((uVar17 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar13 = FUN_026b8410(in_stack_0000169c,0);
LAB_0378d3d0:
            fStack000000000000017c = 1.0;
            in_stack_0000169c = uVar13 & 0xffff;
          }
        }
        cVar22 = *unaff_x24;
      }
      else {
        fStack000000000000017c = 1.0;
      }
      if (cVar22 != '\x01') {
        if (cVar22 != '\x02') {
          lVar26 = *in_stack_000001e8;
          unaff_s11 = 0.0;
          fVar49 = unaff_s13;
          if (in_stack_0000169c == 3 || in_stack_0000169c == 0xad) {
            fVar49 = unaff_s11;
          }
          if (lVar26 == 0) goto LAB_03793c9c;
          uVar13 = *in_stack_000001d0;
          fVar46 = 0.0;
          fStack0000000000000170 = 0.0;
          goto LAB_0378dba8;
        }
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
        plVar42 = *(long **)(lVar26 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x30);
        if (plVar42 == (long *)0x0) goto LAB_03793c9c;
        bVar12 = *(byte *)(*(long *)
                            Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__ +
                          0x130);
        if ((*(byte *)(*plVar42 + 0x130) < bVar12) ||
           (*(long *)(*(long *)(*plVar42 + 200) + (ulong)bVar12 * 8 + -8) !=
            *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar42);
        }
        plVar18 = (long *)FUN_03783144(plVar42,0);
        if (plVar18 == (long *)0x0) {
          plVar18 = (long *)0x0;
          *in_stack_00000160 = 0;
        }
        else {
          lVar26 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Material>_Add__;
          bVar12 = *(byte *)(lVar26 + 0x130);
          if (*(byte *)(*plVar18 + 0x130) < bVar12) {
            plVar31 = (long *)0x0;
          }
          else {
            plVar31 = plVar18;
            if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar12 * 8 + -8) != lVar26) {
              plVar31 = (long *)0x0;
            }
          }
          *in_stack_00000160 = (long)plVar31;
          if (*(byte *)(*plVar18 + 0x130) < bVar12) {
            plVar18 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar12 * 8 + -8) != lVar26) {
            plVar18 = (long *)0x0;
          }
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000160,plVar18)
        ;
        iVar14 = FUN_0377acf0(plVar42,0);
        *(int *)(unaff_x19 + 0x157c) = iVar14;
        if (in_stack_0000169c == 0x3c) {
          in_stack_0000169c = iVar14 + 0xe000;
        }
        else {
          uVar45 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
          *(undefined4 *)(unaff_x19 + 0x1580) = uVar45;
        }
        if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
        fVar49 = *(float *)(unaff_x19 + 0xf4);
        FUN_03779650(&stack0x000016a0,*(long *)(unaff_x19 + 0x68),0);
        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
        iVar14 = FUN_03776950(&stack0x00001610,0);
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        FUN_03779650(&stack0x000016a0,*in_stack_000001c8,0);
        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
        fVar46 = (float)FUN_03776960(&stack0x00001610,0);
        fVar53 = in_stack_00000150;
        if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
          fVar53 = 1.0;
        }
        if (*in_stack_00000160 == 0) goto LAB_03793c9c;
        fVar53 = (fVar49 / (float)iVar14) * fVar46 * fVar53;
        iVar14 = FUN_03776950(*in_stack_00000160 + 0x48,0);
        fVar49 = *(float *)(unaff_x19 + 0xf4);
        if (iVar14 < 1) {
          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
          iVar14 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
          fVar48 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
          fStack0000000000000170 = in_stack_00000150;
          if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
            fStack0000000000000170 = 1.0;
          }
          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
          fVar52 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
          if (plVar42[4] == 0) goto LAB_03793c9c;
          FUN_03776e6c(&stack0x000016a0,plVar42[4],0);
          fVar59 = (float)FUN_03776c9c(&stack0x000015c0,0);
          if (plVar42[4] == 0) goto LAB_03793c9c;
          fVar62 = *(float *)((long)plVar42 + 0x2c);
          fVar47 = (float)FUN_03776ea8(plVar42[4],0);
          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
          fVar46 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
          fVar57 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
          fVar60 = *(float *)(unaff_x19 + 0xf0);
          fVar55 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
          if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
          unaff_s11 = fVar53 * fVar57 * fVar60 * fVar55;
          fStack0000000000000170 = (fVar49 / (float)iVar14) * fVar48 * fStack0000000000000170;
          unaff_s13 = fStack0000000000000170 * (fVar52 / fVar59) * fVar62 * fVar47;
          fStack0000000000000170 = fStack0000000000000170 / unaff_s13;
          fVar46 = fStack0000000000000170 * fVar46;
          fVar49 = (float)FUN_037769c0(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
          fStack0000000000000170 = fStack0000000000000170 * fVar49;
        }
        else {
          if (*in_stack_00000160 == 0) goto LAB_03793c9c;
          iVar14 = FUN_03776950(*in_stack_00000160 + 0x48,0);
          if (*in_stack_00000160 == 0) goto LAB_03793c9c;
          fVar48 = (float)FUN_03776960(*in_stack_00000160 + 0x48,0);
          if (plVar42[4] == 0) goto LAB_03793c9c;
          fVar59 = *(float *)((long)plVar42 + 0x2c);
          fVar52 = in_stack_00000150;
          if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
            fVar52 = 1.0;
          }
          fVar62 = (float)FUN_03776ea8(plVar42[4],0);
          if (*in_stack_00000160 == 0) goto LAB_03793c9c;
          fVar46 = (float)FUN_03776980(*in_stack_00000160 + 0x48,0);
          if (*in_stack_00000160 == 0) goto LAB_03793c9c;
          fVar47 = (float)FUN_037769b0(*in_stack_00000160 + 0x48,0);
          if (*in_stack_00000160 == 0) goto LAB_03793c9c;
          fVar55 = *(float *)(unaff_x19 + 0xf0);
          fVar57 = (float)FUN_03776960(*in_stack_00000160 + 0x48,0);
          if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03793c9c;
          unaff_s11 = fVar53 * fVar47 * fVar55 * fVar57;
          unaff_s13 = (fVar49 / (float)iVar14) * fVar48 * fVar52 * fVar59 * fVar62;
          fStack0000000000000170 = (float)FUN_037769c0(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
        }
        *in_stack_000001a8 = (long)plVar42;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001a8,plVar42)
        ;
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
        lVar26 = lVar26 + (long)(int)*in_stack_000001d0 * unaff_x27;
        *(undefined1 *)(lVar26 + 0x28) = 2;
        *(float *)(lVar26 + 0x16c) = unaff_s13;
        *(long *)(lVar26 + 0x48) = *in_stack_00000160;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
        *(long *)(lVar26 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x40) = *in_stack_000001c8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto LAB_03793c9c;
        uVar13 = *in_stack_000001d0;
        if (*(uint *)(lVar26 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        *(undefined4 *)(lVar26 + (long)(int)uVar13 * unaff_x27 + 0x60) =
             *(undefined4 *)(unaff_x19 + 0x78);
        *(undefined4 *)(unaff_x19 + 0x78) = uVar44;
        in_stack_000001a0 = 0.0;
        goto LAB_0378db90;
      }
      lVar26 = *in_stack_000001e8;
      if (lVar26 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
      *in_stack_000001a8 = *(long *)(lVar26 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x30);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001a8);
      if (*in_stack_000001a8 != 0) goto code_r0x0378d4bc;
      goto LAB_0378d260;
    }
LAB_03790fec:
    if ((((*(char *)(in_stack_000001e0 + 0xa8) != '\0') &&
         (DAT_00d389f8 < *(float *)(unaff_x19 + 0x1598) - *(float *)(unaff_x19 + 0x159c))) &&
        (fVar49 = *_fStack00000000000000d0, fVar49 < *(float *)(in_stack_000001e0 + 0xb0))) &&
       (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
      fVar53 = *(float *)(in_stack_000001e0 + 0x108);
      if (*(float *)(unaff_x19 + 0x1594) < fVar53 / 100.0) {
        *(undefined4 *)(unaff_x19 + 0x1594) = 0;
      }
      fVar46 = (*(float *)(unaff_x19 + 0x1598) - fVar49) * 0.5;
      if (fVar46 <= DAT_00d38b84) {
        fVar46 = DAT_00d38b84;
      }
      *(float *)(unaff_x19 + 0x159c) = fVar49;
      fVar49 = (fVar49 + fVar46) * 20.0 + 0.5;
      fVar46 = DAT_00d38e60;
      if (fVar49 != INFINITY) {
        fVar46 = (float)(int)fVar49 / 20.0;
      }
      if (fVar53 <= fVar46) {
        fVar46 = fVar53;
      }
      goto LAB_037910ac;
    }
    unaff_x24[0x30] = '\x01';
    if (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)) {
      uVar56 = FUN_0276793c(in_stack_00000070,0);
      uVar58 = FUN_0277fa90(_fStack00000000000000d0,0);
      uVar56 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar56,
                            *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar58,0);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*unaff_x28);
      }
      FUN_0367a6ec(uVar56,0);
    }
    plVar18 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
    plVar42 = (long *)PTR_DAT_03cbded8;
    if ((*in_stack_000001d0 == 0) || ((*in_stack_000001d0 == 1 && (in_stack_0000169c == 3)))) {
      FUN_0379e288(1,in_stack_000001c0,0);
      goto LAB_0378c81c;
    }
    lVar26 = *(long *)(in_stack_000001c0 + 0x58);
    if (lVar26 == 0) goto LAB_03793c9c;
    uVar13 = *(uint *)(unaff_x19 + 0x78);
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__ + 0xe0) ==
        0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar26 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
    FUN_03785b74(lVar26 + (long)(int)uVar13 * 0x50 + 0x20,0,0);
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
    }
    iVar15 = *(int *)(in_stack_000001e0 + 0x70);
    fStack0000000000000158 = **(float **)(*plVar42 + 0xb8);
    _in_stack_00000148 = *(undefined8 *)(*(float **)(*plVar42 + 0xb8) + 1);
    lVar26 = *(long *)(unaff_x19 + 0x50);
    uStack0000000000000118 = _in_stack_00000148;
    fStack0000000000000120 = fStack0000000000000158;
    if (iVar15 < 0x421) {
      if (iVar15 < 0x205) {
        if (iVar15 < 0x109) {
          if ((iVar15 - 0x101U < 8) && ((1 << (ulong)(iVar15 - 0x101U & 0x1f) & 0x8bU) != 0)) {
LAB_0379144c:
            if (lVar26 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar26 + 0x18) < 2) goto thunk_FUN_01ab6c44;
            uVar56 = *(undefined8 *)(lVar26 + 0x30);
            if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
              lVar40 = *in_stack_00000050;
              if (lVar40 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar40 + 0x18) <= uStack000000000000005c) goto thunk_FUN_01ab6c44;
              fVar49 = *(float *)(lVar40 + (long)(int)uStack000000000000005c * 0x14 + 0x28);
            }
            else {
              fVar49 = *(float *)(unaff_x19 + 0x374);
            }
            fStack0000000000000120 = fStack0000000000000058 + 0.0 + *(float *)(lVar26 + 0x2c);
            fStack0000000000000038 = (0.0 - fVar49) - fStack000000000000003c;
            goto LAB_037917ec;
          }
        }
        else if (iVar15 < 0x121) {
          if ((iVar15 == 0x110) || (iVar15 == 0x120)) goto LAB_0379144c;
        }
        else if ((iVar15 - 0x201U < 4) && (iVar15 - 0x201U != 2)) goto LAB_037916dc;
      }
      else {
        if (iVar15 < 0x403) {
          if (iVar15 < 0x211) {
            if ((iVar15 == 0x208) || (iVar15 == 0x210)) goto LAB_037916dc;
            goto LAB_037917fc;
          }
          if (iVar15 != 0x220) {
            if (iVar15 - 0x401U < 2) goto LAB_03791588;
            goto LAB_037917fc;
          }
LAB_037916dc:
          if (lVar26 == 0) goto LAB_03793c9c;
          if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0))
          goto thunk_FUN_01ab6c44;
          fStack0000000000000120 = (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
          uVar56 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar26 + 0x24) +
                            (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5);
          if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
            lVar26 = *in_stack_00000050;
            if (lVar26 == 0) goto LAB_03793c9c;
            if (uStack000000000000005c < *(uint *)(lVar26 + 0x18)) {
              lVar26 = lVar26 + (long)(int)uStack000000000000005c * 0x14;
              fStack0000000000000120 = fStack0000000000000058 + 0.0 + fStack0000000000000120;
              fStack0000000000000038 =
                   ((fStack000000000000003c + *(float *)(lVar26 + 0x28) + *(float *)(lVar26 + 0x30))
                   - fStack0000000000000038) * -0.5 + 0.0;
              goto LAB_037917ec;
            }
            goto thunk_FUN_01ab6c44;
          }
          fStack0000000000000120 = fStack0000000000000058 + 0.0 + fStack0000000000000120;
          fStack0000000000000038 =
               ((fStack000000000000003c + *(float *)(unaff_x19 + 0x374) + in_stack_00001698) -
               fStack0000000000000038) * -0.5 + 0.0;
        }
        else {
          if (iVar15 < 0x409) {
            if (iVar15 != 0x404) {
              bVar8 = iVar15 == 0x408;
              goto LAB_03791574;
            }
          }
          else if (iVar15 != 0x410) {
            bVar8 = iVar15 == 0x420;
LAB_03791574:
            if (!bVar8) goto LAB_037917fc;
          }
LAB_03791588:
          if (lVar26 == 0) goto LAB_03793c9c;
          if (*(int *)(lVar26 + 0x18) == 0) goto thunk_FUN_01ab6c44;
          uVar56 = *(undefined8 *)(lVar26 + 0x24);
          if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
            lVar40 = *in_stack_00000050;
            if (lVar40 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar40 + 0x18) <= uStack000000000000005c) goto thunk_FUN_01ab6c44;
            in_stack_00001698 = *(float *)(lVar40 + (long)(int)uStack000000000000005c * 0x14 + 0x30)
            ;
          }
          fStack0000000000000120 = fStack0000000000000058 + 0.0 + *(float *)(lVar26 + 0x20);
          fStack0000000000000038 = fStack0000000000000038 + (0.0 - in_stack_00001698);
        }
LAB_037917ec:
        uStack0000000000000118 =
             CONCAT44((float)((ulong)uVar56 >> 0x20) + 0.0,(float)uVar56 + fStack0000000000000038);
      }
    }
    else if (iVar15 < 0x1005) {
      if (iVar15 < 0x809) {
        if ((iVar15 - 0x801U < 8) && ((1 << (ulong)(iVar15 - 0x801U & 0x1f) & 0x8bU) != 0)) {
LAB_037913b0:
          if (lVar26 == 0) goto LAB_03793c9c;
          if ((*(int *)(lVar26 + 0x18) != 1) && (*(int *)(lVar26 + 0x18) != 0)) {
            uStack0000000000000118 =
                 CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5 + 0.0,
                          ((float)*(undefined8 *)(lVar26 + 0x24) +
                          (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5 + 0.0);
            fStack0000000000000120 =
                 fStack0000000000000058 + 0.0 +
                 (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
            goto LAB_037917fc;
          }
          goto thunk_FUN_01ab6c44;
        }
      }
      else if (iVar15 < 0x821) {
        if ((iVar15 == 0x810) || (iVar15 == 0x820)) goto LAB_037913b0;
      }
      else if ((iVar15 - 0x1001U < 4) && (iVar15 - 0x1001U != 2)) goto LAB_03791644;
    }
    else if (iVar15 < 0x2003) {
      if (iVar15 < 0x1011) {
        if ((iVar15 == 0x1008) || (iVar15 == 0x1010)) goto LAB_03791644;
      }
      else {
        if (iVar15 == 0x1020) {
LAB_03791644:
          if (lVar26 == 0) goto LAB_03793c9c;
          if ((*(int *)(lVar26 + 0x18) != 1) && (*(int *)(lVar26 + 0x18) != 0)) {
            uVar56 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar26 + 0x24) +
                              (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5);
            fStack0000000000000120 =
                 fStack0000000000000058 + 0.0 +
                 (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
            fStack0000000000000038 =
                 0.0 - ((fStack000000000000003c + *(float *)(unaff_x19 + 0x36c) +
                        *(float *)(unaff_x19 + 0x364)) - fStack0000000000000038) * 0.5;
            goto LAB_037917ec;
          }
          goto thunk_FUN_01ab6c44;
        }
        if (iVar15 - 0x2001U < 2) goto LAB_037914ec;
      }
    }
    else {
      if (iVar15 < 0x2009) {
        if (iVar15 != 0x2004) {
          iVar14 = 0x2008;
          goto LAB_037914d4;
        }
      }
      else if (iVar15 != 0x2010) {
        iVar14 = 0x2020;
LAB_037914d4:
        if (iVar15 != iVar14) goto LAB_037917fc;
      }
LAB_037914ec:
      if (lVar26 == 0) goto LAB_03793c9c;
      if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)) goto thunk_FUN_01ab6c44;
      uStack0000000000000118 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5 + 0.0,
                    ((float)*(undefined8 *)(lVar26 + 0x24) + (float)*(undefined8 *)(lVar26 + 0x30))
                    * 0.5 + (0.0 - ((*(float *)(unaff_x19 + 0x370) - fStack000000000000003c) -
                                   fStack0000000000000038) * 0.5));
      fStack0000000000000120 =
           fStack0000000000000058 + 0.0 +
           (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
    }
LAB_037917fc:
    uVar44 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ + 0xe0)
        == 0) {
      thunk_FUN_01a58e78(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__
                        );
    }
    FUN_037a1df8(0);
    FUN_037a1fc8(&stack0x00001670,0x4000ffff,0);
    fVar49 = DAT_00d38d70;
    uVar13 = *in_stack_000001d0;
    if ((int)uVar13 < 1) {
      iVar15 = 0;
      iStack0000000000000138 = 0;
      goto LAB_03793a5c;
    }
    lVar26 = *in_stack_000001e8;
    if (lVar26 == 0) goto LAB_03793c9c;
    fStack0000000000000174 = 0.0;
    _bStack00000000000000d8 = 0.0;
    fStack00000000000000a8 = 0.0;
    plVar18 = (long *)(in_stack_000001c0 + 0x38);
    in_stack_000000e8._4_4_ = fStack0000000000000128;
    fStack00000000000000f0 = 0.0;
    in_stack_000000a0._4_4_ = 0.0;
    uVar30 = (ulong)&stack0x00001670 | 4;
    bVar8 = false;
    fVar53 = 0.0;
    fVar46 = 0.0;
    uVar17 = (ulong)&stack0x000009f0 | 4;
    bVar7 = false;
    bVar9 = false;
    iStack0000000000000138 = 0;
    uStack0000000000000090 = 0;
    _fStack0000000000000168 = 0;
    iStack00000000000000c0 = 0;
    iStack0000000000000178 = 0;
    in_stack_000001a8 = (long *)0x2fc;
    fStack000000000000012c = fStack0000000000000128;
    fStack0000000000000130 = in_stack_00000140._4_4_;
    fStack00000000000000c8 = in_stack_00000140._4_4_;
    uStack00000000000000cc = uStack0000000000000124;
    fStack00000000000000d0 = fStack0000000000000128;
    uStack00000000000000dc = uStack0000000000000124;
    fStack00000000000000e0 = in_stack_00000140._4_4_;
    fStack000000000000015c = DAT_00d38d70;
    uVar29 = 0;
    uVar23 = 1;
    goto LAB_0379194c;
  }
  if (((in_stack_0000169c & 0xfffffffe) == 10) && (*(int *)(in_stack_000001e0 + 0x74) == 6)) {
    fVar49 = 0.0;
    if ((0.0 < fVar48) && (fVar49 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
      fVar49 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
    }
    if (in_stack_00000108 <
        (*(float *)(unaff_x19 + 0x374) - (*(float *)(unaff_x19 + 0x33c) - fVar48)) + fVar49) {
      if (*(int *)(unaff_x19 + 0x34c) == -1) {
        *(uint *)(unaff_x19 + 0x34c) = uVar23;
      }
      in_stack_0000160c = FUN_03797154();
LAB_0378f7e8:
      in_stack_00001688 = CONCAT44(3,uVar23);
      goto LAB_0378d260;
    }
  }
  if ((((in_stack_0000169c - 0x2007 < 0x23) &&
       ((1L << ((ulong)(in_stack_0000169c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
      (in_stack_0000169c - 10 < 2)) || (in_stack_0000169c == 0xa0)) {
LAB_0378f700:
    if ((in_stack_0000169c == 0xad) || (in_stack_0000169c == 0x200b)) goto LAB_0378f884;
    if (in_stack_0000169c != 0x2060) {
      lVar26 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar26 != 0) {
        if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar26 + 0x18)) {
          lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
          *(int *)(lVar26 + 0x2c) = *(int *)(lVar26 + 0x2c) + 1;
          *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
          goto LAB_0378f760;
        }
        goto thunk_FUN_01ab6c44;
      }
      goto LAB_03793c9c;
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar17 = FUN_026b97f8(in_stack_0000169c,0);
    if ((uVar17 & 1) != 0) goto LAB_0378f700;
  }
LAB_0378f760:
  if (in_stack_0000169c == 0xa0) {
    lVar26 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar26 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
    lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
    *(int *)(lVar26 + 0x20) = *(int *)(lVar26 + 0x20) + 1;
  }
LAB_0378f884:
  bVar8 = *(int *)(in_stack_000001e0 + 0x74) == 1;
  if (bVar8 && unaff_w23 == 1) {
    bVar8 = in_stack_0000169c == 0x2d;
  }
  if (bVar8) {
    if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
    fVar49 = *(float *)(unaff_x19 + 0xf4);
    iVar14 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
    if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
    fVar53 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
    lVar26 = *(long *)(unaff_x19 + 0x1a00);
    fVar46 = in_stack_00000150;
    if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
      fVar46 = 1.0;
    }
    if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_03793c9c;
    fVar52 = *(float *)(unaff_x19 + 0xf0);
    fVar62 = *(float *)(lVar26 + 0x2c);
    fVar48 = (float)FUN_03776ea8(*(long *)(lVar26 + 0x20),0);
    fVar59 = *_iStack0000000000000138;
    fVar48 = fVar52 * (fVar49 / (float)iVar14) * fVar53 * fVar46 * fVar62 * fVar48;
    fVar49 = *_fStack0000000000000130;
    if ((in_stack_0000169c == 10) && (*(int *)(unaff_x19 + 0x324) != *(int *)(unaff_x19 + 0x328))) {
      lVar26 = *in_stack_000001e8;
      if (lVar26 == 0) goto LAB_03793c9c;
      uVar23 = *(int *)(unaff_x19 + 0x324) - 1;
      if (*(uint *)(lVar26 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
      fVar46 = *(float *)(lVar26 + (long)(int)uVar23 * (long)iVar15 + 0x68);
      iVar14 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
      fVar52 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
      lVar26 = *(long *)(unaff_x19 + 0x1a00);
      fVar53 = in_stack_00000150;
      if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
        fVar53 = 1.0;
      }
      if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_03793c9c;
      fVar62 = *(float *)(unaff_x19 + 0xf0);
      fVar47 = *(float *)(lVar26 + 0x2c);
      fVar48 = (float)FUN_03776ea8(*(long *)(lVar26 + 0x20),0);
      lVar26 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar26 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
      lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      fVar59 = *(float *)(lVar26 + 100);
      fVar49 = *(float *)(lVar26 + 0x68);
      fVar48 = fVar62 * (fVar46 / (float)iVar14) * fVar52 * fVar53 * fVar47 * fVar48;
    }
    fVar53 = *(float *)(unaff_x19 + 0x2f4);
    fVar46 = 0.0;
    if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
      if ((*(long *)(unaff_x19 + 0x1a00) == 0) ||
         (lVar26 = *(long *)(*(long *)(unaff_x19 + 0x1a00) + 0x20), lVar26 == 0)) goto LAB_03793c9c;
      FUN_03776e6c(&stack0x000016a0,lVar26,0);
      fVar46 = (float)FUN_03776cb4(&stack0x000015c0,0);
    }
    fVar52 = *(float *)(unaff_x19 + 0x35c);
    fVar49 = (fStack000000000000012c - fVar59) - fVar49;
    bVar8 = true;
    if ((fVar52 <= fVar49) && (bVar8 = false, !NAN(fVar52))) {
      bVar8 = fVar52 == -1.0;
    }
    if (!bVar8) {
      fVar49 = fVar52;
    }
    fVar52 = 1.0;
    if (uVar37 != 0) {
      fVar52 = DAT_00d38acc;
    }
    if (ABS(fVar53) + fVar48 * fVar46 * (1.0 - *(float *)(unaff_x19 + 0x1594)) < fVar52 * fVar49) {
      FUN_03796df8();
      memcpy(&stack0x000005c8,in_stack_00000068,0x398);
      FUN_020ab0d8(in_stack_00000078,&stack0x000005c8,
                   *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__
                  );
    }
  }
  lVar26 = *in_stack_000001e8;
  if (lVar26 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
  uVar23 = *(uint *)(unaff_x19 + 0x340);
  lVar26 = lVar26 + (long)(int)*in_stack_000001d0 * unaff_x27;
  *(uint *)(lVar26 + 0x6c) = uVar23;
  *(undefined4 *)(lVar26 + 0x70) = *(undefined4 *)(unaff_x19 + 0x350);
  if (((unaff_w23 & 1) == 0) &&
     ((0xd < in_stack_0000169c || ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0x2c00U) == 0)))) {
    lVar26 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar26 == 0) goto LAB_03793c9c;
LAB_0378fbcc:
    if (*(uint *)(lVar26 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
    *(undefined4 *)(lVar26 + (long)(int)uVar23 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158);
  }
  else {
    lVar26 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar26 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar26 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
    if (*(int *)(lVar26 + (long)(int)uVar23 * 0x60 + 0x24) == 1) goto LAB_0378fbcc;
  }
  if (in_stack_0000169c != 0x200b) {
    if (in_stack_0000169c == 9) {
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      fVar49 = (float)FUN_03776a48(*in_stack_000001c8 + 0xb0,0);
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      bVar11 = FUN_03779d4c(*in_stack_000001c8,0);
      fVar46 = *(float *)(unaff_x19 + 0x2f4);
      fVar53 = unaff_s13 * fVar49 * (float)bVar11;
      fVar49 = fVar53 * (float)(int)(fVar46 / fVar53);
      if (fVar49 <= fVar46) {
        fVar49 = fVar46 + fVar53;
      }
      *(float *)(unaff_x19 + 0x2f4) = fVar49;
    }
    else {
      fVar49 = *(float *)(unaff_x19 + 0x2f0);
      if (fVar49 == 0.0) {
        fVar46 = *(float *)(unaff_x19 + 0x2f4);
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          fVar49 = (float)FUN_03776cb4(&stack0x000015f0,0);
          fVar48 = *(float *)(unaff_x19 + 0x19a8);
          fVar53 = (float)FUN_03778e7c(&stack0x000015e0,0);
          if (*(long *)(unaff_x19 + 0x68) != 0) {
            fVar52 = (float)FUN_03779d0c(*(long *)(unaff_x19 + 0x68),0);
            fVar46 = fVar46 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                              (*(float *)(unaff_x19 + 0x2ec) +
                              unaff_s13 * (fVar49 * fVar48 + fVar53) +
                              fStack0000000000000158 *
                              (in_stack_00000148 + in_stack_00000188 + fVar52));
            goto UnityEngine_UIElements_WheelEvent___ctor;
          }
          goto LAB_03793c9c;
        }
        fVar49 = (float)FUN_03778e7c(&stack0x000015e0,0);
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar53 = (float)FUN_03779d0c(*in_stack_000001c8,0);
        fVar46 = fVar46 - (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                          (*(float *)(unaff_x19 + 0x2ec) +
                          unaff_s13 * fVar49 +
                          fStack0000000000000158 * (in_stack_00000148 + in_stack_00000188 + fVar53))
        ;
        *(float *)(unaff_x19 + 0x2f4) = fVar46;
        if ((unaff_w25 == 0) && (in_stack_0000169c != 0x200b)) goto FUN_0378fd94;
        fVar46 = fVar46 - fStack0000000000000158 * *(float *)(in_stack_000001e0 + 0xc4);
      }
      else {
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar46 = *(float *)(unaff_x19 + 0x2f4);
        fVar53 = (float)FUN_03779d0c(*in_stack_000001c8,0);
        fVar46 = fVar46 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                          (*(float *)(unaff_x19 + 0x2ec) +
                          (fVar49 - in_stack_000000e8._4_4_) +
                          fStack0000000000000158 * (in_stack_00000188 + fVar53));
UnityEngine_UIElements_WheelEvent___ctor:
        *(float *)(unaff_x19 + 0x2f4) = fVar46;
        if ((unaff_w25 == 0) && (in_stack_0000169c != 0x200b)) goto FUN_0378fd94;
        fVar46 = fVar46 + fStack0000000000000158 * *(float *)(in_stack_000001e0 + 0xc4);
      }
      *(float *)(unaff_x19 + 0x2f4) = fVar46;
    }
  }
FUN_0378fd94:
  lVar26 = *in_stack_000001e8;
  if (lVar26 == 0) goto LAB_03793c9c;
  uVar23 = *in_stack_000001d0;
  if (*(uint *)(lVar26 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar26 + (long)(int)uVar23 * unaff_x27 + 0x164) =
       *(undefined4 *)(unaff_x19 + 0x2f4);
  if (in_stack_0000169c == 0xd) {
    *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
  }
  if ((*(int *)(in_stack_000001e0 + 0x74) == 5) &&
     (((0xd < in_stack_0000169c || ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0x2c00U) == 0)) &&
      (1 < in_stack_0000169c - 0x2028)))) {
    lVar26 = *in_stack_00000050;
    if (lVar26 == 0) goto LAB_03793c9c;
    uVar37 = *(uint *)(unaff_x19 + 0x350);
    if (*(int *)(lVar26 + 0x18) < (int)(uVar37 + 1)) {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff3814(in_stack_00000050,uVar37 + 1,1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_GetEnumerator__);
      lVar26 = *in_stack_00000050;
      if (lVar26 == 0) goto LAB_03793c9c;
      uVar37 = *(uint *)(unaff_x19 + 0x350);
    }
    if (*(uint *)(lVar26 + 0x18) <= uVar37) goto thunk_FUN_01ab6c44;
    lVar40 = lVar26 + (long)(int)uVar37 * 0x14;
    *(undefined4 *)(lVar40 + 0x28) = *(undefined4 *)(unaff_x19 + 0x19c8);
    fVar49 = *(float *)(unaff_x19 + 0x378);
    if (*(float *)(lVar40 + 0x30) <= *(float *)(unaff_x19 + 0x378)) {
      fVar49 = *(float *)(lVar40 + 0x30);
    }
    *(float *)(lVar40 + 0x30) = fVar49;
    if (*(char *)(unaff_x19 + 0x37c) != '\0') {
      *(undefined1 *)(unaff_x19 + 0x37c) = 0;
      *(undefined4 *)(lVar26 + (long)(int)uVar37 * 0x14 + 0x20) = *(undefined4 *)(unaff_x19 + 0x324)
      ;
    }
    uVar23 = *in_stack_000001d0;
    *(uint *)(lVar26 + (long)(int)uVar37 * 0x14 + 0x24) = uVar23;
  }
  if (((in_stack_0000169c < 0xc) && ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0xc08U) != 0)) ||
     ((in_stack_0000169c - 0x2028 < 2 ||
      (((unaff_w23 & in_stack_0000169c == 0x2d) != 0 || (uVar23 == uStack00000000000000dc)))))) {
    if (0.0 < *(float *)(unaff_x19 + 0x2e0)) {
      fVar49 = *(float *)(unaff_x19 + 0x338);
      fVar46 = *(float *)(unaff_x19 + 0x15ac);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar49 = fVar49 - fVar46;
      if (((fStack00000000000000a8 < ABS(fVar49)) && (*(char *)(unaff_x19 + 0x2e8) == '\0')) &&
         (*(char *)(unaff_x19 + 0x37c) != '\x01')) {
        uVar44 = *(undefined4 *)(unaff_x19 + 0x328);
        uVar45 = *(undefined4 *)(unaff_x19 + 0x324);
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_037a5574(fVar49,uVar44,uVar45,in_stack_000001c0,0);
        *(float *)(unaff_x19 + 0x378) = *(float *)(unaff_x19 + 0x378) - fVar49;
        *(float *)(unaff_x19 + 0x2e0) = fVar49 + *(float *)(unaff_x19 + 0x2e0);
        unaff_x28 = (long *)PTR_DAT_03cbe438;
        if (*(int *)(unaff_x19 + 0xad8) == *(int *)(unaff_x19 + 0x340)) {
          FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
          memcpy(in_stack_00000068,&stack0x000016a0,0x398);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000020,0);
          *(float *)(unaff_x19 + 0xaf0) = fVar49 + *(float *)(unaff_x19 + 0xaf0);
          *(float *)(unaff_x19 + 0xb24) = fVar49 + *(float *)(unaff_x19 + 0xb24);
          memcpy(&stack0x00000230,in_stack_00000068,0x398);
          FUN_020ab0d8(in_stack_00000078,&stack0x00000230,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__);
        }
      }
    }
    fVar46 = *(float *)(unaff_x19 + 0x2e0);
    *(undefined1 *)(unaff_x19 + 0x37c) = 0;
    fVar53 = *(float *)(unaff_x19 + 0x33c) - fVar46;
    fVar49 = *(float *)(unaff_x19 + 0x378);
    if (fVar53 <= *(float *)(unaff_x19 + 0x378)) {
      fVar49 = fVar53;
    }
    *(float *)(unaff_x19 + 0x378) = fVar49;
    fVar48 = *(float *)(unaff_x19 + 0x338);
    if (in_stack_00001694 == '\0') {
      in_stack_00001698 = fVar49;
    }
    if ((*(char *)(in_stack_000001e0 + 0xe8) != '\0') &&
       ((*(int *)(in_stack_000001e0 + 0xd8) <= (int)*in_stack_000001d0 ||
        (*(int *)(in_stack_000001e0 + 0xe0) <= *(int *)(unaff_x19 + 0x340))))) {
      in_stack_00001694 = '\x01';
    }
    lVar26 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar26 == 0) goto LAB_03793c9c;
    uVar23 = *(uint *)(unaff_x19 + 0x340);
    if (*(uint *)(lVar26 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
    iVar14 = *(int *)(unaff_x19 + 0x328);
    lVar40 = lVar26 + (long)(int)uVar23 * 0x60;
    *(int *)(lVar40 + 0x38) = iVar14;
    uVar37 = *(uint *)(unaff_x19 + 0x328);
    if (iVar14 <= (int)*(uint *)(unaff_x19 + 0x330)) {
      uVar37 = *(uint *)(unaff_x19 + 0x330);
    }
    *(uint *)(unaff_x19 + 0x330) = uVar37;
    *(uint *)(lVar40 + 0x3c) = uVar37;
    iVar1 = *(int *)(unaff_x19 + 0x324);
    *(int *)(unaff_x19 + 0x32c) = iVar1;
    *(int *)(lVar40 + 0x40) = iVar1;
    iVar16 = *(int *)(unaff_x19 + 0x330);
    if ((int)uVar37 <= *(int *)(unaff_x19 + 0x334)) {
      iVar16 = *(int *)(unaff_x19 + 0x334);
    }
    *(int *)(unaff_x19 + 0x334) = iVar16;
    *(int *)(lVar40 + 0x44) = iVar16;
    *(int *)(lVar40 + 0x24) = (iVar1 - iVar14) + 1;
    *(undefined4 *)(lVar40 + 0x28) = *(undefined4 *)(unaff_x19 + 0x344);
    *(undefined4 *)(lVar40 + 0x30) = *(undefined4 *)(unaff_x19 + 0x348);
    lVar40 = *in_stack_000001e8;
    if (lVar40 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar40 + 0x18) <= uVar37) goto thunk_FUN_01ab6c44;
    uVar44 = *(undefined4 *)(lVar40 + (long)(int)uVar37 * (long)iVar15 + 0x124);
    lVar26 = lVar26 + (long)(int)uVar23 * 0x60;
    *(float *)(lVar26 + 0x74) = fVar53;
    *(undefined4 *)(lVar26 + 0x70) = uVar44;
    lVar26 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar26 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
    lVar40 = *in_stack_000001e8;
    if (lVar40 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto thunk_FUN_01ab6c44;
    uVar44 = *(undefined4 *)(lVar40 + (long)(int)*(uint *)(unaff_x19 + 0x334) * unaff_x27 + 0x130);
    fVar48 = fVar48 - fVar46;
    lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
    *(float *)(lVar26 + 0x7c) = fVar48;
    *(undefined4 *)(lVar26 + 0x78) = uVar44;
    lVar26 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar26 == 0) goto LAB_03793c9c;
    uVar23 = *(uint *)(unaff_x19 + 0x340);
    if (*(uint *)(lVar26 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
    lVar40 = lVar26 + (long)(int)uVar23 * 0x60;
    *(float *)(lVar40 + 0x48) = *(float *)(lVar40 + 0x78) - unaff_s13 * in_stack_000001a0;
    *(float *)(lVar40 + 0x60) = fStack0000000000000174;
    if (*(int *)(lVar40 + 0x24) == 1) {
      *(undefined4 *)(lVar26 + (long)(int)uVar23 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158)
      ;
    }
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar49 = (float)FUN_03779d0c(*in_stack_000001c8,0);
    lVar26 = *in_stack_000001e8;
    if (lVar26 == 0) goto LAB_03793c9c;
    lVar40 = (long)(int)*(uint *)(unaff_x19 + 0x334);
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto thunk_FUN_01ab6c44;
    lVar32 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar32 == 0) goto LAB_03793c9c;
    uVar23 = *(uint *)(unaff_x19 + 0x340);
    if (((*(char *)(lVar26 + lVar40 * unaff_x27 + 0x1a0) == '\0') &&
        (lVar40 = (long)(int)*(uint *)(unaff_x19 + 0x32c),
        *(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x32c))) ||
       (uVar37 = (uint)*(undefined8 *)(lVar32 + 0x18), uVar37 <= uVar23)) goto thunk_FUN_01ab6c44;
    fVar46 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
             (*(float *)(unaff_x19 + 0x2ec) +
             fStack0000000000000158 * (in_stack_00000148 + in_stack_00000188 + fVar49));
    fVar49 = -fVar46;
    if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
      fVar49 = fVar46;
    }
    *(float *)(lVar32 + (long)(int)uVar23 * 0x60 + 0x5c) =
         *(float *)(lVar26 + lVar40 * unaff_x27 + 0x164) + fVar49;
    if (uVar37 <= uVar23) goto thunk_FUN_01ab6c44;
    lVar32 = lVar32 + (long)(int)uVar23 * 0x60;
    *(float *)(lVar32 + 0x54) = 0.0 - *(float *)(unaff_x19 + 0x2e0);
    *(float *)(lVar32 + 0x58) = fVar53;
    *(float *)(lVar32 + 0x4c) = in_stack_000000a0._4_4_ + (fVar48 - fVar53);
    *(float *)(lVar32 + 0x50) = fVar48;
    if (0x2c < (int)in_stack_0000169c) {
      if ((in_stack_0000169c - 0x2028 < 2) || (in_stack_0000169c == 0x2d)) goto LAB_03790360;
      goto LAB_03790574;
    }
    if (in_stack_0000169c - 10 < 2) {
LAB_03790360:
      FUN_03796df8();
      uVar13 = *(uint *)(unaff_x19 + 0x324);
      iVar14 = *(int *)(unaff_x19 + 0x340) + 1;
      *(int *)(unaff_x19 + 0x340) = iVar14;
      *(uint *)(unaff_x19 + 0x328) = uVar13 + 1;
      in_stack_000001d0[8] = 0;
      in_stack_000001d0[9] = 0;
      if (*(long *)(in_stack_000001c0 + 0x48) != 0) {
        if (*(int *)(*(long *)(in_stack_000001c0 + 0x48) + 0x18) <= iVar14) {
          if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_037a56f4(iVar14,in_stack_000001c0,0);
          uVar13 = *in_stack_000001d0;
        }
        lVar26 = *in_stack_000001e8;
        if (lVar26 != 0) {
          if (uVar13 < *(uint *)(lVar26 + 0x18)) {
            fVar49 = *(float *)(lVar26 + (long)(int)uVar13 * (long)iVar15 + 0x158);
            if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
              if ((in_stack_0000169c == 0x2029) || (fVar46 = 0.0, in_stack_0000169c == 10)) {
                fVar46 = *(float *)(in_stack_000001e0 + 0xcc);
              }
              uVar21 = 0;
              fVar46 = fVar49 + (0.0 - *(float *)(unaff_x19 + 0x33c)) +
                       fStack0000000000000088 *
                       (in_stack_00000080._4_4_ + *(float *)(unaff_x19 + 0x15b0)) +
                       fStack0000000000000158 * (*(float *)(in_stack_000001e0 + 200) + fVar46) +
                       *(float *)(unaff_x19 + 0x2e0);
            }
            else {
              if ((in_stack_0000169c == 0x2029) || (fVar46 = 0.0, in_stack_0000169c == 10)) {
                fVar46 = *(float *)(in_stack_000001e0 + 0xcc);
              }
              uVar21 = 1;
              fVar46 = *(float *)(unaff_x19 + 0x2e0) +
                       *(float *)(unaff_x19 + 0x2e4) +
                       fStack0000000000000158 * (*(float *)(in_stack_000001e0 + 200) + fVar46);
            }
            *(float *)(unaff_x19 + 0x2e0) = fVar46;
            *(float *)(unaff_x19 + 0x15ac) = fVar49;
            *(undefined1 *)(unaff_x19 + 0x2e8) = uVar21;
            *(undefined8 *)(unaff_x19 + 0x338) = _uStack0000000000000090;
            *(float *)(unaff_x19 + 0x2f4) =
                 *(float *)(unaff_x19 + 0x2f8) + 0.0 + *(float *)(unaff_x19 + 0x2fc);
            FUN_03796df8();
            FUN_03796df8();
            *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
            goto LAB_0379053c;
          }
          goto thunk_FUN_01ab6c44;
        }
      }
      goto LAB_03793c9c;
    }
    if (in_stack_0000169c == 3) {
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        in_stack_0000160c = (uint)*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
        goto LAB_03790574;
      }
      goto LAB_03793c9c;
    }
  }
  else {
    lVar26 = *in_stack_000001e8;
    if (lVar26 == 0) goto LAB_03793c9c;
  }
LAB_03790574:
  uVar23 = *in_stack_000001d0;
  if (*(uint *)(lVar26 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
  if (*(char *)(lVar26 + (long)(int)uVar23 * unaff_x27 + 0x1a0) != '\0') {
    lVar26 = lVar26 + (long)(int)uVar23 * unaff_x27;
    uVar17 = *(ulong *)(unaff_x19 + 0x360);
    uVar30 = *(ulong *)(lVar26 + 0x124);
    *(ulong *)(unaff_x19 + 0x360) =
         uVar17 ^ (uVar17 ^ uVar30) &
                  ~CONCAT44(-(uint)((float)(uVar17 >> 0x20) < (float)(uVar30 >> 0x20)),
                            -(uint)((float)uVar17 < (float)uVar30));
    uVar17 = *(ulong *)(unaff_x19 + 0x368);
    uVar30 = *(ulong *)(lVar26 + 0x130);
    *(ulong *)(unaff_x19 + 0x368) =
         uVar17 ^ (uVar17 ^ uVar30) &
                  ~CONCAT44(-(uint)((float)(uVar30 >> 0x20) < (float)(uVar17 >> 0x20)),
                            -(uint)((float)uVar30 < (float)uVar17));
  }
  if ((iStack000000000000008c != 0) ||
     ((*(uint *)(in_stack_000001e0 + 0x74) < 7 &&
      ((1 << (ulong)(*(uint *)(in_stack_000001e0 + 0x74) & 0x1f) & 0x4aU) != 0)))) {
    if ((unaff_w25 == 0) &&
       (((in_stack_0000169c != 0x2d && (in_stack_0000169c != 0x200b)) && (in_stack_0000169c != 0xad)
        ))) {
      if (*(char *)(unaff_x19 + 0x37d) == '\0') {
LAB_03790684:
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar17 = FUN_037a5f20(in_stack_0000169c,0);
        if ((uVar17 & 1) == 0) {
LAB_037906cc:
          if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_037a5f90(in_stack_0000169c,0);
          if ((uVar17 & 1) == 0) goto LAB_037907cc;
          if (in_stack_00000060 == 0) goto LAB_03793c9c;
        }
        else {
          if ((in_stack_00000060 == 0) || (lVar26 = FUN_037a8a5c(in_stack_00000060,0), lVar26 == 0))
          goto LAB_03793c9c;
          if (*(char *)(lVar26 + 0x28) != '\0') goto LAB_037906cc;
        }
        lVar26 = FUN_037a8a5c(in_stack_00000060,0);
        if ((lVar26 == 0) || (lVar26 = FUN_037aad04(lVar26,0), lVar26 == 0)) goto LAB_03793c9c;
        uVar44 = (undefined4)((ulong)in_stack_000016a0 >> 0x20);
        in_stack_000016a0 = CONCAT44(uVar44,in_stack_0000169c);
        uVar17 = FUN_021e4dc4(lVar26,&stack0x000016a0,*(undefined8 *)PTR_DAT_03ccd4e8);
        if ((int)*in_stack_000001d0 < (int)uStack00000000000000dc) {
          lVar26 = FUN_037a8a5c(in_stack_00000060,0);
          if (lVar26 == 0) goto LAB_03793c9c;
          lVar26 = FUN_037aaf28(lVar26,0);
          lVar40 = *in_stack_000001e8;
          if (lVar40 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar40 + 0x18) <= *in_stack_000001d0 + 1) goto thunk_FUN_01ab6c44;
          if (lVar26 == 0) goto LAB_03793c9c;
          in_stack_000016a0 =
               CONCAT44(uVar44,(uint)*(ushort *)
                                      (lVar40 + (long)(int)(*in_stack_000001d0 + 1) * (long)iVar15 +
                                      0x20));
          uVar30 = FUN_021e4dc4(lVar26,&stack0x000016a0,*(undefined8 *)PTR_DAT_03ccd4e8);
          if ((uVar17 & 1) != 0) goto LAB_037909e8;
          if ((uVar30 & 1) == 0) goto LAB_03790cd4;
          if ((bStack00000000000000d8 & 1) == 0) goto LAB_03790854;
        }
        else {
          if ((uVar17 & 1) == 0) {
LAB_03790cd4:
            FUN_03796df8();
            bStack00000000000000d8 = 0;
            goto LAB_03790864;
          }
LAB_037909e8:
          if (uVar13 != uVar29 || ((bStack00000000000000d8 ^ 0xff) & 1) != 0) goto LAB_03790864;
        }
        if (unaff_w25 != 0) {
          FUN_03796df8();
        }
      }
      else {
LAB_037907cc:
        if ((bStack00000000000000d8 & 1) == 0) {
LAB_03790854:
          bStack00000000000000d8 = 0;
          goto LAB_03790864;
        }
        if ((unaff_w25 != 0 && in_stack_0000169c != 0xa0) ||
           ((in_stack_000000b8 & 1) == 0 && in_stack_0000169c == 0xad)) {
          FUN_03796df8();
        }
      }
      FUN_03796df8();
      bStack00000000000000d8 = 1;
    }
    else {
      if (*(char *)(unaff_x19 + 0x37d) == '\x01') goto LAB_037907cc;
      if (((in_stack_0000169c - 0x2007 < 0x29) &&
          ((1L << ((ulong)(in_stack_0000169c - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
         ((in_stack_0000169c == 0xa0 || (in_stack_0000169c == 0x2060)))) goto LAB_03790684;
      FUN_03796df8();
      bStack00000000000000d8 = 0;
      *(undefined4 *)(unaff_x19 + 0x11e0) = 0xffffffff;
    }
  }
LAB_03790864:
  FUN_03796df8();
  *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
  goto LAB_0378d260;
code_r0x0378d4bc:
  lVar26 = *in_stack_000001e8;
  if (lVar26 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
  *in_stack_000001c8 = *(long *)(lVar26 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x40);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001c8);
  lVar26 = *in_stack_000001e8;
  if (lVar26 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
  *in_stack_00000190 = *(long *)(lVar26 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x58);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar26 = *in_stack_000001e8;
  if (lVar26 == 0) goto LAB_03793c9c;
  uVar29 = *in_stack_000001d0;
  uVar13 = *(uint *)(lVar26 + 0x18);
  if (uVar13 <= uVar29) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar26 + (long)(int)uVar29 * unaff_x27 + 0x60)
  ;
  if (unaff_w23 == 0) {
LAB_0378d570:
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar49 = *(float *)(unaff_x19 + 0xf4);
    iVar14 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
    lVar26 = *(long *)(unaff_x19 + 0x68);
  }
  else {
    lVar40 = *(long *)(unaff_x19 + 0x20);
    if (lVar40 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar40 + 0x18) <= in_stack_0000160c) goto thunk_FUN_01ab6c44;
    if ((*(int *)(lVar40 + (long)(int)in_stack_0000160c * 0x10 + 0x24) != 10) ||
       (uVar29 == *(uint *)(unaff_x19 + 0x328))) goto LAB_0378d570;
    if (uVar13 <= uVar29 - 1) goto thunk_FUN_01ab6c44;
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar49 = *(float *)(lVar26 + (long)(int)(uVar29 - 1) * (long)iVar15 + 0x68);
    iVar14 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
    lVar26 = *in_stack_000001c8;
  }
  if (lVar26 == 0) goto LAB_03793c9c;
  fVar48 = (float)FUN_03776960(lVar26 + 0xb0,0);
  fVar53 = in_stack_00000150;
  if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
    fVar53 = 1.0;
  }
  fStack0000000000000170 = 0.0;
  fVar46 = 0.0;
  if ((unaff_w23 & in_stack_0000169c == 0x2026) == 0) {
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar46 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fStack0000000000000170 = (float)FUN_037769c0(*in_stack_000001c8 + 0xb0,0);
  }
  lVar26 = *(long *)(unaff_x19 + 0x1588);
  if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_03793c9c;
  fVar59 = *(float *)(unaff_x19 + 0xf0);
  fVar62 = *(float *)(lVar26 + 0x2c);
  fVar52 = (float)FUN_03776ea8(*(long *)(lVar26 + 0x20),0);
  if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
  fVar47 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
  if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
  fVar55 = *(float *)(unaff_x19 + 0xf0);
  fVar57 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
  lVar26 = *in_stack_000001e8;
  if (lVar26 == 0) goto LAB_03793c9c;
  uVar13 = *(uint *)(unaff_x19 + 0x324);
  if (*(uint *)(lVar26 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
  lVar40 = lVar26 + (long)(int)uVar13 * unaff_x27;
  fVar53 = ((fStack000000000000017c * fVar49) / (float)iVar14) * fVar48 * fVar53;
  unaff_s13 = fVar53 * fVar59 * fVar62 * fVar52;
  *(undefined1 *)(lVar40 + 0x28) = 1;
  *(float *)(lVar40 + 0x16c) = unaff_s13;
  in_stack_000001a0 = *(float *)(unaff_x19 + 0xd8);
  unaff_s11 = fVar53 * fVar47 * fVar55 * fVar57;
LAB_0378db90:
  fVar49 = unaff_s13;
  if (in_stack_0000169c == 3 || in_stack_0000169c == 0xad) {
    fVar49 = 0.0;
  }
LAB_0378dba8:
  if (*(uint *)(lVar26 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
  lVar26 = lVar26 + (long)(int)uVar13 * (long)iVar15;
  *(short *)(lVar26 + 0x20) = (short)in_stack_0000169c;
  *(undefined4 *)(lVar26 + 0x68) = *(undefined4 *)(unaff_x19 + 0xf4);
  *(undefined4 *)(lVar26 + 0x170) = *(undefined4 *)(unaff_x19 + 0x1ac);
  lVar26 = *in_stack_000001e8;
  if (lVar26 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x174) =
       *(undefined4 *)(unaff_x19 + 0x1b0);
  lVar26 = *in_stack_000001e8;
  if (lVar26 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x17c) =
       *(undefined4 *)(unaff_x19 + 0x1b4);
  lVar26 = *in_stack_000001e8;
  if (lVar26 == 0) goto LAB_03793c9c;
  uVar56 = in_stack_00000100[1];
  in_stack_000016a0 = *in_stack_00000100;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
  *(undefined4 *)(lVar26 + 0x198) = *(undefined4 *)(in_stack_00000100 + 2);
  *(undefined8 *)(lVar26 + 400) = uVar56;
  *(undefined8 *)(lVar26 + 0x188) = in_stack_000016a0;
  lVar26 = *in_stack_000001e8;
  if (lVar26 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
  lVar26 = lVar26 + (long)(int)*in_stack_000001d0 * unaff_x27;
  lVar40 = *(long *)(lVar26 + 0x38);
  *(undefined4 *)(lVar26 + 0x19c) = *(undefined4 *)(unaff_x19 + 0x124);
  if ((lVar40 == 0) &&
     ((*in_stack_000001a8 == 0 || (lVar40 = *(long *)(*in_stack_000001a8 + 0x20), lVar40 == 0))))
  goto LAB_03793c9c;
  FUN_03776e6c(&stack0x000016a0,lVar40,0);
  if (in_stack_0000169c >> 0x10 == 0) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar13 = FUN_026b63d8(in_stack_0000169c,0);
    unaff_w25 = uVar13 & 1;
  }
  else {
    unaff_w25 = 0;
  }
  uVar44 = 0;
  in_stack_00000188 = *(float *)(in_stack_000001e0 + 0xc0);
  if (*(char *)(in_stack_000001e0 + 0xb4) != '\0') {
    if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
    uVar13 = *in_stack_000001d0;
    uVar29 = *(uint *)(*in_stack_000001a8 + 0x28);
    if ((int)uVar13 < (int)uStack00000000000000dc) {
      lVar26 = *in_stack_000001e8;
      if (lVar26 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar26 + 0x18) <= uVar13 + 1) goto thunk_FUN_01ab6c44;
      lVar26 = *(long *)(lVar26 + (long)(int)(uVar13 + 1) * (long)iVar15 + 0x30);
      if ((((lVar26 == 0) || (*in_stack_000001c8 == 0)) ||
          (lVar40 = *(long *)(*in_stack_000001c8 + 0x170), lVar40 == 0)) ||
         (lVar40 = *(long *)(lVar40 + 0x40), lVar40 == 0)) goto LAB_03793c9c;
      in_stack_000016a0 =
           CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),uVar29 | *(int *)(lVar26 + 0x28) << 0x10
                   );
      uVar17 = FUN_0219f8b8(lVar40,&stack0x000016a0,&stack0x00001590,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                           );
      if ((uVar17 & 1) != 0) {
        FUN_037791c8(&stack0x000016a0,&stack0x00001590,0);
        uVar44 = UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent
                           (&stack0x00001570,0);
        uVar17 = FUN_037791f0(&stack0x00001590,0);
        if ((uVar17 & 0x100) != 0) {
          in_stack_00000188 = 0.0;
        }
      }
      uVar13 = *in_stack_000001d0;
    }
    if (0 < (int)uVar13) {
      lVar26 = *in_stack_000001e8;
      if (lVar26 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar26 + 0x18) <= uVar13 - 1) goto thunk_FUN_01ab6c44;
      lVar26 = *(long *)(lVar26 + (ulong)(uVar13 - 1) * (unaff_x27 & 0xffffffff) + 0x30);
      if (((lVar26 == 0) || (*in_stack_000001c8 == 0)) ||
         ((lVar40 = *(long *)(*in_stack_000001c8 + 0x170), lVar40 == 0 ||
          (lVar40 = *(long *)(lVar40 + 0x40), lVar40 == 0)))) goto LAB_03793c9c;
      in_stack_000016a0 =
           CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),
                    *(uint *)(lVar26 + 0x28) | uVar29 << 0x10);
      uVar17 = FUN_0219f8b8(lVar40,&stack0x000016a0,&stack0x00001590,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                           );
      if ((uVar17 & 1) != 0) {
        FUN_037791dc(&stack0x000016a0,&stack0x00001590,0);
        UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent(&stack0x00001570,0);
        FUN_03778e8c(uVar44,0);
        uVar17 = FUN_037791f0(&stack0x00001590,0);
        if ((uVar17 & 0x100) != 0) {
          in_stack_00000188 = 0.0;
        }
      }
    }
  }
  lVar26 = *in_stack_000001e8;
  if (lVar26 == 0) goto LAB_03793c9c;
  uVar13 = *in_stack_000001d0;
  uVar44 = FUN_03778e7c(&stack0x000015e0,0);
  if (*(uint *)(lVar26 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar26 + (long)(int)uVar13 * unaff_x27 + 0x160) = uVar44;
  if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0)
      == 0) {
    thunk_FUN_01a58e78();
  }
  uVar17 = FUN_037a5c04(in_stack_0000169c,0);
  uVar13 = *in_stack_000001d0;
  unaff_x22 = uVar17 & 0xffffffff;
  if ((uVar17 & 1) == 0) {
    if ((uVar17 & 1) == 0 && 0 < (int)uVar13) {
      uVar29 = *(uint *)(unaff_x19 + 0x19c4);
      if ((uVar29 == 0x80000000) || (uVar29 != uVar13 - 1)) {
        do {
          uVar29 = uVar13 - 1;
          uVar44 = (undefined4)((ulong)in_stack_000016a0 >> 0x20);
          if (((int)uVar13 < 1) || (uVar29 == *(uint *)(unaff_x19 + 0x19c4))) {
            uVar13 = *(uint *)(unaff_x19 + 0x19c4);
            if (uVar13 == 0x80000000) goto LAB_0378dfc4;
            lVar26 = *in_stack_000001e8;
            if (lVar26 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar26 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
            lVar26 = *(long *)(lVar26 + (long)(int)uVar13 * unaff_x27 + 0x30);
            if ((lVar26 == 0) || (lVar26 = FUN_03787a68(lVar26,0), lVar26 == 0)) goto LAB_03793c9c;
            uVar13 = FUN_03776e5c(lVar26,0);
            if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
            iVar15 = FUN_0377acf0(*in_stack_000001a8,0);
            if (((*in_stack_000001c8 == 0) ||
                (lVar26 = FUN_03779cb4(*in_stack_000001c8,0), lVar26 == 0)) ||
               (*(long *)(lVar26 + 0x48) == 0)) goto LAB_03793c9c;
            in_stack_000016a0 = CONCAT44(uVar44,uVar13 | iVar15 << 0x10);
            uVar17 = FUN_0219f8b8(*(long *)(lVar26 + 0x48),&stack0x000016a0,&stack0x00001518,
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__)
            ;
            if ((uVar17 & 1) == 0) goto LAB_0378dfc4;
            lVar26 = *in_stack_000001e8;
            if (lVar26 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto thunk_FUN_01ab6c44;
            fVar53 = *(float *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27 +
                               0x148);
            fVar59 = *(float *)(unaff_x19 + 0x2f4);
            FUN_037793b0(&stack0x00001518,0);
            fVar48 = (float)FUN_03779388(&stack0x00001550,0);
            FUN_037793c0(&stack0x00001518,0);
            fVar52 = (float)FUN_03779398(&stack0x00001548,0);
            FUN_03778e64(((fVar53 - fVar59) / fVar49 + fVar48) - fVar52,&stack0x000015e0,0);
            FUN_037793b0(&stack0x00001518,0);
            fVar53 = (float)FUN_03779390(&stack0x00001550,0);
            puVar19 = &stack0x00001518;
            goto LAB_0378f5a8;
          }
          lVar26 = *in_stack_000001e8;
          if (lVar26 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar26 + 0x18) <= uVar29) goto thunk_FUN_01ab6c44;
          lVar26 = *(long *)(lVar26 + (ulong)uVar29 * (unaff_x27 & 0xffffffff) + 0x30);
          if ((lVar26 == 0) || (lVar26 = FUN_03787a68(lVar26,0), lVar26 == 0)) goto LAB_03793c9c;
          uVar13 = FUN_03776e5c(lVar26,0);
          if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
          iVar15 = FUN_0377acf0(*in_stack_000001a8,0);
          if (((*in_stack_000001c8 == 0) ||
              (lVar26 = FUN_03779cb4(*in_stack_000001c8,0), lVar26 == 0)) ||
             (*(long *)(lVar26 + 0x50) == 0)) goto LAB_03793c9c;
          in_stack_000016a0 = CONCAT44(uVar44,uVar13 | iVar15 << 0x10);
          uVar17 = FUN_0219f8b8(*(long *)(lVar26 + 0x50),&stack0x000016a0,&stack0x00001530,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<int,_Task>__ctor__);
          uVar13 = uVar29;
        } while ((uVar17 & 1) == 0);
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar26 + 0x18) <= uVar29) goto thunk_FUN_01ab6c44;
        fVar59 = *(float *)(unaff_x19 + 0x2e0);
        fVar62 = *(float *)(unaff_x19 + 0x180);
        lVar26 = lVar26 + uVar29 * unaff_x27;
        fVar53 = *(float *)(unaff_x19 + 0x2f4);
        fVar47 = *(float *)(lVar26 + 0x148);
        fVar57 = *(float *)(lVar26 + 0x150);
        FUN_037793d0(&stack0x00001530,0);
        fVar48 = (float)FUN_03779388(&stack0x00001550,0);
        FUN_037793e0(&stack0x00001530,0);
        fVar52 = (float)FUN_03779398(&stack0x00001548,0);
        FUN_03778e64(((fVar47 - fVar53) / fVar49 + fVar48) - fVar52,&stack0x000015e0,0);
        FUN_037793d0(&stack0x00001530,0);
        fVar53 = (float)FUN_03779390(&stack0x00001550,0);
        FUN_037793e0(&stack0x00001530,0);
        fVar48 = (float)FUN_037793a0(&stack0x00001548,0);
        FUN_03778e74(((fVar57 - ((unaff_s11 - fVar59) + fVar62)) / fVar49 + fVar53) - fVar48,
                     &stack0x000015e0,0);
        in_stack_00000188 = 0.0;
      }
      else {
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar26 + 0x18) <= uVar29) goto thunk_FUN_01ab6c44;
        lVar26 = *(long *)(lVar26 + (long)(int)uVar29 * unaff_x27 + 0x30);
        if ((lVar26 == 0) || (lVar26 = FUN_03787a68(lVar26,0), lVar26 == 0)) goto LAB_03793c9c;
        uVar13 = FUN_03776e5c(lVar26,0);
        if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
        iVar15 = FUN_0377acf0(*in_stack_000001a8,0);
        if (((*in_stack_000001c8 == 0) || (lVar26 = FUN_03779cb4(*in_stack_000001c8,0), lVar26 == 0)
            ) || (*(long *)(lVar26 + 0x48) == 0)) goto LAB_03793c9c;
        in_stack_000016a0 =
             CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),uVar13 | iVar15 << 0x10);
        uVar17 = FUN_0219f8b8(*(long *)(lVar26 + 0x48),&stack0x000016a0,&stack0x00001558,
                              *(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__);
        if ((uVar17 & 1) != 0) {
          lVar26 = *in_stack_000001e8;
          if (lVar26 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto thunk_FUN_01ab6c44;
          fVar53 = *(float *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27 + 0x148)
          ;
          fVar59 = *(float *)(unaff_x19 + 0x2f4);
          FUN_037793b0(&stack0x00001558,0);
          fVar48 = (float)FUN_03779388(&stack0x00001550,0);
          FUN_037793c0(&stack0x00001558,0);
          fVar52 = (float)FUN_03779398(&stack0x00001548,0);
          FUN_03778e64(((fVar53 - fVar59) / fVar49 + fVar48) - fVar52,&stack0x000015e0,0);
          FUN_037793b0(&stack0x00001558,0);
          fVar53 = (float)FUN_03779390(&stack0x00001550,0);
          puVar19 = &stack0x00001558;
LAB_0378f5a8:
          FUN_037793c0(puVar19,0);
          fVar48 = (float)FUN_037793a0(&stack0x00001548,0);
          FUN_03778e74(fVar53 - fVar48,&stack0x000015e0,0);
          in_stack_00000188 = 0.0;
        }
      }
    }
  }
  else {
    *(uint *)(unaff_x19 + 0x19c4) = uVar13;
  }
LAB_0378dfc4:
  uVar44 = FUN_03778e6c(&stack0x000015e0,0);
  uVar45 = FUN_03778e6c(&stack0x000015e0,0);
  if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
    fVar48 = *(float *)(unaff_x19 + 0x2f4);
    fVar53 = (float)FUN_03776cb4(&stack0x000015f0,0);
    fVar48 = fVar48 - fVar49 * fVar53 * (1.0 - *(float *)(unaff_x19 + 0x1594));
    *(float *)(unaff_x19 + 0x2f4) = fVar48;
    if ((unaff_w25 != 0) || (in_stack_0000169c == 0x200b)) {
      *(float *)(unaff_x19 + 0x2f4) =
           fVar48 - fStack0000000000000158 * *(float *)(in_stack_000001e0 + 0xc4);
    }
  }
  fVar53 = *(float *)(unaff_x19 + 0x2f0);
  if (fVar53 == 0.0) {
    in_stack_000000e8._4_4_ = 0.0;
  }
  else {
    fVar48 = (float)FUN_03776c94(&stack0x000015f0,0);
    fVar52 = (float)FUN_03776ca4(&stack0x000015f0,0);
    in_stack_000000e8._4_4_ =
         (1.0 - *(float *)(unaff_x19 + 0x1594)) * (fVar53 * 0.5 - fVar49 * (fVar48 * 0.5 + fVar52));
    *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2f4) + in_stack_000000e8._4_4_;
  }
  uVar13 = 0;
  if ((bVar11 == 0) && (*unaff_x24 == '\x01')) {
    uVar13 = *(uint *)(unaff_x19 + 0x124) & 1;
  }
  lVar26 = *in_stack_00000190;
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar17 = FUN_036cee6c(lVar26,0,0);
  puVar6 = Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__;
  _fStack0000000000000168 = CONCAT44(uVar44,uVar45);
  if (uVar13 == 0) {
    in_stack_00000148 = 0.0;
    if ((uVar17 & 1) != 0) {
      lVar26 = *in_stack_00000190;
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar26 == 0) goto LAB_03793c9c;
      uVar17 = FUN_03699d3c(lVar26,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
      if ((uVar17 & 1) != 0) {
        lVar26 = *in_stack_00000190;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar26 == 0) goto LAB_03793c9c;
        uVar17 = FUN_03699d3c(lVar26,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xe4),0);
        if ((uVar17 & 1) != 0) {
          lVar26 = *in_stack_00000190;
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar26 == 0) goto LAB_03793c9c;
          fVar53 = (float)FUN_0369e060(lVar26,*(undefined4 *)
                                               (*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
          unaff_x28 = (long *)PTR_DAT_03cbe438;
          if ((*in_stack_000001c8 == 0) || (*in_stack_00000190 == 0)) goto LAB_03793c9c;
          fVar52 = *(float *)(*in_stack_000001c8 + 0x188);
          fVar48 = (float)FUN_0369e060(*in_stack_00000190,
                                       *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xe4),0);
          unaff_s12 = fVar48 * fVar53 * fVar52 * 0.25;
          if (fVar53 < in_stack_000001a0 + unaff_s12) {
            in_stack_000001a0 = fVar53 - unaff_s12;
          }
          goto LAB_0378e344;
        }
      }
    }
    unaff_s12 = 0.0;
    unaff_x28 = (long *)PTR_DAT_03cbe438;
  }
  else {
    unaff_s12 = 0.0;
    unaff_x28 = (long *)PTR_DAT_03cbe438;
    if ((uVar17 & 1) != 0) {
      lVar26 = *in_stack_00000190;
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar26 == 0) goto LAB_03793c9c;
      uVar17 = FUN_03699d3c(lVar26,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
      unaff_x28 = (long *)PTR_DAT_03cbe438;
      if ((uVar17 & 1) != 0) {
        lVar26 = *in_stack_00000190;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar26 == 0) goto LAB_03793c9c;
        fVar53 = (float)FUN_0369e060(lVar26,*(undefined4 *)
                                             (*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar48 = (float)FUN_03779d1c(*in_stack_000001c8,0);
        unaff_x28 = (long *)PTR_DAT_03cbe438;
        if (*in_stack_00000190 == 0) goto LAB_03793c9c;
        fVar52 = (float)FUN_0369e060(*in_stack_00000190,
                                     *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xe4),0);
        unaff_s12 = fVar53 * fVar48 * 0.25 * fVar52;
        if (fVar53 < in_stack_000001a0 + unaff_s12) {
          in_stack_000001a0 = fVar53 - unaff_s12;
        }
      }
    }
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    in_stack_00000148 = (float)FUN_03779d2c(*in_stack_000001c8,0);
  }
LAB_0378e344:
  fVar52 = *(float *)(unaff_x19 + 0x2f4);
  fVar53 = (float)FUN_03776ca4(&stack0x000015f0,0);
  fVar59 = *(float *)(unaff_x19 + 0x19a8);
  fVar48 = (float)FUN_03778e5c(&stack0x000015e0,0);
  unaff_s15 = 1.0;
  unaff_s9 = fVar52 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                      fVar49 * (fVar48 + ((fVar53 * fVar59 - in_stack_000001a0) - unaff_s12));
  fVar53 = (float)FUN_03776cac(&stack0x000015f0,0);
  fVar48 = (float)FUN_03778e6c(&stack0x000015e0,0);
  in_stack_000001b8._4_4_ =
       *(float *)(unaff_x19 + 0x180) +
       ((unaff_s11 + fVar49 * (in_stack_000001a0 + fVar53 + fVar48)) - *(float *)(unaff_x19 + 0x2e0)
       );
  fVar53 = (float)FUN_03776c9c(&stack0x000015f0,0);
  unaff_s8 = in_stack_000001a0 + in_stack_000001a0;
  _fStack0000000000000180 = CONCAT44(in_stack_000001b8._4_4_ - fVar49 * (unaff_s8 + fVar53),fVar46);
  param_1 = (float)FUN_03776c94(&stack0x000015f0,0);
  unaff_x26 = in_stack_000001c8;
  unaff_x29 = in_stack_000001d0;
  fStack000000000000015c = unaff_s13;
  unaff_s13 = fVar49;
  unaff_s14 = unaff_s9;
  goto code_r0x0378e41c;
LAB_0379194c:
  do {
    uVar13 = uVar23 - 1;
    if (*(uint *)(lVar26 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
    lVar43 = (long)(int)uVar13;
    lVar40 = lVar26 + lVar43 * 0x188;
    lVar32 = *(long *)(lVar40 + 0x40);
    uVar2 = *(ushort *)(lVar40 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    bVar11 = FUN_026b63d8(uVar2,0);
    if (*(uint *)(lVar26 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
    lVar40 = *(long *)(in_stack_000001c0 + 0x48);
    uVar37 = (uint)uVar2;
    if (lVar40 == 0) goto LAB_03793c9c;
    uVar24 = *(uint *)(lVar26 + lVar43 * 0x188 + 0x6c);
    if (*(uint *)(lVar40 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
    lVar33 = (long)(int)uVar24;
    lVar40 = lVar40 + lVar33 * 0x60;
    uVar4 = *(uint *)(lVar40 + 0x40);
    uVar41 = *(uint *)(lVar40 + 0x6c);
    iVar16 = *(int *)(lVar40 + 0x20);
    iVar15 = *(int *)(lVar40 + 0x28);
    iVar14 = *(int *)(lVar40 + 0x2c);
    uVar5 = *(uint *)(lVar40 + 0x44);
    lVar34 = (long)(int)uVar5;
    fVar62 = *(float *)(lVar40 + 0x50);
    fVar57 = *(float *)(lVar40 + 0x58);
    fVar48 = *(float *)(lVar40 + 0x5c);
    fVar52 = *(float *)(lVar40 + 0x60);
    fVar60 = *(float *)(lVar40 + 100);
    fVar55 = *(float *)(lVar40 + 0x70);
    fVar61 = *(float *)(lVar40 + 0x74);
    fVar59 = *(float *)(lVar40 + 0x78);
    fVar47 = *(float *)(lVar40 + 0x7c);
    if ((int)uVar41 < 0x421) {
      if ((int)uVar41 < 0x209) {
        if ((int)uVar41 < 0x111) {
          switch(uVar41) {
          case 0x101:
            goto switchD_03791aa4_caseD_1001;
          case 0x102:
            goto switchD_03791aa4_caseD_1002;
          case 0x103:
          case 0x105:
          case 0x106:
          case 0x107:
            break;
          case 0x104:
            goto switchD_03791aa4_caseD_1004;
          case 0x108:
            goto switchD_03791aa4_caseD_1008;
          default:
            if (uVar41 == 0x110) goto switchD_03791aa4_caseD_1008;
          }
        }
        else {
          switch(uVar41) {
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
            if (uVar41 == 0x120) goto LAB_03791c08;
          }
        }
      }
      else if ((int)uVar41 < 0x405) {
        if ((int)uVar41 < 0x401) {
          if (uVar41 == 0x210) goto switchD_03791aa4_caseD_1008;
          if (uVar41 == 0x220) goto LAB_03791c08;
        }
        else {
          if (uVar41 == 0x401) goto switchD_03791aa4_caseD_1001;
          if (uVar41 == 0x402) goto switchD_03791aa4_caseD_1002;
          if (uVar41 == 0x404) goto switchD_03791aa4_caseD_1004;
        }
      }
      else {
        if ((uVar41 == 0x408) || (uVar41 == 0x410)) goto switchD_03791aa4_caseD_1008;
        if (uVar41 == 0x420) goto LAB_03791c08;
      }
      goto switchD_03791aa4_caseD_1003;
    }
    if (0x1008 < (int)uVar41) {
      if ((int)uVar41 < 0x2005) {
        if (0x2000 < (int)uVar41) {
          if (uVar41 == 0x2001) goto switchD_03791aa4_caseD_1001;
          if (uVar41 == 0x2002) goto switchD_03791aa4_caseD_1002;
          if (uVar41 == 0x2004) goto switchD_03791aa4_caseD_1004;
          goto switchD_03791aa4_caseD_1003;
        }
        if (uVar41 != 0x1010) {
          uVar25 = 0x1020;
          goto LAB_03791bc8;
        }
      }
      else if ((uVar41 != 0x2008) && (uVar41 != 0x2010)) {
        uVar25 = 0x2020;
LAB_03791bc8:
        if (uVar41 != uVar25) goto switchD_03791aa4_caseD_1003;
LAB_03791c08:
        fVar48 = fVar55 + fVar59;
        goto LAB_03791c1c;
      }
      goto switchD_03791aa4_caseD_1008;
    }
    if ((int)uVar41 < 0x811) {
      switch(uVar41) {
      case 0x801:
        goto switchD_03791aa4_caseD_1001;
      case 0x802:
        goto switchD_03791aa4_caseD_1002;
      case 0x803:
      case 0x805:
      case 0x806:
      case 0x807:
        break;
      case 0x804:
        goto switchD_03791aa4_caseD_1004;
      case 0x808:
switchD_03791aa4_caseD_1008:
        if ((int)uVar13 <= (int)uVar5) {
          if (uVar37 < 0xad) {
            if ((uVar37 != 3) && (uVar37 != 10)) goto FUN_03791eb4;
          }
          else if ((uVar37 != 0xad) && ((uVar37 != 0x200b && (uVar37 != 0x2060)))) {
FUN_03791eb4:
            if (*(uint *)(lVar26 + 0x18) <= uVar4) goto thunk_FUN_01ab6c44;
            uVar3 = *(undefined2 *)(lVar26 + (long)(int)uVar4 * 0x188 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              plVar42 = (long *)PTR_DAT_03cbded8;
            }
            uVar20 = FUN_026b8cc4(uVar3,0);
            if ((uVar20 & 1) == 0) {
              bVar10 = (int)uVar24 < *(int *)(unaff_x19 + 0x340);
            }
            else {
              bVar10 = false;
            }
            if ((fVar48 <= fVar52) && (!bVar10 && (uVar41 >> 4 & 1) == 0)) {
              fStack0000000000000158 = fVar60;
              if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
                fStack0000000000000158 = fVar52 + fVar60;
              }
              goto LAB_03791c20;
            }
            if ((uVar23 == 1) || (uVar24 != uVar29)) {
              cVar22 = *(char *)(in_stack_000001e0 + 0xb6);
            }
            else {
              cVar22 = *(char *)(in_stack_000001e0 + 0xb6);
              if (uVar13 != *(uint *)(in_stack_000001e0 + 0xe4)) {
                iVar14 = (iVar14 - iVar16) - (uStack0000000000000090 & 1);
                fVar60 = -fVar48;
                if (cVar22 != '\0') {
                  fVar60 = fVar48;
                }
                if (iVar14 < 1) {
                  fVar48 = 1.0;
                }
                else {
                  fVar48 = *(float *)(in_stack_000001e0 + 0x7c);
                }
                if (iVar14 < 2) {
                  iVar14 = 1;
                }
                fVar52 = fVar52 + fVar60;
                if (uVar37 == 9) {
LAB_037939d0:
                  if (cVar22 != '\0') {
                    fVar52 = fVar52 * (1.0 - fVar48);
                    fVar60 = (float)iVar14;
LAB_03793a0c:
                    fStack0000000000000158 = fStack0000000000000158 - fVar52 / fVar60;
                    break;
                  }
                  fVar60 = (float)iVar14;
                  fVar52 = fVar52 * (1.0 - fVar48);
                }
                else {
                  if (uVar37 != 0xa0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar20 = FUN_026b97f8(uVar37,0);
                    cVar22 = *(char *)(in_stack_000001e0 + 0xb6);
                    if ((uVar20 & 1) != 0) goto LAB_037939d0;
                  }
                  fVar52 = fVar52 * fVar48;
                  fVar60 = (float)(int)((iVar16 - (~uStack0000000000000090 & 1)) + iVar15);
                  if (cVar22 != '\0') goto LAB_03793a0c;
                }
                fStack0000000000000158 = fStack0000000000000158 + fVar52 / fVar60;
                _in_stack_00000148 =
                     CONCAT44((float)((ulong)_in_stack_00000148 >> 0x20) + 0.0,
                              (float)_in_stack_00000148 + 0.0);
                break;
              }
            }
            fStack0000000000000158 = fVar60;
            if (cVar22 != '\0') {
              fStack0000000000000158 = fVar52 + fVar60;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000090 = FUN_026b97f8(uVar37,0);
            _in_stack_00000148 = 0;
          }
        }
        break;
      default:
        if (uVar41 == 0x810) goto switchD_03791aa4_caseD_1008;
      }
    }
    else {
      switch(uVar41) {
      case 0x1001:
switchD_03791aa4_caseD_1001:
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          fStack0000000000000158 = fVar60 + 0.0;
        }
        else {
          fStack0000000000000158 = 0.0 - fVar48;
        }
        break;
      case 0x1002:
switchD_03791aa4_caseD_1002:
LAB_03791c1c:
        fStack0000000000000158 = (fVar60 + fVar52 * 0.5) - fVar48 * 0.5;
        break;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        goto switchD_03791aa4_caseD_1003;
      case 0x1004:
switchD_03791aa4_caseD_1004:
        fStack0000000000000158 = (fVar52 + fVar60) - fVar48;
        if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
          fStack0000000000000158 = fVar52 + fVar60;
        }
        break;
      case 0x1008:
        goto switchD_03791aa4_caseD_1008;
      default:
        if (uVar41 == 0x820) goto LAB_03791c08;
        goto switchD_03791aa4_caseD_1003;
      }
LAB_03791c20:
      _in_stack_00000148 = 0;
    }
switchD_03791aa4_caseD_1003:
    uVar41 = (uint)*(undefined8 *)(lVar26 + 0x18);
    if (uVar41 <= uVar13) goto thunk_FUN_01ab6c44;
    lVar40 = lVar26 + lVar43 * 0x188;
    fVar60 = fStack0000000000000120 + fStack0000000000000158;
    fVar48 = (float)uStack0000000000000118 + (float)_in_stack_00000148;
    fVar52 = (float)((ulong)uStack0000000000000118 >> 0x20) +
             (float)((ulong)_in_stack_00000148 >> 0x20);
    if (*(char *)(lVar40 + 0x1a0) == '\0') goto LAB_037924bc;
    cVar22 = *(char *)(lVar26 + lVar43 * 0x188 + 0x28);
    if (cVar22 != '\x01') goto LAB_0379225c;
    fVar53 = fmodf(*(float *)(in_stack_000001e0 + 0xfc) * (float)(int)uVar24,1.0);
    plVar42 = (long *)PTR_DAT_03cbded8;
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf4)) {
    case 0:
      fVar53 = 1.0;
      lVar28 = lVar26 + lVar43 * 0x188;
      *(undefined4 *)(lVar28 + 0xbc) = 0;
      *(undefined4 *)(lVar28 + 0x94) = 0;
      *(undefined4 *)(lVar28 + 0xe4) = 0x3f800000;
      break;
    case 1:
      fVar47 = *(float *)(lVar26 + lVar43 * 0x188 + 0xa0);
      if (*(int *)(in_stack_000001e0 + 0x70) == 0x208) {
        lVar28 = lVar26 + lVar43 * 0x188;
        fVar59 = (fStack0000000000000158 + fVar47) - *(float *)(unaff_x19 + 0x360);
        fVar47 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
        goto LAB_03791dcc;
      }
      lVar28 = lVar26 + lVar43 * 0x188;
      fVar59 = fVar59 - fVar55;
      *(float *)(lVar28 + 0xbc) = fVar53 + (fVar47 - fVar55) / fVar59;
      *(float *)(lVar28 + 0x94) = fVar53 + (*(float *)(lVar28 + 0x78) - fVar55) / fVar59;
      *(float *)(lVar28 + 0xe4) = fVar53 + (*(float *)(lVar28 + 200) - fVar55) / fVar59;
      fVar53 = fVar53 + (*(float *)(lVar28 + 0xf0) - fVar55) / fVar59;
      break;
    case 2:
      lVar28 = lVar26 + lVar43 * 0x188;
      fVar47 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
      fVar59 = (fStack0000000000000158 + *(float *)(lVar28 + 0xa0)) - *(float *)(unaff_x19 + 0x360);
LAB_03791dcc:
      *(float *)(lVar28 + 0xbc) = fVar53 + fVar59 / fVar47;
      *(float *)(lVar28 + 0x94) =
           fVar53 + ((fStack0000000000000158 + *(float *)(lVar28 + 0x78)) -
                    *(float *)(unaff_x19 + 0x360)) /
                    (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      *(float *)(lVar28 + 0xe4) =
           fVar53 + ((fStack0000000000000158 + *(float *)(lVar28 + 200)) -
                    *(float *)(unaff_x19 + 0x360)) /
                    (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      fVar53 = fVar53 + ((fStack0000000000000158 + *(float *)(lVar28 + 0xf0)) -
                        *(float *)(unaff_x19 + 0x360)) /
                        (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      break;
    case 3:
      switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
      case 0:
        lVar28 = lVar26 + lVar43 * 0x188;
        *(undefined4 *)(lVar28 + 0xc0) = 0;
        *(undefined4 *)(lVar28 + 0x98) = 0x3f800000;
        *(undefined4 *)(lVar28 + 0xe8) = 0;
        *(undefined4 *)(lVar28 + 0x110) = 0x3f800000;
        break;
      case 1:
        fVar47 = fVar47 - fVar61;
        lVar28 = lVar26 + lVar43 * 0x188;
        fVar59 = fVar53 + (*(float *)(lVar28 + 0xa4) - fVar61) / fVar47;
        fVar47 = fVar53 + (*(float *)(lVar28 + 0x7c) - fVar61) / fVar47;
        *(float *)(lVar28 + 0xc0) = fVar59;
        *(float *)(lVar28 + 0x98) = fVar47;
        *(float *)(lVar28 + 0xe8) = fVar59;
        *(float *)(lVar28 + 0x110) = fVar47;
        break;
      case 2:
        lVar28 = lVar26 + lVar43 * 0x188;
        fVar59 = fVar53 + (*(float *)(lVar28 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
                          (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
        *(float *)(lVar28 + 0xc0) = fVar59;
        fVar47 = *(float *)(unaff_x19 + 0x364);
        fVar55 = *(float *)(unaff_x19 + 0x36c);
        *(float *)(lVar28 + 0xe8) = fVar59;
        fVar59 = fVar53 + (*(float *)(lVar28 + 0x7c) - fVar47) / (fVar55 - fVar47);
        *(float *)(lVar28 + 0x98) = fVar59;
        *(float *)(lVar28 + 0x110) = fVar59;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar41 = (uint)*(undefined8 *)(lVar26 + 0x18);
      }
      if (uVar41 <= uVar13) goto thunk_FUN_01ab6c44;
      lVar28 = lVar26 + lVar43 * 0x188;
      fVar59 = *(float *)(lVar28 + 0x168);
      fVar47 = (1.0 - (*(float *)(lVar28 + 0xc0) + *(float *)(lVar28 + 0x98)) * fVar59) * 0.5;
      fVar55 = fVar53 + *(float *)(lVar28 + 0xc0) * fVar59 + fVar47;
      fVar53 = fVar53 + *(float *)(lVar28 + 0x98) * fVar59 + fVar47;
      *(float *)(lVar28 + 0xbc) = fVar55;
      *(float *)(lVar28 + 0x94) = fVar55;
      *(float *)(lVar28 + 0xe4) = fVar53;
      break;
    default:
      goto switchD_03791d04_default;
    }
    *(float *)(lVar26 + lVar43 * 0x188 + 0x10c) = fVar53;
switchD_03791d04_default:
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
    case 0:
      if (uVar41 <= uVar13) goto thunk_FUN_01ab6c44;
      lVar28 = lVar26 + lVar43 * 0x188;
      *(undefined4 *)(lVar28 + 0xc0) = 0;
      *(undefined4 *)(lVar28 + 0x98) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0xe8) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0x110) = 0;
      break;
    case 1:
      if (uVar13 < uVar41) {
        fVar62 = fVar62 - fVar57;
        lVar28 = lVar26 + lVar43 * 0x188;
        fVar53 = (*(float *)(lVar28 + 0xa4) - fVar57) / fVar62;
        fVar62 = (*(float *)(lVar28 + 0x7c) - fVar57) / fVar62;
        *(float *)(lVar28 + 0xc0) = fVar53;
        goto LAB_0379217c;
      }
      goto thunk_FUN_01ab6c44;
    case 2:
      if (uVar41 <= uVar13) goto thunk_FUN_01ab6c44;
      lVar28 = lVar26 + lVar43 * 0x188;
      fVar53 = (*(float *)(lVar28 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
      *(float *)(lVar28 + 0xc0) = fVar53;
      fVar62 = (*(float *)(lVar28 + 0x7c) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
LAB_0379217c:
      *(float *)(lVar28 + 0x98) = fVar62;
      *(float *)(lVar28 + 0xe8) = fVar62;
      *(float *)(lVar28 + 0x110) = fVar53;
      break;
    case 3:
      if (uVar41 <= uVar13) goto thunk_FUN_01ab6c44;
      lVar28 = lVar26 + lVar43 * 0x188;
      fVar62 = *(float *)(lVar28 + 0x168);
      fVar59 = (1.0 - (*(float *)(lVar28 + 0xbc) + *(float *)(lVar28 + 0xe4)) / fVar62) * 0.5;
      fVar53 = *(float *)(lVar28 + 0xbc) / fVar62 + fVar59;
      fVar59 = *(float *)(lVar28 + 0xe4) / fVar62 + fVar59;
      *(float *)(lVar28 + 0xc0) = fVar53;
      *(float *)(lVar28 + 0x98) = fVar59;
      *(float *)(lVar28 + 0x110) = fVar53;
      *(float *)(lVar28 + 0xe8) = fVar59;
    }
    if (uVar41 <= uVar13) goto thunk_FUN_01ab6c44;
    lVar28 = lVar26 + lVar43 * 0x188;
    fVar53 = *(float *)(lVar28 + 0x16c) * (1.0 - *(float *)(unaff_x19 + 0x1594));
    if ((*(char *)(lVar28 + 100) == '\0') && ((*(byte *)(lVar26 + lVar43 * 0x188 + 0x19c) & 1) != 0)
       ) {
      fVar53 = -fVar53;
    }
    lVar28 = lVar26 + lVar43 * 0x188;
    *(float *)(lVar28 + 0xb8) = fVar53;
    *(float *)(lVar28 + 0x90) = fVar53;
    *(float *)(lVar28 + 0xe0) = fVar53;
    *(float *)(lVar28 + 0x108) = fVar53;
    *(undefined4 *)(lVar28 + 0xbc) = 0x3f800000;
    *(float *)(lVar28 + 0xc0) = fVar53;
    *(undefined4 *)(lVar28 + 0x94) = 0x3f800000;
    *(float *)(lVar28 + 0x98) = fVar53;
    *(undefined4 *)(lVar28 + 0xe4) = 0x3f800000;
    *(float *)(lVar28 + 0xe8) = fVar53;
    *(undefined4 *)(lVar28 + 0x10c) = 0x3f800000;
    *(float *)(lVar28 + 0x110) = fVar53;
LAB_0379225c:
    if (((int)uVar13 < *(int *)(in_stack_000001e0 + 0xd8)) &&
       (iStack0000000000000138 < *(int *)(in_stack_000001e0 + 0xdc))) {
      if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar24) ||
         (*(int *)(in_stack_000001e0 + 0x74) == 5)) {
        if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar24) ||
           (*(int *)(in_stack_000001e0 + 0x74) != 5)) goto LAB_037922d4;
        if (uVar13 < uVar41) {
          bVar10 = *(uint *)(lVar26 + lVar43 * 0x188 + 0x70) == uStack000000000000005c;
          goto LAB_037922d8;
        }
        goto thunk_FUN_01ab6c44;
      }
      if (uVar41 <= uVar13) goto thunk_FUN_01ab6c44;
LAB_037922e4:
      lVar40 = lVar26 + lVar43 * 0x188;
      *(ulong *)(lVar40 + 0xa0) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar40 + 0xa0) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar40 + 0xa0));
      *(float *)(lVar40 + 0xa8) = fVar52 + *(float *)(lVar40 + 0xa8);
      *(ulong *)(lVar40 + 0x78) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar40 + 0x78) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar40 + 0x78));
      *(float *)(lVar40 + 0x80) = fVar52 + *(float *)(lVar40 + 0x80);
      *(ulong *)(lVar40 + 200) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar40 + 200) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar40 + 200));
      *(float *)(lVar40 + 0xd0) = fVar52 + *(float *)(lVar40 + 0xd0);
      *(ulong *)(lVar40 + 0xf0) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar40 + 0xf0) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar40 + 0xf0));
      *(float *)(lVar40 + 0xf8) = fVar52 + *(float *)(lVar40 + 0xf8);
    }
    else {
LAB_037922d4:
      bVar10 = false;
LAB_037922d8:
      if (uVar41 <= uVar13) goto thunk_FUN_01ab6c44;
      if (bVar10) goto LAB_037922e4;
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(plVar42);
        DAT_0411f172 = '\x01';
        uVar41 = *(uint *)(lVar26 + 0x18);
      }
      uVar45 = *(undefined4 *)(*(undefined8 **)(*plVar42 + 0xb8) + 1);
      lVar28 = lVar26 + lVar43 * 0x188;
      *(undefined8 *)(lVar28 + 0xa0) = **(undefined8 **)(*plVar42 + 0xb8);
      *(undefined4 *)(lVar28 + 0xa8) = uVar45;
      if (uVar41 <= uVar13) goto thunk_FUN_01ab6c44;
      uVar45 = *(undefined4 *)(*(undefined8 **)(*plVar42 + 0xb8) + 1);
      lVar28 = lVar26 + lVar43 * 0x188;
      *(undefined8 *)(lVar28 + 0x78) = **(undefined8 **)(*plVar42 + 0xb8);
      *(undefined4 *)(lVar28 + 0x80) = uVar45;
      uVar45 = *(undefined4 *)(*(undefined8 **)(*plVar42 + 0xb8) + 1);
      *(undefined8 *)(lVar28 + 200) = **(undefined8 **)(*plVar42 + 0xb8);
      *(undefined4 *)(lVar28 + 0xd0) = uVar45;
      uVar45 = *(undefined4 *)(*(undefined8 **)(*plVar42 + 0xb8) + 1);
      *(undefined8 *)(lVar28 + 0xf0) = **(undefined8 **)(*plVar42 + 0xb8);
      *(undefined4 *)(lVar28 + 0xf8) = uVar45;
      *(undefined1 *)(lVar40 + 0x1a0) = 0;
    }
    iVar15 = FUN_0368e42c(0);
    if (iVar15 == 1) {
      cVar39 = *(char *)(in_stack_000001e0 + 0xa2);
    }
    else {
      cVar39 = '\0';
    }
    if (cVar22 == '\x01') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a429c(uVar13,cVar39 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
    else if (cVar22 == '\x02') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a4cd4(uVar13,cVar39 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
LAB_037924bc:
    lVar40 = *in_stack_000001e8;
    if (lVar40 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar40 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
    lVar40 = lVar40 + lVar43 * 0x188;
    uVar56 = *(undefined8 *)(lVar40 + 0x124);
    *(undefined8 *)(lVar40 + 0x124) =
         CONCAT44(fVar48 + (float)((ulong)uVar56 >> 0x20),fVar60 + (float)uVar56);
    *(float *)(lVar40 + 300) = fVar52 + *(float *)(lVar40 + 300);
    lVar40 = *in_stack_000001e8;
    if (lVar40 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar40 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
    lVar40 = lVar40 + lVar43 * 0x188;
    *(ulong *)(lVar40 + 0x118) =
         CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar40 + 0x118) >> 0x20),
                  fVar60 + (float)*(undefined8 *)(lVar40 + 0x118));
    *(float *)(lVar40 + 0x120) = fVar52 + *(float *)(lVar40 + 0x120);
    lVar40 = *in_stack_000001e8;
    if (lVar40 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar40 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
    lVar40 = lVar40 + lVar43 * 0x188;
    *(ulong *)(lVar40 + 0x130) =
         CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar40 + 0x130) >> 0x20),
                  fVar60 + (float)*(undefined8 *)(lVar40 + 0x130));
    *(float *)(lVar40 + 0x138) = fVar52 + *(float *)(lVar40 + 0x138);
    lVar40 = *in_stack_000001e8;
    if (lVar40 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar40 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
    lVar40 = lVar40 + lVar43 * 0x188;
    *(float *)(lVar40 + 0x13c) = fVar60 + *(float *)(lVar40 + 0x13c);
    *(ulong *)(lVar40 + 0x140) =
         CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar40 + 0x140) >> 0x20),
                  fVar48 + (float)*(undefined8 *)(lVar40 + 0x140));
    lVar40 = *in_stack_000001e8;
    if (lVar40 == 0) goto LAB_03793c9c;
    uVar41 = *(uint *)(lVar40 + 0x18);
    if (uVar41 <= uVar13) goto thunk_FUN_01ab6c44;
    lVar28 = lVar40 + lVar43 * 0x188;
    *(float *)(lVar28 + 0x148) = fVar60 + *(float *)(lVar28 + 0x148);
    *(float *)(lVar28 + 0x164) = fVar60 + *(float *)(lVar28 + 0x164);
    *(float *)(lVar28 + 0x154) = fVar48 + *(float *)(lVar28 + 0x154);
    uVar56 = *(undefined8 *)(lVar28 + 0x14c);
    *(undefined8 *)(lVar28 + 0x14c) =
         CONCAT44(fVar48 + (float)((ulong)uVar56 >> 0x20),fVar48 + (float)uVar56);
    if (uVar24 == uVar29) {
      uVar29 = *in_stack_000001d0 - 1;
      if (uVar13 == uVar29) goto LAB_037926b4;
    }
    else {
      lVar28 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar28 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar28 + 0x18) <= uVar29) goto thunk_FUN_01ab6c44;
      lVar35 = (long)(int)uVar29;
      lVar38 = lVar28 + lVar35 * 0x60;
      fVar52 = fVar48 + *(float *)(lVar38 + 0x58);
      *(ulong *)(lVar38 + 0x50) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar38 + 0x50) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar38 + 0x50));
      *(float *)(lVar38 + 0x58) = fVar52;
      *(float *)(lVar38 + 0x5c) = fVar60 + *(float *)(lVar38 + 0x5c);
      if (uVar41 <= *(uint *)(lVar38 + 0x38)) goto thunk_FUN_01ab6c44;
      uVar45 = *(undefined4 *)(lVar40 + (long)(int)*(uint *)(lVar38 + 0x38) * 0x188 + 0x124);
      lVar28 = lVar28 + lVar35 * 0x60;
      *(float *)(lVar28 + 0x74) = fVar52;
      *(undefined4 *)(lVar28 + 0x70) = uVar45;
      lVar40 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar40 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar40 + 0x18) <= uVar29) goto thunk_FUN_01ab6c44;
      lVar28 = *in_stack_000001e8;
      if (lVar28 == 0) goto LAB_03793c9c;
      uVar29 = *(uint *)(lVar40 + lVar35 * 0x60 + 0x44);
      if (*(uint *)(lVar28 + 0x18) <= uVar29) goto thunk_FUN_01ab6c44;
      lVar40 = lVar40 + lVar35 * 0x60;
      *(undefined4 *)(lVar40 + 0x78) = *(undefined4 *)(lVar28 + (long)(int)uVar29 * 0x188 + 0x130);
      *(undefined4 *)(lVar40 + 0x7c) = *(undefined4 *)(lVar40 + 0x50);
      uVar29 = *in_stack_000001d0 - 1;
LAB_037926b4:
      if (uVar13 == uVar29) {
        lVar40 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar40 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar40 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
        lVar28 = lVar40 + lVar33 * 0x60;
        fVar52 = fVar48 + *(float *)(lVar28 + 0x58);
        *(ulong *)(lVar28 + 0x50) =
             CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar28 + 0x50) >> 0x20),
                      fVar48 + (float)*(undefined8 *)(lVar28 + 0x50));
        *(float *)(lVar28 + 0x58) = fVar52;
        *(float *)(lVar28 + 0x5c) = fVar60 + *(float *)(lVar28 + 0x5c);
        lVar35 = *in_stack_000001e8;
        if (lVar35 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar35 + 0x18) <= *(uint *)(lVar28 + 0x38)) goto thunk_FUN_01ab6c44;
        uVar45 = *(undefined4 *)(lVar35 + (long)(int)*(uint *)(lVar28 + 0x38) * 0x188 + 0x124);
        lVar40 = lVar40 + lVar33 * 0x60;
        *(float *)(lVar40 + 0x74) = fVar52;
        *(undefined4 *)(lVar40 + 0x70) = uVar45;
        lVar40 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar40 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar40 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
        lVar28 = *in_stack_000001e8;
        if (lVar28 == 0) goto LAB_03793c9c;
        uVar29 = *(uint *)(lVar40 + lVar33 * 0x60 + 0x44);
        if (*(uint *)(lVar28 + 0x18) <= uVar29) goto thunk_FUN_01ab6c44;
        lVar40 = lVar40 + lVar33 * 0x60;
        *(undefined4 *)(lVar40 + 0x78) = *(undefined4 *)(lVar28 + (long)(int)uVar29 * 0x188 + 0x130)
        ;
        *(undefined4 *)(lVar40 + 0x7c) = *(undefined4 *)(lVar40 + 0x50);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar20 = FUN_026b82c4(uVar37,0);
    if (((((uVar20 & 1) == 0) && (1 < uVar37 - 0x2010)) && (uVar37 != 0xad)) && (uVar37 != 0x2d)) {
      if ((_fStack0000000000000168 & 0x100000000) == 0) {
        if (uVar23 == 1) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          bVar12 = FUN_026b81f8(uVar37,0);
          if (((uVar37 == 0x200b) || (((bVar11 | bVar12 ^ 1) & 1) != 0)) ||
             (*in_stack_000001d0 == 1)) goto LAB_037930d8;
        }
        fStack000000000000016c = 0.0;
      }
      else {
        if (((uVar23 != 1) && ((int)uVar13 < (int)(*(uint *)(lVar26 + 0x18) - 1))) &&
           (((int)uVar13 < (int)*in_stack_000001d0 && ((uVar37 == 0x2019 || (uVar37 == 0x27)))))) {
          if (*(uint *)(lVar26 + 0x18) <= uVar23 - 2) goto thunk_FUN_01ab6c44;
          uVar3 = *(undefined2 *)(lVar26 + (long)in_stack_000001a8 + -0x464);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b82c4(uVar3,0);
          if ((uVar20 & 1) != 0) {
            if (*(uint *)(lVar26 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
            uVar3 = *(undefined2 *)(lVar26 + (long)in_stack_000001a8 + -0x154);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar20 = FUN_026b82c4(uVar3,0);
            if ((uVar20 & 1) != 0) goto LAB_0379289c;
          }
        }
LAB_037930d8:
        if (uVar13 == *in_stack_000001d0 - 1) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b82c4(uVar37,0);
          fStack0000000000000170 = (float)uVar13;
          if ((uVar20 & 1) == 0) goto LAB_03793114;
        }
        else {
LAB_03793114:
          fStack0000000000000170 = (float)(iStack0000000000000178 - 1);
        }
        lVar40 = *plVar18;
        if (lVar40 == 0) goto LAB_03793c9c;
        uVar29 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar15 = *(int *)(lVar40 + 0x18);
        if (iVar15 < (int)(uVar29 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(plVar18,iVar15 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar40 = *plVar18;
          if (lVar40 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar40 + 0x18) <= uVar29) goto thunk_FUN_01ab6c44;
        lVar40 = lVar40 + (long)(int)uVar29 * 0xc;
        *(float *)(lVar40 + 0x20) = fStack0000000000000168;
        *(float *)(lVar40 + 0x24) = fStack0000000000000170;
        *(int *)(lVar40 + 0x28) = ((int)fStack0000000000000170 - (int)fStack0000000000000168) + 1;
        lVar40 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar40 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar40 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
        lVar40 = lVar40 + lVar33 * 0x60;
        fStack000000000000016c = 0.0;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar40 + 0x34) = *(int *)(lVar40 + 0x34) + 1;
      }
    }
    else {
      if ((_fStack0000000000000168 & 0x100000000) == 0) {
        fStack0000000000000168 = (float)uVar13;
      }
      if (uVar13 == *in_stack_000001d0 - 1) {
        lVar40 = *plVar18;
        if (lVar40 == 0) goto LAB_03793c9c;
        uVar29 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar15 = *(int *)(lVar40 + 0x18);
        if (iVar15 < (int)(uVar29 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(plVar18,iVar15 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar40 = *plVar18;
          if (lVar40 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar40 + 0x18) <= uVar29) goto thunk_FUN_01ab6c44;
        lVar40 = lVar40 + (long)(int)uVar29 * 0xc;
        *(float *)(lVar40 + 0x20) = fStack0000000000000168;
        *(uint *)(lVar40 + 0x24) = uVar13;
        *(uint *)(lVar40 + 0x28) = uVar23 - (int)fStack0000000000000168;
        lVar40 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar40 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar40 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
        lVar40 = lVar40 + lVar33 * 0x60;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar40 + 0x34) = *(int *)(lVar40 + 0x34) + 1;
      }
LAB_0379289c:
      fStack000000000000016c = 1.4013e-45;
    }
    lVar40 = *in_stack_000001e8;
    if (lVar40 == 0) goto LAB_03793c9c;
    uVar29 = *(uint *)(lVar40 + 0x18);
    if (uVar29 <= uVar13) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar40 + lVar43 * 0x188 + 0x19c) >> 2 & 1) == 0) {
      if (bVar7) {
LAB_037928d0:
        if (uVar23 - 2 < uVar29) {
          uVar45 = *(undefined4 *)(lVar40 + (long)in_stack_000001a8 + -0x354);
          uVar54 = *(undefined4 *)(lVar40 + (long)in_stack_000001a8 + -0x318);
          goto LAB_03792b34;
        }
        goto thunk_FUN_01ab6c44;
      }
LAB_03792a8c:
      bVar7 = false;
    }
    else {
      lVar33 = *(long *)(unaff_x19 + 0x15b8);
      if (lVar33 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) goto thunk_FUN_01ab6c44;
      iVar15 = *(int *)(lVar40 + lVar43 * 0x188 + 0x70);
      *(int *)(lVar40 + lVar43 * 0x188 + 0x178) =
           *(int *)(lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar13) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar24)) {
        bVar10 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar10 = iVar15 + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar10 = false;
      }
      if (uVar37 != 0x200b && (bVar11 & 1) == 0) {
        fVar52 = *(float *)(lVar40 + lVar43 * 0x188 + 0x16c);
        if (fVar46 <= fVar52) {
          fVar46 = fVar52;
        }
        if (iVar15 != iStack00000000000000c0) {
          fStack000000000000015c = fVar49;
        }
        if (lVar32 == 0) goto LAB_03793c9c;
        fVar52 = *(float *)(lVar40 + lVar43 * 0x188 + 0x150);
        if (fStack0000000000000174 <= ABS(fVar53)) {
          fStack0000000000000174 = ABS(fVar53);
        }
        FUN_03779650(&stack0x000016a0,lVar32,0);
        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
        fVar59 = (float)FUN_03776a10(&stack0x00001610,0);
        fVar52 = fVar52 + fVar46 * fVar59;
        iStack00000000000000c0 = iVar15;
        if (fVar52 <= fStack000000000000015c) {
          fStack000000000000015c = fVar52;
        }
      }
      if ((((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar13)) ||
         (bVar7 || bVar10)) {
LAB_03792a80:
        if (!bVar7) goto LAB_03792a8c;
      }
      else {
        if (uVar13 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b97f8(uVar37,0);
          if ((uVar20 & 1) != 0) goto LAB_03792a80;
        }
        lVar40 = *in_stack_000001e8;
        if (lVar40 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar40 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        lVar40 = lVar40 + lVar43 * 0x188;
        _bStack00000000000000d8 = *(float *)(lVar40 + 0x16c);
        fStack00000000000000d0 = *(float *)(lVar40 + 0x124);
        bVar7 = fVar46 != 0.0;
        fVar52 = _bStack00000000000000d8;
        if (bVar7) {
          fVar52 = fVar46;
        }
        fVar46 = fVar52;
        uVar44 = *(undefined4 *)(lVar40 + 0x174);
        uStack00000000000000cc = 0;
        fVar52 = fVar53;
        if (bVar7) {
          fVar52 = fStack0000000000000174;
        }
        fStack00000000000000c8 = fStack000000000000015c;
        fStack0000000000000174 = fVar52;
      }
      if (*in_stack_000001d0 == 1) {
        lVar40 = *in_stack_000001e8;
        if (lVar40 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar40 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        lVar40 = lVar40 + lVar43 * 0x188;
        uVar45 = *(undefined4 *)(lVar40 + 0x130);
        uVar54 = *(undefined4 *)(lVar40 + 0x16c);
LAB_03792b34:
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,uStack00000000000000cc,uVar45,
                     fStack000000000000015c,0,_bStack00000000000000d8,uVar54);
      }
      else {
        if ((uVar13 == uVar4) || ((int)uVar5 <= (int)uVar13)) {
          lVar40 = *in_stack_000001e8;
          if (lVar40 != 0) {
            lVar33 = lVar43;
            uVar29 = uVar13;
            if (uVar37 == 0x200b || (bVar11 & 1) != 0) {
              lVar33 = lVar34;
              uVar29 = uVar5;
            }
            if (uVar29 < *(uint *)(lVar40 + 0x18)) {
              lVar40 = lVar40 + lVar33 * 0x188;
              uVar45 = *(undefined4 *)(lVar40 + 0x130);
              uVar54 = *(undefined4 *)(lVar40 + 0x16c);
              goto LAB_03792b34;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
        if (bVar10) {
          lVar40 = *in_stack_000001e8;
          if (lVar40 != 0) {
            uVar29 = *(uint *)(lVar40 + 0x18);
            goto LAB_037928d0;
          }
          goto LAB_03793c9c;
        }
        if ((int)(*in_stack_000001d0 - 1) <= (int)uVar13) {
LAB_03793294:
          bVar7 = true;
          goto LAB_03792b70;
        }
        lVar40 = *in_stack_000001e8;
        if (lVar40 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar40 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
        uVar20 = FUN_03779528(uVar44,*(undefined4 *)(lVar40 + (long)in_stack_000001a8),0);
        if ((uVar20 & 1) != 0) goto LAB_03793294;
        lVar40 = *in_stack_000001e8;
        if (lVar40 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar40 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        lVar40 = lVar40 + lVar43 * 0x188;
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,uStack00000000000000cc,
                     *(undefined4 *)(lVar40 + 0x130),fStack000000000000015c,0,
                     _bStack00000000000000d8,*(undefined4 *)(lVar40 + 0x16c));
      }
      fVar46 = 0.0;
      bVar7 = false;
      fStack000000000000015c = DAT_00d38d70;
      fStack0000000000000174 = 0.0;
    }
LAB_03792b70:
    lVar40 = *in_stack_000001e8;
    if (lVar40 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar40 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
    if (lVar32 == 0) goto LAB_03793c9c;
    uVar29 = *(uint *)(lVar40 + lVar43 * 0x188 + 0x19c);
    FUN_03779650(&stack0x000016a0,lVar32,0);
    memcpy(&stack0x00001610,&stack0x000016a0,0x60);
    fVar52 = (float)FUN_03776a30(&stack0x00001610,0);
    if ((uVar29 >> 6 & 1) == 0) {
      if (bVar9) {
        lVar40 = *in_stack_000001e8;
        if (lVar40 != 0) {
          if (uVar23 - 2 < *(uint *)(lVar40 + 0x18)) {
            fVar48 = *(float *)(lVar40 + (long)in_stack_000001a8 + -0x334);
            uVar45 = *(undefined4 *)(lVar40 + (long)in_stack_000001a8 + -0x354);
            goto LAB_037932fc;
          }
          goto thunk_FUN_01ab6c44;
        }
        goto LAB_03793c9c;
      }
LAB_03792cf8:
      bVar9 = false;
    }
    else {
      lVar40 = *in_stack_000001e8;
      if ((lVar40 == 0) || (lVar33 = *(long *)(unaff_x19 + 0x15b8), lVar33 == 0)) goto LAB_03793c9c;
      if ((*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) ||
         (*(uint *)(lVar40 + 0x18) <= uVar13)) goto thunk_FUN_01ab6c44;
      *(int *)(lVar40 + lVar43 * 0x188 + 0x180) =
           *(int *)(lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar13) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar24)) {
        bVar10 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar10 = *(int *)(lVar40 + lVar43 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar10 = false;
      }
      if ((((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar13)) ||
         (!(bool)(~bVar9 & (bVar10 ^ 1U)))) {
LAB_03792cf0:
        if (!bVar9) goto LAB_03792cf8;
      }
      else {
        if (uVar13 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b97f8(uVar37,0);
          if ((uVar20 & 1) != 0) goto LAB_03792cf0;
          lVar40 = *in_stack_000001e8;
          if (lVar40 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar40 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        lVar40 = lVar40 + lVar43 * 0x188;
        fStack00000000000000f0 = *(float *)(lVar40 + 0x16c);
        in_stack_000000e8._4_4_ = *(float *)(lVar40 + 0x124);
        fStack00000000000000a8 = *(float *)(lVar40 + 0x68);
        in_stack_000000a0._4_4_ = *(float *)(lVar40 + 0x150);
        fStack00000000000000e0 = fVar52 * fStack00000000000000f0 + in_stack_000000a0._4_4_;
        uStack00000000000000dc = 0;
      }
      uVar29 = *in_stack_000001d0;
      if (uVar29 == 1) {
LAB_03792ef4:
        lVar33 = *in_stack_000001e8;
        if (lVar33 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar33 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        lVar33 = lVar33 + lVar43 * 0x188;
      }
      else {
        lVar40 = lVar43;
        if (uVar13 == uVar4) {
          lVar33 = *in_stack_000001e8;
          if (lVar33 == 0) goto LAB_03793c9c;
          uVar29 = uVar13;
          if ((uVar37 != 0x200b & (bVar11 ^ 1)) == 0) {
            lVar40 = lVar34;
            uVar29 = uVar5;
          }
          if (*(uint *)(lVar33 + 0x18) <= uVar29) goto thunk_FUN_01ab6c44;
        }
        else {
          if ((int)uVar29 <= (int)uVar13) {
LAB_03792fdc:
            if ((int)uVar13 < (int)uVar29) {
              iVar15 = FUN_036d3364(lVar32,0);
              if (*(uint *)(lVar26 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
              lVar40 = *(long *)(lVar26 + (long)in_stack_000001a8 + -0x134);
              if (lVar40 == 0) goto LAB_03793c9c;
              iVar14 = FUN_036d3364(lVar40,0);
              if (iVar15 != iVar14) goto LAB_03792ef4;
            }
            if (!bVar10) {
              bVar9 = true;
              goto LAB_03793338;
            }
            lVar40 = *in_stack_000001e8;
            if (lVar40 != 0) {
              if (uVar23 - 2 < *(uint *)(lVar40 + 0x18)) {
                fVar48 = *(float *)(lVar40 + (long)in_stack_000001a8 + -0x334);
                uVar45 = *(undefined4 *)(lVar40 + (long)in_stack_000001a8 + -0x354);
                goto LAB_037932fc;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          lVar33 = *in_stack_000001e8;
          if (lVar33 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar33 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
          if (*(float *)(lVar33 + (long)in_stack_000001a8 + -0x10c) == fStack00000000000000a8) {
            fVar59 = *(float *)(lVar33 + (long)in_stack_000001a8 + -0x24);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                        ) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar20 = FUN_037a2200(fVar48 + fVar59,in_stack_000000a0._4_4_,0);
            if ((uVar20 & 1) != 0) {
              uVar29 = *in_stack_000001d0;
              goto LAB_03792fdc;
            }
            lVar33 = *in_stack_000001e8;
            if (lVar33 == 0) goto LAB_03793c9c;
          }
          uVar29 = uVar13;
          if ((int)uVar5 < (int)uVar13) {
            lVar40 = lVar34;
            uVar29 = uVar5;
          }
          if (*(uint *)(lVar33 + 0x18) <= uVar29) goto thunk_FUN_01ab6c44;
        }
        lVar33 = lVar33 + lVar40 * 0x188;
      }
      fVar48 = *(float *)(lVar33 + 0x150);
      uVar45 = *(undefined4 *)(lVar33 + 0x130);
LAB_037932fc:
      FUN_0379d0d0(in_stack_000000e8._4_4_,fStack00000000000000e0,uStack00000000000000dc,uVar45,
                   fStack00000000000000f0 * fVar52 + fVar48,0,fStack00000000000000f0,
                   fStack00000000000000f0);
      bVar9 = false;
    }
LAB_03793338:
    lVar40 = *in_stack_000001e8;
    if (lVar40 == 0) goto LAB_03793c9c;
    uVar29 = (uint)*(undefined8 *)(lVar40 + 0x18);
    if (uVar29 <= uVar13) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar40 + lVar43 * 0x188 + 0x19d) >> 1 & 1) == 0) {
      if (bVar8) {
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
      }
LAB_03793428:
      bVar8 = false;
    }
    else {
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar13) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar24)) {
        bVar10 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar10 = *(int *)(lVar40 + lVar43 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar10 = false;
      }
      if (!bVar8) {
        if (((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) ||
           (((int)uVar5 < (int)uVar13 || (bVar10)))) goto LAB_03793428;
        if (uVar13 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b97f8(uVar37,0);
          if ((uVar20 & 1) != 0) goto LAB_03793428;
        }
        puVar6 = Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        lVar32 = *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        if (*(int *)(lVar32 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar32 = *(long *)puVar6;
        }
        lVar40 = *in_stack_000001e8;
        if (lVar40 == 0) goto LAB_03793c9c;
        uVar29 = (uint)*(undefined8 *)(lVar40 + 0x18);
        if (uVar29 <= uVar13) goto thunk_FUN_01ab6c44;
        pfVar36 = *(float **)(lVar32 + 0xb8);
        fStack0000000000000128 = *pfVar36;
        in_stack_00000140._4_4_ = pfVar36[1];
        fStack000000000000012c = pfVar36[2];
        fStack0000000000000130 = pfVar36[3];
        uStack0000000000000124 = 0;
      }
      if (uVar29 <= uVar13) goto thunk_FUN_01ab6c44;
      lVar40 = lVar40 + lVar43 * 0x188;
      fVar59 = *(float *)(lVar40 + 0x130);
      fVar57 = *(float *)(lVar40 + 0x124);
      fVar48 = *(float *)(lVar40 + 0x148);
      fVar62 = *(float *)(lVar40 + 0x14c);
      fVar47 = *(float *)(lVar40 + 0x154);
      fVar52 = *(float *)(lVar40 + 0x164);
      uVar20 = FUN_037a20cc(&stack0x00000210,&stack0x000001f0,0);
      lVar40 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
      if ((uVar20 & 1) == 0) {
        if (*(int *)(lVar40 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar40);
        }
        fVar55 = (float)FUN_037a1dd8(uVar30,0);
        bVar8 = (bVar11 & 1) == 0;
        if (bVar8) {
          fVar48 = fVar57;
        }
        if (bVar8) {
          fVar52 = fVar59;
        }
        if (fVar48 - fVar55 <= fStack0000000000000128) {
          fStack0000000000000128 = fVar48 - fVar55;
        }
        fVar48 = (float)FUN_037a1de0(uVar30,0);
        if (fStack000000000000012c <= fVar52 + fVar48) {
          fStack000000000000012c = fVar52 + fVar48;
        }
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar48 = (float)FUN_037a1df0(uVar30,0);
        if (fVar47 - fVar48 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar47 - fVar48;
        }
        fVar48 = (float)FUN_037a1de8(uVar30,0);
        if (fStack0000000000000130 <= fVar62 + fVar48) {
          fStack0000000000000130 = fVar62 + fVar48;
        }
      }
      else {
        if (*(int *)(lVar40 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar40);
        }
        fVar55 = (float)FUN_037a1de0(uVar30,0);
        if ((bVar11 & 1) == 0) {
          fVar48 = fVar57;
        }
        if (fVar47 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar47;
        }
        fVar48 = (fVar48 + (fStack000000000000012c - fVar55)) * 0.5;
        if (fStack0000000000000130 <= fVar62) {
          fStack0000000000000130 = fVar62;
        }
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,fVar48,
                     fStack0000000000000130,uStack0000000000000124);
        puVar6 = Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000140._4_4_ = (float)FUN_037a1df0(uVar17,0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000140._4_4_ = fVar47 - in_stack_00000140._4_4_;
        fStack000000000000012c = (float)FUN_037a1de0(uVar17,0);
        fVar47 = (float)FUN_037a1de8(uVar17,0);
        if ((bVar11 & 1) == 0) {
          fVar52 = fVar59;
        }
        fStack000000000000012c = fVar52 + fStack000000000000012c;
        uStack0000000000000124 = 0;
        fStack0000000000000128 = fVar48;
        fStack0000000000000130 = fVar62 + fVar47;
      }
      if ((((*in_stack_000001d0 == 1) || (uVar13 == uVar4)) || ((int)uVar5 <= (int)uVar13)) ||
         (bVar10)) {
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
    }
    uVar13 = *in_stack_000001d0;
    iStack0000000000000178 = iStack0000000000000178 + 1;
    in_stack_000001a8 = (long *)((long)in_stack_000001a8 + 0x188);
    bVar10 = (int)uVar23 < (int)uVar13;
    uVar29 = uVar24;
    uVar23 = uVar23 + 1;
  } while (bVar10);
  iVar15 = uVar24 + 1;
  plVar18 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
LAB_03793a5c:
  *(uint *)(in_stack_000001c0 + 0x10) = uVar13;
  uVar44 = *(undefined4 *)(unaff_x19 + 0x15c0);
  *(int *)(in_stack_000001c0 + 0x24) = iVar15;
  if ((int)uVar13 < 1 || iStack0000000000000138 == 0) {
    iStack0000000000000138 = 1;
  }
  *(int *)(in_stack_000001c0 + 0x1c) = iStack0000000000000138;
  *(undefined4 *)(in_stack_000001c0 + 0x14) = uVar44;
  *(int *)(in_stack_000001c0 + 0x28) = *(int *)(unaff_x19 + 0x350) + 1;
  if (1 < *(int *)(in_stack_000001c0 + 0x2c)) {
    uVar17 = 1;
    lVar26 = 0x70;
    do {
      lVar40 = *(long *)(in_stack_000001c0 + 0x58);
      if (lVar40 == 0) {
LAB_03793c9c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(*plVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(uint *)(lVar40 + 0x18) <= uVar17) goto thunk_FUN_01ab6c44;
      FUN_03785ba0(lVar40 + lVar26,0);
      if (*(int *)(in_stack_000001e0 + 0x100) != 0) {
        lVar40 = *(long *)(in_stack_000001c0 + 0x58);
        if (lVar40 == 0) goto LAB_03793c9c;
        if (*(int *)(*plVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar40 + 0x18) <= uVar17) {
thunk_FUN_01ab6c44:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03785bdc(lVar40 + lVar26,1,0);
      }
      uVar17 = uVar17 + 1;
      lVar26 = lVar26 + 0x50;
    } while ((long)uVar17 < (long)*(int *)(in_stack_000001c0 + 0x2c));
  }
LAB_0378c81c:
  if (*(long *)(in_stack_00000110 + 0x28) == in_stack_00001a38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


