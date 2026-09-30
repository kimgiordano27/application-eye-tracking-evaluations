/*
FUNCTION_NAME: FUN_03dd6488
ENTRY_POINT: 03dd6488
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_03dd6488(void)

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
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  long *plVar18;
  ulong uVar19;
  undefined1 *puVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 uVar23;
  char cVar24;
  uint in_w8;
  uint uVar25;
  long lVar26;
  float *pfVar27;
  long lVar28;
  uint uVar29;
  long lVar30;
  long lVar31;
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
  long unaff_x21;
  uint uVar40;
  long *plVar41;
  undefined4 unaff_w23;
  uint uVar42;
  long *unaff_x24;
  long lVar43;
  long unaff_x25;
  undefined8 uVar44;
  ulong unaff_x26;
  byte *unaff_x27;
  long unaff_x29;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined4 uVar55;
  float unaff_s8;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined8 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined8 in_stack_00000020;
  int iStack0000000000000028;
  float fStack000000000000002c;
  int *in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  long *in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  void *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  uint uStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  int iStack000000000000008c;
  uint uStack0000000000000090;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  float fStack00000000000000b0;
  uint uStack00000000000000b4;
  byte in_stack_000000c0;
  int iStack00000000000000c8;
  float fStack00000000000000d4;
  undefined4 uStack00000000000000d8;
  float fStack00000000000000dc;
  byte bStack00000000000000e0;
  uint uStack00000000000000e4;
  float fStack00000000000000e8;
  float fStack00000000000000f4;
  float fStack00000000000000f8;
  undefined8 *in_stack_00000100;
  undefined8 *in_stack_00000108;
  float in_stack_00000110;
  undefined8 uStack0000000000000118;
  undefined8 in_stack_00000120;
  undefined4 uStack0000000000000128;
  float fStack000000000000012c;
  float fStack0000000000000130;
  float fStack0000000000000138;
  float fStack0000000000000140;
  float fStack0000000000000144;
  float in_stack_00000148;
  float in_stack_00000150;
  float fStack000000000000015c;
  float fStack0000000000000160;
  float fStack0000000000000168;
  undefined4 uStack000000000000016c;
  uint uStack0000000000000170;
  float fStack0000000000000174;
  float fStack0000000000000178;
  float fStack000000000000017c;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float in_stack_00000188;
  long *in_stack_00000190;
  int in_stack_000001a8;
  float fStack00000000000001b4;
  long in_stack_000001b8;
  undefined8 in_stack_000001c0;
  uint *in_stack_000001c8;
  long in_stack_000001d0;
  long *in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined4 in_stack_000001f0;
  uint in_stack_000011cc;
  uint in_stack_000011fc;
  undefined8 in_stack_00001278;
  char in_stack_00001284;
  float in_stack_00001288;
  uint in_stack_0000128c;
  long in_stack_00001628;
  
code_r0x03dd6488:
  iVar17 = (int)unaff_x26;
  if (in_w8 == 1) {
    lVar26 = *in_stack_000001d8;
    if (lVar26 == 0) goto LAB_03ddcaac;
    uVar14 = *(uint *)(lVar26 + 0x18);
    uVar15 = *in_stack_000001c8;
    if (uVar14 <= uVar15) goto LAB_03ddcab0;
    lVar31 = *(long *)(lVar26 + (long)(int)uVar15 * unaff_x26 + 0x30);
    *(long *)(unaff_x19 + 0x1588) = lVar31;
    plVar41 = (long *)PTR_DAT_0422fae0;
    if (lVar31 == 0) goto LAB_03dd6304;
    lVar32 = lVar26 + (long)(int)uVar15 * unaff_x26;
    lVar31 = *(long *)(lVar32 + 0x40);
    *(long *)(unaff_x19 + 0x68) = lVar31;
    *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(lVar32 + 0x58);
    *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar32 + 0x60);
    if (in_stack_000001c0._4_4_ == 0) {
LAB_03dd65b4:
      if (lVar31 == 0) goto LAB_03ddcaac;
      fVar56 = *(float *)(unaff_x19 + 0xf4);
      iVar13 = FUN_03dc0e20(lVar31 + 0xb0,0);
      lVar26 = *(long *)(unaff_x19 + 0x68);
    }
    else {
      lVar32 = *(long *)(unaff_x19 + 0x20);
      if (lVar32 == 0) goto LAB_03ddcaac;
      if (*(uint *)(lVar32 + 0x18) <= in_stack_000011fc) goto LAB_03ddcab0;
      if ((*(int *)(lVar32 + (long)(int)in_stack_000011fc * 0x10 + 0x24) != 10) ||
         (uVar15 == *(uint *)(unaff_x19 + 0x328))) goto LAB_03dd65b4;
      if (uVar14 <= uVar15 - 1) goto LAB_03ddcab0;
      if (lVar31 == 0) goto LAB_03ddcaac;
      fVar56 = *(float *)(lVar26 + (long)(int)(uVar15 - 1) * (long)iVar17 + 0x68);
      iVar13 = FUN_03dc0e20(lVar31 + 0xb0,0);
      lVar26 = *unaff_x24;
    }
    if (lVar26 == 0) goto LAB_03ddcaac;
    fVar45 = (float)FUN_03dc0e30(lVar26 + 0xb0,0);
    fVar60 = in_stack_00000148;
    if (*(char *)(unaff_x25 + 0xbd) != '\0') {
      fVar60 = 1.0;
    }
    fVar48 = 0.0;
    fStack0000000000000178 = 0.0;
    if ((in_stack_000001c0._4_4_ & in_stack_0000128c == 0x2026) == 0) {
      if (*unaff_x24 == 0) goto LAB_03ddcaac;
      fStack0000000000000178 = (float)FUN_03dc0e50(*unaff_x24 + 0xb0,0);
      if (*unaff_x24 == 0) goto LAB_03ddcaac;
      fVar48 = (float)UnityEngine_UIElements_EventDispatcherGate__GetHashCode(*unaff_x24 + 0xb0,0);
    }
    lVar26 = *(long *)(unaff_x19 + 0x1588);
    if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_03ddcaac;
    fVar46 = *(float *)(unaff_x19 + 0xf0);
    fVar47 = *(float *)(lVar26 + 0x2c);
    fVar65 = (float)FUN_03dc1378(*(long *)(lVar26 + 0x20),0);
    if (*unaff_x24 == 0) goto LAB_03ddcaac;
    fVar64 = (float)FUN_03dc0e80(*unaff_x24 + 0xb0,0);
    if (*unaff_x24 == 0) goto LAB_03ddcaac;
    fVar61 = *(float *)(unaff_x19 + 0xf0);
    fStack0000000000000184 = (float)FUN_03dc0e30(*unaff_x24 + 0xb0,0);
    lVar26 = *in_stack_000001d8;
    if (lVar26 == 0) goto LAB_03ddcaac;
    uVar14 = *(uint *)(unaff_x19 + 0x324);
    if (uVar14 < *(uint *)(lVar26 + 0x18)) {
      lVar31 = lVar26 + (long)(int)uVar14 * unaff_x26;
      fVar60 = ((fStack0000000000000174 * fVar56) / (float)iVar13) * fVar45 * fVar60;
      unaff_s8 = fVar60 * fVar46 * fVar47 * fVar65;
      *(undefined1 *)(lVar31 + 0x28) = 1;
      *(float *)(lVar31 + 0x16c) = unaff_s8;
      in_stack_00000188 = *(float *)(unaff_x19 + 0xd8);
      fStack0000000000000184 = fVar60 * fVar64 * fVar61 * fStack0000000000000184;
      goto LAB_03dd6b58;
    }
    goto LAB_03ddcab0;
  }
  if (in_w8 == 2) {
    lVar26 = *in_stack_000001d8;
    if (lVar26 == 0) goto LAB_03ddcaac;
    if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001c8) goto LAB_03ddcab0;
    plVar41 = *(long **)(lVar26 + (long)(int)*in_stack_000001c8 * unaff_x26 + 0x30);
    if (plVar41 == (long *)0x0) goto LAB_03ddcaac;
    bVar11 = *(byte *)(*(long *)StringLiteral_8870 + 0x130);
    if ((*(byte *)(*plVar41 + 0x130) < bVar11) ||
       (*(long *)(*(long *)(*plVar41 + 200) + (ulong)bVar11 * 8 + -8) != *(long *)StringLiteral_8870
       )) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar41);
    }
    plVar18 = (long *)FUN_03dcd358(plVar41,0);
    if (plVar18 == (long *)0x0) {
LAB_03dd6528:
      plVar18 = (long *)0x0;
    }
    else {
      bVar11 = *(byte *)(*(long *)StringLiteral_8744 + 0x130);
      if (*(byte *)(*plVar18 + 0x130) < bVar11) goto LAB_03dd6528;
      if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar11 * 8 + -8) !=
          *(long *)StringLiteral_8744) {
        plVar18 = (long *)0x0;
      }
    }
    *(long **)(unaff_x19 + 0xe0) = plVar18;
    iVar13 = FUN_03dc4f30(plVar41,0);
    *(int *)(unaff_x19 + 0x157c) = iVar13;
    if (in_stack_0000128c == 0x3c) {
      in_stack_0000128c = iVar13 + 0xe000;
    }
    else {
      uVar49 = FUN_01d35248(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      *(undefined4 *)(unaff_x19 + 0x1580) = uVar49;
    }
    if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03ddcaac;
    fVar56 = *(float *)(unaff_x19 + 0xf4);
    FUN_03dc39ac(&stack0x00001290,*(long *)(unaff_x19 + 0x68),0);
    memcpy(&stack0x00001200,&stack0x00001290,0x60);
    iVar13 = FUN_03dc0e20(&stack0x00001200,0);
    if (*unaff_x24 == 0) goto LAB_03ddcaac;
    FUN_03dc39ac(&stack0x00001290,*unaff_x24,0);
    memcpy(&stack0x00001200,&stack0x00001290,0x60);
    fVar45 = (float)FUN_03dc0e30(&stack0x00001200,0);
    fVar60 = in_stack_00000148;
    if (*(char *)(unaff_x25 + 0xbd) != '\0') {
      fVar60 = 1.0;
    }
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03ddcaac;
    fVar60 = (fVar56 / (float)iVar13) * fVar45 * fVar60;
    iVar13 = FUN_03dc0e20(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
    fVar56 = *(float *)(unaff_x19 + 0xf4);
    if (iVar13 < 1) {
      if (*unaff_x24 == 0) goto LAB_03ddcaac;
      iVar13 = FUN_03dc0e20(*unaff_x24 + 0xb0,0);
      if (*unaff_x24 == 0) goto LAB_03ddcaac;
      fVar45 = (float)FUN_03dc0e30(*unaff_x24 + 0xb0,0);
      fVar48 = in_stack_00000148;
      if (*(char *)(unaff_x25 + 0xbd) != '\0') {
        fVar48 = 1.0;
      }
      if (*unaff_x24 == 0) goto LAB_03ddcaac;
      fVar65 = (float)FUN_03dc0e50(*unaff_x24 + 0xb0,0);
      if (plVar41[4] == 0) goto LAB_03ddcaac;
      FUN_03dc133c(&stack0x00001290,plVar41[4],0);
      fVar46 = (float)FUN_03dc116c(&stack0x000011b0,0);
      if (plVar41[4] == 0) goto LAB_03ddcaac;
      fVar47 = *(float *)((long)plVar41 + 0x2c);
      fVar64 = (float)FUN_03dc1378(plVar41[4],0);
      if (*unaff_x24 == 0) goto LAB_03ddcaac;
      fStack0000000000000178 = (float)FUN_03dc0e50(*unaff_x24 + 0xb0,0);
      if (*unaff_x24 == 0) goto LAB_03ddcaac;
      fVar61 = (float)FUN_03dc0e80(*unaff_x24 + 0xb0,0);
      if (*unaff_x24 == 0) goto LAB_03ddcaac;
      fVar52 = *(float *)(unaff_x19 + 0xf0);
      fStack0000000000000184 = (float)FUN_03dc0e30(*unaff_x24 + 0xb0,0);
      if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03ddcaac;
      fStack0000000000000184 = fVar60 * fVar61 * fVar52 * fStack0000000000000184;
      fVar48 = (fVar56 / (float)iVar13) * fVar45 * fVar48;
      unaff_s8 = fVar48 * (fVar65 / fVar46) * fVar47 * fVar64;
      fVar48 = fVar48 / unaff_s8;
      fStack0000000000000178 = fVar48 * fStack0000000000000178;
      fVar56 = (float)UnityEngine_UIElements_EventDispatcherGate__GetHashCode
                                (*(long *)(unaff_x19 + 0x68) + 0xb0,0);
      fVar48 = fVar48 * fVar56;
    }
    else {
      if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03ddcaac;
      iVar13 = FUN_03dc0e20(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
      if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03ddcaac;
      fVar45 = (float)FUN_03dc0e30(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
      if (plVar41[4] == 0) goto LAB_03ddcaac;
      fVar65 = *(float *)((long)plVar41 + 0x2c);
      fVar48 = in_stack_00000148;
      if (*(char *)(unaff_x25 + 0xbd) != '\0') {
        fVar48 = 1.0;
      }
      fVar46 = (float)FUN_03dc1378(plVar41[4],0);
      if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03ddcaac;
      fStack0000000000000178 = (float)FUN_03dc0e50(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
      if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03ddcaac;
      fVar47 = (float)FUN_03dc0e80(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
      if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03ddcaac;
      fVar64 = *(float *)(unaff_x19 + 0xf0);
      fStack0000000000000184 = (float)FUN_03dc0e30(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
      if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03ddcaac;
      fStack0000000000000184 = fVar60 * fVar47 * fVar64 * fStack0000000000000184;
      unaff_s8 = (fVar56 / (float)iVar13) * fVar45 * fVar48 * fVar65 * fVar46;
      fVar48 = (float)UnityEngine_UIElements_EventDispatcherGate__GetHashCode
                                (*(long *)(unaff_x19 + 0xe0) + 0x48,0);
    }
    *(long **)(unaff_x19 + 0x1588) = plVar41;
    lVar26 = *in_stack_000001d8;
    if (lVar26 == 0) goto LAB_03ddcaac;
    uVar14 = *(uint *)(unaff_x19 + 0x324);
    if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_03ddcab0;
    lVar31 = lVar26 + (long)(int)uVar14 * unaff_x26;
    *(undefined1 *)(lVar31 + 0x28) = 2;
    *(float *)(lVar31 + 0x16c) = unaff_s8;
    in_stack_00000188 = 0.0;
    *(undefined8 *)(lVar31 + 0x48) = *(undefined8 *)(unaff_x19 + 0xe0);
    *(undefined8 *)(lVar31 + 0x40) = *(undefined8 *)(unaff_x19 + 0x68);
    *(undefined4 *)(lVar31 + 0x60) = *(undefined4 *)(unaff_x19 + 0x78);
    *(undefined4 *)(unaff_x19 + 0x78) = unaff_w23;
LAB_03dd6b58:
    _fStack0000000000000168 = CONCAT44(uStack000000000000016c,fVar48);
    fVar56 = unaff_s8;
    if (in_stack_0000128c == 3 || in_stack_0000128c == 0xad) {
      fVar56 = 0.0;
    }
  }
  else {
    lVar26 = *in_stack_000001d8;
    fVar56 = unaff_s8;
    if (in_stack_0000128c == 3 || in_stack_0000128c == 0xad) {
      fVar56 = 0.0;
    }
    fStack0000000000000184 = 0.0;
    if (lVar26 == 0) goto LAB_03ddcaac;
    fStack0000000000000178 = 0.0;
    uVar14 = *in_stack_000001c8;
    _fStack0000000000000168 = _fStack0000000000000168 & 0xffffffff00000000;
  }
  if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_03ddcab0;
  lVar26 = lVar26 + (long)(int)uVar14 * (long)iVar17;
  *(short *)(lVar26 + 0x20) = (short)in_stack_0000128c;
  *(undefined4 *)(lVar26 + 0x68) = *(undefined4 *)(unaff_x19 + 0xf4);
  *(undefined4 *)(lVar26 + 0x170) = *(undefined4 *)(unaff_x19 + 0x1ac);
  lVar26 = *in_stack_000001d8;
  if (lVar26 == 0) goto LAB_03ddcaac;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_03ddcab0;
  *(undefined4 *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x26 + 0x174) =
       *(undefined4 *)(unaff_x19 + 0x1b0);
  lVar26 = *in_stack_000001d8;
  if (lVar26 == 0) goto LAB_03ddcaac;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_03ddcab0;
  *(undefined4 *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x26 + 0x17c) =
       *(undefined4 *)(unaff_x19 + 0x1b4);
  lVar26 = *in_stack_000001d8;
  if (lVar26 == 0) goto LAB_03ddcaac;
  uVar59 = in_stack_00000108[1];
  uVar44 = *in_stack_00000108;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_03ddcab0;
  lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x26;
  *(undefined4 *)(lVar26 + 0x198) = *(undefined4 *)(in_stack_00000108 + 2);
  *(undefined8 *)(lVar26 + 400) = uVar59;
  *(undefined8 *)(lVar26 + 0x188) = uVar44;
  lVar26 = *in_stack_000001d8;
  if (lVar26 == 0) goto LAB_03ddcaac;
  if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001c8) goto LAB_03ddcab0;
  lVar26 = lVar26 + (long)(int)*in_stack_000001c8 * unaff_x26;
  lVar31 = *(long *)(lVar26 + 0x38);
  *(undefined4 *)(lVar26 + 0x19c) = *(undefined4 *)(unaff_x19 + 0x124);
  if ((lVar31 == 0) &&
     ((*(long *)(unaff_x19 + 0x1588) == 0 ||
      (lVar31 = *(long *)(*(long *)(unaff_x19 + 0x1588) + 0x20), lVar31 == 0)))) goto LAB_03ddcaac;
  FUN_03dc133c(&stack0x00001290,lVar31,0);
  if (in_stack_0000128c >> 0x10 == 0) {
    if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar14 = FUN_0324a054(in_stack_0000128c,0);
    uVar14 = uVar14 & 1;
  }
  else {
    uVar14 = 0;
  }
  uVar50 = 0;
  uVar49 = *(undefined4 *)(unaff_x25 + 0xc0);
  _fStack0000000000000180 = CONCAT44(fStack0000000000000184,uVar49);
  if (*(char *)(unaff_x25 + 0xb4) != '\0') {
    if (*(long *)(unaff_x19 + 0x1588) == 0) goto LAB_03ddcaac;
    uVar15 = *in_stack_000001c8;
    uVar29 = *(uint *)(*(long *)(unaff_x19 + 0x1588) + 0x28);
    if ((int)uVar15 < (int)uStack00000000000000e4) {
      lVar26 = *in_stack_000001d8;
      if (lVar26 == 0) goto LAB_03ddcaac;
      if (*(uint *)(lVar26 + 0x18) <= uVar15 + 1) goto LAB_03ddcab0;
      lVar26 = *(long *)(lVar26 + (long)(int)(uVar15 + 1) * (long)iVar17 + 0x30);
      if ((((lVar26 == 0) || (*unaff_x24 == 0)) ||
          (lVar31 = *(long *)(*unaff_x24 + 0x170), lVar31 == 0)) ||
         (lVar31 = *(long *)(lVar31 + 0x40), lVar31 == 0)) goto LAB_03ddcaac;
      uVar19 = FUN_0295c2c8(lVar31,uVar29 | *(int *)(lVar26 + 0x28) << 0x10,&stack0x00001180,
                            *(undefined8 *)StringLiteral_8866);
      if ((uVar19 & 1) != 0) {
        FUN_03dc3568(&stack0x00001290,&stack0x00001180,0);
        uVar50 = FUN_03dc33cc(&stack0x00001160,0);
        uVar19 = FUN_03dc3590(&stack0x00001180,0);
        if ((uVar19 & 0x100) != 0) {
          uVar49 = 0;
        }
        _fStack0000000000000180 = CONCAT44(fStack0000000000000184,uVar49);
      }
      uVar15 = *in_stack_000001c8;
    }
    if (0 < (int)uVar15) {
      lVar26 = *in_stack_000001d8;
      if (lVar26 == 0) goto LAB_03ddcaac;
      if (*(uint *)(lVar26 + 0x18) <= uVar15 - 1) goto LAB_03ddcab0;
      lVar26 = *(long *)(lVar26 + (ulong)(uVar15 - 1) * (unaff_x26 & 0xffffffff) + 0x30);
      if (((lVar26 == 0) || (*unaff_x24 == 0)) ||
         ((lVar31 = *(long *)(*unaff_x24 + 0x170), lVar31 == 0 ||
          (lVar31 = *(long *)(lVar31 + 0x40), lVar31 == 0)))) goto LAB_03ddcaac;
      uVar19 = FUN_0295c2c8(lVar31,*(uint *)(lVar26 + 0x28) | uVar29 << 0x10,&stack0x00001180,
                            *(undefined8 *)StringLiteral_8866);
      if ((uVar19 & 1) != 0) {
        FUN_03dc357c(&stack0x00001290,&stack0x00001180,0);
        FUN_03dc33cc(&stack0x00001160,0);
        FUN_03dc322c(uVar50,0);
        uVar19 = FUN_03dc3590(&stack0x00001180,0);
        uVar49 = fStack0000000000000180;
        if ((uVar19 & 0x100) != 0) {
          uVar49 = 0;
        }
        _fStack0000000000000180 = CONCAT44(fStack0000000000000184,uVar49);
      }
    }
  }
  lVar26 = *in_stack_000001d8;
  if (lVar26 == 0) goto LAB_03ddcaac;
  uVar15 = *in_stack_000001c8;
  uVar49 = FUN_03dc321c(&stack0x000011d0,0);
  if (*(uint *)(lVar26 + 0x18) <= uVar15) goto LAB_03ddcab0;
  *(undefined4 *)(lVar26 + (long)(int)uVar15 * unaff_x26 + 0x160) = uVar49;
  if (*(int *)(*(long *)StringLiteral_8871 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar19 = FUN_03dee15c(in_stack_0000128c,0);
  uVar15 = *in_stack_000001c8;
  if ((uVar19 & 1) == 0) {
    if ((uVar19 & 1) == 0 && 0 < (int)uVar15) {
      uVar29 = *(uint *)(unaff_x19 + 0x19c4);
      if ((uVar29 == 0x80000000) || (uVar29 != uVar15 - 1)) {
        do {
          uVar29 = uVar15 - 1;
          if (((int)uVar15 < 1) || (uVar29 == *(uint *)(unaff_x19 + 0x19c4))) {
            uVar15 = *(uint *)(unaff_x19 + 0x19c4);
            if (uVar15 == 0x80000000) goto LAB_03dd7478;
            lVar26 = *in_stack_000001d8;
            if (lVar26 == 0) goto LAB_03ddcaac;
            if (*(uint *)(lVar26 + 0x18) <= uVar15) goto LAB_03ddcab0;
            lVar26 = *(long *)(lVar26 + (long)(int)uVar15 * unaff_x26 + 0x30);
            if ((lVar26 == 0) || (lVar26 = FUN_03dd17e4(lVar26,0), lVar26 == 0)) goto LAB_03ddcaac;
            uVar15 = FUN_03dc132c(lVar26,0);
            if (*(long *)(unaff_x19 + 0x1588) == 0) goto LAB_03ddcaac;
            iVar13 = FUN_03dc4f30(*(long *)(unaff_x19 + 0x1588),0);
            if (((*unaff_x24 == 0) || (lVar26 = FUN_03dc3f8c(*unaff_x24,0), lVar26 == 0)) ||
               (*(long *)(lVar26 + 0x48) == 0)) goto LAB_03ddcaac;
            uVar21 = FUN_0296238c(*(long *)(lVar26 + 0x48),uVar15 | iVar13 << 0x10,&stack0x00001108,
                                  *(undefined8 *)StringLiteral_8868);
            unaff_x25 = in_stack_000001d0;
            if ((uVar21 & 1) == 0) goto LAB_03dd7478;
            lVar26 = *in_stack_000001d8;
            if (lVar26 == 0) goto LAB_03ddcaac;
            if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto LAB_03ddcab0;
            fVar60 = *(float *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x26 +
                               0x148);
            fVar65 = *(float *)(unaff_x19 + 0x2f4);
            FUN_03dc3750(&stack0x00001108,0);
            fVar45 = (float)FUN_03dc3728(&stack0x00001140,0);
            FUN_03dc3760(&stack0x00001108,0);
            fVar48 = (float)FUN_03dc3738(&stack0x00001138,0);
            FUN_03dc3204(((fVar60 - fVar65) / fVar56 + fVar45) - fVar48,&stack0x000011d0,0);
            FUN_03dc3750(&stack0x00001108,0);
            fVar60 = (float)FUN_03dc3730(&stack0x00001140,0);
            puVar20 = &stack0x00001108;
            goto UnityEngine_UIElements_NavigateFocusRing__IsNavigable;
          }
          lVar26 = *in_stack_000001d8;
          if (lVar26 == 0) goto LAB_03ddcaac;
          if (*(uint *)(lVar26 + 0x18) <= uVar29) goto LAB_03ddcab0;
          lVar26 = *(long *)(lVar26 + (ulong)uVar29 * (unaff_x26 & 0xffffffff) + 0x30);
          if ((lVar26 == 0) || (lVar26 = FUN_03dd17e4(lVar26,0), lVar26 == 0)) goto LAB_03ddcaac;
          uVar15 = FUN_03dc132c(lVar26,0);
          if (*(long *)(unaff_x19 + 0x1588) == 0) goto LAB_03ddcaac;
          iVar13 = FUN_03dc4f30(*(long *)(unaff_x19 + 0x1588),0);
          if (((*unaff_x24 == 0) || (lVar26 = FUN_03dc3f8c(*unaff_x24,0), lVar26 == 0)) ||
             (*(long *)(lVar26 + 0x50) == 0)) goto LAB_03ddcaac;
          uVar21 = FUN_02965498(*(long *)(lVar26 + 0x50),uVar15 | iVar13 << 0x10,&stack0x00001120,
                                *(undefined8 *)StringLiteral_8867);
          unaff_x25 = in_stack_000001d0;
          uVar15 = uVar29;
        } while ((uVar21 & 1) == 0);
        lVar26 = *in_stack_000001d8;
        if (lVar26 == 0) goto LAB_03ddcaac;
        if (*(uint *)(lVar26 + 0x18) <= uVar29) goto LAB_03ddcab0;
        fVar65 = *(float *)(unaff_x19 + 0x2e0);
        fVar46 = *(float *)(unaff_x19 + 0x180);
        lVar26 = lVar26 + uVar29 * unaff_x26;
        fVar60 = *(float *)(unaff_x19 + 0x2f4);
        fVar47 = *(float *)(lVar26 + 0x148);
        fVar64 = *(float *)(lVar26 + 0x150);
        FUN_03dc3770(&stack0x00001120,0);
        fVar45 = (float)FUN_03dc3728(&stack0x00001140,0);
        FUN_03dc3780(&stack0x00001120,0);
        fVar48 = (float)FUN_03dc3738(&stack0x00001138,0);
        FUN_03dc3204(((fVar47 - fVar60) / fVar56 + fVar45) - fVar48,&stack0x000011d0,0);
        FUN_03dc3770(&stack0x00001120,0);
        fVar45 = (float)FUN_03dc3730(&stack0x00001140,0);
        FUN_03dc3780(&stack0x00001120,0);
        fVar60 = (float)FUN_03dc3740(&stack0x00001138,0);
        fVar60 = ((fVar64 - ((fStack0000000000000184 - fVar65) + fVar46)) / fVar56 + fVar45) -
                 fVar60;
      }
      else {
        lVar26 = *in_stack_000001d8;
        if (lVar26 == 0) goto LAB_03ddcaac;
        if (*(uint *)(lVar26 + 0x18) <= uVar29) goto LAB_03ddcab0;
        lVar26 = *(long *)(lVar26 + (long)(int)uVar29 * unaff_x26 + 0x30);
        if ((lVar26 == 0) || (lVar26 = FUN_03dd17e4(lVar26,0), lVar26 == 0)) goto LAB_03ddcaac;
        uVar15 = FUN_03dc132c(lVar26,0);
        if (*(long *)(unaff_x19 + 0x1588) == 0) goto LAB_03ddcaac;
        iVar13 = FUN_03dc4f30(*(long *)(unaff_x19 + 0x1588),0);
        if (((*unaff_x24 == 0) || (lVar26 = FUN_03dc3f8c(*unaff_x24,0), lVar26 == 0)) ||
           (*(long *)(lVar26 + 0x48) == 0)) goto LAB_03ddcaac;
        uVar21 = FUN_0296238c(*(long *)(lVar26 + 0x48),uVar15 | iVar13 << 0x10,&stack0x00001148,
                              *(undefined8 *)StringLiteral_8868);
        unaff_x25 = in_stack_000001d0;
        if ((uVar21 & 1) == 0) goto LAB_03dd7478;
        lVar26 = *in_stack_000001d8;
        if (lVar26 == 0) goto LAB_03ddcaac;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto LAB_03ddcab0;
        fVar60 = *(float *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x26 + 0x148);
        fVar65 = *(float *)(unaff_x19 + 0x2f4);
        FUN_03dc3750(&stack0x00001148,0);
        fVar45 = (float)FUN_03dc3728(&stack0x00001140,0);
        FUN_03dc3760(&stack0x00001148,0);
        fVar48 = (float)FUN_03dc3738(&stack0x00001138,0);
        FUN_03dc3204(((fVar60 - fVar65) / fVar56 + fVar45) - fVar48,&stack0x000011d0,0);
        FUN_03dc3750(&stack0x00001148,0);
        fVar60 = (float)FUN_03dc3730(&stack0x00001140,0);
        puVar20 = &stack0x00001148;
UnityEngine_UIElements_NavigateFocusRing__IsNavigable:
        FUN_03dc3760(puVar20,0);
        fVar45 = (float)FUN_03dc3740(&stack0x00001138,0);
        fVar60 = fVar60 - fVar45;
      }
      FUN_03dc3214(fVar60,&stack0x000011d0,0);
      _fStack0000000000000180 = (ulong)(uint)fStack0000000000000184 << 0x20;
      unaff_x25 = in_stack_000001d0;
    }
  }
  else {
    *(uint *)(unaff_x19 + 0x19c4) = uVar15;
  }
LAB_03dd7478:
  fVar60 = (float)FUN_03dc320c(&stack0x000011d0,0);
  fVar45 = (float)FUN_03dc320c(&stack0x000011d0,0);
  if (*(char *)(unaff_x25 + 0xb6) != '\0') {
    fVar65 = *(float *)(unaff_x19 + 0x2f4);
    fVar48 = (float)FUN_03dc1184(&stack0x000011e0,0);
    fVar65 = fVar65 - fVar56 * fVar48 * (1.0 - *(float *)(unaff_x19 + 0x1594));
    *(float *)(unaff_x19 + 0x2f4) = fVar65;
    if ((uVar14 != 0) || (in_stack_0000128c == 0x200b)) {
      *(float *)(unaff_x19 + 0x2f4) = fVar65 - in_stack_00000150 * *(float *)(unaff_x25 + 0xc4);
    }
  }
  fVar48 = *(float *)(unaff_x19 + 0x2f0);
  if (fVar48 == 0.0) {
    fVar48 = 0.0;
  }
  else {
    fVar65 = (float)FUN_03dc1164(&stack0x000011e0,0);
    fVar46 = (float)FUN_03dc1174(&stack0x000011e0,0);
    fVar48 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
             (fVar48 * 0.5 - fVar56 * (fVar65 * 0.5 + fVar46));
    *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2f4) + fVar48;
  }
  uVar15 = 0;
  if ((unaff_w20 == 0) && (*unaff_x27 == 1)) {
    uVar15 = *(uint *)(unaff_x19 + 0x124) & 1;
  }
  uVar44 = *(undefined8 *)(unaff_x19 + 0x70);
  if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar21 = FUN_03d4f3bc(uVar44,0,0);
  puVar6 = StringLiteral_8589;
  if (uVar15 == 0) {
    fStack0000000000000140 = 0.0;
    if ((uVar21 & 1) != 0) {
      lVar26 = *(long *)(unaff_x19 + 0x70);
      if (*(int *)(*(long *)StringLiteral_8589 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      if (lVar26 == 0) goto LAB_03ddcaac;
      uVar21 = FUN_03d18b4c(lVar26,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
      if ((uVar21 & 1) != 0) {
        lVar26 = *(long *)(unaff_x19 + 0x70);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        if (lVar26 == 0) goto LAB_03ddcaac;
        uVar21 = FUN_03d18b4c(lVar26,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xe4),0);
        if ((uVar21 & 1) != 0) {
          lVar26 = *(long *)(unaff_x19 + 0x70);
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          if (lVar26 != 0) {
            fVar65 = (float)FUN_03d1cd14(lVar26,*(undefined4 *)
                                                 (*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
            if ((*unaff_x24 != 0) && (*(long *)(unaff_x19 + 0x70) != 0)) {
              fVar47 = *(float *)(*unaff_x24 + 0x188);
              fVar46 = (float)FUN_03d1cd14(*(long *)(unaff_x19 + 0x70),
                                           *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xe4)
                                           ,0);
              fVar46 = fVar46 * fVar65 * fVar47 * 0.25;
              if (fVar65 < in_stack_00000188 + fVar46) {
                in_stack_00000188 = fVar65 - fVar46;
              }
              goto LAB_03dd77cc;
            }
          }
          goto LAB_03ddcaac;
        }
      }
    }
    fVar46 = 0.0;
  }
  else {
    fVar46 = 0.0;
    if ((uVar21 & 1) != 0) {
      lVar26 = *(long *)(unaff_x19 + 0x70);
      if (*(int *)(*(long *)StringLiteral_8589 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      if (lVar26 == 0) goto LAB_03ddcaac;
      uVar21 = FUN_03d18b4c(lVar26,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
      if ((uVar21 & 1) != 0) {
        lVar26 = *(long *)(unaff_x19 + 0x70);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        if (lVar26 == 0) goto LAB_03ddcaac;
        fVar65 = (float)FUN_03d1cd14(lVar26,*(undefined4 *)
                                             (*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
        if (*unaff_x24 == 0) goto LAB_03ddcaac;
        fVar47 = (float)FUN_03dc3fdc(*unaff_x24,0);
        if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_03ddcaac;
        fVar46 = (float)FUN_03d1cd14(*(long *)(unaff_x19 + 0x70),
                                     *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xe4),0);
        fVar46 = fVar65 * fVar47 * 0.25 * fVar46;
        if (fVar65 < in_stack_00000188 + fVar46) {
          in_stack_00000188 = fVar65 - fVar46;
        }
      }
    }
    if (*unaff_x24 == 0) goto LAB_03ddcaac;
    fStack0000000000000140 = (float)FUN_03dc3fec(*unaff_x24,0);
  }
LAB_03dd77cc:
  fVar65 = *(float *)(unaff_x19 + 0x2f4);
  fVar47 = (float)FUN_03dc1174(&stack0x000011e0,0);
  fVar61 = *(float *)(unaff_x19 + 0x19a8);
  fVar64 = (float)FUN_03dc31fc(&stack0x000011d0,0);
  fVar65 = fVar65 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                    fVar56 * (fVar64 + ((fVar47 * fVar61 - in_stack_00000188) - fVar46));
  fVar47 = (float)FUN_03dc117c(&stack0x000011e0,0);
  fVar64 = (float)FUN_03dc320c(&stack0x000011d0,0);
  fVar61 = *(float *)(unaff_x19 + 0x180) +
           ((fStack0000000000000184 + fVar56 * (in_stack_00000188 + fVar47 + fVar64)) -
           *(float *)(unaff_x19 + 0x2e0));
  fVar47 = (float)FUN_03dc116c(&stack0x000011e0,0);
  fStack000000000000017c = fVar61 - fVar56 * (in_stack_00000188 + in_stack_00000188 + fVar47);
  fVar47 = (float)FUN_03dc1164(&stack0x000011e0,0);
  fVar47 = fVar65 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                    fVar56 * (fVar46 + fVar46 +
                             in_stack_00000188 + in_stack_00000188 +
                             fVar47 * *(float *)(unaff_x19 + 0x19a8));
  fStack00000000000001b4 = fVar65;
  fVar64 = fVar47;
  if (((unaff_w20 == 0) && (*unaff_x27 == 1)) && ((*(byte *)(unaff_x19 + 0x124) >> 1 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03ddcaac;
    iVar13 = *(int *)(unaff_x19 + 0x19a4);
    fVar52 = (float)FUN_03dc0e60(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
    if (*unaff_x24 == 0) goto LAB_03ddcaac;
    fVar62 = (float)FUN_03dc0e80(*unaff_x24 + 0xb0,0);
    if (*unaff_x24 == 0) goto LAB_03ddcaac;
    fVar51 = *(float *)(unaff_x19 + 0xf0);
    fVar58 = *(float *)(unaff_x19 + 0x180);
    fVar64 = (float)iVar13 * fStack00000000000000b0;
    fVar67 = (float)FUN_03dc0e30(*unaff_x24 + 0xb0,0);
    fVar67 = fVar67 * fVar51 * (fVar52 - (fVar62 + fVar58)) * 0.5;
    fVar52 = (float)FUN_03dc117c(&stack0x000011e0,0);
    fVar51 = fVar64 * fVar56 * ((fVar46 + in_stack_00000188 + fVar52) - fVar67);
    fVar52 = (float)FUN_03dc117c(&stack0x000011e0,0);
    fVar62 = (float)FUN_03dc116c(&stack0x000011e0,0);
    fVar61 = fVar61 + 0.0;
    fStack000000000000017c = fStack000000000000017c + 0.0;
    fVar64 = fVar64 * fVar56 * ((((fVar52 - fVar62) - in_stack_00000188) - fVar46) - fVar67);
    fStack00000000000001b4 = fVar65 + fVar64;
    fVar64 = fVar47 + fVar64;
    fVar65 = fVar65 + fVar51;
    fVar47 = fVar47 + fVar51;
  }
  uVar44 = *in_stack_00000100;
  uVar59 = *_fStack00000000000000f8;
  if (DAT_0452d6ea == '\0') {
    FUN_01c5d288(PTR_DAT_042301a0);
    DAT_0452d6ea = '\x01';
  }
  uVar53 = **(undefined8 **)(*(long *)PTR_DAT_042301a0 + 0xb8);
  uVar54 = (*(undefined8 **)(*(long *)PTR_DAT_042301a0 + 0xb8))[1];
  fVar52 = 0.0;
  if (DAT_00b93268 <
      (float)((ulong)uVar59 >> 0x20) * (float)((ulong)uVar54 >> 0x20) +
      (float)uVar59 * (float)uVar54 +
      (float)uVar44 * (float)uVar53 +
      (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar53 >> 0x20)) {
    fVar57 = 0.0;
    fVar58 = 0.0;
    fVar51 = 0.0;
    fVar62 = fVar61;
    fVar67 = fStack000000000000017c;
  }
  else {
    FUN_03d3bc60(&stack0x00001290,*(undefined4 *)(unaff_x19 + 0x19b4),
                 *(undefined4 *)(unaff_x19 + 0x19b8),*(undefined4 *)(unaff_x19 + 0x19bc),
                 *(undefined4 *)(unaff_x19 + 0x19c0),0);
    fVar63 = (fVar47 + fStack00000000000001b4) * 0.5;
    fVar66 = (fStack000000000000017c + fVar61) * 0.5;
    fVar61 = fVar61 - fVar66;
    fVar51 = 0.0;
    fVar62 = fVar61;
    fVar65 = (float)FUN_03d3bb60(fVar65 - fVar63,&stack0x000010c0,0);
    fVar65 = fVar63 + fVar65;
    fVar51 = fVar51 + 0.0;
    fVar67 = fStack000000000000017c - fVar66;
    fVar58 = 0.0;
    fStack000000000000017c = fVar67;
    fStack00000000000001b4 = (float)FUN_03d3bb60(fStack00000000000001b4 - fVar63,&stack0x000010c0,0)
    ;
    fStack00000000000001b4 = fVar63 + fStack00000000000001b4;
    fStack000000000000017c = fVar66 + fStack000000000000017c;
    fVar58 = fVar58 + 0.0;
    fVar57 = 0.0;
    fVar47 = (float)FUN_03d3bb60(fVar47 - fVar63,&stack0x000010c0,0);
    fVar47 = fVar63 + fVar47;
    fVar61 = fVar66 + fVar61;
    fVar57 = fVar57 + 0.0;
    fVar52 = 0.0;
    fVar64 = (float)FUN_03d3bb60(fVar64 - fVar63,&stack0x000010c0,0);
    fVar64 = fVar63 + fVar64;
    fVar52 = fVar52 + 0.0;
    fVar62 = fVar66 + fVar62;
    fVar67 = fVar66 + fVar67;
  }
  lVar26 = *in_stack_000001d8;
  if (lVar26 == 0) goto LAB_03ddcaac;
  if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001c8) goto LAB_03ddcab0;
  lVar26 = lVar26 + (long)(int)*in_stack_000001c8 * unaff_x26;
  *(float *)(lVar26 + 0x128) = fStack000000000000017c;
  *(float *)(lVar26 + 300) = fVar58;
  *(float *)(lVar26 + 0x124) = fStack00000000000001b4;
  lVar26 = *in_stack_000001d8;
  if (lVar26 == 0) goto LAB_03ddcaac;
  if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001c8) goto LAB_03ddcab0;
  lVar26 = lVar26 + (long)(int)*in_stack_000001c8 * unaff_x26;
  *(float *)(lVar26 + 0x118) = fVar65;
  *(float *)(lVar26 + 0x11c) = fVar62;
  *(float *)(lVar26 + 0x120) = fVar51;
  lVar26 = *in_stack_000001d8;
  if (lVar26 == 0) goto LAB_03ddcaac;
  if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001c8) goto LAB_03ddcab0;
  lVar26 = lVar26 + (long)(int)*in_stack_000001c8 * unaff_x26;
  *(float *)(lVar26 + 0x130) = fVar47;
  *(float *)(lVar26 + 0x134) = fVar61;
  *(float *)(lVar26 + 0x138) = fVar57;
  lVar26 = *in_stack_000001d8;
  if (lVar26 == 0) goto LAB_03ddcaac;
  if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001c8) goto LAB_03ddcab0;
  lVar26 = lVar26 + (long)(int)*in_stack_000001c8 * unaff_x26;
  *(float *)(lVar26 + 0x13c) = fVar64;
  *(float *)(lVar26 + 0x140) = fVar67;
  *(float *)(lVar26 + 0x144) = fVar52;
  lVar26 = *in_stack_000001d8;
  if (lVar26 == 0) goto LAB_03ddcaac;
  uVar15 = *in_stack_000001c8;
  fVar64 = *(float *)(unaff_x19 + 0x2f4);
  fVar65 = (float)FUN_03dc31fc(&stack0x000011d0,0);
  if (*(uint *)(lVar26 + 0x18) <= uVar15) goto LAB_03ddcab0;
  *(float *)(lVar26 + (long)(int)uVar15 * unaff_x26 + 0x148) = fVar64 + fVar56 * fVar65;
  lVar26 = *in_stack_000001d8;
  if (lVar26 == 0) goto LAB_03ddcaac;
  uVar15 = *in_stack_000001c8;
  fVar61 = *(float *)(unaff_x19 + 0x2e0);
  fVar64 = *(float *)(unaff_x19 + 0x180);
  fVar65 = (float)FUN_03dc320c(&stack0x000011d0,0);
  if (*(uint *)(lVar26 + 0x18) <= uVar15) goto LAB_03ddcab0;
  *(float *)(lVar26 + (long)(int)uVar15 * unaff_x26 + 0x150) =
       (fStack0000000000000184 - fVar61) + fVar64 + fVar56 * fVar65;
  lVar26 = *in_stack_000001d8;
  if (lVar26 == 0) goto LAB_03ddcaac;
  uVar15 = *in_stack_000001c8;
  lVar31 = (long)(int)uVar15;
  if (*(uint *)(lVar26 + 0x18) <= uVar15) goto LAB_03ddcab0;
  *(float *)(lVar26 + lVar31 * unaff_x26 + 0x168) =
       (fVar47 - fStack00000000000001b4) / (fVar62 - fStack000000000000017c);
  fVar60 = fVar56 * (fStack0000000000000178 + fVar60);
  if (*unaff_x27 == 1) {
    fVar60 = fVar60 / fStack0000000000000174;
    fVar45 = (fVar56 * (fStack0000000000000168 + fVar45)) / fStack0000000000000174;
  }
  else {
    fVar45 = fVar56 * (fStack0000000000000168 + fVar45);
  }
  uVar29 = *(uint *)(unaff_x19 + 0x328);
  fVar65 = *(float *)(unaff_x19 + 0x180);
  bVar7 = uVar15 == uVar29;
  bVar8 = uVar14 == 0;
  fVar60 = fVar65 + fVar60;
  if (bVar8 || bVar7) {
    fVar45 = fVar65 + fVar45;
    fVar47 = fVar60;
    fVar64 = fVar45;
    if (fVar65 != 0.0) {
      fVar47 = (fVar60 - fVar65) / *(float *)(unaff_x19 + 0xf0);
      fVar64 = (fVar45 - fVar65) / *(float *)(unaff_x19 + 0xf0);
      if (fVar47 <= fVar60) {
        fVar47 = fVar60;
      }
      if (fVar45 <= fVar64) {
        fVar64 = fVar45;
      }
    }
    lVar32 = lVar26 + lVar31 * unaff_x26;
    fVar65 = fVar47;
    if (fVar47 <= *(float *)(unaff_x19 + 0x338)) {
      fVar65 = *(float *)(unaff_x19 + 0x338);
    }
    fVar61 = fVar64;
    if (*(float *)(unaff_x19 + 0x33c) <= fVar64) {
      fVar61 = *(float *)(unaff_x19 + 0x33c);
    }
    *(float *)(unaff_x19 + 0x338) = fVar65;
    *(float *)(unaff_x19 + 0x33c) = fVar61;
    *(float *)(lVar32 + 0x158) = fVar47;
    *(float *)(lVar32 + 0x15c) = fVar64;
    fVar47 = *(float *)(unaff_x19 + 0x2e0);
    fVar64 = fVar60 - fVar47;
  }
  else {
    fVar65 = *(float *)(unaff_x19 + 0x338);
    lVar32 = lVar26 + lVar31 * unaff_x26;
    *(float *)(lVar32 + 0x158) = fVar65;
    fVar45 = *(float *)(unaff_x19 + 0x33c);
    *(float *)(lVar32 + 0x15c) = fVar45;
    fVar47 = *(float *)(unaff_x19 + 0x2e0);
    fVar64 = fVar65 - fVar47;
  }
  *(float *)(lVar32 + 0x14c) = fVar64;
  *(float *)(lVar26 + lVar31 * unaff_x26 + 0x154) = fVar45 - fVar47;
  *(float *)(unaff_x19 + 0x378) = fVar45 - fVar47;
  if ((*(int *)(unaff_x19 + 0x340) == 0) || (*(char *)(unaff_x19 + 0x37c) != '\0')) {
    if (bVar8 || bVar7) {
      *(float *)(unaff_x19 + 0x374) = fVar65;
      if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03ddcaac;
      fVar45 = *(float *)(unaff_x19 + 0x370);
      fVar65 = (float)FUN_03dc0e60(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
      fVar47 = *(float *)(unaff_x19 + 0x2e0);
      fStack0000000000000174 = (fVar56 * fVar65) / fStack0000000000000174;
      if (fVar45 <= fStack0000000000000174) {
        fVar45 = fStack0000000000000174;
      }
      *(float *)(unaff_x19 + 0x370) = fVar45;
      if (fVar47 == 0.0) goto LAB_03dd7ee0;
    }
  }
  else if ((bVar8 || bVar7) && fVar47 == 0.0) {
LAB_03dd7ee0:
    fVar45 = *(float *)(unaff_x19 + 0x19c8);
    if (*(float *)(unaff_x19 + 0x19c8) <= fVar60) {
      fVar45 = fVar60;
    }
    *(float *)(unaff_x19 + 0x19c8) = fVar45;
  }
  lVar26 = *in_stack_000001d8;
  if (lVar26 == 0) goto LAB_03ddcaac;
  uVar42 = *in_stack_000001c8;
  if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_03ddcab0;
  lVar26 = lVar26 + (long)(int)uVar42 * unaff_x26;
  *(undefined1 *)(lVar26 + 0x1a0) = 0;
  uVar37 = *(uint *)(unaff_x19 + 0x158) & 0x18;
  if ((in_stack_0000128c == 9) ||
     ((((uVar14 == 0 && (in_stack_0000128c != 3)) &&
       ((in_stack_0000128c != 0x200b && (in_stack_0000128c != 0xad)))) ||
      (((in_stack_0000128c == 0xad & (in_stack_000000c0 ^ 0xff)) != 0 || (*unaff_x27 == 2)))))) {
    *(undefined1 *)(lVar26 + 0x1a0) = 1;
    pfVar27 = _fStack0000000000000130;
    pfVar36 = _fStack0000000000000138;
    if (in_stack_000001c0._4_4_ != 0) {
      lVar26 = *(long *)(in_stack_000001b8 + 0x48);
      if (lVar26 == 0) goto LAB_03ddcaac;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03ddcab0;
      lVar26 = lVar26 + (int)*(uint *)(unaff_x19 + 0x340) * unaff_x29;
      pfVar36 = (float *)(lVar26 + 100);
      pfVar27 = (float *)(lVar26 + 0x68);
    }
    fVar64 = *pfVar36;
    fVar65 = *pfVar27;
    fVar45 = *(float *)(unaff_x19 + 0x35c);
    fVar61 = *(float *)(unaff_x19 + 0x2f4);
    fVar60 = (in_stack_00000120._4_4_ - fVar64) - fVar65;
    bVar7 = true;
    if ((fVar45 <= fVar60) && (bVar7 = false, !NAN(fVar45))) {
      bVar7 = fVar45 == -1.0;
    }
    if (!bVar7) {
      fVar60 = fVar45;
    }
    _fStack0000000000000168 = CONCAT44(fVar60,fStack0000000000000168);
    fVar45 = 0.0;
    if (*(char *)(in_stack_000001d0 + 0xb6) == '\0') {
      fVar45 = (float)FUN_03dc1184(&stack0x000011e0,0);
      fVar47 = *(float *)(unaff_x19 + 0x2e0);
    }
    fVar52 = *(float *)(unaff_x19 + 0x1594);
    fVar62 = *(float *)(unaff_x19 + 0x33c);
    if (in_stack_0000128c != 0xad) {
      unaff_s8 = fVar56;
    }
    fVar67 = 0.0;
    if ((0.0 < fVar47) && (fVar67 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
      fVar67 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
    }
    uVar42 = *in_stack_000001c8;
    fVar67 = (*(float *)(unaff_x19 + 0x374) - (fVar62 - fVar47)) + fVar67;
    if (fVar67 <= in_stack_00000110) goto switchD_03dd8188_caseD_2;
    if (*(int *)(unaff_x19 + 0x34c) == -1) {
      *(uint *)(unaff_x19 + 0x34c) = uVar42;
    }
    uVar44 = DAT_00b91f68;
    if (*(char *)(in_stack_000001d0 + 0xa8) != '\0') {
      fVar51 = *(float *)(in_stack_000001d0 + 0xd0);
      if (((*(float *)(unaff_x19 + 0x15b0) <= fVar51) || (fVar47 <= 0.0)) ||
         (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
        fVar47 = *(float *)(in_stack_000001d0 + 0xac);
        fVar67 = *_iStack00000000000000c8;
        if ((fVar67 <= fVar47) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)))
        goto LAB_03dd8164;
        fVar56 = (fVar67 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
        if (fVar56 <= DAT_00b932d0) {
          fVar56 = DAT_00b932d0;
        }
        fVar60 = (fVar67 - fVar56) * 20.0 + 0.5;
        fVar56 = DAT_00b934d4;
        if (fVar60 != INFINITY) {
          fVar56 = (float)(int)fVar60 / 20.0;
        }
        if (fVar56 <= fVar47) {
          fVar56 = fVar47;
        }
        *(float *)(unaff_x19 + 0x1598) = fVar67;
LAB_03dd9f28:
        *(float *)(unaff_x19 + 0xec) = fVar56;
      }
      else {
        fVar56 = *(float *)(unaff_x19 + 0x15b0) +
                 ((in_stack_00000020._4_4_ - fVar67) / (float)*(int *)(unaff_x19 + 0x340)) /
                 fStack0000000000000088;
        if (fVar56 <= fVar51) {
          fVar56 = fVar51;
        }
LAB_03ddc960:
        *(float *)(unaff_x19 + 0x15b0) = fVar56;
      }
      goto LAB_03dd59bc;
    }
LAB_03dd8164:
    switch(*(undefined4 *)(in_stack_000001d0 + 0x74)) {
    case 1:
      if (*(int *)(unaff_x19 + 0x340) < 1) goto switchD_03dd8188_caseD_2;
      iVar13 = FUN_025deea8(in_stack_00000078,*(undefined8 *)StringLiteral_8889);
      in_stack_00001278 = DAT_00b91f68;
      if (iVar13 == 0) {
        in_stack_000001c8[0] = 0;
        in_stack_000001c8[1] = 0;
        goto LAB_03dd9890;
      }
      FUN_025df310(&stack0x00001290,in_stack_00000078,*(undefined8 *)StringLiteral_8879);
      memcpy(&stack0x00000d28,&stack0x00001290,0x398);
      iVar16 = FUN_03ddfb90();
      iVar13 = *(int *)(unaff_x19 + 0x324) + -1;
      *(int *)(unaff_x19 + 0x324) = iVar13;
      plVar41 = (long *)PTR_DAT_0422fae0;
LAB_03dd97fc:
      in_stack_00001278 = CONCAT44(0x2026,iVar13);
      in_stack_000001a8 = in_stack_000001a8 + 1;
      unaff_x21 = in_stack_000001b8;
      unaff_x25 = in_stack_000001d0;
      in_stack_000011fc = iVar16 - 1;
      unaff_s8 = fVar56;
      break;
    default:
switchD_03dd8188_caseD_2:
      if ((uVar19 & 1) == 0) {
LAB_03dd8290:
        if (uVar14 == 0) {
          if (in_stack_0000128c != 0xad) {
            if (*unaff_x27 == 2) {
              FUN_03de51a0();
            }
            else if (*unaff_x27 == 1) {
              FUN_03de4634(in_stack_00000188,fVar46);
            }
            uVar42 = *in_stack_000001c8;
            if ((uStack00000000000000b4 & 1) != 0) {
              *(uint *)(unaff_x19 + 0x330) = uVar42;
            }
            *(uint *)(unaff_x19 + 0x334) = uVar42;
            *(int *)(unaff_x19 + 0x344) = *(int *)(unaff_x19 + 0x344) + 1;
            lVar26 = *(long *)(in_stack_000001b8 + 0x48);
            if (lVar26 == 0) goto LAB_03ddcaac;
            if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar26 + 0x18)) {
              lVar26 = lVar26 + (int)*(uint *)(unaff_x19 + 0x340) * unaff_x29;
              uStack00000000000000b4 = 0;
              *(float *)(lVar26 + 100) = fVar64;
              *(float *)(lVar26 + 0x68) = fVar65;
              goto LAB_03dd8760;
            }
            goto LAB_03ddcab0;
          }
          lVar26 = *in_stack_000001d8;
          if (lVar26 == 0) goto LAB_03ddcaac;
          if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_03ddcab0;
          *(undefined1 *)(lVar26 + (long)(int)uVar42 * (long)iVar17 + 0x1a0) = 0;
        }
        else {
          lVar26 = *in_stack_000001d8;
          if (lVar26 == 0) goto LAB_03ddcaac;
          if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_03ddcab0;
          *(undefined1 *)(lVar26 + (long)(int)uVar42 * (long)iVar17 + 0x1a0) = 0;
          *(uint *)(unaff_x19 + 0x334) = uVar42;
          lVar26 = *(long *)(in_stack_000001b8 + 0x48);
          if (lVar26 == 0) goto LAB_03ddcaac;
          uVar42 = *(uint *)(lVar26 + 0x18);
          if (uVar42 <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03ddcab0;
          lVar31 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
          iVar13 = *(int *)(lVar31 + 0x2c) + 1;
          *(int *)(lVar31 + 0x2c) = iVar13;
          *(int *)(unaff_x19 + 0x348) = iVar13;
          if (uVar42 <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03ddcab0;
          lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
          *(float *)(lVar26 + 100) = fVar64;
          *(float *)(lVar26 + 0x68) = fVar65;
          unaff_x29 = 0x60;
          *(int *)(in_stack_000001b8 + 0x18) = *(int *)(in_stack_000001b8 + 0x18) + 1;
        }
        goto LAB_03dd8760;
      }
      fVar47 = ABS(fVar61) + fVar45 * (1.0 - fVar52) * unaff_s8;
      fVar45 = 1.0;
      if (uVar37 != 0) {
        fVar45 = DAT_00b93264;
      }
      if (fVar47 <= fVar45 * fVar60) goto LAB_03dd8290;
      if ((iStack000000000000008c == 0) || (uVar42 == *(uint *)(unaff_x19 + 0x328))) {
        if ((*(char *)(in_stack_000001d0 + 0xa8) == '\0') ||
           (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
LAB_03dd839c:
          iVar13 = *(int *)(in_stack_000001d0 + 0x74);
          if (iVar13 != 1) {
            if (iVar13 != 6) {
              if (iVar13 == 3) {
                in_stack_000011fc = FUN_03ddfb90();
                goto LAB_03dd83e4;
              }
              goto LAB_03dd8290;
            }
            in_stack_000011fc = FUN_03ddfb90();
            in_stack_00001278 = CONCAT44(3,*(undefined4 *)(unaff_x19 + 0x324));
            unaff_x21 = in_stack_000001b8;
            unaff_x25 = in_stack_000001d0;
            plVar41 = (long *)PTR_DAT_0422fae0;
            unaff_s8 = fVar56;
            break;
          }
          iVar13 = FUN_025deea8(in_stack_00000078,*(undefined8 *)StringLiteral_8889);
          plVar41 = (long *)PTR_DAT_0422fae0;
          if (iVar13 != 0) {
            FUN_025df310(&stack0x00001290,in_stack_00000078,*(undefined8 *)StringLiteral_8879);
            memcpy(&stack0x000005f8,&stack0x00001290,0x398);
            iVar16 = FUN_03ddfb90();
            iVar13 = *(int *)(unaff_x19 + 0x324) + -1;
            *(int *)(unaff_x19 + 0x324) = iVar13;
            goto LAB_03dd97fc;
          }
LAB_03dd9b24:
          plVar41 = (long *)PTR_DAT_0422fae0;
          in_stack_00001278 = DAT_00b91f68;
          in_stack_000001c8[0] = 0;
          in_stack_000001c8[1] = 0;
          unaff_x21 = in_stack_000001b8;
          unaff_x25 = in_stack_000001d0;
          in_stack_000011fc = 0xffffffff;
          unaff_s8 = fVar56;
          break;
        }
        fVar61 = *(float *)(in_stack_000001d0 + 0x108) / 100.0;
        if (fVar61 <= fVar52) {
          fVar61 = *(float *)(in_stack_000001d0 + 0xac);
          fVar52 = *_iStack00000000000000c8;
          if (fVar52 <= fVar61) goto LAB_03dd839c;
LAB_03ddc9cc:
          fVar56 = (fVar52 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
          if (fVar56 <= DAT_00b932d0) {
            fVar56 = DAT_00b932d0;
          }
          *(float *)(unaff_x19 + 0x1598) = fVar52;
          fVar60 = (fVar52 - fVar56) * 20.0 + 0.5;
          fVar56 = DAT_00b934d4;
          if (fVar60 != INFINITY) {
            fVar56 = (float)(int)fVar60 / 20.0;
          }
          if (fVar56 <= fVar61) {
            fVar56 = fVar61;
          }
          goto LAB_03dd9f28;
        }
        fVar56 = fVar47 / (1.0 - fVar52);
        if (fVar52 <= 0.0) {
          fVar56 = fVar47;
        }
        fVar52 = fVar52 + (fVar47 - fVar45 * (fVar60 + DAT_00b933cc)) / fVar56;
LAB_03ddca5c:
        if (fVar61 <= fVar52) {
          fVar52 = fVar61;
        }
        *(float *)(unaff_x19 + 0x1594) = fVar52;
        goto LAB_03dd59bc;
      }
      in_stack_000011fc = FUN_03ddfb90();
      if (*(float *)(unaff_x19 + 0x2e4) == DAT_00b932ec) {
        lVar26 = *in_stack_000001d8;
        if (lVar26 == 0) goto LAB_03ddcaac;
        uVar40 = *in_stack_000001c8;
        if (*(uint *)(lVar26 + 0x18) <= uVar40) goto LAB_03ddcab0;
        fVar52 = *(float *)(unaff_x19 + 0x2e0);
        fVar61 = 0.0;
        if ((0.0 < fVar52) && (fVar61 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
          fVar61 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
        }
        fVar61 = in_stack_00000150 * *(float *)(in_stack_000001d0 + 200) +
                 *(float *)(lVar26 + (long)(int)uVar40 * unaff_x26 + 0x158) +
                 (fVar61 - *(float *)(unaff_x19 + 0x33c)) +
                 fStack0000000000000088 * (fStack0000000000000084 + *(float *)(unaff_x19 + 0x15b0));
      }
      else {
        fVar61 = *(float *)(in_stack_000001d0 + 200);
        *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
        lVar26 = *in_stack_000001d8;
        if (lVar26 == 0) goto LAB_03ddcaac;
        fVar52 = *(float *)(unaff_x19 + 0x2e0);
        uVar40 = *(uint *)(unaff_x19 + 0x324);
        fVar61 = *(float *)(unaff_x19 + 0x2e4) + in_stack_00000150 * fVar61;
      }
      if ((*(uint *)(lVar26 + 0x18) <= uVar40) ||
         (uVar4 = uVar40 - 1, *(uint *)(lVar26 + 0x18) <= uVar4)) goto LAB_03ddcab0;
      fVar62 = (fVar61 + *(float *)(unaff_x19 + 0x374) + fVar52) -
               *(float *)(lVar26 + (long)(int)uVar40 * (long)iVar17 + 0x15c);
      if (((in_stack_000000c0 & 1) == 0 &&
           *(short *)(lVar26 + (long)(int)uVar4 * (long)iVar17 + 0x20) == 0xad) &&
         ((fVar62 < in_stack_00000110 || (*(int *)(in_stack_000001d0 + 0x74) == 0)))) {
        in_stack_000000c0 = 0;
        in_stack_00001278 = CONCAT44(0x2d,uVar4);
        *in_stack_000001c8 = uVar4;
        unaff_x21 = in_stack_000001b8;
        unaff_x25 = in_stack_000001d0;
        plVar41 = (long *)PTR_DAT_0422fae0;
        in_stack_000011fc = in_stack_000011fc - 1;
        unaff_s8 = fVar56;
        break;
      }
      if (*(short *)(lVar26 + (long)(int)uVar40 * unaff_x26 + 0x20) == 0xad) {
        in_stack_000000c0 = 1;
        unaff_x21 = in_stack_000001b8;
        unaff_x25 = in_stack_000001d0;
        plVar41 = (long *)PTR_DAT_0422fae0;
        unaff_s8 = fVar56;
        break;
      }
      if ((bStack00000000000000e0 & *(byte *)(in_stack_000001d0 + 0xa8) & 1) != 0) {
        fVar52 = *(float *)(unaff_x19 + 0x1594);
        fVar61 = *(float *)(in_stack_000001d0 + 0x108) / 100.0;
        if ((fVar61 <= fVar52) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
          fVar61 = *(float *)(in_stack_000001d0 + 0xac);
          fVar52 = *_iStack00000000000000c8;
          if ((fVar61 < fVar52) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
          goto LAB_03ddc9cc;
          goto LAB_03dd99c8;
        }
LAB_03ddca70:
        fVar56 = fVar47;
        if (0.0 < fVar52) {
          fVar56 = fVar47 / (1.0 - fVar52);
        }
        fVar52 = fVar52 + (fVar47 - fVar45 * (fVar60 + DAT_00b933cc)) / fVar56;
        goto LAB_03ddca5c;
      }
LAB_03dd99c8:
      iVar13 = *in_stack_00000030;
      if ((iVar13 != iStack0000000000000028) && ((bStack00000000000000e0 & iVar13 != -1) != 0)) {
        in_stack_000011fc = FUN_03ddfb90();
        lVar26 = *(long *)(in_stack_000001b8 + 0x30);
        if (lVar26 == 0) goto LAB_03ddcaac;
        uVar40 = *in_stack_000001c8;
        uVar4 = uVar40 - 1;
        if (*(uint *)(lVar26 + 0x18) <= uVar4) goto LAB_03ddcab0;
        iStack0000000000000028 = iVar13;
        if (*(short *)(lVar26 + (long)(int)uVar4 * (long)iVar17 + 0x20) == 0xad) {
          in_stack_000000c0 = 0;
          in_stack_00001278 = CONCAT44(0x2d,uVar4);
          *in_stack_000001c8 = uVar4;
          unaff_x21 = in_stack_000001b8;
          unaff_x25 = in_stack_000001d0;
          plVar41 = (long *)PTR_DAT_0422fae0;
          in_stack_000011fc = in_stack_000011fc - 1;
          unaff_s8 = fVar56;
          break;
        }
      }
      if (fVar62 <= in_stack_00000110) {
        FUN_03de9b60(fStack0000000000000088,fVar56,in_stack_00000150,fStack0000000000000140,
                     _fStack0000000000000180 & 0xffffffff,fVar60,fStack0000000000000084);
        bStack00000000000000e0 = 1;
        in_stack_000000c0 = 0;
        uStack00000000000000b4 = 1;
        unaff_x21 = in_stack_000001b8;
        unaff_x25 = in_stack_000001d0;
        plVar41 = (long *)PTR_DAT_0422fae0;
        unaff_s8 = fVar56;
        break;
      }
      if (*(int *)(unaff_x19 + 0x34c) == -1) {
        *(uint *)(unaff_x19 + 0x34c) = uVar40;
      }
      if (*(char *)(in_stack_000001d0 + 0xa8) != '\0') {
        fVar61 = *(float *)(in_stack_000001d0 + 0xd0);
        if ((fVar61 < *(float *)(unaff_x19 + 0x15b0)) &&
           (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
          fVar56 = *(float *)(unaff_x19 + 0x15b0) +
                   ((in_stack_00000020._4_4_ - fVar62) / (float)(*(int *)(unaff_x19 + 0x340) + 1)) /
                   fStack0000000000000088;
          if (fVar56 <= fVar61) {
            fVar56 = fVar61;
          }
          goto LAB_03ddc960;
        }
        fVar52 = *(float *)(unaff_x19 + 0x1594);
        fVar61 = *(float *)(in_stack_000001d0 + 0x108) / 100.0;
        if ((fVar52 < fVar61) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
        goto LAB_03ddca70;
        fVar61 = *(float *)(in_stack_000001d0 + 0xac);
        fVar52 = *_iStack00000000000000c8;
        if ((fVar61 < fVar52) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
        goto LAB_03ddc9cc;
      }
      switch(*(undefined4 *)(in_stack_000001d0 + 0x74)) {
      case 0:
      case 2:
      case 4:
        FUN_03de9b60(fStack0000000000000088,fVar56,in_stack_00000150,fStack0000000000000140,
                     _fStack0000000000000180 & 0xffffffff,fVar60,fStack0000000000000084);
        goto LAB_03dd9e2c;
      case 1:
        iVar13 = FUN_025deea8(in_stack_00000078,*(undefined8 *)StringLiteral_8889);
        plVar41 = (long *)PTR_DAT_0422fae0;
        if (iVar13 != 0) {
          FUN_025df310(&stack0x00001290,in_stack_00000078,*(undefined8 *)StringLiteral_8879);
          memcpy(&stack0x00000990,&stack0x00001290,0x398);
          iVar13 = FUN_03ddfb90();
          in_stack_000011fc = iVar13 - 1;
          in_stack_000000c0 = 0;
          in_stack_000001a8 = in_stack_000001a8 + 1;
          uVar42 = *(int *)(unaff_x19 + 0x324) - 1;
          *(uint *)(unaff_x19 + 0x324) = uVar42;
          uVar49 = 0x2026;
          goto LAB_03dd86cc;
        }
        in_stack_000000c0 = 0;
        goto LAB_03dd9b24;
      case 3:
        in_stack_000011fc = FUN_03ddfb90();
        in_stack_000000c0 = 0;
        break;
      case 5:
        *(undefined1 *)(unaff_x19 + 0x37c) = 1;
        FUN_03de9b60(fStack0000000000000088,fVar56,in_stack_00000150,fStack0000000000000140,
                     _fStack0000000000000180 & 0xffffffff,fVar60,fStack0000000000000084);
        *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
        *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
        *(undefined4 *)(unaff_x19 + 0x374) = 0;
        *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
        *(int *)(unaff_x19 + 0x350) = *(int *)(unaff_x19 + 0x350) + 1;
LAB_03dd9e2c:
        bStack00000000000000e0 = 1;
        in_stack_000000c0 = 0;
        uStack00000000000000b4 = 1;
        unaff_x21 = in_stack_000001b8;
        unaff_x25 = in_stack_000001d0;
        plVar41 = (long *)PTR_DAT_0422fae0;
        unaff_s8 = fVar56;
        goto LAB_03dd6304;
      case 6:
        in_stack_000000c0 = 0;
        uVar42 = uVar40;
        break;
      default:
        in_stack_000000c0 = 0;
        uVar42 = uVar40;
        goto LAB_03dd8290;
      }
LAB_03dd83e4:
      in_stack_00001278 = CONCAT44(3,uVar42);
      unaff_x21 = in_stack_000001b8;
      unaff_x25 = in_stack_000001d0;
      plVar41 = (long *)PTR_DAT_0422fae0;
      unaff_s8 = fVar56;
      break;
    case 3:
      in_stack_000011fc = FUN_03ddfb90();
      in_stack_00001278 = CONCAT44((int)((ulong)in_stack_00001278 >> 0x20),uVar42);
      unaff_x21 = in_stack_000001b8;
      unaff_x25 = in_stack_000001d0;
      plVar41 = (long *)PTR_DAT_0422fae0;
      unaff_s8 = fVar56;
      break;
    case 5:
      if (uVar42 == 0 || (int)in_stack_000011fc < 0) {
        *in_stack_000001c8 = 0;
        in_stack_00001278 = uVar44;
LAB_03dd9890:
        unaff_x21 = in_stack_000001b8;
        unaff_x25 = in_stack_000001d0;
        plVar41 = (long *)PTR_DAT_0422fae0;
        in_stack_000011fc = 0xffffffff;
        unaff_s8 = fVar56;
      }
      else {
        fVar60 = *(float *)(unaff_x19 + 0x338);
        in_stack_000011fc = FUN_03ddfb90();
        plVar41 = (long *)PTR_DAT_0422fae0;
        if (fVar60 - fVar62 <= in_stack_00000110) {
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
          unaff_x21 = in_stack_000001b8;
          unaff_x25 = in_stack_000001d0;
          unaff_s8 = fVar56;
          break;
        }
        uVar49 = 3;
LAB_03dd86cc:
        in_stack_00001278 = CONCAT44(uVar49,uVar42);
        unaff_x21 = in_stack_000001b8;
        unaff_x25 = in_stack_000001d0;
        unaff_s8 = fVar56;
      }
      break;
    case 6:
      in_stack_000011fc = FUN_03ddfb90();
      in_stack_00001278 = CONCAT44(3,uVar42);
      unaff_x21 = in_stack_000001b8;
      unaff_x25 = in_stack_000001d0;
      plVar41 = (long *)PTR_DAT_0422fae0;
      unaff_s8 = fVar56;
    }
LAB_03dd6304:
    in_stack_000011fc = in_stack_000011fc + 1;
    lVar26 = *(long *)(unaff_x19 + 0x20);
    if (lVar26 == 0) goto LAB_03ddcaac;
    if ((int)in_stack_000011fc < (int)*(uint *)(lVar26 + 0x18)) {
      if (*(uint *)(lVar26 + 0x18) <= in_stack_000011fc) goto LAB_03ddcab0;
      uVar14 = *(uint *)(lVar26 + (long)(int)in_stack_000011fc * 0x10 + 0x24);
      if (uVar14 == 0) goto LAB_03dd9e64;
      if (5 < in_stack_000001a8) {
        uVar44 = Oculus_Platform_CAPI__ovr_User_LaunchFriendRequestFlow(&stack0x0000128c,0);
        uVar59 = FUN_032cf308(&stack0x000011fc,0);
        uVar44 = FUN_031532c4(*(undefined8 *)StringLiteral_5971,uVar44,
                              *(undefined8 *)StringLiteral_5973,uVar59,0);
        if (*(int *)(*plVar41 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*plVar41);
        }
        FUN_03d04168(uVar44,0);
        in_stack_00001278 = CONCAT44(3,*in_stack_000001c8);
      }
      in_stack_0000128c = uVar14;
      if (uVar14 != 0x1a) {
        if ((uVar14 == 0x3c) && (*(char *)(unaff_x25 + 0xb5) != '\0')) {
          unaff_x27[0] = 1;
          unaff_x27[1] = 1;
          uVar19 = FUN_03ddfe50();
          if (((uVar19 & 1) != 0) && (in_stack_000011fc = in_stack_000011cc, *unaff_x27 == 1))
          goto LAB_03dd6304;
        }
        else {
          lVar26 = *in_stack_000001d8;
          if (lVar26 == 0) goto LAB_03ddcaac;
          if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001c8) goto LAB_03ddcab0;
          lVar26 = lVar26 + (long)(int)*in_stack_000001c8 * unaff_x26;
          *unaff_x27 = *(byte *)(lVar26 + 0x28);
          *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar26 + 0x60);
          *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(lVar26 + 0x40);
        }
        lVar26 = *in_stack_000001d8;
        if (lVar26 == 0) goto LAB_03ddcaac;
        uVar14 = *(uint *)(unaff_x19 + 0x324);
        unaff_x29 = 0x60;
        if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_03ddcab0;
        lVar31 = (long)(int)uVar14;
        unaff_w23 = *(undefined4 *)(unaff_x19 + 0x78);
        unaff_w20 = (uint)*(byte *)(lVar26 + lVar31 * unaff_x26 + 100);
        unaff_x27[1] = 0;
        in_stack_000001c0._4_4_ = 0;
        if ((uint)in_stack_00001278 == uVar14) {
          in_stack_0000128c = (uint)((ulong)in_stack_00001278 >> 0x20);
          in_stack_000001c0._4_4_ = 1;
          *unaff_x27 = 1;
          if (in_stack_0000128c == 0x2026) {
            uVar44 = *(undefined8 *)(unaff_x19 + 0x1a00);
            lVar26 = lVar26 + lVar31 * unaff_x26;
            *(undefined1 *)(lVar26 + 0x28) = 1;
            *(undefined8 *)(lVar26 + 0x30) = uVar44;
            *(undefined8 *)(lVar26 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1a08);
            *(undefined8 *)(lVar26 + 0x58) = *(undefined8 *)(unaff_x19 + 0x1a10);
            *(undefined4 *)(lVar26 + 0x60) = *(undefined4 *)(unaff_x19 + 0x1a18);
            *(undefined1 *)(*(long *)(*(long *)StringLiteral_8872 + 0xb8) + 8) = 1;
            in_stack_00001278 = CONCAT44(3,uVar14 + 1);
          }
          else if (in_stack_0000128c == 3) {
            if ((*in_stack_00000190 == 0) ||
               (lVar32 = FUN_03dc3e34(*in_stack_00000190,0), lVar32 == 0)) goto LAB_03ddcaac;
            uVar44 = FUN_02966be0(lVar32,3,*(undefined8 *)StringLiteral_8586);
            if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_03ddcab0;
            *(undefined8 *)(lVar26 + lVar31 * unaff_x26 + 0x30) = uVar44;
            in_stack_000001c0._4_4_ = 1;
            *(undefined1 *)(*(long *)(*(long *)StringLiteral_8872 + 0xb8) + 8) = 1;
            uVar14 = *in_stack_000001c8;
          }
        }
        plVar41 = (long *)PTR_DAT_0422fae0;
        if ((*(int *)(unaff_x25 + 0xe4) <= (int)uVar14) || (in_stack_0000128c == 3))
        goto LAB_03dd6320;
        lVar26 = *in_stack_000001d8;
        if (lVar26 == 0) goto LAB_03ddcaac;
        if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_03ddcab0;
        lVar26 = lVar26 + (long)(int)uVar14 * (long)iVar17;
        *(undefined1 *)(lVar26 + 0x1a0) = 0;
        *(undefined2 *)(lVar26 + 0x20) = 0x200b;
        *(undefined4 *)(lVar26 + 0x6c) = 0;
        *in_stack_000001c8 = uVar14 + 1;
        unaff_x21 = in_stack_000001b8;
      }
      goto LAB_03dd6304;
    }
LAB_03dd9e64:
    if ((((*(char *)(unaff_x25 + 0xa8) != '\0') &&
         (DAT_00b9319c < *(float *)(unaff_x19 + 0x1598) - *(float *)(unaff_x19 + 0x159c))) &&
        (fVar56 = *_iStack00000000000000c8, fVar56 < *(float *)(unaff_x25 + 0xb0))) &&
       (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
      fVar60 = *(float *)(unaff_x25 + 0x108);
      if (*(float *)(unaff_x19 + 0x1594) < fVar60 / 100.0) {
        *(undefined4 *)(unaff_x19 + 0x1594) = 0;
      }
      fVar45 = (*(float *)(unaff_x19 + 0x1598) - fVar56) * 0.5;
      if (fVar45 <= DAT_00b932d0) {
        fVar45 = DAT_00b932d0;
      }
      *(float *)(unaff_x19 + 0x159c) = fVar56;
      fVar45 = (fVar56 + fVar45) * 20.0 + 0.5;
      fVar56 = DAT_00b934d4;
      if (fVar45 != INFINITY) {
        fVar56 = (float)(int)fVar45 / 20.0;
      }
      if (fVar60 <= fVar56) {
        fVar56 = fVar60;
      }
      goto LAB_03dd9f28;
    }
    unaff_x27[0x30] = 1;
    if (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)) {
      uVar44 = FUN_032cf308(in_stack_00000070,0);
      uVar59 = FUN_032e3e84(_iStack00000000000000c8,0);
      uVar44 = FUN_031532c4(*(undefined8 *)StringLiteral_5975,uVar44,
                            *(undefined8 *)StringLiteral_5972,uVar59,0);
      if (*(int *)(*plVar41 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*plVar41);
      }
      FUN_03d03d14(uVar44,0);
    }
    plVar41 = (long *)StringLiteral_8728;
    if ((*in_stack_000001c8 == 0) || ((*in_stack_000001c8 == 1 && (in_stack_0000128c == 3)))) {
      FUN_03de6b6c(1,unaff_x21,0);
      goto LAB_03dd59bc;
    }
    lVar26 = *(long *)(unaff_x21 + 0x58);
    if (lVar26 == 0) goto LAB_03ddcaac;
    uVar14 = *(uint *)(unaff_x19 + 0x78);
    if (*(int *)(*(long *)StringLiteral_8728 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_03ddcab0;
    FUN_03dcfa50(lVar26 + (long)(int)uVar14 * 0x50 + 0x20,0,0);
    if (DAT_0452d6e9 == '\0') {
      FUN_01c5d288(PTR_DAT_042301b0);
      DAT_0452d6e9 = '\x01';
    }
    iVar17 = *(int *)(unaff_x25 + 0x70);
    fStack000000000000015c = **(float **)(*(long *)PTR_DAT_042301b0 + 0xb8);
    _in_stack_00000148 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_042301b0 + 0xb8) + 1);
    lVar26 = *(long *)(unaff_x19 + 0x50);
    uStack0000000000000118 = _in_stack_00000148;
    in_stack_00000120._4_4_ = fStack000000000000015c;
    if (iVar17 < 0x421) {
      if (iVar17 < 0x205) {
        if (iVar17 < 0x109) {
          if ((iVar17 - 0x101U < 8) && ((1 << (ulong)(iVar17 - 0x101U & 0x1f) & 0x8bU) != 0)) {
LAB_03dda2cc:
            if (lVar26 == 0) goto LAB_03ddcaac;
            if (*(uint *)(lVar26 + 0x18) < 2) goto LAB_03ddcab0;
            uVar44 = *(undefined8 *)(lVar26 + 0x30);
            if (*(int *)(unaff_x25 + 0x74) == 5) {
              lVar31 = *in_stack_00000050;
              if (lVar31 == 0) goto LAB_03ddcaac;
              if (*(uint *)(lVar31 + 0x18) <= uStack0000000000000080) goto LAB_03ddcab0;
              fVar56 = *(float *)(lVar31 + (long)(int)uStack0000000000000080 * 0x14 + 0x28);
            }
            else {
              fVar56 = *(float *)(unaff_x19 + 0x374);
            }
            in_stack_00000120._4_4_ = in_stack_00000058._4_4_ + 0.0 + *(float *)(lVar26 + 0x2c);
            fStack0000000000000038 = (0.0 - fVar56) - fStack000000000000003c;
            goto LAB_03dda660;
          }
        }
        else if (iVar17 < 0x121) {
          if ((iVar17 == 0x110) || (iVar17 == 0x120)) goto LAB_03dda2cc;
        }
        else if ((iVar17 - 0x201U < 4) && (iVar17 - 0x201U != 2)) goto LAB_03dda554;
      }
      else {
        if (iVar17 < 0x403) {
          if (iVar17 < 0x211) {
            if ((iVar17 == 0x208) || (iVar17 == 0x210)) goto LAB_03dda554;
            goto LAB_03dda670;
          }
          if (iVar17 != 0x220) {
            if (iVar17 - 0x401U < 2) goto LAB_03dda404;
            goto LAB_03dda670;
          }
LAB_03dda554:
          if (lVar26 == 0) goto LAB_03ddcaac;
          if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)) goto LAB_03ddcab0;
          in_stack_00000120._4_4_ = (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
          uVar44 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar26 + 0x24) +
                            (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5);
          if (*(int *)(unaff_x25 + 0x74) == 5) {
            lVar26 = *in_stack_00000050;
            if (lVar26 == 0) goto LAB_03ddcaac;
            if (uStack0000000000000080 < *(uint *)(lVar26 + 0x18)) {
              lVar26 = lVar26 + (long)(int)uStack0000000000000080 * 0x14;
              in_stack_00000120._4_4_ = in_stack_00000058._4_4_ + 0.0 + in_stack_00000120._4_4_;
              fStack0000000000000038 =
                   ((fStack000000000000003c + *(float *)(lVar26 + 0x28) + *(float *)(lVar26 + 0x30))
                   - fStack0000000000000038) * -0.5 + 0.0;
              goto LAB_03dda660;
            }
            goto LAB_03ddcab0;
          }
          in_stack_00000120._4_4_ = in_stack_00000058._4_4_ + 0.0 + in_stack_00000120._4_4_;
          fStack0000000000000038 =
               ((fStack000000000000003c + *(float *)(unaff_x19 + 0x374) + in_stack_00001288) -
               fStack0000000000000038) * -0.5 + 0.0;
        }
        else {
          if (iVar17 < 0x409) {
            if (iVar17 != 0x404) {
              bVar7 = iVar17 == 0x408;
              goto LAB_03dda3f0;
            }
          }
          else if (iVar17 != 0x410) {
            bVar7 = iVar17 == 0x420;
LAB_03dda3f0:
            if (!bVar7) goto LAB_03dda670;
          }
LAB_03dda404:
          if (lVar26 == 0) goto LAB_03ddcaac;
          if (*(int *)(lVar26 + 0x18) == 0) goto LAB_03ddcab0;
          uVar44 = *(undefined8 *)(lVar26 + 0x24);
          if (*(int *)(unaff_x25 + 0x74) == 5) {
            lVar31 = *in_stack_00000050;
            if (lVar31 == 0) goto LAB_03ddcaac;
            if (*(uint *)(lVar31 + 0x18) <= uStack0000000000000080) goto LAB_03ddcab0;
            in_stack_00001288 = *(float *)(lVar31 + (long)(int)uStack0000000000000080 * 0x14 + 0x30)
            ;
          }
          in_stack_00000120._4_4_ = in_stack_00000058._4_4_ + 0.0 + *(float *)(lVar26 + 0x20);
          fStack0000000000000038 = fStack0000000000000038 + (0.0 - in_stack_00001288);
        }
LAB_03dda660:
        uStack0000000000000118 =
             CONCAT44((float)((ulong)uVar44 >> 0x20) + 0.0,(float)uVar44 + fStack0000000000000038);
      }
    }
    else if (iVar17 < 0x1005) {
      if (iVar17 < 0x809) {
        if ((iVar17 - 0x801U < 8) && ((1 << (ulong)(iVar17 - 0x801U & 0x1f) & 0x8bU) != 0)) {
LAB_03dda230:
          if (lVar26 == 0) goto LAB_03ddcaac;
          if ((*(int *)(lVar26 + 0x18) != 1) && (*(int *)(lVar26 + 0x18) != 0)) {
            uStack0000000000000118 =
                 CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5 + 0.0,
                          ((float)*(undefined8 *)(lVar26 + 0x24) +
                          (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5 + 0.0);
            in_stack_00000120._4_4_ =
                 in_stack_00000058._4_4_ + 0.0 +
                 (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
            goto LAB_03dda670;
          }
          goto LAB_03ddcab0;
        }
      }
      else if (iVar17 < 0x821) {
        if ((iVar17 == 0x810) || (iVar17 == 0x820)) goto LAB_03dda230;
      }
      else if ((iVar17 - 0x1001U < 4) && (iVar17 - 0x1001U != 2)) goto LAB_03dda4bc;
    }
    else if (iVar17 < 0x2003) {
      if (iVar17 < 0x1011) {
        if ((iVar17 == 0x1008) || (iVar17 == 0x1010)) goto LAB_03dda4bc;
      }
      else {
        if (iVar17 == 0x1020) {
LAB_03dda4bc:
          if (lVar26 == 0) goto LAB_03ddcaac;
          if ((*(int *)(lVar26 + 0x18) != 1) && (*(int *)(lVar26 + 0x18) != 0)) {
            uVar44 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar26 + 0x24) +
                              (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5);
            in_stack_00000120._4_4_ =
                 in_stack_00000058._4_4_ + 0.0 +
                 (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
            fStack0000000000000038 =
                 0.0 - ((fStack000000000000003c + *(float *)(unaff_x19 + 0x36c) +
                        *(float *)(unaff_x19 + 0x364)) - fStack0000000000000038) * 0.5;
            goto LAB_03dda660;
          }
          goto LAB_03ddcab0;
        }
        if (iVar17 - 0x2001U < 2) goto LAB_03dda368;
      }
    }
    else {
      if (iVar17 < 0x2009) {
        if (iVar17 != 0x2004) {
          iVar13 = 0x2008;
          goto LAB_03dda350;
        }
      }
      else if (iVar17 != 0x2010) {
        iVar13 = 0x2020;
LAB_03dda350:
        if (iVar17 != iVar13) goto LAB_03dda670;
      }
LAB_03dda368:
      if (lVar26 == 0) goto LAB_03ddcaac;
      if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)) goto LAB_03ddcab0;
      uStack0000000000000118 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5 + 0.0,
                    ((float)*(undefined8 *)(lVar26 + 0x24) + (float)*(undefined8 *)(lVar26 + 0x30))
                    * 0.5 + (0.0 - ((*(float *)(unaff_x19 + 0x370) - fStack000000000000003c) -
                                   fStack0000000000000038) * 0.5));
      in_stack_00000120._4_4_ =
           in_stack_00000058._4_4_ + 0.0 +
           (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
    }
LAB_03dda670:
    uVar49 = FUN_01d35248(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_01d35248(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    if (*(int *)(*(long *)StringLiteral_8869 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)StringLiteral_8869);
    }
    FUN_03dea3a8(0);
    FUN_03dea578(&stack0x00001260,0x4000ffff,0);
    fVar56 = DAT_00b9343c;
    uVar14 = *in_stack_000001c8;
    if ((int)uVar14 < 1) {
      iVar17 = 0;
      fStack0000000000000140 = 0.0;
      goto LAB_03ddc86c;
    }
    lVar26 = *in_stack_000001d8;
    if (lVar26 == 0) goto LAB_03ddcaac;
    fStack0000000000000174 = 0.0;
    _bStack00000000000000e0 = 0.0;
    fStack00000000000000b0 = 0.0;
    plVar41 = (long *)(in_stack_000001b8 + 0x38);
    fStack00000000000000f4 = fStack000000000000012c;
    fStack00000000000000f8 = 0.0;
    in_stack_000000a8._4_4_ = 0.0;
    uVar21 = (ulong)&stack0x00001260 | 4;
    bVar10 = false;
    lVar31 = 0x2fc;
    fVar45 = 0.0;
    fVar60 = 0.0;
    uVar19 = (ulong)&stack0x000005e0 | 4;
    bVar8 = false;
    bVar7 = false;
    fStack0000000000000140 = 0.0;
    uStack0000000000000090 = 0;
    _fStack0000000000000168 = 0;
    iStack00000000000000c8 = 0;
    fStack0000000000000178 = 0.0;
    fStack0000000000000130 = fStack000000000000012c;
    fStack0000000000000138 = fStack0000000000000144;
    fStack00000000000000d4 = fStack0000000000000144;
    uStack00000000000000d8 = uStack0000000000000128;
    fStack00000000000000dc = fStack000000000000012c;
    uStack00000000000000e4 = uStack0000000000000128;
    fStack00000000000000e8 = fStack0000000000000144;
    fStack0000000000000160 = DAT_00b9343c;
    uVar15 = 0;
    uVar29 = 1;
    goto LAB_03dda7b8;
  }
  if (((in_stack_0000128c & 0xfffffffe) == 10) && (*(int *)(in_stack_000001d0 + 0x74) == 6)) {
    fVar60 = 0.0;
    if ((0.0 < fVar47) && (fVar60 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
      fVar60 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
    }
    if (in_stack_00000110 <
        (*(float *)(unaff_x19 + 0x374) - (*(float *)(unaff_x19 + 0x33c) - fVar47)) + fVar60) {
      if (*(int *)(unaff_x19 + 0x34c) == -1) {
        *(uint *)(unaff_x19 + 0x34c) = uVar42;
      }
      in_stack_000011fc = FUN_03ddfb90();
      goto LAB_03dd83e4;
    }
  }
  if ((((in_stack_0000128c - 0x2007 < 0x23) &&
       ((1L << ((ulong)(in_stack_0000128c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
      (in_stack_0000128c - 10 < 2)) || (in_stack_0000128c == 0xa0)) {
LAB_03dd85f4:
    if ((in_stack_0000128c == 0xad) || (in_stack_0000128c == 0x200b)) goto LAB_03dd8760;
    if (in_stack_0000128c != 0x2060) {
      lVar26 = *(long *)(in_stack_000001b8 + 0x48);
      if (lVar26 == 0) goto LAB_03ddcaac;
      if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar26 + 0x18)) {
        lVar26 = lVar26 + (int)*(uint *)(unaff_x19 + 0x340) * unaff_x29;
        *(int *)(lVar26 + 0x2c) = *(int *)(lVar26 + 0x2c) + 1;
        *(int *)(in_stack_000001b8 + 0x18) = *(int *)(in_stack_000001b8 + 0x18) + 1;
        goto LAB_03dd8648;
      }
      goto LAB_03ddcab0;
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar19 = FUN_0324dc50(in_stack_0000128c,0);
    if ((uVar19 & 1) != 0) goto LAB_03dd85f4;
  }
LAB_03dd8648:
  if (in_stack_0000128c == 0xa0) {
    lVar26 = *(long *)(in_stack_000001b8 + 0x48);
    if (lVar26 == 0) goto LAB_03ddcaac;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03ddcab0;
    lVar26 = lVar26 + (int)*(uint *)(unaff_x19 + 0x340) * unaff_x29;
    *(int *)(lVar26 + 0x20) = *(int *)(lVar26 + 0x20) + 1;
  }
LAB_03dd8760:
  bVar7 = *(int *)(in_stack_000001d0 + 0x74) == 1;
  if (bVar7 && in_stack_000001c0._4_4_ == 1) {
    bVar7 = in_stack_0000128c == 0x2d;
  }
  if (bVar7) {
    if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03ddcaac;
    fVar60 = *(float *)(unaff_x19 + 0xf4);
    iVar13 = FUN_03dc0e20(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
    if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03ddcaac;
    fVar65 = (float)FUN_03dc0e30(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
    lVar26 = *(long *)(unaff_x19 + 0x1a00);
    fVar45 = in_stack_00000148;
    if (*(char *)(in_stack_000001d0 + 0xbd) != '\0') {
      fVar45 = 1.0;
    }
    if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_03ddcaac;
    fVar47 = *(float *)(unaff_x19 + 0xf0);
    fVar61 = *(float *)(lVar26 + 0x2c);
    fVar46 = (float)FUN_03dc1378(*(long *)(lVar26 + 0x20),0);
    fVar64 = *_fStack0000000000000138;
    fVar46 = fVar47 * (fVar60 / (float)iVar13) * fVar65 * fVar45 * fVar61 * fVar46;
    fVar60 = *_fStack0000000000000130;
    if ((in_stack_0000128c == 10) && (*(int *)(unaff_x19 + 0x324) != *(int *)(unaff_x19 + 0x328))) {
      lVar26 = *in_stack_000001d8;
      if (lVar26 == 0) goto LAB_03ddcaac;
      uVar42 = *(int *)(unaff_x19 + 0x324) - 1;
      if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_03ddcab0;
      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03ddcaac;
      fVar45 = *(float *)(lVar26 + (long)(int)uVar42 * (long)iVar17 + 0x68);
      iVar13 = FUN_03dc0e20(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03ddcaac;
      fVar47 = (float)FUN_03dc0e30(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
      lVar26 = *(long *)(unaff_x19 + 0x1a00);
      fVar65 = in_stack_00000148;
      if (*(char *)(in_stack_000001d0 + 0xbd) != '\0') {
        fVar65 = 1.0;
      }
      if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_03ddcaac;
      fVar61 = *(float *)(unaff_x19 + 0xf0);
      fVar52 = *(float *)(lVar26 + 0x2c);
      fVar46 = (float)FUN_03dc1378(*(long *)(lVar26 + 0x20),0);
      lVar26 = *(long *)(in_stack_000001b8 + 0x48);
      if (lVar26 == 0) goto LAB_03ddcaac;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03ddcab0;
      lVar26 = lVar26 + (int)*(uint *)(unaff_x19 + 0x340) * unaff_x29;
      fVar64 = *(float *)(lVar26 + 100);
      fVar60 = *(float *)(lVar26 + 0x68);
      fVar46 = fVar61 * (fVar45 / (float)iVar13) * fVar47 * fVar65 * fVar52 * fVar46;
    }
    fVar65 = *(float *)(unaff_x19 + 0x2f4);
    fVar45 = 0.0;
    if (*(char *)(in_stack_000001d0 + 0xb6) == '\0') {
      if ((*(long *)(unaff_x19 + 0x1a00) == 0) ||
         (lVar26 = *(long *)(*(long *)(unaff_x19 + 0x1a00) + 0x20), lVar26 == 0)) goto LAB_03ddcaac;
      FUN_03dc133c(&stack0x00001290,lVar26,0);
      fVar45 = (float)FUN_03dc1184(&stack0x000011b0,0);
    }
    fVar47 = *(float *)(unaff_x19 + 0x35c);
    fVar60 = (in_stack_00000120._4_4_ - fVar64) - fVar60;
    bVar7 = true;
    if ((fVar47 <= fVar60) && (bVar7 = false, !NAN(fVar47))) {
      bVar7 = fVar47 == -1.0;
    }
    if (!bVar7) {
      fVar60 = fVar47;
    }
    fVar47 = 1.0;
    if (uVar37 != 0) {
      fVar47 = DAT_00b93264;
    }
    if (ABS(fVar65) + fVar46 * fVar45 * (1.0 - *(float *)(unaff_x19 + 0x1594)) < fVar47 * fVar60) {
      FUN_03ddf8fc();
      uVar44 = *(undefined8 *)StringLiteral_8880;
      memcpy(&stack0x00001290,in_stack_00000068,0x398);
      FUN_025df208(in_stack_00000078,&stack0x00001290,uVar44);
    }
  }
  lVar26 = *in_stack_000001d8;
  if (lVar26 == 0) goto LAB_03ddcaac;
  if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001c8) goto LAB_03ddcab0;
  uVar42 = *(uint *)(unaff_x19 + 0x340);
  lVar26 = lVar26 + (long)(int)*in_stack_000001c8 * unaff_x26;
  *(uint *)(lVar26 + 0x6c) = uVar42;
  *(undefined4 *)(lVar26 + 0x70) = *(undefined4 *)(unaff_x19 + 0x350);
  if (((in_stack_000001c0._4_4_ & 1) == 0) &&
     ((0xd < in_stack_0000128c || ((1 << (ulong)(in_stack_0000128c & 0x1f) & 0x2c00U) == 0)))) {
    lVar26 = *(long *)(in_stack_000001b8 + 0x48);
    if (lVar26 == 0) goto LAB_03ddcaac;
LAB_03dd8a98:
    if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_03ddcab0;
    *(undefined4 *)(lVar26 + (int)uVar42 * unaff_x29 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158);
  }
  else {
    lVar26 = *(long *)(in_stack_000001b8 + 0x48);
    if (lVar26 == 0) goto LAB_03ddcaac;
    if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_03ddcab0;
    if (*(int *)(lVar26 + (int)uVar42 * unaff_x29 + 0x24) == 1) goto LAB_03dd8a98;
  }
  if (in_stack_0000128c != 0x200b) {
    if (in_stack_0000128c == 9) {
      if (*in_stack_00000190 == 0) goto LAB_03ddcaac;
      fVar60 = (float)FUN_03dc0f18(*in_stack_00000190 + 0xb0,0);
      if (*in_stack_00000190 == 0) goto LAB_03ddcaac;
      bVar11 = FUN_03dc400c(*in_stack_00000190,0);
      fVar45 = *(float *)(unaff_x19 + 0x2f4);
      fVar48 = fVar56 * fVar60 * (float)bVar11;
      fVar60 = fVar48 * (float)(int)(fVar45 / fVar48);
      if (fVar60 <= fVar45) {
        fVar60 = fVar45 + fVar48;
      }
    }
    else {
      fVar60 = *(float *)(unaff_x19 + 0x2f0);
      if (fVar60 == 0.0) {
        fVar45 = *(float *)(unaff_x19 + 0x2f4);
        if (*(char *)(in_stack_000001d0 + 0xb6) != '\0') {
          fVar60 = (float)FUN_03dc321c(&stack0x000011d0,0);
          if (*in_stack_00000190 != 0) {
            fVar48 = (float)FUN_03dc3fcc(*in_stack_00000190,0);
            fVar45 = fVar45 - (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                              (*(float *)(unaff_x19 + 0x2ec) +
                              fVar56 * fVar60 +
                              in_stack_00000150 *
                              (fStack0000000000000140 + fStack0000000000000180 + fVar48));
            *(float *)(unaff_x19 + 0x2f4) = fVar45;
            if ((uVar14 == 0) && (in_stack_0000128c != 0x200b)) goto LAB_03dd8c54;
            fVar60 = fVar45 - in_stack_00000150 * *(float *)(in_stack_000001d0 + 0xc4);
            goto LAB_03dd8c50;
          }
          goto LAB_03ddcaac;
        }
        fVar60 = (float)FUN_03dc1184(&stack0x000011e0,0);
        fVar65 = *(float *)(unaff_x19 + 0x19a8);
        fVar48 = (float)FUN_03dc321c(&stack0x000011d0,0);
        if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03ddcaac;
        fVar46 = (float)FUN_03dc3fcc(*(long *)(unaff_x19 + 0x68),0);
        fVar45 = fVar45 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                          (*(float *)(unaff_x19 + 0x2ec) +
                          fVar56 * (fVar60 * fVar65 + fVar48) +
                          in_stack_00000150 *
                          (fStack0000000000000140 + fStack0000000000000180 + fVar46));
      }
      else {
        if (*in_stack_00000190 == 0) goto LAB_03ddcaac;
        fVar45 = *(float *)(unaff_x19 + 0x2f4);
        fVar65 = (float)FUN_03dc3fcc(*in_stack_00000190,0);
        fVar45 = fVar45 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                          (*(float *)(unaff_x19 + 0x2ec) +
                          (fVar60 - fVar48) + in_stack_00000150 * (fStack0000000000000180 + fVar65))
        ;
      }
      *(float *)(unaff_x19 + 0x2f4) = fVar45;
      if ((uVar14 == 0) && (in_stack_0000128c != 0x200b)) goto LAB_03dd8c54;
      fVar60 = fVar45 + in_stack_00000150 * *(float *)(in_stack_000001d0 + 0xc4);
    }
LAB_03dd8c50:
    *(float *)(unaff_x19 + 0x2f4) = fVar60;
  }
LAB_03dd8c54:
  lVar26 = *in_stack_000001d8;
  if (lVar26 == 0) goto LAB_03ddcaac;
  uVar42 = *in_stack_000001c8;
  if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_03ddcab0;
  *(undefined4 *)(lVar26 + (long)(int)uVar42 * unaff_x26 + 0x164) =
       *(undefined4 *)(unaff_x19 + 0x2f4);
  if (in_stack_0000128c == 0xd) {
    *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
  }
  if ((*(int *)(in_stack_000001d0 + 0x74) == 5) &&
     (((0xd < in_stack_0000128c || ((1 << (ulong)(in_stack_0000128c & 0x1f) & 0x2c00U) == 0)) &&
      (1 < in_stack_0000128c - 0x2028)))) {
    lVar26 = *in_stack_00000050;
    if (lVar26 == 0) goto LAB_03ddcaac;
    uVar37 = *(uint *)(unaff_x19 + 0x350);
    if (*(int *)(lVar26 + 0x18) < (int)(uVar37 + 1)) {
      if (*(int *)(*(long *)StringLiteral_8875 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_0243bfd8(in_stack_00000050,uVar37 + 1,1,*(undefined8 *)StringLiteral_8873);
      lVar26 = *in_stack_00000050;
      if (lVar26 == 0) goto LAB_03ddcaac;
      uVar37 = *(uint *)(unaff_x19 + 0x350);
    }
    if (*(uint *)(lVar26 + 0x18) <= uVar37) goto LAB_03ddcab0;
    lVar31 = lVar26 + (long)(int)uVar37 * 0x14;
    *(undefined4 *)(lVar31 + 0x28) = *(undefined4 *)(unaff_x19 + 0x19c8);
    fVar60 = *(float *)(unaff_x19 + 0x378);
    if (*(float *)(lVar31 + 0x30) <= *(float *)(unaff_x19 + 0x378)) {
      fVar60 = *(float *)(lVar31 + 0x30);
    }
    *(float *)(lVar31 + 0x30) = fVar60;
    if (*(char *)(unaff_x19 + 0x37c) != '\0') {
      *(undefined1 *)(unaff_x19 + 0x37c) = 0;
      *(undefined4 *)(lVar26 + (long)(int)uVar37 * 0x14 + 0x20) = *(undefined4 *)(unaff_x19 + 0x324)
      ;
    }
    uVar42 = *in_stack_000001c8;
    *(uint *)(lVar26 + (long)(int)uVar37 * 0x14 + 0x24) = uVar42;
  }
  if (((in_stack_0000128c < 0xc) && ((1 << (ulong)(in_stack_0000128c & 0x1f) & 0xc08U) != 0)) ||
     ((in_stack_0000128c - 0x2028 < 2 ||
      (((in_stack_000001c0._4_4_ & in_stack_0000128c == 0x2d) != 0 ||
       (uVar42 == uStack00000000000000e4)))))) {
    if (0.0 < *(float *)(unaff_x19 + 0x2e0)) {
      fVar60 = *(float *)(unaff_x19 + 0x338);
      fVar45 = *(float *)(unaff_x19 + 0x15ac);
      if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      fVar60 = fVar60 - fVar45;
      if (((fStack00000000000000b0 < ABS(fVar60)) && (*(char *)(unaff_x19 + 0x2e8) == '\0')) &&
         (*(char *)(unaff_x19 + 0x37c) != '\x01')) {
        uVar49 = *(undefined4 *)(unaff_x19 + 0x328);
        uVar50 = *(undefined4 *)(unaff_x19 + 0x324);
        if (*(int *)(*(long *)StringLiteral_8871 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03dedad8(fVar60,uVar49,uVar50,in_stack_000001b8,0);
        *(float *)(unaff_x19 + 0x378) = *(float *)(unaff_x19 + 0x378) - fVar60;
        *(float *)(unaff_x19 + 0x2e0) = fVar60 + *(float *)(unaff_x19 + 0x2e0);
        if (*(int *)(unaff_x19 + 0xad8) == *(int *)(unaff_x19 + 0x340)) {
          FUN_025df310(&stack0x00001290,in_stack_00000078,*(undefined8 *)StringLiteral_8879);
          memcpy(&stack0x00000220,&stack0x00001290,0x398);
          memcpy(in_stack_00000068,&stack0x00000220,0x398);
          *(float *)(unaff_x19 + 0xaf0) = fVar60 + *(float *)(unaff_x19 + 0xaf0);
          *(float *)(unaff_x19 + 0xb24) = fVar60 + *(float *)(unaff_x19 + 0xb24);
          uVar44 = *(undefined8 *)StringLiteral_8880;
          memcpy(&stack0x00001290,in_stack_00000068,0x398);
          FUN_025df208(in_stack_00000078,&stack0x00001290,uVar44);
        }
      }
    }
    fVar45 = *(float *)(unaff_x19 + 0x2e0);
    *(undefined1 *)(unaff_x19 + 0x37c) = 0;
    fVar48 = *(float *)(unaff_x19 + 0x33c) - fVar45;
    fVar60 = *(float *)(unaff_x19 + 0x378);
    if (fVar48 <= *(float *)(unaff_x19 + 0x378)) {
      fVar60 = fVar48;
    }
    *(float *)(unaff_x19 + 0x378) = fVar60;
    plVar41 = (long *)PTR_DAT_0422fae0;
    fVar65 = *(float *)(unaff_x19 + 0x338);
    if (in_stack_00001284 == '\0') {
      in_stack_00001288 = fVar60;
    }
    if ((*(char *)(in_stack_000001d0 + 0xe8) != '\0') &&
       ((*(int *)(in_stack_000001d0 + 0xd8) <= (int)*in_stack_000001c8 ||
        (*(int *)(in_stack_000001d0 + 0xe0) <= *(int *)(unaff_x19 + 0x340))))) {
      in_stack_00001284 = '\x01';
    }
    lVar26 = *(long *)(in_stack_000001b8 + 0x48);
    if (lVar26 == 0) goto LAB_03ddcaac;
    uVar42 = *(uint *)(unaff_x19 + 0x340);
    if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_03ddcab0;
    iVar13 = *(int *)(unaff_x19 + 0x328);
    lVar31 = lVar26 + (long)(int)uVar42 * 0x60;
    *(int *)(lVar31 + 0x38) = iVar13;
    uVar37 = *(uint *)(unaff_x19 + 0x328);
    if (iVar13 <= (int)*(uint *)(unaff_x19 + 0x330)) {
      uVar37 = *(uint *)(unaff_x19 + 0x330);
    }
    *(uint *)(unaff_x19 + 0x330) = uVar37;
    *(uint *)(lVar31 + 0x3c) = uVar37;
    iVar1 = *(int *)(unaff_x19 + 0x324);
    *(int *)(unaff_x19 + 0x32c) = iVar1;
    *(int *)(lVar31 + 0x40) = iVar1;
    iVar16 = *(int *)(unaff_x19 + 0x330);
    if ((int)uVar37 <= *(int *)(unaff_x19 + 0x334)) {
      iVar16 = *(int *)(unaff_x19 + 0x334);
    }
    *(int *)(unaff_x19 + 0x334) = iVar16;
    *(int *)(lVar31 + 0x44) = iVar16;
    *(int *)(lVar31 + 0x24) = (iVar1 - iVar13) + 1;
    *(undefined4 *)(lVar31 + 0x28) = *(undefined4 *)(unaff_x19 + 0x344);
    *(undefined4 *)(lVar31 + 0x30) = *(undefined4 *)(unaff_x19 + 0x348);
    lVar31 = *in_stack_000001d8;
    if (lVar31 == 0) goto LAB_03ddcaac;
    if (*(uint *)(lVar31 + 0x18) <= uVar37) goto LAB_03ddcab0;
    uVar49 = *(undefined4 *)(lVar31 + (long)(int)uVar37 * (long)iVar17 + 0x124);
    lVar26 = lVar26 + (long)(int)uVar42 * 0x60;
    *(float *)(lVar26 + 0x74) = fVar48;
    *(undefined4 *)(lVar26 + 0x70) = uVar49;
    lVar26 = *(long *)(in_stack_000001b8 + 0x48);
    if (lVar26 == 0) goto LAB_03ddcaac;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03ddcab0;
    lVar31 = *in_stack_000001d8;
    if (lVar31 == 0) goto LAB_03ddcaac;
    if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto LAB_03ddcab0;
    uVar49 = *(undefined4 *)(lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x334) * unaff_x26 + 0x130);
    fVar65 = fVar65 - fVar45;
    lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
    *(float *)(lVar26 + 0x7c) = fVar65;
    *(undefined4 *)(lVar26 + 0x78) = uVar49;
    lVar26 = *(long *)(in_stack_000001b8 + 0x48);
    if (lVar26 == 0) goto LAB_03ddcaac;
    uVar42 = *(uint *)(unaff_x19 + 0x340);
    if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_03ddcab0;
    lVar31 = lVar26 + (long)(int)uVar42 * 0x60;
    *(float *)(lVar31 + 0x48) = *(float *)(lVar31 + 0x78) - fVar56 * in_stack_00000188;
    *(undefined4 *)(lVar31 + 0x60) = uStack000000000000016c;
    if (*(int *)(lVar31 + 0x24) == 1) {
      *(undefined4 *)(lVar26 + (long)(int)uVar42 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158)
      ;
    }
    if (*in_stack_00000190 == 0) goto LAB_03ddcaac;
    fVar60 = (float)FUN_03dc3fcc(*in_stack_00000190,0);
    lVar26 = *in_stack_000001d8;
    if (lVar26 == 0) goto LAB_03ddcaac;
    lVar31 = (long)(int)*(uint *)(unaff_x19 + 0x334);
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto LAB_03ddcab0;
    lVar32 = *(long *)(in_stack_000001b8 + 0x48);
    if (lVar32 == 0) goto LAB_03ddcaac;
    uVar42 = *(uint *)(unaff_x19 + 0x340);
    if (((*(char *)(lVar26 + lVar31 * unaff_x26 + 0x1a0) == '\0') &&
        (lVar31 = (long)(int)*(uint *)(unaff_x19 + 0x32c),
        *(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x32c))) ||
       (uVar37 = (uint)*(undefined8 *)(lVar32 + 0x18), uVar37 <= uVar42)) goto LAB_03ddcab0;
    fVar45 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
             (*(float *)(unaff_x19 + 0x2ec) +
             in_stack_00000150 * (fStack0000000000000140 + fStack0000000000000180 + fVar60));
    fVar60 = -fVar45;
    if (*(char *)(in_stack_000001d0 + 0xb6) != '\0') {
      fVar60 = fVar45;
    }
    *(float *)(lVar32 + (long)(int)uVar42 * 0x60 + 0x5c) =
         *(float *)(lVar26 + lVar31 * unaff_x26 + 0x164) + fVar60;
    if (uVar37 <= uVar42) goto LAB_03ddcab0;
    lVar32 = lVar32 + (long)(int)uVar42 * 0x60;
    *(float *)(lVar32 + 0x54) = 0.0 - *(float *)(unaff_x19 + 0x2e0);
    *(float *)(lVar32 + 0x58) = fVar48;
    *(float *)(lVar32 + 0x4c) = in_stack_000000a8._4_4_ + (fVar65 - fVar48);
    *(float *)(lVar32 + 0x50) = fVar65;
    if ((int)in_stack_0000128c < 0x2d) {
      if (in_stack_0000128c - 10 < 2) {
LAB_03dd9208:
        FUN_03ddf8fc();
        uVar14 = *(uint *)(unaff_x19 + 0x324);
        iVar13 = *(int *)(unaff_x19 + 0x340) + 1;
        *(int *)(unaff_x19 + 0x340) = iVar13;
        *(uint *)(unaff_x19 + 0x328) = uVar14 + 1;
        in_stack_000001c8[8] = 0;
        in_stack_000001c8[9] = 0;
        if (*(long *)(in_stack_000001b8 + 0x48) == 0) goto LAB_03ddcaac;
        if (*(int *)(*(long *)(in_stack_000001b8 + 0x48) + 0x18) <= iVar13) {
          if (*(int *)(*(long *)StringLiteral_8871 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_03dedc58(iVar13,in_stack_000001b8,0);
          uVar14 = *in_stack_000001c8;
        }
        lVar26 = *in_stack_000001d8;
        if (lVar26 == 0) goto LAB_03ddcaac;
        if (uVar14 < *(uint *)(lVar26 + 0x18)) {
          fVar60 = *(float *)(lVar26 + (long)(int)uVar14 * (long)iVar17 + 0x158);
          if (*(float *)(unaff_x19 + 0x2e4) == DAT_00b932ec) {
            if ((in_stack_0000128c == 0x2029) || (fVar45 = 0.0, in_stack_0000128c == 10)) {
              fVar45 = *(float *)(in_stack_000001d0 + 0xcc);
            }
            uVar23 = 0;
            fVar45 = fVar60 + (0.0 - *(float *)(unaff_x19 + 0x33c)) +
                     fStack0000000000000088 *
                     (fStack0000000000000084 + *(float *)(unaff_x19 + 0x15b0)) +
                     in_stack_00000150 * (*(float *)(in_stack_000001d0 + 200) + fVar45) +
                     *(float *)(unaff_x19 + 0x2e0);
          }
          else {
            if ((in_stack_0000128c == 0x2029) || (fVar45 = 0.0, in_stack_0000128c == 10)) {
              fVar45 = *(float *)(in_stack_000001d0 + 0xcc);
            }
            uVar23 = 1;
            fVar45 = *(float *)(unaff_x19 + 0x2e0) +
                     *(float *)(unaff_x19 + 0x2e4) +
                     in_stack_00000150 * (*(float *)(in_stack_000001d0 + 200) + fVar45);
          }
          *(float *)(unaff_x19 + 0x2e0) = fVar45;
          *(float *)(unaff_x19 + 0x15ac) = fVar60;
          *(undefined1 *)(unaff_x19 + 0x2e8) = uVar23;
          *(undefined8 *)(unaff_x19 + 0x338) = _uStack0000000000000090;
          *(float *)(unaff_x19 + 0x2f4) =
               *(float *)(unaff_x19 + 0x2f8) + 0.0 + *(float *)(unaff_x19 + 0x2fc);
          FUN_03ddf8fc();
          FUN_03ddf8fc();
          bStack00000000000000e0 = 1;
          *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
          uStack00000000000000b4 = 1;
          unaff_x21 = in_stack_000001b8;
          unaff_x25 = in_stack_000001d0;
          unaff_s8 = fVar56;
          goto LAB_03dd6304;
        }
        goto LAB_03ddcab0;
      }
      if (in_stack_0000128c == 3) {
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03ddcaac;
        in_stack_000011fc = (uint)*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
      }
    }
    else if ((in_stack_0000128c - 0x2028 < 2) || (in_stack_0000128c == 0x2d)) goto LAB_03dd9208;
  }
  else {
    lVar26 = *in_stack_000001d8;
    plVar41 = (long *)PTR_DAT_0422fae0;
    if (lVar26 == 0) goto LAB_03ddcaac;
  }
  uVar42 = *in_stack_000001c8;
  if (uVar42 < *(uint *)(lVar26 + 0x18)) {
    if (*(char *)(lVar26 + (long)(int)uVar42 * unaff_x26 + 0x1a0) != '\0') {
      lVar26 = lVar26 + (long)(int)uVar42 * unaff_x26;
      uVar19 = *(ulong *)(unaff_x19 + 0x360);
      uVar21 = *(ulong *)(lVar26 + 0x124);
      *(ulong *)(unaff_x19 + 0x360) =
           uVar19 ^ (uVar19 ^ uVar21) &
                    ~CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar21 >> 0x20)),
                              -(uint)((float)uVar19 < (float)uVar21));
      uVar19 = *(ulong *)(unaff_x19 + 0x368);
      uVar21 = *(ulong *)(lVar26 + 0x130);
      *(ulong *)(unaff_x19 + 0x368) =
           uVar19 ^ (uVar19 ^ uVar21) &
                    ~CONCAT44(-(uint)((float)(uVar21 >> 0x20) < (float)(uVar19 >> 0x20)),
                              -(uint)((float)uVar21 < (float)uVar19));
    }
    if ((iStack000000000000008c != 0) ||
       ((*(uint *)(in_stack_000001d0 + 0x74) < 7 &&
        ((1 << (ulong)(*(uint *)(in_stack_000001d0 + 0x74) & 0x1f) & 0x4aU) != 0)))) {
      if ((uVar14 == 0) &&
         (((in_stack_0000128c != 0x2d && (in_stack_0000128c != 0x200b)) &&
          (in_stack_0000128c != 0xad)))) {
        if (*(char *)(unaff_x19 + 0x37d) == '\0') {
LAB_03dd952c:
          if (*(int *)(*(long *)StringLiteral_8871 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar19 = FUN_03dee478(in_stack_0000128c,0);
          if ((uVar19 & 1) == 0) {
LAB_03dd9574:
            if (*(int *)(*(long *)StringLiteral_8871 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar19 = FUN_03dee4e8(in_stack_0000128c,0);
            if ((uVar19 & 1) == 0) goto LAB_03dd965c;
            if (in_stack_00000060 == 0) goto LAB_03ddcaac;
          }
          else {
            if ((in_stack_00000060 == 0) ||
               (lVar26 = FUN_03df0e80(in_stack_00000060,0), lVar26 == 0)) goto LAB_03ddcaac;
            if (*(char *)(lVar26 + 0x28) != '\0') goto LAB_03dd9574;
          }
          lVar26 = FUN_03df0e80(in_stack_00000060,0);
          if ((lVar26 == 0) || (lVar26 = FUN_03df2ef4(lVar26,0), lVar26 == 0)) goto LAB_03ddcaac;
          uVar19 = FUN_02b9e934(lVar26,in_stack_0000128c,*(undefined8 *)StringLiteral_6266);
          if ((int)*in_stack_000001c8 < (int)uStack00000000000000e4) {
            lVar26 = FUN_03df0e80(in_stack_00000060,0);
            if (lVar26 == 0) goto LAB_03ddcaac;
            lVar26 = FUN_03df30f0(lVar26,0);
            lVar31 = *in_stack_000001d8;
            if (lVar31 == 0) goto LAB_03ddcaac;
            if (*(uint *)(lVar31 + 0x18) <= *in_stack_000001c8 + 1) goto LAB_03ddcab0;
            if (lVar26 == 0) goto LAB_03ddcaac;
            uVar21 = FUN_02b9e934(lVar26,*(undefined2 *)
                                          (lVar31 + (long)(int)(*in_stack_000001c8 + 1) *
                                                    (long)iVar17 + 0x20),
                                  *(undefined8 *)StringLiteral_6266);
            if ((uVar19 & 1) != 0) goto LAB_03dd984c;
            if ((uVar21 & 1) == 0) goto LAB_03dd9b38;
            if ((bStack00000000000000e0 & 1) == 0) goto LAB_03dd9b50;
          }
          else {
            if ((uVar19 & 1) == 0) {
LAB_03dd9b38:
              FUN_03ddf8fc();
              goto LAB_03dd9b50;
            }
LAB_03dd984c:
            if (uVar15 != uVar29 || ((bStack00000000000000e0 ^ 0xff) & 1) != 0) goto LAB_03dd9b5c;
          }
          if (uVar14 != 0) {
LAB_03dd96a0:
            FUN_03ddf8fc();
          }
        }
        else {
LAB_03dd965c:
          if ((bStack00000000000000e0 & 1) == 0) {
LAB_03dd9b50:
            bStack00000000000000e0 = 0;
            goto LAB_03dd9b5c;
          }
          if ((uVar14 != 0 && in_stack_0000128c != 0xa0) ||
             ((in_stack_000000c0 & 1) == 0 && in_stack_0000128c == 0xad)) goto LAB_03dd96a0;
        }
        FUN_03ddf8fc();
        bStack00000000000000e0 = 1;
      }
      else {
        if (*(char *)(unaff_x19 + 0x37d) == '\x01') goto LAB_03dd965c;
        if (((in_stack_0000128c - 0x2007 < 0x29) &&
            ((1L << ((ulong)(in_stack_0000128c - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
           ((in_stack_0000128c == 0xa0 || (in_stack_0000128c == 0x2060)))) goto LAB_03dd952c;
        FUN_03ddf8fc();
        bStack00000000000000e0 = 0;
        *(undefined4 *)(unaff_x19 + 0x11e0) = 0xffffffff;
      }
    }
LAB_03dd9b5c:
    FUN_03ddf8fc();
    *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
    unaff_x21 = in_stack_000001b8;
    unaff_x25 = in_stack_000001d0;
    unaff_s8 = fVar56;
    goto LAB_03dd6304;
  }
  goto LAB_03ddcab0;
LAB_03dd6320:
  in_w8 = (uint)*unaff_x27;
  unaff_x24 = in_stack_00000190;
  if (*unaff_x27 != 1) {
    fStack0000000000000174 = 1.0;
    unaff_x21 = in_stack_000001b8;
    goto code_r0x03dd6488;
  }
  uVar14 = *(uint *)(unaff_x19 + 0x124);
  if ((uVar14 >> 4 & 1) == 0) {
    if ((uVar14 >> 3 & 1) == 0) {
      fStack0000000000000174 = 1.0;
      if ((uVar14 >> 5 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar19 = FUN_0324cb34(in_stack_0000128c,0);
        if ((uVar19 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar14 = FUN_0324ce14(in_stack_0000128c,0);
          in_stack_0000128c = uVar14 & 0xffff;
          fStack0000000000000174 = fStack000000000000002c;
        }
      }
      goto LAB_03dd6484;
    }
    if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar19 = FUN_0324ca78(in_stack_0000128c,0);
    fStack0000000000000174 = 1.0;
    if ((uVar19 & 1) == 0) goto LAB_03dd6484;
    if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar14 = FUN_0324cf8c(in_stack_0000128c,0);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar19 = FUN_0324cb34(in_stack_0000128c,0);
    fStack0000000000000174 = 1.0;
    if ((uVar19 & 1) == 0) goto LAB_03dd6484;
    if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar14 = FUN_0324ce14(in_stack_0000128c,0);
  }
  fStack0000000000000174 = 1.0;
  in_stack_0000128c = uVar14 & 0xffff;
LAB_03dd6484:
  in_w8 = (uint)*unaff_x27;
  unaff_x21 = in_stack_000001b8;
  goto code_r0x03dd6488;
LAB_03dda7b8:
  do {
    uVar14 = uVar29 - 1;
    if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_03ddcab0;
    lVar43 = (long)(int)uVar14;
    lVar32 = lVar26 + lVar43 * 0x188;
    lVar30 = *(long *)(lVar32 + 0x40);
    uVar2 = *(ushort *)(lVar32 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    bVar11 = FUN_0324a054(uVar2,0);
    if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_03ddcab0;
    lVar32 = *(long *)(in_stack_000001b8 + 0x48);
    uVar42 = (uint)uVar2;
    if (lVar32 == 0) goto LAB_03ddcaac;
    uVar37 = *(uint *)(lVar26 + lVar43 * 0x188 + 0x6c);
    if (*(uint *)(lVar32 + 0x18) <= uVar37) goto LAB_03ddcab0;
    lVar33 = (long)(int)uVar37;
    lVar32 = lVar32 + lVar33 * 0x60;
    uVar4 = *(uint *)(lVar32 + 0x40);
    uVar40 = *(uint *)(lVar32 + 0x6c);
    iVar16 = *(int *)(lVar32 + 0x20);
    iVar17 = *(int *)(lVar32 + 0x28);
    iVar13 = *(int *)(lVar32 + 0x2c);
    uVar5 = *(uint *)(lVar32 + 0x44);
    lVar34 = (long)(int)uVar5;
    fVar47 = *(float *)(lVar32 + 0x50);
    fVar61 = *(float *)(lVar32 + 0x58);
    fVar48 = *(float *)(lVar32 + 0x5c);
    fVar65 = *(float *)(lVar32 + 0x60);
    fVar62 = *(float *)(lVar32 + 100);
    fVar52 = *(float *)(lVar32 + 0x70);
    fVar67 = *(float *)(lVar32 + 0x74);
    fVar46 = *(float *)(lVar32 + 0x78);
    fVar64 = *(float *)(lVar32 + 0x7c);
    if ((int)uVar40 < 0x421) {
      if ((int)uVar40 < 0x209) {
        if ((int)uVar40 < 0x111) {
          switch(uVar40) {
          case 0x101:
            goto switchD_03dda918_caseD_1001;
          case 0x102:
            goto switchD_03dda918_caseD_1002;
          case 0x103:
          case 0x105:
          case 0x106:
          case 0x107:
            break;
          case 0x104:
            goto UnityEngine_UIElements_UIDocument__FindUIDocumentParent;
          case 0x108:
            goto switchD_03dda918_caseD_1008;
          default:
            if (uVar40 == 0x110) goto switchD_03dda918_caseD_1008;
          }
        }
        else {
          switch(uVar40) {
          case 0x201:
            goto switchD_03dda918_caseD_1001;
          case 0x202:
            goto switchD_03dda918_caseD_1002;
          case 0x203:
          case 0x205:
          case 0x206:
          case 0x207:
            break;
          case 0x204:
            goto UnityEngine_UIElements_UIDocument__FindUIDocumentParent;
          case 0x208:
            goto switchD_03dda918_caseD_1008;
          default:
            if (uVar40 == 0x120) goto LAB_03ddaa7c;
          }
        }
      }
      else if ((int)uVar40 < 0x405) {
        if ((int)uVar40 < 0x401) {
          if (uVar40 == 0x210) goto switchD_03dda918_caseD_1008;
          if (uVar40 == 0x220) goto LAB_03ddaa7c;
        }
        else {
          if (uVar40 == 0x401) goto switchD_03dda918_caseD_1001;
          if (uVar40 == 0x402) goto switchD_03dda918_caseD_1002;
          if (uVar40 == 0x404) goto UnityEngine_UIElements_UIDocument__FindUIDocumentParent;
        }
      }
      else {
        if ((uVar40 == 0x408) || (uVar40 == 0x410)) goto switchD_03dda918_caseD_1008;
        if (uVar40 == 0x420) goto LAB_03ddaa7c;
      }
      goto switchD_03dda918_caseD_1003;
    }
    if (0x1008 < (int)uVar40) {
      if ((int)uVar40 < 0x2005) {
        if (0x2000 < (int)uVar40) {
          if (uVar40 == 0x2001) goto switchD_03dda918_caseD_1001;
          if (uVar40 == 0x2002) goto switchD_03dda918_caseD_1002;
          if (uVar40 == 0x2004) goto UnityEngine_UIElements_UIDocument__FindUIDocumentParent;
          goto switchD_03dda918_caseD_1003;
        }
        if (uVar40 != 0x1010) {
          uVar25 = 0x1020;
          goto LAB_03ddaa3c;
        }
      }
      else if ((uVar40 != 0x2008) && (uVar40 != 0x2010)) {
        uVar25 = 0x2020;
LAB_03ddaa3c:
        if (uVar40 != uVar25) goto switchD_03dda918_caseD_1003;
LAB_03ddaa7c:
        fVar48 = fVar52 + fVar46;
        goto LAB_03ddaa90;
      }
      goto switchD_03dda918_caseD_1008;
    }
    if ((int)uVar40 < 0x811) {
      switch(uVar40) {
      case 0x801:
        goto switchD_03dda918_caseD_1001;
      case 0x802:
        goto switchD_03dda918_caseD_1002;
      case 0x803:
      case 0x805:
      case 0x806:
      case 0x807:
        break;
      case 0x804:
        goto UnityEngine_UIElements_UIDocument__FindUIDocumentParent;
      case 0x808:
switchD_03dda918_caseD_1008:
        if ((int)uVar14 <= (int)uVar5) {
          if (uVar42 < 0xad) {
            if ((uVar42 != 3) && (uVar42 != 10)) goto LAB_03ddad30;
          }
          else if ((uVar42 != 0xad) && ((uVar42 != 0x200b && (uVar42 != 0x2060)))) {
LAB_03ddad30:
            if (*(uint *)(lVar26 + 0x18) <= uVar4) goto LAB_03ddcab0;
            uVar3 = *(undefined2 *)(lVar26 + (long)(int)uVar4 * 0x188 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar22 = FUN_0324d7c0(uVar3,0);
            if ((uVar22 & 1) == 0) {
              bVar9 = (int)uVar37 < *(int *)(unaff_x19 + 0x340);
            }
            else {
              bVar9 = false;
            }
            if ((fVar48 <= fVar65) && (!bVar9 && (uVar40 >> 4 & 1) == 0)) {
              fStack000000000000015c = fVar62;
              if (*(char *)(in_stack_000001d0 + 0xb6) != '\0') {
                fStack000000000000015c = fVar65 + fVar62;
              }
              goto LAB_03ddaa94;
            }
            if ((uVar29 == 1) || (uVar37 != uVar15)) {
              cVar24 = *(char *)(in_stack_000001d0 + 0xb6);
            }
            else {
              cVar24 = *(char *)(in_stack_000001d0 + 0xb6);
              if (uVar14 != *(uint *)(in_stack_000001d0 + 0xe4)) {
                iVar13 = (iVar13 - iVar16) - (uStack0000000000000090 & 1);
                fVar62 = -fVar48;
                if (cVar24 != '\0') {
                  fVar62 = fVar48;
                }
                if (iVar13 < 1) {
                  fVar48 = 1.0;
                }
                else {
                  fVar48 = *(float *)(in_stack_000001d0 + 0x7c);
                }
                if (iVar13 < 2) {
                  iVar13 = 1;
                }
                fVar65 = fVar65 + fVar62;
                if (uVar42 == 9) {
LAB_03ddc7d8:
                  if (cVar24 != '\0') {
                    fVar65 = fVar65 * (1.0 - fVar48);
                    fVar62 = (float)iVar13;
LAB_03ddc814:
                    fStack000000000000015c = fStack000000000000015c - fVar65 / fVar62;
                    break;
                  }
                  fVar62 = (float)iVar13;
                  fVar65 = fVar65 * (1.0 - fVar48);
                }
                else {
                  if (uVar42 != 0xa0) {
                    if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    uVar22 = FUN_0324dc50(uVar42,0);
                    cVar24 = *(char *)(in_stack_000001d0 + 0xb6);
                    if ((uVar22 & 1) != 0) goto LAB_03ddc7d8;
                  }
                  fVar65 = fVar65 * fVar48;
                  fVar62 = (float)(int)((iVar16 - (~uStack0000000000000090 & 1)) + iVar17);
                  if (cVar24 != '\0') goto LAB_03ddc814;
                }
                fStack000000000000015c = fStack000000000000015c + fVar65 / fVar62;
                _in_stack_00000148 =
                     CONCAT44((float)((ulong)_in_stack_00000148 >> 0x20) + 0.0,
                              (float)_in_stack_00000148 + 0.0);
                break;
              }
            }
            fStack000000000000015c = fVar62;
            if (cVar24 != '\0') {
              fStack000000000000015c = fVar65 + fVar62;
            }
            if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uStack0000000000000090 = FUN_0324dc50(uVar42,0);
            _in_stack_00000148 = 0;
          }
        }
        break;
      default:
        if (uVar40 == 0x810) goto switchD_03dda918_caseD_1008;
      }
    }
    else {
      switch(uVar40) {
      case 0x1001:
switchD_03dda918_caseD_1001:
        if (*(char *)(in_stack_000001d0 + 0xb6) == '\0') {
          fStack000000000000015c = fVar62 + 0.0;
        }
        else {
          fStack000000000000015c = 0.0 - fVar48;
        }
        break;
      case 0x1002:
switchD_03dda918_caseD_1002:
LAB_03ddaa90:
        fStack000000000000015c = (fVar62 + fVar65 * 0.5) - fVar48 * 0.5;
        break;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        goto switchD_03dda918_caseD_1003;
      case 0x1004:
UnityEngine_UIElements_UIDocument__FindUIDocumentParent:
        fStack000000000000015c = (fVar65 + fVar62) - fVar48;
        if (*(char *)(in_stack_000001d0 + 0xb6) != '\0') {
          fStack000000000000015c = fVar65 + fVar62;
        }
        break;
      case 0x1008:
        goto switchD_03dda918_caseD_1008;
      default:
        if (uVar40 == 0x820) goto LAB_03ddaa7c;
        goto switchD_03dda918_caseD_1003;
      }
LAB_03ddaa94:
      _in_stack_00000148 = 0;
    }
switchD_03dda918_caseD_1003:
    uVar40 = (uint)*(undefined8 *)(lVar26 + 0x18);
    if (uVar40 <= uVar14) goto LAB_03ddcab0;
    lVar32 = lVar26 + lVar43 * 0x188;
    fVar62 = in_stack_00000120._4_4_ + fStack000000000000015c;
    fVar48 = (float)uStack0000000000000118 + (float)_in_stack_00000148;
    fVar65 = (float)((ulong)uStack0000000000000118 >> 0x20) +
             (float)((ulong)_in_stack_00000148 >> 0x20);
    if (*(char *)(lVar32 + 0x1a0) == '\0') goto LAB_03ddb2e8;
    cVar24 = *(char *)(lVar26 + lVar43 * 0x188 + 0x28);
    if (cVar24 != '\x01') goto LAB_03ddb098;
    fVar45 = fmodf(*(float *)(in_stack_000001d0 + 0xfc) * (float)(int)uVar37,1.0);
    switch(*(undefined4 *)(in_stack_000001d0 + 0xf4)) {
    case 0:
      lVar28 = lVar26 + lVar43 * 0x188;
      *(undefined4 *)(lVar28 + 0xbc) = 0;
      *(undefined4 *)(lVar28 + 0x94) = 0;
      *(undefined4 *)(lVar28 + 0xe4) = 0x3f800000;
      fVar45 = 1.0;
      break;
    case 1:
      fVar64 = *(float *)(lVar26 + lVar43 * 0x188 + 0xa0);
      if (*(int *)(in_stack_000001d0 + 0x70) == 0x208) {
        lVar28 = lVar26 + lVar43 * 0x188;
        fVar46 = (fStack000000000000015c + fVar64) - *(float *)(unaff_x19 + 0x360);
        fVar64 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
        goto LAB_03ddac48;
      }
      lVar28 = lVar26 + lVar43 * 0x188;
      fVar46 = fVar46 - fVar52;
      *(float *)(lVar28 + 0xbc) = fVar45 + (fVar64 - fVar52) / fVar46;
      *(float *)(lVar28 + 0x94) = fVar45 + (*(float *)(lVar28 + 0x78) - fVar52) / fVar46;
      *(float *)(lVar28 + 0xe4) = fVar45 + (*(float *)(lVar28 + 200) - fVar52) / fVar46;
      fVar45 = fVar45 + (*(float *)(lVar28 + 0xf0) - fVar52) / fVar46;
      break;
    case 2:
      lVar28 = lVar26 + lVar43 * 0x188;
      fVar64 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
      fVar46 = (fStack000000000000015c + *(float *)(lVar28 + 0xa0)) - *(float *)(unaff_x19 + 0x360);
LAB_03ddac48:
      *(float *)(lVar28 + 0xbc) = fVar45 + fVar46 / fVar64;
      *(float *)(lVar28 + 0x94) =
           fVar45 + ((fStack000000000000015c + *(float *)(lVar28 + 0x78)) -
                    *(float *)(unaff_x19 + 0x360)) /
                    (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      *(float *)(lVar28 + 0xe4) =
           fVar45 + ((fStack000000000000015c + *(float *)(lVar28 + 200)) -
                    *(float *)(unaff_x19 + 0x360)) /
                    (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      fVar45 = fVar45 + ((fStack000000000000015c + *(float *)(lVar28 + 0xf0)) -
                        *(float *)(unaff_x19 + 0x360)) /
                        (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      break;
    case 3:
      switch(*(undefined4 *)(in_stack_000001d0 + 0xf8)) {
      case 0:
        lVar28 = lVar26 + lVar43 * 0x188;
        *(undefined4 *)(lVar28 + 0xc0) = 0;
        *(undefined4 *)(lVar28 + 0x98) = 0x3f800000;
        *(undefined4 *)(lVar28 + 0xe8) = 0;
        *(undefined4 *)(lVar28 + 0x110) = 0x3f800000;
        break;
      case 1:
        lVar28 = lVar26 + lVar43 * 0x188;
        fVar64 = fVar64 - fVar67;
        fVar46 = fVar45 + (*(float *)(lVar28 + 0xa4) - fVar67) / fVar64;
        fVar64 = fVar45 + (*(float *)(lVar28 + 0x7c) - fVar67) / fVar64;
        *(float *)(lVar28 + 0xc0) = fVar46;
        *(float *)(lVar28 + 0x98) = fVar64;
        *(float *)(lVar28 + 0xe8) = fVar46;
        *(float *)(lVar28 + 0x110) = fVar64;
        break;
      case 2:
        lVar28 = lVar26 + lVar43 * 0x188;
        fVar46 = fVar45 + (*(float *)(lVar28 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
                          (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
        *(float *)(lVar28 + 0xc0) = fVar46;
        fVar64 = *(float *)(unaff_x19 + 0x364);
        fVar52 = *(float *)(unaff_x19 + 0x36c);
        *(float *)(lVar28 + 0xe8) = fVar46;
        fVar46 = fVar45 + (*(float *)(lVar28 + 0x7c) - fVar64) / (fVar52 - fVar64);
        *(float *)(lVar28 + 0x98) = fVar46;
        *(float *)(lVar28 + 0x110) = fVar46;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03d03d14(*(undefined8 *)StringLiteral_5974,0);
        uVar40 = (uint)*(undefined8 *)(lVar26 + 0x18);
      }
      if (uVar40 <= uVar14) goto LAB_03ddcab0;
      lVar28 = lVar26 + lVar43 * 0x188;
      fVar46 = *(float *)(lVar28 + 0x168);
      fVar64 = (1.0 - (*(float *)(lVar28 + 0xc0) + *(float *)(lVar28 + 0x98)) * fVar46) * 0.5;
      fVar52 = fVar45 + *(float *)(lVar28 + 0xc0) * fVar46 + fVar64;
      fVar45 = fVar45 + *(float *)(lVar28 + 0x98) * fVar46 + fVar64;
      *(float *)(lVar28 + 0xbc) = fVar52;
      *(float *)(lVar28 + 0x94) = fVar52;
      *(float *)(lVar28 + 0xe4) = fVar45;
      break;
    default:
      goto switchD_03ddab74_default;
    }
    *(float *)(lVar26 + lVar43 * 0x188 + 0x10c) = fVar45;
switchD_03ddab74_default:
    switch(*(undefined4 *)(in_stack_000001d0 + 0xf8)) {
    case 0:
      if (uVar40 <= uVar14) goto LAB_03ddcab0;
      lVar28 = lVar26 + lVar43 * 0x188;
      *(undefined4 *)(lVar28 + 0xc0) = 0;
      *(undefined4 *)(lVar28 + 0x98) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0xe8) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0x110) = 0;
      break;
    case 1:
      if (uVar14 < uVar40) {
        lVar28 = lVar26 + lVar43 * 0x188;
        fVar47 = fVar47 - fVar61;
        fVar45 = (*(float *)(lVar28 + 0xa4) - fVar61) / fVar47;
        fVar47 = (*(float *)(lVar28 + 0x7c) - fVar61) / fVar47;
        *(float *)(lVar28 + 0xc0) = fVar45;
        goto LAB_03ddafc4;
      }
      goto LAB_03ddcab0;
    case 2:
      if (uVar40 <= uVar14) goto LAB_03ddcab0;
      lVar28 = lVar26 + lVar43 * 0x188;
      fVar45 = (*(float *)(lVar28 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
      *(float *)(lVar28 + 0xc0) = fVar45;
      fVar47 = (*(float *)(lVar28 + 0x7c) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
LAB_03ddafc4:
      *(float *)(lVar28 + 0x98) = fVar47;
      *(float *)(lVar28 + 0xe8) = fVar47;
      *(float *)(lVar28 + 0x110) = fVar45;
      break;
    case 3:
      if (uVar40 <= uVar14) goto LAB_03ddcab0;
      lVar28 = lVar26 + lVar43 * 0x188;
      fVar47 = *(float *)(lVar28 + 0x168);
      fVar46 = (1.0 - (*(float *)(lVar28 + 0xbc) + *(float *)(lVar28 + 0xe4)) / fVar47) * 0.5;
      fVar45 = *(float *)(lVar28 + 0xbc) / fVar47 + fVar46;
      fVar46 = *(float *)(lVar28 + 0xe4) / fVar47 + fVar46;
      *(float *)(lVar28 + 0xc0) = fVar45;
      *(float *)(lVar28 + 0x98) = fVar46;
      *(float *)(lVar28 + 0x110) = fVar45;
      *(float *)(lVar28 + 0xe8) = fVar46;
    }
    if (uVar40 <= uVar14) goto LAB_03ddcab0;
    lVar28 = lVar26 + lVar43 * 0x188;
    fVar45 = *(float *)(lVar28 + 0x16c) * (1.0 - *(float *)(unaff_x19 + 0x1594));
    if ((*(char *)(lVar28 + 100) == '\0') && ((*(byte *)(lVar26 + lVar43 * 0x188 + 0x19c) & 1) != 0)
       ) {
      fVar45 = -fVar45;
    }
    lVar28 = lVar26 + lVar43 * 0x188;
    *(float *)(lVar28 + 0xb8) = fVar45;
    *(float *)(lVar28 + 0x90) = fVar45;
    *(float *)(lVar28 + 0xe0) = fVar45;
    *(float *)(lVar28 + 0x108) = fVar45;
    *(undefined4 *)(lVar28 + 0xbc) = 0x3f800000;
    *(float *)(lVar28 + 0xc0) = fVar45;
    *(undefined4 *)(lVar28 + 0x94) = 0x3f800000;
    *(float *)(lVar28 + 0x98) = fVar45;
    *(undefined4 *)(lVar28 + 0xe4) = 0x3f800000;
    *(float *)(lVar28 + 0xe8) = fVar45;
    *(undefined4 *)(lVar28 + 0x10c) = 0x3f800000;
    *(float *)(lVar28 + 0x110) = fVar45;
LAB_03ddb098:
    if (((int)uVar14 < *(int *)(in_stack_000001d0 + 0xd8)) &&
       ((int)fStack0000000000000140 < *(int *)(in_stack_000001d0 + 0xdc))) {
      if ((*(int *)(in_stack_000001d0 + 0xe0) <= (int)uVar37) ||
         (*(int *)(in_stack_000001d0 + 0x74) == 5)) {
        if ((*(int *)(in_stack_000001d0 + 0xe0) <= (int)uVar37) ||
           (*(int *)(in_stack_000001d0 + 0x74) != 5)) goto LAB_03ddb108;
        if (uVar14 < uVar40) {
          bVar9 = *(uint *)(lVar26 + lVar43 * 0x188 + 0x70) == uStack0000000000000080;
          goto LAB_03ddb10c;
        }
        goto LAB_03ddcab0;
      }
      if (uVar40 <= uVar14) goto LAB_03ddcab0;
LAB_03ddb118:
      lVar32 = lVar26 + lVar43 * 0x188;
      *(ulong *)(lVar32 + 0xa0) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar32 + 0xa0) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar32 + 0xa0));
      *(float *)(lVar32 + 0xa8) = fVar65 + *(float *)(lVar32 + 0xa8);
      *(ulong *)(lVar32 + 0x78) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar32 + 0x78) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar32 + 0x78));
      *(float *)(lVar32 + 0x80) = fVar65 + *(float *)(lVar32 + 0x80);
      *(ulong *)(lVar32 + 200) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar32 + 200) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar32 + 200));
      *(float *)(lVar32 + 0xd0) = fVar65 + *(float *)(lVar32 + 0xd0);
      *(ulong *)(lVar32 + 0xf0) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar32 + 0xf0) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar32 + 0xf0));
      *(float *)(lVar32 + 0xf8) = fVar65 + *(float *)(lVar32 + 0xf8);
    }
    else {
LAB_03ddb108:
      bVar9 = false;
LAB_03ddb10c:
      if (uVar40 <= uVar14) goto LAB_03ddcab0;
      if (bVar9) goto LAB_03ddb118;
      if (DAT_0452d6e9 == '\0') {
        FUN_01c5d288(PTR_DAT_042301b0);
        DAT_0452d6e9 = '\x01';
        uVar40 = *(uint *)(lVar26 + 0x18);
      }
      puVar6 = PTR_DAT_042301b0;
      uVar50 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_042301b0 + 0xb8) + 1);
      lVar28 = lVar26 + lVar43 * 0x188;
      *(undefined8 *)(lVar28 + 0xa0) = **(undefined8 **)(*(long *)PTR_DAT_042301b0 + 0xb8);
      *(undefined4 *)(lVar28 + 0xa8) = uVar50;
      if (uVar40 <= uVar14) goto LAB_03ddcab0;
      uVar50 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
      lVar28 = lVar26 + lVar43 * 0x188;
      *(undefined8 *)(lVar28 + 0x78) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
      *(undefined4 *)(lVar28 + 0x80) = uVar50;
      uVar50 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
      *(undefined8 *)(lVar28 + 200) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
      *(undefined4 *)(lVar28 + 0xd0) = uVar50;
      uVar50 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
      *(undefined8 *)(lVar28 + 0xf0) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
      *(undefined4 *)(lVar28 + 0xf8) = uVar50;
      *(undefined1 *)(lVar32 + 0x1a0) = 0;
    }
    iVar17 = FUN_03d0f290(0);
    if (iVar17 == 1) {
      cVar39 = *(char *)(in_stack_000001d0 + 0xa2);
    }
    else {
      cVar39 = '\0';
    }
    if (cVar24 == '\x01') {
      if (*(int *)(*(long *)StringLiteral_8871 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03dec800(uVar14,cVar39 != '\0',in_stack_000001d0,in_stack_000001b8,0);
    }
    else if (cVar24 == '\x02') {
      if (*(int *)(*(long *)StringLiteral_8871 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03ded238(uVar14,cVar39 != '\0',in_stack_000001d0,in_stack_000001b8,0);
    }
LAB_03ddb2e8:
    lVar32 = *in_stack_000001d8;
    if (lVar32 == 0) goto LAB_03ddcaac;
    if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_03ddcab0;
    lVar32 = lVar32 + lVar43 * 0x188;
    uVar44 = *(undefined8 *)(lVar32 + 0x124);
    *(undefined8 *)(lVar32 + 0x124) =
         CONCAT44(fVar48 + (float)((ulong)uVar44 >> 0x20),fVar62 + (float)uVar44);
    *(float *)(lVar32 + 300) = fVar65 + *(float *)(lVar32 + 300);
    lVar32 = *in_stack_000001d8;
    if (lVar32 == 0) goto LAB_03ddcaac;
    if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_03ddcab0;
    lVar32 = lVar32 + lVar43 * 0x188;
    *(ulong *)(lVar32 + 0x118) =
         CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar32 + 0x118) >> 0x20),
                  fVar62 + (float)*(undefined8 *)(lVar32 + 0x118));
    *(float *)(lVar32 + 0x120) = fVar65 + *(float *)(lVar32 + 0x120);
    lVar32 = *in_stack_000001d8;
    if (lVar32 == 0) goto LAB_03ddcaac;
    if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_03ddcab0;
    lVar32 = lVar32 + lVar43 * 0x188;
    *(ulong *)(lVar32 + 0x130) =
         CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar32 + 0x130) >> 0x20),
                  fVar62 + (float)*(undefined8 *)(lVar32 + 0x130));
    *(float *)(lVar32 + 0x138) = fVar65 + *(float *)(lVar32 + 0x138);
    lVar32 = *in_stack_000001d8;
    if (lVar32 == 0) goto LAB_03ddcaac;
    if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_03ddcab0;
    lVar32 = lVar32 + lVar43 * 0x188;
    *(float *)(lVar32 + 0x13c) = fVar62 + *(float *)(lVar32 + 0x13c);
    *(ulong *)(lVar32 + 0x140) =
         CONCAT44(fVar65 + (float)((ulong)*(undefined8 *)(lVar32 + 0x140) >> 0x20),
                  fVar48 + (float)*(undefined8 *)(lVar32 + 0x140));
    lVar32 = *in_stack_000001d8;
    if (lVar32 == 0) goto LAB_03ddcaac;
    uVar40 = *(uint *)(lVar32 + 0x18);
    if (uVar40 <= uVar14) goto LAB_03ddcab0;
    lVar28 = lVar32 + lVar43 * 0x188;
    *(float *)(lVar28 + 0x148) = fVar62 + *(float *)(lVar28 + 0x148);
    *(float *)(lVar28 + 0x164) = fVar62 + *(float *)(lVar28 + 0x164);
    *(float *)(lVar28 + 0x154) = fVar48 + *(float *)(lVar28 + 0x154);
    uVar44 = *(undefined8 *)(lVar28 + 0x14c);
    *(undefined8 *)(lVar28 + 0x14c) =
         CONCAT44(fVar48 + (float)((ulong)uVar44 >> 0x20),fVar48 + (float)uVar44);
    if (uVar37 == uVar15) {
      uVar15 = *in_stack_000001c8 - 1;
      if (uVar14 == uVar15) goto LAB_03ddb4e0;
    }
    else {
      lVar28 = *(long *)(in_stack_000001b8 + 0x48);
      if (lVar28 == 0) goto LAB_03ddcaac;
      if (*(uint *)(lVar28 + 0x18) <= uVar15) goto LAB_03ddcab0;
      lVar35 = (long)(int)uVar15;
      lVar38 = lVar28 + lVar35 * 0x60;
      fVar65 = fVar48 + *(float *)(lVar38 + 0x58);
      *(ulong *)(lVar38 + 0x50) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar38 + 0x50) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar38 + 0x50));
      *(float *)(lVar38 + 0x58) = fVar65;
      *(float *)(lVar38 + 0x5c) = fVar62 + *(float *)(lVar38 + 0x5c);
      if (uVar40 <= *(uint *)(lVar38 + 0x38)) goto LAB_03ddcab0;
      uVar50 = *(undefined4 *)(lVar32 + (long)(int)*(uint *)(lVar38 + 0x38) * 0x188 + 0x124);
      lVar28 = lVar28 + lVar35 * 0x60;
      *(float *)(lVar28 + 0x74) = fVar65;
      *(undefined4 *)(lVar28 + 0x70) = uVar50;
      lVar32 = *(long *)(in_stack_000001b8 + 0x48);
      if (lVar32 == 0) goto LAB_03ddcaac;
      if (*(uint *)(lVar32 + 0x18) <= uVar15) goto LAB_03ddcab0;
      lVar28 = *in_stack_000001d8;
      if (lVar28 == 0) goto LAB_03ddcaac;
      uVar15 = *(uint *)(lVar32 + lVar35 * 0x60 + 0x44);
      if (*(uint *)(lVar28 + 0x18) <= uVar15) goto LAB_03ddcab0;
      lVar32 = lVar32 + lVar35 * 0x60;
      *(undefined4 *)(lVar32 + 0x78) = *(undefined4 *)(lVar28 + (long)(int)uVar15 * 0x188 + 0x130);
      *(undefined4 *)(lVar32 + 0x7c) = *(undefined4 *)(lVar32 + 0x50);
      uVar15 = *in_stack_000001c8 - 1;
LAB_03ddb4e0:
      if (uVar14 == uVar15) {
        lVar32 = *(long *)(in_stack_000001b8 + 0x48);
        if (lVar32 == 0) goto LAB_03ddcaac;
        if (*(uint *)(lVar32 + 0x18) <= uVar37) goto LAB_03ddcab0;
        lVar28 = lVar32 + lVar33 * 0x60;
        fVar65 = fVar48 + *(float *)(lVar28 + 0x58);
        *(ulong *)(lVar28 + 0x50) =
             CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar28 + 0x50) >> 0x20),
                      fVar48 + (float)*(undefined8 *)(lVar28 + 0x50));
        *(float *)(lVar28 + 0x58) = fVar65;
        *(float *)(lVar28 + 0x5c) = fVar62 + *(float *)(lVar28 + 0x5c);
        lVar35 = *in_stack_000001d8;
        if (lVar35 == 0) goto LAB_03ddcaac;
        if (*(uint *)(lVar35 + 0x18) <= *(uint *)(lVar28 + 0x38)) goto LAB_03ddcab0;
        uVar50 = *(undefined4 *)(lVar35 + (long)(int)*(uint *)(lVar28 + 0x38) * 0x188 + 0x124);
        lVar32 = lVar32 + lVar33 * 0x60;
        *(float *)(lVar32 + 0x74) = fVar65;
        *(undefined4 *)(lVar32 + 0x70) = uVar50;
        lVar32 = *(long *)(in_stack_000001b8 + 0x48);
        if (lVar32 == 0) goto LAB_03ddcaac;
        if (*(uint *)(lVar32 + 0x18) <= uVar37) goto LAB_03ddcab0;
        lVar28 = *in_stack_000001d8;
        if (lVar28 == 0) goto LAB_03ddcaac;
        uVar15 = *(uint *)(lVar32 + lVar33 * 0x60 + 0x44);
        if (*(uint *)(lVar28 + 0x18) <= uVar15) goto LAB_03ddcab0;
        lVar32 = lVar32 + lVar33 * 0x60;
        *(undefined4 *)(lVar32 + 0x78) = *(undefined4 *)(lVar28 + (long)(int)uVar15 * 0x188 + 0x130)
        ;
        *(undefined4 *)(lVar32 + 0x7c) = *(undefined4 *)(lVar32 + 0x50);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar22 = FUN_0324cccc(uVar42,0);
    if (((((uVar22 & 1) == 0) && (1 < uVar42 - 0x2010)) && (uVar42 != 0xad)) && (uVar42 != 0x2d)) {
      if ((_fStack0000000000000168 & 0x100000000) == 0) {
        if (uVar29 == 1) {
          if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          bVar12 = FUN_0324cc00(uVar42,0);
          if (((uVar42 == 0x200b) || (((bVar11 | bVar12 ^ 1) & 1) != 0)) ||
             (*in_stack_000001c8 == 1)) goto LAB_03ddbee0;
        }
        uStack000000000000016c = 0;
      }
      else {
        if (((uVar29 != 1) && ((int)uVar14 < (int)(*(uint *)(lVar26 + 0x18) - 1))) &&
           (((int)uVar14 < (int)*in_stack_000001c8 && ((uVar42 == 0x2019 || (uVar42 == 0x27)))))) {
          if (*(uint *)(lVar26 + 0x18) <= uVar29 - 2) goto LAB_03ddcab0;
          uVar3 = *(undefined2 *)(lVar26 + lVar31 + -0x464);
          if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar22 = FUN_0324cccc(uVar3,0);
          if ((uVar22 & 1) != 0) {
            if (*(uint *)(lVar26 + 0x18) <= uVar29) goto LAB_03ddcab0;
            uVar3 = *(undefined2 *)(lVar26 + lVar31 + -0x154);
            if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar22 = FUN_0324cccc(uVar3,0);
            if ((uVar22 & 1) != 0) goto LAB_03ddb6c8;
          }
        }
LAB_03ddbee0:
        if (uVar14 == *in_stack_000001c8 - 1) {
          if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar22 = FUN_0324cccc(uVar42,0);
          uStack0000000000000170 = uVar14;
          if ((uVar22 & 1) == 0) goto LAB_03ddbf1c;
        }
        else {
LAB_03ddbf1c:
          uStack0000000000000170 = (int)fStack0000000000000178 - 1;
        }
        lVar32 = *plVar41;
        if (lVar32 == 0) goto LAB_03ddcaac;
        uVar15 = *(uint *)(in_stack_000001b8 + 0x1c);
        iVar17 = *(int *)(lVar32 + 0x18);
        if (iVar17 < (int)(uVar15 + 1)) {
          if (*(int *)(*(long *)StringLiteral_8875 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_0243be7c(plVar41,iVar17 + 1,*(undefined8 *)StringLiteral_8874);
          lVar32 = *plVar41;
          if (lVar32 == 0) goto LAB_03ddcaac;
        }
        if (*(uint *)(lVar32 + 0x18) <= uVar15) goto LAB_03ddcab0;
        lVar32 = lVar32 + (long)(int)uVar15 * 0xc;
        *(float *)(lVar32 + 0x20) = fStack0000000000000168;
        *(uint *)(lVar32 + 0x24) = uStack0000000000000170;
        *(uint *)(lVar32 + 0x28) = (uStack0000000000000170 - (int)fStack0000000000000168) + 1;
        lVar32 = *(long *)(in_stack_000001b8 + 0x48);
        *(int *)(in_stack_000001b8 + 0x1c) = *(int *)(in_stack_000001b8 + 0x1c) + 1;
        if (lVar32 == 0) goto LAB_03ddcaac;
        if (*(uint *)(lVar32 + 0x18) <= uVar37) goto LAB_03ddcab0;
        lVar32 = lVar32 + lVar33 * 0x60;
        uStack000000000000016c = 0;
        fStack0000000000000140 = (float)((int)fStack0000000000000140 + 1);
        *(int *)(lVar32 + 0x34) = *(int *)(lVar32 + 0x34) + 1;
      }
    }
    else {
      if ((_fStack0000000000000168 & 0x100000000) == 0) {
        fStack0000000000000168 = (float)uVar14;
      }
      if (uVar14 == *in_stack_000001c8 - 1) {
        lVar32 = *plVar41;
        if (lVar32 == 0) goto LAB_03ddcaac;
        uVar15 = *(uint *)(in_stack_000001b8 + 0x1c);
        iVar17 = *(int *)(lVar32 + 0x18);
        if (iVar17 < (int)(uVar15 + 1)) {
          if (*(int *)(*(long *)StringLiteral_8875 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_0243be7c(plVar41,iVar17 + 1,*(undefined8 *)StringLiteral_8874);
          lVar32 = *plVar41;
          if (lVar32 == 0) goto LAB_03ddcaac;
        }
        if (*(uint *)(lVar32 + 0x18) <= uVar15) goto LAB_03ddcab0;
        lVar32 = lVar32 + (long)(int)uVar15 * 0xc;
        *(float *)(lVar32 + 0x20) = fStack0000000000000168;
        *(uint *)(lVar32 + 0x24) = uVar14;
        *(uint *)(lVar32 + 0x28) = uVar29 - (int)fStack0000000000000168;
        lVar32 = *(long *)(in_stack_000001b8 + 0x48);
        *(int *)(in_stack_000001b8 + 0x1c) = *(int *)(in_stack_000001b8 + 0x1c) + 1;
        if (lVar32 == 0) goto LAB_03ddcaac;
        if (*(uint *)(lVar32 + 0x18) <= uVar37) goto LAB_03ddcab0;
        lVar32 = lVar32 + lVar33 * 0x60;
        fStack0000000000000140 = (float)((int)fStack0000000000000140 + 1);
        *(int *)(lVar32 + 0x34) = *(int *)(lVar32 + 0x34) + 1;
      }
LAB_03ddb6c8:
      uStack000000000000016c = 1;
    }
    lVar32 = *in_stack_000001d8;
    if (lVar32 == 0) goto LAB_03ddcaac;
    uVar15 = *(uint *)(lVar32 + 0x18);
    if (uVar15 <= uVar14) goto LAB_03ddcab0;
    if ((*(byte *)(lVar32 + lVar43 * 0x188 + 0x19c) >> 2 & 1) == 0) {
      if (bVar7) {
UnityEngine_UIElements_GroupBoxUtility__OnPanelDestroyed:
        if (uVar29 - 2 < uVar15) {
          uVar50 = *(undefined4 *)(lVar32 + lVar31 + -0x354);
          uVar55 = *(undefined4 *)(lVar32 + lVar31 + -0x318);
          goto LAB_03ddb964;
        }
        goto LAB_03ddcab0;
      }
LAB_03ddb8b8:
      bVar7 = false;
    }
    else {
      lVar33 = *(long *)(unaff_x19 + 0x15b8);
      if (lVar33 == 0) goto LAB_03ddcaac;
      if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) goto LAB_03ddcab0;
      iVar17 = *(int *)(lVar32 + lVar43 * 0x188 + 0x70);
      *(int *)(lVar32 + lVar43 * 0x188 + 0x178) =
           *(int *)(lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001d0 + 0xd8) < (int)uVar14) ||
         (*(int *)(in_stack_000001d0 + 0xe0) < (int)uVar37)) {
        bVar9 = true;
      }
      else if (*(int *)(in_stack_000001d0 + 0x74) == 5) {
        bVar9 = iVar17 + 1 != *(int *)(in_stack_000001d0 + 0xf0);
      }
      else {
        bVar9 = false;
      }
      if (uVar42 != 0x200b && (bVar11 & 1) == 0) {
        fVar65 = *(float *)(lVar32 + lVar43 * 0x188 + 0x16c);
        if (fVar60 <= fVar65) {
          fVar60 = fVar65;
        }
        if (iVar17 != iStack00000000000000c8) {
          fStack0000000000000160 = fVar56;
        }
        if (lVar30 == 0) goto LAB_03ddcaac;
        fVar65 = *(float *)(lVar32 + lVar43 * 0x188 + 0x150);
        if (fStack0000000000000174 <= ABS(fVar45)) {
          fStack0000000000000174 = ABS(fVar45);
        }
        FUN_03dc39ac(&stack0x00001290,lVar30,0);
        memcpy(&stack0x00001200,&stack0x00001290,0x60);
        fVar46 = (float)FUN_03dc0ee0(&stack0x00001200,0);
        fVar65 = fVar65 + fVar60 * fVar46;
        iStack00000000000000c8 = iVar17;
        if (fVar65 <= fStack0000000000000160) {
          fStack0000000000000160 = fVar65;
        }
      }
      if ((((uVar42 == 0xd) || ((uVar42 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar14)) ||
         (bVar7 || bVar9)) {
LAB_03ddb8ac:
        if (!bVar7) goto LAB_03ddb8b8;
      }
      else {
        if (uVar14 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar22 = FUN_0324dc50(uVar42,0);
          if ((uVar22 & 1) != 0) goto LAB_03ddb8ac;
        }
        lVar32 = *in_stack_000001d8;
        if (lVar32 == 0) goto LAB_03ddcaac;
        if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_03ddcab0;
        lVar32 = lVar32 + lVar43 * 0x188;
        _bStack00000000000000e0 = *(float *)(lVar32 + 0x16c);
        fStack00000000000000dc = *(float *)(lVar32 + 0x124);
        bVar7 = fVar60 != 0.0;
        uVar49 = *(undefined4 *)(lVar32 + 0x174);
        fVar65 = _bStack00000000000000e0;
        if (bVar7) {
          fVar65 = fVar60;
        }
        fVar60 = fVar65;
        uStack00000000000000d8 = 0;
        fVar65 = fVar45;
        if (bVar7) {
          fVar65 = fStack0000000000000174;
        }
        fStack00000000000000d4 = fStack0000000000000160;
        fStack0000000000000174 = fVar65;
      }
      if (*in_stack_000001c8 == 1) {
        lVar32 = *in_stack_000001d8;
        if (lVar32 == 0) goto LAB_03ddcaac;
        if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_03ddcab0;
        lVar32 = lVar32 + lVar43 * 0x188;
        uVar50 = *(undefined4 *)(lVar32 + 0x130);
        uVar55 = *(undefined4 *)(lVar32 + 0x16c);
LAB_03ddb964:
        FUN_03de59c4(fStack00000000000000dc,fStack00000000000000d4,uStack00000000000000d8,uVar50,
                     fStack0000000000000160,0,_bStack00000000000000e0,uVar55);
      }
      else {
        if ((uVar14 == uVar4) || ((int)uVar5 <= (int)uVar14)) {
          lVar32 = *in_stack_000001d8;
          if (lVar32 != 0) {
            lVar33 = lVar43;
            uVar15 = uVar14;
            if (uVar42 == 0x200b || (bVar11 & 1) != 0) {
              lVar33 = lVar34;
              uVar15 = uVar5;
            }
            if (uVar15 < *(uint *)(lVar32 + 0x18)) {
              lVar32 = lVar32 + lVar33 * 0x188;
              uVar50 = *(undefined4 *)(lVar32 + 0x130);
              uVar55 = *(undefined4 *)(lVar32 + 0x16c);
              goto LAB_03ddb964;
            }
            goto LAB_03ddcab0;
          }
          goto LAB_03ddcaac;
        }
        if (bVar9) {
          lVar32 = *in_stack_000001d8;
          if (lVar32 != 0) {
            uVar15 = *(uint *)(lVar32 + 0x18);
            goto UnityEngine_UIElements_GroupBoxUtility__OnPanelDestroyed;
          }
          goto LAB_03ddcaac;
        }
        if ((int)(*in_stack_000001c8 - 1) <= (int)uVar14) {
LAB_03ddc0a0:
          bVar7 = true;
          goto LAB_03ddb99c;
        }
        lVar32 = *in_stack_000001d8;
        if (lVar32 == 0) goto LAB_03ddcaac;
        if (*(uint *)(lVar32 + 0x18) <= uVar29) goto LAB_03ddcab0;
        uVar22 = FUN_03dc3890(uVar49,*(undefined4 *)(lVar32 + lVar31),0);
        if ((uVar22 & 1) != 0) goto LAB_03ddc0a0;
        lVar32 = *in_stack_000001d8;
        if (lVar32 == 0) goto LAB_03ddcaac;
        if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_03ddcab0;
        lVar32 = lVar32 + lVar43 * 0x188;
        FUN_03de59c4(fStack00000000000000dc,fStack00000000000000d4,uStack00000000000000d8,
                     *(undefined4 *)(lVar32 + 0x130),fStack0000000000000160,0,
                     _bStack00000000000000e0,*(undefined4 *)(lVar32 + 0x16c));
      }
      fVar60 = 0.0;
      bVar7 = false;
      fStack0000000000000160 = DAT_00b9343c;
      fStack0000000000000174 = 0.0;
    }
LAB_03ddb99c:
    lVar32 = *in_stack_000001d8;
    if (lVar32 == 0) goto LAB_03ddcaac;
    if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_03ddcab0;
    if (lVar30 == 0) goto LAB_03ddcaac;
    uVar15 = *(uint *)(lVar32 + lVar43 * 0x188 + 0x19c);
    FUN_03dc39ac(&stack0x00001290,lVar30,0);
    memcpy(&stack0x00001200,&stack0x00001290,0x60);
    fVar65 = (float)FUN_03dc0f00(&stack0x00001200,0);
    if ((uVar15 >> 6 & 1) == 0) {
      if (bVar8) {
        lVar32 = *in_stack_000001d8;
        if (lVar32 != 0) {
          if (uVar29 - 2 < *(uint *)(lVar32 + 0x18)) {
            fVar48 = *(float *)(lVar32 + lVar31 + -0x334);
            uVar50 = *(undefined4 *)(lVar32 + lVar31 + -0x354);
            goto UnityEngine_UIElements_IMGUIContainer__get_guiState;
          }
          goto LAB_03ddcab0;
        }
        goto LAB_03ddcaac;
      }
LAB_03ddbb24:
      bVar8 = false;
    }
    else {
      lVar32 = *in_stack_000001d8;
      if ((lVar32 == 0) || (lVar33 = *(long *)(unaff_x19 + 0x15b8), lVar33 == 0)) goto LAB_03ddcaac;
      if ((*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) ||
         (*(uint *)(lVar32 + 0x18) <= uVar14)) goto LAB_03ddcab0;
      *(int *)(lVar32 + lVar43 * 0x188 + 0x180) =
           *(int *)(lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001d0 + 0xd8) < (int)uVar14) ||
         (*(int *)(in_stack_000001d0 + 0xe0) < (int)uVar37)) {
        bVar9 = true;
      }
      else if (*(int *)(in_stack_000001d0 + 0x74) == 5) {
        bVar9 = *(int *)(lVar32 + lVar43 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001d0 + 0xf0);
      }
      else {
        bVar9 = false;
      }
      if ((((uVar42 == 0xd) || ((uVar42 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar14)) ||
         (!(bool)(~bVar8 & (bVar9 ^ 1U)))) {
LAB_03ddbb1c:
        if (!bVar8) goto LAB_03ddbb24;
      }
      else {
        if (uVar14 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar22 = FUN_0324dc50(uVar42,0);
          if ((uVar22 & 1) != 0) goto LAB_03ddbb1c;
          lVar32 = *in_stack_000001d8;
          if (lVar32 == 0) goto LAB_03ddcaac;
        }
        if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_03ddcab0;
        lVar32 = lVar32 + lVar43 * 0x188;
        fStack00000000000000f8 = *(float *)(lVar32 + 0x16c);
        fStack00000000000000f4 = *(float *)(lVar32 + 0x124);
        fStack00000000000000b0 = *(float *)(lVar32 + 0x68);
        in_stack_000000a8._4_4_ = *(float *)(lVar32 + 0x150);
        fStack00000000000000e8 = fVar65 * fStack00000000000000f8 + in_stack_000000a8._4_4_;
        uStack00000000000000e4 = 0;
      }
      uVar15 = *in_stack_000001c8;
      if (uVar15 == 1) {
LAB_03ddbd0c:
        lVar33 = *in_stack_000001d8;
        if (lVar33 == 0) goto LAB_03ddcaac;
        if (*(uint *)(lVar33 + 0x18) <= uVar14) goto LAB_03ddcab0;
        lVar33 = lVar33 + lVar43 * 0x188;
      }
      else {
        lVar32 = lVar43;
        if (uVar14 == uVar4) {
          lVar33 = *in_stack_000001d8;
          if (lVar33 == 0) goto LAB_03ddcaac;
          uVar15 = uVar14;
          if ((uVar42 != 0x200b & (bVar11 ^ 1)) == 0) {
            lVar32 = lVar34;
            uVar15 = uVar5;
          }
          if (*(uint *)(lVar33 + 0x18) <= uVar15) goto LAB_03ddcab0;
        }
        else {
          if ((int)uVar15 <= (int)uVar14) {
LAB_03ddbdf0:
            if ((int)uVar14 < (int)uVar15) {
              iVar17 = FUN_03d4da10(lVar30,0);
              if (*(uint *)(lVar26 + 0x18) <= uVar29) goto LAB_03ddcab0;
              lVar32 = *(long *)(lVar26 + lVar31 + -0x134);
              if (lVar32 == 0) goto LAB_03ddcaac;
              iVar13 = FUN_03d4da10(lVar32,0);
              if (iVar17 != iVar13) goto LAB_03ddbd0c;
            }
            if (!bVar9) {
              bVar8 = true;
              goto LAB_03ddc144;
            }
            lVar32 = *in_stack_000001d8;
            if (lVar32 != 0) {
              if (uVar29 - 2 < *(uint *)(lVar32 + 0x18)) {
                fVar48 = *(float *)(lVar32 + lVar31 + -0x334);
                uVar50 = *(undefined4 *)(lVar32 + lVar31 + -0x354);
                goto UnityEngine_UIElements_IMGUIContainer__get_guiState;
              }
              goto LAB_03ddcab0;
            }
            goto LAB_03ddcaac;
          }
          lVar33 = *in_stack_000001d8;
          if (lVar33 == 0) goto LAB_03ddcaac;
          if (*(uint *)(lVar33 + 0x18) <= uVar29) goto LAB_03ddcab0;
          if (*(float *)(lVar33 + lVar31 + -0x10c) == fStack00000000000000b0) {
            fVar46 = *(float *)(lVar33 + lVar31 + -0x24);
            if (*(int *)(*(long *)StringLiteral_8871 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar22 = FUN_03dea7b0(fVar48 + fVar46,in_stack_000000a8._4_4_,0);
            if ((uVar22 & 1) != 0) {
              uVar15 = *in_stack_000001c8;
              goto LAB_03ddbdf0;
            }
            lVar33 = *in_stack_000001d8;
            if (lVar33 == 0) goto LAB_03ddcaac;
          }
          uVar15 = uVar14;
          if ((int)uVar5 < (int)uVar14) {
            lVar32 = lVar34;
            uVar15 = uVar5;
          }
          if (*(uint *)(lVar33 + 0x18) <= uVar15) goto LAB_03ddcab0;
        }
        lVar33 = lVar33 + lVar32 * 0x188;
      }
      fVar48 = *(float *)(lVar33 + 0x150);
      uVar50 = *(undefined4 *)(lVar33 + 0x130);
UnityEngine_UIElements_IMGUIContainer__get_guiState:
      FUN_03de59c4(fStack00000000000000f4,fStack00000000000000e8,uStack00000000000000e4,uVar50,
                   fStack00000000000000f8 * fVar65 + fVar48,0,fStack00000000000000f8,
                   fStack00000000000000f8);
      bVar8 = false;
    }
LAB_03ddc144:
    lVar32 = *in_stack_000001d8;
    if (lVar32 == 0) goto LAB_03ddcaac;
    uVar15 = (uint)*(undefined8 *)(lVar32 + 0x18);
    if (uVar15 <= uVar14) goto LAB_03ddcab0;
    if ((*(byte *)(lVar32 + lVar43 * 0x188 + 0x19d) >> 1 & 1) == 0) {
      if (bVar10) {
        FUN_03de65f0(fStack000000000000012c,fStack0000000000000144,uStack0000000000000128,
                     fStack0000000000000130,fStack0000000000000138,uStack0000000000000128);
      }
FUN_03ddc238:
      bVar10 = false;
    }
    else {
      if ((*(int *)(in_stack_000001d0 + 0xd8) < (int)uVar14) ||
         (*(int *)(in_stack_000001d0 + 0xe0) < (int)uVar37)) {
        bVar9 = true;
      }
      else if (*(int *)(in_stack_000001d0 + 0x74) == 5) {
        bVar9 = *(int *)(lVar32 + lVar43 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001d0 + 0xf0);
      }
      else {
        bVar9 = false;
      }
      if (!bVar10) {
        if (((uVar42 == 0xd) || ((uVar42 & 0xfffe) == 10)) ||
           (((int)uVar5 < (int)uVar14 || (bVar9)))) goto FUN_03ddc238;
        if (uVar14 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar22 = FUN_0324dc50(uVar42,0);
          if ((uVar22 & 1) != 0) goto FUN_03ddc238;
        }
        puVar6 = StringLiteral_8871;
        lVar30 = *(long *)StringLiteral_8871;
        if (*(int *)(lVar30 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar30 = *(long *)puVar6;
        }
        lVar32 = *in_stack_000001d8;
        if (lVar32 == 0) goto LAB_03ddcaac;
        uVar15 = (uint)*(undefined8 *)(lVar32 + 0x18);
        if (uVar15 <= uVar14) goto LAB_03ddcab0;
        pfVar36 = *(float **)(lVar30 + 0xb8);
        fStack000000000000012c = *pfVar36;
        fStack0000000000000144 = pfVar36[1];
        fStack0000000000000130 = pfVar36[2];
        fStack0000000000000138 = pfVar36[3];
        uStack0000000000000128 = 0;
      }
      if (uVar15 <= uVar14) goto LAB_03ddcab0;
      lVar32 = lVar32 + lVar43 * 0x188;
      fVar46 = *(float *)(lVar32 + 0x130);
      fVar61 = *(float *)(lVar32 + 0x124);
      fVar48 = *(float *)(lVar32 + 0x148);
      fVar47 = *(float *)(lVar32 + 0x14c);
      fVar64 = *(float *)(lVar32 + 0x154);
      fVar65 = *(float *)(lVar32 + 0x164);
      in_stack_000001e8 = *(undefined8 *)(lVar32 + 400);
      in_stack_000001e0 = *(undefined8 *)(lVar32 + 0x188);
      in_stack_000001f0 = (undefined4)*(undefined8 *)(lVar32 + 0x198);
      uVar22 = FUN_03dea67c(&stack0x00000200,&stack0x000001e0,0);
      lVar32 = *(long *)StringLiteral_8869;
      if ((uVar22 & 1) == 0) {
        if (*(int *)(lVar32 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar32);
        }
        fVar52 = (float)FUN_03dea388(uVar21,0);
        bVar10 = (bVar11 & 1) == 0;
        if (bVar10) {
          fVar48 = fVar61;
        }
        if (bVar10) {
          fVar65 = fVar46;
        }
        if (fVar48 - fVar52 <= fStack000000000000012c) {
          fStack000000000000012c = fVar48 - fVar52;
        }
        fVar48 = (float)FUN_03dea390(uVar21,0);
        if (fStack0000000000000130 <= fVar65 + fVar48) {
          fStack0000000000000130 = fVar65 + fVar48;
        }
        if (*(int *)(*(long *)StringLiteral_8869 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        fVar48 = (float)FUN_03dea3a0(uVar21,0);
        if (fVar64 - fVar48 <= fStack0000000000000144) {
          fStack0000000000000144 = fVar64 - fVar48;
        }
        fVar48 = (float)FUN_03dea398(uVar21,0);
        if (fStack0000000000000138 <= fVar47 + fVar48) {
          fStack0000000000000138 = fVar47 + fVar48;
        }
      }
      else {
        if (*(int *)(lVar32 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar32);
        }
        fVar52 = (float)FUN_03dea390(uVar21,0);
        if ((bVar11 & 1) == 0) {
          fVar48 = fVar61;
        }
        if (fVar64 <= fStack0000000000000144) {
          fStack0000000000000144 = fVar64;
        }
        fVar48 = (fVar48 + (fStack0000000000000130 - fVar52)) * 0.5;
        if (fStack0000000000000138 <= fVar47) {
          fStack0000000000000138 = fVar47;
        }
        FUN_03de65f0(fStack000000000000012c,fStack0000000000000144,uStack0000000000000128,fVar48,
                     fStack0000000000000138,uStack0000000000000128);
        puVar6 = StringLiteral_8869;
        if (*(int *)(*(long *)StringLiteral_8869 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        fStack0000000000000144 = (float)FUN_03dea3a0(uVar19,0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        fStack0000000000000144 = fVar64 - fStack0000000000000144;
        fStack0000000000000130 = (float)FUN_03dea390(uVar19,0);
        fVar64 = (float)FUN_03dea398(uVar19,0);
        if ((bVar11 & 1) == 0) {
          fVar65 = fVar46;
        }
        fStack0000000000000130 = fVar65 + fStack0000000000000130;
        uStack0000000000000128 = 0;
        fStack000000000000012c = fVar48;
        fStack0000000000000138 = fVar47 + fVar64;
      }
      if ((((*in_stack_000001c8 == 1) || (uVar14 == uVar4)) || ((int)uVar5 <= (int)uVar14)) ||
         (bVar9)) {
        FUN_03de65f0(fStack000000000000012c,fStack0000000000000144,uStack0000000000000128,
                     fStack0000000000000130,fStack0000000000000138,uStack0000000000000128);
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
    }
    lVar31 = lVar31 + 0x188;
    uVar14 = *in_stack_000001c8;
    fStack0000000000000178 = (float)((int)fStack0000000000000178 + 1);
    bVar9 = (int)uVar29 < (int)uVar14;
    uVar15 = uVar37;
    uVar29 = uVar29 + 1;
  } while (bVar9);
  iVar17 = uVar37 + 1;
  plVar41 = (long *)StringLiteral_8728;
  unaff_x25 = in_stack_000001d0;
LAB_03ddc86c:
  *(uint *)(in_stack_000001b8 + 0x10) = uVar14;
  uVar49 = *(undefined4 *)(unaff_x19 + 0x15c0);
  *(int *)(in_stack_000001b8 + 0x24) = iVar17;
  if ((int)uVar14 < 1 || fStack0000000000000140 == 0.0) {
    fStack0000000000000140 = 1.4013e-45;
  }
  *(float *)(in_stack_000001b8 + 0x1c) = fStack0000000000000140;
  *(undefined4 *)(in_stack_000001b8 + 0x14) = uVar49;
  *(int *)(in_stack_000001b8 + 0x28) = *(int *)(unaff_x19 + 0x350) + 1;
  if (1 < *(int *)(in_stack_000001b8 + 0x2c)) {
    uVar19 = 1;
    lVar26 = 0x70;
    do {
      lVar31 = *(long *)(in_stack_000001b8 + 0x58);
      if (lVar31 == 0) {
LAB_03ddcaac:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (*(int *)(*plVar41 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      if (*(uint *)(lVar31 + 0x18) <= uVar19) goto LAB_03ddcab0;
      FUN_03dcfa7c(lVar31 + lVar26,0);
      if (*(int *)(unaff_x25 + 0x100) != 0) {
        lVar31 = *(long *)(in_stack_000001b8 + 0x58);
        if (lVar31 == 0) goto LAB_03ddcaac;
        if (*(int *)(*plVar41 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        if (*(uint *)(lVar31 + 0x18) <= uVar19) {
LAB_03ddcab0:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        FUN_03dcfab8(lVar31 + lVar26,1,0);
      }
      uVar19 = uVar19 + 1;
      lVar26 = lVar26 + 0x50;
    } while ((long)uVar19 < (long)*(int *)(in_stack_000001b8 + 0x2c));
  }
LAB_03dd59bc:
  if (*(long *)(in_stack_000000a0 + 0x28) == in_stack_00001628) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


