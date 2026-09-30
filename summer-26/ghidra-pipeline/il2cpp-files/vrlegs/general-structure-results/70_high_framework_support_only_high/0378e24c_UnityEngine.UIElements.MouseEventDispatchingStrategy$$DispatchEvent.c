/*
FUNCTION_NAME: UnityEngine.UIElements.MouseEventDispatchingStrategy$$DispatchEvent
ENTRY_POINT: 0378e24c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


void UnityEngine_UIElements_MouseEventDispatchingStrategy__DispatchEvent(void)

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
  long *plVar17;
  ulong uVar18;
  undefined1 *puVar19;
  ulong uVar20;
  undefined1 uVar21;
  char cVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  float *pfVar26;
  long lVar27;
  uint uVar28;
  ulong uVar29;
  long *plVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  float *pfVar35;
  uint uVar36;
  long lVar37;
  long unaff_x19;
  char cVar38;
  uint unaff_w20;
  long lVar39;
  long *unaff_x21;
  uint uVar40;
  long *plVar41;
  ulong unaff_x22;
  uint unaff_w23;
  char *unaff_x24;
  uint unaff_w25;
  long *unaff_x26;
  long lVar42;
  ulong unaff_x27;
  long unaff_x28;
  long lVar43;
  uint *unaff_x29;
  float fVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  float fVar53;
  undefined4 uVar54;
  float fVar55;
  undefined8 uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  float fVar61;
  float unaff_s11;
  float fVar62;
  float unaff_s13;
  float fVar63;
  float fVar64;
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
  float in_stack_00000180;
  float in_stack_00000188;
  long *in_stack_00000190;
  float in_stack_000001a0;
  long *in_stack_000001a8;
  float fStack00000000000001bc;
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
  
code_r0x0378e24c:
  uVar18 = FUN_03699d3c(unaff_x28,*(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0x6c),0);
  if ((uVar18 & 1) == 0) goto LAB_0378e338;
  lVar43 = *in_stack_00000190;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (lVar43 != 0) {
    uVar18 = FUN_03699d3c(lVar43,*(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe4),0);
    if ((uVar18 & 1) == 0) goto LAB_0378e338;
    lVar43 = *in_stack_00000190;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (lVar43 != 0) {
      fVar47 = (float)FUN_0369e060(lVar43,*(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0x6c),0);
      plVar41 = (long *)PTR_DAT_03cbe438;
      if ((*unaff_x26 != 0) && (*in_stack_00000190 != 0)) {
        fVar57 = *(float *)(*unaff_x26 + 0x188);
        fVar48 = (float)FUN_0369e060(*in_stack_00000190,
                                     *(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe4),0);
        fVar48 = fVar48 * fVar47 * fVar57 * 0.25;
        fVar57 = unaff_s13;
        if (fVar47 < in_stack_000001a0 + fVar48) {
          in_stack_000001a0 = fVar47 - fVar48;
        }
LAB_0378e344:
        fVar58 = *(float *)(unaff_x19 + 0x2f4);
        fVar47 = (float)FUN_03776ca4(&stack0x000015f0,0);
        fVar61 = *(float *)(unaff_x19 + 0x19a8);
        fVar49 = (float)FUN_03778e5c(&stack0x000015e0,0);
        fVar58 = fVar58 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                          fVar57 * (fVar49 + ((fVar47 * fVar61 - in_stack_000001a0) - fVar48));
        fVar47 = (float)FUN_03776cac(&stack0x000015f0,0);
        fVar49 = (float)FUN_03778e6c(&stack0x000015e0,0);
        fStack00000000000001bc =
             *(float *)(unaff_x19 + 0x180) +
             ((unaff_s11 + fVar57 * (in_stack_000001a0 + fVar47 + fVar49)) -
             *(float *)(unaff_x19 + 0x2e0));
        fVar47 = (float)FUN_03776c9c(&stack0x000015f0,0);
        fVar61 = fStack00000000000001bc - fVar57 * (in_stack_000001a0 + in_stack_000001a0 + fVar47);
        fVar47 = (float)FUN_03776c94(&stack0x000015f0,0);
        fVar53 = fVar58 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                          fVar57 * (fVar48 + fVar48 +
                                   in_stack_000001a0 + in_stack_000001a0 +
                                   fVar47 * *(float *)(unaff_x19 + 0x19a8));
        fVar47 = fVar58;
        fVar49 = fVar53;
        if (((unaff_w20 == 0) && (*unaff_x24 == '\x01')) &&
           ((*(byte *)(unaff_x19 + 0x124) >> 1 & 1) != 0)) {
          if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
          iVar15 = *(int *)(unaff_x19 + 0x19a4);
          fVar47 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
          if (*unaff_x26 == 0) goto LAB_03793c9c;
          fVar49 = (float)FUN_037769b0(*unaff_x26 + 0xb0,0);
          if (*unaff_x26 == 0) goto LAB_03793c9c;
          fVar64 = *(float *)(unaff_x19 + 0xf0);
          fVar50 = *(float *)(unaff_x19 + 0x180);
          fVar59 = (float)iVar15 * fStack00000000000000a8;
          fVar44 = (float)FUN_03776960(*unaff_x26 + 0xb0,0);
          fVar44 = fVar44 * fVar64 * (fVar47 - (fVar49 + fVar50)) * 0.5;
          fVar47 = (float)FUN_03776cac(&stack0x000015f0,0);
          fVar49 = fVar59 * fVar57 * ((fVar48 + in_stack_000001a0 + fVar47) - fVar44);
          fVar64 = (float)FUN_03776cac(&stack0x000015f0,0);
          fVar50 = (float)FUN_03776c9c(&stack0x000015f0,0);
          fStack00000000000001bc = fStack00000000000001bc + 0.0;
          fVar47 = fVar58 + fVar49;
          fVar61 = fVar61 + 0.0;
          fVar49 = fVar53 + fVar49;
          fVar59 = fVar59 * fVar57 * ((((fVar64 - fVar50) - in_stack_000001a0) - fVar48) - fVar44);
          fVar58 = fVar58 + fVar59;
          fVar53 = fVar53 + fVar59;
        }
        uVar56 = *in_stack_000000f8;
        uVar60 = *_fStack00000000000000f0;
        if (DAT_0411f169 == '\0') {
          FUN_01ab69ac(PTR_DAT_03cbdeb8);
          DAT_0411f169 = '\x01';
        }
        uVar51 = **(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8);
        uVar52 = (*(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8))[1];
        fVar48 = 0.0;
        if (DAT_00d38b04 <
            (float)((ulong)uVar60 >> 0x20) * (float)((ulong)uVar52 >> 0x20) +
            (float)uVar60 * (float)uVar52 +
            (float)uVar56 * (float)uVar51 +
            (float)((ulong)uVar56 >> 0x20) * (float)((ulong)uVar51 >> 0x20)) {
          fVar55 = 0.0;
          fVar59 = 0.0;
          fVar50 = 0.0;
          fVar44 = fStack00000000000001bc;
          fVar64 = fVar61;
        }
        else {
          FUN_036be00c(&stack0x000016a0,*(undefined4 *)(unaff_x19 + 0x19b4),
                       *(undefined4 *)(unaff_x19 + 0x19b8),*(undefined4 *)(unaff_x19 + 0x19bc),
                       *(undefined4 *)(unaff_x19 + 0x19c0),0);
          fVar62 = (fVar49 + fVar58) * 0.5;
          fVar63 = (fVar61 + fStack00000000000001bc) * 0.5;
          fStack00000000000001bc = fStack00000000000001bc - fVar63;
          fVar50 = 0.0;
          fVar44 = fStack00000000000001bc;
          fVar47 = (float)FUN_036bdd2c(fVar47 - fVar62,&stack0x000014d0,0);
          fVar47 = fVar62 + fVar47;
          fVar50 = fVar50 + 0.0;
          fVar64 = fVar61 - fVar63;
          fVar59 = 0.0;
          fVar61 = fVar64;
          fVar58 = (float)FUN_036bdd2c(fVar58 - fVar62,&stack0x000014d0,0);
          fVar58 = fVar62 + fVar58;
          fVar61 = fVar63 + fVar61;
          fVar59 = fVar59 + 0.0;
          fVar55 = 0.0;
          fVar49 = (float)FUN_036bdd2c(fVar49 - fVar62,&stack0x000014d0,0);
          fVar49 = fVar62 + fVar49;
          fStack00000000000001bc = fVar63 + fStack00000000000001bc;
          fVar55 = fVar55 + 0.0;
          fVar48 = 0.0;
          fVar53 = (float)FUN_036bdd2c(fVar53 - fVar62,&stack0x000014d0,0);
          fVar53 = fVar62 + fVar53;
          fVar48 = fVar48 + 0.0;
          fVar44 = fVar63 + fVar44;
          fVar64 = fVar63 + fVar64;
        }
        lVar43 = *in_stack_000001e8;
        if (lVar43 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar43 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
        lVar43 = lVar43 + (long)(int)*unaff_x29 * unaff_x27;
        *(float *)(lVar43 + 0x124) = fVar58;
        *(float *)(lVar43 + 0x128) = fVar61;
        *(float *)(lVar43 + 300) = fVar59;
        lVar43 = *in_stack_000001e8;
        if (lVar43 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar43 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
        lVar43 = lVar43 + (long)(int)*unaff_x29 * unaff_x27;
        *(float *)(lVar43 + 0x118) = fVar47;
        *(float *)(lVar43 + 0x11c) = fVar44;
        *(float *)(lVar43 + 0x120) = fVar50;
        lVar43 = *in_stack_000001e8;
        if (lVar43 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar43 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
        lVar43 = lVar43 + (long)(int)*unaff_x29 * unaff_x27;
        *(float *)(lVar43 + 0x138) = fVar55;
        *(float *)(lVar43 + 0x130) = fVar49;
        *(float *)(lVar43 + 0x134) = fStack00000000000001bc;
        lVar43 = *in_stack_000001e8;
        if (lVar43 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar43 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
        lVar43 = lVar43 + (long)(int)*unaff_x29 * unaff_x27;
        *(float *)(lVar43 + 0x13c) = fVar53;
        *(float *)(lVar43 + 0x140) = fVar64;
        *(float *)(lVar43 + 0x144) = fVar48;
        lVar43 = *in_stack_000001e8;
        if (lVar43 == 0) goto LAB_03793c9c;
        uVar13 = *unaff_x29;
        fVar48 = *(float *)(unaff_x19 + 0x2f4);
        fVar47 = (float)FUN_03778e5c(&stack0x000015e0,0);
        if (*(uint *)(lVar43 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        *(float *)(lVar43 + (long)(int)uVar13 * unaff_x27 + 0x148) = fVar48 + fVar57 * fVar47;
        lVar43 = *in_stack_000001e8;
        if (lVar43 == 0) goto LAB_03793c9c;
        uVar13 = *unaff_x29;
        fVar53 = *(float *)(unaff_x19 + 0x2e0);
        fVar48 = *(float *)(unaff_x19 + 0x180);
        fVar47 = (float)FUN_03778e6c(&stack0x000015e0,0);
        if (*(uint *)(lVar43 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        *(float *)(lVar43 + (long)(int)uVar13 * unaff_x27 + 0x150) =
             (unaff_s11 - fVar53) + fVar48 + fVar57 * fVar47;
        lVar43 = *in_stack_000001e8;
        if (lVar43 == 0) goto LAB_03793c9c;
        uVar13 = *unaff_x29;
        lVar39 = (long)(int)uVar13;
        if (*(uint *)(lVar43 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        *(float *)(lVar43 + lVar39 * unaff_x27 + 0x168) = (fVar49 - fVar58) / (fVar44 - fVar61);
        fVar47 = fVar57 * (in_stack_00000180 + fStack000000000000016c);
        if (*unaff_x24 == '\x01') {
          fVar47 = fVar47 / fStack000000000000017c;
          fVar48 = (fVar57 * (fStack0000000000000170 + fStack0000000000000168)) /
                   fStack000000000000017c;
        }
        else {
          fVar48 = fVar57 * (fStack0000000000000170 + fStack0000000000000168);
        }
        uVar28 = *(uint *)(unaff_x19 + 0x328);
        fVar49 = *(float *)(unaff_x19 + 0x180);
        bVar8 = uVar13 == uVar28;
        bVar9 = unaff_w25 == 0;
        fVar47 = fVar49 + fVar47;
        if (bVar9 || bVar8) {
          fVar48 = fVar49 + fVar48;
          fVar61 = fVar47;
          fVar58 = fVar48;
          if (fVar49 != 0.0) {
            fVar61 = (fVar47 - fVar49) / *(float *)(unaff_x19 + 0xf0);
            fVar58 = (fVar48 - fVar49) / *(float *)(unaff_x19 + 0xf0);
            if (fVar61 <= fVar47) {
              fVar61 = fVar47;
            }
            if (fVar48 <= fVar58) {
              fVar58 = fVar48;
            }
          }
          lVar31 = lVar43 + lVar39 * unaff_x27;
          fVar49 = fVar61;
          if (fVar61 <= *(float *)(unaff_x19 + 0x338)) {
            fVar49 = *(float *)(unaff_x19 + 0x338);
          }
          fVar53 = fVar58;
          if (*(float *)(unaff_x19 + 0x33c) <= fVar58) {
            fVar53 = *(float *)(unaff_x19 + 0x33c);
          }
          *(float *)(unaff_x19 + 0x338) = fVar49;
          *(float *)(unaff_x19 + 0x33c) = fVar53;
          *(float *)(lVar31 + 0x158) = fVar61;
          *(float *)(lVar31 + 0x15c) = fVar58;
          fVar61 = *(float *)(unaff_x19 + 0x2e0);
          fVar58 = fVar47 - fVar61;
        }
        else {
          fVar49 = *(float *)(unaff_x19 + 0x338);
          lVar31 = lVar43 + lVar39 * unaff_x27;
          *(float *)(lVar31 + 0x158) = fVar49;
          fVar48 = *(float *)(unaff_x19 + 0x33c);
          *(float *)(lVar31 + 0x15c) = fVar48;
          fVar61 = *(float *)(unaff_x19 + 0x2e0);
          fVar58 = fVar49 - fVar61;
        }
        *(float *)(lVar31 + 0x14c) = fVar58;
        *(float *)(lVar43 + lVar39 * unaff_x27 + 0x154) = fVar48 - fVar61;
        *(float *)(unaff_x19 + 0x378) = fVar48 - fVar61;
        if ((*(int *)(unaff_x19 + 0x340) == 0) || (*(char *)(unaff_x19 + 0x37c) != '\0')) {
          if (bVar9 || bVar8) {
            *(float *)(unaff_x19 + 0x374) = fVar49;
            if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
            fVar48 = *(float *)(unaff_x19 + 0x370);
            fVar49 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
            fVar61 = *(float *)(unaff_x19 + 0x2e0);
            fStack000000000000017c = (fVar57 * fVar49) / fStack000000000000017c;
            if (fVar48 <= fStack000000000000017c) {
              fVar48 = fStack000000000000017c;
            }
            *(float *)(unaff_x19 + 0x370) = fVar48;
            if (fVar61 == 0.0) goto LAB_0378ee0c;
          }
        }
        else if ((bVar9 || bVar8) && fVar61 == 0.0) {
LAB_0378ee0c:
          fVar48 = *(float *)(unaff_x19 + 0x19c8);
          if (*(float *)(unaff_x19 + 0x19c8) <= fVar47) {
            fVar48 = fVar47;
          }
          *(float *)(unaff_x19 + 0x19c8) = fVar48;
        }
        lVar43 = *in_stack_000001e8;
        if (lVar43 == 0) goto LAB_03793c9c;
        uVar23 = *unaff_x29;
        if (*(uint *)(lVar43 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
        lVar43 = lVar43 + (long)(int)uVar23 * unaff_x27;
        *(undefined1 *)(lVar43 + 0x1a0) = 0;
        uVar36 = *(uint *)(unaff_x19 + 0x158) & 0x18;
        iVar15 = (int)unaff_x27;
        if ((in_stack_0000169c == 9) ||
           ((((unaff_w25 == 0 && (in_stack_0000169c != 3)) &&
             ((in_stack_0000169c != 0x200b && (in_stack_0000169c != 0xad)))) ||
            (((in_stack_0000169c == 0xad & (in_stack_000000b8 ^ 0xff)) != 0 ||
             (*unaff_x24 == '\x02')))))) {
          *(undefined1 *)(lVar43 + 0x1a0) = 1;
          pfVar26 = _fStack0000000000000130;
          pfVar35 = _iStack0000000000000138;
          if (unaff_w23 != 0) {
            lVar43 = *(long *)(in_stack_000001c0 + 0x48);
            if (lVar43 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
            lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
            pfVar35 = (float *)(lVar43 + 100);
            pfVar26 = (float *)(lVar43 + 0x68);
          }
          fVar49 = *pfVar35;
          fVar48 = *pfVar26;
          fVar47 = *(float *)(unaff_x19 + 0x35c);
          fVar58 = *(float *)(unaff_x19 + 0x2f4);
          fStack0000000000000174 = (fStack000000000000012c - fVar49) - fVar48;
          bVar8 = true;
          if ((fVar47 <= fStack0000000000000174) && (bVar8 = false, !NAN(fVar47))) {
            bVar8 = fVar47 == -1.0;
          }
          if (!bVar8) {
            fStack0000000000000174 = fVar47;
          }
          fVar47 = 0.0;
          fVar53 = 0.0;
          if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
            fVar53 = (float)FUN_03776cb4(&stack0x000015f0,0);
            fVar61 = *(float *)(unaff_x19 + 0x2e0);
          }
          fVar44 = *(float *)(unaff_x19 + 0x1594);
          fVar64 = *(float *)(unaff_x19 + 0x33c);
          if (in_stack_0000169c != 0xad) {
            fStack000000000000015c = fVar57;
          }
          if ((0.0 < fVar61) && (fVar47 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
            fVar47 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
          }
          uVar23 = *in_stack_000001d0;
          fVar47 = (*(float *)(unaff_x19 + 0x374) - (fVar64 - fVar61)) + fVar47;
          if (fVar47 <= in_stack_00000108) goto switchD_0378f0dc_caseD_2;
          if (*(int *)(unaff_x19 + 0x34c) == -1) {
            *(uint *)(unaff_x19 + 0x34c) = uVar23;
          }
          uVar56 = DAT_00d37868;
          if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
            fVar50 = *(float *)(in_stack_000001e0 + 0xd0);
            if (((*(float *)(unaff_x19 + 0x15b0) <= fVar50) || (fVar61 <= 0.0)) ||
               (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
              fVar61 = *_fStack00000000000000d0;
              fVar47 = *(float *)(in_stack_000001e0 + 0xac);
              if ((fVar61 <= fVar47) ||
                 (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) goto LAB_0378f0b8;
              fVar57 = (fVar61 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
              if (fVar57 <= DAT_00d38b84) {
                fVar57 = DAT_00d38b84;
              }
              fVar48 = (fVar61 - fVar57) * 20.0 + 0.5;
              fVar57 = DAT_00d38e60;
              if (fVar48 != INFINITY) {
                fVar57 = (float)(int)fVar48 / 20.0;
              }
              if (fVar57 <= fVar47) {
                fVar57 = fVar47;
              }
              *(float *)(unaff_x19 + 0x1598) = fVar61;
LAB_037910ac:
              *(float *)(unaff_x19 + 0xec) = fVar57;
            }
            else {
              fVar47 = *(float *)(unaff_x19 + 0x15b0) +
                       ((in_stack_00000018._4_4_ - fVar47) / (float)*(int *)(unaff_x19 + 0x340)) /
                       fStack0000000000000088;
              if (fVar47 <= fVar50) {
                fVar47 = fVar50;
              }
LAB_03793b50:
              *(float *)(unaff_x19 + 0x15b0) = fVar47;
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
                  lVar43 = *(long *)(in_stack_000001c0 + 0x48);
                  if (lVar43 != 0) {
                    if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar43 + 0x18)) {
                      lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                      uStack00000000000000ac = 0;
                      *(float *)(lVar43 + 100) = fVar49;
                      *(float *)(lVar43 + 0x68) = fVar48;
                      goto LAB_0378f884;
                    }
                    goto thunk_FUN_01ab6c44;
                  }
                  goto LAB_03793c9c;
                }
                lVar43 = *in_stack_000001e8;
                if (lVar43 == 0) goto LAB_03793c9c;
                if (*(uint *)(lVar43 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
                *(undefined1 *)(lVar43 + (long)(int)uVar23 * (long)iVar15 + 0x1a0) = 0;
              }
              else {
                lVar43 = *in_stack_000001e8;
                if (lVar43 == 0) goto LAB_03793c9c;
                if (*(uint *)(lVar43 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
                *(undefined1 *)(lVar43 + (long)(int)uVar23 * (long)iVar15 + 0x1a0) = 0;
                *(uint *)(unaff_x19 + 0x334) = uVar23;
                lVar43 = *(long *)(in_stack_000001c0 + 0x48);
                if (lVar43 == 0) goto LAB_03793c9c;
                uVar23 = *(uint *)(lVar43 + 0x18);
                if (uVar23 <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
                lVar39 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                iVar14 = *(int *)(lVar39 + 0x2c) + 1;
                *(int *)(lVar39 + 0x2c) = iVar14;
                *(int *)(unaff_x19 + 0x348) = iVar14;
                if (uVar23 <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
                lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                *(float *)(lVar43 + 100) = fVar49;
                *(float *)(lVar43 + 0x68) = fVar48;
                *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
              }
              goto LAB_0378f884;
            }
            fVar61 = ABS(fVar58) + fVar53 * (1.0 - fVar44) * fStack000000000000015c;
            fVar47 = 1.0;
            if (uVar36 != 0) {
              fVar47 = DAT_00d38acc;
            }
            if (fVar61 <= fVar47 * fStack0000000000000174) goto LAB_0378f1e0;
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
                                  Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__
                                );
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
              fVar58 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
              if (fVar58 <= fVar44) {
                fVar58 = *(float *)(in_stack_000001e0 + 0xac);
                fVar53 = *_fStack00000000000000d0;
                if (fVar53 <= fVar58) goto LAB_0378f2f0;
LAB_03793bbc:
                fVar47 = (fVar53 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
                if (fVar47 <= DAT_00d38b84) {
                  fVar47 = DAT_00d38b84;
                }
                *(float *)(unaff_x19 + 0x1598) = fVar53;
                fVar47 = (fVar53 - fVar47) * 20.0 + 0.5;
                fVar57 = DAT_00d38e60;
                if (fVar47 != INFINITY) {
                  fVar57 = (float)(int)fVar47 / 20.0;
                }
                if (fVar57 <= fVar58) {
                  fVar57 = fVar58;
                }
                goto LAB_037910ac;
              }
              fVar57 = fVar61 / (1.0 - fVar44);
              if (fVar44 <= 0.0) {
                fVar57 = fVar61;
              }
              fVar44 = fVar44 + (fVar61 - fVar47 * (fStack0000000000000174 + DAT_00d38cc4)) / fVar57
              ;
FUN_03793c4c:
              if (fVar58 <= fVar44) {
                fVar44 = fVar58;
              }
              *(float *)(unaff_x19 + 0x1594) = fVar44;
              goto LAB_0378c81c;
            }
            in_stack_0000160c = FUN_03797154();
            if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
              lVar43 = *in_stack_000001e8;
              if (lVar43 == 0) goto LAB_03793c9c;
              uVar24 = *in_stack_000001d0;
              if (*(uint *)(lVar43 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
              fVar53 = *(float *)(unaff_x19 + 0x2e0);
              fVar58 = 0.0;
              if ((0.0 < fVar53) && (fVar58 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
                fVar58 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
              }
              fVar58 = fStack0000000000000158 * *(float *)(in_stack_000001e0 + 200) +
                       *(float *)(lVar43 + (long)(int)uVar24 * unaff_x27 + 0x158) +
                       (fVar58 - *(float *)(unaff_x19 + 0x33c)) +
                       fStack0000000000000088 *
                       (in_stack_00000080._4_4_ + *(float *)(unaff_x19 + 0x15b0));
            }
            else {
              fVar58 = *(float *)(in_stack_000001e0 + 200);
              *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
              lVar43 = *in_stack_000001e8;
              if (lVar43 == 0) goto LAB_03793c9c;
              fVar53 = *(float *)(unaff_x19 + 0x2e0);
              uVar24 = *(uint *)(unaff_x19 + 0x324);
              fVar58 = *(float *)(unaff_x19 + 0x2e4) + fStack0000000000000158 * fVar58;
            }
            if ((*(uint *)(lVar43 + 0x18) <= uVar24) ||
               (uVar40 = uVar24 - 1, *(uint *)(lVar43 + 0x18) <= uVar40)) goto thunk_FUN_01ab6c44;
            fVar64 = (fVar58 + *(float *)(unaff_x19 + 0x374) + fVar53) -
                     *(float *)(lVar43 + (long)(int)uVar24 * (long)iVar15 + 0x15c);
            if (((in_stack_000000b8 & 1) == 0 &&
                 *(short *)(lVar43 + (long)(int)uVar40 * (long)iVar15 + 0x20) == 0xad) &&
               ((fVar64 < in_stack_00000108 || (*(int *)(in_stack_000001e0 + 0x74) == 0)))) {
              in_stack_000000b8 = 0;
              *in_stack_000001d0 = uVar40;
              in_stack_0000160c = in_stack_0000160c - 1;
              in_stack_00001688 = CONCAT44(0x2d,uVar40);
              break;
            }
            if (*(short *)(lVar43 + (long)(int)uVar24 * unaff_x27 + 0x20) == 0xad) {
              in_stack_000000b8 = 1;
              break;
            }
            if ((bStack00000000000000d8 & *(byte *)(in_stack_000001e0 + 0xa8) & 1) != 0) {
              fVar44 = *(float *)(unaff_x19 + 0x1594);
              fVar58 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
              if ((fVar58 <= fVar44) ||
                 (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
                fVar53 = *_fStack00000000000000d0;
                fVar58 = *(float *)(in_stack_000001e0 + 0xac);
                if ((fVar58 < fVar53) &&
                   (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) goto LAB_03793bbc;
                goto LAB_03790b7c;
              }
LAB_03793c60:
              fVar57 = fVar61;
              if (0.0 < fVar44) {
                fVar57 = fVar61 / (1.0 - fVar44);
              }
              fVar44 = fVar44 + (fVar61 - fVar47 * (fStack0000000000000174 + DAT_00d38cc4)) / fVar57
              ;
              goto FUN_03793c4c;
            }
LAB_03790b7c:
            iVar14 = *in_stack_00000030;
            if ((iVar14 != iStack0000000000000028) && ((bStack00000000000000d8 & iVar14 != -1) != 0)
               ) {
              in_stack_0000160c = FUN_03797154();
              plVar41 = (long *)PTR_DAT_03cbe438;
              lVar43 = *(long *)(in_stack_000001c0 + 0x30);
              if (lVar43 == 0) goto LAB_03793c9c;
              uVar24 = *in_stack_000001d0;
              uVar40 = uVar24 - 1;
              if (*(uint *)(lVar43 + 0x18) <= uVar40) goto thunk_FUN_01ab6c44;
              iStack0000000000000028 = iVar14;
              if (*(short *)(lVar43 + (long)(int)uVar40 * (long)iVar15 + 0x20) == 0xad) {
                in_stack_000000b8 = 0;
                *in_stack_000001d0 = uVar40;
                in_stack_0000160c = in_stack_0000160c - 1;
                in_stack_00001688 = CONCAT44(0x2d,uVar40);
                break;
              }
            }
            if (fVar64 <= in_stack_00000108) {
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
              fVar58 = *(float *)(in_stack_000001e0 + 0xd0);
              if ((fVar58 < *(float *)(unaff_x19 + 0x15b0)) &&
                 (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
                fVar47 = *(float *)(unaff_x19 + 0x15b0) +
                         ((in_stack_00000018._4_4_ - fVar64) /
                         (float)(*(int *)(unaff_x19 + 0x340) + 1)) / fStack0000000000000088;
                if (fVar47 <= fVar58) {
                  fVar47 = fVar58;
                }
                goto LAB_03793b50;
              }
              fVar44 = *(float *)(unaff_x19 + 0x1594);
              fVar58 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
              if ((fVar44 < fVar58) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))
                 ) goto LAB_03793c60;
              fVar53 = *_fStack00000000000000d0;
              fVar58 = *(float *)(in_stack_000001e0 + 0xac);
              if ((fVar58 < fVar53) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))
                 ) goto LAB_03793bbc;
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
              fVar47 = *(float *)(unaff_x19 + 0x338);
              in_stack_0000160c = FUN_03797154();
              if (in_stack_00000108 < fVar47 - fVar64) goto LAB_0378f7e8;
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
          lVar43 = *(long *)(unaff_x19 + 0x20);
          if (lVar43 == 0) goto LAB_03793c9c;
          if ((int)in_stack_0000160c < (int)*(uint *)(lVar43 + 0x18)) {
            if (*(uint *)(lVar43 + 0x18) <= in_stack_0000160c) goto thunk_FUN_01ab6c44;
            uVar13 = *(uint *)(lVar43 + (long)(int)in_stack_0000160c * 0x10 + 0x24);
            if (uVar13 == 0) goto LAB_03790fec;
            if (5 < in_stack_000001d8._4_4_) {
              uVar56 = FUN_0278d4e8(&stack0x0000169c,0);
              uVar60 = FUN_0276793c(&stack0x0000160c,0);
              uVar56 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar56,
                                    *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar60,0);
              if (*(int *)(*plVar41 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*plVar41);
              }
              FUN_0367ae18(uVar56,0);
              in_stack_00001688 = CONCAT44(3,*in_stack_000001d0);
            }
            in_stack_0000169c = uVar13;
            if (uVar13 == 0x1a) goto LAB_0378d260;
            if ((uVar13 == 0x3c) && (*(char *)(in_stack_000001e0 + 0xb5) != '\0')) {
              unaff_x24[0] = '\x01';
              unaff_x24[1] = '\x01';
              uVar18 = FUN_037974c0();
              if (((uVar18 & 1) != 0) &&
                 (in_stack_0000160c = in_stack_000015dc, *unaff_x24 == '\x01')) goto LAB_0378d260;
            }
            else {
              lVar43 = *in_stack_000001e8;
              if (lVar43 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar43 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
              lVar43 = lVar43 + (long)(int)*in_stack_000001d0 * unaff_x27;
              *unaff_x24 = *(char *)(lVar43 + 0x28);
              *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar43 + 0x60);
              *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(lVar43 + 0x40);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001c8);
            }
            lVar43 = *in_stack_000001e8;
            if (lVar43 == 0) goto LAB_03793c9c;
            uVar13 = *(uint *)(unaff_x19 + 0x324);
            if (*(uint *)(lVar43 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
            lVar39 = (long)(int)uVar13;
            uVar45 = *(undefined4 *)(unaff_x19 + 0x78);
            bVar11 = *(byte *)(lVar43 + lVar39 * unaff_x27 + 100);
            unaff_w20 = (uint)bVar11;
            unaff_x24[1] = '\0';
            if ((uint)in_stack_00001688 == uVar13) {
              in_stack_0000169c = (uint)((ulong)in_stack_00001688 >> 0x20);
              unaff_w23 = 1;
              *unaff_x24 = '\x01';
              if (in_stack_0000169c == 0x2026) {
                *(undefined8 *)(lVar43 + lVar39 * unaff_x27 + 0x30) =
                     *(undefined8 *)(unaff_x19 + 0x1a00);
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                lVar43 = *in_stack_000001e8;
                if (lVar43 == 0) goto LAB_03793c9c;
                if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x324))
                goto thunk_FUN_01ab6c44;
                lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
                *(undefined1 *)(lVar43 + 0x28) = 1;
                *(undefined8 *)(lVar43 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1a08);
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                lVar43 = *in_stack_000001e8;
                if (lVar43 == 0) goto LAB_03793c9c;
                if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x324))
                goto thunk_FUN_01ab6c44;
                *(undefined8 *)(lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x58)
                     = *(undefined8 *)(unaff_x19 + 0x1a10);
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                lVar43 = *in_stack_000001e8;
                if (lVar43 == 0) goto LAB_03793c9c;
                uVar13 = *in_stack_000001d0;
                if (*(uint *)(lVar43 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
                unaff_w23 = 1;
                *(undefined4 *)(lVar43 + (long)(int)uVar13 * unaff_x27 + 0x60) =
                     *(undefined4 *)(unaff_x19 + 0x1a18);
                *(undefined1 *)
                 (*(long *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__
                           + 0xb8) + 8) = 1;
                in_stack_00001688 = CONCAT44(3,uVar13 + 1);
              }
              else if (in_stack_0000169c == 3) {
                if ((*in_stack_000001c8 == 0) ||
                   (lVar31 = FUN_03779b3c(*in_stack_000001c8,0), lVar31 == 0)) goto LAB_03793c9c;
                FUN_0219b634(lVar31,&stack0x00000978,&stack0x000016a0,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<int,_List<IIdleAutoDespawn>>__ctor__
                            );
                if (*(uint *)(lVar43 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
                *(undefined8 *)(lVar43 + lVar39 * unaff_x27 + 0x30) = in_stack_000016a0;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                unaff_w23 = 1;
                *(undefined1 *)
                 (*(long *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__
                           + 0xb8) + 8) = 1;
                uVar13 = *in_stack_000001d0;
              }
            }
            else {
              unaff_w23 = 0;
            }
            if (((int)uVar13 < *(int *)(in_stack_000001e0 + 0xe4)) && (in_stack_0000169c != 3)) {
              lVar43 = *in_stack_000001e8;
              if (lVar43 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar43 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
              lVar43 = lVar43 + (long)(int)uVar13 * (long)iVar15;
              *(undefined1 *)(lVar43 + 0x1a0) = 0;
              *(undefined2 *)(lVar43 + 0x20) = 0x200b;
              *(undefined4 *)(lVar43 + 0x6c) = 0;
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
                    uVar18 = FUN_026b812c(in_stack_0000169c,0);
                    if ((uVar18 & 1) != 0) {
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
                  uVar18 = FUN_026b8070(in_stack_0000169c,0);
                  fStack000000000000017c = 1.0;
                  if ((uVar18 & 1) != 0) {
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
                uVar18 = FUN_026b812c(in_stack_0000169c,0);
                fStack000000000000017c = 1.0;
                if ((uVar18 & 1) != 0) {
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
                lVar43 = *in_stack_000001e8;
                unaff_s11 = 0.0;
                unaff_s13 = fVar57;
                if (in_stack_0000169c == 3 || in_stack_0000169c == 0xad) {
                  unaff_s13 = unaff_s11;
                }
                if (lVar43 == 0) goto LAB_03793c9c;
                uVar13 = *in_stack_000001d0;
                in_stack_00000180 = 0.0;
                fStack0000000000000170 = 0.0;
                goto LAB_0378dba8;
              }
              lVar43 = *in_stack_000001e8;
              if (lVar43 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar43 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
              plVar41 = *(long **)(lVar43 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x30);
              if (plVar41 == (long *)0x0) goto LAB_03793c9c;
              bVar12 = *(byte *)(*(long *)
                                  Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__
                                + 0x130);
              if ((*(byte *)(*plVar41 + 0x130) < bVar12) ||
                 (*(long *)(*(long *)(*plVar41 + 200) + (ulong)bVar12 * 8 + -8) !=
                  *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__)) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6ee0(plVar41);
              }
              plVar17 = (long *)FUN_03783144(plVar41,0);
              if (plVar17 == (long *)0x0) {
                plVar17 = (long *)0x0;
                *in_stack_00000160 = 0;
              }
              else {
                lVar43 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Material>_Add__;
                bVar12 = *(byte *)(lVar43 + 0x130);
                if (*(byte *)(*plVar17 + 0x130) < bVar12) {
                  plVar30 = (long *)0x0;
                }
                else {
                  plVar30 = plVar17;
                  if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar12 * 8 + -8) != lVar43) {
                    plVar30 = (long *)0x0;
                  }
                }
                *in_stack_00000160 = (long)plVar30;
                if (*(byte *)(*plVar17 + 0x130) < bVar12) {
                  plVar17 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar12 * 8 + -8) != lVar43) {
                  plVar17 = (long *)0x0;
                }
              }
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (in_stack_00000160,plVar17);
              iVar14 = FUN_0377acf0(plVar41,0);
              *(int *)(unaff_x19 + 0x157c) = iVar14;
              if (in_stack_0000169c == 0x3c) {
                in_stack_0000169c = iVar14 + 0xe000;
              }
              else {
                uVar46 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                *(undefined4 *)(unaff_x19 + 0x1580) = uVar46;
              }
              if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
              fVar47 = *(float *)(unaff_x19 + 0xf4);
              FUN_03779650(&stack0x000016a0,*(long *)(unaff_x19 + 0x68),0);
              memcpy(&stack0x00001610,&stack0x000016a0,0x60);
              iVar14 = FUN_03776950(&stack0x00001610,0);
              if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
              FUN_03779650(&stack0x000016a0,*in_stack_000001c8,0);
              memcpy(&stack0x00001610,&stack0x000016a0,0x60);
              fVar48 = (float)FUN_03776960(&stack0x00001610,0);
              fVar57 = in_stack_00000150;
              if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                fVar57 = 1.0;
              }
              if (*in_stack_00000160 == 0) goto LAB_03793c9c;
              fVar57 = (fVar47 / (float)iVar14) * fVar48 * fVar57;
              iVar14 = FUN_03776950(*in_stack_00000160 + 0x48,0);
              fVar47 = *(float *)(unaff_x19 + 0xf4);
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
                fVar49 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
                if (plVar41[4] == 0) goto LAB_03793c9c;
                FUN_03776e6c(&stack0x000016a0,plVar41[4],0);
                fVar61 = (float)FUN_03776c9c(&stack0x000015c0,0);
                if (plVar41[4] == 0) goto LAB_03793c9c;
                fVar58 = *(float *)((long)plVar41 + 0x2c);
                fVar53 = (float)FUN_03776ea8(plVar41[4],0);
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                in_stack_00000180 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar44 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar50 = *(float *)(unaff_x19 + 0xf0);
                fVar64 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
                if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
                unaff_s11 = fVar57 * fVar44 * fVar50 * fVar64;
                fStack0000000000000170 = (fVar47 / (float)iVar14) * fVar48 * fStack0000000000000170;
                fVar57 = fStack0000000000000170 * (fVar49 / fVar61) * fVar58 * fVar53;
                fStack0000000000000170 = fStack0000000000000170 / fVar57;
                in_stack_00000180 = fStack0000000000000170 * in_stack_00000180;
                fVar47 = (float)FUN_037769c0(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
                fStack0000000000000170 = fStack0000000000000170 * fVar47;
              }
              else {
                if (*in_stack_00000160 == 0) goto LAB_03793c9c;
                iVar14 = FUN_03776950(*in_stack_00000160 + 0x48,0);
                if (*in_stack_00000160 == 0) goto LAB_03793c9c;
                fVar48 = (float)FUN_03776960(*in_stack_00000160 + 0x48,0);
                if (plVar41[4] == 0) goto LAB_03793c9c;
                fVar61 = *(float *)((long)plVar41 + 0x2c);
                fVar49 = in_stack_00000150;
                if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                  fVar49 = 1.0;
                }
                fVar58 = (float)FUN_03776ea8(plVar41[4],0);
                if (*in_stack_00000160 == 0) goto LAB_03793c9c;
                in_stack_00000180 = (float)FUN_03776980(*in_stack_00000160 + 0x48,0);
                if (*in_stack_00000160 == 0) goto LAB_03793c9c;
                fVar53 = (float)FUN_037769b0(*in_stack_00000160 + 0x48,0);
                if (*in_stack_00000160 == 0) goto LAB_03793c9c;
                fVar64 = *(float *)(unaff_x19 + 0xf0);
                fVar44 = (float)FUN_03776960(*in_stack_00000160 + 0x48,0);
                if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03793c9c;
                unaff_s11 = fVar57 * fVar53 * fVar64 * fVar44;
                fVar57 = (fVar47 / (float)iVar14) * fVar48 * fVar49 * fVar61 * fVar58;
                fStack0000000000000170 = (float)FUN_037769c0(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
              }
              *in_stack_000001a8 = (long)plVar41;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (in_stack_000001a8,plVar41);
              lVar43 = *in_stack_000001e8;
              if (lVar43 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar43 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
              lVar43 = lVar43 + (long)(int)*in_stack_000001d0 * unaff_x27;
              *(undefined1 *)(lVar43 + 0x28) = 2;
              *(float *)(lVar43 + 0x16c) = fVar57;
              *(long *)(lVar43 + 0x48) = *in_stack_00000160;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar43 = *in_stack_000001e8;
              if (lVar43 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar43 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
              *(long *)(lVar43 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x40) =
                   *in_stack_000001c8;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar43 = *in_stack_000001e8;
              if (lVar43 == 0) goto LAB_03793c9c;
              uVar13 = *in_stack_000001d0;
              if (*(uint *)(lVar43 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
              *(undefined4 *)(lVar43 + (long)(int)uVar13 * unaff_x27 + 0x60) =
                   *(undefined4 *)(unaff_x19 + 0x78);
              *(undefined4 *)(unaff_x19 + 0x78) = uVar45;
              in_stack_000001a0 = 0.0;
              goto LAB_0378db90;
            }
            lVar43 = *in_stack_000001e8;
            if (lVar43 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar43 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
            *in_stack_000001a8 =
                 *(long *)(lVar43 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x30);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001a8);
            if (*in_stack_000001a8 != 0) goto code_r0x0378d4bc;
            goto LAB_0378d260;
          }
LAB_03790fec:
          if ((((*(char *)(in_stack_000001e0 + 0xa8) != '\0') &&
               (DAT_00d389f8 < *(float *)(unaff_x19 + 0x1598) - *(float *)(unaff_x19 + 0x159c))) &&
              (fVar47 = *_fStack00000000000000d0, fVar47 < *(float *)(in_stack_000001e0 + 0xb0))) &&
             (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
            fVar48 = *(float *)(in_stack_000001e0 + 0x108);
            if (*(float *)(unaff_x19 + 0x1594) < fVar48 / 100.0) {
              *(undefined4 *)(unaff_x19 + 0x1594) = 0;
            }
            fVar57 = (*(float *)(unaff_x19 + 0x1598) - fVar47) * 0.5;
            if (fVar57 <= DAT_00d38b84) {
              fVar57 = DAT_00d38b84;
            }
            *(float *)(unaff_x19 + 0x159c) = fVar47;
            fVar47 = (fVar47 + fVar57) * 20.0 + 0.5;
            fVar57 = DAT_00d38e60;
            if (fVar47 != INFINITY) {
              fVar57 = (float)(int)fVar47 / 20.0;
            }
            if (fVar48 <= fVar57) {
              fVar57 = fVar48;
            }
            goto LAB_037910ac;
          }
          unaff_x24[0x30] = '\x01';
          if (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)) {
            uVar56 = FUN_0276793c(in_stack_00000070,0);
            uVar60 = FUN_0277fa90(_fStack00000000000000d0,0);
            uVar56 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar56,
                                  *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar60,0);
            if (*(int *)(*plVar41 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*plVar41);
            }
            FUN_0367a6ec(uVar56,0);
          }
          plVar17 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
          plVar41 = (long *)PTR_DAT_03cbded8;
          if ((*in_stack_000001d0 == 0) || ((*in_stack_000001d0 == 1 && (in_stack_0000169c == 3))))
          {
            FUN_0379e288(1,in_stack_000001c0,0);
            goto LAB_0378c81c;
          }
          lVar43 = *(long *)(in_stack_000001c0 + 0x58);
          if (lVar43 == 0) goto LAB_03793c9c;
          uVar13 = *(uint *)(unaff_x19 + 0x78);
          if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__ +
                      0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (*(uint *)(lVar43 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
          FUN_03785b74(lVar43 + (long)(int)uVar13 * 0x50 + 0x20,0,0);
          if (DAT_0411f172 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbded8);
            DAT_0411f172 = '\x01';
          }
          iVar15 = *(int *)(in_stack_000001e0 + 0x70);
          fStack0000000000000158 = **(float **)(*plVar41 + 0xb8);
          _in_stack_00000148 = *(undefined8 *)(*(float **)(*plVar41 + 0xb8) + 1);
          lVar43 = *(long *)(unaff_x19 + 0x50);
          uStack0000000000000118 = _in_stack_00000148;
          fStack0000000000000120 = fStack0000000000000158;
          if (iVar15 < 0x421) {
            if (iVar15 < 0x205) {
              if (iVar15 < 0x109) {
                if ((iVar15 - 0x101U < 8) && ((1 << (ulong)(iVar15 - 0x101U & 0x1f) & 0x8bU) != 0))
                {
LAB_0379144c:
                  if (lVar43 == 0) goto LAB_03793c9c;
                  if (*(uint *)(lVar43 + 0x18) < 2) goto thunk_FUN_01ab6c44;
                  uVar56 = *(undefined8 *)(lVar43 + 0x30);
                  if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                    lVar39 = *in_stack_00000050;
                    if (lVar39 == 0) goto LAB_03793c9c;
                    if (*(uint *)(lVar39 + 0x18) <= uStack000000000000005c) goto thunk_FUN_01ab6c44;
                    fVar47 = *(float *)(lVar39 + (long)(int)uStack000000000000005c * 0x14 + 0x28);
                  }
                  else {
                    fVar47 = *(float *)(unaff_x19 + 0x374);
                  }
                  fStack0000000000000120 = fStack0000000000000058 + 0.0 + *(float *)(lVar43 + 0x2c);
                  fStack0000000000000038 = (0.0 - fVar47) - fStack000000000000003c;
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
                if (lVar43 == 0) goto LAB_03793c9c;
                if ((*(int *)(lVar43 + 0x18) == 1) || (*(int *)(lVar43 + 0x18) == 0))
                goto thunk_FUN_01ab6c44;
                fStack0000000000000120 =
                     (*(float *)(lVar43 + 0x20) + *(float *)(lVar43 + 0x2c)) * 0.5;
                uVar56 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar43 + 0x24) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar43 + 0x30) >> 0x20)) * 0.5,
                                  ((float)*(undefined8 *)(lVar43 + 0x24) +
                                  (float)*(undefined8 *)(lVar43 + 0x30)) * 0.5);
                if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                  lVar43 = *in_stack_00000050;
                  if (lVar43 == 0) goto LAB_03793c9c;
                  if (uStack000000000000005c < *(uint *)(lVar43 + 0x18)) {
                    lVar43 = lVar43 + (long)(int)uStack000000000000005c * 0x14;
                    fStack0000000000000120 = fStack0000000000000058 + 0.0 + fStack0000000000000120;
                    fStack0000000000000038 =
                         ((fStack000000000000003c + *(float *)(lVar43 + 0x28) +
                          *(float *)(lVar43 + 0x30)) - fStack0000000000000038) * -0.5 + 0.0;
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
                if (lVar43 == 0) goto LAB_03793c9c;
                if (*(int *)(lVar43 + 0x18) == 0) goto thunk_FUN_01ab6c44;
                uVar56 = *(undefined8 *)(lVar43 + 0x24);
                if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                  lVar39 = *in_stack_00000050;
                  if (lVar39 == 0) goto LAB_03793c9c;
                  if (*(uint *)(lVar39 + 0x18) <= uStack000000000000005c) goto thunk_FUN_01ab6c44;
                  in_stack_00001698 =
                       *(float *)(lVar39 + (long)(int)uStack000000000000005c * 0x14 + 0x30);
                }
                fStack0000000000000120 = fStack0000000000000058 + 0.0 + *(float *)(lVar43 + 0x20);
                fStack0000000000000038 = fStack0000000000000038 + (0.0 - in_stack_00001698);
              }
LAB_037917ec:
              uStack0000000000000118 =
                   CONCAT44((float)((ulong)uVar56 >> 0x20) + 0.0,
                            (float)uVar56 + fStack0000000000000038);
            }
          }
          else if (iVar15 < 0x1005) {
            if (iVar15 < 0x809) {
              if ((iVar15 - 0x801U < 8) && ((1 << (ulong)(iVar15 - 0x801U & 0x1f) & 0x8bU) != 0)) {
LAB_037913b0:
                if (lVar43 == 0) goto LAB_03793c9c;
                if ((*(int *)(lVar43 + 0x18) != 1) && (*(int *)(lVar43 + 0x18) != 0)) {
                  uStack0000000000000118 =
                       CONCAT44(((float)((ulong)*(undefined8 *)(lVar43 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar43 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                ((float)*(undefined8 *)(lVar43 + 0x24) +
                                (float)*(undefined8 *)(lVar43 + 0x30)) * 0.5 + 0.0);
                  fStack0000000000000120 =
                       fStack0000000000000058 + 0.0 +
                       (*(float *)(lVar43 + 0x20) + *(float *)(lVar43 + 0x2c)) * 0.5;
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
                if (lVar43 == 0) goto LAB_03793c9c;
                if ((*(int *)(lVar43 + 0x18) != 1) && (*(int *)(lVar43 + 0x18) != 0)) {
                  uVar56 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar43 + 0x24) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(lVar43 + 0x30) >> 0x20)) * 0.5,
                                    ((float)*(undefined8 *)(lVar43 + 0x24) +
                                    (float)*(undefined8 *)(lVar43 + 0x30)) * 0.5);
                  fStack0000000000000120 =
                       fStack0000000000000058 + 0.0 +
                       (*(float *)(lVar43 + 0x20) + *(float *)(lVar43 + 0x2c)) * 0.5;
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
            if (lVar43 == 0) goto LAB_03793c9c;
            if ((*(int *)(lVar43 + 0x18) == 1) || (*(int *)(lVar43 + 0x18) == 0))
            goto thunk_FUN_01ab6c44;
            uStack0000000000000118 =
                 CONCAT44(((float)((ulong)*(undefined8 *)(lVar43 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar43 + 0x30) >> 0x20)) * 0.5 + 0.0,
                          ((float)*(undefined8 *)(lVar43 + 0x24) +
                          (float)*(undefined8 *)(lVar43 + 0x30)) * 0.5 +
                          (0.0 - ((*(float *)(unaff_x19 + 0x370) - fStack000000000000003c) -
                                 fStack0000000000000038) * 0.5));
            fStack0000000000000120 =
                 fStack0000000000000058 + 0.0 +
                 (*(float *)(lVar43 + 0x20) + *(float *)(lVar43 + 0x2c)) * 0.5;
          }
LAB_037917fc:
          uVar45 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
          FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
          if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                      0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)
                                Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__);
          }
          FUN_037a1df8(0);
          FUN_037a1fc8(&stack0x00001670,0x4000ffff,0);
          fVar47 = DAT_00d38d70;
          uVar13 = *in_stack_000001d0;
          if ((int)uVar13 < 1) {
            iVar15 = 0;
            iStack0000000000000138 = 0;
            goto LAB_03793a5c;
          }
          lVar43 = *in_stack_000001e8;
          if (lVar43 == 0) goto LAB_03793c9c;
          fStack0000000000000174 = 0.0;
          _bStack00000000000000d8 = 0.0;
          fStack00000000000000a8 = 0.0;
          plVar17 = (long *)(in_stack_000001c0 + 0x38);
          in_stack_000000e8._4_4_ = fStack0000000000000128;
          fStack00000000000000f0 = 0.0;
          in_stack_000000a0._4_4_ = 0.0;
          uVar29 = (ulong)&stack0x00001670 | 4;
          bVar8 = false;
          fVar48 = 0.0;
          fVar57 = 0.0;
          uVar18 = (ulong)&stack0x000009f0 | 4;
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
          uVar28 = 0;
          uVar23 = 1;
          goto LAB_0379194c;
        }
        if (((in_stack_0000169c & 0xfffffffe) == 10) && (*(int *)(in_stack_000001e0 + 0x74) == 6)) {
          fVar47 = 0.0;
          if ((0.0 < fVar61) && (fVar47 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
            fVar47 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
          }
          if (in_stack_00000108 <
              (*(float *)(unaff_x19 + 0x374) - (*(float *)(unaff_x19 + 0x33c) - fVar61)) + fVar47) {
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
            lVar43 = *(long *)(in_stack_000001c0 + 0x48);
            if (lVar43 != 0) {
              if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar43 + 0x18)) {
                lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                *(int *)(lVar43 + 0x2c) = *(int *)(lVar43 + 0x2c) + 1;
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
          uVar18 = FUN_026b97f8(in_stack_0000169c,0);
          if ((uVar18 & 1) != 0) goto LAB_0378f700;
        }
LAB_0378f760:
        if (in_stack_0000169c == 0xa0) {
          lVar43 = *(long *)(in_stack_000001c0 + 0x48);
          if (lVar43 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
          lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
          *(int *)(lVar43 + 0x20) = *(int *)(lVar43 + 0x20) + 1;
        }
LAB_0378f884:
        bVar8 = *(int *)(in_stack_000001e0 + 0x74) == 1;
        if (bVar8 && unaff_w23 == 1) {
          bVar8 = in_stack_0000169c == 0x2d;
        }
        if (bVar8) {
          if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
          fVar47 = *(float *)(unaff_x19 + 0xf4);
          iVar14 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
          if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
          fVar49 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
          lVar43 = *(long *)(unaff_x19 + 0x1a00);
          fVar48 = in_stack_00000150;
          if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
            fVar48 = 1.0;
          }
          if ((lVar43 == 0) || (*(long *)(lVar43 + 0x20) == 0)) goto LAB_03793c9c;
          fVar58 = *(float *)(unaff_x19 + 0xf0);
          fVar44 = *(float *)(lVar43 + 0x2c);
          fVar61 = (float)FUN_03776ea8(*(long *)(lVar43 + 0x20),0);
          fVar53 = *_iStack0000000000000138;
          fVar61 = fVar58 * (fVar47 / (float)iVar14) * fVar49 * fVar48 * fVar44 * fVar61;
          fVar47 = *_fStack0000000000000130;
          if ((in_stack_0000169c == 10) &&
             (*(int *)(unaff_x19 + 0x324) != *(int *)(unaff_x19 + 0x328))) {
            lVar43 = *in_stack_000001e8;
            if (lVar43 == 0) goto LAB_03793c9c;
            uVar23 = *(int *)(unaff_x19 + 0x324) - 1;
            if (*(uint *)(lVar43 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
            if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
            fVar48 = *(float *)(lVar43 + (long)(int)uVar23 * (long)iVar15 + 0x68);
            iVar14 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
            if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
            fVar58 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
            lVar43 = *(long *)(unaff_x19 + 0x1a00);
            fVar49 = in_stack_00000150;
            if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
              fVar49 = 1.0;
            }
            if ((lVar43 == 0) || (*(long *)(lVar43 + 0x20) == 0)) goto LAB_03793c9c;
            fVar44 = *(float *)(unaff_x19 + 0xf0);
            fVar64 = *(float *)(lVar43 + 0x2c);
            fVar61 = (float)FUN_03776ea8(*(long *)(lVar43 + 0x20),0);
            lVar43 = *(long *)(in_stack_000001c0 + 0x48);
            if (lVar43 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
            lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
            fVar53 = *(float *)(lVar43 + 100);
            fVar47 = *(float *)(lVar43 + 0x68);
            fVar61 = fVar44 * (fVar48 / (float)iVar14) * fVar58 * fVar49 * fVar64 * fVar61;
          }
          fVar49 = *(float *)(unaff_x19 + 0x2f4);
          fVar48 = 0.0;
          if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
            if ((*(long *)(unaff_x19 + 0x1a00) == 0) ||
               (lVar43 = *(long *)(*(long *)(unaff_x19 + 0x1a00) + 0x20), lVar43 == 0))
            goto LAB_03793c9c;
            FUN_03776e6c(&stack0x000016a0,lVar43,0);
            fVar48 = (float)FUN_03776cb4(&stack0x000015c0,0);
          }
          fVar58 = *(float *)(unaff_x19 + 0x35c);
          fVar47 = (fStack000000000000012c - fVar53) - fVar47;
          bVar8 = true;
          if ((fVar58 <= fVar47) && (bVar8 = false, !NAN(fVar58))) {
            bVar8 = fVar58 == -1.0;
          }
          if (!bVar8) {
            fVar47 = fVar58;
          }
          fVar58 = 1.0;
          if (uVar36 != 0) {
            fVar58 = DAT_00d38acc;
          }
          if (ABS(fVar49) + fVar61 * fVar48 * (1.0 - *(float *)(unaff_x19 + 0x1594)) <
              fVar58 * fVar47) {
            FUN_03796df8();
            memcpy(&stack0x000005c8,in_stack_00000068,0x398);
            FUN_020ab0d8(in_stack_00000078,&stack0x000005c8,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__);
          }
        }
        lVar43 = *in_stack_000001e8;
        if (lVar43 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar43 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
        uVar23 = *(uint *)(unaff_x19 + 0x340);
        lVar43 = lVar43 + (long)(int)*in_stack_000001d0 * unaff_x27;
        *(uint *)(lVar43 + 0x6c) = uVar23;
        *(undefined4 *)(lVar43 + 0x70) = *(undefined4 *)(unaff_x19 + 0x350);
        if (((unaff_w23 & 1) == 0) &&
           ((0xd < in_stack_0000169c || ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0x2c00U) == 0))))
        {
          lVar43 = *(long *)(in_stack_000001c0 + 0x48);
          if (lVar43 == 0) goto LAB_03793c9c;
LAB_0378fbcc:
          if (*(uint *)(lVar43 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
          *(undefined4 *)(lVar43 + (long)(int)uVar23 * 0x60 + 0x6c) =
               *(undefined4 *)(unaff_x19 + 0x158);
        }
        else {
          lVar43 = *(long *)(in_stack_000001c0 + 0x48);
          if (lVar43 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar43 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
          if (*(int *)(lVar43 + (long)(int)uVar23 * 0x60 + 0x24) == 1) goto LAB_0378fbcc;
        }
        if (in_stack_0000169c != 0x200b) {
          if (in_stack_0000169c == 9) {
            if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
            fVar47 = (float)FUN_03776a48(*in_stack_000001c8 + 0xb0,0);
            if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
            bVar11 = FUN_03779d4c(*in_stack_000001c8,0);
            fVar48 = *(float *)(unaff_x19 + 0x2f4);
            fVar49 = fVar57 * fVar47 * (float)bVar11;
            fVar47 = fVar49 * (float)(int)(fVar48 / fVar49);
            if (fVar47 <= fVar48) {
              fVar47 = fVar48 + fVar49;
            }
            *(float *)(unaff_x19 + 0x2f4) = fVar47;
          }
          else {
            fVar47 = *(float *)(unaff_x19 + 0x2f0);
            if (fVar47 == 0.0) {
              fVar48 = *(float *)(unaff_x19 + 0x2f4);
              if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
                fVar47 = (float)FUN_03776cb4(&stack0x000015f0,0);
                fVar61 = *(float *)(unaff_x19 + 0x19a8);
                fVar49 = (float)FUN_03778e7c(&stack0x000015e0,0);
                if (*(long *)(unaff_x19 + 0x68) != 0) {
                  fVar58 = (float)FUN_03779d0c(*(long *)(unaff_x19 + 0x68),0);
                  fVar48 = fVar48 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                    (*(float *)(unaff_x19 + 0x2ec) +
                                    fVar57 * (fVar47 * fVar61 + fVar49) +
                                    fStack0000000000000158 *
                                    (in_stack_00000148 + in_stack_00000188 + fVar58));
                  goto UnityEngine_UIElements_WheelEvent___ctor;
                }
                goto LAB_03793c9c;
              }
              fVar47 = (float)FUN_03778e7c(&stack0x000015e0,0);
              if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
              fVar49 = (float)FUN_03779d0c(*in_stack_000001c8,0);
              fVar48 = fVar48 - (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                (*(float *)(unaff_x19 + 0x2ec) +
                                fVar57 * fVar47 +
                                fStack0000000000000158 *
                                (in_stack_00000148 + in_stack_00000188 + fVar49));
              *(float *)(unaff_x19 + 0x2f4) = fVar48;
              if ((unaff_w25 == 0) && (in_stack_0000169c != 0x200b)) goto FUN_0378fd94;
              fVar48 = fVar48 - fStack0000000000000158 * *(float *)(in_stack_000001e0 + 0xc4);
            }
            else {
              if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
              fVar48 = *(float *)(unaff_x19 + 0x2f4);
              fVar49 = (float)FUN_03779d0c(*in_stack_000001c8,0);
              fVar48 = fVar48 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                (*(float *)(unaff_x19 + 0x2ec) +
                                (fVar47 - in_stack_000000e8._4_4_) +
                                fStack0000000000000158 * (in_stack_00000188 + fVar49));
UnityEngine_UIElements_WheelEvent___ctor:
              *(float *)(unaff_x19 + 0x2f4) = fVar48;
              if ((unaff_w25 == 0) && (in_stack_0000169c != 0x200b)) goto FUN_0378fd94;
              fVar48 = fVar48 + fStack0000000000000158 * *(float *)(in_stack_000001e0 + 0xc4);
            }
            *(float *)(unaff_x19 + 0x2f4) = fVar48;
          }
        }
FUN_0378fd94:
        lVar43 = *in_stack_000001e8;
        if (lVar43 == 0) goto LAB_03793c9c;
        uVar23 = *in_stack_000001d0;
        if (*(uint *)(lVar43 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
        *(undefined4 *)(lVar43 + (long)(int)uVar23 * unaff_x27 + 0x164) =
             *(undefined4 *)(unaff_x19 + 0x2f4);
        if (in_stack_0000169c == 0xd) {
          *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
        }
        if ((*(int *)(in_stack_000001e0 + 0x74) == 5) &&
           (((0xd < in_stack_0000169c || ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0x2c00U) == 0))
            && (1 < in_stack_0000169c - 0x2028)))) {
          lVar43 = *in_stack_00000050;
          if (lVar43 == 0) goto LAB_03793c9c;
          uVar36 = *(uint *)(unaff_x19 + 0x350);
          if (*(int *)(lVar43 + 0x18) < (int)(uVar36 + 1)) {
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                        + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_01ff3814(in_stack_00000050,uVar36 + 1,1,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_GetEnumerator__
                        );
            lVar43 = *in_stack_00000050;
            if (lVar43 == 0) goto LAB_03793c9c;
            uVar36 = *(uint *)(unaff_x19 + 0x350);
          }
          if (*(uint *)(lVar43 + 0x18) <= uVar36) goto thunk_FUN_01ab6c44;
          lVar39 = lVar43 + (long)(int)uVar36 * 0x14;
          *(undefined4 *)(lVar39 + 0x28) = *(undefined4 *)(unaff_x19 + 0x19c8);
          fVar47 = *(float *)(unaff_x19 + 0x378);
          if (*(float *)(lVar39 + 0x30) <= *(float *)(unaff_x19 + 0x378)) {
            fVar47 = *(float *)(lVar39 + 0x30);
          }
          *(float *)(lVar39 + 0x30) = fVar47;
          if (*(char *)(unaff_x19 + 0x37c) != '\0') {
            *(undefined1 *)(unaff_x19 + 0x37c) = 0;
            *(undefined4 *)(lVar43 + (long)(int)uVar36 * 0x14 + 0x20) =
                 *(undefined4 *)(unaff_x19 + 0x324);
          }
          uVar23 = *in_stack_000001d0;
          *(uint *)(lVar43 + (long)(int)uVar36 * 0x14 + 0x24) = uVar23;
        }
        if (((in_stack_0000169c < 0xc) && ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0xc08U) != 0))
           || ((in_stack_0000169c - 0x2028 < 2 ||
               (((unaff_w23 & in_stack_0000169c == 0x2d) != 0 || (uVar23 == uStack00000000000000dc))
               )))) {
          if (0.0 < *(float *)(unaff_x19 + 0x2e0)) {
            fVar47 = *(float *)(unaff_x19 + 0x338);
            fVar48 = *(float *)(unaff_x19 + 0x15ac);
            if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            fVar47 = fVar47 - fVar48;
            if (((fStack00000000000000a8 < ABS(fVar47)) && (*(char *)(unaff_x19 + 0x2e8) == '\0'))
               && (*(char *)(unaff_x19 + 0x37c) != '\x01')) {
              uVar45 = *(undefined4 *)(unaff_x19 + 0x328);
              uVar46 = *(undefined4 *)(unaff_x19 + 0x324);
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                          0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_037a5574(fVar47,uVar45,uVar46,in_stack_000001c0,0);
              *(float *)(unaff_x19 + 0x378) = *(float *)(unaff_x19 + 0x378) - fVar47;
              *(float *)(unaff_x19 + 0x2e0) = fVar47 + *(float *)(unaff_x19 + 0x2e0);
              plVar41 = (long *)PTR_DAT_03cbe438;
              if (*(int *)(unaff_x19 + 0xad8) == *(int *)(unaff_x19 + 0x340)) {
                FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
                memcpy(in_stack_00000068,&stack0x000016a0,0x398);
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (in_stack_00000020,0);
                *(float *)(unaff_x19 + 0xaf0) = fVar47 + *(float *)(unaff_x19 + 0xaf0);
                *(float *)(unaff_x19 + 0xb24) = fVar47 + *(float *)(unaff_x19 + 0xb24);
                memcpy(&stack0x00000230,in_stack_00000068,0x398);
                FUN_020ab0d8(in_stack_00000078,&stack0x00000230,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__);
              }
            }
          }
          fVar48 = *(float *)(unaff_x19 + 0x2e0);
          *(undefined1 *)(unaff_x19 + 0x37c) = 0;
          fVar49 = *(float *)(unaff_x19 + 0x33c) - fVar48;
          fVar47 = *(float *)(unaff_x19 + 0x378);
          if (fVar49 <= *(float *)(unaff_x19 + 0x378)) {
            fVar47 = fVar49;
          }
          *(float *)(unaff_x19 + 0x378) = fVar47;
          fVar61 = *(float *)(unaff_x19 + 0x338);
          if (in_stack_00001694 == '\0') {
            in_stack_00001698 = fVar47;
          }
          if ((*(char *)(in_stack_000001e0 + 0xe8) != '\0') &&
             ((*(int *)(in_stack_000001e0 + 0xd8) <= (int)*in_stack_000001d0 ||
              (*(int *)(in_stack_000001e0 + 0xe0) <= *(int *)(unaff_x19 + 0x340))))) {
            in_stack_00001694 = '\x01';
          }
          lVar43 = *(long *)(in_stack_000001c0 + 0x48);
          if (lVar43 == 0) goto LAB_03793c9c;
          uVar23 = *(uint *)(unaff_x19 + 0x340);
          if (*(uint *)(lVar43 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
          iVar14 = *(int *)(unaff_x19 + 0x328);
          lVar39 = lVar43 + (long)(int)uVar23 * 0x60;
          *(int *)(lVar39 + 0x38) = iVar14;
          uVar36 = *(uint *)(unaff_x19 + 0x328);
          if (iVar14 <= (int)*(uint *)(unaff_x19 + 0x330)) {
            uVar36 = *(uint *)(unaff_x19 + 0x330);
          }
          *(uint *)(unaff_x19 + 0x330) = uVar36;
          *(uint *)(lVar39 + 0x3c) = uVar36;
          iVar1 = *(int *)(unaff_x19 + 0x324);
          *(int *)(unaff_x19 + 0x32c) = iVar1;
          *(int *)(lVar39 + 0x40) = iVar1;
          iVar16 = *(int *)(unaff_x19 + 0x330);
          if ((int)uVar36 <= *(int *)(unaff_x19 + 0x334)) {
            iVar16 = *(int *)(unaff_x19 + 0x334);
          }
          *(int *)(unaff_x19 + 0x334) = iVar16;
          *(int *)(lVar39 + 0x44) = iVar16;
          *(int *)(lVar39 + 0x24) = (iVar1 - iVar14) + 1;
          *(undefined4 *)(lVar39 + 0x28) = *(undefined4 *)(unaff_x19 + 0x344);
          *(undefined4 *)(lVar39 + 0x30) = *(undefined4 *)(unaff_x19 + 0x348);
          lVar39 = *in_stack_000001e8;
          if (lVar39 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar39 + 0x18) <= uVar36) goto thunk_FUN_01ab6c44;
          uVar45 = *(undefined4 *)(lVar39 + (long)(int)uVar36 * (long)iVar15 + 0x124);
          lVar43 = lVar43 + (long)(int)uVar23 * 0x60;
          *(float *)(lVar43 + 0x74) = fVar49;
          *(undefined4 *)(lVar43 + 0x70) = uVar45;
          lVar43 = *(long *)(in_stack_000001c0 + 0x48);
          if (lVar43 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
          lVar39 = *in_stack_000001e8;
          if (lVar39 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar39 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto thunk_FUN_01ab6c44;
          uVar45 = *(undefined4 *)
                    (lVar39 + (long)(int)*(uint *)(unaff_x19 + 0x334) * unaff_x27 + 0x130);
          fVar61 = fVar61 - fVar48;
          lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
          *(float *)(lVar43 + 0x7c) = fVar61;
          *(undefined4 *)(lVar43 + 0x78) = uVar45;
          lVar43 = *(long *)(in_stack_000001c0 + 0x48);
          if (lVar43 == 0) goto LAB_03793c9c;
          uVar23 = *(uint *)(unaff_x19 + 0x340);
          if (*(uint *)(lVar43 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
          lVar39 = lVar43 + (long)(int)uVar23 * 0x60;
          *(float *)(lVar39 + 0x48) = *(float *)(lVar39 + 0x78) - fVar57 * in_stack_000001a0;
          *(float *)(lVar39 + 0x60) = fStack0000000000000174;
          if (*(int *)(lVar39 + 0x24) == 1) {
            *(undefined4 *)(lVar43 + (long)(int)uVar23 * 0x60 + 0x6c) =
                 *(undefined4 *)(unaff_x19 + 0x158);
          }
          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
          fVar47 = (float)FUN_03779d0c(*in_stack_000001c8,0);
          lVar43 = *in_stack_000001e8;
          if (lVar43 == 0) goto LAB_03793c9c;
          lVar39 = (long)(int)*(uint *)(unaff_x19 + 0x334);
          if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto thunk_FUN_01ab6c44;
          lVar31 = *(long *)(in_stack_000001c0 + 0x48);
          if (lVar31 == 0) goto LAB_03793c9c;
          uVar23 = *(uint *)(unaff_x19 + 0x340);
          if (((*(char *)(lVar43 + lVar39 * unaff_x27 + 0x1a0) == '\0') &&
              (lVar39 = (long)(int)*(uint *)(unaff_x19 + 0x32c),
              *(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x32c))) ||
             (uVar36 = (uint)*(undefined8 *)(lVar31 + 0x18), uVar36 <= uVar23))
          goto thunk_FUN_01ab6c44;
          fVar48 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                   (*(float *)(unaff_x19 + 0x2ec) +
                   fStack0000000000000158 * (in_stack_00000148 + in_stack_00000188 + fVar47));
          fVar47 = -fVar48;
          if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
            fVar47 = fVar48;
          }
          *(float *)(lVar31 + (long)(int)uVar23 * 0x60 + 0x5c) =
               *(float *)(lVar43 + lVar39 * unaff_x27 + 0x164) + fVar47;
          if (uVar36 <= uVar23) goto thunk_FUN_01ab6c44;
          lVar31 = lVar31 + (long)(int)uVar23 * 0x60;
          *(float *)(lVar31 + 0x54) = 0.0 - *(float *)(unaff_x19 + 0x2e0);
          *(float *)(lVar31 + 0x58) = fVar49;
          *(float *)(lVar31 + 0x4c) = in_stack_000000a0._4_4_ + (fVar61 - fVar49);
          *(float *)(lVar31 + 0x50) = fVar61;
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
                if (*(int *)(*(long *)
                              Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                            0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_037a56f4(iVar14,in_stack_000001c0,0);
                uVar13 = *in_stack_000001d0;
              }
              lVar43 = *in_stack_000001e8;
              if (lVar43 != 0) {
                if (uVar13 < *(uint *)(lVar43 + 0x18)) {
                  fVar47 = *(float *)(lVar43 + (long)(int)uVar13 * (long)iVar15 + 0x158);
                  if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
                    if ((in_stack_0000169c == 0x2029) || (fVar48 = 0.0, in_stack_0000169c == 10)) {
                      fVar48 = *(float *)(in_stack_000001e0 + 0xcc);
                    }
                    uVar21 = 0;
                    fVar48 = fVar47 + (0.0 - *(float *)(unaff_x19 + 0x33c)) +
                             fStack0000000000000088 *
                             (in_stack_00000080._4_4_ + *(float *)(unaff_x19 + 0x15b0)) +
                             fStack0000000000000158 * (*(float *)(in_stack_000001e0 + 200) + fVar48)
                             + *(float *)(unaff_x19 + 0x2e0);
                  }
                  else {
                    if ((in_stack_0000169c == 0x2029) || (fVar48 = 0.0, in_stack_0000169c == 10)) {
                      fVar48 = *(float *)(in_stack_000001e0 + 0xcc);
                    }
                    uVar21 = 1;
                    fVar48 = *(float *)(unaff_x19 + 0x2e0) +
                             *(float *)(unaff_x19 + 0x2e4) +
                             fStack0000000000000158 * (*(float *)(in_stack_000001e0 + 200) + fVar48)
                    ;
                  }
                  *(float *)(unaff_x19 + 0x2e0) = fVar48;
                  *(float *)(unaff_x19 + 0x15ac) = fVar47;
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
          lVar43 = *in_stack_000001e8;
          if (lVar43 == 0) goto LAB_03793c9c;
        }
LAB_03790574:
        uVar23 = *in_stack_000001d0;
        if (*(uint *)(lVar43 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
        if (*(char *)(lVar43 + (long)(int)uVar23 * unaff_x27 + 0x1a0) != '\0') {
          lVar43 = lVar43 + (long)(int)uVar23 * unaff_x27;
          uVar18 = *(ulong *)(unaff_x19 + 0x360);
          uVar29 = *(ulong *)(lVar43 + 0x124);
          *(ulong *)(unaff_x19 + 0x360) =
               uVar18 ^ (uVar18 ^ uVar29) &
                        ~CONCAT44(-(uint)((float)(uVar18 >> 0x20) < (float)(uVar29 >> 0x20)),
                                  -(uint)((float)uVar18 < (float)uVar29));
          uVar18 = *(ulong *)(unaff_x19 + 0x368);
          uVar29 = *(ulong *)(lVar43 + 0x130);
          *(ulong *)(unaff_x19 + 0x368) =
               uVar18 ^ (uVar18 ^ uVar29) &
                        ~CONCAT44(-(uint)((float)(uVar29 >> 0x20) < (float)(uVar18 >> 0x20)),
                                  -(uint)((float)uVar29 < (float)uVar18));
        }
        if ((iStack000000000000008c != 0) ||
           ((*(uint *)(in_stack_000001e0 + 0x74) < 7 &&
            ((1 << (ulong)(*(uint *)(in_stack_000001e0 + 0x74) & 0x1f) & 0x4aU) != 0)))) {
          if ((unaff_w25 == 0) &&
             (((in_stack_0000169c != 0x2d && (in_stack_0000169c != 0x200b)) &&
              (in_stack_0000169c != 0xad)))) {
            if (*(char *)(unaff_x19 + 0x37d) == '\0') {
LAB_03790684:
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                          0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar18 = FUN_037a5f20(in_stack_0000169c,0);
              if ((uVar18 & 1) == 0) {
LAB_037906cc:
                if (*(int *)(*(long *)
                              Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                            0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar18 = FUN_037a5f90(in_stack_0000169c,0);
                if ((uVar18 & 1) == 0) goto LAB_037907cc;
                if (in_stack_00000060 == 0) goto LAB_03793c9c;
              }
              else {
                if ((in_stack_00000060 == 0) ||
                   (lVar43 = FUN_037a8a5c(in_stack_00000060,0), lVar43 == 0)) goto LAB_03793c9c;
                if (*(char *)(lVar43 + 0x28) != '\0') goto LAB_037906cc;
              }
              lVar43 = FUN_037a8a5c(in_stack_00000060,0);
              if ((lVar43 == 0) || (lVar43 = FUN_037aad04(lVar43,0), lVar43 == 0))
              goto LAB_03793c9c;
              uVar45 = (undefined4)((ulong)in_stack_000016a0 >> 0x20);
              in_stack_000016a0 = CONCAT44(uVar45,in_stack_0000169c);
              uVar18 = FUN_021e4dc4(lVar43,&stack0x000016a0,*(undefined8 *)PTR_DAT_03ccd4e8);
              if ((int)*in_stack_000001d0 < (int)uStack00000000000000dc) {
                lVar43 = FUN_037a8a5c(in_stack_00000060,0);
                if (lVar43 == 0) goto LAB_03793c9c;
                lVar43 = FUN_037aaf28(lVar43,0);
                lVar39 = *in_stack_000001e8;
                if (lVar39 == 0) goto LAB_03793c9c;
                if (*(uint *)(lVar39 + 0x18) <= *in_stack_000001d0 + 1) goto thunk_FUN_01ab6c44;
                if (lVar43 == 0) goto LAB_03793c9c;
                in_stack_000016a0 =
                     CONCAT44(uVar45,(uint)*(ushort *)
                                            (lVar39 + (long)(int)(*in_stack_000001d0 + 1) *
                                                      (long)iVar15 + 0x20));
                uVar29 = FUN_021e4dc4(lVar43,&stack0x000016a0,*(undefined8 *)PTR_DAT_03ccd4e8);
                if ((uVar18 & 1) != 0) goto LAB_037909e8;
                if ((uVar29 & 1) == 0) goto LAB_03790cd4;
                if ((bStack00000000000000d8 & 1) == 0) goto LAB_03790854;
              }
              else {
                if ((uVar18 & 1) == 0) {
LAB_03790cd4:
                  FUN_03796df8();
                  bStack00000000000000d8 = 0;
                  goto LAB_03790864;
                }
LAB_037909e8:
                if (uVar13 != uVar28 || ((bStack00000000000000d8 ^ 0xff) & 1) != 0)
                goto LAB_03790864;
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
      }
    }
  }
  goto LAB_03793c9c;
code_r0x0378d4bc:
  lVar43 = *in_stack_000001e8;
  if (lVar43 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar43 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
  *in_stack_000001c8 = *(long *)(lVar43 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x40);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001c8);
  lVar43 = *in_stack_000001e8;
  if (lVar43 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar43 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
  *in_stack_00000190 = *(long *)(lVar43 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x58);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar43 = *in_stack_000001e8;
  if (lVar43 == 0) goto LAB_03793c9c;
  uVar28 = *in_stack_000001d0;
  uVar13 = *(uint *)(lVar43 + 0x18);
  if (uVar13 <= uVar28) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar43 + (long)(int)uVar28 * unaff_x27 + 0x60)
  ;
  if (unaff_w23 != 0) {
    lVar39 = *(long *)(unaff_x19 + 0x20);
    if (lVar39 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar39 + 0x18) <= in_stack_0000160c) goto thunk_FUN_01ab6c44;
    if ((*(int *)(lVar39 + (long)(int)in_stack_0000160c * 0x10 + 0x24) == 10) &&
       (uVar28 != *(uint *)(unaff_x19 + 0x328))) {
      if (uVar13 <= uVar28 - 1) goto thunk_FUN_01ab6c44;
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      fVar47 = *(float *)(lVar43 + (long)(int)(uVar28 - 1) * (long)iVar15 + 0x68);
      iVar14 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
      lVar43 = *in_stack_000001c8;
      goto joined_r0x0378f81c;
    }
  }
  if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
  fVar47 = *(float *)(unaff_x19 + 0xf4);
  iVar14 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
  lVar43 = *(long *)(unaff_x19 + 0x68);
joined_r0x0378f81c:
  if (lVar43 == 0) goto LAB_03793c9c;
  fVar49 = (float)FUN_03776960(lVar43 + 0xb0,0);
  fVar48 = in_stack_00000150;
  if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
    fVar48 = 1.0;
  }
  fStack0000000000000170 = 0.0;
  in_stack_00000180 = 0.0;
  if ((unaff_w23 & in_stack_0000169c == 0x2026) == 0) {
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    in_stack_00000180 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fStack0000000000000170 = (float)FUN_037769c0(*in_stack_000001c8 + 0xb0,0);
  }
  lVar43 = *(long *)(unaff_x19 + 0x1588);
  if ((lVar43 == 0) || (*(long *)(lVar43 + 0x20) == 0)) goto LAB_03793c9c;
  fVar61 = *(float *)(unaff_x19 + 0xf0);
  fVar58 = *(float *)(lVar43 + 0x2c);
  fVar57 = (float)FUN_03776ea8(*(long *)(lVar43 + 0x20),0);
  if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
  fVar53 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
  if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
  fVar64 = *(float *)(unaff_x19 + 0xf0);
  fVar44 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
  lVar43 = *in_stack_000001e8;
  if (lVar43 == 0) goto LAB_03793c9c;
  uVar13 = *(uint *)(unaff_x19 + 0x324);
  if (*(uint *)(lVar43 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
  lVar39 = lVar43 + (long)(int)uVar13 * unaff_x27;
  fVar48 = ((fStack000000000000017c * fVar47) / (float)iVar14) * fVar49 * fVar48;
  fVar57 = fVar48 * fVar61 * fVar58 * fVar57;
  *(undefined1 *)(lVar39 + 0x28) = 1;
  *(float *)(lVar39 + 0x16c) = fVar57;
  in_stack_000001a0 = *(float *)(unaff_x19 + 0xd8);
  unaff_s11 = fVar48 * fVar53 * fVar64 * fVar44;
LAB_0378db90:
  unaff_s13 = fVar57;
  if (in_stack_0000169c == 3 || in_stack_0000169c == 0xad) {
    unaff_s13 = 0.0;
  }
LAB_0378dba8:
  if (*(uint *)(lVar43 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
  lVar43 = lVar43 + (long)(int)uVar13 * (long)iVar15;
  *(short *)(lVar43 + 0x20) = (short)in_stack_0000169c;
  *(undefined4 *)(lVar43 + 0x68) = *(undefined4 *)(unaff_x19 + 0xf4);
  *(undefined4 *)(lVar43 + 0x170) = *(undefined4 *)(unaff_x19 + 0x1ac);
  lVar43 = *in_stack_000001e8;
  if (lVar43 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x174) =
       *(undefined4 *)(unaff_x19 + 0x1b0);
  lVar43 = *in_stack_000001e8;
  if (lVar43 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x17c) =
       *(undefined4 *)(unaff_x19 + 0x1b4);
  lVar43 = *in_stack_000001e8;
  if (lVar43 == 0) goto LAB_03793c9c;
  uVar56 = in_stack_00000100[1];
  in_stack_000016a0 = *in_stack_00000100;
  if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
  *(undefined4 *)(lVar43 + 0x198) = *(undefined4 *)(in_stack_00000100 + 2);
  *(undefined8 *)(lVar43 + 400) = uVar56;
  *(undefined8 *)(lVar43 + 0x188) = in_stack_000016a0;
  lVar43 = *in_stack_000001e8;
  if (lVar43 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar43 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
  lVar43 = lVar43 + (long)(int)*in_stack_000001d0 * unaff_x27;
  lVar39 = *(long *)(lVar43 + 0x38);
  *(undefined4 *)(lVar43 + 0x19c) = *(undefined4 *)(unaff_x19 + 0x124);
  if ((lVar39 == 0) &&
     ((*in_stack_000001a8 == 0 || (lVar39 = *(long *)(*in_stack_000001a8 + 0x20), lVar39 == 0))))
  goto LAB_03793c9c;
  FUN_03776e6c(&stack0x000016a0,lVar39,0);
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
  uVar45 = 0;
  in_stack_00000188 = *(float *)(in_stack_000001e0 + 0xc0);
  if (*(char *)(in_stack_000001e0 + 0xb4) != '\0') {
    if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
    uVar13 = *in_stack_000001d0;
    uVar28 = *(uint *)(*in_stack_000001a8 + 0x28);
    if ((int)uVar13 < (int)uStack00000000000000dc) {
      lVar43 = *in_stack_000001e8;
      if (lVar43 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar43 + 0x18) <= uVar13 + 1) goto thunk_FUN_01ab6c44;
      lVar43 = *(long *)(lVar43 + (long)(int)(uVar13 + 1) * (long)iVar15 + 0x30);
      if ((((lVar43 == 0) || (*in_stack_000001c8 == 0)) ||
          (lVar39 = *(long *)(*in_stack_000001c8 + 0x170), lVar39 == 0)) ||
         (lVar39 = *(long *)(lVar39 + 0x40), lVar39 == 0)) goto LAB_03793c9c;
      in_stack_000016a0 =
           CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),uVar28 | *(int *)(lVar43 + 0x28) << 0x10
                   );
      uVar18 = FUN_0219f8b8(lVar39,&stack0x000016a0,&stack0x00001590,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                           );
      if ((uVar18 & 1) != 0) {
        FUN_037791c8(&stack0x000016a0,&stack0x00001590,0);
        uVar45 = UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent
                           (&stack0x00001570,0);
        uVar18 = FUN_037791f0(&stack0x00001590,0);
        if ((uVar18 & 0x100) != 0) {
          in_stack_00000188 = 0.0;
        }
      }
      uVar13 = *in_stack_000001d0;
    }
    if (0 < (int)uVar13) {
      lVar43 = *in_stack_000001e8;
      if (lVar43 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar43 + 0x18) <= uVar13 - 1) goto thunk_FUN_01ab6c44;
      lVar43 = *(long *)(lVar43 + (ulong)(uVar13 - 1) * (unaff_x27 & 0xffffffff) + 0x30);
      if (((lVar43 == 0) || (*in_stack_000001c8 == 0)) ||
         ((lVar39 = *(long *)(*in_stack_000001c8 + 0x170), lVar39 == 0 ||
          (lVar39 = *(long *)(lVar39 + 0x40), lVar39 == 0)))) goto LAB_03793c9c;
      in_stack_000016a0 =
           CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),
                    *(uint *)(lVar43 + 0x28) | uVar28 << 0x10);
      uVar18 = FUN_0219f8b8(lVar39,&stack0x000016a0,&stack0x00001590,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                           );
      if ((uVar18 & 1) != 0) {
        FUN_037791dc(&stack0x000016a0,&stack0x00001590,0);
        UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent(&stack0x00001570,0);
        FUN_03778e8c(uVar45,0);
        uVar18 = FUN_037791f0(&stack0x00001590,0);
        if ((uVar18 & 0x100) != 0) {
          in_stack_00000188 = 0.0;
        }
      }
    }
  }
  lVar43 = *in_stack_000001e8;
  if (lVar43 == 0) goto LAB_03793c9c;
  uVar13 = *in_stack_000001d0;
  uVar45 = FUN_03778e7c(&stack0x000015e0,0);
  if (*(uint *)(lVar43 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar43 + (long)(int)uVar13 * unaff_x27 + 0x160) = uVar45;
  if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0)
      == 0) {
    thunk_FUN_01a58e78();
  }
  uVar18 = FUN_037a5c04(in_stack_0000169c,0);
  uVar13 = *in_stack_000001d0;
  unaff_x22 = uVar18 & 0xffffffff;
  if ((uVar18 & 1) == 0) {
    if ((uVar18 & 1) == 0 && 0 < (int)uVar13) {
      uVar28 = *(uint *)(unaff_x19 + 0x19c4);
      if ((uVar28 == 0x80000000) || (uVar28 != uVar13 - 1)) {
        do {
          uVar28 = uVar13 - 1;
          uVar45 = (undefined4)((ulong)in_stack_000016a0 >> 0x20);
          if (((int)uVar13 < 1) || (uVar28 == *(uint *)(unaff_x19 + 0x19c4))) {
            uVar13 = *(uint *)(unaff_x19 + 0x19c4);
            if (uVar13 == 0x80000000) goto LAB_0378dfc4;
            lVar43 = *in_stack_000001e8;
            if (lVar43 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar43 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
            lVar43 = *(long *)(lVar43 + (long)(int)uVar13 * unaff_x27 + 0x30);
            if ((lVar43 == 0) || (lVar43 = FUN_03787a68(lVar43,0), lVar43 == 0)) goto LAB_03793c9c;
            uVar13 = FUN_03776e5c(lVar43,0);
            if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
            iVar15 = FUN_0377acf0(*in_stack_000001a8,0);
            if (((*in_stack_000001c8 == 0) ||
                (lVar43 = FUN_03779cb4(*in_stack_000001c8,0), lVar43 == 0)) ||
               (*(long *)(lVar43 + 0x48) == 0)) goto LAB_03793c9c;
            in_stack_000016a0 = CONCAT44(uVar45,uVar13 | iVar15 << 0x10);
            uVar18 = FUN_0219f8b8(*(long *)(lVar43 + 0x48),&stack0x000016a0,&stack0x00001518,
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__)
            ;
            if ((uVar18 & 1) == 0) goto LAB_0378dfc4;
            lVar43 = *in_stack_000001e8;
            if (lVar43 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto thunk_FUN_01ab6c44;
            fVar47 = *(float *)(lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27 +
                               0x148);
            fVar61 = *(float *)(unaff_x19 + 0x2f4);
            FUN_037793b0(&stack0x00001518,0);
            fVar48 = (float)FUN_03779388(&stack0x00001550,0);
            FUN_037793c0(&stack0x00001518,0);
            fVar49 = (float)FUN_03779398(&stack0x00001548,0);
            FUN_03778e64(((fVar47 - fVar61) / unaff_s13 + fVar48) - fVar49,&stack0x000015e0,0);
            FUN_037793b0(&stack0x00001518,0);
            fVar47 = (float)FUN_03779390(&stack0x00001550,0);
            puVar19 = &stack0x00001518;
            goto LAB_0378f5a8;
          }
          lVar43 = *in_stack_000001e8;
          if (lVar43 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar43 + 0x18) <= uVar28) goto thunk_FUN_01ab6c44;
          lVar43 = *(long *)(lVar43 + (ulong)uVar28 * (unaff_x27 & 0xffffffff) + 0x30);
          if ((lVar43 == 0) || (lVar43 = FUN_03787a68(lVar43,0), lVar43 == 0)) goto LAB_03793c9c;
          uVar13 = FUN_03776e5c(lVar43,0);
          if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
          iVar15 = FUN_0377acf0(*in_stack_000001a8,0);
          if (((*in_stack_000001c8 == 0) ||
              (lVar43 = FUN_03779cb4(*in_stack_000001c8,0), lVar43 == 0)) ||
             (*(long *)(lVar43 + 0x50) == 0)) goto LAB_03793c9c;
          in_stack_000016a0 = CONCAT44(uVar45,uVar13 | iVar15 << 0x10);
          uVar18 = FUN_0219f8b8(*(long *)(lVar43 + 0x50),&stack0x000016a0,&stack0x00001530,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<int,_Task>__ctor__);
          uVar13 = uVar28;
        } while ((uVar18 & 1) == 0);
        lVar43 = *in_stack_000001e8;
        if (lVar43 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar43 + 0x18) <= uVar28) goto thunk_FUN_01ab6c44;
        fVar61 = *(float *)(unaff_x19 + 0x2e0);
        fVar58 = *(float *)(unaff_x19 + 0x180);
        lVar43 = lVar43 + uVar28 * unaff_x27;
        fVar47 = *(float *)(unaff_x19 + 0x2f4);
        fVar53 = *(float *)(lVar43 + 0x148);
        fVar44 = *(float *)(lVar43 + 0x150);
        FUN_037793d0(&stack0x00001530,0);
        fVar48 = (float)FUN_03779388(&stack0x00001550,0);
        FUN_037793e0(&stack0x00001530,0);
        fVar49 = (float)FUN_03779398(&stack0x00001548,0);
        FUN_03778e64(((fVar53 - fVar47) / unaff_s13 + fVar48) - fVar49,&stack0x000015e0,0);
        FUN_037793d0(&stack0x00001530,0);
        fVar47 = (float)FUN_03779390(&stack0x00001550,0);
        FUN_037793e0(&stack0x00001530,0);
        fVar48 = (float)FUN_037793a0(&stack0x00001548,0);
        FUN_03778e74(((fVar44 - ((unaff_s11 - fVar61) + fVar58)) / unaff_s13 + fVar47) - fVar48,
                     &stack0x000015e0,0);
        in_stack_00000188 = 0.0;
      }
      else {
        lVar43 = *in_stack_000001e8;
        if (lVar43 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar43 + 0x18) <= uVar28) goto thunk_FUN_01ab6c44;
        lVar43 = *(long *)(lVar43 + (long)(int)uVar28 * unaff_x27 + 0x30);
        if ((lVar43 == 0) || (lVar43 = FUN_03787a68(lVar43,0), lVar43 == 0)) goto LAB_03793c9c;
        uVar13 = FUN_03776e5c(lVar43,0);
        if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
        iVar15 = FUN_0377acf0(*in_stack_000001a8,0);
        if (((*in_stack_000001c8 == 0) || (lVar43 = FUN_03779cb4(*in_stack_000001c8,0), lVar43 == 0)
            ) || (*(long *)(lVar43 + 0x48) == 0)) goto LAB_03793c9c;
        in_stack_000016a0 =
             CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),uVar13 | iVar15 << 0x10);
        uVar18 = FUN_0219f8b8(*(long *)(lVar43 + 0x48),&stack0x000016a0,&stack0x00001558,
                              *(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__);
        if ((uVar18 & 1) != 0) {
          lVar43 = *in_stack_000001e8;
          if (lVar43 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto thunk_FUN_01ab6c44;
          fVar47 = *(float *)(lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27 + 0x148)
          ;
          fVar61 = *(float *)(unaff_x19 + 0x2f4);
          FUN_037793b0(&stack0x00001558,0);
          fVar48 = (float)FUN_03779388(&stack0x00001550,0);
          FUN_037793c0(&stack0x00001558,0);
          fVar49 = (float)FUN_03779398(&stack0x00001548,0);
          FUN_03778e64(((fVar47 - fVar61) / unaff_s13 + fVar48) - fVar49,&stack0x000015e0,0);
          FUN_037793b0(&stack0x00001558,0);
          fVar47 = (float)FUN_03779390(&stack0x00001550,0);
          puVar19 = &stack0x00001558;
LAB_0378f5a8:
          FUN_037793c0(puVar19,0);
          fVar48 = (float)FUN_037793a0(&stack0x00001548,0);
          FUN_03778e74(fVar47 - fVar48,&stack0x000015e0,0);
          in_stack_00000188 = 0.0;
        }
      }
    }
  }
  else {
    *(uint *)(unaff_x19 + 0x19c4) = uVar13;
  }
LAB_0378dfc4:
  uVar45 = FUN_03778e6c(&stack0x000015e0,0);
  uVar46 = FUN_03778e6c(&stack0x000015e0,0);
  if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
    fVar48 = *(float *)(unaff_x19 + 0x2f4);
    fVar47 = (float)FUN_03776cb4(&stack0x000015f0,0);
    fVar48 = fVar48 - unaff_s13 * fVar47 * (1.0 - *(float *)(unaff_x19 + 0x1594));
    *(float *)(unaff_x19 + 0x2f4) = fVar48;
    if ((unaff_w25 != 0) || (in_stack_0000169c == 0x200b)) {
      *(float *)(unaff_x19 + 0x2f4) =
           fVar48 - fStack0000000000000158 * *(float *)(in_stack_000001e0 + 0xc4);
    }
  }
  fVar47 = *(float *)(unaff_x19 + 0x2f0);
  if (fVar47 == 0.0) {
    in_stack_000000e8._4_4_ = 0.0;
  }
  else {
    fVar48 = (float)FUN_03776c94(&stack0x000015f0,0);
    fVar49 = (float)FUN_03776ca4(&stack0x000015f0,0);
    in_stack_000000e8._4_4_ =
         (1.0 - *(float *)(unaff_x19 + 0x1594)) *
         (fVar47 * 0.5 - unaff_s13 * (fVar48 * 0.5 + fVar49));
    *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2f4) + in_stack_000000e8._4_4_;
  }
  uVar13 = 0;
  if ((bVar11 == 0) && (*unaff_x24 == '\x01')) {
    uVar13 = *(uint *)(unaff_x19 + 0x124) & 1;
  }
  lVar43 = *in_stack_00000190;
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar18 = FUN_036cee6c(lVar43,0,0);
  unaff_x21 = (long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__;
  _fStack0000000000000168 = CONCAT44(uVar45,uVar46);
  unaff_x26 = in_stack_000001c8;
  unaff_x29 = in_stack_000001d0;
  fStack000000000000015c = fVar57;
  if (uVar13 != 0) {
    fVar48 = 0.0;
    plVar41 = (long *)PTR_DAT_03cbe438;
    if ((uVar18 & 1) != 0) {
      lVar43 = *in_stack_00000190;
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar43 == 0) goto LAB_03793c9c;
      uVar18 = FUN_03699d3c(lVar43,*(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0x6c),0);
      plVar41 = (long *)PTR_DAT_03cbe438;
      if ((uVar18 & 1) != 0) {
        lVar43 = *in_stack_00000190;
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar43 == 0) goto LAB_03793c9c;
        fVar47 = (float)FUN_0369e060(lVar43,*(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0x6c),0);
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar57 = (float)FUN_03779d1c(*in_stack_000001c8,0);
        plVar41 = (long *)PTR_DAT_03cbe438;
        if (*in_stack_00000190 == 0) goto LAB_03793c9c;
        fVar48 = (float)FUN_0369e060(*in_stack_00000190,
                                     *(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe4),0);
        fVar48 = fVar47 * fVar57 * 0.25 * fVar48;
        if (fVar47 < in_stack_000001a0 + fVar48) {
          in_stack_000001a0 = fVar47 - fVar48;
        }
      }
    }
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    in_stack_00000148 = (float)FUN_03779d2c(*in_stack_000001c8,0);
    fVar57 = unaff_s13;
    goto LAB_0378e344;
  }
  in_stack_00000148 = 0.0;
  if ((uVar18 & 1) == 0) {
LAB_0378e338:
    fVar48 = 0.0;
    plVar41 = (long *)PTR_DAT_03cbe438;
    fVar57 = unaff_s13;
    goto LAB_0378e344;
  }
  unaff_x28 = *in_stack_00000190;
  if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ + 0xe0)
      == 0) {
    thunk_FUN_01a58e78();
  }
  if (unaff_x28 == 0) goto LAB_03793c9c;
  goto code_r0x0378e24c;
LAB_0379194c:
  do {
    uVar13 = uVar23 - 1;
    if (*(uint *)(lVar43 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
    lVar42 = (long)(int)uVar13;
    lVar39 = lVar43 + lVar42 * 0x188;
    lVar31 = *(long *)(lVar39 + 0x40);
    uVar2 = *(ushort *)(lVar39 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    bVar11 = FUN_026b63d8(uVar2,0);
    if (*(uint *)(lVar43 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
    lVar39 = *(long *)(in_stack_000001c0 + 0x48);
    uVar36 = (uint)uVar2;
    if (lVar39 == 0) goto LAB_03793c9c;
    uVar24 = *(uint *)(lVar43 + lVar42 * 0x188 + 0x6c);
    if (*(uint *)(lVar39 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
    lVar32 = (long)(int)uVar24;
    lVar39 = lVar39 + lVar32 * 0x60;
    uVar4 = *(uint *)(lVar39 + 0x40);
    uVar40 = *(uint *)(lVar39 + 0x6c);
    iVar16 = *(int *)(lVar39 + 0x20);
    iVar15 = *(int *)(lVar39 + 0x28);
    iVar14 = *(int *)(lVar39 + 0x2c);
    uVar5 = *(uint *)(lVar39 + 0x44);
    lVar33 = (long)(int)uVar5;
    fVar53 = *(float *)(lVar39 + 0x50);
    fVar64 = *(float *)(lVar39 + 0x58);
    fVar49 = *(float *)(lVar39 + 0x5c);
    fVar61 = *(float *)(lVar39 + 0x60);
    fVar59 = *(float *)(lVar39 + 100);
    fVar50 = *(float *)(lVar39 + 0x70);
    fVar55 = *(float *)(lVar39 + 0x74);
    fVar58 = *(float *)(lVar39 + 0x78);
    fVar44 = *(float *)(lVar39 + 0x7c);
    if ((int)uVar40 < 0x421) {
      if ((int)uVar40 < 0x209) {
        if ((int)uVar40 < 0x111) {
          switch(uVar40) {
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
            if (uVar40 == 0x110) goto switchD_03791aa4_caseD_1008;
          }
        }
        else {
          switch(uVar40) {
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
            if (uVar40 == 0x120) goto LAB_03791c08;
          }
        }
      }
      else if ((int)uVar40 < 0x405) {
        if ((int)uVar40 < 0x401) {
          if (uVar40 == 0x210) goto switchD_03791aa4_caseD_1008;
          if (uVar40 == 0x220) goto LAB_03791c08;
        }
        else {
          if (uVar40 == 0x401) goto switchD_03791aa4_caseD_1001;
          if (uVar40 == 0x402) goto switchD_03791aa4_caseD_1002;
          if (uVar40 == 0x404) goto switchD_03791aa4_caseD_1004;
        }
      }
      else {
        if ((uVar40 == 0x408) || (uVar40 == 0x410)) goto switchD_03791aa4_caseD_1008;
        if (uVar40 == 0x420) goto LAB_03791c08;
      }
      goto switchD_03791aa4_caseD_1003;
    }
    if (0x1008 < (int)uVar40) {
      if ((int)uVar40 < 0x2005) {
        if (0x2000 < (int)uVar40) {
          if (uVar40 == 0x2001) goto switchD_03791aa4_caseD_1001;
          if (uVar40 == 0x2002) goto switchD_03791aa4_caseD_1002;
          if (uVar40 == 0x2004) goto switchD_03791aa4_caseD_1004;
          goto switchD_03791aa4_caseD_1003;
        }
        if (uVar40 != 0x1010) {
          uVar25 = 0x1020;
          goto LAB_03791bc8;
        }
      }
      else if ((uVar40 != 0x2008) && (uVar40 != 0x2010)) {
        uVar25 = 0x2020;
LAB_03791bc8:
        if (uVar40 != uVar25) goto switchD_03791aa4_caseD_1003;
LAB_03791c08:
        fVar49 = fVar50 + fVar58;
        goto LAB_03791c1c;
      }
      goto switchD_03791aa4_caseD_1008;
    }
    if ((int)uVar40 < 0x811) {
      switch(uVar40) {
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
          if (uVar36 < 0xad) {
            if ((uVar36 != 3) && (uVar36 != 10)) goto FUN_03791eb4;
          }
          else if ((uVar36 != 0xad) && ((uVar36 != 0x200b && (uVar36 != 0x2060)))) {
FUN_03791eb4:
            if (*(uint *)(lVar43 + 0x18) <= uVar4) goto thunk_FUN_01ab6c44;
            uVar3 = *(undefined2 *)(lVar43 + (long)(int)uVar4 * 0x188 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              plVar41 = (long *)PTR_DAT_03cbded8;
            }
            uVar20 = FUN_026b8cc4(uVar3,0);
            if ((uVar20 & 1) == 0) {
              bVar10 = (int)uVar24 < *(int *)(unaff_x19 + 0x340);
            }
            else {
              bVar10 = false;
            }
            if ((fVar49 <= fVar61) && (!bVar10 && (uVar40 >> 4 & 1) == 0)) {
              fStack0000000000000158 = fVar59;
              if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
                fStack0000000000000158 = fVar61 + fVar59;
              }
              goto LAB_03791c20;
            }
            if ((uVar23 == 1) || (uVar24 != uVar28)) {
              cVar22 = *(char *)(in_stack_000001e0 + 0xb6);
            }
            else {
              cVar22 = *(char *)(in_stack_000001e0 + 0xb6);
              if (uVar13 != *(uint *)(in_stack_000001e0 + 0xe4)) {
                iVar14 = (iVar14 - iVar16) - (uStack0000000000000090 & 1);
                fVar59 = -fVar49;
                if (cVar22 != '\0') {
                  fVar59 = fVar49;
                }
                if (iVar14 < 1) {
                  fVar49 = 1.0;
                }
                else {
                  fVar49 = *(float *)(in_stack_000001e0 + 0x7c);
                }
                if (iVar14 < 2) {
                  iVar14 = 1;
                }
                fVar61 = fVar61 + fVar59;
                if (uVar36 == 9) {
LAB_037939d0:
                  if (cVar22 != '\0') {
                    fVar61 = fVar61 * (1.0 - fVar49);
                    fVar59 = (float)iVar14;
LAB_03793a0c:
                    fStack0000000000000158 = fStack0000000000000158 - fVar61 / fVar59;
                    break;
                  }
                  fVar59 = (float)iVar14;
                  fVar61 = fVar61 * (1.0 - fVar49);
                }
                else {
                  if (uVar36 != 0xa0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar20 = FUN_026b97f8(uVar36,0);
                    cVar22 = *(char *)(in_stack_000001e0 + 0xb6);
                    if ((uVar20 & 1) != 0) goto LAB_037939d0;
                  }
                  fVar61 = fVar61 * fVar49;
                  fVar59 = (float)(int)((iVar16 - (~uStack0000000000000090 & 1)) + iVar15);
                  if (cVar22 != '\0') goto LAB_03793a0c;
                }
                fStack0000000000000158 = fStack0000000000000158 + fVar61 / fVar59;
                _in_stack_00000148 =
                     CONCAT44((float)((ulong)_in_stack_00000148 >> 0x20) + 0.0,
                              (float)_in_stack_00000148 + 0.0);
                break;
              }
            }
            fStack0000000000000158 = fVar59;
            if (cVar22 != '\0') {
              fStack0000000000000158 = fVar61 + fVar59;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000090 = FUN_026b97f8(uVar36,0);
            _in_stack_00000148 = 0;
          }
        }
        break;
      default:
        if (uVar40 == 0x810) goto switchD_03791aa4_caseD_1008;
      }
    }
    else {
      switch(uVar40) {
      case 0x1001:
switchD_03791aa4_caseD_1001:
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          fStack0000000000000158 = fVar59 + 0.0;
        }
        else {
          fStack0000000000000158 = 0.0 - fVar49;
        }
        break;
      case 0x1002:
switchD_03791aa4_caseD_1002:
LAB_03791c1c:
        fStack0000000000000158 = (fVar59 + fVar61 * 0.5) - fVar49 * 0.5;
        break;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        goto switchD_03791aa4_caseD_1003;
      case 0x1004:
switchD_03791aa4_caseD_1004:
        fStack0000000000000158 = (fVar61 + fVar59) - fVar49;
        if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
          fStack0000000000000158 = fVar61 + fVar59;
        }
        break;
      case 0x1008:
        goto switchD_03791aa4_caseD_1008;
      default:
        if (uVar40 == 0x820) goto LAB_03791c08;
        goto switchD_03791aa4_caseD_1003;
      }
LAB_03791c20:
      _in_stack_00000148 = 0;
    }
switchD_03791aa4_caseD_1003:
    uVar40 = (uint)*(undefined8 *)(lVar43 + 0x18);
    if (uVar40 <= uVar13) goto thunk_FUN_01ab6c44;
    lVar39 = lVar43 + lVar42 * 0x188;
    fVar59 = fStack0000000000000120 + fStack0000000000000158;
    fVar49 = (float)uStack0000000000000118 + (float)_in_stack_00000148;
    fVar61 = (float)((ulong)uStack0000000000000118 >> 0x20) +
             (float)((ulong)_in_stack_00000148 >> 0x20);
    if (*(char *)(lVar39 + 0x1a0) == '\0') goto LAB_037924bc;
    cVar22 = *(char *)(lVar43 + lVar42 * 0x188 + 0x28);
    if (cVar22 != '\x01') goto LAB_0379225c;
    fVar48 = fmodf(*(float *)(in_stack_000001e0 + 0xfc) * (float)(int)uVar24,1.0);
    plVar41 = (long *)PTR_DAT_03cbded8;
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf4)) {
    case 0:
      fVar48 = 1.0;
      lVar27 = lVar43 + lVar42 * 0x188;
      *(undefined4 *)(lVar27 + 0xbc) = 0;
      *(undefined4 *)(lVar27 + 0x94) = 0;
      *(undefined4 *)(lVar27 + 0xe4) = 0x3f800000;
      break;
    case 1:
      fVar44 = *(float *)(lVar43 + lVar42 * 0x188 + 0xa0);
      if (*(int *)(in_stack_000001e0 + 0x70) == 0x208) {
        lVar27 = lVar43 + lVar42 * 0x188;
        fVar58 = (fStack0000000000000158 + fVar44) - *(float *)(unaff_x19 + 0x360);
        fVar44 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
        goto LAB_03791dcc;
      }
      lVar27 = lVar43 + lVar42 * 0x188;
      fVar58 = fVar58 - fVar50;
      *(float *)(lVar27 + 0xbc) = fVar48 + (fVar44 - fVar50) / fVar58;
      *(float *)(lVar27 + 0x94) = fVar48 + (*(float *)(lVar27 + 0x78) - fVar50) / fVar58;
      *(float *)(lVar27 + 0xe4) = fVar48 + (*(float *)(lVar27 + 200) - fVar50) / fVar58;
      fVar48 = fVar48 + (*(float *)(lVar27 + 0xf0) - fVar50) / fVar58;
      break;
    case 2:
      lVar27 = lVar43 + lVar42 * 0x188;
      fVar44 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
      fVar58 = (fStack0000000000000158 + *(float *)(lVar27 + 0xa0)) - *(float *)(unaff_x19 + 0x360);
LAB_03791dcc:
      *(float *)(lVar27 + 0xbc) = fVar48 + fVar58 / fVar44;
      *(float *)(lVar27 + 0x94) =
           fVar48 + ((fStack0000000000000158 + *(float *)(lVar27 + 0x78)) -
                    *(float *)(unaff_x19 + 0x360)) /
                    (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      *(float *)(lVar27 + 0xe4) =
           fVar48 + ((fStack0000000000000158 + *(float *)(lVar27 + 200)) -
                    *(float *)(unaff_x19 + 0x360)) /
                    (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      fVar48 = fVar48 + ((fStack0000000000000158 + *(float *)(lVar27 + 0xf0)) -
                        *(float *)(unaff_x19 + 0x360)) /
                        (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      break;
    case 3:
      switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
      case 0:
        lVar27 = lVar43 + lVar42 * 0x188;
        *(undefined4 *)(lVar27 + 0xc0) = 0;
        *(undefined4 *)(lVar27 + 0x98) = 0x3f800000;
        *(undefined4 *)(lVar27 + 0xe8) = 0;
        *(undefined4 *)(lVar27 + 0x110) = 0x3f800000;
        break;
      case 1:
        fVar44 = fVar44 - fVar55;
        lVar27 = lVar43 + lVar42 * 0x188;
        fVar58 = fVar48 + (*(float *)(lVar27 + 0xa4) - fVar55) / fVar44;
        fVar44 = fVar48 + (*(float *)(lVar27 + 0x7c) - fVar55) / fVar44;
        *(float *)(lVar27 + 0xc0) = fVar58;
        *(float *)(lVar27 + 0x98) = fVar44;
        *(float *)(lVar27 + 0xe8) = fVar58;
        *(float *)(lVar27 + 0x110) = fVar44;
        break;
      case 2:
        lVar27 = lVar43 + lVar42 * 0x188;
        fVar58 = fVar48 + (*(float *)(lVar27 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
                          (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
        *(float *)(lVar27 + 0xc0) = fVar58;
        fVar44 = *(float *)(unaff_x19 + 0x364);
        fVar50 = *(float *)(unaff_x19 + 0x36c);
        *(float *)(lVar27 + 0xe8) = fVar58;
        fVar58 = fVar48 + (*(float *)(lVar27 + 0x7c) - fVar44) / (fVar50 - fVar44);
        *(float *)(lVar27 + 0x98) = fVar58;
        *(float *)(lVar27 + 0x110) = fVar58;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar40 = (uint)*(undefined8 *)(lVar43 + 0x18);
      }
      if (uVar40 <= uVar13) goto thunk_FUN_01ab6c44;
      lVar27 = lVar43 + lVar42 * 0x188;
      fVar58 = *(float *)(lVar27 + 0x168);
      fVar44 = (1.0 - (*(float *)(lVar27 + 0xc0) + *(float *)(lVar27 + 0x98)) * fVar58) * 0.5;
      fVar50 = fVar48 + *(float *)(lVar27 + 0xc0) * fVar58 + fVar44;
      fVar48 = fVar48 + *(float *)(lVar27 + 0x98) * fVar58 + fVar44;
      *(float *)(lVar27 + 0xbc) = fVar50;
      *(float *)(lVar27 + 0x94) = fVar50;
      *(float *)(lVar27 + 0xe4) = fVar48;
      break;
    default:
      goto switchD_03791d04_default;
    }
    *(float *)(lVar43 + lVar42 * 0x188 + 0x10c) = fVar48;
switchD_03791d04_default:
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
    case 0:
      if (uVar40 <= uVar13) goto thunk_FUN_01ab6c44;
      lVar27 = lVar43 + lVar42 * 0x188;
      *(undefined4 *)(lVar27 + 0xc0) = 0;
      *(undefined4 *)(lVar27 + 0x98) = 0x3f800000;
      *(undefined4 *)(lVar27 + 0xe8) = 0x3f800000;
      *(undefined4 *)(lVar27 + 0x110) = 0;
      break;
    case 1:
      if (uVar13 < uVar40) {
        fVar53 = fVar53 - fVar64;
        lVar27 = lVar43 + lVar42 * 0x188;
        fVar48 = (*(float *)(lVar27 + 0xa4) - fVar64) / fVar53;
        fVar53 = (*(float *)(lVar27 + 0x7c) - fVar64) / fVar53;
        *(float *)(lVar27 + 0xc0) = fVar48;
        goto LAB_0379217c;
      }
      goto thunk_FUN_01ab6c44;
    case 2:
      if (uVar40 <= uVar13) goto thunk_FUN_01ab6c44;
      lVar27 = lVar43 + lVar42 * 0x188;
      fVar48 = (*(float *)(lVar27 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
      *(float *)(lVar27 + 0xc0) = fVar48;
      fVar53 = (*(float *)(lVar27 + 0x7c) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
LAB_0379217c:
      *(float *)(lVar27 + 0x98) = fVar53;
      *(float *)(lVar27 + 0xe8) = fVar53;
      *(float *)(lVar27 + 0x110) = fVar48;
      break;
    case 3:
      if (uVar40 <= uVar13) goto thunk_FUN_01ab6c44;
      lVar27 = lVar43 + lVar42 * 0x188;
      fVar53 = *(float *)(lVar27 + 0x168);
      fVar58 = (1.0 - (*(float *)(lVar27 + 0xbc) + *(float *)(lVar27 + 0xe4)) / fVar53) * 0.5;
      fVar48 = *(float *)(lVar27 + 0xbc) / fVar53 + fVar58;
      fVar58 = *(float *)(lVar27 + 0xe4) / fVar53 + fVar58;
      *(float *)(lVar27 + 0xc0) = fVar48;
      *(float *)(lVar27 + 0x98) = fVar58;
      *(float *)(lVar27 + 0x110) = fVar48;
      *(float *)(lVar27 + 0xe8) = fVar58;
    }
    if (uVar40 <= uVar13) goto thunk_FUN_01ab6c44;
    lVar27 = lVar43 + lVar42 * 0x188;
    fVar48 = *(float *)(lVar27 + 0x16c) * (1.0 - *(float *)(unaff_x19 + 0x1594));
    if ((*(char *)(lVar27 + 100) == '\0') && ((*(byte *)(lVar43 + lVar42 * 0x188 + 0x19c) & 1) != 0)
       ) {
      fVar48 = -fVar48;
    }
    lVar27 = lVar43 + lVar42 * 0x188;
    *(float *)(lVar27 + 0xb8) = fVar48;
    *(float *)(lVar27 + 0x90) = fVar48;
    *(float *)(lVar27 + 0xe0) = fVar48;
    *(float *)(lVar27 + 0x108) = fVar48;
    *(undefined4 *)(lVar27 + 0xbc) = 0x3f800000;
    *(float *)(lVar27 + 0xc0) = fVar48;
    *(undefined4 *)(lVar27 + 0x94) = 0x3f800000;
    *(float *)(lVar27 + 0x98) = fVar48;
    *(undefined4 *)(lVar27 + 0xe4) = 0x3f800000;
    *(float *)(lVar27 + 0xe8) = fVar48;
    *(undefined4 *)(lVar27 + 0x10c) = 0x3f800000;
    *(float *)(lVar27 + 0x110) = fVar48;
LAB_0379225c:
    if (((int)uVar13 < *(int *)(in_stack_000001e0 + 0xd8)) &&
       (iStack0000000000000138 < *(int *)(in_stack_000001e0 + 0xdc))) {
      if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar24) ||
         (*(int *)(in_stack_000001e0 + 0x74) == 5)) {
        if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar24) ||
           (*(int *)(in_stack_000001e0 + 0x74) != 5)) goto LAB_037922d4;
        if (uVar13 < uVar40) {
          bVar10 = *(uint *)(lVar43 + lVar42 * 0x188 + 0x70) == uStack000000000000005c;
          goto LAB_037922d8;
        }
        goto thunk_FUN_01ab6c44;
      }
      if (uVar40 <= uVar13) goto thunk_FUN_01ab6c44;
LAB_037922e4:
      lVar39 = lVar43 + lVar42 * 0x188;
      *(ulong *)(lVar39 + 0xa0) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar39 + 0xa0) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar39 + 0xa0));
      *(float *)(lVar39 + 0xa8) = fVar61 + *(float *)(lVar39 + 0xa8);
      *(ulong *)(lVar39 + 0x78) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar39 + 0x78) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar39 + 0x78));
      *(float *)(lVar39 + 0x80) = fVar61 + *(float *)(lVar39 + 0x80);
      *(ulong *)(lVar39 + 200) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar39 + 200) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar39 + 200));
      *(float *)(lVar39 + 0xd0) = fVar61 + *(float *)(lVar39 + 0xd0);
      *(ulong *)(lVar39 + 0xf0) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar39 + 0xf0) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar39 + 0xf0));
      *(float *)(lVar39 + 0xf8) = fVar61 + *(float *)(lVar39 + 0xf8);
    }
    else {
LAB_037922d4:
      bVar10 = false;
LAB_037922d8:
      if (uVar40 <= uVar13) goto thunk_FUN_01ab6c44;
      if (bVar10) goto LAB_037922e4;
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(plVar41);
        DAT_0411f172 = '\x01';
        uVar40 = *(uint *)(lVar43 + 0x18);
      }
      uVar46 = *(undefined4 *)(*(undefined8 **)(*plVar41 + 0xb8) + 1);
      lVar27 = lVar43 + lVar42 * 0x188;
      *(undefined8 *)(lVar27 + 0xa0) = **(undefined8 **)(*plVar41 + 0xb8);
      *(undefined4 *)(lVar27 + 0xa8) = uVar46;
      if (uVar40 <= uVar13) goto thunk_FUN_01ab6c44;
      uVar46 = *(undefined4 *)(*(undefined8 **)(*plVar41 + 0xb8) + 1);
      lVar27 = lVar43 + lVar42 * 0x188;
      *(undefined8 *)(lVar27 + 0x78) = **(undefined8 **)(*plVar41 + 0xb8);
      *(undefined4 *)(lVar27 + 0x80) = uVar46;
      uVar46 = *(undefined4 *)(*(undefined8 **)(*plVar41 + 0xb8) + 1);
      *(undefined8 *)(lVar27 + 200) = **(undefined8 **)(*plVar41 + 0xb8);
      *(undefined4 *)(lVar27 + 0xd0) = uVar46;
      uVar46 = *(undefined4 *)(*(undefined8 **)(*plVar41 + 0xb8) + 1);
      *(undefined8 *)(lVar27 + 0xf0) = **(undefined8 **)(*plVar41 + 0xb8);
      *(undefined4 *)(lVar27 + 0xf8) = uVar46;
      *(undefined1 *)(lVar39 + 0x1a0) = 0;
    }
    iVar15 = FUN_0368e42c(0);
    if (iVar15 == 1) {
      cVar38 = *(char *)(in_stack_000001e0 + 0xa2);
    }
    else {
      cVar38 = '\0';
    }
    if (cVar22 == '\x01') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a429c(uVar13,cVar38 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
    else if (cVar22 == '\x02') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a4cd4(uVar13,cVar38 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
LAB_037924bc:
    lVar39 = *in_stack_000001e8;
    if (lVar39 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar39 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
    lVar39 = lVar39 + lVar42 * 0x188;
    uVar56 = *(undefined8 *)(lVar39 + 0x124);
    *(undefined8 *)(lVar39 + 0x124) =
         CONCAT44(fVar49 + (float)((ulong)uVar56 >> 0x20),fVar59 + (float)uVar56);
    *(float *)(lVar39 + 300) = fVar61 + *(float *)(lVar39 + 300);
    lVar39 = *in_stack_000001e8;
    if (lVar39 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar39 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
    lVar39 = lVar39 + lVar42 * 0x188;
    *(ulong *)(lVar39 + 0x118) =
         CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar39 + 0x118) >> 0x20),
                  fVar59 + (float)*(undefined8 *)(lVar39 + 0x118));
    *(float *)(lVar39 + 0x120) = fVar61 + *(float *)(lVar39 + 0x120);
    lVar39 = *in_stack_000001e8;
    if (lVar39 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar39 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
    lVar39 = lVar39 + lVar42 * 0x188;
    *(ulong *)(lVar39 + 0x130) =
         CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar39 + 0x130) >> 0x20),
                  fVar59 + (float)*(undefined8 *)(lVar39 + 0x130));
    *(float *)(lVar39 + 0x138) = fVar61 + *(float *)(lVar39 + 0x138);
    lVar39 = *in_stack_000001e8;
    if (lVar39 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar39 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
    lVar39 = lVar39 + lVar42 * 0x188;
    *(float *)(lVar39 + 0x13c) = fVar59 + *(float *)(lVar39 + 0x13c);
    *(ulong *)(lVar39 + 0x140) =
         CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar39 + 0x140) >> 0x20),
                  fVar49 + (float)*(undefined8 *)(lVar39 + 0x140));
    lVar39 = *in_stack_000001e8;
    if (lVar39 == 0) goto LAB_03793c9c;
    uVar40 = *(uint *)(lVar39 + 0x18);
    if (uVar40 <= uVar13) goto thunk_FUN_01ab6c44;
    lVar27 = lVar39 + lVar42 * 0x188;
    *(float *)(lVar27 + 0x148) = fVar59 + *(float *)(lVar27 + 0x148);
    *(float *)(lVar27 + 0x164) = fVar59 + *(float *)(lVar27 + 0x164);
    *(float *)(lVar27 + 0x154) = fVar49 + *(float *)(lVar27 + 0x154);
    uVar56 = *(undefined8 *)(lVar27 + 0x14c);
    *(undefined8 *)(lVar27 + 0x14c) =
         CONCAT44(fVar49 + (float)((ulong)uVar56 >> 0x20),fVar49 + (float)uVar56);
    if (uVar24 == uVar28) {
      uVar28 = *in_stack_000001d0 - 1;
      if (uVar13 == uVar28) goto LAB_037926b4;
    }
    else {
      lVar27 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar27 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar27 + 0x18) <= uVar28) goto thunk_FUN_01ab6c44;
      lVar34 = (long)(int)uVar28;
      lVar37 = lVar27 + lVar34 * 0x60;
      fVar61 = fVar49 + *(float *)(lVar37 + 0x58);
      *(ulong *)(lVar37 + 0x50) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar37 + 0x50) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar37 + 0x50));
      *(float *)(lVar37 + 0x58) = fVar61;
      *(float *)(lVar37 + 0x5c) = fVar59 + *(float *)(lVar37 + 0x5c);
      if (uVar40 <= *(uint *)(lVar37 + 0x38)) goto thunk_FUN_01ab6c44;
      uVar46 = *(undefined4 *)(lVar39 + (long)(int)*(uint *)(lVar37 + 0x38) * 0x188 + 0x124);
      lVar27 = lVar27 + lVar34 * 0x60;
      *(float *)(lVar27 + 0x74) = fVar61;
      *(undefined4 *)(lVar27 + 0x70) = uVar46;
      lVar39 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar39 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar39 + 0x18) <= uVar28) goto thunk_FUN_01ab6c44;
      lVar27 = *in_stack_000001e8;
      if (lVar27 == 0) goto LAB_03793c9c;
      uVar28 = *(uint *)(lVar39 + lVar34 * 0x60 + 0x44);
      if (*(uint *)(lVar27 + 0x18) <= uVar28) goto thunk_FUN_01ab6c44;
      lVar39 = lVar39 + lVar34 * 0x60;
      *(undefined4 *)(lVar39 + 0x78) = *(undefined4 *)(lVar27 + (long)(int)uVar28 * 0x188 + 0x130);
      *(undefined4 *)(lVar39 + 0x7c) = *(undefined4 *)(lVar39 + 0x50);
      uVar28 = *in_stack_000001d0 - 1;
LAB_037926b4:
      if (uVar13 == uVar28) {
        lVar39 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar39 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar39 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
        lVar27 = lVar39 + lVar32 * 0x60;
        fVar61 = fVar49 + *(float *)(lVar27 + 0x58);
        *(ulong *)(lVar27 + 0x50) =
             CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar27 + 0x50) >> 0x20),
                      fVar49 + (float)*(undefined8 *)(lVar27 + 0x50));
        *(float *)(lVar27 + 0x58) = fVar61;
        *(float *)(lVar27 + 0x5c) = fVar59 + *(float *)(lVar27 + 0x5c);
        lVar34 = *in_stack_000001e8;
        if (lVar34 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar34 + 0x18) <= *(uint *)(lVar27 + 0x38)) goto thunk_FUN_01ab6c44;
        uVar46 = *(undefined4 *)(lVar34 + (long)(int)*(uint *)(lVar27 + 0x38) * 0x188 + 0x124);
        lVar39 = lVar39 + lVar32 * 0x60;
        *(float *)(lVar39 + 0x74) = fVar61;
        *(undefined4 *)(lVar39 + 0x70) = uVar46;
        lVar39 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar39 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar39 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
        lVar27 = *in_stack_000001e8;
        if (lVar27 == 0) goto LAB_03793c9c;
        uVar28 = *(uint *)(lVar39 + lVar32 * 0x60 + 0x44);
        if (*(uint *)(lVar27 + 0x18) <= uVar28) goto thunk_FUN_01ab6c44;
        lVar39 = lVar39 + lVar32 * 0x60;
        *(undefined4 *)(lVar39 + 0x78) = *(undefined4 *)(lVar27 + (long)(int)uVar28 * 0x188 + 0x130)
        ;
        *(undefined4 *)(lVar39 + 0x7c) = *(undefined4 *)(lVar39 + 0x50);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar20 = FUN_026b82c4(uVar36,0);
    if (((((uVar20 & 1) == 0) && (1 < uVar36 - 0x2010)) && (uVar36 != 0xad)) && (uVar36 != 0x2d)) {
      if ((_fStack0000000000000168 & 0x100000000) == 0) {
        if (uVar23 == 1) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          bVar12 = FUN_026b81f8(uVar36,0);
          if (((uVar36 == 0x200b) || (((bVar11 | bVar12 ^ 1) & 1) != 0)) ||
             (*in_stack_000001d0 == 1)) goto LAB_037930d8;
        }
        fStack000000000000016c = 0.0;
      }
      else {
        if (((uVar23 != 1) && ((int)uVar13 < (int)(*(uint *)(lVar43 + 0x18) - 1))) &&
           (((int)uVar13 < (int)*in_stack_000001d0 && ((uVar36 == 0x2019 || (uVar36 == 0x27)))))) {
          if (*(uint *)(lVar43 + 0x18) <= uVar23 - 2) goto thunk_FUN_01ab6c44;
          uVar3 = *(undefined2 *)(lVar43 + (long)in_stack_000001a8 + -0x464);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b82c4(uVar3,0);
          if ((uVar20 & 1) != 0) {
            if (*(uint *)(lVar43 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
            uVar3 = *(undefined2 *)(lVar43 + (long)in_stack_000001a8 + -0x154);
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
          uVar20 = FUN_026b82c4(uVar36,0);
          fStack0000000000000170 = (float)uVar13;
          if ((uVar20 & 1) == 0) goto LAB_03793114;
        }
        else {
LAB_03793114:
          fStack0000000000000170 = (float)(iStack0000000000000178 - 1);
        }
        lVar39 = *plVar17;
        if (lVar39 == 0) goto LAB_03793c9c;
        uVar28 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar15 = *(int *)(lVar39 + 0x18);
        if (iVar15 < (int)(uVar28 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(plVar17,iVar15 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar39 = *plVar17;
          if (lVar39 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar39 + 0x18) <= uVar28) goto thunk_FUN_01ab6c44;
        lVar39 = lVar39 + (long)(int)uVar28 * 0xc;
        *(float *)(lVar39 + 0x20) = fStack0000000000000168;
        *(float *)(lVar39 + 0x24) = fStack0000000000000170;
        *(int *)(lVar39 + 0x28) = ((int)fStack0000000000000170 - (int)fStack0000000000000168) + 1;
        lVar39 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar39 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar39 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
        lVar39 = lVar39 + lVar32 * 0x60;
        fStack000000000000016c = 0.0;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar39 + 0x34) = *(int *)(lVar39 + 0x34) + 1;
      }
    }
    else {
      if ((_fStack0000000000000168 & 0x100000000) == 0) {
        fStack0000000000000168 = (float)uVar13;
      }
      if (uVar13 == *in_stack_000001d0 - 1) {
        lVar39 = *plVar17;
        if (lVar39 == 0) goto LAB_03793c9c;
        uVar28 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar15 = *(int *)(lVar39 + 0x18);
        if (iVar15 < (int)(uVar28 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(plVar17,iVar15 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar39 = *plVar17;
          if (lVar39 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar39 + 0x18) <= uVar28) goto thunk_FUN_01ab6c44;
        lVar39 = lVar39 + (long)(int)uVar28 * 0xc;
        *(float *)(lVar39 + 0x20) = fStack0000000000000168;
        *(uint *)(lVar39 + 0x24) = uVar13;
        *(uint *)(lVar39 + 0x28) = uVar23 - (int)fStack0000000000000168;
        lVar39 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar39 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar39 + 0x18) <= uVar24) goto thunk_FUN_01ab6c44;
        lVar39 = lVar39 + lVar32 * 0x60;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar39 + 0x34) = *(int *)(lVar39 + 0x34) + 1;
      }
LAB_0379289c:
      fStack000000000000016c = 1.4013e-45;
    }
    lVar39 = *in_stack_000001e8;
    if (lVar39 == 0) goto LAB_03793c9c;
    uVar28 = *(uint *)(lVar39 + 0x18);
    if (uVar28 <= uVar13) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar39 + lVar42 * 0x188 + 0x19c) >> 2 & 1) == 0) {
      if (bVar7) {
LAB_037928d0:
        if (uVar23 - 2 < uVar28) {
          uVar46 = *(undefined4 *)(lVar39 + (long)in_stack_000001a8 + -0x354);
          uVar54 = *(undefined4 *)(lVar39 + (long)in_stack_000001a8 + -0x318);
          goto LAB_03792b34;
        }
        goto thunk_FUN_01ab6c44;
      }
LAB_03792a8c:
      bVar7 = false;
    }
    else {
      lVar32 = *(long *)(unaff_x19 + 0x15b8);
      if (lVar32 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) goto thunk_FUN_01ab6c44;
      iVar15 = *(int *)(lVar39 + lVar42 * 0x188 + 0x70);
      *(int *)(lVar39 + lVar42 * 0x188 + 0x178) =
           *(int *)(lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
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
      if (uVar36 != 0x200b && (bVar11 & 1) == 0) {
        fVar61 = *(float *)(lVar39 + lVar42 * 0x188 + 0x16c);
        if (fVar57 <= fVar61) {
          fVar57 = fVar61;
        }
        if (iVar15 != iStack00000000000000c0) {
          fStack000000000000015c = fVar47;
        }
        if (lVar31 == 0) goto LAB_03793c9c;
        fVar61 = *(float *)(lVar39 + lVar42 * 0x188 + 0x150);
        if (fStack0000000000000174 <= ABS(fVar48)) {
          fStack0000000000000174 = ABS(fVar48);
        }
        FUN_03779650(&stack0x000016a0,lVar31,0);
        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
        fVar58 = (float)FUN_03776a10(&stack0x00001610,0);
        fVar61 = fVar61 + fVar57 * fVar58;
        iStack00000000000000c0 = iVar15;
        if (fVar61 <= fStack000000000000015c) {
          fStack000000000000015c = fVar61;
        }
      }
      if ((((uVar36 == 0xd) || ((uVar36 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar13)) ||
         (bVar7 || bVar10)) {
LAB_03792a80:
        if (!bVar7) goto LAB_03792a8c;
      }
      else {
        if (uVar13 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b97f8(uVar36,0);
          if ((uVar20 & 1) != 0) goto LAB_03792a80;
        }
        lVar39 = *in_stack_000001e8;
        if (lVar39 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar39 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        lVar39 = lVar39 + lVar42 * 0x188;
        _bStack00000000000000d8 = *(float *)(lVar39 + 0x16c);
        fStack00000000000000d0 = *(float *)(lVar39 + 0x124);
        bVar7 = fVar57 != 0.0;
        fVar61 = _bStack00000000000000d8;
        if (bVar7) {
          fVar61 = fVar57;
        }
        fVar57 = fVar61;
        uVar45 = *(undefined4 *)(lVar39 + 0x174);
        uStack00000000000000cc = 0;
        fVar61 = fVar48;
        if (bVar7) {
          fVar61 = fStack0000000000000174;
        }
        fStack00000000000000c8 = fStack000000000000015c;
        fStack0000000000000174 = fVar61;
      }
      if (*in_stack_000001d0 == 1) {
        lVar39 = *in_stack_000001e8;
        if (lVar39 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar39 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        lVar39 = lVar39 + lVar42 * 0x188;
        uVar46 = *(undefined4 *)(lVar39 + 0x130);
        uVar54 = *(undefined4 *)(lVar39 + 0x16c);
LAB_03792b34:
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,uStack00000000000000cc,uVar46,
                     fStack000000000000015c,0,_bStack00000000000000d8,uVar54);
      }
      else {
        if ((uVar13 == uVar4) || ((int)uVar5 <= (int)uVar13)) {
          lVar39 = *in_stack_000001e8;
          if (lVar39 != 0) {
            lVar32 = lVar42;
            uVar28 = uVar13;
            if (uVar36 == 0x200b || (bVar11 & 1) != 0) {
              lVar32 = lVar33;
              uVar28 = uVar5;
            }
            if (uVar28 < *(uint *)(lVar39 + 0x18)) {
              lVar39 = lVar39 + lVar32 * 0x188;
              uVar46 = *(undefined4 *)(lVar39 + 0x130);
              uVar54 = *(undefined4 *)(lVar39 + 0x16c);
              goto LAB_03792b34;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
        if (bVar10) {
          lVar39 = *in_stack_000001e8;
          if (lVar39 != 0) {
            uVar28 = *(uint *)(lVar39 + 0x18);
            goto LAB_037928d0;
          }
          goto LAB_03793c9c;
        }
        if ((int)(*in_stack_000001d0 - 1) <= (int)uVar13) {
LAB_03793294:
          bVar7 = true;
          goto LAB_03792b70;
        }
        lVar39 = *in_stack_000001e8;
        if (lVar39 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar39 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
        uVar20 = FUN_03779528(uVar45,*(undefined4 *)(lVar39 + (long)in_stack_000001a8),0);
        if ((uVar20 & 1) != 0) goto LAB_03793294;
        lVar39 = *in_stack_000001e8;
        if (lVar39 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar39 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        lVar39 = lVar39 + lVar42 * 0x188;
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,uStack00000000000000cc,
                     *(undefined4 *)(lVar39 + 0x130),fStack000000000000015c,0,
                     _bStack00000000000000d8,*(undefined4 *)(lVar39 + 0x16c));
      }
      fVar57 = 0.0;
      bVar7 = false;
      fStack000000000000015c = DAT_00d38d70;
      fStack0000000000000174 = 0.0;
    }
LAB_03792b70:
    lVar39 = *in_stack_000001e8;
    if (lVar39 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar39 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
    if (lVar31 == 0) goto LAB_03793c9c;
    uVar28 = *(uint *)(lVar39 + lVar42 * 0x188 + 0x19c);
    FUN_03779650(&stack0x000016a0,lVar31,0);
    memcpy(&stack0x00001610,&stack0x000016a0,0x60);
    fVar61 = (float)FUN_03776a30(&stack0x00001610,0);
    if ((uVar28 >> 6 & 1) == 0) {
      if (bVar9) {
        lVar39 = *in_stack_000001e8;
        if (lVar39 != 0) {
          if (uVar23 - 2 < *(uint *)(lVar39 + 0x18)) {
            fVar49 = *(float *)(lVar39 + (long)in_stack_000001a8 + -0x334);
            uVar46 = *(undefined4 *)(lVar39 + (long)in_stack_000001a8 + -0x354);
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
      lVar39 = *in_stack_000001e8;
      if ((lVar39 == 0) || (lVar32 = *(long *)(unaff_x19 + 0x15b8), lVar32 == 0)) goto LAB_03793c9c;
      if ((*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) ||
         (*(uint *)(lVar39 + 0x18) <= uVar13)) goto thunk_FUN_01ab6c44;
      *(int *)(lVar39 + lVar42 * 0x188 + 0x180) =
           *(int *)(lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar13) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar24)) {
        bVar10 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar10 = *(int *)(lVar39 + lVar42 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar10 = false;
      }
      if ((((uVar36 == 0xd) || ((uVar36 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar13)) ||
         (!(bool)(~bVar9 & (bVar10 ^ 1U)))) {
LAB_03792cf0:
        if (!bVar9) goto LAB_03792cf8;
      }
      else {
        if (uVar13 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b97f8(uVar36,0);
          if ((uVar20 & 1) != 0) goto LAB_03792cf0;
          lVar39 = *in_stack_000001e8;
          if (lVar39 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar39 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        lVar39 = lVar39 + lVar42 * 0x188;
        fStack00000000000000f0 = *(float *)(lVar39 + 0x16c);
        in_stack_000000e8._4_4_ = *(float *)(lVar39 + 0x124);
        fStack00000000000000a8 = *(float *)(lVar39 + 0x68);
        in_stack_000000a0._4_4_ = *(float *)(lVar39 + 0x150);
        fStack00000000000000e0 = fVar61 * fStack00000000000000f0 + in_stack_000000a0._4_4_;
        uStack00000000000000dc = 0;
      }
      uVar28 = *in_stack_000001d0;
      if (uVar28 == 1) {
LAB_03792ef4:
        lVar32 = *in_stack_000001e8;
        if (lVar32 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar32 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        lVar32 = lVar32 + lVar42 * 0x188;
      }
      else {
        lVar39 = lVar42;
        if (uVar13 == uVar4) {
          lVar32 = *in_stack_000001e8;
          if (lVar32 == 0) goto LAB_03793c9c;
          uVar28 = uVar13;
          if ((uVar36 != 0x200b & (bVar11 ^ 1)) == 0) {
            lVar39 = lVar33;
            uVar28 = uVar5;
          }
          if (*(uint *)(lVar32 + 0x18) <= uVar28) goto thunk_FUN_01ab6c44;
        }
        else {
          if ((int)uVar28 <= (int)uVar13) {
LAB_03792fdc:
            if ((int)uVar13 < (int)uVar28) {
              iVar15 = FUN_036d3364(lVar31,0);
              if (*(uint *)(lVar43 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
              lVar39 = *(long *)(lVar43 + (long)in_stack_000001a8 + -0x134);
              if (lVar39 == 0) goto LAB_03793c9c;
              iVar14 = FUN_036d3364(lVar39,0);
              if (iVar15 != iVar14) goto LAB_03792ef4;
            }
            if (!bVar10) {
              bVar9 = true;
              goto LAB_03793338;
            }
            lVar39 = *in_stack_000001e8;
            if (lVar39 != 0) {
              if (uVar23 - 2 < *(uint *)(lVar39 + 0x18)) {
                fVar49 = *(float *)(lVar39 + (long)in_stack_000001a8 + -0x334);
                uVar46 = *(undefined4 *)(lVar39 + (long)in_stack_000001a8 + -0x354);
                goto LAB_037932fc;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          lVar32 = *in_stack_000001e8;
          if (lVar32 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar32 + 0x18) <= uVar23) goto thunk_FUN_01ab6c44;
          if (*(float *)(lVar32 + (long)in_stack_000001a8 + -0x10c) == fStack00000000000000a8) {
            fVar58 = *(float *)(lVar32 + (long)in_stack_000001a8 + -0x24);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                        ) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar20 = FUN_037a2200(fVar49 + fVar58,in_stack_000000a0._4_4_,0);
            if ((uVar20 & 1) != 0) {
              uVar28 = *in_stack_000001d0;
              goto LAB_03792fdc;
            }
            lVar32 = *in_stack_000001e8;
            if (lVar32 == 0) goto LAB_03793c9c;
          }
          uVar28 = uVar13;
          if ((int)uVar5 < (int)uVar13) {
            lVar39 = lVar33;
            uVar28 = uVar5;
          }
          if (*(uint *)(lVar32 + 0x18) <= uVar28) goto thunk_FUN_01ab6c44;
        }
        lVar32 = lVar32 + lVar39 * 0x188;
      }
      fVar49 = *(float *)(lVar32 + 0x150);
      uVar46 = *(undefined4 *)(lVar32 + 0x130);
LAB_037932fc:
      FUN_0379d0d0(in_stack_000000e8._4_4_,fStack00000000000000e0,uStack00000000000000dc,uVar46,
                   fStack00000000000000f0 * fVar61 + fVar49,0,fStack00000000000000f0,
                   fStack00000000000000f0);
      bVar9 = false;
    }
LAB_03793338:
    lVar39 = *in_stack_000001e8;
    if (lVar39 == 0) goto LAB_03793c9c;
    uVar28 = (uint)*(undefined8 *)(lVar39 + 0x18);
    if (uVar28 <= uVar13) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar39 + lVar42 * 0x188 + 0x19d) >> 1 & 1) == 0) {
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
        bVar10 = *(int *)(lVar39 + lVar42 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar10 = false;
      }
      if (!bVar8) {
        if (((uVar36 == 0xd) || ((uVar36 & 0xfffe) == 10)) ||
           (((int)uVar5 < (int)uVar13 || (bVar10)))) goto LAB_03793428;
        if (uVar13 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b97f8(uVar36,0);
          if ((uVar20 & 1) != 0) goto LAB_03793428;
        }
        puVar6 = Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        lVar31 = *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        if (*(int *)(lVar31 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar31 = *(long *)puVar6;
        }
        lVar39 = *in_stack_000001e8;
        if (lVar39 == 0) goto LAB_03793c9c;
        uVar28 = (uint)*(undefined8 *)(lVar39 + 0x18);
        if (uVar28 <= uVar13) goto thunk_FUN_01ab6c44;
        pfVar35 = *(float **)(lVar31 + 0xb8);
        fStack0000000000000128 = *pfVar35;
        in_stack_00000140._4_4_ = pfVar35[1];
        fStack000000000000012c = pfVar35[2];
        fStack0000000000000130 = pfVar35[3];
        uStack0000000000000124 = 0;
      }
      if (uVar28 <= uVar13) goto thunk_FUN_01ab6c44;
      lVar39 = lVar39 + lVar42 * 0x188;
      fVar58 = *(float *)(lVar39 + 0x130);
      fVar64 = *(float *)(lVar39 + 0x124);
      fVar49 = *(float *)(lVar39 + 0x148);
      fVar53 = *(float *)(lVar39 + 0x14c);
      fVar44 = *(float *)(lVar39 + 0x154);
      fVar61 = *(float *)(lVar39 + 0x164);
      uVar20 = FUN_037a20cc(&stack0x00000210,&stack0x000001f0,0);
      lVar39 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
      if ((uVar20 & 1) == 0) {
        if (*(int *)(lVar39 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar39);
        }
        fVar50 = (float)FUN_037a1dd8(uVar29,0);
        bVar8 = (bVar11 & 1) == 0;
        if (bVar8) {
          fVar49 = fVar64;
        }
        if (bVar8) {
          fVar61 = fVar58;
        }
        if (fVar49 - fVar50 <= fStack0000000000000128) {
          fStack0000000000000128 = fVar49 - fVar50;
        }
        fVar49 = (float)FUN_037a1de0(uVar29,0);
        if (fStack000000000000012c <= fVar61 + fVar49) {
          fStack000000000000012c = fVar61 + fVar49;
        }
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar49 = (float)FUN_037a1df0(uVar29,0);
        if (fVar44 - fVar49 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar44 - fVar49;
        }
        fVar49 = (float)FUN_037a1de8(uVar29,0);
        if (fStack0000000000000130 <= fVar53 + fVar49) {
          fStack0000000000000130 = fVar53 + fVar49;
        }
      }
      else {
        if (*(int *)(lVar39 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar39);
        }
        fVar50 = (float)FUN_037a1de0(uVar29,0);
        if ((bVar11 & 1) == 0) {
          fVar49 = fVar64;
        }
        if (fVar44 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar44;
        }
        fVar49 = (fVar49 + (fStack000000000000012c - fVar50)) * 0.5;
        if (fStack0000000000000130 <= fVar53) {
          fStack0000000000000130 = fVar53;
        }
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,fVar49,
                     fStack0000000000000130,uStack0000000000000124);
        puVar6 = Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000140._4_4_ = (float)FUN_037a1df0(uVar18,0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000140._4_4_ = fVar44 - in_stack_00000140._4_4_;
        fStack000000000000012c = (float)FUN_037a1de0(uVar18,0);
        fVar44 = (float)FUN_037a1de8(uVar18,0);
        if ((bVar11 & 1) == 0) {
          fVar61 = fVar58;
        }
        fStack000000000000012c = fVar61 + fStack000000000000012c;
        uStack0000000000000124 = 0;
        fStack0000000000000128 = fVar49;
        fStack0000000000000130 = fVar53 + fVar44;
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
    uVar28 = uVar24;
    uVar23 = uVar23 + 1;
  } while (bVar10);
  iVar15 = uVar24 + 1;
  plVar17 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
LAB_03793a5c:
  *(uint *)(in_stack_000001c0 + 0x10) = uVar13;
  uVar45 = *(undefined4 *)(unaff_x19 + 0x15c0);
  *(int *)(in_stack_000001c0 + 0x24) = iVar15;
  if ((int)uVar13 < 1 || iStack0000000000000138 == 0) {
    iStack0000000000000138 = 1;
  }
  *(int *)(in_stack_000001c0 + 0x1c) = iStack0000000000000138;
  *(undefined4 *)(in_stack_000001c0 + 0x14) = uVar45;
  *(int *)(in_stack_000001c0 + 0x28) = *(int *)(unaff_x19 + 0x350) + 1;
  if (1 < *(int *)(in_stack_000001c0 + 0x2c)) {
    uVar18 = 1;
    lVar43 = 0x70;
    do {
      lVar39 = *(long *)(in_stack_000001c0 + 0x58);
      if (lVar39 == 0) {
LAB_03793c9c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(*plVar17 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(uint *)(lVar39 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
      FUN_03785ba0(lVar39 + lVar43,0);
      if (*(int *)(in_stack_000001e0 + 0x100) != 0) {
        lVar39 = *(long *)(in_stack_000001c0 + 0x58);
        if (lVar39 == 0) goto LAB_03793c9c;
        if (*(int *)(*plVar17 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar39 + 0x18) <= uVar18) {
thunk_FUN_01ab6c44:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03785bdc(lVar39 + lVar43,1,0);
      }
      uVar18 = uVar18 + 1;
      lVar43 = lVar43 + 0x50;
    } while ((long)uVar18 < (long)*(int *)(in_stack_000001c0 + 0x2c));
  }
LAB_0378c81c:
  if (*(long *)(in_stack_00000110 + 0x28) == in_stack_00001a38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


