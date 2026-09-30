/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.SortingHelpers.ClosestPointOnColliderEvaluator$$EvaluateDistance
ENTRY_POINT: 092bce24
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_XR_Interaction_Toolkit_SortingHelpers_ClosestPointOnColliderEvaluator__EvaluateDistance
               (long param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined *puVar11;
  undefined1 in_CY;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined1 uVar25;
  char cVar26;
  long *plVar27;
  undefined4 *puVar28;
  long lVar29;
  long in_x9;
  long lVar30;
  float *pfVar31;
  code *pcVar32;
  uint in_w10;
  float *pfVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long *plVar37;
  long lVar38;
  long lVar39;
  long *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  uint uVar40;
  long *unaff_x23;
  uint *unaff_x24;
  uint unaff_w25;
  uint uVar41;
  undefined8 *unaff_x26;
  long lVar42;
  long *unaff_x27;
  long *plVar43;
  int iVar44;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  undefined8 uVar53;
  float fVar54;
  undefined8 uVar55;
  ulong uVar56;
  undefined4 uVar57;
  float fVar58;
  undefined8 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined8 uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float unaff_s14;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fStack0000000000000018;
  int iStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  float fStack0000000000000030;
  uint uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  float fStack0000000000000050;
  uint uStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  uint uStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  undefined8 in_stack_00000080;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  ulong in_stack_000000a0;
  float fStack00000000000000a8;
  undefined4 uStack00000000000000b0;
  float fStack00000000000000b4;
  float fStack00000000000000b8;
  undefined8 in_stack_000000c0;
  int iStack00000000000000c8;
  undefined8 in_stack_000000d0;
  float fStack00000000000000d8;
  float in_stack_000000e0;
  float fStack00000000000000ec;
  float in_stack_000000f0;
  float fStack00000000000000f4;
  undefined8 in_stack_00000100;
  int iStack0000000000000110;
  float fStack0000000000000114;
  float fStack0000000000000118;
  float fStack000000000000011c;
  long *in_stack_00000130;
  uint uStack0000000000000148;
  long *in_stack_00000158;
  long lStack0000000000000160;
  float fStack0000000000000170;
  long *in_stack_00000178;
  uint *in_stack_00000180;
  undefined8 in_stack_00000188;
  float fStack0000000000000190;
  float fStack0000000000000194;
  float in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  float in_stack_000001b0;
  float in_stack_0000110c;
  float in_stack_00001110;
  float in_stack_00001118;
  float in_stack_0000111c;
  float in_stack_00001124;
  float in_stack_00001128;
  float in_stack_00001130;
  float in_stack_00001134;
  float in_stack_0000113c;
  float in_stack_00001140;
  float in_stack_00001148;
  float in_stack_0000114c;
  uint in_stack_0000122c;
  uint in_stack_00001258;
  undefined8 in_stack_00001260;
  undefined8 in_stack_00001268;
  float in_stack_00001270;
  undefined8 in_stack_00001278;
  char in_stack_00001284;
  float in_stack_00001288;
  uint in_stack_0000128c;
  uint uVar74;
  undefined8 in_stack_00001290;
  undefined8 in_stack_00001298;
  undefined4 in_stack_000012a4;
  undefined8 in_stack_000012a8;
  undefined8 in_stack_000012b0;
  undefined8 in_stack_000012b8;
  undefined8 in_stack_000012c0;
  undefined8 in_stack_000012c8;
  
  uVar24 = _fStack0000000000000068;
code_r0x092bce24:
  if (!(bool)in_CY) {
    *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(param_1 + in_x9 * unaff_x28 + 0x50);
    iVar44 = (int)unaff_x28;
    if (unaff_w25 == 0) {
LAB_092bce6c:
      if (*unaff_x23 == 0) goto LAB_092c3994;
      fVar67 = *(float *)(unaff_x19 + 0x42);
      fVar45 = (float)FUN_095dced8(*unaff_x23 + 0x28,0);
      lVar36 = unaff_x19[0x20];
    }
    else {
      lVar36 = unaff_x19[0x91];
      if (lVar36 == 0) goto LAB_092c3994;
      if (*(uint *)(lVar36 + 0x18) <= in_stack_00001258) goto LAB_092c3b00;
      if ((*(int *)(lVar36 + (long)(int)in_stack_00001258 * 0x10 + 0x24) != 10) ||
         ((int)in_x9 == (int)unaff_x19[0x95])) goto LAB_092bce6c;
      uVar13 = (int)in_x9 - 1;
      if (in_w10 <= uVar13) goto LAB_092c3b00;
      if (*unaff_x23 == 0) goto LAB_092c3994;
      fVar67 = *(float *)(param_1 + (long)(int)uVar13 * (long)iVar44 + 0x58);
      fVar45 = (float)FUN_095dced8(*unaff_x23 + 0x28,0);
      lVar36 = *unaff_x23;
    }
    if (lVar36 == 0) goto LAB_092c3994;
                    /* catch() { ... } // from try @ 092bcea8 with catch @ 092bce8c
                       catch() { ... } // from try @ 092bced8 with catch @ 092bce8c
                       catch() { ... } // from try @ 092bcf14 with catch @ 092bce8c */
    fVar46 = (float)FUN_095dcee0(lVar36 + 0x28,0);
                    /* try { // try from 092bcea0 to 093bcea7 has its CatchHandler @ 092bcebc */
                    /* try { // try from 092bcea8 to 093bced3 has its CatchHandler @ 092bce8c */
    fStack0000000000000118 = 0.0;
    fVar54 = in_stack_000000e0;
    if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
      fVar54 = unaff_s14;
    }
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 092bcea0 with catch @ 092bcebc
                        */
    fStack0000000000000114 = 0.0;
    if ((unaff_w25 & in_stack_0000128c == 0x2026) == 0) {
                    /* try { // try from 092bced4 to 093bced7 has its CatchHandler @ 092bcf04 */
      if (*unaff_x23 == 0) goto LAB_092c3994;
                    /* try { // try from 092bced8 to 093bcf07 has its CatchHandler @ 092bce8c */
      fStack0000000000000118 = (float)FUN_095dcf08(*unaff_x23 + 0x28,0);
      if (*unaff_x23 == 0) goto LAB_092c3994;
      fStack0000000000000114 = (float)FUN_095dcf38(*unaff_x23 + 0x28,0);
    }
    lVar36 = unaff_x19[0xcc];
                    /* catch() { ... } // from try @ 092bced4 with catch @ 092bcf04 */
                    /* try { // try from 092bcf08 to 093bcf13 has its CatchHandler @ 092bcf28 */
    if ((lVar36 == 0) || (*(long *)(lVar36 + 0x20) == 0)) goto LAB_092c3994;
    fVar69 = *(float *)((long)unaff_x19 + 0x43c);
    fVar72 = *(float *)(lVar36 + 0x2c);
    fVar47 = (float)FUN_095dd3d8(*(long *)(lVar36 + 0x20),0);
    if (*unaff_x23 == 0) goto LAB_092c3994;
    fVar48 = (float)FUN_095dcf30(*unaff_x23 + 0x28,0);
    if (*unaff_x23 == 0) goto LAB_092c3994;
    fVar60 = *(float *)((long)unaff_x19 + 0x43c);
    fVar49 = (float)FUN_095dcee0(*unaff_x23 + 0x28,0);
    lVar36 = unaff_x19[0x74];
    if ((lVar36 == 0) || (lVar30 = *(long *)(lVar36 + 0x38), lVar30 == 0)) goto LAB_092c3994;
    if (*unaff_x24 < *(uint *)(lVar30 + 0x18)) {
      lVar30 = lVar30 + (long)(int)*unaff_x24 * unaff_x28;
      *(undefined4 *)(lVar30 + 0x20) = 0;
      fVar54 = ((fStack000000000000011c * fVar67) / fVar45) * fVar46 * fVar54;
      fVar47 = fVar54 * fVar69 * fVar72 * fVar47;
      *(float *)(lVar30 + 0x15c) = fVar47;
      uVar13 = *(uint *)(unaff_x19 + 0x24);
      fVar49 = fVar54 * fVar48 * fVar60 * fVar49;
      if (uVar13 == 0) {
        fVar67 = *(float *)(unaff_x19 + 0xc6);
      }
      else {
        lVar30 = unaff_x19[0xe4];
        if (lVar30 == 0) goto LAB_092c3994;
        if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_092c3b00;
        lVar30 = *(long *)(lVar30 + (long)(int)uVar13 * 8 + 0x20);
        if (lVar30 == 0) goto LAB_092c3994;
        fVar67 = *(float *)(lVar30 + 0x54);
      }
LAB_092bd468:
      fVar45 = 0.0;
      uVar23 = in_stack_00001278;
      if (in_stack_0000128c != 3 && in_stack_0000128c != 0xad) {
        fVar45 = fVar47;
      }
LAB_092bd480:
      fVar54 = fVar45;
      lVar36 = *(long *)(lVar36 + 0x38);
      if (lVar36 == 0) goto LAB_092c3994;
      if (*(uint *)(lVar36 + 0x18) <= *unaff_x24) goto LAB_092c3b00;
      lVar36 = lVar36 + (long)(int)*unaff_x24 * unaff_x28;
      *(short *)(lVar36 + 0x24) = (short)in_stack_0000128c;
      *(int *)(lVar36 + 0x58) = (int)unaff_x19[0x42];
      *(int *)(lVar36 + 0x160) = (int)unaff_x19[0xa0];
      if ((unaff_x19[0x74] == 0) || (lVar36 = *(long *)(unaff_x19[0x74] + 0x38), lVar36 == 0))
      goto LAB_092c3994;
      if (*(uint *)(lVar36 + 0x18) <= *unaff_x24) goto LAB_092c3b00;
      *(int *)(lVar36 + (long)(int)*unaff_x24 * unaff_x28 + 0x164) = (int)unaff_x19[0x2b];
      if ((unaff_x19[0x74] == 0) || (lVar36 = *(long *)(unaff_x19[0x74] + 0x38), lVar36 == 0))
      goto LAB_092c3994;
      if (*(uint *)(lVar36 + 0x18) <= *unaff_x24) goto LAB_092c3b00;
      *(undefined4 *)(lVar36 + (long)(int)*unaff_x24 * unaff_x28 + 0x16c) =
           *(undefined4 *)((long)unaff_x19 + 0x15c);
      if ((unaff_x19[0x74] == 0) || (lVar36 = *(long *)(unaff_x19[0x74] + 0x38), lVar36 == 0))
      goto LAB_092c3994;
      uVar15 = *(undefined4 *)(_fStack00000000000000a8 + 2);
      uVar59 = *_fStack00000000000000a8;
      uVar13 = *unaff_x24;
      *(undefined8 *)(unaff_x29 + 0x128) = _fStack00000000000000a8[1];
      *(undefined8 *)(unaff_x29 + 0x120) = uVar59;
      if (*(uint *)(lVar36 + 0x18) <= uVar13) goto LAB_092c3b00;
      uVar63 = *(undefined8 *)(unaff_x29 + 0x128);
      uVar59 = *(undefined8 *)(unaff_x29 + 0x120);
      lVar36 = lVar36 + (long)(int)uVar13 * unaff_x28;
      *(undefined4 *)(lVar36 + 0x188) = uVar15;
      *(undefined8 *)(lVar36 + 0x180) = uVar63;
      *(undefined8 *)(lVar36 + 0x178) = uVar59;
      if ((*unaff_x27 == 0) || (lVar36 = *(long *)(*unaff_x27 + 0x38), lVar36 == 0))
      goto LAB_092c3994;
      if (*(uint *)(lVar36 + 0x18) <= *unaff_x24) goto LAB_092c3b00;
      lVar36 = lVar36 + (long)(int)*unaff_x24 * unaff_x28;
      lVar30 = *(long *)(lVar36 + 0x38);
      *(undefined4 *)(lVar36 + 0x18c) = *(undefined4 *)((long)unaff_x19 + 0x284);
      if ((lVar30 == 0) &&
         ((*in_stack_00000158 == 0 || (lVar30 = *(long *)(*in_stack_00000158 + 0x20), lVar30 == 0)))
         ) goto LAB_092c3994;
      FUN_095dd39c(&stack0x00001290,lVar30,0);
      uVar59 = *(undefined8 *)(unaff_x29 + 0x120);
      unaff_x26[1] = *(undefined8 *)(unaff_x29 + 0x128);
      *unaff_x26 = uVar59;
      uVar59 = *unaff_x26;
      *(undefined8 *)(unaff_x29 + 0xd8) = unaff_x26[1];
      *(undefined8 *)(unaff_x29 + 0xd0) = uVar59;
      if (in_stack_0000128c >> 0x10 == 0) {
        if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar13 = FUN_079a0ce0(in_stack_0000128c,0);
        uVar13 = uVar13 & 1;
      }
      else {
        uVar13 = 0;
      }
      uVar50 = 0;
      fStack00000000000000f4 = *(float *)(unaff_x19 + 0x5a);
      if (((in_stack_000000a0 & 1) != 0) && (*(int *)((long)unaff_x19 + 0x65c) == 0)) {
        if (*in_stack_00000158 == 0) goto LAB_092c3994;
        uVar40 = *(uint *)(*in_stack_00000158 + 0x28);
        uVar18 = *in_stack_00000180;
        if ((int)uVar18 < (int)uStack0000000000000054) {
          if ((*in_stack_00000178 == 0) ||
             (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0)) goto LAB_092c3994;
          uVar18 = uVar18 + 1;
          if (*(uint *)(lVar36 + 0x18) <= uVar18) goto LAB_092c3b00;
          if (*(int *)(lVar36 + (long)(int)uVar18 * (long)iVar44 + 0x20) == 0) {
            lVar36 = *(long *)(lVar36 + (long)(int)uVar18 * unaff_x28 + 0x30);
            if ((((lVar36 == 0) || (*unaff_x23 == 0)) ||
                (lVar30 = *(long *)(*unaff_x23 + 0x178), lVar30 == 0)) ||
               (lVar30 = *(long *)(lVar30 + 0x40), lVar30 == 0)) goto LAB_092c3994;
            uVar21 = FUN_074e1cf0(lVar30,uVar40 | *(int *)(lVar36 + 0x28) << 0x10,&stack0x00001170,
                                  *(undefined8 *)PTR_DAT_09fc9d00);
            if ((uVar21 & 1) != 0) {
              FUN_095e1928(&stack0x00001290,&stack0x00001170,0);
              uVar59 = *(undefined8 *)(unaff_x29 + 0x120);
              unaff_x26[0x17b] = *(undefined8 *)(unaff_x29 + 0x128);
              unaff_x26[0x17a] = uVar59;
              uVar50 = FUN_095e177c(&stack0x00001150,0);
              uVar21 = FUN_095e1964(&stack0x00001170,0);
              if ((uVar21 & 0x100) != 0) {
                fStack00000000000000f4 = 0.0;
              }
            }
          }
          uVar18 = *in_stack_00000180;
        }
        if (0 < (int)uVar18) {
          if ((*in_stack_00000178 == 0) ||
             (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0)) goto LAB_092c3994;
          if (*(uint *)(lVar36 + 0x18) <= uVar18 - 1) goto LAB_092c3b00;
          lVar36 = *(long *)(lVar36 + (ulong)(uVar18 - 1) * (unaff_x28 & 0xffffffff) + 0x30);
          if (lVar36 == 0) goto LAB_092c3994;
          uVar18 = *(uint *)(lVar36 + 0x28);
          lVar36 = FUN_09303b14();
          if ((lVar36 == 0) || (lVar36 = *(long *)(lVar36 + 0x38), lVar36 == 0)) goto LAB_092c3994;
          if (*(uint *)(lVar36 + 0x18) <= *in_stack_00000180 - 1) goto LAB_092c3b00;
          if (*(int *)(lVar36 + (long)(int)(*in_stack_00000180 - 1) * (long)iVar44 + 0x20) == 0) {
            if (((*_fStack0000000000000170 == 0) ||
                (lVar36 = *(long *)(*_fStack0000000000000170 + 0x178), lVar36 == 0)) ||
               (lVar36 = *(long *)(lVar36 + 0x40), lVar36 == 0)) goto LAB_092c3994;
            uVar21 = FUN_074e1cf0(lVar36,uVar18 | uVar40 << 0x10,&stack0x00001170,
                                  *(undefined8 *)PTR_DAT_09fc9d00);
            if ((uVar21 & 1) != 0) {
              FUN_095e1950(&stack0x00001290,&stack0x00001170,0);
              uVar59 = *(undefined8 *)(unaff_x29 + 0x120);
              unaff_x26[0x17b] = *(undefined8 *)(unaff_x29 + 0x128);
              unaff_x26[0x17a] = uVar59;
              FUN_095e177c(&stack0x00001150,0);
              FUN_095e15dc(uVar50,0);
              uVar21 = FUN_095e1964(&stack0x00001170,0);
              if ((uVar21 & 0x100) != 0) {
                fStack00000000000000f4 = 0.0;
              }
            }
          }
        }
      }
      if ((*in_stack_00000178 == 0) || (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0))
      goto LAB_092c3994;
      uVar18 = *in_stack_00000180;
      uVar50 = FUN_095e15b8(&stack0x00001230,0);
      if (*(uint *)(lVar36 + 0x18) <= uVar18) goto LAB_092c3b00;
      *(undefined4 *)(lVar36 + (long)(int)uVar18 * unaff_x28 + 0x154) = uVar50;
      if (*(int *)(*(long *)PTR_DAT_09fc9d80 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar21 = FUN_09335b8c(in_stack_0000128c,0);
      uVar18 = *in_stack_00000180;
      if ((uVar21 & 1) == 0) {
        if (0 < (int)uVar18) {
          if ((((uVar24 & 0x100000000) == 0) ||
              (uVar40 = *(uint *)((long)unaff_x19 + 0x32c), uVar40 == 0x80000000)) ||
             (uVar40 != uVar18 - 1)) {
            if ((in_stack_00000048 & 1) == 0) {
LAB_092bd914:
              bVar12 = false;
            }
            else {
              do {
                uVar40 = uVar18 - 1;
                if (((int)uVar18 < 1) || (uVar40 == *(uint *)((long)unaff_x19 + 0x32c)))
                goto LAB_092bd914;
                if ((*in_stack_00000178 == 0) ||
                   (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0)) goto LAB_092c3994;
                if (*(uint *)(lVar36 + 0x18) <= uVar40) goto LAB_092c3b00;
                lVar36 = *(long *)(lVar36 + (ulong)uVar40 * (unaff_x28 & 0xffffffff) + 0x30);
                if ((lVar36 == 0) || (lVar36 = *(long *)(lVar36 + 0x20), lVar36 == 0))
                goto LAB_092c3994;
                uVar18 = FUN_095dd38c(lVar36,0);
                if ((*in_stack_00000158 == 0) ||
                   (((*_fStack0000000000000170 == 0 ||
                     (lVar36 = *(long *)(*_fStack0000000000000170 + 0x178), lVar36 == 0)) ||
                    (lVar36 = *(long *)(lVar36 + 0x50), lVar36 == 0)))) goto LAB_092c3994;
                uVar22 = FUN_074f384c(lVar36,uVar18 | *(int *)(*in_stack_00000158 + 0x28) << 0x10,
                                      &stack0x00001120,*(undefined8 *)PTR_DAT_09fc9d10);
                uVar18 = uVar40;
              } while ((uVar22 & 1) == 0);
              if ((*in_stack_00000178 == 0) ||
                 (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0)) goto LAB_092c3994;
              if (*(uint *)(lVar36 + 0x18) <= uVar40) goto LAB_092c3b00;
              fVar45 = *(float *)((long)unaff_x19 + 0x4ec);
              fVar46 = *(float *)((long)unaff_x19 + 0x634);
              lVar36 = lVar36 + uVar40 * unaff_x28;
              fVar69 = *(float *)(lVar36 + 0x144);
              FUN_095e15a0(((*(float *)(lVar36 + 0x138) - *(float *)(unaff_x19 + 0xcb)) / fVar54 +
                           in_stack_00001124) - in_stack_00001130,&stack0x00001230,0);
              FUN_095e15b0(((fVar69 - ((fVar49 - fVar45) + fVar46)) / fVar54 + in_stack_00001128) -
                           in_stack_00001134,&stack0x00001230,0);
              fStack00000000000000f4 = 0.0;
              bVar12 = true;
            }
            if ((uVar24 & 0x100000000) != 0) {
              uVar18 = *(uint *)((long)unaff_x19 + 0x32c);
              if (!bVar12 && (long)(int)uVar18 != -0x80000000) {
                if ((*in_stack_00000178 == 0) ||
                   (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0)) goto LAB_092c3994;
                if (*(uint *)(lVar36 + 0x18) <= uVar18) goto LAB_092c3b00;
                lVar36 = *(long *)(lVar36 + (long)(int)uVar18 * unaff_x28 + 0x30);
                if ((lVar36 == 0) || (lVar36 = *(long *)(lVar36 + 0x20), lVar36 == 0))
                goto LAB_092c3994;
                uVar18 = FUN_095dd38c(lVar36,0);
                if ((*in_stack_00000158 == 0) ||
                   (((*_fStack0000000000000170 == 0 ||
                     (lVar36 = *(long *)(*_fStack0000000000000170 + 0x178), lVar36 == 0)) ||
                    (lVar36 = *(long *)(lVar36 + 0x48), lVar36 == 0)))) goto LAB_092c3994;
                uVar22 = FUN_074ec404(lVar36,uVar18 | *(int *)(*in_stack_00000158 + 0x28) << 0x10,
                                      &stack0x00001108,*(undefined8 *)PTR_DAT_09fc9d08);
                if ((uVar22 & 1) != 0) {
                  if ((*in_stack_00000178 != 0) &&
                     (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 != 0)) {
                    if (*(uint *)((long)unaff_x19 + 0x32c) < *(uint *)(lVar36 + 0x18)) {
                      FUN_095e15a0((in_stack_0000110c +
                                   (*(float *)(lVar36 + (long)(int)*(uint *)((long)unaff_x19 + 0x32c
                                                                            ) * unaff_x28 + 0x138) -
                                   *(float *)(unaff_x19 + 0xcb)) / fVar54) - in_stack_00001118,
                                   &stack0x00001230,0);
                      fVar45 = in_stack_00001110;
                      fVar46 = in_stack_0000111c;
                      goto LAB_092bda1c;
                    }
                    goto LAB_092c3b00;
                  }
                  goto LAB_092c3994;
                }
              }
            }
          }
          else {
            if ((*in_stack_00000178 == 0) ||
               (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0)) goto LAB_092c3994;
            if (*(uint *)(lVar36 + 0x18) <= uVar40) goto LAB_092c3b00;
            lVar36 = *(long *)(lVar36 + (long)(int)uVar40 * unaff_x28 + 0x30);
            if ((lVar36 == 0) || (lVar36 = *(long *)(lVar36 + 0x20), lVar36 == 0))
            goto LAB_092c3994;
            uVar18 = FUN_095dd38c(lVar36,0);
            if ((*in_stack_00000158 == 0) ||
               (((*_fStack0000000000000170 == 0 ||
                 (lVar36 = *(long *)(*_fStack0000000000000170 + 0x178), lVar36 == 0)) ||
                (lVar36 = *(long *)(lVar36 + 0x48), lVar36 == 0)))) goto LAB_092c3994;
            uVar22 = FUN_074ec404(lVar36,uVar18 | *(int *)(*in_stack_00000158 + 0x28) << 0x10,
                                  &stack0x00001138,*(undefined8 *)PTR_DAT_09fc9d08);
            if ((uVar22 & 1) != 0) {
              if ((*in_stack_00000178 == 0) ||
                 (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0)) goto LAB_092c3994;
              if (*(uint *)(lVar36 + 0x18) <= *(uint *)((long)unaff_x19 + 0x32c)) goto LAB_092c3b00;
              FUN_095e15a0((in_stack_0000113c +
                           (*(float *)(lVar36 + (long)(int)*(uint *)((long)unaff_x19 + 0x32c) *
                                                unaff_x28 + 0x138) - *(float *)(unaff_x19 + 0xcb)) /
                           fVar54) - in_stack_00001148,&stack0x00001230,0);
              fVar45 = in_stack_00001140;
              fVar46 = in_stack_0000114c;
LAB_092bda1c:
              FUN_095e15b0(fVar45 - fVar46,&stack0x00001230,0);
              fStack00000000000000f4 = 0.0;
            }
          }
        }
      }
      else {
        *(uint *)((long)unaff_x19 + 0x32c) = uVar18;
      }
      fVar45 = (float)FUN_095e15a8(&stack0x00001230,0);
      fVar46 = (float)FUN_095e15a8(&stack0x00001230,0);
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar72 = *(float *)(unaff_x19 + 0xcb);
        fVar69 = (float)FUN_095dd1e4(&stack0x00001240,0);
        fVar72 = fVar72 - fVar54 * fVar69 * (1.0 - *(float *)(unaff_x19 + 0x60));
        *(float *)(unaff_x19 + 0xcb) = fVar72;
        if ((in_stack_0000128c == 0x200b) || (uVar13 != 0)) {
          *(float *)(unaff_x19 + 0xcb) = fVar72 - in_stack_000000f0 * *(float *)(unaff_x19 + 0x5c);
        }
      }
      puVar11 = PTR_DAT_09fc9d30;
      fVar72 = *(float *)(unaff_x19 + 0x5b);
      fVar69 = 0.0;
      if (fVar72 != 0.0) {
        if (((*(char *)((long)unaff_x19 + 0x2dc) == '\0') || (0x3a < in_stack_0000128c)) ||
           (fVar69 = 0.25, (1L << ((ulong)in_stack_0000128c & 0x3f) & 0x400500000000000U) == 0)) {
          fVar69 = 0.5;
        }
        fVar48 = (float)FUN_095dd1c4(&stack0x00001240,0);
        fVar60 = (float)FUN_095dd1d4(&stack0x00001240,0);
        fVar69 = (1.0 - *(float *)(unaff_x19 + 0x60)) *
                 (fVar72 * fVar69 - fVar54 * (fVar48 * 0.5 + fVar60));
        *(float *)(unaff_x19 + 0xcb) = fVar69 + *(float *)(unaff_x19 + 0xcb);
      }
      if (((*(int *)((long)unaff_x19 + 0x65c) == 0) && (unaff_w20 == 0)) &&
         ((*(byte *)((long)unaff_x19 + 0x284) & 1) != 0)) {
        lVar36 = *in_stack_00000130;
        if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar22 = FUN_09531730(lVar36,0,0);
        fVar48 = 0.0;
        if ((uVar22 & 1) != 0) {
          lVar36 = *in_stack_00000130;
          if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if (lVar36 == 0) goto LAB_092c3994;
          uVar22 = FUN_094e2a9c(lVar36,*(undefined4 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x6c),0)
          ;
          if ((uVar22 & 1) != 0) {
            lVar36 = *in_stack_00000130;
            if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            if (lVar36 == 0) goto LAB_092c3994;
            fVar72 = (float)thunk_FUN_094e6ff8(lVar36,*(undefined4 *)
                                                       (*(long *)(*(long *)puVar11 + 0xb8) + 0x6c),0
                                              );
            if ((*_fStack0000000000000170 == 0) || (*in_stack_00000130 == 0)) goto LAB_092c3994;
            fVar60 = *(float *)(*_fStack0000000000000170 + 0x1a8);
            fVar48 = (float)thunk_FUN_094e6ff8(*in_stack_00000130,
                                               *(undefined4 *)
                                                (*(long *)(*(long *)PTR_DAT_09fc9d30 + 0xb8) + 0xe4)
                                               ,0);
            fVar48 = fVar48 * fVar72 * fVar60 * 0.25;
            if (fVar72 < fVar67 + fVar48) {
              fVar67 = fVar72 - fVar48;
            }
          }
        }
        if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
        fStack00000000000000ec = *(float *)(*_fStack0000000000000170 + 0x1ac);
      }
      else {
        lVar36 = *in_stack_00000130;
        if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar22 = FUN_09531730(lVar36,0,0);
        fStack00000000000000ec = 0.0;
        if ((uVar22 & 1) != 0) {
          lVar36 = *in_stack_00000130;
          if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if (lVar36 == 0) goto LAB_092c3994;
          uVar22 = FUN_094e2a9c(lVar36,*(undefined4 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x6c),0)
          ;
          if ((uVar22 & 1) != 0) {
            lVar36 = *in_stack_00000130;
            if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            if (lVar36 == 0) goto LAB_092c3994;
            uVar22 = FUN_094e2a9c(lVar36,*(undefined4 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0xe4),
                                  0);
            if ((uVar22 & 1) != 0) {
              lVar36 = *in_stack_00000130;
              if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              if (lVar36 != 0) {
                fVar72 = (float)thunk_FUN_094e6ff8(lVar36,*(undefined4 *)
                                                           (*(long *)(*(long *)puVar11 + 0xb8) +
                                                           0x6c),0);
                if ((*_fStack0000000000000170 != 0) && (*in_stack_00000130 != 0)) {
                  fVar60 = *(float *)(*_fStack0000000000000170 + 0x1a0);
                  fVar48 = (float)thunk_FUN_094e6ff8(*in_stack_00000130,
                                                     *(undefined4 *)
                                                      (*(long *)(*(long *)PTR_DAT_09fc9d30 + 0xb8) +
                                                      0xe4),0);
                  fVar48 = fVar48 * fVar72 * fVar60 * 0.25;
                  if (fVar72 < fVar67 + fVar48) {
                    fVar67 = fVar72 - fVar48;
                  }
                  goto LAB_092be06c;
                }
              }
              goto LAB_092c3994;
            }
          }
        }
        fVar48 = 0.0;
      }
LAB_092be06c:
      fVar58 = *(float *)(unaff_x19 + 0xcb);
      fVar72 = (float)FUN_095dd1d4(&stack0x00001240,0);
      fVar61 = *(float *)((long)unaff_x19 + 0x47c);
      fVar60 = (float)FUN_095e1598(&stack0x00001230,0);
      fVar58 = fVar58 + (1.0 - *(float *)(unaff_x19 + 0x60)) *
                        fVar54 * (fVar60 + ((fVar72 * fVar61 - fVar67) - fVar48));
      fVar72 = (float)FUN_095dd1dc(&stack0x00001240,0);
      fVar60 = (float)FUN_095e15a8(&stack0x00001230,0);
      fVar68 = *(float *)((long)unaff_x19 + 0x634) +
               ((fVar49 + fVar54 * (fVar67 + fVar72 + fVar60)) - *(float *)((long)unaff_x19 + 0x4ec)
               );
      fVar72 = (float)FUN_095dd1cc(&stack0x00001240,0);
      fVar73 = fVar68 - fVar54 * (fVar67 + fVar67 + fVar72);
      fVar72 = (float)FUN_095dd1c4(&stack0x00001240,0);
      fVar61 = fVar58 + (1.0 - *(float *)(unaff_x19 + 0x60)) *
                        fVar54 * (fVar48 + fVar48 +
                                 fVar67 + fVar67 + fVar72 * *(float *)((long)unaff_x19 + 0x47c));
      fVar60 = fVar58;
      fVar72 = fVar61;
      if (((*(int *)((long)unaff_x19 + 0x65c) == 0) && (unaff_w20 == 0)) &&
         ((*(byte *)((long)unaff_x19 + 0x284) >> 1 & 1) != 0)) {
        if (unaff_x19[0x20] == 0) goto LAB_092c3994;
        lVar36 = unaff_x19[0xc1];
        fVar72 = (float)FUN_095dcf10(unaff_x19[0x20] + 0x28,0);
        if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
        fVar60 = (float)FUN_095dcf30(*_fStack0000000000000170 + 0x28,0);
        if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
        fVar66 = *(float *)((long)unaff_x19 + 0x43c);
        fVar71 = *(float *)((long)unaff_x19 + 0x634);
        fVar51 = (float)(int)lVar36 * fStack0000000000000058;
        fVar52 = (float)FUN_095dcee0(*_fStack0000000000000170 + 0x28,0);
        fVar52 = fVar52 * fVar66 * (fVar72 - (fVar60 + fVar71)) * 0.5;
        fVar72 = (float)FUN_095dd1dc(&stack0x00001240,0);
        fVar60 = fVar51 * fVar54 * ((fVar48 + fVar67 + fVar72) - fVar52);
        fVar66 = (float)FUN_095dd1dc(&stack0x00001240,0);
        fVar71 = (float)FUN_095dd1cc(&stack0x00001240,0);
        fVar68 = fVar68 + 0.0;
        fVar73 = fVar73 + 0.0;
        fVar72 = fVar61 + fVar60;
        fVar60 = fVar58 + fVar60;
        fVar51 = fVar51 * fVar54 * ((((fVar66 - fVar71) - fVar67) - fVar48) - fVar52);
        fVar58 = fVar58 + fVar51;
        fVar61 = fVar61 + fVar51;
      }
      uVar63 = *(undefined8 *)(_uStack0000000000000148 + 0x198);
      uVar59 = *(undefined8 *)(_uStack0000000000000148 + 0x1a0);
      if (DAT_0a51bf45 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1eb60);
        DAT_0a51bf45 = '\x01';
      }
      uVar53 = **(undefined8 **)(*(long *)PTR_DAT_09f1eb60 + 0xb8);
      uVar55 = (*(undefined8 **)(*(long *)PTR_DAT_09f1eb60 + 0xb8))[1];
      fVar52 = 0.0;
      if (DAT_01c7611c <
          (float)((ulong)uVar59 >> 0x20) * (float)((ulong)uVar55 >> 0x20) +
          (float)uVar59 * (float)uVar55 +
          (float)uVar63 * (float)uVar53 +
          (float)((ulong)uVar63 >> 0x20) * (float)((ulong)uVar53 >> 0x20)) {
        fVar64 = 0.0;
        fVar62 = 0.0;
        fVar51 = 0.0;
        fVar66 = fVar73;
        fVar71 = fVar68;
      }
      else {
        FUN_09513820(&stack0x00001290,*(undefined4 *)((long)unaff_x19 + 0x46c),(int)unaff_x19[0x8e],
                     *(undefined4 *)((long)unaff_x19 + 0x474),(int)unaff_x19[0x8f],0);
        fVar65 = (fVar73 + fVar68) * 0.5;
        fVar70 = (fVar72 + fVar58) * 0.5;
        fVar68 = fVar68 - fVar65;
        unaff_x26[0x169] = in_stack_00001298;
        unaff_x26[0x168] = in_stack_00001290;
        unaff_x26[0x16b] = in_stack_000012a8;
        unaff_x26[0x16a] = CONCAT44(in_stack_000012a4,uVar15);
        fVar51 = 0.0;
        unaff_x26[0x16d] = in_stack_000012b8;
        unaff_x26[0x16c] = in_stack_000012b0;
        unaff_x26[0x16f] = in_stack_000012c8;
        unaff_x26[0x16e] = in_stack_000012c0;
        fVar71 = fVar68;
        fVar60 = (float)FUN_09513720(fVar60 - fVar70,&stack0x000010c0,0);
        fVar60 = fVar70 + fVar60;
        fVar51 = fVar51 + 0.0;
        fVar73 = fVar73 - fVar65;
        fVar62 = 0.0;
        fVar66 = fVar73;
        fVar58 = (float)FUN_09513720(fVar58 - fVar70,&stack0x000010c0,0);
        fVar58 = fVar70 + fVar58;
        fVar62 = fVar62 + 0.0;
        fVar64 = 0.0;
        fVar72 = (float)FUN_09513720(fVar72 - fVar70,&stack0x000010c0,0);
        fVar72 = fVar70 + fVar72;
        fVar64 = fVar64 + 0.0;
        fVar68 = fVar65 + fVar68;
        fVar52 = 0.0;
        fVar61 = (float)FUN_09513720(fVar61 - fVar70,&stack0x000010c0,0);
        fVar73 = fVar65 + fVar73;
        fVar61 = fVar70 + fVar61;
        fVar52 = fVar52 + 0.0;
        fVar66 = fVar65 + fVar66;
        fVar71 = fVar65 + fVar71;
      }
      fVar65 = 1.0;
      if ((*in_stack_00000178 == 0) || (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0))
      goto LAB_092c3994;
      if (*(uint *)(lVar36 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
      lVar36 = lVar36 + (long)(int)*in_stack_00000180 * unaff_x28;
      *(float *)(lVar36 + 0x114) = fVar58;
      *(float *)(lVar36 + 0x118) = fVar66;
      *(float *)(lVar36 + 0x11c) = fVar62;
      if ((*in_stack_00000178 == 0) || (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0))
      goto LAB_092c3994;
      if (*(uint *)(lVar36 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
      lVar36 = lVar36 + (long)(int)*in_stack_00000180 * unaff_x28;
      *(float *)(lVar36 + 0x108) = fVar60;
      *(float *)(lVar36 + 0x10c) = fVar71;
      *(float *)(lVar36 + 0x110) = fVar51;
      if ((*in_stack_00000178 == 0) || (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0))
      goto LAB_092c3994;
      if (*(uint *)(lVar36 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
      lVar36 = lVar36 + (long)(int)*in_stack_00000180 * unaff_x28;
      *(float *)(lVar36 + 0x124) = fVar68;
      *(float *)(lVar36 + 0x128) = fVar64;
      *(float *)(lVar36 + 0x120) = fVar72;
      if ((*in_stack_00000178 == 0) || (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0))
      goto LAB_092c3994;
      if (*(uint *)(lVar36 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
      lVar36 = lVar36 + (long)(int)*in_stack_00000180 * unaff_x28;
      *(float *)(lVar36 + 300) = fVar61;
      *(float *)(lVar36 + 0x130) = fVar73;
      *(float *)(lVar36 + 0x134) = fVar52;
      if (*in_stack_00000178 == 0) goto LAB_092c3994;
      lVar36 = *(long *)(*in_stack_00000178 + 0x38);
      uVar22 = (ulong)(uint)fVar54;
      if (lVar36 == 0) goto LAB_092c3994;
      uVar18 = *in_stack_00000180;
      fVar61 = *(float *)(unaff_x19 + 0xcb);
      fVar60 = (float)FUN_095e1598(&stack0x00001230,0);
      if (*(uint *)(lVar36 + 0x18) <= uVar18) goto LAB_092c3b00;
      *(float *)(lVar36 + (long)(int)uVar18 * unaff_x28 + 0x138) = fVar61 + fVar54 * fVar60;
      if ((*in_stack_00000178 == 0) || (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0))
      goto LAB_092c3994;
      uVar18 = *in_stack_00000180;
      fVar68 = *(float *)((long)unaff_x19 + 0x4ec);
      fVar61 = *(float *)((long)unaff_x19 + 0x634);
      fVar60 = (float)FUN_095e15a8(&stack0x00001230,0);
      if (*(uint *)(lVar36 + 0x18) <= uVar18) goto LAB_092c3b00;
      *(float *)(lVar36 + (long)(int)uVar18 * unaff_x28 + 0x144) =
           (fVar49 - fVar68) + fVar61 + fVar54 * fVar60;
      if ((*in_stack_00000178 == 0) || (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0))
      goto LAB_092c3994;
      uVar18 = *in_stack_00000180;
      lVar30 = (long)(int)uVar18;
      if (*(uint *)(lVar36 + 0x18) <= uVar18) goto LAB_092c3b00;
      *(float *)(lVar36 + lVar30 * unaff_x28 + 0x158) = (fVar72 - fVar58) / (fVar71 - fVar66);
      fVar45 = fVar54 * (fStack0000000000000118 + fVar45);
      if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
        fVar45 = fVar45 / fStack000000000000011c;
        fVar46 = (fVar54 * (fStack0000000000000114 + fVar46)) / fStack000000000000011c;
      }
      else {
        fVar46 = fVar54 * (fStack0000000000000114 + fVar46);
      }
      fVar72 = *(float *)((long)unaff_x19 + 0x634);
      uVar40 = *(uint *)(unaff_x19 + 0x95);
      if ((uVar13 == 0) || (uVar18 == uVar40)) {
        fVar46 = fVar72 + fVar46;
        fVar45 = fVar72 + fVar45;
        fVar60 = fVar46;
        fVar49 = fVar45;
        if (fVar72 != 0.0) {
          fVar49 = (fVar45 - fVar72) / *(float *)((long)unaff_x19 + 0x43c);
          fVar60 = (fVar46 - fVar72) / *(float *)((long)unaff_x19 + 0x43c);
          if (fVar49 <= fVar45) {
            fVar49 = fVar45;
          }
          if (fVar46 <= fVar60) {
            fVar60 = fVar46;
          }
        }
        lVar36 = lVar36 + lVar30 * unaff_x28;
        fVar72 = fVar49;
        if (fVar49 <= *(float *)((long)unaff_x19 + 0x4dc)) {
          fVar72 = *(float *)((long)unaff_x19 + 0x4dc);
        }
        fVar58 = fVar60;
        if (*(float *)(unaff_x19 + 0x9c) <= fVar60) {
          fVar58 = *(float *)(unaff_x19 + 0x9c);
        }
        *(float *)((long)unaff_x19 + 0x4dc) = fVar72;
        *(float *)(unaff_x19 + 0x9c) = fVar58;
        *(float *)(lVar36 + 0x14c) = fVar49;
        *(float *)(lVar36 + 0x150) = fVar60;
        fVar49 = *(float *)((long)unaff_x19 + 0x4ec);
        *(float *)(lVar36 + 0x140) = fVar45 - fVar49;
        *(float *)((long)unaff_x19 + 0x4d4) = fVar45 - fVar49;
        *(float *)(lVar36 + 0x148) = fVar46 - fVar49;
        *(float *)(unaff_x19 + 0x9b) = fVar46 - fVar49;
        if (((int)unaff_x19[0x97] == 0) || (*(char *)((long)unaff_x19 + 0x374) != '\0')) {
          *(float *)((long)unaff_x19 + 0x4cc) = fVar72;
          if (unaff_x19[0x20] == 0) goto LAB_092c3994;
          fVar46 = *(float *)(unaff_x19 + 0x9a);
          fVar72 = (float)FUN_095dcf10(unaff_x19[0x20] + 0x28,0);
          fStack000000000000011c = (fVar54 * fVar72) / fStack000000000000011c;
          fVar49 = *(float *)((long)unaff_x19 + 0x4ec);
          if (fVar46 <= fStack000000000000011c) {
            fVar46 = fStack000000000000011c;
          }
          *(float *)(unaff_x19 + 0x9a) = fVar46;
        }
        uVar56 = (ulong)(uint)fVar49;
        if (fVar49 == 0.0) {
          fVar46 = *(float *)(unaff_x19 + 0x99);
          if (*(float *)(unaff_x19 + 0x99) <= fVar45) {
            fVar46 = fVar45;
          }
          *(float *)(unaff_x19 + 0x99) = fVar46;
        }
      }
      else {
        fVar45 = *(float *)((long)unaff_x19 + 0x4dc);
        lVar36 = lVar36 + lVar30 * unaff_x28;
        *(float *)(lVar36 + 0x14c) = fVar45;
        fVar72 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar36 + 0x150) = fVar72;
        fVar46 = *(float *)((long)unaff_x19 + 0x4ec);
        uVar56 = (ulong)(uint)fVar46;
        fVar45 = fVar45 - fVar46;
        fVar72 = fVar72 - fVar46;
        *(float *)(lVar36 + 0x140) = fVar45;
        *(float *)((long)unaff_x19 + 0x4d4) = fVar45;
        *(float *)(lVar36 + 0x148) = fVar72;
        *(float *)(unaff_x19 + 0x9b) = fVar72;
      }
      lVar36 = *in_stack_00000178;
      if ((lVar36 == 0) || (lVar30 = *(long *)(lVar36 + 0x38), lVar30 == 0)) goto LAB_092c3994;
      uVar14 = *in_stack_00000180;
      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_092c3b00;
      lVar30 = lVar30 + (long)(int)uVar14 * unaff_x28;
      *(undefined1 *)(lVar30 + 400) = 0;
      uVar16 = *(uint *)(unaff_x19 + 0x54);
      uVar74 = in_stack_0000128c;
      if ((((in_stack_0000128c == 9) ||
           (((*(uint *)((long)unaff_x19 + 0x304) & 0xfffffffe) == 2 &&
            ((in_stack_0000128c == 0x200b || (uVar13 != 0)))))) ||
          ((uVar13 == 0 &&
           (((in_stack_0000128c != 3 && (in_stack_0000128c != 0x200b)) &&
            (in_stack_0000128c != 0xad)))))) ||
         ((((uint)(in_stack_0000128c == 0xad) & (uStack0000000000000060 ^ 0xffffffff)) != 0 ||
          (*(int *)((long)unaff_x19 + 0x65c) == 1)))) {
        *(undefined1 *)(lVar30 + 400) = 1;
        pfVar31 = _fStack00000000000000b8;
        pfVar33 = _iStack00000000000000c8;
        if (unaff_w25 != 0) {
          lVar36 = *(long *)(lVar36 + 0x50);
          if (lVar36 == 0) goto LAB_092c3994;
          if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_092c3b00;
          lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
          pfVar33 = (float *)(lVar36 + 100);
          pfVar31 = (float *)(lVar36 + 0x68);
        }
        fVar49 = *pfVar33;
        fVar46 = *pfVar31;
        fVar45 = *(float *)(unaff_x19 + 0x73);
        fVar72 = *(float *)(unaff_x19 + 0xcb);
        in_stack_00000100._4_4_ = (fStack00000000000000b4 - fVar49) - fVar46;
        bVar12 = true;
        if ((fVar45 <= in_stack_00000100._4_4_) && (bVar12 = false, !NAN(fVar45))) {
          bVar12 = fVar45 == -1.0;
        }
        if (!bVar12) {
          in_stack_00000100._4_4_ = fVar45;
        }
        fVar45 = 0.0;
        fVar60 = 0.0;
        if ((char)unaff_x19[0x1e] == '\0') {
          fVar60 = (float)FUN_095dd1e4(&stack0x00001240,0);
          uVar56 = (ulong)*(uint *)((long)unaff_x19 + 0x4ec);
        }
        fVar58 = *(float *)(unaff_x19 + 0x60);
        fVar61 = *(float *)(unaff_x19 + 0x9c);
        if (in_stack_0000128c != 0xad) {
          fVar47 = fVar54;
        }
        fVar68 = (float)uVar56;
        if ((0.0 < fVar68) && (fVar45 = 0.0, (char)unaff_x19[0x5e] == '\0')) {
          fVar45 = *(float *)(_uStack0000000000000148 + 0x208) -
                   *(float *)(_uStack0000000000000148 + 0x210);
        }
        uVar14 = *in_stack_00000180;
        fVar45 = (*(float *)((long)unaff_x19 + 0x4cc) - (fVar61 - fVar68)) + fVar45;
        if (fStack00000000000000d8 < fVar45) {
          if (*(int *)((long)unaff_x19 + 0x314) == -1) {
            *(uint *)((long)unaff_x19 + 0x314) = uVar14;
          }
          puVar11 = PTR_DAT_09f56060;
          in_stack_00001278 = DAT_01c74668;
          if ((char)unaff_x19[0x4c] != '\0') {
            fVar73 = *(float *)((long)unaff_x19 + 0x2f4);
            if (((fVar73 < *(float *)(unaff_x19 + 0x5d)) && (0.0 < fVar68)) &&
               (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
              fVar67 = *(float *)(unaff_x19 + 0x5d) +
                       ((fStack0000000000000018 - fVar45) / (float)(int)unaff_x19[0x97]) /
                       fStack0000000000000050;
              if (fVar67 <= fVar73) {
                fVar67 = fVar73;
              }
              goto LAB_092c39c0;
            }
            fVar68 = *(float *)((long)unaff_x19 + 0x20c);
            fVar45 = *(float *)(unaff_x19 + 0x4f);
            uVar56 = (ulong)(uint)fVar45;
            if ((fVar45 < fVar68) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
              fVar67 = (fVar68 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
              if (fVar67 <= DAT_01c7621c) {
                fVar67 = DAT_01c7621c;
              }
              fVar54 = (fVar68 - fVar67) * 20.0 + 0.5;
              *(float *)((long)unaff_x19 + 0x264) = fVar68;
              fVar67 = DAT_01c76874;
              if (fVar54 != INFINITY) {
                fVar67 = (float)(int)fVar54 / 20.0;
              }
              if (fVar67 <= fVar45) {
                fVar67 = fVar45;
              }
              goto LAB_092c0ea8;
            }
          }
          switch((int)unaff_x19[0x62]) {
          case 1:
            lVar36 = *(long *)PTR_DAT_09f56060;
            if (*(int *)(lVar36 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
              lVar36 = *(long *)puVar11;
            }
            lVar30 = *(long *)(lVar36 + 0xb8);
            if (*(int *)(lVar30 + 0x1708) == 0) {
LAB_092bf224:
              in_stack_00001278 = DAT_01c74668;
              in_stack_00000180[0] = 0;
              in_stack_00000180[1] = 0;
              in_stack_00001258 = 0xffffffff;
              goto LAB_092c09bc;
            }
            if (*(int *)(lVar36 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
              lVar30 = *(long *)(*(long *)PTR_DAT_09f56060 + 0xb8);
            }
            FUN_0677903c(&stack0x00001290,lVar30 + 0x1338,*(undefined8 *)PTR_DAT_09fc9da0);
            memcpy(&stack0x00000d08,&stack0x00001290,0x3b8);
LAB_092bf1f0:
            iVar19 = FUN_0930fffc();
            in_stack_00001258 = iVar19 - 1;
            unaff_w21 = unaff_w21 + 1;
            uVar14 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
            *(uint *)((long)unaff_x19 + 0x4a4) = uVar14;
            uVar15 = 0x2026;
            goto 
            UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_00000347_PostfixBurstDelegate__Invoke
            ;
          default:
            goto switchD_092bea04_caseD_2;
          case 3:
            if (*(int *)(*(long *)PTR_DAT_09f56060 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
LAB_092bec90:
            in_stack_00001258 = FUN_0930fffc();
            break;
          case 5:
            if ((uVar14 == 0) || ((int)in_stack_00001258 < 0)) {
              *in_stack_00000180 = 0;
              in_stack_00001258 = 0xffffffff;
            }
            else {
              fVar45 = *(float *)(_uStack0000000000000148 + 0x208);
              if (*(int *)(*(long *)PTR_DAT_09f56060 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              in_stack_00001258 = FUN_0930fffc();
              if (fStack00000000000000d8 < fVar45 - fVar61) break;
              *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
              *(undefined4 *)(unaff_x19 + 0x95) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
              uVar59 = NEON_rev64(*(undefined8 *)
                                   (*(long *)(*(long *)PTR_DAT_09f56060 + 0xb8) + 0x1730),4);
              *(undefined8 *)(_uStack0000000000000148 + 0x208) = uVar59;
              unaff_x19[0x99] = 0;
              uVar56 = 0;
              *(int *)(unaff_x19 + 0x97) = (int)unaff_x19[0x97] + 1;
              *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
              *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
              *(float *)(unaff_x19 + 0xcb) = *(float *)((long)unaff_x19 + 0x444) + 0.0;
              *(int *)((long)unaff_x19 + 0x4c4) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
              in_stack_00001278 = uVar23;
            }
            goto LAB_092c09bc;
          case 6:
            if (*(int *)(*(long *)PTR_DAT_09f56060 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            in_stack_00001258 = FUN_0930fffc();
            lVar36 = unaff_x19[99];
            if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
            }
            uVar21 = FUN_09531730(lVar36,0,0);
            if ((uVar21 & 1) != 0) {
              plVar43 = (long *)unaff_x19[99];
              uVar23 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar43 == (long *)0x0) goto LAB_092c3994;
              (**(code **)(*plVar43 + 0x558))(plVar43,uVar23,*(undefined8 *)(*plVar43 + 0x560));
              lVar36 = unaff_x19[99];
              if (lVar36 == 0) goto LAB_092c3994;
              *(int *)(lVar36 + 0x438) = (int)unaff_x19[0x87];
              FUN_09303930(lVar36,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
              plVar43 = (long *)unaff_x19[99];
              if (plVar43 == (long *)0x0) goto LAB_092c3994;
              (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x65) = 1;
            }
          }
FUN_092bee6c:
          uVar15 = 3;

          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_00000347_PostfixBurstDelegate__Invoke
          :
          in_stack_00001278 = CONCAT44(uVar15,uVar14);
          goto LAB_092c09bc;
        }
switchD_092bea04_caseD_2:
        puVar11 = PTR_DAT_09f56060;
        if ((uVar21 & 1) != 0) {
          fVar61 = 1.0 - fVar58;
          uVar56 = (ulong)(uint)fVar61;
          fVar47 = ABS(fVar72) + fVar60 * fVar61 * fVar47;
          fVar45 = fVar65;
          if ((uVar16 & 0x18) != 0) {
            fVar45 = DAT_01c760f8;
          }
          if (fVar47 <= fVar45 * in_stack_00000100._4_4_) goto LAB_092beb7c;
          if (((*(int *)((long)unaff_x19 + 0x304) == 0) || (*(int *)((long)unaff_x19 + 0x304) == 3))
             || (uVar14 == *(uint *)(unaff_x19 + 0x95))) {
            if (((char)unaff_x19[0x4c] != '\0') &&
               (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
              fVar72 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
              if (fVar58 < fVar72) {
                fVar67 = fVar47 / fVar61;
                if (fVar58 <= 0.0) {
                  fVar67 = fVar47;
                }
                fVar58 = fVar58 + (fVar47 - fVar45 * (in_stack_00000100._4_4_ + DAT_01c76534)) /
                                  fVar67;
                goto LAB_092c3ab4;
              }
              fVar60 = *(float *)((long)unaff_x19 + 0x20c);
              uVar56 = (ulong)(uint)fVar60;
              fVar72 = *(float *)(unaff_x19 + 0x4f);
              if (fVar60 <= fVar72) goto LAB_092beb30;
LAB_092c3a28:
              fVar67 = (fVar60 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
              if (fVar67 <= DAT_01c7621c) {
                fVar67 = DAT_01c7621c;
              }
              *(float *)((long)unaff_x19 + 0x264) = fVar60;
              fVar45 = (fVar60 - fVar67) * 20.0 + 0.5;
              fVar67 = DAT_01c76874;
              if (fVar45 != INFINITY) {
                fVar67 = (float)(int)fVar45 / 20.0;
              }
              if (fVar67 <= fVar72) {
                fVar67 = fVar72;
              }
LAB_092c0ea8:
              *(float *)((long)unaff_x19 + 0x20c) = fVar67;
              return;
            }
LAB_092beb30:
            iVar19 = (int)unaff_x19[0x62];
            if (iVar19 == 1) {
              lVar36 = *(long *)PTR_DAT_09f56060;
              if (*(int *)(lVar36 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
                lVar36 = *(long *)puVar11;
              }
              lVar30 = *(long *)(lVar36 + 0xb8);
              if (*(int *)(lVar30 + 0x1708) == 0) goto LAB_092bf224;
              if (*(int *)(lVar36 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
                lVar30 = *(long *)(*(long *)PTR_DAT_09f56060 + 0xb8);
              }
              FUN_0677903c(&stack0x00001290,lVar30 + 0x1338,*(undefined8 *)PTR_DAT_09fc9da0);
              memcpy(&stack0x00000598,&stack0x00001290,0x3b8);
              goto LAB_092bf1f0;
            }
            if (iVar19 != 6) {
              if (iVar19 == 3) {
                if (*(int *)(*(long *)PTR_DAT_09f56060 + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                goto LAB_092bec90;
              }
              goto LAB_092beb7c;
            }
            if (*(int *)(*(long *)PTR_DAT_09f56060 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            in_stack_00001258 = FUN_0930fffc();
            lVar36 = unaff_x19[99];
            if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
            }
            uVar21 = FUN_09531730(lVar36,0,0);
            if ((uVar21 & 1) != 0) {
              plVar43 = (long *)unaff_x19[99];
              uVar23 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar43 == (long *)0x0) goto LAB_092c3994;
              (**(code **)(*plVar43 + 0x558))(plVar43,uVar23,*(undefined8 *)(*plVar43 + 0x560));
              lVar36 = unaff_x19[99];
              if (lVar36 == 0) goto LAB_092c3994;
              *(int *)(lVar36 + 0x438) = (int)unaff_x19[0x87];
              FUN_09303930(lVar36,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
              plVar43 = (long *)unaff_x19[99];
              if (plVar43 == (long *)0x0) goto LAB_092c3994;
              (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x65) = 1;
            }
            in_stack_00001278 = CONCAT44(3,*in_stack_00000180);
            goto LAB_092c09bc;
          }
          if (*(int *)(*(long *)PTR_DAT_09f56060 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          in_stack_00001258 = FUN_0930fffc();
          if (*(float *)((long)unaff_x19 + 0x2ec) == DAT_01c76224) {
            lVar36 = *in_stack_00000178;
            if ((lVar36 == 0) || (lVar30 = *(long *)(lVar36 + 0x38), lVar30 == 0))
            goto LAB_092c3994;
            if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
            fVar72 = *(float *)((long)unaff_x19 + 0x4ec);
            fVar60 = 0.0;
            if ((0.0 < fVar72) && (fVar60 = 0.0, (char)unaff_x19[0x5e] == '\0')) {
              fVar60 = *(float *)(_uStack0000000000000148 + 0x208) -
                       *(float *)(_uStack0000000000000148 + 0x210);
            }
            fVar60 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2e4) +
                     *(float *)(lVar30 + (long)(int)*in_stack_00000180 * unaff_x28 + 0x14c) +
                     (fVar60 - *(float *)(unaff_x19 + 0x9c)) +
                     fStack0000000000000050 *
                     (in_stack_00000048._4_4_ + *(float *)(unaff_x19 + 0x5d));
          }
          else {
            lVar36 = unaff_x19[0x74];
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
            if (lVar36 == 0) goto LAB_092c3994;
            fVar72 = *(float *)((long)unaff_x19 + 0x4ec);
            fVar60 = *(float *)((long)unaff_x19 + 0x2ec) +
                     in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2e4);
          }
          puVar11 = PTR_DAT_09f56060;
          lVar36 = *(long *)(lVar36 + 0x38);
          if (lVar36 == 0) goto LAB_092c3994;
          uVar41 = *(uint *)((long)unaff_x19 + 0x4a4);
          if ((*(uint *)(lVar36 + 0x18) <= uVar41) ||
             (uVar6 = uVar41 - 1, *(uint *)(lVar36 + 0x18) <= uVar6)) goto LAB_092c3b00;
          fVar60 = fVar60 + *(float *)((long)unaff_x19 + 0x4cc);
          uVar56 = (ulong)(uint)fVar60;
          fVar61 = (fVar60 + fVar72) - *(float *)(lVar36 + (long)(int)uVar41 * unaff_x28 + 0x150);
          if (((uStack0000000000000060 & 1) == 0 &&
               *(short *)(lVar36 + (long)(int)uVar6 * (long)iVar44 + 0x24) == 0xad) &&
             ((fVar61 < fStack00000000000000d8 || ((int)unaff_x19[0x62] == 0)))) {
            uStack0000000000000060 = 0;
            *in_stack_00000180 = uVar6;
            in_stack_00001258 = in_stack_00001258 - 1;
            in_stack_00001278 = CONCAT44(0x2d,uVar6);
            goto LAB_092c09bc;
          }
          if (*(short *)(lVar36 + (long)(int)uVar41 * unaff_x28 + 0x24) == 0xad) {
            uStack0000000000000060 = 1;
            in_stack_00001278 = uVar23;
            goto LAB_092c09bc;
          }
          if ((in_stack_00000080._4_4_ & *(byte *)(unaff_x19 + 0x4c) & 1) != 0) {
            fVar58 = *(float *)(unaff_x19 + 0x60);
            fVar72 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
            if ((fVar72 <= fVar58) || ((int)unaff_x19[0x4e] <= *(int *)((long)unaff_x19 + 0x26c))) {
              fVar60 = *(float *)((long)unaff_x19 + 0x20c);
              uVar56 = (ulong)(uint)fVar60;
              fVar72 = *(float *)(unaff_x19 + 0x4f);
              if ((fVar72 < fVar60) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
              goto LAB_092c3a28;
              goto LAB_092c074c;
            }

            UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000359_PostfixBurstDelegate__BeginInvoke
            :
            fVar67 = fVar47;
            if (0.0 < fVar58) {
              fVar67 = fVar47 / (1.0 - fVar58);
            }
            fVar58 = fVar58 + (fVar47 - fVar45 * (in_stack_00000100._4_4_ + DAT_01c76534)) / fVar67;
LAB_092c3ab4:
            if (fVar72 <= fVar58) {
              fVar58 = fVar72;
            }
            *(float *)(unaff_x19 + 0x60) = fVar58;
            return;
          }
LAB_092c074c:
          lVar36 = *(long *)PTR_DAT_09f56060;
          if (*(int *)(lVar36 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
            lVar36 = *(long *)puVar11;
          }
          iVar19 = *(int *)(*(long *)(lVar36 + 0xb8) + 0xf80);
          if (((iVar19 != iStack000000000000001c) && (iVar19 != -1)) &&
             (((in_stack_00000080._4_4_ ^ 1) & 1) == 0)) {
            if (*(int *)(lVar36 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            in_stack_00001258 = FUN_0930fffc();
            if ((unaff_x19[0x74] == 0) || (lVar36 = *(long *)(unaff_x19[0x74] + 0x38), lVar36 == 0))
            goto LAB_092c3994;
            uVar41 = *in_stack_00000180 - 1;
            if (*(uint *)(lVar36 + 0x18) <= uVar41) goto LAB_092c3b00;
            iStack000000000000001c = iVar19;
            if (*(short *)(lVar36 + (long)(int)uVar41 * (long)iVar44 + 0x24) == 0xad) {
              uStack0000000000000060 = 0;
              *in_stack_00000180 = uVar41;
              in_stack_00001258 = in_stack_00001258 - 1;
              in_stack_00001278 = CONCAT44(0x2d,uVar41);
              goto LAB_092c09bc;
            }
          }
          if (fVar61 <= fStack00000000000000d8) {
            FUN_09310af4(fStack0000000000000050);
            uStack0000000000000060 = 0;
            uVar56 = uVar22;
            goto LAB_092c0198;
          }
          if (*(int *)((long)unaff_x19 + 0x314) == -1) {
            *(undefined4 *)((long)unaff_x19 + 0x314) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
          }
          if ((char)unaff_x19[0x4c] != '\0') {
            fVar72 = *(float *)((long)unaff_x19 + 0x2f4);
            if ((fVar72 < *(float *)(unaff_x19 + 0x5d)) &&
               (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
              fVar67 = *(float *)(unaff_x19 + 0x5d) +
                       ((fStack0000000000000018 - fVar61) / (float)((int)unaff_x19[0x97] + 1)) /
                       fStack0000000000000050;
              if (fVar67 <= fVar72) {
                fVar67 = fVar72;
              }
LAB_092c39c0:
              *(float *)(unaff_x19 + 0x5d) = fVar67;
              return;
            }
            fVar58 = *(float *)(unaff_x19 + 0x60);
            fVar72 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
            if ((fVar58 < fVar72) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
            goto 
            UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000359_PostfixBurstDelegate__BeginInvoke
            ;
            fVar60 = *(float *)((long)unaff_x19 + 0x20c);
            uVar56 = (ulong)(uint)fVar60;
            fVar72 = *(float *)(unaff_x19 + 0x4f);
            if ((fVar72 < fVar60) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
            goto LAB_092c3a28;
          }
          switch((int)unaff_x19[0x62]) {
          case 0:
          case 2:
          case 4:
            FUN_09310af4(fStack0000000000000050);
            goto LAB_092c0ce4;
          case 1:
            lVar36 = *(long *)PTR_DAT_09f56060;
            if (*(int *)(lVar36 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
              lVar36 = *(long *)PTR_DAT_09f56060;
            }
            in_stack_00001278 = DAT_01c74668;
            lVar30 = *(long *)(lVar36 + 0xb8);
            if (*(int *)(lVar30 + 0x1708) != 0) {
              if (*(int *)(lVar36 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
                lVar30 = *(long *)(*(long *)PTR_DAT_09f56060 + 0xb8);
              }
              FUN_0677903c(&stack0x00001290,lVar30 + 0x1338,*(undefined8 *)PTR_DAT_09fc9da0);
              memcpy(&stack0x00000950,&stack0x00001290,0x3b8);
              iVar19 = FUN_0930fffc();
              in_stack_00001258 = iVar19 - 1;
              unaff_w21 = unaff_w21 + 1;
              uVar14 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
              *(uint *)((long)unaff_x19 + 0x4a4) = uVar14;
              uVar15 = 0x2026;
              goto UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility__Angle_BurstManaged
              ;
            }
            in_stack_00001258 = 0xffffffff;
            in_stack_00000180[0] = 0;
            in_stack_00000180[1] = 0;
            break;
          case 3:
            if (*(int *)(*(long *)PTR_DAT_09f56060 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            in_stack_00001258 = FUN_0930fffc();
            uVar15 = 3;
UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility__Angle_BurstManaged:
            in_stack_00001278 = CONCAT44(uVar15,uVar14);
            break;
          case 5:
            *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
            FUN_09310af4(fStack0000000000000050);
            *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
            *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
            unaff_x19[0x99] = 0;
            *(int *)((long)unaff_x19 + 0x4c4) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
LAB_092c0ce4:
            uStack0000000000000060 = 0;
            uVar56 = uVar22;
LAB_092c0198:
            in_stack_00000080._4_4_ = 1;
            fStack0000000000000068 = 1.4013e-45;
            in_stack_00001278 = uVar23;
            goto LAB_092c09bc;
          case 6:
            lVar36 = unaff_x19[99];
            if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            uVar21 = FUN_09531730(lVar36,0,0);
            if ((uVar21 & 1) != 0) {
              plVar43 = (long *)unaff_x19[99];
              uVar23 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar43 == (long *)0x0) goto LAB_092c3994;
              (**(code **)(*plVar43 + 0x558))(plVar43,uVar23,*(undefined8 *)(*plVar43 + 0x560));
              lVar36 = unaff_x19[99];
              if (lVar36 == 0) goto LAB_092c3994;
              *(int *)(lVar36 + 0x438) = (int)unaff_x19[0x87];
              FUN_09303930(lVar36,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
              plVar43 = (long *)unaff_x19[99];
              if (plVar43 == (long *)0x0) goto LAB_092c3994;
              (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x65) = 1;
            }
            in_stack_00001278 = CONCAT44(3,*in_stack_00000180);
            break;
          default:
            uStack0000000000000060 = 0;
            goto LAB_092beb7c;
          }
          uStack0000000000000060 = 0;
LAB_092c09bc:
          do {
            unaff_x29 = &stack0x00001170;
            unaff_s14 = 1.0;
            in_stack_00001258 = in_stack_00001258 + 1;
            lVar36 = unaff_x19[0x91];
            if (lVar36 == 0) goto LAB_092c3994;
            if ((int)*(uint *)(lVar36 + 0x18) <= (int)in_stack_00001258) {
LAB_092c0dec:
              fVar67 = (float)uVar56;
              if (((char)unaff_x19[0x4c] != '\0') &&
                 (fVar67 = DAT_01c75ea4,
                 DAT_01c75ea4 < *(float *)((long)unaff_x19 + 0x264) - *(float *)(unaff_x19 + 0x4d)))
              {
                fVar67 = *(float *)((long)unaff_x19 + 0x20c);
                fVar45 = *(float *)((long)unaff_x19 + 0x27c);
                if ((fVar67 < fVar45) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
                {
                  if (*(float *)(unaff_x19 + 0x60) < *(float *)((long)unaff_x19 + 0x2fc) / 100.0) {
                    *(undefined4 *)(unaff_x19 + 0x60) = 0;
                  }
                  fVar54 = (*(float *)((long)unaff_x19 + 0x264) - fVar67) * 0.5;
                  if (fVar54 <= DAT_01c7621c) {
                    fVar54 = DAT_01c7621c;
                  }
                  *(float *)(unaff_x19 + 0x4d) = fVar67;
                  fVar54 = (fVar67 + fVar54) * 20.0 + 0.5;
                  fVar67 = DAT_01c76874;
                  if (fVar54 != INFINITY) {
                    fVar67 = (float)(int)fVar54 / 20.0;
                  }
                  if (fVar45 <= fVar67) {
                    fVar67 = fVar45;
                  }
                  goto LAB_092c0ea8;
                }
              }
              *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
              plVar43 = (long *)PTR_DAT_09f56060;
              if ((int)unaff_x19[0x4e] <= *(int *)((long)unaff_x19 + 0x26c)) {
                uVar23 = FUN_07a3b850(in_stack_00000038,0);
                uVar59 = FUN_07a5081c(in_stack_00000040,0);
                uVar23 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09fc9e20,uVar23,
                                      *(undefined8 *)PTR_DAT_09fc9e08,uVar59,0);
                if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                  thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                }
                FUN_094c652c(uVar23,0);
              }
              if ((*in_stack_00000180 == 0) || ((*in_stack_00000180 == 1 && (uVar74 == 3)))) {
                (**(code **)(*unaff_x19 + 0x958))();
                goto LAB_092c0f78;
              }
              lVar36 = *plVar43;
              if (*(int *)(lVar36 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
                lVar36 = *plVar43;
              }
              lVar36 = **(long **)(lVar36 + 0xb8);
              if (lVar36 == 0) goto LAB_092c3994;
              if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_092c3b00;
              iVar44 = *(int *)(lVar36 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x38 + 0x54) << 2;
              if ((*in_stack_00000178 == 0) ||
                 (lVar36 = *(long *)(*in_stack_00000178 + 0x60), lVar36 == 0)) goto LAB_092c3994;
              if (*(int *)(*(long *)PTR_DAT_09fc9d40 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              if (*(int *)(lVar36 + 0x18) == 0) goto LAB_092c3b00;
              FUN_09329054(lVar36 + 0x20,0,0);
              if (DAT_0a51bf43 == '\0') {
                FUN_04447ba8(PTR_DAT_09f1e740);
                DAT_0a51bf43 = '\x01';
              }
              iVar19 = (int)unaff_x19[0x53];
              fStack00000000000000ec = **(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
              _in_stack_000000e0 =
                   *(undefined8 *)(*(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8) + 1);
              lVar36 = unaff_x19[0xee];
              in_stack_000000a0 = _in_stack_000000e0;
              fStack00000000000000a8 = fStack00000000000000ec;
              if (iVar19 < 0x401) {
                if (iVar19 == 0x100) {
                  if (lVar36 == 0) goto LAB_092c3994;
                  if (*(uint *)(lVar36 + 0x18) < 2) goto LAB_092c3b00;
                  uVar23 = *(undefined8 *)(lVar36 + 0x30);
                  if ((int)unaff_x19[0x62] == 5) {
                    if ((*in_stack_00000178 == 0) ||
                       (lVar30 = *(long *)(*in_stack_00000178 + 0x58), lVar30 == 0))
                    goto LAB_092c3994;
                    if (*(uint *)(lVar30 + 0x18) <= uStack0000000000000034) goto LAB_092c3b00;
                    fVar67 = *(float *)(lVar30 + (long)(int)uStack0000000000000034 * 0x14 + 0x28);
                  }
                  else {
                    fVar67 = *(float *)((long)unaff_x19 + 0x4cc);
                  }
                  fStack00000000000000a8 = fStack0000000000000030 + 0.0 + *(float *)(lVar36 + 0x2c);
                  fVar67 = (0.0 - fVar67) - fStack0000000000000024;
                }
                else if (iVar19 == 0x200) {
                  if (lVar36 == 0) goto LAB_092c3994;
                  if ((*(int *)(lVar36 + 0x18) == 1) || (*(int *)(lVar36 + 0x18) == 0))
                  goto LAB_092c3b00;
                  fStack00000000000000a8 =
                       (*(float *)(lVar36 + 0x20) + *(float *)(lVar36 + 0x2c)) * 0.5;
                  uVar23 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar36 + 0x24) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(lVar36 + 0x30) >> 0x20)) * 0.5,
                                    ((float)*(undefined8 *)(lVar36 + 0x24) +
                                    (float)*(undefined8 *)(lVar36 + 0x30)) * 0.5);
                  if ((int)unaff_x19[0x62] == 5) {
                    if ((*in_stack_00000178 == 0) ||
                       (lVar36 = *(long *)(*in_stack_00000178 + 0x58), lVar36 == 0))
                    goto LAB_092c3994;
                    if (*(uint *)(lVar36 + 0x18) <= uStack0000000000000034) goto LAB_092c3b00;
                    lVar36 = lVar36 + (long)(int)uStack0000000000000034 * 0x14;
                    fStack00000000000000a8 = fStack0000000000000030 + 0.0 + fStack00000000000000a8;
                    fVar67 = ((fStack0000000000000024 + *(float *)(lVar36 + 0x28) +
                              *(float *)(lVar36 + 0x30)) - in_stack_00000028) * -0.5 + 0.0;
                  }
                  else {
                    fStack00000000000000a8 = fStack0000000000000030 + 0.0 + fStack00000000000000a8;
                    fVar67 = ((fStack0000000000000024 + *(float *)((long)unaff_x19 + 0x4cc) +
                              in_stack_00001288) - in_stack_00000028) * -0.5 + 0.0;
                  }
                }
                else {
                  if (iVar19 != 0x400) goto LAB_092c1438;
                  if (lVar36 == 0) goto LAB_092c3994;
                  if (*(int *)(lVar36 + 0x18) == 0) goto LAB_092c3b00;
                  uVar23 = *(undefined8 *)(lVar36 + 0x24);
                  if ((int)unaff_x19[0x62] == 5) {
                    if ((*in_stack_00000178 == 0) ||
                       (lVar30 = *(long *)(*in_stack_00000178 + 0x58), lVar30 == 0))
                    goto LAB_092c3994;
                    if (*(uint *)(lVar30 + 0x18) <= uStack0000000000000034) goto LAB_092c3b00;
                    in_stack_00001288 =
                         *(float *)(lVar30 + (long)(int)uStack0000000000000034 * 0x14 + 0x30);
                  }
                  fStack00000000000000a8 = fStack0000000000000030 + 0.0 + *(float *)(lVar36 + 0x20);
                  fVar67 = in_stack_00000028 + (0.0 - in_stack_00001288);
                }
LAB_092c1428:
                in_stack_000000a0 =
                     CONCAT44((float)((ulong)uVar23 >> 0x20) + 0.0,(float)uVar23 + fVar67);
              }
              else if (iVar19 == 0x800) {
                if (lVar36 == 0) goto LAB_092c3994;
                if ((*(int *)(lVar36 + 0x18) == 1) || (*(int *)(lVar36 + 0x18) == 0))
                goto LAB_092c3b00;
                fVar67 = fStack0000000000000030 + 0.0 +
                         (*(float *)(lVar36 + 0x20) + *(float *)(lVar36 + 0x2c)) * 0.5;
                in_stack_000000a0 =
                     CONCAT44(((float)((ulong)*(undefined8 *)(lVar36 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar36 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar36 + 0x24) +
                              (float)*(undefined8 *)(lVar36 + 0x30)) * 0.5 + 0.0);
                fStack00000000000000a8 = fVar67;
              }
              else {
                if (iVar19 == 0x1000) {
                  if (lVar36 == 0) goto LAB_092c3994;
                  if ((*(int *)(lVar36 + 0x18) != 1) && (*(int *)(lVar36 + 0x18) != 0)) {
                    uVar23 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar36 + 0x24) >> 0x20) +
                                      (float)((ulong)*(undefined8 *)(lVar36 + 0x30) >> 0x20)) * 0.5,
                                      ((float)*(undefined8 *)(lVar36 + 0x24) +
                                      (float)*(undefined8 *)(lVar36 + 0x30)) * 0.5);
                    fStack00000000000000a8 =
                         fStack0000000000000030 + 0.0 +
                         (*(float *)(lVar36 + 0x20) + *(float *)(lVar36 + 0x2c)) * 0.5;
                    fVar67 = 0.0 - ((fStack0000000000000024 + *(float *)((long)unaff_x19 + 0x4fc) +
                                    *(float *)((long)unaff_x19 + 0x4f4)) - in_stack_00000028) * 0.5;
                    goto LAB_092c1428;
                  }
                  goto LAB_092c3b00;
                }
                if (iVar19 == 0x2000) {
                  if (lVar36 == 0) goto LAB_092c3994;
                  if ((*(int *)(lVar36 + 0x18) == 1) || (*(int *)(lVar36 + 0x18) == 0))
                  goto LAB_092c3b00;
                  fVar67 = 0.0 - ((*(float *)(unaff_x19 + 0x9a) - fStack0000000000000024) -
                                 in_stack_00000028) * 0.5;
                  in_stack_000000a0 =
                       CONCAT44(((float)((ulong)*(undefined8 *)(lVar36 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar36 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                ((float)*(undefined8 *)(lVar36 + 0x24) +
                                (float)*(undefined8 *)(lVar36 + 0x30)) * 0.5 + fVar67);
                  fStack00000000000000a8 =
                       fStack0000000000000030 + 0.0 +
                       (*(float *)(lVar36 + 0x20) + *(float *)(lVar36 + 0x2c)) * 0.5;
                }
              }
LAB_092c1438:
              lVar36 = FUN_092ce4f0();
              if (lVar36 == 0) goto LAB_092c3994;
              FUN_0953db60(lVar36,0);
              *(float *)((long)unaff_x19 + 0x6fc) = fVar67;
              uVar15 = FUN_04624244(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
              FUN_04624244(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
              if (*(int *)(*(long *)PTR_DAT_09fc9d48 + 0xe4) == 0) {
                thunk_FUN_044a54b4(*(long *)PTR_DAT_09fc9d48);
              }
              if (DAT_0a53e2cf == '\0') {
                FUN_04447ba8(PTR_DAT_09fc9d48);
                DAT_0a53e2cf = '\x01';
              }
              puVar11 = PTR_DAT_09fc9d48;
              lVar36 = *(long *)PTR_DAT_09fc9d48;
              if (*(int *)(lVar36 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
                lVar36 = *(long *)puVar11;
              }
              puVar28 = *(undefined4 **)(lVar36 + 0xb8);
              FUN_092df690(*puVar28,puVar28[1],puVar28[2],puVar28[3],&stack0x00001260,0x4000ffff,0);
              if (*(int *)(*plVar43 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              lVar36 = *in_stack_00000178;
              if (lVar36 == 0) goto LAB_092c3994;
              uVar13 = *in_stack_00000180;
              if ((int)uVar13 < 1) {
                iStack00000000000000c8 = 0;
                iVar19 = 0;
                goto LAB_092c3558;
              }
              lVar36 = *(long *)(lVar36 + 0x38);
              if (lVar36 == 0) goto LAB_092c3994;
              fStack00000000000000f4 = *(float *)(*(long *)(*plVar43 + 0xb8) + 0x1730);
              in_stack_000000f0 = 0.0;
              fStack0000000000000070 = in_stack_000000c0._4_4_;
              fStack0000000000000074 = 0.0;
              fStack0000000000000114 = 0.0;
              fStack000000000000005c = 0.0;
              fStack000000000000008c = in_stack_000000c0._4_4_;
              fStack0000000000000090 = 0.0;
              fStack0000000000000058 = 0.0;
              fVar45 = 0.0;
              bVar10 = false;
              bVar9 = false;
              bVar8 = false;
              bVar12 = false;
              iStack00000000000000c8 = 0;
              uStack0000000000000054 = 0;
              uStack0000000000000148 = 0;
              fStack0000000000000064 = 0.0;
              iStack0000000000000110 = 0;
              lStack0000000000000160 = 0x2dc;
              fStack00000000000000b4 = in_stack_000000c0._4_4_;
              fStack00000000000000b8 = in_stack_000000d0._4_4_;
              fStack0000000000000068 = in_stack_000000d0._4_4_;
              uStack000000000000006c = uStack00000000000000b0;
              in_stack_00000080._4_4_ = uStack00000000000000b0;
              fStack0000000000000088 = in_stack_000000d0._4_4_;
              uVar18 = 0;
              uVar40 = 1;
              goto LAB_092c15cc;
            }
            if (*(uint *)(lVar36 + 0x18) <= in_stack_00001258) goto LAB_092c3b00;
            in_stack_0000128c = *(uint *)(lVar36 + (long)(int)in_stack_00001258 * 0x10 + 0x24);
            if (in_stack_0000128c == 0) goto LAB_092c0dec;
            if (5 < unaff_w21) {
              uVar23 = FUN_07a5ae30(&stack0x0000128c,0);
              uVar59 = FUN_07a3b850(&stack0x00001258,0);
              uVar23 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09fc9e00,uVar23,
                                    *(undefined8 *)PTR_DAT_09fc9e10,uVar59,0);
              if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
              }
              FUN_094c6b48(uVar23,0);
              in_stack_00001278 = CONCAT44(3,*in_stack_00000180);
            }
            uVar74 = in_stack_0000128c;
          } while (in_stack_0000128c == 0x1a);
          if ((in_stack_0000128c == 0x3c) && (*(char *)((long)unaff_x19 + 0x33a) != '\0')) {
            *(undefined1 *)((long)unaff_x19 + 0x469) = 1;
            *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
            uVar21 = FUN_0930ad80();
            if (((uVar21 & 1) != 0) &&
               (in_stack_00001258 = in_stack_0000122c, *(int *)((long)unaff_x19 + 0x65c) == 0))
            goto LAB_092c09bc;
          }
          else {
            if ((*in_stack_00000178 == 0) ||
               (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0)) goto LAB_092c3994;
            if (*(uint *)(lVar36 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
            lVar36 = lVar36 + (long)(int)*in_stack_00000180 * unaff_x28;
            *(undefined4 *)((long)unaff_x19 + 0x65c) = *(undefined4 *)(lVar36 + 0x20);
            *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar36 + 0x50);
            unaff_x19[0x20] = *(long *)(lVar36 + 0x40);
            thunk_FUN_044bb4b4(_fStack0000000000000170);
          }
          if ((unaff_x19[0x74] == 0) || (lVar36 = *(long *)(unaff_x19[0x74] + 0x38), lVar36 == 0))
          goto LAB_092c3994;
          uVar13 = *in_stack_00000180;
          if (*(uint *)(lVar36 + 0x18) <= uVar13) goto LAB_092c3b00;
          lVar42 = (long)(int)uVar13;
          unaff_w20 = (uint)*(byte *)(lVar36 + lVar42 * unaff_x28 + 0x54);
          *(undefined1 *)((long)unaff_x19 + 0x469) = 0;
          lVar30 = unaff_x19[0x24];
          if ((uint)in_stack_00001278 == uVar13) {
            in_stack_0000128c = (uint)((ulong)in_stack_00001278 >> 0x20);
            *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
            if (in_stack_0000128c == 0x2026) {
              *(long *)(lVar36 + lVar42 * unaff_x28 + 0x30) = unaff_x19[0xcd];
              thunk_FUN_044bb4b4();
              if ((unaff_x19[0x74] == 0) ||
                 (lVar36 = *(long *)(unaff_x19[0x74] + 0x38), lVar36 == 0)) goto LAB_092c3994;
              if (*(uint *)(lVar36 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
              lVar36 = lVar36 + (long)(int)*in_stack_00000180 * unaff_x28;
              *(undefined4 *)(lVar36 + 0x20) = 0;
              *(long *)(lVar36 + 0x40) = unaff_x19[0xce];
              thunk_FUN_044bb4b4();
              if ((unaff_x19[0x74] == 0) ||
                 (lVar36 = *(long *)(unaff_x19[0x74] + 0x38), lVar36 == 0)) goto LAB_092c3994;
              if (*(uint *)(lVar36 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
              *(long *)(lVar36 + (long)(int)*in_stack_00000180 * unaff_x28 + 0x48) = unaff_x19[0xcf]
              ;
              thunk_FUN_044bb4b4();
              if ((*in_stack_00000178 == 0) ||
                 (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0)) goto LAB_092c3994;
              if (*(uint *)(lVar36 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
              *(int *)(lVar36 + (long)(int)*in_stack_00000180 * unaff_x28 + 0x50) =
                   (int)unaff_x19[0xd0];
              puVar11 = PTR_DAT_09f56060;
              lVar36 = *(long *)PTR_DAT_09f56060;
              if (*(int *)(lVar36 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
                lVar36 = *(long *)puVar11;
              }
              lVar36 = **(long **)(lVar36 + 0xb8);
              if (lVar36 == 0) goto LAB_092c3994;
              if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_092c3b00;
              lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x38;
              unaff_w25 = 1;
              *(int *)(lVar36 + 0x54) = *(int *)(lVar36 + 0x54) + 1;
              uVar13 = *(uint *)((long)unaff_x19 + 0x4a4);
              *(undefined1 *)(unaff_x19 + 0x65) = 1;
              in_stack_00001278 = CONCAT44(3,uVar13 + 1);
            }
            else if (in_stack_0000128c == 3) {
              if ((*_fStack0000000000000170 == 0) ||
                 (lVar20 = FUN_092e76b0(*_fStack0000000000000170,0), lVar20 == 0))
              goto LAB_092c3994;
              uVar23 = FUN_074f8f30(lVar20,3,*(undefined8 *)PTR_DAT_09fc9d18);
              if (*(uint *)(lVar36 + 0x18) <= uVar13) goto LAB_092c3b00;
              *(undefined8 *)(lVar36 + lVar42 * unaff_x28 + 0x30) = uVar23;
              thunk_FUN_044bb4b4();
              uVar13 = *(uint *)((long)unaff_x19 + 0x4a4);
              unaff_w25 = 1;
              *(undefined1 *)(unaff_x19 + 0x65) = 1;
            }
            else {
              unaff_w25 = 1;
            }
          }
          else {
            unaff_w25 = 0;
          }
          if (((int)uVar13 < *(int *)((long)unaff_x19 + 0x35c)) && (in_stack_0000128c != 3)) {
            if ((*in_stack_00000178 == 0) ||
               (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0)) goto LAB_092c3994;
            if (*(uint *)(lVar36 + 0x18) <= uVar13) goto LAB_092c3b00;
            lVar36 = lVar36 + (long)(int)uVar13 * (long)iVar44;
            *(undefined1 *)(lVar36 + 400) = 0;
            *(undefined2 *)(lVar36 + 0x24) = 0x200b;
            *(undefined4 *)(lVar36 + 0x5c) = 0;
            *in_stack_00000180 = uVar13 + 1;
            uVar74 = in_stack_0000128c;
            goto LAB_092c09bc;
          }
          iVar19 = *(int *)((long)unaff_x19 + 0x65c);
          if (iVar19 == 0) {
            uVar13 = *(uint *)((long)unaff_x19 + 0x284);
            if ((uVar13 >> 4 & 1) == 0) {
              if ((uVar13 >> 3 & 1) == 0) {
                fStack000000000000011c = 1.0;
                if ((uVar13 >> 5 & 1) != 0) {
                  if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
                    thunk_FUN_044a54b4();
                  }
                  uVar21 = FUN_079a35e8(in_stack_0000128c,0);
                  if ((uVar21 & 1) != 0) {
                    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                    }
                    uVar13 = FUN_079a3874(in_stack_0000128c,0);
                    in_stack_0000128c = uVar13 & 0xffff;
                    fStack000000000000011c = fStack0000000000000020;
                  }
                }
              }
              else {
                if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                uVar21 = FUN_079a3548(in_stack_0000128c,0);
                fStack000000000000011c = 1.0;
                if ((uVar21 & 1) != 0) {
                  if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
                    thunk_FUN_044a54b4();
                  }
                  uVar13 = FUN_079a39ec(in_stack_0000128c,0);
                  goto LAB_092bcca8;
                }
              }
            }
            else {
              if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              uVar21 = FUN_079a35e8(in_stack_0000128c,0);
              fStack000000000000011c = 1.0;
              if ((uVar21 & 1) != 0) {
                if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                uVar13 = FUN_079a3874(in_stack_0000128c,0);
LAB_092bcca8:
                fStack000000000000011c = 1.0;
                in_stack_0000128c = uVar13 & 0xffff;
              }
            }
            iVar19 = *(int *)((long)unaff_x19 + 0x65c);
          }
          else {
            fStack000000000000011c = 1.0;
          }
          unaff_x23 = _fStack0000000000000170;
          unaff_x24 = in_stack_00000180;
          unaff_x27 = in_stack_00000178;
          if (iVar19 == 0) {
            if ((*in_stack_00000178 == 0) ||
               (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0)) goto LAB_092c3994;
            if (*(uint *)(lVar36 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
            *in_stack_00000158 =
                 *(long *)(lVar36 + (long)(int)*in_stack_00000180 * unaff_x28 + 0x30);
            thunk_FUN_044bb4b4(in_stack_00000158);
            uVar74 = in_stack_0000128c;
            if (*in_stack_00000158 != 0) {
              if ((*in_stack_00000178 == 0) ||
                 (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0)) goto LAB_092c3994;
              if (*(uint *)(lVar36 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
              *_fStack0000000000000170 =
                   *(long *)(lVar36 + (long)(int)*in_stack_00000180 * unaff_x28 + 0x40);
              thunk_FUN_044bb4b4(_fStack0000000000000170);
              if ((*in_stack_00000178 == 0) ||
                 (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0)) goto LAB_092c3994;
              if (*(uint *)(lVar36 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
              *in_stack_00000130 =
                   *(long *)(lVar36 + (long)(int)*in_stack_00000180 * unaff_x28 + 0x48);
              thunk_FUN_044bb4b4();
              if ((*in_stack_00000178 == 0) ||
                 (param_1 = *(long *)(*in_stack_00000178 + 0x38), param_1 == 0)) goto LAB_092c3994;
              in_x9 = (long)(int)*in_stack_00000180;
              in_w10 = *(uint *)(param_1 + 0x18);
              in_CY = in_w10 <= *in_stack_00000180;
              goto code_r0x092bce24;
            }
            goto LAB_092c09bc;
          }
          if (iVar19 == 1) goto code_r0x092bccc4;
          lVar36 = *in_stack_00000178;
          fVar49 = 0.0;
          fVar45 = fVar49;
          if (in_stack_0000128c != 3 && in_stack_0000128c != 0xad) {
            fVar45 = fVar54;
          }
          if (lVar36 == 0) goto LAB_092c3994;
          fStack0000000000000118 = 0.0;
          fStack0000000000000114 = 0.0;
          uVar23 = in_stack_00001278;
          fVar47 = fVar54;
          goto LAB_092bd480;
        }
LAB_092beb7c:
        if (uVar13 != 0) {
          lVar36 = *in_stack_00000178;
          if ((lVar36 != 0) && (lVar30 = *(long *)(lVar36 + 0x38), lVar30 != 0)) {
            uVar14 = *in_stack_00000180;
            if (uVar14 < *(uint *)(lVar30 + 0x18)) {
              *(undefined1 *)(lVar30 + (long)(int)uVar14 * unaff_x28 + 400) = 0;
              *(uint *)((long)unaff_x19 + 0x4b4) = uVar14;
              lVar30 = *(long *)(lVar36 + 0x50);
              if (lVar30 != 0) {
                uVar14 = *(uint *)(lVar30 + 0x18);
                if (*(uint *)(unaff_x19 + 0x97) < uVar14) {
                  lVar42 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
                  iVar19 = *(int *)(lVar42 + 0x2c) + 1;
                  *(int *)(lVar42 + 0x2c) = iVar19;
                  uVar41 = *(uint *)(unaff_x19 + 0x97);
                  *(int *)(unaff_x19 + 0x98) = iVar19;
                  if (uVar41 < uVar14) {
                    lVar42 = lVar30 + (long)(int)uVar41 * 0x60;
                    *(float *)(lVar42 + 100) = fVar49;
                    *(float *)(lVar42 + 0x68) = fVar46;
                    *(int *)(lVar36 + 0x20) = *(int *)(lVar36 + 0x20) + 1;
                    if (in_stack_0000128c != 0xa0) goto LAB_092bf3a4;
                    lVar30 = lVar30 + (long)(int)uVar41 * 0x60;
                    goto LAB_092bec1c;
                  }
                }
                goto LAB_092c3b00;
              }
              goto LAB_092c3994;
            }
            goto LAB_092c3b00;
          }
          goto LAB_092c3994;
        }
        if (in_stack_0000128c != 0xad) {
          if (*(int *)((long)unaff_x19 + 0x65c) == 1) {
            (**(code **)(*unaff_x19 + 0x8c8))();
          }
          else if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
            (**(code **)(*unaff_x19 + 0x8b8))(fVar67,fVar48);
          }
          uVar14 = *in_stack_00000180;
          if (((uint)fStack0000000000000068 & 1) != 0) {
            *(uint *)(_uStack0000000000000148 + 0x1d8) = uVar14;
          }
          *(uint *)((long)unaff_x19 + 0x4b4) = uVar14;
          *(int *)((long)unaff_x19 + 0x4bc) = *(int *)((long)unaff_x19 + 0x4bc) + 1;
          if ((unaff_x19[0x74] != 0) && (lVar36 = *(long *)(unaff_x19[0x74] + 0x50), lVar36 != 0)) {
            if (*(uint *)(unaff_x19 + 0x97) < *(uint *)(lVar36 + 0x18)) {
              lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
              fStack0000000000000068 = 0.0;
              *(float *)(lVar36 + 100) = fVar49;
              *(float *)(lVar36 + 0x68) = fVar46;
              goto LAB_092bf3a4;
            }
            goto LAB_092c3b00;
          }
          goto LAB_092c3994;
        }
        if ((*in_stack_00000178 == 0) ||
           (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0)) goto LAB_092c3994;
        if (*(uint *)(lVar36 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
        *(undefined1 *)(lVar36 + (long)(int)*in_stack_00000180 * unaff_x28 + 400) = 0;
      }
      else {
        if (((in_stack_0000128c & 0xfffffffe) == 10) && ((int)unaff_x19[0x62] == 6)) {
          fVar46 = (float)uVar56;
          fVar45 = 0.0;
          if ((0.0 < fVar46) && (fVar45 = 0.0, (char)unaff_x19[0x5e] == '\0')) {
            fVar45 = *(float *)(_uStack0000000000000148 + 0x208) -
                     *(float *)(_uStack0000000000000148 + 0x210);
          }
          uVar56 = _fStack00000000000000d8 & 0xffffffff;
          if (fStack00000000000000d8 <
              (*(float *)((long)unaff_x19 + 0x4cc) - (*(float *)(unaff_x19 + 0x9c) - fVar46)) +
              fVar45) {
            if (*(int *)((long)unaff_x19 + 0x314) == -1) {
              *(uint *)((long)unaff_x19 + 0x314) = uVar14;
            }
            if (*(int *)(*(long *)PTR_DAT_09f56060 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            in_stack_00001258 = FUN_0930fffc();
            lVar36 = unaff_x19[99];
            if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
            }
            uVar21 = FUN_09531730(lVar36,0,0);
            if ((uVar21 & 1) != 0) {
              plVar43 = (long *)unaff_x19[99];
              uVar23 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar43 != (long *)0x0) {
                (**(code **)(*plVar43 + 0x558))(plVar43,uVar23,*(undefined8 *)(*plVar43 + 0x560));
                lVar36 = unaff_x19[99];
                if (lVar36 != 0) {
                  *(int *)(lVar36 + 0x438) = (int)unaff_x19[0x87];
                  FUN_09303930(lVar36,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
                  plVar43 = (long *)unaff_x19[99];
                  if (plVar43 != (long *)0x0) {
                    (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
                    *(undefined1 *)(unaff_x19 + 0x65) = 1;
                    goto FUN_092bee6c;
                  }
                }
              }
              goto LAB_092c3994;
            }
            goto FUN_092bee6c;
          }
        }
        if ((((in_stack_0000128c - 0x2007 < 0x23) &&
             ((1L << ((ulong)(in_stack_0000128c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
            (in_stack_0000128c - 10 < 2)) || (in_stack_0000128c == 0xa0)) {
LAB_092bf08c:
          if (((in_stack_0000128c != 0xad) && (in_stack_0000128c != 0x200b)) &&
             (in_stack_0000128c != 0x2060)) {
            lVar36 = *in_stack_00000178;
            if ((lVar36 == 0) || (lVar30 = *(long *)(lVar36 + 0x50), lVar30 == 0))
            goto LAB_092c3994;
            if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_092c3b00;
            lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
            *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
            *(int *)(lVar36 + 0x20) = *(int *)(lVar36 + 0x20) + 1;
          }
        }
        else {
          if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar21 = FUN_079a44d8(in_stack_0000128c,0);
          if ((uVar21 & 1) != 0) goto LAB_092bf08c;
        }
        if (in_stack_0000128c == 0xa0) {
          if ((*in_stack_00000178 == 0) ||
             (lVar30 = *(long *)(*in_stack_00000178 + 0x50), lVar30 == 0)) goto LAB_092c3994;
          if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_092c3b00;
          lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
LAB_092bec1c:
          *(int *)(lVar30 + 0x20) = *(int *)(lVar30 + 0x20) + 1;
        }
      }
LAB_092bf3a4:
      if (((int)unaff_x19[0x62] == 1) && ((in_stack_0000128c == 0x2d || (unaff_w25 != 1)))) {
        if (unaff_x19[0xce] == 0) goto LAB_092c3994;
        fVar46 = *(float *)(unaff_x19 + 0x42);
        fVar45 = (float)FUN_095dced8(unaff_x19[0xce] + 0x28,0);
        if (unaff_x19[0xce] == 0) goto LAB_092c3994;
        fVar72 = (float)FUN_095dcee0(unaff_x19[0xce] + 0x28,0);
        lVar36 = unaff_x19[0xcd];
        fVar47 = in_stack_000000e0;
        if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
          fVar47 = fVar65;
        }
        if ((lVar36 == 0) || (*(long *)(lVar36 + 0x20) == 0)) goto LAB_092c3994;
        fVar60 = *(float *)((long)unaff_x19 + 0x43c);
        fVar58 = *(float *)(lVar36 + 0x2c);
        fVar48 = (float)FUN_095dd3d8(*(long *)(lVar36 + 0x20),0);
        fVar49 = *_iStack00000000000000c8;
        fVar48 = fVar60 * (fVar46 / fVar45) * fVar72 * fVar47 * fVar58 * fVar48;
        fVar45 = *_fStack00000000000000b8;
        if ((in_stack_0000128c == 10) && (*(int *)((long)unaff_x19 + 0x4a4) != (int)unaff_x19[0x95])
           ) {
          if ((*in_stack_00000178 == 0) ||
             (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0)) goto LAB_092c3994;
          uVar14 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
          if (*(uint *)(lVar36 + 0x18) <= uVar14) goto LAB_092c3b00;
          if (unaff_x19[0xce] == 0) goto LAB_092c3994;
          fVar47 = *(float *)(lVar36 + (long)(int)uVar14 * (long)iVar44 + 0x58);
          fVar46 = (float)FUN_095dced8(unaff_x19[0xce] + 0x28,0);
          if (unaff_x19[0xce] == 0) goto LAB_092c3994;
          fVar60 = (float)FUN_095dcee0(unaff_x19[0xce] + 0x28,0);
          lVar36 = unaff_x19[0xcd];
          fVar72 = in_stack_000000e0;
          if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
            fVar72 = fVar65;
          }
          if ((lVar36 == 0) || (*(long *)(lVar36 + 0x20) == 0)) goto LAB_092c3994;
          fVar58 = *(float *)((long)unaff_x19 + 0x43c);
          fVar61 = *(float *)(lVar36 + 0x2c);
          fVar48 = (float)FUN_095dd3d8(*(long *)(lVar36 + 0x20),0);
          if ((*in_stack_00000178 == 0) ||
             (lVar36 = *(long *)(*in_stack_00000178 + 0x50), lVar36 == 0)) goto LAB_092c3994;
          if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_092c3b00;
          lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
          fVar49 = *(float *)(lVar36 + 100);
          fVar45 = *(float *)(lVar36 + 0x68);
          fVar48 = fVar58 * (fVar47 / fVar46) * fVar60 * fVar72 * fVar61 * fVar48;
        }
        fVar72 = *(float *)((long)unaff_x19 + 0x4ec);
        fVar46 = 0.0;
        fVar47 = 0.0;
        if ((0.0 < fVar72) && (fVar47 = 0.0, (char)unaff_x19[0x5e] == '\0')) {
          fVar47 = *(float *)(_uStack0000000000000148 + 0x208) -
                   *(float *)(_uStack0000000000000148 + 0x210);
        }
        fVar58 = *(float *)((long)unaff_x19 + 0x4cc);
        fVar61 = *(float *)(unaff_x19 + 0x9c);
        fVar60 = *(float *)(unaff_x19 + 0xcb);
        if ((char)unaff_x19[0x1e] == '\0') {
          if ((unaff_x19[0xcd] == 0) || (lVar36 = *(long *)(unaff_x19[0xcd] + 0x20), lVar36 == 0))
          goto LAB_092c3994;
          FUN_095dd39c(&stack0x00001290,lVar36,0);
          fVar46 = (float)FUN_095dd1e4(&stack0x000011a0,0);
        }
        puVar11 = PTR_DAT_09f56060;
        fVar68 = *(float *)(unaff_x19 + 0x73);
        fVar45 = (fStack00000000000000b4 - fVar49) - fVar45;
        bVar12 = true;
        if ((fVar68 <= fVar45) && (bVar12 = false, !NAN(fVar68))) {
          bVar12 = fVar68 == -1.0;
        }
        if (!bVar12) {
          fVar45 = fVar68;
        }
        fVar49 = 1.0;
        if ((uVar16 & 0x18) != 0) {
          fVar49 = DAT_01c760f8;
        }
        if (((fVar58 - (fVar61 - fVar72)) + fVar47 < fStack00000000000000d8) &&
           (ABS(fVar60) + fVar48 * fVar46 * (1.0 - *(float *)(unaff_x19 + 0x60)) < fVar49 * fVar45))
        {
          if (*(int *)(*(long *)PTR_DAT_09f56060 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_093103bc();
          lVar36 = *(long *)(*(long *)puVar11 + 0xb8);
          uVar59 = *(undefined8 *)PTR_DAT_09fc9da8;
          memcpy(&stack0x00001290,(void *)(lVar36 + 0x810),0x3b8);
          FUN_06778f24(lVar36 + 0x1338,&stack0x00001290,uVar59);
        }
      }
      lVar36 = *in_stack_00000178;
      if ((lVar36 == 0) || (lVar30 = *(long *)(lVar36 + 0x38), lVar30 == 0)) goto LAB_092c3994;
      if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
      uVar14 = *(uint *)(unaff_x19 + 0x97);
      lVar30 = lVar30 + (long)(int)*in_stack_00000180 * unaff_x28;
      *(uint *)(lVar30 + 0x5c) = uVar14;
      *(undefined4 *)(lVar30 + 0x60) = *(undefined4 *)((long)unaff_x19 + 0x4c4);
      if (((unaff_w25 & 1) == 0) &&
         ((0xd < in_stack_0000128c || ((1 << (ulong)(in_stack_0000128c & 0x1f) & 0x2c00U) == 0)))) {
LAB_092bf730:
        lVar36 = *(long *)(lVar36 + 0x50);
        if (lVar36 == 0) goto LAB_092c3994;
        if (*(uint *)(lVar36 + 0x18) <= uVar14) goto LAB_092c3b00;
        *(int *)(lVar36 + (long)(int)uVar14 * 0x60 + 0x6c) = (int)unaff_x19[0x54];
      }
      else {
        lVar30 = *(long *)(lVar36 + 0x50);
        if (lVar30 == 0) goto LAB_092c3994;
        if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_092c3b00;
        if (*(int *)(lVar30 + (long)(int)uVar14 * 0x60 + 0x24) == 1) goto LAB_092bf730;
      }
      if (in_stack_0000128c == 9) {
        if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
        fVar45 = (float)FUN_095dcf80(*_fStack0000000000000170 + 0x28,0);
        if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
        fVar47 = *(float *)(unaff_x19 + 0xcb);
        uVar56 = (ulong)(uint)fVar47;
        fVar46 = (float)NEON_ucvtf((uint)*(byte *)(*_fStack0000000000000170 + 0x1b1));
        fVar46 = fVar54 * fVar45 * fVar46;
        if ((char)unaff_x19[0x1e] == '\0') {
          fVar45 = fVar46 * (float)(int)(fVar47 / fVar46);
          if (fVar45 <= fVar47) {
            fVar45 = fVar47 + fVar46;
          }
        }
        else {
          fVar45 = fVar46 * (float)(int)(fVar47 / fVar46);
          if (fVar47 <= fVar45) {
            fVar45 = fVar47 - fVar46;
          }
        }
LAB_092bf994:
        *(float *)(unaff_x19 + 0xcb) = fVar45;
      }
      else {
        fVar45 = *(float *)(unaff_x19 + 0x5b);
        if (fVar45 == 0.0) {
          fVar45 = *(float *)(unaff_x19 + 0xcb);
          if ((char)unaff_x19[0x1e] == '\0') {
            fVar47 = (float)FUN_095dd1e4(&stack0x00001240,0);
            fVar72 = *(float *)(_uStack0000000000000148 + 0x1a8);
            fVar69 = (float)FUN_095e15b8(&stack0x00001230,0);
            if (*_fStack0000000000000170 != 0) {
              fVar46 = 1.0 - *(float *)(unaff_x19 + 0x60);
              fVar45 = fVar45 + fVar46 * (*(float *)((long)unaff_x19 + 0x2d4) +
                                         fVar54 * (fVar47 * fVar72 + fVar69) +
                                         in_stack_000000f0 *
                                         (fStack00000000000000ec +
                                         fStack00000000000000f4 +
                                         *(float *)(*_fStack0000000000000170 + 0x1a4)));
              *(float *)(unaff_x19 + 0xcb) = fVar45;
              goto joined_r0x092bf8d4;
            }
            goto LAB_092c3994;
          }
          fVar46 = (float)FUN_095e15b8(&stack0x00001230,0);
          if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
          uVar56 = (ulong)(uint)(1.0 - *(float *)(unaff_x19 + 0x60));
          fVar45 = fVar45 - (1.0 - *(float *)(unaff_x19 + 0x60)) *
                            (*(float *)((long)unaff_x19 + 0x2d4) +
                            fVar54 * fVar46 +
                            in_stack_000000f0 *
                            (fStack00000000000000ec +
                            fStack00000000000000f4 + *(float *)(*_fStack0000000000000170 + 0x1a4)));
          *(float *)(unaff_x19 + 0xcb) = fVar45;
          if ((in_stack_0000128c == 0x200b) || (uVar13 != 0)) {
            uVar56 = (ulong)(uint)(in_stack_000000f0 * *(float *)(unaff_x19 + 0x5c));
            fVar45 = fVar45 - in_stack_000000f0 * *(float *)(unaff_x19 + 0x5c);
            goto LAB_092bf994;
          }
        }
        else {
          if (((*(char *)((long)unaff_x19 + 0x2dc) != '\0') && (in_stack_0000128c < 0x3b)) &&
             ((1L << ((ulong)in_stack_0000128c & 0x3f) & 0x400500000000000U) != 0)) {
            fVar45 = fVar45 * 0.5;
          }
          if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
          fVar46 = *(float *)(unaff_x19 + 0xcb);
          fVar45 = fVar46 + (1.0 - *(float *)(unaff_x19 + 0x60)) *
                            (*(float *)((long)unaff_x19 + 0x2d4) +
                            (fVar45 - fVar69) +
                            in_stack_000000f0 *
                            (fStack00000000000000f4 + *(float *)(*_fStack0000000000000170 + 0x1a4)))
          ;
          *(float *)(unaff_x19 + 0xcb) = fVar45;
joined_r0x092bf8d4:
          if ((in_stack_0000128c == 0x200b) || (uVar56 = (ulong)(uint)fVar46, uVar13 != 0)) {
            uVar56 = (ulong)(uint)(in_stack_000000f0 * *(float *)(unaff_x19 + 0x5c));
            fVar45 = fVar45 + in_stack_000000f0 * *(float *)(unaff_x19 + 0x5c);
            goto LAB_092bf994;
          }
        }
      }
      lVar36 = *in_stack_00000178;
      if ((lVar36 == 0) || (lVar30 = *(long *)(lVar36 + 0x38), lVar30 == 0)) goto LAB_092c3994;
      uVar14 = *in_stack_00000180;
      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_092c3b00;
      *(float *)(lVar30 + (long)(int)uVar14 * unaff_x28 + 0x13c) = fVar45;
      if (in_stack_0000128c == 0xd) {
        uVar56 = 0;
        *(float *)(unaff_x19 + 0xcb) = *(float *)((long)unaff_x19 + 0x444) + 0.0;
      }
      if (((int)unaff_x19[0x62] == 5) &&
         (((0xd < in_stack_0000128c || ((1 << (ulong)(in_stack_0000128c & 0x1f) & 0x2c00U) == 0)) &&
          (1 < in_stack_0000128c - 0x2028)))) {
        lVar30 = *(long *)(lVar36 + 0x58);
        if (lVar30 == 0) goto LAB_092c3994;
        iVar19 = *(int *)((long)unaff_x19 + 0x4c4) + 1;
        if (*(int *)(lVar30 + 0x18) < iVar19) {
          if (*(int *)(*(long *)PTR_DAT_09fc9d78 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_04fe1e40((long *)(lVar36 + 0x58),iVar19,1,*(undefined8 *)PTR_DAT_09fc9d68);
          lVar36 = *in_stack_00000178;
          if (lVar36 == 0) goto LAB_092c3994;
        }
        lVar30 = *(long *)(lVar36 + 0x58);
        if (lVar30 == 0) goto LAB_092c3994;
        lVar42 = (long)(int)*(uint *)((long)unaff_x19 + 0x4c4);
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4c4)) goto LAB_092c3b00;
        lVar20 = lVar30 + lVar42 * 0x14;
        fVar46 = *(float *)(lVar20 + 0x30);
        uVar56 = (ulong)(uint)fVar46;
        *(int *)(lVar20 + 0x28) = (int)unaff_x19[0x99];
        fVar45 = *(float *)(unaff_x19 + 0x9b);
        if (fVar46 <= *(float *)(unaff_x19 + 0x9b)) {
          fVar45 = fVar46;
        }
        *(float *)(lVar20 + 0x30) = fVar45;
        if (*(char *)((long)unaff_x19 + 0x374) != '\0') {
          *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
          *(undefined4 *)(lVar30 + lVar42 * 0x14 + 0x20) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
        }
        uVar14 = *in_stack_00000180;
        *(uint *)(lVar30 + lVar42 * 0x14 + 0x24) = uVar14;
      }
      uVar16 = in_stack_0000128c;
      if (((in_stack_0000128c < 0xc) && ((1 << (ulong)(in_stack_0000128c & 0x1f) & 0xc08U) != 0)) ||
         ((in_stack_0000128c - 0x2028 < 2 ||
          (((unaff_w25 & in_stack_0000128c == 0x2d) != 0 || (uVar14 == uStack0000000000000054))))))
      {
        if (0.0 < *(float *)((long)unaff_x19 + 0x4ec)) {
          fVar45 = *(float *)((long)unaff_x19 + 0x4dc);
          fVar46 = *(float *)((long)unaff_x19 + 0x4e4);
          if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          fVar45 = fVar45 - fVar46;
          if (((fStack0000000000000058 < ABS(fVar45)) && ((char)unaff_x19[0x5e] == '\0')) &&
             (*(char *)((long)unaff_x19 + 0x374) == '\0')) {
            FUN_09310778(fVar45);
            *(float *)(unaff_x19 + 0x9b) = *(float *)(unaff_x19 + 0x9b) - fVar45;
            *(float *)((long)unaff_x19 + 0x4ec) = fVar45 + *(float *)((long)unaff_x19 + 0x4ec);
            puVar11 = PTR_DAT_09f56060;
            lVar36 = *(long *)PTR_DAT_09f56060;
            if (*(int *)(lVar36 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
              lVar36 = *(long *)puVar11;
            }
            lVar30 = *(long *)(lVar36 + 0xb8);
            if (*(int *)(lVar30 + 0x838) == (int)unaff_x19[0x97]) {
              if (*(int *)(lVar36 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
                lVar30 = *(long *)(*(long *)PTR_DAT_09f56060 + 0xb8);
              }
              FUN_0677903c(&stack0x00001290,lVar30 + 0x1338,*(undefined8 *)PTR_DAT_09fc9da0);
              memcpy(&stack0x000001c0,&stack0x00001290,0x3b8);
              puVar11 = PTR_DAT_09f56060;
              lVar36 = *(long *)PTR_DAT_09f56060;
              memcpy((void *)(*(long *)(lVar36 + 0xb8) + 0x810),&stack0x000001c0,0x3b8);
              thunk_FUN_044bb4b4(*(long *)(lVar36 + 0xb8) + 0x8a8,0);
              lVar36 = *(long *)(*(long *)puVar11 + 0xb8);
              *(float *)(lVar36 + 0x848) = fVar45 + *(float *)(lVar36 + 0x848);
              *(float *)(lVar36 + 0x894) = fVar45 + *(float *)(lVar36 + 0x894);
              uVar59 = *(undefined8 *)PTR_DAT_09fc9da8;
              memcpy(&stack0x00001290,(void *)(lVar36 + 0x810),0x3b8);
              FUN_06778f24(lVar36 + 0x1338,&stack0x00001290,uVar59);
            }
          }
        }
        fVar47 = *(float *)((long)unaff_x19 + 0x4ec);
        *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
        fVar46 = *(float *)(unaff_x19 + 0x9c) - fVar47;
        fVar45 = *(float *)(unaff_x19 + 0x9b);
        if (fVar46 <= *(float *)(unaff_x19 + 0x9b)) {
          fVar45 = fVar46;
        }
        *(float *)(unaff_x19 + 0x9b) = fVar45;
        fVar69 = *(float *)((long)unaff_x19 + 0x4dc);
        if (in_stack_00001284 == '\0') {
          in_stack_00001288 = fVar45;
        }
        if ((*(char *)((long)unaff_x19 + 0x36c) != '\0') &&
           (((int)unaff_x19[0x6c] <= *(int *)((long)unaff_x19 + 0x4a4) ||
            ((int)unaff_x19[0x6d] <= (int)unaff_x19[0x97])))) {
          in_stack_00001284 = '\x01';
        }
        lVar36 = *in_stack_00000178;
        if ((lVar36 == 0) || (lVar30 = *(long *)(lVar36 + 0x50), lVar30 == 0)) goto LAB_092c3994;
        uVar14 = *(uint *)(unaff_x19 + 0x97);
        if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_092c3b00;
        lVar42 = unaff_x19[0x95];
        lVar20 = lVar30 + (long)(int)uVar14 * 0x60;
        *(int *)(lVar20 + 0x38) = (int)lVar42;
        uVar41 = *(uint *)(unaff_x19 + 0x95);
        if ((int)lVar42 <= (int)*(uint *)((long)unaff_x19 + 0x4ac)) {
          uVar41 = *(uint *)((long)unaff_x19 + 0x4ac);
        }
        *(uint *)((long)unaff_x19 + 0x4ac) = uVar41;
        *(uint *)(lVar20 + 0x3c) = uVar41;
        *(undefined4 *)(unaff_x19 + 0x96) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
        *(undefined4 *)(lVar20 + 0x40) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
        iVar19 = *(int *)((long)unaff_x19 + 0x4ac);
        if ((int)uVar41 <= *(int *)((long)unaff_x19 + 0x4b4)) {
          iVar19 = *(int *)((long)unaff_x19 + 0x4b4);
        }
        *(int *)((long)unaff_x19 + 0x4b4) = iVar19;
        *(int *)(lVar20 + 0x44) = iVar19;
        *(int *)(lVar20 + 0x24) = (*(int *)(lVar20 + 0x40) - *(int *)(lVar20 + 0x38)) + 1;
        iVar17 = *(int *)((long)unaff_x19 + 0x4bc);
        *(int *)(lVar20 + 0x28) = iVar17;
        *(int *)(lVar20 + 0x30) = ((iVar19 - *(int *)(lVar20 + 0x38)) - iVar17) + 1;
        lVar36 = *(long *)(lVar36 + 0x38);
        if (lVar36 == 0) goto LAB_092c3994;
        if (*(uint *)(lVar36 + 0x18) <= uVar41) goto LAB_092c3b00;
        uVar15 = *(undefined4 *)(lVar36 + (long)(int)uVar41 * (long)iVar44 + 0x114);
        lVar30 = lVar30 + (long)(int)uVar14 * 0x60;
        *(float *)(lVar30 + 0x74) = fVar46;
        *(undefined4 *)(lVar30 + 0x70) = uVar15;
        lVar36 = *in_stack_00000178;
        if ((lVar36 == 0) || (lVar30 = *(long *)(lVar36 + 0x50), lVar30 == 0)) goto LAB_092c3994;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_092c3b00;
        lVar36 = *(long *)(lVar36 + 0x38);
        if (lVar36 == 0) goto LAB_092c3994;
        if (*(uint *)(lVar36 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4b4)) goto LAB_092c3b00;
        uVar15 = *(undefined4 *)
                  (lVar36 + (long)(int)*(uint *)((long)unaff_x19 + 0x4b4) * unaff_x28 + 0x120);
        fVar69 = fVar69 - fVar47;
        lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
        *(float *)(lVar30 + 0x7c) = fVar69;
        *(undefined4 *)(lVar30 + 0x78) = uVar15;
        lVar36 = *in_stack_00000178;
        if ((lVar36 == 0) || (lVar30 = *(long *)(lVar36 + 0x50), lVar30 == 0)) goto LAB_092c3994;
        lVar42 = (long)(int)*(uint *)(unaff_x19 + 0x97);
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_092c3b00;
        lVar20 = lVar30 + lVar42 * 0x60;
        *(float *)(lVar20 + 0x48) = *(float *)(lVar20 + 0x78) - fVar54 * fVar67;
        *(float *)(lVar20 + 0x60) = in_stack_00000100._4_4_;
        if (*(int *)(lVar20 + 0x24) == 1) {
          *(int *)(lVar30 + lVar42 * 0x60 + 0x6c) = (int)unaff_x19[0x54];
        }
        if ((*_fStack0000000000000170 == 0) || (lVar20 = *(long *)(lVar36 + 0x38), lVar20 == 0))
        goto LAB_092c3994;
        lVar35 = (long)(int)*(uint *)((long)unaff_x19 + 0x4b4);
        if (*(uint *)(lVar20 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4b4)) goto LAB_092c3b00;
        if ((*(char *)(lVar20 + lVar35 * unaff_x28 + 400) == '\0') &&
           (lVar35 = (long)(int)*(uint *)(unaff_x19 + 0x96),
           *(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x96))) goto LAB_092c3b00;
        fVar47 = (1.0 - *(float *)(unaff_x19 + 0x60)) *
                 (*(float *)((long)unaff_x19 + 0x2d4) +
                 in_stack_000000f0 *
                 (fStack00000000000000ec +
                 fStack00000000000000f4 + *(float *)(*_fStack0000000000000170 + 0x1a4)));
        fVar45 = -fVar47;
        if ((char)unaff_x19[0x1e] != '\0') {
          fVar45 = fVar47;
        }
        lVar30 = lVar30 + lVar42 * 0x60;
        *(float *)(lVar30 + 0x5c) = *(float *)(lVar20 + lVar35 * unaff_x28 + 0x13c) + fVar45;
        fVar45 = *(float *)((long)unaff_x19 + 0x4ec);
        *(float *)(lVar30 + 0x4c) = fStack0000000000000064 + (fVar69 - fVar46);
        *(float *)(lVar30 + 0x50) = fVar69;
        fVar45 = 0.0 - fVar45;
        uVar56 = (ulong)(uint)fVar45;
        *(float *)(lVar30 + 0x54) = fVar45;
        *(float *)(lVar30 + 0x58) = fVar46;
        if ((((in_stack_0000128c & 0xfffffffe) == 10) ||
            ((unaff_w25 & in_stack_0000128c == 0x2d) != 0)) || (in_stack_0000128c - 0x2028 < 2)) {
          if (*(int *)(*(long *)PTR_DAT_09f56060 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_093103bc();
          iVar19 = (int)unaff_x19[0x97] + 1;
          *(int *)(unaff_x19 + 0x95) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
          *(int *)(unaff_x19 + 0x97) = iVar19;
          *(undefined8 *)(_uStack0000000000000148 + 0x1e8) = 0;
          lVar36 = unaff_x19[0x74];
          if ((lVar36 != 0) && (*(long *)(lVar36 + 0x50) != 0)) {
            if (*(int *)(*(long *)(lVar36 + 0x50) + 0x18) <= iVar19) {
              FUN_09310930();
              lVar36 = unaff_x19[0x74];
              if (lVar36 == 0) goto LAB_092c3994;
            }
            lVar36 = *(long *)(lVar36 + 0x38);
            if (lVar36 != 0) {
              if (*in_stack_00000180 < *(uint *)(lVar36 + 0x18)) {
                fVar45 = *(float *)(lVar36 + (long)(int)*in_stack_00000180 * unaff_x28 + 0x14c);
                if (*(float *)((long)unaff_x19 + 0x2ec) == DAT_01c76224) {
                  if ((in_stack_0000128c == 0x2029) || (fVar46 = 0.0, in_stack_0000128c == 10)) {
                    fVar46 = *(float *)(unaff_x19 + 0x5f);
                  }
                  uVar25 = 0;
                  fVar46 = fVar45 + (0.0 - *(float *)(unaff_x19 + 0x9c)) +
                           fStack0000000000000050 *
                           (in_stack_00000048._4_4_ + *(float *)(unaff_x19 + 0x5d)) +
                           in_stack_000000f0 * (*(float *)((long)unaff_x19 + 0x2e4) + fVar46) +
                           *(float *)((long)unaff_x19 + 0x4ec);
                }
                else {
                  if ((in_stack_0000128c == 0x2029) || (fVar46 = 0.0, in_stack_0000128c == 10)) {
                    fVar46 = *(float *)(unaff_x19 + 0x5f);
                  }
                  uVar25 = 1;
                  fVar46 = *(float *)((long)unaff_x19 + 0x4ec) +
                           *(float *)((long)unaff_x19 + 0x2ec) +
                           in_stack_000000f0 * (*(float *)((long)unaff_x19 + 0x2e4) + fVar46);
                }
                *(float *)((long)unaff_x19 + 0x4ec) = fVar46;
                *(undefined1 *)(unaff_x19 + 0x5e) = uVar25;
                puVar11 = PTR_DAT_09f56060;
                lVar36 = *(long *)PTR_DAT_09f56060;
                if (*(int *)(lVar36 + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                  lVar36 = *(long *)puVar11;
                }
                uVar59 = NEON_rev64(*(undefined8 *)(*(long *)(lVar36 + 0xb8) + 0x1730),4);
                *(undefined8 *)(_uStack0000000000000148 + 0x208) = uVar59;
                uVar56 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x444);
                *(float *)((long)unaff_x19 + 0x4e4) = fVar45;
                *(float *)(unaff_x19 + 0xcb) =
                     *(float *)(unaff_x19 + 0x88) + 0.0 + *(float *)((long)unaff_x19 + 0x444);
                FUN_093103bc();
                FUN_093103bc();
                *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
                goto LAB_092c0198;
              }
              goto LAB_092c3b00;
            }
          }
          goto LAB_092c3994;
        }
        if (in_stack_0000128c != 3) goto LAB_092c01dc;
        if (unaff_x19[0x91] == 0) goto LAB_092c3994;
        in_stack_00001258 = (uint)*(undefined8 *)(unaff_x19[0x91] + 0x18);
        uVar16 = 3;
      }
LAB_092c01dc:
      lVar36 = *(long *)(lVar36 + 0x38);
      if (lVar36 == 0) goto LAB_092c3994;
      uVar41 = *in_stack_00000180;
      uVar14 = *(uint *)(lVar36 + 0x18);
      if (uVar14 <= uVar41) goto LAB_092c3b00;
      if (*(char *)(lVar36 + (long)(int)uVar41 * unaff_x28 + 400) != '\0') {
        lVar30 = lVar36 + (long)(int)uVar41 * unaff_x28;
        uVar21 = unaff_x19[0x9e];
        uVar22 = *(ulong *)(lVar30 + 0x114);
        unaff_x19[0x9e] =
             uVar21 ^ (uVar21 ^ uVar22) &
                      ~CONCAT44(-(uint)((float)(uVar21 >> 0x20) < (float)(uVar22 >> 0x20)),
                                -(uint)((float)uVar21 < (float)uVar22));
        uVar21 = unaff_x19[0x9f];
        uVar56 = *(ulong *)(lVar30 + 0x120);
        unaff_x19[0x9f] =
             uVar21 ^ (uVar21 ^ uVar56) &
                      ~CONCAT44(-(uint)((float)(uVar56 >> 0x20) < (float)(uVar21 >> 0x20)),
                                -(uint)((float)uVar56 < (float)uVar21));
      }
      if (((*(int *)((long)unaff_x19 + 0x304) != 3) && (*(int *)((long)unaff_x19 + 0x304) != 0)) ||
         ((*(uint *)(unaff_x19 + 0x62) < 7 &&
          ((1 << (ulong)(*(uint *)(unaff_x19 + 0x62) & 0x1f) & 0x4aU) != 0)))) {
        if ((((uVar13 == 0) && (uVar16 != 0x2d)) && (uVar16 != 0x200b)) && (uVar16 != 0xad)) {
          if (*(char *)((long)unaff_x19 + 0x309) == '\0') goto LAB_092c0420;
LAB_092c0274:
          if ((in_stack_00000080._4_4_ & 1) == 0) {
            in_stack_00000080._4_4_ = 0;
          }
          else {
            uVar18 = 1;
            uVar13 = (uint)(uVar13 == 0 || in_stack_0000128c == 0xa0) &
                     (in_stack_0000128c != 0xad | uStack0000000000000060) ^ 1;
LAB_092c08f4:
            if (*(int *)(*(long *)PTR_DAT_09f56060 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_093103bc();
            in_stack_00000080._4_4_ = uVar18;
            if (uVar13 != 0) goto LAB_092c093c;
          }
        }
        else {
          if (*(char *)((long)unaff_x19 + 0x309) == '\x01') goto LAB_092c0274;
          if ((int)uVar16 < 0x2007) {
            if (uVar16 == 0x2d) {
              if (0 < (int)uVar41) {
                if (uVar14 <= uVar41 - 1) goto LAB_092c3b00;
                uVar5 = *(undefined2 *)
                         (lVar36 + (ulong)(uVar41 - 1) * (unaff_x28 & 0xffffffff) + 0x24);
                if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                uVar21 = FUN_079a0ce0(uVar5,0);
                if ((uVar21 & 1) != 0) {
                  if ((*in_stack_00000178 == 0) ||
                     (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 == 0))
                  goto LAB_092c3994;
                  if (*(uint *)(lVar36 + 0x18) <= *in_stack_00000180 - 1) goto LAB_092c3b00;
                  if (*(int *)(lVar36 + (long)(int)(*in_stack_00000180 - 1) * (long)iVar44 + 0x5c)
                      == (int)unaff_x19[0x97]) goto LAB_092c0974;
                }
              }
            }
            else if (uVar16 == 0xa0) goto LAB_092c0420;
LAB_092c08b8:
            puVar11 = PTR_DAT_09f56060;
            lVar36 = *(long *)PTR_DAT_09f56060;
            if (*(int *)(lVar36 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
              lVar36 = *(long *)puVar11;
            }
            uVar18 = 0;
            uVar13 = 0;
            *(undefined4 *)(*(long *)(lVar36 + 0xb8) + 0xf80) = 0xffffffff;
            goto LAB_092c08f4;
          }
          if (((0x28 < uVar16 - 0x2007) ||
              ((1L << ((ulong)(uVar16 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
             (uVar16 != 0x2060)) goto LAB_092c08b8;
LAB_092c0420:
          if (*(int *)(*(long *)PTR_DAT_09fc9d80 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar21 = FUN_09335db4(uVar16,0);
          if ((uVar21 & 1) == 0) {
LAB_092c046c:
            if (*(int *)(*(long *)PTR_DAT_09fc9d80 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            uVar21 = FUN_09335e24(in_stack_0000128c,0);
            if ((uVar21 & 1) != 0) goto LAB_092c049c;
            if ((*(char *)((long)unaff_x19 + 0x309) != '\0') ||
               (uVar18 = *in_stack_00000180 + 1, (int)fStack000000000000005c <= (int)uVar18))
            goto LAB_092c0274;
            if ((*in_stack_00000178 != 0) &&
               (lVar36 = *(long *)(*in_stack_00000178 + 0x38), lVar36 != 0)) {
              if (uVar18 < *(uint *)(lVar36 + 0x18)) {
                uVar5 = *(undefined2 *)(lVar36 + (long)(int)uVar18 * (long)iVar44 + 0x24);
                if (*(int *)(*(long *)PTR_DAT_09fc9d80 + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                uVar21 = FUN_09335e24(uVar5,0);
                uVar18 = in_stack_00000080._4_4_;
                if ((uVar21 & 1) == 0) goto LAB_092c0274;
LAB_092c08f0:
                uVar13 = 0;
                goto LAB_092c08f4;
              }
              goto LAB_092c3b00;
            }
            goto LAB_092c3994;
          }
          if (*(int *)(*(long *)PTR_DAT_09fc9d50 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar21 = FUN_0932c20c(0);
          if ((uVar21 & 1) != 0) goto LAB_092c046c;
LAB_092c049c:
          if (*(int *)(*(long *)PTR_DAT_09fc9d50 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar36 = FUN_0932bff8(0);
          if ((lVar36 == 0) || (*(long *)(lVar36 + 0x10) == 0)) goto LAB_092c3994;
          uVar14 = FUN_05681848(*(long *)(lVar36 + 0x10),in_stack_0000128c,
                                *(undefined8 *)PTR_DAT_09fc9d20);
          if ((int)uStack0000000000000054 <= (int)*in_stack_00000180) {
            if ((uVar14 & 1) == 0) {
              uVar18 = 0;
              goto LAB_092c08f0;
            }
LAB_092c0610:
            uVar13 = (uint)(uVar13 != 0);
            if (uVar18 != uVar40 || ((in_stack_00000080._4_4_ ^ 0xffffffff) & 1) != 0)
            goto LAB_092c0974;
            uVar18 = 1;
            goto LAB_092c08f4;
          }
          if (*(int *)(*(long *)PTR_DAT_09fc9d50 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar36 = FUN_0932bff8(0);
          if (((lVar36 == 0) || (*in_stack_00000178 == 0)) ||
             (lVar30 = *(long *)(*in_stack_00000178 + 0x38), lVar30 == 0)) goto LAB_092c3994;
          if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000180 + 1) goto LAB_092c3b00;
          if (*(long *)(lVar36 + 0x18) == 0) goto LAB_092c3994;
          uVar16 = FUN_05681848(*(long *)(lVar36 + 0x18),
                                *(undefined2 *)
                                 (lVar30 + (long)(int)(*in_stack_00000180 + 1) * (long)iVar44 + 0x24
                                 ),*(undefined8 *)PTR_DAT_09fc9d20);
          if ((uVar14 & 1) != 0) goto LAB_092c0610;
          uVar18 = in_stack_00000080._4_4_ & uVar16;
          uVar13 = uVar18 & uVar13 != 0;
          if (((in_stack_00000080._4_4_ | uVar16 ^ 0xffffffff) & 1) != 0) goto LAB_092c08f4;
          in_stack_00000080._4_4_ = uVar18;
          if (uVar13 == 0) goto LAB_092c0974;
LAB_092c093c:
          if (*(int *)(*(long *)PTR_DAT_09f56060 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_093103bc();
          in_stack_00000080._4_4_ = uVar18;
        }
      }
LAB_092c0974:
      if (*(int *)(*(long *)PTR_DAT_09f56060 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_093103bc();
      *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
      in_stack_00001278 = uVar23;
      goto LAB_092c09bc;
    }
  }
LAB_092c3b00:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
LAB_092c15cc:
  uVar13 = uVar40 - 1;
  if (*(uint *)(lVar36 + 0x18) <= uVar13) goto LAB_092c3b00;
  lVar20 = (long)(int)uVar13;
  lVar30 = lVar36 + lVar20 * 0x178;
  lVar42 = *(long *)(lVar30 + 0x40);
  uVar4 = *(ushort *)(lVar30 + 0x24);
  uVar14 = (uint)uVar4;
  if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar16 = FUN_079a0ce0(uVar4,0);
  if (*(uint *)(lVar36 + 0x18) <= uVar13) goto LAB_092c3b00;
  if ((*in_stack_00000178 == 0) || (lVar30 = *(long *)(*in_stack_00000178 + 0x50), lVar30 == 0))
  goto LAB_092c3994;
  uVar74 = *(uint *)(lVar36 + lVar20 * 0x178 + 0x5c);
  if (*(uint *)(lVar30 + 0x18) <= uVar74) goto LAB_092c3b00;
  lVar34 = (long)(int)uVar74;
  lVar30 = lVar30 + lVar34 * 0x60;
  uVar6 = *(uint *)(lVar30 + 0x40);
  uVar41 = *(uint *)(lVar30 + 0x6c);
  iVar2 = *(int *)(lVar30 + 0x20);
  iVar19 = *(int *)(lVar30 + 0x28);
  iVar17 = *(int *)(lVar30 + 0x2c);
  uVar7 = *(uint *)(lVar30 + 0x44);
  lVar35 = (long)(int)uVar7;
  fVar46 = *(float *)(lVar30 + 0x50);
  fVar69 = *(float *)(lVar30 + 0x58);
  fVar48 = *(float *)(lVar30 + 0x5c);
  fVar49 = *(float *)(lVar30 + 0x60);
  fVar60 = *(float *)(lVar30 + 100);
  fVar72 = *(float *)(lVar30 + 0x70);
  fVar58 = *(float *)(lVar30 + 0x74);
  fVar54 = *(float *)(lVar30 + 0x78);
  fVar47 = *(float *)(lVar30 + 0x7c);
  if ((int)uVar41 < 9) {
    switch(uVar41) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        fStack00000000000000ec = fVar60 + 0.0;
      }
      else {
        fStack00000000000000ec = 0.0 - fVar48;
      }
      break;
    case 2:
      fStack00000000000000ec = (fVar60 + fVar49 * 0.5) - fVar48 * 0.5;
      break;
    case 3:
      goto switchD_092c1704_caseD_3;
    case 4:
      fStack00000000000000ec = (fVar49 + fVar60) - fVar48;
      if ((char)unaff_x19[0x1e] != '\0') {
        fStack00000000000000ec = fVar49 + fVar60;
      }
      break;
    default:
      if ((((uVar14 != 3) && (uVar14 != 0x2060)) && (uVar14 != 0x200b)) &&
         (((uVar14 != 0xad && (uVar14 != 10)) && (((int)uVar13 <= (int)uVar7 && (uVar41 == 8))))))
      goto LAB_092c17a0;
      goto switchD_092c1704_caseD_3;
    }
    _in_stack_000000e0 = 0;
  }
  else if (uVar41 == 0x10) {
    if ((int)uVar7 < (int)uVar13) goto switchD_092c1704_caseD_3;
    if (uVar14 < 0xad) {
      if ((uVar14 != 3) && (uVar14 != 10)) goto LAB_092c17a0;
    }
    else if ((uVar14 != 0xad) && ((uVar14 != 0x200b && (uVar14 != 0x2060)))) {
LAB_092c17a0:
      if (*(uint *)(lVar36 + 0x18) <= uVar6) goto LAB_092c3b00;
      uVar5 = *(undefined2 *)(lVar36 + (long)(int)uVar6 * 0x178 + 0x24);
      if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar24 = FUN_079a4214(uVar5,0);
      plVar43 = (long *)PTR_DAT_09f56060;
      if ((uVar24 & 1) == 0) {
        bVar1 = (int)uVar74 < (int)unaff_x19[0x97];
      }
      else {
        bVar1 = false;
      }
      if ((fVar49 < fVar48) || (bVar1 || uVar41 >> 4 != 0)) {
        if ((uVar40 == 1) || ((uVar74 != uVar18 || (uVar13 == *(uint *)((long)unaff_x19 + 0x35c)))))
        {
          fStack00000000000000ec = fVar60;
          if ((char)unaff_x19[0x1e] != '\0') {
            fStack00000000000000ec = fVar49 + fVar60;
          }
          if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uStack0000000000000054 = FUN_079a44d8(uVar14,0);
          _in_stack_000000e0 = 0;
        }
        else {
          cVar26 = (char)unaff_x19[0x1e];
          iVar17 = (iVar17 - iVar2) - (uStack0000000000000054 & 1);
          fVar60 = -fVar48;
          if (cVar26 != '\0') {
            fVar60 = fVar48;
          }
          if (iVar17 < 1) {
            fVar48 = 1.0;
            iVar17 = 1;
          }
          else {
            fVar48 = *(float *)((long)unaff_x19 + 0x30c);
          }
          fVar61 = (float)((ulong)_in_stack_000000e0 >> 0x20);
          if (uVar14 == 9) {
LAB_092c34a8:
            fVar48 = ((fVar49 + fVar60) * (1.0 - fVar48)) / (float)iVar17;
            if (cVar26 == '\0') {
              fStack00000000000000ec = fStack00000000000000ec + fVar48;
              _in_stack_000000e0 = CONCAT44(fVar61 + 0.0,(float)_in_stack_000000e0 + 0.0);
            }
            else {
              fStack00000000000000ec = fStack00000000000000ec - fVar48;
            }
          }
          else {
            if (uVar14 != 0xa0) {
              if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              uVar24 = FUN_079a44d8(uVar14,0);
              cVar26 = (char)unaff_x19[0x1e];
              if ((uVar24 & 1) != 0) goto LAB_092c34a8;
            }
            fVar48 = ((fVar49 + fVar60) * fVar48) /
                     (float)(int)((iVar2 - (~uStack0000000000000054 & 1)) + iVar19);
            if (cVar26 == '\0') {
              fStack00000000000000ec = fStack00000000000000ec + fVar48;
              _in_stack_000000e0 = CONCAT44(fVar61 + 0.0,(float)_in_stack_000000e0 + 0.0);
            }
            else {
              fStack00000000000000ec = fStack00000000000000ec - fVar48;
            }
          }
        }
      }
      else {
        fStack00000000000000ec = fVar60;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000ec = fVar49 + fVar60;
        }
        _in_stack_000000e0 = 0;
      }
    }
  }
  else if (uVar41 == 0x20) {
    fStack00000000000000ec = (fVar60 + fVar49 * 0.5) - (fVar72 + fVar54) * 0.5;
    _in_stack_000000e0 = 0;
  }
switchD_092c1704_caseD_3:
  uVar41 = (uint)*(undefined8 *)(lVar36 + 0x18);
  if (uVar41 <= uVar13) goto LAB_092c3b00;
  lVar30 = lVar36 + lVar20 * 0x178;
  fVar60 = fStack00000000000000a8 + fStack00000000000000ec;
  fVar48 = (float)in_stack_000000a0 + (float)_in_stack_000000e0;
  fVar49 = (float)(in_stack_000000a0 >> 0x20) + (float)((ulong)_in_stack_000000e0 >> 0x20);
  if (*(char *)(lVar30 + 400) == '\0') goto LAB_092c1fb0;
  iVar19 = *(int *)(lVar36 + lVar20 * 0x178 + 0x20);
  if (iVar19 != 0) goto LAB_092c1dc8;
  fVar45 = fmodf(*(float *)((long)unaff_x19 + 0x34c) * (float)(int)uVar74,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x344)) {
  case 0:
    lVar29 = lVar36 + lVar20 * 0x178;
    *(undefined4 *)(lVar29 + 0x84) = 0;
    *(undefined4 *)(lVar29 + 0xac) = 0;
    *(undefined4 *)(lVar29 + 0xd4) = 0x3f800000;
    fVar45 = 1.0;
    break;
  case 1:
    fVar47 = *(float *)(lVar36 + lVar20 * 0x178 + 0x68);
    if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
      lVar29 = lVar36 + lVar20 * 0x178;
      fVar54 = (fStack00000000000000ec + fVar47) - *(float *)(unaff_x19 + 0x9e);
      fVar47 = *(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e);
      goto LAB_092c19b8;
    }
    lVar29 = lVar36 + lVar20 * 0x178;
    fVar54 = fVar54 - fVar72;
    *(float *)(lVar29 + 0x84) = fVar45 + (fVar47 - fVar72) / fVar54;
    *(float *)(lVar29 + 0xac) = fVar45 + (*(float *)(lVar29 + 0x90) - fVar72) / fVar54;
    *(float *)(lVar29 + 0xd4) = fVar45 + (*(float *)(lVar29 + 0xb8) - fVar72) / fVar54;
    fVar45 = fVar45 + (*(float *)(lVar29 + 0xe0) - fVar72) / fVar54;
    break;
  case 2:
    lVar29 = lVar36 + lVar20 * 0x178;
    fVar47 = *(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e);
    fVar54 = (fStack00000000000000ec + *(float *)(lVar29 + 0x68)) - *(float *)(unaff_x19 + 0x9e);
LAB_092c19b8:
    *(float *)(lVar29 + 0x84) = fVar45 + fVar54 / fVar47;
    *(float *)(lVar29 + 0xac) =
         fVar45 + ((fStack00000000000000ec + *(float *)(lVar29 + 0x90)) -
                  *(float *)(unaff_x19 + 0x9e)) /
                  (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
    *(float *)(lVar29 + 0xd4) =
         fVar45 + ((fStack00000000000000ec + *(float *)(lVar29 + 0xb8)) -
                  *(float *)(unaff_x19 + 0x9e)) /
                  (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
    fVar45 = fVar45 + ((fStack00000000000000ec + *(float *)(lVar29 + 0xe0)) -
                      *(float *)(unaff_x19 + 0x9e)) /
                      (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
    break;
  case 3:
    switch((int)unaff_x19[0x69]) {
    case 0:
      lVar29 = lVar36 + lVar20 * 0x178;
      *(undefined4 *)(lVar29 + 0x88) = 0;
      *(undefined4 *)(lVar29 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar29 + 0xd8) = 0;
      *(undefined4 *)(lVar29 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar29 = lVar36 + lVar20 * 0x178;
      fVar47 = fVar47 - fVar58;
      fVar54 = fVar45 + (*(float *)(lVar29 + 0x6c) - fVar58) / fVar47;
      fVar47 = fVar45 + (*(float *)(lVar29 + 0x94) - fVar58) / fVar47;
      *(float *)(lVar29 + 0x88) = fVar54;
      *(float *)(lVar29 + 0xb0) = fVar47;
      *(float *)(lVar29 + 0xd8) = fVar54;
      *(float *)(lVar29 + 0x100) = fVar47;
      break;
    case 2:
      lVar29 = lVar36 + lVar20 * 0x178;
      fVar54 = fVar45 + (*(float *)(lVar29 + 0x6c) - *(float *)((long)unaff_x19 + 0x4f4)) /
                        (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
      *(float *)(lVar29 + 0x88) = fVar54;
      fVar47 = *(float *)((long)unaff_x19 + 0x4f4);
      fVar72 = *(float *)((long)unaff_x19 + 0x4fc);
      *(float *)(lVar29 + 0xd8) = fVar54;
      fVar54 = fVar45 + (*(float *)(lVar29 + 0x94) - fVar47) / (fVar72 - fVar47);
      *(float *)(lVar29 + 0xb0) = fVar54;
      *(float *)(lVar29 + 0x100) = fVar54;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c652c(*(undefined8 *)PTR_DAT_09fc9e18,0);
      uVar41 = (uint)*(undefined8 *)(lVar36 + 0x18);
    }
    if (uVar41 <= uVar13) goto LAB_092c3b00;
    lVar29 = lVar36 + lVar20 * 0x178;
    fVar54 = *(float *)(lVar29 + 0x158);
    fVar47 = (1.0 - (*(float *)(lVar29 + 0x88) + *(float *)(lVar29 + 0xb0)) * fVar54) * 0.5;
    fVar72 = fVar45 + *(float *)(lVar29 + 0x88) * fVar54 + fVar47;
    fVar45 = fVar45 + fVar47 + *(float *)(lVar29 + 0xb0) * fVar54;
    *(float *)(lVar29 + 0x84) = fVar72;
    *(float *)(lVar29 + 0xac) = fVar72;
    *(float *)(lVar29 + 0xd4) = fVar45;
    break;
  default:
    goto switchD_092c1924_default;
  }
  *(float *)(lVar36 + lVar20 * 0x178 + 0xfc) = fVar45;
switchD_092c1924_default:
  switch((int)unaff_x19[0x69]) {
  case 0:
    if (uVar41 <= uVar13) goto LAB_092c3b00;
    lVar29 = lVar36 + lVar20 * 0x178;
    *(undefined4 *)(lVar29 + 0x88) = 0;
    *(undefined4 *)(lVar29 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar29 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar29 + 0x100) = 0;
    break;
  case 1:
    if (uVar13 < uVar41) {
      lVar29 = lVar36 + lVar20 * 0x178;
      fVar46 = fVar46 - fVar69;
      fVar45 = (*(float *)(lVar29 + 0x6c) - fVar69) / fVar46;
      fVar46 = (*(float *)(lVar29 + 0x94) - fVar69) / fVar46;
      *(float *)(lVar29 + 0x88) = fVar45;
      goto LAB_092c1d10;
    }
    goto LAB_092c3b00;
  case 2:
    if (uVar41 <= uVar13) goto LAB_092c3b00;
    lVar29 = lVar36 + lVar20 * 0x178;
    fVar45 = (*(float *)(lVar29 + 0x6c) - *(float *)((long)unaff_x19 + 0x4f4)) /
             (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
    *(float *)(lVar29 + 0x88) = fVar45;
    fVar46 = (*(float *)(lVar29 + 0x94) - *(float *)((long)unaff_x19 + 0x4f4)) /
             (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
LAB_092c1d10:
    *(float *)(lVar29 + 0xb0) = fVar46;
    *(float *)(lVar29 + 0xd8) = fVar46;
    *(float *)(lVar29 + 0x100) = fVar45;
    break;
  case 3:
    if (uVar41 <= uVar13) goto LAB_092c3b00;
    lVar29 = lVar36 + lVar20 * 0x178;
    fVar46 = *(float *)(lVar29 + 0x158);
    fVar54 = (1.0 - (*(float *)(lVar29 + 0x84) + *(float *)(lVar29 + 0xd4)) / fVar46) * 0.5;
    fVar45 = *(float *)(lVar29 + 0x84) / fVar46 + fVar54;
    fVar54 = fVar54 + *(float *)(lVar29 + 0xd4) / fVar46;
    *(float *)(lVar29 + 0x88) = fVar45;
    *(float *)(lVar29 + 0xb0) = fVar54;
    *(float *)(lVar29 + 0x100) = fVar45;
    *(float *)(lVar29 + 0xd8) = fVar54;
  }
  if (uVar41 <= uVar13) goto LAB_092c3b00;
  lVar29 = lVar36 + lVar20 * 0x178;
  fVar45 = ABS(fVar67) * *(float *)(lVar29 + 0x15c) * (1.0 - *(float *)(unaff_x19 + 0x60));
  if ((*(char *)(lVar29 + 0x54) == '\0') && ((*(byte *)(lVar36 + lVar20 * 0x178 + 0x18c) & 1) != 0))
  {
    fVar45 = -fVar45;
  }
  lVar29 = lVar36 + lVar20 * 0x178;
  *(float *)(lVar29 + 0x80) = fVar45;
  *(float *)(lVar29 + 0xa8) = fVar45;
  *(float *)(lVar29 + 0xd0) = fVar45;
  *(float *)(lVar29 + 0xf8) = fVar45;
LAB_092c1dc8:
  if (((int)uVar13 < (int)unaff_x19[0x6c]) &&
     (iStack00000000000000c8 < *(int *)((long)unaff_x19 + 0x364))) {
    if (((int)uVar74 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] != 5)) {
      if (uVar41 <= uVar13) goto LAB_092c3b00;
      lVar30 = lVar36 + lVar20 * 0x178;
      *(ulong *)(lVar30 + 0x68) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar30 + 0x68) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar30 + 0x68));
      *(float *)(lVar30 + 0x70) = fVar49 + *(float *)(lVar30 + 0x70);
      *(ulong *)(lVar30 + 0x90) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar30 + 0x90) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar30 + 0x90));
      *(float *)(lVar30 + 0x98) = fVar49 + *(float *)(lVar30 + 0x98);
      *(ulong *)(lVar30 + 0xb8) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar30 + 0xb8) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar30 + 0xb8));
      *(float *)(lVar30 + 0xc0) = fVar49 + *(float *)(lVar30 + 0xc0);
      *(ulong *)(lVar30 + 0xe0) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar30 + 0xe0) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar30 + 0xe0));
      *(float *)(lVar30 + 0xe8) = fVar49 + *(float *)(lVar30 + 0xe8);
      goto LAB_092c1f5c;
    }
    if (((int)uVar74 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] == 5)) {
      if (uVar13 < uVar41) {
        if (*(uint *)(lVar36 + lVar20 * 0x178 + 0x60) == uStack0000000000000034) {
          lVar30 = lVar36 + lVar20 * 0x178;
          *(ulong *)(lVar30 + 0x68) =
               CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar30 + 0x68) >> 0x20),
                        fVar60 + (float)*(undefined8 *)(lVar30 + 0x68));
          *(float *)(lVar30 + 0x70) = fVar49 + *(float *)(lVar30 + 0x70);
          *(ulong *)(lVar30 + 0x90) =
               CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar30 + 0x90) >> 0x20),
                        fVar60 + (float)*(undefined8 *)(lVar30 + 0x90));
          *(float *)(lVar30 + 0x98) = fVar49 + *(float *)(lVar30 + 0x98);
          *(ulong *)(lVar30 + 0xb8) =
               CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar30 + 0xb8) >> 0x20),
                        fVar60 + (float)*(undefined8 *)(lVar30 + 0xb8));
          *(float *)(lVar30 + 0xc0) = fVar49 + *(float *)(lVar30 + 0xc0);
          *(ulong *)(lVar30 + 0xe0) =
               CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar30 + 0xe0) >> 0x20),
                        fVar60 + (float)*(undefined8 *)(lVar30 + 0xe0));
          *(float *)(lVar30 + 0xe8) = fVar49 + *(float *)(lVar30 + 0xe8);
          goto LAB_092c1f5c;
        }
        goto LAB_092c1ea0;
      }
      goto LAB_092c3b00;
    }
  }
LAB_092c1ea0:
  if (uVar41 <= uVar13) goto LAB_092c3b00;
  if (DAT_0a51bf43 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e740);
    DAT_0a51bf43 = '\x01';
    uVar41 = *(uint *)(lVar36 + 0x18);
  }
  puVar11 = PTR_DAT_09f1e740;
  uVar50 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_09f1e740 + 0xb8) + 1);
  lVar29 = lVar36 + lVar20 * 0x178;
  *(undefined8 *)(lVar29 + 0x68) = **(undefined8 **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
  *(undefined4 *)(lVar29 + 0x70) = uVar50;
  if (uVar41 <= uVar13) goto LAB_092c3b00;
  uVar50 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
  lVar29 = lVar36 + lVar20 * 0x178;
  *(undefined8 *)(lVar29 + 0x90) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
  *(undefined4 *)(lVar29 + 0x98) = uVar50;
  uVar50 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
  *(undefined8 *)(lVar29 + 0xb8) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
  *(undefined4 *)(lVar29 + 0xc0) = uVar50;
  uVar50 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
  *(undefined8 *)(lVar29 + 0xe0) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
  *(undefined4 *)(lVar29 + 0xe8) = uVar50;
  *(undefined1 *)(lVar30 + 400) = 0;
LAB_092c1f5c:
  iVar17 = FUN_094d65a8(0);
  *(bool *)((long)unaff_x19 + 0x174) = iVar17 == 1;
  if (iVar19 == 0) {
    pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
LAB_092c1f9c:
    (*pcVar32)();
    plVar43 = (long *)PTR_DAT_09f56060;
  }
  else {
    plVar43 = (long *)PTR_DAT_09f56060;
    if (iVar19 == 1) {
      pcVar32 = *(code **)(*unaff_x19 + 0x8f8);
      goto LAB_092c1f9c;
    }
  }
LAB_092c1fb0:
  if ((*in_stack_00000178 == 0) || (lVar30 = *(long *)(*in_stack_00000178 + 0x38), lVar30 == 0))
  goto LAB_092c3994;
  if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_092c3b00;
  lVar30 = lVar30 + lVar20 * 0x178;
  uVar23 = *(undefined8 *)(lVar30 + 0x114);
  *(undefined8 *)(lVar30 + 0x114) =
       CONCAT44(fVar48 + (float)((ulong)uVar23 >> 0x20),fVar60 + (float)uVar23);
  *(float *)(lVar30 + 0x11c) = fVar49 + *(float *)(lVar30 + 0x11c);
  if ((*in_stack_00000178 == 0) || (lVar30 = *(long *)(*in_stack_00000178 + 0x38), lVar30 == 0))
  goto LAB_092c3994;
  if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_092c3b00;
  lVar30 = lVar30 + lVar20 * 0x178;
  *(ulong *)(lVar30 + 0x108) =
       CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar30 + 0x108) >> 0x20),
                fVar60 + (float)*(undefined8 *)(lVar30 + 0x108));
  *(float *)(lVar30 + 0x110) = fVar49 + *(float *)(lVar30 + 0x110);
  if ((*in_stack_00000178 == 0) || (lVar30 = *(long *)(*in_stack_00000178 + 0x38), lVar30 == 0))
  goto LAB_092c3994;
  if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_092c3b00;
  lVar30 = lVar30 + lVar20 * 0x178;
  *(ulong *)(lVar30 + 0x120) =
       CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar30 + 0x120) >> 0x20),
                fVar60 + (float)*(undefined8 *)(lVar30 + 0x120));
  *(float *)(lVar30 + 0x128) = fVar49 + *(float *)(lVar30 + 0x128);
  if ((*in_stack_00000178 == 0) || (lVar30 = *(long *)(*in_stack_00000178 + 0x38), lVar30 == 0))
  goto LAB_092c3994;
  if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_092c3b00;
  lVar30 = lVar30 + lVar20 * 0x178;
  *(float *)(lVar30 + 300) = fVar60 + *(float *)(lVar30 + 300);
  *(ulong *)(lVar30 + 0x130) =
       CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar30 + 0x130) >> 0x20),
                fVar48 + (float)*(undefined8 *)(lVar30 + 0x130));
  lVar30 = *in_stack_00000178;
  if ((lVar30 == 0) || (lVar29 = *(long *)(lVar30 + 0x38), lVar29 == 0)) goto LAB_092c3994;
  uVar41 = *(uint *)(lVar29 + 0x18);
  if (uVar41 <= uVar13) goto LAB_092c3b00;
  lVar38 = lVar29 + lVar20 * 0x178;
  *(float *)(lVar38 + 0x148) = fVar48 + *(float *)(lVar38 + 0x148);
  *(ulong *)(lVar38 + 0x138) =
       CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar38 + 0x138) >> 0x20),
                fVar60 + (float)*(undefined8 *)(lVar38 + 0x138));
  *(ulong *)(lVar38 + 0x140) =
       CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar38 + 0x140) >> 0x20),
                fVar48 + (float)*(undefined8 *)(lVar38 + 0x140));
  if (uVar74 == uVar18) {
    uVar18 = *in_stack_00000180 - 1;
    if (uVar13 == uVar18) goto LAB_092c21c0;
  }
  else {
    lVar30 = *(long *)(lVar30 + 0x50);
    if (lVar30 == 0) goto LAB_092c3994;
    if (*(uint *)(lVar30 + 0x18) <= uVar18) goto LAB_092c3b00;
    lVar38 = (long)(int)uVar18;
    lVar39 = lVar30 + lVar38 * 0x60;
    fVar54 = fVar48 + *(float *)(lVar39 + 0x58);
    *(ulong *)(lVar39 + 0x50) =
         CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar39 + 0x50) >> 0x20),
                  fVar48 + (float)*(undefined8 *)(lVar39 + 0x50));
    *(float *)(lVar39 + 0x58) = fVar54;
    *(float *)(lVar39 + 0x5c) = fVar60 + *(float *)(lVar39 + 0x5c);
    if (uVar41 <= *(uint *)(lVar39 + 0x38)) goto LAB_092c3b00;
    uVar50 = *(undefined4 *)(lVar29 + (long)(int)*(uint *)(lVar39 + 0x38) * 0x178 + 0x114);
    lVar30 = lVar30 + lVar38 * 0x60;
    *(float *)(lVar30 + 0x74) = fVar54;
    *(undefined4 *)(lVar30 + 0x70) = uVar50;
    lVar30 = *in_stack_00000178;
    if ((lVar30 == 0) || (lVar29 = *(long *)(lVar30 + 0x50), lVar29 == 0)) goto LAB_092c3994;
    if (*(uint *)(lVar29 + 0x18) <= uVar18) goto LAB_092c3b00;
    lVar30 = *(long *)(lVar30 + 0x38);
    if (lVar30 == 0) goto LAB_092c3994;
    uVar18 = *(uint *)(lVar29 + lVar38 * 0x60 + 0x44);
    if (*(uint *)(lVar30 + 0x18) <= uVar18) goto LAB_092c3b00;
    lVar29 = lVar29 + lVar38 * 0x60;
    *(undefined4 *)(lVar29 + 0x78) = *(undefined4 *)(lVar30 + (long)(int)uVar18 * 0x178 + 0x120);
    *(undefined4 *)(lVar29 + 0x7c) = *(undefined4 *)(lVar29 + 0x50);
    uVar18 = *in_stack_00000180 - 1;
LAB_092c21c0:
    if (uVar13 == uVar18) {
      lVar30 = *in_stack_00000178;
      if ((lVar30 == 0) || (lVar29 = *(long *)(lVar30 + 0x50), lVar29 == 0)) goto LAB_092c3994;
      if (*(uint *)(lVar29 + 0x18) <= uVar74) goto LAB_092c3b00;
      lVar38 = lVar29 + lVar34 * 0x60;
      fVar54 = fVar48 + *(float *)(lVar38 + 0x58);
      *(ulong *)(lVar38 + 0x50) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar38 + 0x50) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar38 + 0x50));
      *(float *)(lVar38 + 0x58) = fVar54;
      *(float *)(lVar38 + 0x5c) = fVar60 + *(float *)(lVar38 + 0x5c);
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_092c3994;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(lVar38 + 0x38)) goto LAB_092c3b00;
      uVar50 = *(undefined4 *)(lVar30 + (long)(int)*(uint *)(lVar38 + 0x38) * 0x178 + 0x114);
      lVar29 = lVar29 + lVar34 * 0x60;
      *(float *)(lVar29 + 0x74) = fVar54;
      *(undefined4 *)(lVar29 + 0x70) = uVar50;
      lVar30 = *in_stack_00000178;
      if ((lVar30 == 0) || (lVar29 = *(long *)(lVar30 + 0x50), lVar29 == 0)) goto LAB_092c3994;
      if (*(uint *)(lVar29 + 0x18) <= uVar74) goto LAB_092c3b00;
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_092c3994;
      uVar18 = *(uint *)(lVar29 + lVar34 * 0x60 + 0x44);
      if (*(uint *)(lVar30 + 0x18) <= uVar18) goto LAB_092c3b00;
      lVar29 = lVar29 + lVar34 * 0x60;
      *(undefined4 *)(lVar29 + 0x78) = *(undefined4 *)(lVar30 + (long)(int)uVar18 * 0x178 + 0x120);
      *(undefined4 *)(lVar29 + 0x7c) = *(undefined4 *)(lVar29 + 0x50);
    }
  }
  if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar24 = FUN_079a3748(uVar14,0);
  if (((((uVar24 & 1) == 0) && (1 < uVar14 - 0x2010)) && (uVar14 != 0xad)) && (uVar14 != 0x2d)) {
    if (bVar9) {
      if (((uVar40 != 1) && ((int)uVar13 < (int)(*(uint *)(lVar36 + 0x18) - 1))) &&
         (((int)uVar13 < (int)*in_stack_00000180 && ((uVar14 == 0x2019 || (uVar14 == 0x27)))))) {
        if (*(uint *)(lVar36 + 0x18) <= uVar40 - 2) goto LAB_092c3b00;
        uVar5 = *(undefined2 *)(lVar36 + lStack0000000000000160 + -0x430);
        if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar24 = FUN_079a3748(uVar5,0);
        if ((uVar24 & 1) != 0) {
          if (*(uint *)(lVar36 + 0x18) <= uVar40) goto LAB_092c3b00;
          uVar5 = *(undefined2 *)(lVar36 + lStack0000000000000160 + -0x140);
          if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar24 = FUN_079a3748(uVar5,0);
          plVar43 = (long *)PTR_DAT_09f56060;
          if ((uVar24 & 1) != 0) goto LAB_092c23e0;
        }
      }
LAB_092c2644:
      if (uVar13 == *in_stack_00000180 - 1) {
        if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar24 = FUN_079a3748(uVar14,0);
        iVar19 = iStack0000000000000110;
        if ((uVar24 & 1) == 0) goto LAB_092c2684;
      }
      else {
LAB_092c2684:
        iVar19 = uVar40 - 2;
      }
      lVar30 = *in_stack_00000178;
      if (lVar30 == 0) goto LAB_092c3994;
      lVar29 = *(long *)(lVar30 + 0x40);
      if (lVar29 == 0) goto LAB_092c3994;
      uVar18 = *(uint *)(lVar30 + 0x24);
      iVar17 = *(int *)(lVar29 + 0x18);
      if (iVar17 < (int)(uVar18 + 1)) {
        if (*(int *)(*(long *)PTR_DAT_09fc9d78 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_04fe1b68((long *)(lVar30 + 0x40),iVar17 + 1,*(undefined8 *)PTR_DAT_09fc9d70);
        lVar30 = *in_stack_00000178;
        if (lVar30 == 0) goto LAB_092c3994;
      }
      plVar43 = (long *)PTR_DAT_09f56060;
      lVar30 = *(long *)(lVar30 + 0x40);
      if (lVar30 == 0) goto LAB_092c3994;
      if (*(uint *)(lVar30 + 0x18) <= uVar18) goto LAB_092c3b00;
      lVar30 = lVar30 + (long)(int)uVar18 * 0x18;
      *(long **)(lVar30 + 0x20) = unaff_x19;
      *(uint *)(lVar30 + 0x28) = uStack0000000000000148;
      *(int *)(lVar30 + 0x2c) = iVar19;
      *(uint *)(lVar30 + 0x30) = (iVar19 - uStack0000000000000148) + 1;
      thunk_FUN_044bb4b4();
      lVar30 = unaff_x19[0x74];
      if (lVar30 == 0) goto LAB_092c3994;
      lVar29 = *(long *)(lVar30 + 0x50);
      *(int *)(lVar30 + 0x24) = *(int *)(lVar30 + 0x24) + 1;
      if (lVar29 == 0) goto LAB_092c3994;
      if (*(uint *)(lVar29 + 0x18) <= uVar74) goto LAB_092c3b00;
      lVar29 = lVar29 + lVar34 * 0x60;
      bVar9 = false;
      iStack00000000000000c8 = iStack00000000000000c8 + 1;
      *(int *)(lVar29 + 0x34) = *(int *)(lVar29 + 0x34) + 1;
    }
    else {
      if (uVar40 == 1) {
        if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar18 = FUN_079a3698(uVar14,0);
        if (((uVar14 == 0x200b) || (((uVar16 | uVar18 ^ 1) & 1) != 0)) || (*in_stack_00000180 == 1))
        goto LAB_092c2644;
      }
      bVar9 = false;
    }
  }
  else {
    if (!bVar9) {
      uStack0000000000000148 = uVar13;
    }
    if (uVar13 == *in_stack_00000180 - 1) {
      lVar30 = *in_stack_00000178;
      if (lVar30 == 0) goto LAB_092c3994;
      lVar29 = *(long *)(lVar30 + 0x40);
      if (lVar29 == 0) goto LAB_092c3994;
      uVar18 = *(uint *)(lVar30 + 0x24);
      iVar19 = *(int *)(lVar29 + 0x18);
      if (iVar19 < (int)(uVar18 + 1)) {
        if (*(int *)(*(long *)PTR_DAT_09fc9d78 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_04fe1b68((long *)(lVar30 + 0x40),iVar19 + 1,*(undefined8 *)PTR_DAT_09fc9d70);
        lVar30 = *in_stack_00000178;
        if (lVar30 == 0) goto LAB_092c3994;
      }
      plVar43 = (long *)PTR_DAT_09f56060;
      lVar30 = *(long *)(lVar30 + 0x40);
      if (lVar30 == 0) goto LAB_092c3994;
      if (*(uint *)(lVar30 + 0x18) <= uVar18) goto LAB_092c3b00;
      lVar30 = lVar30 + (long)(int)uVar18 * 0x18;
      *(long **)(lVar30 + 0x20) = unaff_x19;
      *(uint *)(lVar30 + 0x28) = uStack0000000000000148;
      *(uint *)(lVar30 + 0x2c) = uVar13;
      *(uint *)(lVar30 + 0x30) = uVar40 - uStack0000000000000148;
      thunk_FUN_044bb4b4();
      lVar30 = unaff_x19[0x74];
      if (lVar30 == 0) goto LAB_092c3994;
      lVar29 = *(long *)(lVar30 + 0x50);
      *(int *)(lVar30 + 0x24) = *(int *)(lVar30 + 0x24) + 1;
      if (lVar29 == 0) goto LAB_092c3994;
      if (*(uint *)(lVar29 + 0x18) <= uVar74) goto LAB_092c3b00;
      lVar29 = lVar29 + lVar34 * 0x60;
      iStack00000000000000c8 = iStack00000000000000c8 + 1;
      *(int *)(lVar29 + 0x34) = *(int *)(lVar29 + 0x34) + 1;
    }
LAB_092c23e0:
    bVar9 = true;
  }
  lVar30 = *in_stack_00000178;
  if ((lVar30 == 0) || (lVar34 = *(long *)(lVar30 + 0x38), lVar34 == 0)) goto LAB_092c3994;
  if (*(uint *)(lVar34 + 0x18) <= uVar13) goto LAB_092c3b00;
  if ((*(byte *)(lVar34 + lVar20 * 0x178 + 0x18c) >> 2 & 1) == 0) {
    if (bVar10) {
      if (*(uint *)(lVar34 + 0x18) <= uVar40 - 2) goto LAB_092c3b00;
LAB_092c242c:
      lVar29 = *unaff_x19;
      uVar50 = *(undefined4 *)(lVar34 + lStack0000000000000160 + -0x334);
      uVar57 = *(undefined4 *)(lVar34 + lStack0000000000000160 + -0x2f8);
LAB_092c290c:
      (**(code **)(lVar29 + 0x908))
                (fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,uVar50,
                 fStack00000000000000f4,0,fStack0000000000000074,uVar57);
LAB_092c294c:
      lVar30 = *plVar43;
LAB_092c2950:
      if (*(int *)(lVar30 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar30 = *plVar43;
      }
      bVar10 = false;
      fStack0000000000000114 = 0.0;
      fStack00000000000000f4 = *(float *)(*(long *)(lVar30 + 0xb8) + 0x1730);
      in_stack_000000f0 = 0.0;
    }
    else {
      bVar10 = false;
    }
  }
  else {
    lVar29 = lVar34 + lVar20 * 0x178;
    iVar19 = *(int *)(lVar29 + 0x60);
    *(int *)(lVar29 + 0x168) = iVar44;
    if ((((int)unaff_x19[0x6c] < (int)uVar13) || ((int)unaff_x19[0x6d] < (int)uVar74)) ||
       (((int)unaff_x19[0x62] == 5 && (iVar19 + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (uVar14 != 0x200b && (uVar16 & 1) == 0) {
      fVar54 = *(float *)(lVar34 + lVar20 * 0x178 + 0x15c);
      if (fStack0000000000000114 <= fVar54) {
        fStack0000000000000114 = fVar54;
      }
      if (in_stack_000000f0 <= ABS(fVar45)) {
        in_stack_000000f0 = ABS(fVar45);
      }
      if ((float)iVar19 != fStack0000000000000064) {
        if (*(int *)(*plVar43 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar30 = *in_stack_00000178;
          if (lVar30 == 0) goto LAB_092c3994;
          lVar34 = *(long *)(*plVar43 + 0xb8);
        }
        else {
          lVar34 = *(long *)(*plVar43 + 0xb8);
        }
        fStack00000000000000f4 = *(float *)(lVar34 + 0x1730);
      }
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_092c3994;
      if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_092c3b00;
      if (unaff_x19[0x1f] == 0) goto LAB_092c3994;
      fVar46 = *(float *)(lVar30 + lVar20 * 0x178 + 0x144);
      fVar54 = (float)FUN_095dcf60(unaff_x19[0x1f] + 0x28,0);
      fVar46 = fVar46 + fStack0000000000000114 * fVar54;
      fStack0000000000000064 = (float)iVar19;
      if (fVar46 <= fStack00000000000000f4) {
        fStack00000000000000f4 = fVar46;
      }
    }
    if (!bVar10) {
      if ((((uVar14 == 0xd) || ((uVar14 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar13)) || (!bVar1)
         ) {
LAB_092c2864:
        bVar10 = false;
        goto LAB_092c297c;
      }
      if (uVar13 == uVar7) {
        if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar24 = FUN_079a44d8(uVar14,0);
        if ((uVar24 & 1) != 0) goto LAB_092c2864;
      }
      if ((*in_stack_00000178 == 0) || (lVar30 = *(long *)(*in_stack_00000178 + 0x38), lVar30 == 0))
      goto LAB_092c3994;
      if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_092c3b00;
      lVar30 = lVar30 + lVar20 * 0x178;
      fStack0000000000000074 = *(float *)(lVar30 + 0x15c);
      fStack0000000000000070 = *(float *)(lVar30 + 0x114);
      uVar15 = *(undefined4 *)(lVar30 + 0x164);
      fVar54 = fStack0000000000000074;
      if (fStack0000000000000114 != 0.0) {
        fVar54 = fStack0000000000000114;
      }
      uStack000000000000006c = 0;
      fVar46 = fVar45;
      if (fStack0000000000000114 != 0.0) {
        fVar46 = in_stack_000000f0;
      }
      fStack0000000000000068 = fStack00000000000000f4;
      in_stack_000000f0 = fVar46;
      fStack0000000000000114 = fVar54;
    }
    if (*in_stack_00000180 == 1) {
      if ((*in_stack_00000178 != 0) && (lVar30 = *(long *)(*in_stack_00000178 + 0x38), lVar30 != 0))
      {
        if (uVar13 < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + lVar20 * 0x178;
          lVar29 = *unaff_x19;
          uVar50 = *(undefined4 *)(lVar30 + 0x120);
          uVar57 = *(undefined4 *)(lVar30 + 0x15c);
          goto LAB_092c290c;
        }
        goto LAB_092c3b00;
      }
      goto LAB_092c3994;
    }
    if ((uVar13 == uVar6) || ((int)uVar7 <= (int)uVar13)) {
      if ((*in_stack_00000178 != 0) && (lVar30 = *(long *)(*in_stack_00000178 + 0x38), lVar30 != 0))
      {
        lVar34 = lVar20;
        uVar18 = uVar13;
        if (uVar14 == 0x200b || (uVar16 & 1) != 0) {
          lVar34 = lVar35;
          uVar18 = uVar7;
        }
        if (uVar18 < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + lVar34 * 0x178;
          (**(code **)(*unaff_x19 + 0x908))
                    (fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,
                     *(undefined4 *)(lVar30 + 0x120),fStack00000000000000f4,0,fStack0000000000000074
                     ,*(undefined4 *)(lVar30 + 0x15c));
          lVar30 = *plVar43;
          goto LAB_092c2950;
        }
        goto LAB_092c3b00;
      }
      goto LAB_092c3994;
    }
    if (!bVar1) {
      if ((*in_stack_00000178 != 0) && (lVar34 = *(long *)(*in_stack_00000178 + 0x38), lVar34 != 0))
      {
        if (uVar40 - 2 < *(uint *)(lVar34 + 0x18)) goto LAB_092c242c;
        goto LAB_092c3b00;
      }
      goto LAB_092c3994;
    }
    if ((int)uVar13 < (int)(*in_stack_00000180 - 1)) {
      if ((*in_stack_00000178 == 0) || (lVar30 = *(long *)(*in_stack_00000178 + 0x38), lVar30 == 0))
      goto LAB_092c3994;
      if (*(uint *)(lVar30 + 0x18) <= uVar40) goto LAB_092c3b00;
      uVar24 = FUN_092de100(uVar15,*(undefined4 *)(lVar30 + lStack0000000000000160),0);
      plVar43 = (long *)PTR_DAT_09f56060;
      if ((uVar24 & 1) == 0) {
        if ((*in_stack_00000178 != 0) &&
           (lVar30 = *(long *)(*in_stack_00000178 + 0x38), lVar30 != 0)) {
          if (uVar13 < *(uint *)(lVar30 + 0x18)) {
            lVar30 = lVar30 + lVar20 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,
                       *(undefined4 *)(lVar30 + 0x120),fStack00000000000000f4,0,
                       fStack0000000000000074,*(undefined4 *)(lVar30 + 0x15c));
            plVar43 = (long *)PTR_DAT_09f56060;
            goto LAB_092c294c;
          }
          goto LAB_092c3b00;
        }
        goto LAB_092c3994;
      }
    }
    bVar10 = true;
  }
LAB_092c297c:
  if ((*in_stack_00000178 == 0) || (lVar30 = *(long *)(*in_stack_00000178 + 0x38), lVar30 == 0))
  goto LAB_092c3994;
  if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_092c3b00;
  if (lVar42 == 0) goto LAB_092c3994;
  uVar18 = *(uint *)(lVar30 + lVar20 * 0x178 + 0x18c);
  fVar54 = (float)FUN_095dcf70(lVar42 + 0x28,0);
  if ((uVar18 >> 6 & 1) == 0) {
    if (bVar8) {
      if ((*in_stack_00000178 == 0) || (lVar30 = *(long *)(*in_stack_00000178 + 0x38), lVar30 == 0))
      goto LAB_092c3994;
      if (*(uint *)(lVar30 + 0x18) <= uVar40 - 2) goto LAB_092c3b00;
      uVar50 = *(undefined4 *)(lVar30 + lStack0000000000000160 + -0x334);
      fVar46 = *(float *)(lVar30 + lStack0000000000000160 + -0x310);
      pcVar32 = *(code **)(*unaff_x19 + 0x908);
LAB_092c2f28:
      (*pcVar32)(fStack000000000000008c,fStack0000000000000088,in_stack_00000080._4_4_,uVar50,
                 fStack0000000000000090 * fVar54 + fVar46,0,fStack0000000000000090,
                 fStack0000000000000090);
    }
LAB_092c2f5c:
    bVar8 = false;
  }
  else {
    lVar30 = *in_stack_00000178;
    if ((lVar30 == 0) || (lVar34 = *(long *)(lVar30 + 0x38), lVar34 == 0)) goto LAB_092c3994;
    if (*(uint *)(lVar34 + 0x18) <= uVar13) goto LAB_092c3b00;
    *(int *)(lVar34 + lVar20 * 0x178 + 0x170) = iVar44;
    if ((((int)unaff_x19[0x6c] < (int)uVar13) || ((int)unaff_x19[0x6d] < (int)uVar74)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar34 + lVar20 * 0x178 + 0x60) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar14 == 0xd) || ((uVar14 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar13)) ||
       (bVar8 || !bVar1)) {
LAB_092c2acc:
      if (!bVar8) goto LAB_092c2f5c;
    }
    else {
      if (uVar13 == uVar7) {
        if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar24 = FUN_079a44d8(uVar14,0);
        if ((uVar24 & 1) != 0) goto LAB_092c2acc;
        lVar30 = *in_stack_00000178;
        if (lVar30 == 0) goto LAB_092c3994;
      }
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_092c3994;
      if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_092c3b00;
      lVar30 = lVar30 + lVar20 * 0x178;
      fStack0000000000000090 = *(float *)(lVar30 + 0x15c);
      fStack000000000000008c = *(float *)(lVar30 + 0x114);
      fStack000000000000005c = *(float *)(lVar30 + 0x58);
      fStack0000000000000058 = *(float *)(lVar30 + 0x144);
      fStack0000000000000088 = fVar54 * fStack0000000000000090 + fStack0000000000000058;
      in_stack_00000080._4_4_ = 0;
    }
    uVar18 = *in_stack_00000180;
    if (uVar18 == 1) {
LAB_092c2c04:
      if ((*in_stack_00000178 != 0) && (lVar30 = *(long *)(*in_stack_00000178 + 0x38), lVar30 != 0))
      {
        if (uVar13 < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + lVar20 * 0x178;
          lVar42 = *unaff_x19;
          uVar50 = *(undefined4 *)(lVar30 + 0x120);
          fVar46 = *(float *)(lVar30 + 0x144);
LAB_092c2c30:
          pcVar32 = *(code **)(lVar42 + 0x908);
          goto LAB_092c2f28;
        }
        goto LAB_092c3b00;
      }
      goto LAB_092c3994;
    }
    if (uVar13 == uVar6) {
      if ((*in_stack_00000178 != 0) && (lVar30 = *(long *)(*in_stack_00000178 + 0x38), lVar30 != 0))
      {
        uVar18 = *(uint *)(lVar30 + 0x18);
        if (uVar14 == 0x200b || (uVar16 & 1) != 0) {
          if (uVar18 <= uVar7) goto LAB_092c3b00;
        }
        else {
LAB_092c2efc:
          lVar35 = lVar20;
          if (uVar18 <= uVar13) goto LAB_092c3b00;
        }
LAB_092c2f04:
        lVar30 = lVar30 + lVar35 * 0x178;
        fVar46 = *(float *)(lVar30 + 0x144);
        uVar50 = *(undefined4 *)(lVar30 + 0x120);
        pcVar32 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_092c2f28;
      }
      goto LAB_092c3994;
    }
    if ((int)uVar13 < (int)uVar18) {
      lVar30 = *in_stack_00000178;
      if ((lVar30 != 0) && (lVar34 = *(long *)(lVar30 + 0x38), lVar34 != 0)) {
        if (uVar40 < *(uint *)(lVar34 + 0x18)) {
          if (*(float *)(lVar34 + lStack0000000000000160 + -0x10c) == fStack000000000000005c) {
            fVar46 = *(float *)(lVar34 + lStack0000000000000160 + -0x20);
            if (*(int *)(*(long *)PTR_DAT_09fc9d38 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            uVar24 = FUN_092de624(fVar48 + fVar46,fStack0000000000000058,0);
            if ((uVar24 & 1) != 0) {
              uVar18 = *in_stack_00000180;
              goto LAB_092c2d04;
            }
            lVar30 = *in_stack_00000178;
            if (lVar30 == 0) goto LAB_092c3994;
          }
          lVar30 = *(long *)(lVar30 + 0x38);
          if (lVar30 != 0) {
            uVar18 = *(uint *)(lVar30 + 0x18);
            if ((int)uVar13 <= (int)uVar7) goto LAB_092c2efc;
            if (uVar7 < uVar18) goto LAB_092c2f04;
            goto LAB_092c3b00;
          }
          goto LAB_092c3994;
        }
        goto LAB_092c3b00;
      }
      goto LAB_092c3994;
    }
LAB_092c2d04:
    if ((int)uVar13 < (int)uVar18) {
      iVar19 = FUN_0952fcb8(lVar42,0);
      if (*(uint *)(lVar36 + 0x18) <= uVar40) goto LAB_092c3b00;
      lVar30 = *(long *)(lVar36 + lStack0000000000000160 + -0x124);
      if (lVar30 == 0) goto LAB_092c3994;
      iVar17 = FUN_0952fcb8(lVar30,0);
      if (iVar19 != iVar17) goto LAB_092c2c04;
    }
    if (!bVar1) {
      if ((*in_stack_00000178 != 0) && (lVar30 = *(long *)(*in_stack_00000178 + 0x38), lVar30 != 0))
      {
        if (uVar40 - 2 < *(uint *)(lVar30 + 0x18)) {
          lVar42 = *unaff_x19;
          uVar50 = *(undefined4 *)(lVar30 + lStack0000000000000160 + -0x334);
          fVar46 = *(float *)(lVar30 + lStack0000000000000160 + -0x310);
          goto LAB_092c2c30;
        }
        goto LAB_092c3b00;
      }
      goto LAB_092c3994;
    }
    bVar8 = true;
  }
  if ((*in_stack_00000178 == 0) || (lVar30 = *(long *)(*in_stack_00000178 + 0x38), lVar30 == 0))
  goto LAB_092c3994;
  uVar18 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar18 <= uVar13) goto LAB_092c3b00;
  if ((*(byte *)(lVar30 + lVar20 * 0x178 + 0x18d) >> 1 & 1) == 0) {
    if (bVar12) {
LAB_092c32e0:
      (**(code **)(*unaff_x19 + 0x918))
                (in_stack_000000c0._4_4_,in_stack_000000d0._4_4_,uStack00000000000000b0,
                 fStack00000000000000b4,fStack00000000000000b8,uStack00000000000000b0);
    }
LAB_092c3314:
    bVar12 = false;
  }
  else {
    if ((((int)unaff_x19[0x6c] < (int)uVar13) || ((int)unaff_x19[0x6d] < (int)uVar74)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar30 + lVar20 * 0x178 + 0x60) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar12) {
      fStack0000000000000170 = in_stack_000000c0._4_4_;
FUN_092c30a4:
      if (uVar18 <= uVar13) goto LAB_092c3b00;
      lVar30 = lVar30 + lVar20 * 0x178;
      fVar47 = *(float *)(lVar30 + 0x120);
      fVar46 = *(float *)(lVar30 + 0x13c);
      fVar49 = *(float *)(lVar30 + 0x180);
      fVar60 = *(float *)(lVar30 + 0x188);
      uVar59 = *(undefined8 *)(lVar30 + 0x178);
      fVar58 = *(float *)(lVar30 + 0x184);
      uVar23 = *(undefined8 *)(lVar30 + 0x180);
      fVar48 = *(float *)(lVar30 + 0x114);
      fVar54 = *(float *)(lVar30 + 0x138);
      fVar69 = *(float *)(lVar30 + 0x140);
      fVar72 = *(float *)(lVar30 + 0x148);
      in_stack_00000188 = uVar59;
      fStack0000000000000190 = fVar49;
      fStack0000000000000194 = fVar58;
      in_stack_00000198 = fVar60;
      in_stack_000001a0 = in_stack_00001260;
      in_stack_000001a8 = in_stack_00001268;
      in_stack_000001b0 = in_stack_00001270;
      uVar24 = FUN_092df768(&stack0x000001a0,&stack0x00000188,0);
      lVar30 = *(long *)PTR_DAT_09fc9d48;
      if ((uVar24 & 1) == 0) {
        if (*(int *)(lVar30 + 0xe4) == 0) {
          thunk_FUN_044a54b4(lVar30);
        }
        bVar12 = (uVar16 & 1) == 0;
        if (bVar12) {
          fVar46 = fVar47;
        }
        fVar46 = fVar46 + (float)in_stack_00001268;
        if (bVar12) {
          fVar54 = fVar48;
        }
        fVar54 = fVar54 - (float)((ulong)in_stack_00001260 >> 0x20);
        in_stack_000000c0._4_4_ = fStack0000000000000170;
        if (fVar54 <= fStack0000000000000170) {
          in_stack_000000c0._4_4_ = fVar54;
        }
        if (fStack00000000000000b4 <= fVar46) {
          fStack00000000000000b4 = fVar46;
        }
        if (*(int *)(*(long *)PTR_DAT_09fc9d48 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        if (fVar72 - in_stack_00001270 <= in_stack_000000d0._4_4_) {
          in_stack_000000d0._4_4_ = fVar72 - in_stack_00001270;
        }
        fVar69 = fVar69 + (float)((ulong)in_stack_00001268 >> 0x20);
        if (fStack00000000000000b8 <= fVar69) {
          fStack00000000000000b8 = fVar69;
        }
      }
      else {
        if (*(int *)(lVar30 + 0xe4) == 0) {
          thunk_FUN_044a54b4(lVar30);
        }
        if ((uVar16 & 1) == 0) {
          fVar54 = fVar48;
        }
        in_stack_000000c0._4_4_ =
             (fVar54 + (fStack00000000000000b4 - (float)in_stack_00001268)) * 0.5;
        if (fVar72 <= in_stack_000000d0._4_4_) {
          in_stack_000000d0._4_4_ = fVar72;
        }
        if (fStack00000000000000b8 <= fVar69) {
          fStack00000000000000b8 = fVar69;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack0000000000000170,in_stack_000000d0._4_4_,uStack00000000000000b0,
                   in_stack_000000c0._4_4_,fStack00000000000000b8,uStack00000000000000b0);
        if ((*(int *)(*(long *)PTR_DAT_09fc9d48 + 0xe4) == 0) &&
           (thunk_FUN_044a54b4(), *(int *)(*(long *)PTR_DAT_09fc9d48 + 0xe4) == 0)) {
          thunk_FUN_044a54b4();
        }
        in_stack_000000d0._4_4_ = fVar72 - fVar60;
        if ((uVar16 & 1) == 0) {
          fVar46 = fVar47;
        }
        fStack00000000000000b4 = fVar46 + fVar49;
        uStack00000000000000b0 = 0;
        fStack00000000000000b8 = fVar69 + fVar58;
        in_stack_00001260 = uVar59;
        in_stack_00001268 = uVar23;
        in_stack_00001270 = fVar60;
      }
      if ((((*in_stack_00000180 == 1) || (uVar13 == uVar6)) || ((int)uVar7 <= (int)uVar13)) ||
         (!bVar1)) goto LAB_092c32e0;
      bVar12 = true;
    }
    else {
      if ((((uVar14 != 0xd) && ((uVar14 & 0xfffe) != 10)) && ((int)uVar13 <= (int)uVar7)) && (bVar1)
         ) {
        if (uVar13 == uVar7) {
          if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar24 = FUN_079a44d8(uVar14,0);
          if ((uVar24 & 1) != 0) goto LAB_092c3314;
        }
        lVar42 = *plVar43;
        if (*(int *)(lVar42 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar42 = *plVar43;
        }
        if ((*in_stack_00000178 != 0) &&
           (lVar30 = *(long *)(*in_stack_00000178 + 0x38), lVar30 != 0)) {
          uVar18 = (uint)*(undefined8 *)(lVar30 + 0x18);
          if (uVar13 < uVar18) {
            lVar42 = *(long *)(lVar42 + 0xb8);
            lVar35 = lVar30 + lVar20 * 0x178;
            in_stack_00001268 = *(undefined8 *)(lVar35 + 0x180);
            in_stack_00001260 = *(undefined8 *)(lVar35 + 0x178);
            fStack0000000000000170 = *(float *)(lVar42 + 0x1720);
            in_stack_00001270 = *(float *)(lVar35 + 0x188);
            fStack00000000000000b4 = *(float *)(lVar42 + 0x1728);
            in_stack_000000d0._4_4_ = *(float *)(lVar42 + 0x1724);
            fStack00000000000000b8 = *(float *)(lVar42 + 0x172c);
            uStack00000000000000b0 = 0;
            goto FUN_092c30a4;
          }
          goto LAB_092c3b00;
        }
        goto LAB_092c3994;
      }
      bVar12 = false;
    }
  }
  uVar13 = *in_stack_00000180;
  iStack0000000000000110 = iStack0000000000000110 + 1;
  lStack0000000000000160 = lStack0000000000000160 + 0x178;
  bVar1 = (int)uVar13 <= (int)uVar40;
  uVar18 = uVar74;
  uVar40 = uVar40 + 1;
  if (bVar1) goto LAB_092c3540;
  goto LAB_092c15cc;
code_r0x092bccc4:
  lVar36 = FUN_09303b14();
  if ((lVar36 == 0) || (lVar36 = *(long *)(lVar36 + 0x38), lVar36 == 0)) goto LAB_092c3994;
  if (*(uint *)(lVar36 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
  plVar43 = *(long **)(lVar36 + (long)(int)*in_stack_00000180 * unaff_x28 + 0x30);
  if (plVar43 == (long *)0x0) goto LAB_092c3994;
  bVar3 = *(byte *)(*(long *)PTR_DAT_09fc9d60 + 0x130);
  if ((*(byte *)(*plVar43 + 0x130) < bVar3) ||
     (*(long *)(*(long *)(*plVar43 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_09fc9d60)) {
                    /* WARNING: Subroutine does not return */
    FUN_044481e4(plVar43);
  }
  plVar27 = (long *)plVar43[3];
  if (plVar27 == (long *)0x0) {
    plVar27 = (long *)0x0;
    *_fStack0000000000000090 = 0;
  }
  else {
    lVar36 = *(long *)PTR_DAT_09fc9d58;
    bVar3 = *(byte *)(lVar36 + 0x130);
    if (*(byte *)(*plVar27 + 0x130) < bVar3) {
      plVar37 = (long *)0x0;
    }
    else {
      plVar37 = plVar27;
      if (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar3 * 8 + -8) != lVar36) {
        plVar37 = (long *)0x0;
      }
    }
    *_fStack0000000000000090 = (long)plVar37;
    if (*(byte *)(*plVar27 + 0x130) < bVar3) {
      plVar27 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar3 * 8 + -8) != lVar36) {
      plVar27 = (long *)0x0;
    }
  }
  thunk_FUN_044bb4b4(_fStack0000000000000090,plVar27);
  lVar36 = plVar43[5];
  *(int *)((long)unaff_x19 + 0x6bc) = (int)lVar36;
  puVar11 = PTR_DAT_09f56060;
  if (in_stack_0000128c == 0x3c) {
    in_stack_0000128c = (int)lVar36 + 0xe000;
  }
  else {
    lVar36 = *(long *)PTR_DAT_09f56060;
    if (*(int *)(lVar36 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar36 = *(long *)puVar11;
    }
    *(undefined4 *)((long)unaff_x19 + 0x1d4) = *(undefined4 *)(*(long *)(lVar36 + 0xb8) + 0x68);
  }
  if (unaff_x19[0x20] == 0) goto LAB_092c3994;
  fVar45 = *(float *)(unaff_x19 + 0x42);
  memmove(&stack0x000011c0,(void *)(unaff_x19[0x20] + 0x28),0x60);
  fVar67 = (float)FUN_095dced8(&stack0x000011c0,0);
  if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
  memmove(&stack0x000011c0,(void *)(*_fStack0000000000000170 + 0x28),0x60);
  fVar46 = (float)FUN_095dcee0(&stack0x000011c0,0);
  fVar54 = in_stack_000000e0;
  if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
    fVar54 = unaff_s14;
  }
  if (unaff_x19[0xd6] == 0) goto LAB_092c3994;
  fVar54 = (fVar45 / fVar67) * fVar46 * fVar54;
  fVar67 = (float)FUN_095dced8(unaff_x19[0xd6] + 0x28,0);
  fVar45 = *(float *)(unaff_x19 + 0x42);
  if (fVar67 <= 0.0) {
    if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
    fVar67 = (float)FUN_095dced8(*_fStack0000000000000170 + 0x28,0);
    if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
    fVar46 = (float)FUN_095dcee0(*_fStack0000000000000170 + 0x28,0);
    fStack0000000000000114 = in_stack_000000e0;
    if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
      fStack0000000000000114 = unaff_s14;
    }
    if (unaff_x19[0x20] == 0) goto LAB_092c3994;
    fVar47 = (float)FUN_095dcf08(unaff_x19[0x20] + 0x28,0);
    if (plVar43[4] == 0) goto LAB_092c3994;
    FUN_095dd39c(&stack0x00001290,plVar43[4],0);
    fVar69 = (float)FUN_095dd1cc(&stack0x000011a0,0);
    if (plVar43[4] == 0) goto LAB_092c3994;
    fVar48 = *(float *)((long)plVar43 + 0x2c);
    fVar72 = (float)FUN_095dd3d8(plVar43[4],0);
    if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
    fStack0000000000000118 = (float)FUN_095dcf08(*_fStack0000000000000170 + 0x28,0);
    if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
    fVar60 = (float)FUN_095dcf30(*_fStack0000000000000170 + 0x28,0);
    if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
    fVar58 = *(float *)((long)unaff_x19 + 0x43c);
    fVar49 = (float)FUN_095dcee0(*_fStack0000000000000170 + 0x28,0);
    if (unaff_x19[0x20] == 0) goto LAB_092c3994;
    fStack0000000000000114 = (fVar45 / fVar67) * fVar46 * fStack0000000000000114;
    fVar49 = fVar54 * fVar60 * fVar58 * fVar49;
    fVar47 = fStack0000000000000114 * (fVar47 / fVar69) * fVar48 * fVar72;
    fStack0000000000000114 = fStack0000000000000114 / fVar47;
    fStack0000000000000118 = fStack0000000000000114 * fStack0000000000000118;
    fVar67 = (float)FUN_095dcf38(unaff_x19[0x20] + 0x28,0);
    fStack0000000000000114 = fStack0000000000000114 * fVar67;
  }
  else {
    if (*_fStack0000000000000090 == 0) goto LAB_092c3994;
    fVar67 = (float)FUN_095dced8(*_fStack0000000000000090 + 0x28,0);
    if (*_fStack0000000000000090 == 0) goto LAB_092c3994;
    fVar46 = (float)FUN_095dcee0(*_fStack0000000000000090 + 0x28,0);
    if (plVar43[4] == 0) goto LAB_092c3994;
    fVar69 = *(float *)((long)plVar43 + 0x2c);
    fVar47 = in_stack_000000e0;
    if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
      fVar47 = unaff_s14;
    }
    fVar72 = (float)FUN_095dd3d8(plVar43[4],0);
    if (unaff_x19[0xd6] == 0) goto LAB_092c3994;
    fStack0000000000000118 = (float)FUN_095dcf08(unaff_x19[0xd6] + 0x28,0);
    if (*_fStack0000000000000090 == 0) goto LAB_092c3994;
    fVar48 = (float)FUN_095dcf30(*_fStack0000000000000090 + 0x28,0);
    if (*_fStack0000000000000090 == 0) goto LAB_092c3994;
    fVar60 = *(float *)((long)unaff_x19 + 0x43c);
    fVar49 = (float)FUN_095dcee0(*_fStack0000000000000090 + 0x28,0);
    if (unaff_x19[0xd6] == 0) goto LAB_092c3994;
    fVar49 = fVar54 * fVar48 * fVar60 * fVar49;
    fVar47 = (fVar45 / fVar67) * fVar46 * fVar47 * fVar69 * fVar72;
    fStack0000000000000114 = (float)FUN_095dcf38(unaff_x19[0xd6] + 0x28,0);
  }
  *in_stack_00000158 = (long)plVar43;
  thunk_FUN_044bb4b4(in_stack_00000158,plVar43);
  if (*in_stack_00000178 == 0) goto LAB_092c3994;
  lVar36 = *(long *)(*in_stack_00000178 + 0x38);
  unaff_x29 = &stack0x00001170;
  if (lVar36 == 0) goto LAB_092c3994;
  if (*(uint *)(lVar36 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
  lVar36 = lVar36 + (long)(int)*in_stack_00000180 * unaff_x28;
  *(undefined4 *)(lVar36 + 0x20) = 1;
  *(float *)(lVar36 + 0x15c) = fVar47;
  *(long *)(lVar36 + 0x40) = *_fStack0000000000000170;
  thunk_FUN_044bb4b4();
  lVar36 = *in_stack_00000178;
  if ((lVar36 == 0) || (lVar42 = *(long *)(lVar36 + 0x38), lVar42 == 0)) goto LAB_092c3994;
  if (*(uint *)(lVar42 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
  fVar67 = 0.0;
  *(int *)(lVar42 + (long)(int)*in_stack_00000180 * unaff_x28 + 0x50) = (int)unaff_x19[0x24];
  *(int *)(unaff_x19 + 0x24) = (int)lVar30;
  goto LAB_092bd468;
LAB_092c3540:
  lVar36 = *in_stack_00000178;
  if (lVar36 != 0) {
    iVar19 = uVar74 + 1;
LAB_092c3558:
    puVar11 = PTR_DAT_09fc9d40;
    lVar30 = *(long *)(lVar36 + 0x60);
    if (lVar30 != 0) {
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_092c3b00;
      *(int *)(lVar30 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x50 + 0x28) = iVar44;
      *(uint *)(lVar36 + 0x18) = uVar13;
      lVar30 = unaff_x19[0xd7];
      *(int *)(lVar36 + 0x2c) = iVar19;
      if ((int)uVar13 < 1 || iStack00000000000000c8 == 0) {
        iStack00000000000000c8 = 1;
      }
      *(int *)(lVar36 + 0x1c) = (int)lVar30;
      *(int *)(lVar36 + 0x24) = iStack00000000000000c8;
      *(int *)(lVar36 + 0x30) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
      if (((int)unaff_x19[0x6a] != 0xff) ||
         (uVar24 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar24 & 1) == 0)) {
LAB_092c0f78:
        if (*(int *)(*(long *)PTR_DAT_09f56030 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_092dd650();
        return;
      }
      lVar36 = unaff_x19[0xde];
      if (lVar36 != 0) {
        (**(code **)(lVar36 + 0x18))
                  (*(undefined8 *)(lVar36 + 0x40),*in_stack_00000178,*(undefined8 *)(lVar36 + 0x28))
        ;
      }
      if (*(int *)((long)unaff_x19 + 0x354) != 0) {
        if ((*in_stack_00000178 == 0) ||
           (lVar36 = *(long *)(*in_stack_00000178 + 0x60), lVar36 == 0)) goto LAB_092c3994;
        if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        if (*(int *)(lVar36 + 0x18) == 0) goto LAB_092c3b00;
        FUN_093292c0(lVar36 + 0x20,1,0);
      }
      if (unaff_x19[0x7b] != 0) {
        FUN_094fb3d8(unaff_x19[0x7b],0);
        if ((unaff_x19[0x74] != 0) && (lVar36 = *(long *)(unaff_x19[0x74] + 0x60), lVar36 != 0)) {
          if (*(int *)(lVar36 + 0x18) == 0) goto LAB_092c3b00;
          if (unaff_x19[0x7b] != 0) {
            FUN_094f6188(unaff_x19[0x7b],*(undefined8 *)(lVar36 + 0x30),0);
            if ((unaff_x19[0x74] != 0) && (lVar36 = *(long *)(unaff_x19[0x74] + 0x60), lVar36 != 0))
            {
              if (*(int *)(lVar36 + 0x18) == 0) goto LAB_092c3b00;
              if (unaff_x19[0x7b] != 0) {
                UnityEngine_TextCore_Text_TextGenerator__GenerateText
                          (unaff_x19[0x7b],0,*(undefined8 *)(lVar36 + 0x48),0);
                if ((unaff_x19[0x74] != 0) &&
                   (lVar36 = *(long *)(unaff_x19[0x74] + 0x60), lVar36 != 0)) {
                  if (*(int *)(lVar36 + 0x18) == 0) goto LAB_092c3b00;
                  if (unaff_x19[0x7b] != 0) {
                    FUN_094f6438(unaff_x19[0x7b],*(undefined8 *)(lVar36 + 0x50),0);
                    if ((unaff_x19[0x74] != 0) &&
                       (lVar36 = *(long *)(unaff_x19[0x74] + 0x60), lVar36 != 0)) {
                      if (*(int *)(lVar36 + 0x18) == 0) goto LAB_092c3b00;
                      if (unaff_x19[0x7b] != 0) {
                        UnityEngine_TextCore_Text_FontAsset__UpdateFallbacks
                                  (unaff_x19[0x7b],*(undefined8 *)(lVar36 + 0x58),0);
                        if (unaff_x19[0x7b] != 0) {
                          FUN_094fb008(unaff_x19[0x7b],0);
                          lVar36 = *in_stack_00000178;
                          if (lVar36 != 0) {
                            lVar42 = 0;
                            lVar30 = 0;
                            do {
                              uVar24 = lVar30 + 1;
                              if ((long)*(int *)(lVar36 + 0x34) <= (long)uVar24) goto LAB_092c0f78;
                              lVar36 = *(long *)(lVar36 + 0x60);
                              if (lVar36 == 0) break;
                              if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
                                thunk_FUN_044a54b4();
                              }
                              if (*(uint *)(lVar36 + 0x18) <= uVar24) goto LAB_092c3b00;
                              FUN_0932918c(lVar36 + lVar42 + 0x70,0);
                              lVar36 = unaff_x19[0xe4];
                              if (lVar36 == 0) break;
                              if (*(uint *)(lVar36 + 0x18) <= uVar24) goto LAB_092c3b00;
                              uVar23 = *(undefined8 *)(lVar36 + lVar30 * 8 + 0x28);
                              if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
                                thunk_FUN_044a54b4();
                              }
                              uVar21 = FUN_0952c404(uVar23,0,0);
                              if ((uVar21 & 1) == 0) {
                                if (*(int *)((long)unaff_x19 + 0x354) != 0) {
                                  if ((*in_stack_00000178 == 0) ||
                                     (lVar36 = *(long *)(*in_stack_00000178 + 0x60), lVar36 == 0))
                                  break;
                                  if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
                                    thunk_FUN_044a54b4();
                                  }
                                  if (*(uint *)(lVar36 + 0x18) <= uVar24) goto LAB_092c3b00;
                                  FUN_093292c0(lVar36 + lVar42 + 0x70,1,0);
                                }
                                lVar36 = unaff_x19[0xe4];
                                if (lVar36 == 0) break;
                                if (*(uint *)(lVar36 + 0x18) <= uVar24) goto LAB_092c3b00;
                                lVar36 = *(long *)(lVar36 + lVar30 * 8 + 0x28);
                                if (lVar36 == 0) break;
                                lVar36 = FUN_09332394(lVar36,0);
                                if ((*in_stack_00000178 == 0) ||
                                   (lVar20 = *(long *)(*in_stack_00000178 + 0x60), lVar20 == 0))
                                break;
                                if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_092c3b00;
                                if (lVar36 == 0) break;
                                FUN_094f6188(lVar36,*(undefined8 *)(lVar20 + lVar42 + 0x80),0);
                                lVar36 = unaff_x19[0xe4];
                                if (lVar36 == 0) break;
                                if (*(uint *)(lVar36 + 0x18) <= uVar24) goto LAB_092c3b00;
                                lVar36 = *(long *)(lVar36 + lVar30 * 8 + 0x28);
                                if (lVar36 == 0) break;
                                lVar36 = FUN_09332394(lVar36,0);
                                if ((*in_stack_00000178 == 0) ||
                                   (lVar20 = *(long *)(*in_stack_00000178 + 0x60), lVar20 == 0))
                                break;
                                if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_092c3b00;
                                if (lVar36 == 0) break;
                                UnityEngine_TextCore_Text_TextGenerator__GenerateText
                                          (lVar36,0,*(undefined8 *)(lVar20 + lVar42 + 0x98),0);
                                lVar36 = unaff_x19[0xe4];
                                if (lVar36 == 0) break;
                                if (*(uint *)(lVar36 + 0x18) <= uVar24) goto LAB_092c3b00;
                                lVar36 = *(long *)(lVar36 + lVar30 * 8 + 0x28);
                                if (lVar36 == 0) break;
                                lVar36 = FUN_09332394(lVar36,0);
                                if ((*in_stack_00000178 == 0) ||
                                   (lVar20 = *(long *)(*in_stack_00000178 + 0x60), lVar20 == 0))
                                break;
                                if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_092c3b00;
                                if (lVar36 == 0) break;
                                FUN_094f6438(lVar36,*(undefined8 *)(lVar20 + lVar42 + 0xa0),0);
                                lVar36 = unaff_x19[0xe4];
                                if (lVar36 == 0) break;
                                if (*(uint *)(lVar36 + 0x18) <= uVar24) goto LAB_092c3b00;
                                lVar36 = *(long *)(lVar36 + lVar30 * 8 + 0x28);
                                if (lVar36 == 0) break;
                                lVar36 = FUN_09332394(lVar36,0);
                                if ((*in_stack_00000178 == 0) ||
                                   (lVar20 = *(long *)(*in_stack_00000178 + 0x60), lVar20 == 0))
                                break;
                                if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_092c3b00;
                                if (lVar36 == 0) break;
                                UnityEngine_TextCore_Text_FontAsset__UpdateFallbacks
                                          (lVar36,*(undefined8 *)(lVar20 + lVar42 + 0xa8),0);
                                lVar36 = unaff_x19[0xe4];
                                if (lVar36 == 0) break;
                                if (*(uint *)(lVar36 + 0x18) <= uVar24) goto LAB_092c3b00;
                                lVar36 = *(long *)(lVar36 + lVar30 * 8 + 0x28);
                                if ((lVar36 == 0) || (lVar36 = FUN_09332394(lVar36,0), lVar36 == 0))
                                break;
                                FUN_094fb008(lVar36,0);
                              }
                              lVar36 = *in_stack_00000178;
                              lVar30 = lVar30 + 1;
                              lVar42 = lVar42 + 0x50;
                            } while (lVar36 != 0);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_092c3994:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


