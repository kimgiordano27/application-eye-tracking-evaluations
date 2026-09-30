/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRRig$$get_cameraInRigSpacePos
ENTRY_POINT: 092bd880
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void UnityEngine_XR_Interaction_Toolkit_XRRig__get_cameraInRigSpacePos(long param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined *puVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 uVar24;
  char cVar25;
  long *plVar26;
  undefined4 *puVar27;
  long lVar28;
  long lVar29;
  float *pfVar30;
  code *pcVar31;
  float *pfVar32;
  long lVar33;
  long lVar34;
  long *plVar35;
  long lVar36;
  long lVar37;
  long *unaff_x19;
  uint unaff_w20;
  long lVar38;
  int unaff_w21;
  uint unaff_w22;
  long *unaff_x23;
  uint *unaff_x24;
  uint unaff_w25;
  uint uVar39;
  undefined8 *unaff_x26;
  long lVar40;
  long *plVar41;
  int iVar42;
  ulong unaff_x28;
  ulong unaff_x29;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  float fVar50;
  undefined8 uVar51;
  ulong uVar52;
  float fVar53;
  undefined4 uVar54;
  float fVar55;
  undefined4 uVar56;
  float fVar57;
  float fVar58;
  undefined8 uVar59;
  float fVar60;
  float fVar61;
  undefined8 uVar62;
  float fVar63;
  float unaff_s11;
  float fVar64;
  float fVar65;
  float unaff_s12;
  float fVar66;
  float unaff_s14;
  float fVar67;
  float fVar68;
  float unaff_s15;
  float fVar69;
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
  float in_stack_00000150;
  long *in_stack_00000158;
  uint in_stack_00000160;
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
  undefined8 in_stack_00001290;
  undefined8 in_stack_00001298;
  undefined4 in_stack_000012a0;
  undefined4 in_stack_000012a4;
  undefined8 in_stack_000012a8;
  undefined8 in_stack_000012b0;
  undefined8 in_stack_000012b8;
  undefined8 in_stack_000012c0;
  undefined8 in_stack_000012c8;
  
  uVar23 = _fStack0000000000000068;
code_r0x092bd880:
  if (unaff_w22 < *(uint *)(param_1 + 0x18)) {
    fVar50 = *(float *)((long)unaff_x19 + 0x4ec);
    fVar53 = *(float *)((long)unaff_x19 + 0x634);
    param_1 = param_1 + unaff_w22 * unaff_x28;
    fVar55 = *(float *)(param_1 + 0x144);
    FUN_095e15a0(((*(float *)(param_1 + 0x138) - *(float *)(unaff_x19 + 0xcb)) / unaff_s11 +
                 in_stack_00001124) - in_stack_00001130,&stack0x00001230,0);
    FUN_095e15b0(((fVar55 - ((unaff_s12 - fVar50) + fVar53)) / unaff_s11 + in_stack_00001128) -
                 in_stack_00001134,&stack0x00001230,0);
    fStack00000000000000f4 = 0.0;
    bVar13 = true;
FUN_092bd918:
    fVar50 = unaff_s11;
    if ((uVar23 & 0x100000000) == 0) goto LAB_092bda38;
    uVar14 = *(uint *)((long)unaff_x19 + 0x32c);
    if (bVar13 || (long)(int)uVar14 == -0x80000000) goto LAB_092bda38;
    if ((*unaff_x23 != 0) && (lVar29 = *(long *)(*unaff_x23 + 0x38), lVar29 != 0)) {
      if (uVar14 < *(uint *)(lVar29 + 0x18)) {
        lVar29 = *(long *)(lVar29 + (long)(int)uVar14 * unaff_x28 + 0x30);
        if ((lVar29 != 0) && (lVar29 = *(long *)(lVar29 + 0x20), lVar29 != 0)) {
          uVar14 = FUN_095dd38c(lVar29,0);
          if ((*in_stack_00000158 != 0) &&
             (((*_fStack0000000000000170 != 0 &&
               (lVar29 = *(long *)(*_fStack0000000000000170 + 0x178), lVar29 != 0)) &&
              (lVar29 = *(long *)(lVar29 + 0x48), lVar29 != 0)))) {
            uVar22 = FUN_074ec404(lVar29,uVar14 | *(int *)(*in_stack_00000158 + 0x28) << 0x10,
                                  &stack0x00001108,*(undefined8 *)PTR_DAT_09fc9d08);
            if ((uVar22 & 1) == 0) goto LAB_092bda38;
            if ((*unaff_x23 != 0) && (lVar29 = *(long *)(*unaff_x23 + 0x38), lVar29 != 0)) {
              if (*(uint *)((long)unaff_x19 + 0x32c) < *(uint *)(lVar29 + 0x18)) {
                FUN_095e15a0((in_stack_0000110c +
                             (*(float *)(lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x32c) *
                                                  unaff_x28 + 0x138) - *(float *)(unaff_x19 + 0xcb))
                             / unaff_s11) - in_stack_00001118,&stack0x00001230,0);
                fVar50 = in_stack_00001110;
                fVar53 = in_stack_0000111c;
LAB_092bda1c:
                FUN_095e15b0(fVar50 - fVar53,&stack0x00001230,0);
                fStack00000000000000f4 = 0.0;
                fVar50 = unaff_s11;
LAB_092bda38:
                fVar53 = (float)FUN_095e15a8(&stack0x00001230,0);
                fVar55 = (float)FUN_095e15a8(&stack0x00001230,0);
                if ((char)unaff_x19[0x1e] != '\0') {
                  fVar57 = *(float *)(unaff_x19 + 0xcb);
                  fVar44 = (float)FUN_095dd1e4(&stack0x00001240,0);
                  fVar57 = fVar57 - fVar50 * fVar44 * (unaff_s14 - *(float *)(unaff_x19 + 0x60));
                  *(float *)(unaff_x19 + 0xcb) = fVar57;
                  if ((in_stack_0000128c == 0x200b) || (in_stack_00000160 != 0)) {
                    *(float *)(unaff_x19 + 0xcb) =
                         fVar57 - in_stack_000000f0 * *(float *)(unaff_x19 + 0x5c);
                  }
                }
                puVar12 = PTR_DAT_09fc9d30;
                fVar57 = *(float *)(unaff_x19 + 0x5b);
                fVar44 = 0.0;
                if (fVar57 != 0.0) {
                  if (((*(char *)((long)unaff_x19 + 0x2dc) == '\0') || (0x3a < in_stack_0000128c))
                     || (fVar44 = 0.25,
                        (1L << ((ulong)in_stack_0000128c & 0x3f) & 0x400500000000000U) == 0)) {
                    fVar44 = 0.5;
                  }
                  fVar45 = (float)FUN_095dd1c4(&stack0x00001240,0);
                  fVar46 = (float)FUN_095dd1d4(&stack0x00001240,0);
                  fVar44 = (unaff_s14 - *(float *)(unaff_x19 + 0x60)) *
                           (fVar57 * fVar44 - fVar50 * (fVar45 * 0.5 + fVar46));
                  *(float *)(unaff_x19 + 0xcb) = fVar44 + *(float *)(unaff_x19 + 0xcb);
                }
                if (((*(int *)((long)unaff_x19 + 0x65c) == 0) && (unaff_w20 == 0)) &&
                   ((*(byte *)((long)unaff_x19 + 0x284) & 1) != 0)) {
                  lVar29 = *in_stack_00000130;
                  if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
                    thunk_FUN_044a54b4();
                  }
                  uVar22 = FUN_09531730(lVar29,0,0);
                  fVar45 = 0.0;
                  if ((uVar22 & 1) != 0) {
                    lVar29 = *in_stack_00000130;
                    if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                    }
                    if (lVar29 == 0) goto LAB_092c3994;
                    uVar22 = FUN_094e2a9c(lVar29,*(undefined4 *)
                                                  (*(long *)(*(long *)puVar12 + 0xb8) + 0x6c),0);
                    if ((uVar22 & 1) != 0) {
                      lVar29 = *in_stack_00000130;
                      if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
                        thunk_FUN_044a54b4();
                      }
                      if (lVar29 == 0) goto LAB_092c3994;
                      fVar57 = (float)thunk_FUN_094e6ff8(lVar29,*(undefined4 *)
                                                                 (*(long *)(*(long *)puVar12 + 0xb8)
                                                                 + 0x6c),0);
                      if ((*_fStack0000000000000170 == 0) || (*in_stack_00000130 == 0))
                      goto LAB_092c3994;
                      fVar46 = *(float *)(*_fStack0000000000000170 + 0x1a8);
                      fVar45 = (float)thunk_FUN_094e6ff8(*in_stack_00000130,
                                                         *(undefined4 *)
                                                          (*(long *)(*(long *)PTR_DAT_09fc9d30 +
                                                                    0xb8) + 0xe4),0);
                      fVar45 = fVar45 * fVar57 * fVar46 * 0.25;
                      if (fVar57 < in_stack_00000150 + fVar45) {
                        in_stack_00000150 = fVar57 - fVar45;
                      }
                    }
                  }
                  if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
                  fStack00000000000000ec = *(float *)(*_fStack0000000000000170 + 0x1ac);
                }
                else {
                  lVar29 = *in_stack_00000130;
                  if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
                    thunk_FUN_044a54b4();
                  }
                  uVar22 = FUN_09531730(lVar29,0,0);
                  fStack00000000000000ec = 0.0;
                  if ((uVar22 & 1) != 0) {
                    lVar29 = *in_stack_00000130;
                    if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                    }
                    if (lVar29 == 0) goto LAB_092c3994;
                    uVar22 = FUN_094e2a9c(lVar29,*(undefined4 *)
                                                  (*(long *)(*(long *)puVar12 + 0xb8) + 0x6c),0);
                    if ((uVar22 & 1) != 0) {
                      lVar29 = *in_stack_00000130;
                      if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
                        thunk_FUN_044a54b4();
                      }
                      if (lVar29 == 0) goto LAB_092c3994;
                      uVar22 = FUN_094e2a9c(lVar29,*(undefined4 *)
                                                    (*(long *)(*(long *)puVar12 + 0xb8) + 0xe4),0);
                      if ((uVar22 & 1) != 0) {
                        lVar29 = *in_stack_00000130;
                        if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
                          thunk_FUN_044a54b4();
                        }
                        if (lVar29 != 0) {
                          fVar57 = (float)thunk_FUN_094e6ff8(lVar29,*(undefined4 *)
                                                                     (*(long *)(*(long *)puVar12 +
                                                                               0xb8) + 0x6c),0);
                          if ((*_fStack0000000000000170 != 0) && (*in_stack_00000130 != 0)) {
                            fVar46 = *(float *)(*_fStack0000000000000170 + 0x1a0);
                            fVar45 = (float)thunk_FUN_094e6ff8(*in_stack_00000130,
                                                               *(undefined4 *)
                                                                (*(long *)(*(long *)PTR_DAT_09fc9d30
                                                                          + 0xb8) + 0xe4),0);
                            fVar45 = fVar45 * fVar57 * fVar46 * 0.25;
                            if (fVar57 < in_stack_00000150 + fVar45) {
                              in_stack_00000150 = fVar57 - fVar45;
                            }
                            goto LAB_092be06c;
                          }
                        }
                        goto LAB_092c3994;
                      }
                    }
                  }
                  fVar45 = 0.0;
                }
LAB_092be06c:
                fVar58 = *(float *)(unaff_x19 + 0xcb);
                fVar57 = (float)FUN_095dd1d4(&stack0x00001240,0);
                fVar60 = *(float *)((long)unaff_x19 + 0x47c);
                fVar46 = (float)FUN_095e1598(&stack0x00001230,0);
                fVar58 = fVar58 + (unaff_s14 - *(float *)(unaff_x19 + 0x60)) *
                                  fVar50 * (fVar46 + ((fVar57 * fVar60 - in_stack_00000150) - fVar45
                                                     ));
                fVar57 = (float)FUN_095dd1dc(&stack0x00001240,0);
                fVar46 = (float)FUN_095e15a8(&stack0x00001230,0);
                fVar66 = *(float *)((long)unaff_x19 + 0x634) +
                         ((unaff_s12 + fVar50 * (in_stack_00000150 + fVar57 + fVar46)) -
                         *(float *)((long)unaff_x19 + 0x4ec));
                fVar57 = (float)FUN_095dd1cc(&stack0x00001240,0);
                fVar69 = fVar66 - fVar50 * (in_stack_00000150 + in_stack_00000150 + fVar57);
                fVar57 = (float)FUN_095dd1c4(&stack0x00001240,0);
                fVar60 = fVar58 + (1.0 - *(float *)(unaff_x19 + 0x60)) *
                                  fVar50 * (fVar45 + fVar45 +
                                           in_stack_00000150 + in_stack_00000150 +
                                           fVar57 * *(float *)((long)unaff_x19 + 0x47c));
                fVar46 = fVar58;
                fVar57 = fVar60;
                if (((*(int *)((long)unaff_x19 + 0x65c) == 0) && (unaff_w20 == 0)) &&
                   ((*(byte *)((long)unaff_x19 + 0x284) >> 1 & 1) != 0)) {
                  if (unaff_x19[0x20] == 0) goto LAB_092c3994;
                  lVar29 = unaff_x19[0xc1];
                  fVar57 = (float)FUN_095dcf10(unaff_x19[0x20] + 0x28,0);
                  if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
                  fVar46 = (float)FUN_095dcf30(*_fStack0000000000000170 + 0x28,0);
                  if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
                  fVar65 = *(float *)((long)unaff_x19 + 0x43c);
                  fVar68 = *(float *)((long)unaff_x19 + 0x634);
                  fVar47 = (float)(int)lVar29 * fStack0000000000000058;
                  fVar48 = (float)FUN_095dcee0(*_fStack0000000000000170 + 0x28,0);
                  fVar48 = fVar48 * fVar65 * (fVar57 - (fVar46 + fVar68)) * 0.5;
                  fVar57 = (float)FUN_095dd1dc(&stack0x00001240,0);
                  fVar46 = fVar47 * fVar50 * ((fVar45 + in_stack_00000150 + fVar57) - fVar48);
                  fVar65 = (float)FUN_095dd1dc(&stack0x00001240,0);
                  fVar68 = (float)FUN_095dd1cc(&stack0x00001240,0);
                  fVar66 = fVar66 + 0.0;
                  fVar69 = fVar69 + 0.0;
                  fVar57 = fVar60 + fVar46;
                  fVar46 = fVar58 + fVar46;
                  fVar47 = fVar47 * fVar50 * ((((fVar65 - fVar68) - in_stack_00000150) - fVar45) -
                                             fVar48);
                  fVar58 = fVar58 + fVar47;
                  fVar60 = fVar60 + fVar47;
                }
                uVar62 = *(undefined8 *)(_uStack0000000000000148 + 0x198);
                uVar59 = *(undefined8 *)(_uStack0000000000000148 + 0x1a0);
                if (DAT_0a51bf45 == '\0') {
                  FUN_04447ba8(PTR_DAT_09f1eb60);
                  DAT_0a51bf45 = '\x01';
                }
                uVar49 = **(undefined8 **)(*(long *)PTR_DAT_09f1eb60 + 0xb8);
                uVar51 = (*(undefined8 **)(*(long *)PTR_DAT_09f1eb60 + 0xb8))[1];
                fVar48 = 0.0;
                if (DAT_01c7611c <
                    (float)((ulong)uVar59 >> 0x20) * (float)((ulong)uVar51 >> 0x20) +
                    (float)uVar59 * (float)uVar51 +
                    (float)uVar62 * (float)uVar49 +
                    (float)((ulong)uVar62 >> 0x20) * (float)((ulong)uVar49 >> 0x20)) {
                  fVar63 = 0.0;
                  fVar61 = 0.0;
                  fVar47 = 0.0;
                  fVar65 = fVar69;
                  fVar68 = fVar66;
                }
                else {
                  FUN_09513820(&stack0x00001290,*(undefined4 *)((long)unaff_x19 + 0x46c),
                               (int)unaff_x19[0x8e],*(undefined4 *)((long)unaff_x19 + 0x474),
                               (int)unaff_x19[0x8f],0);
                  fVar64 = (fVar69 + fVar66) * 0.5;
                  fVar67 = (fVar57 + fVar58) * 0.5;
                  fVar66 = fVar66 - fVar64;
                  unaff_x26[0x169] = in_stack_00001298;
                  unaff_x26[0x168] = in_stack_00001290;
                  unaff_x26[0x16b] = in_stack_000012a8;
                  unaff_x26[0x16a] = CONCAT44(in_stack_000012a4,in_stack_000012a0);
                  fVar47 = 0.0;
                  unaff_x26[0x16d] = in_stack_000012b8;
                  unaff_x26[0x16c] = in_stack_000012b0;
                  unaff_x26[0x16f] = in_stack_000012c8;
                  unaff_x26[0x16e] = in_stack_000012c0;
                  fVar68 = fVar66;
                  fVar46 = (float)FUN_09513720(fVar46 - fVar67,&stack0x000010c0,0);
                  fVar46 = fVar67 + fVar46;
                  fVar47 = fVar47 + 0.0;
                  fVar69 = fVar69 - fVar64;
                  fVar61 = 0.0;
                  fVar65 = fVar69;
                  fVar58 = (float)FUN_09513720(fVar58 - fVar67,&stack0x000010c0,0);
                  fVar58 = fVar67 + fVar58;
                  fVar61 = fVar61 + 0.0;
                  fVar63 = 0.0;
                  fVar57 = (float)FUN_09513720(fVar57 - fVar67,&stack0x000010c0,0);
                  fVar57 = fVar67 + fVar57;
                  fVar63 = fVar63 + 0.0;
                  fVar66 = fVar64 + fVar66;
                  fVar48 = 0.0;
                  fVar60 = (float)FUN_09513720(fVar60 - fVar67,&stack0x000010c0,0);
                  fVar69 = fVar64 + fVar69;
                  fVar60 = fVar67 + fVar60;
                  fVar48 = fVar48 + 0.0;
                  fVar65 = fVar64 + fVar65;
                  fVar68 = fVar64 + fVar68;
                }
                fVar64 = 1.0;
                if ((*in_stack_00000178 == 0) ||
                   (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0)) goto LAB_092c3994;
                if (*(uint *)(lVar29 + 0x18) <= *unaff_x24) goto LAB_092c3b00;
                lVar29 = lVar29 + (long)(int)*unaff_x24 * unaff_x28;
                *(float *)(lVar29 + 0x114) = fVar58;
                *(float *)(lVar29 + 0x118) = fVar65;
                *(float *)(lVar29 + 0x11c) = fVar61;
                if ((*in_stack_00000178 == 0) ||
                   (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0)) goto LAB_092c3994;
                if (*(uint *)(lVar29 + 0x18) <= *unaff_x24) goto LAB_092c3b00;
                lVar29 = lVar29 + (long)(int)*unaff_x24 * unaff_x28;
                *(float *)(lVar29 + 0x108) = fVar46;
                *(float *)(lVar29 + 0x10c) = fVar68;
                *(float *)(lVar29 + 0x110) = fVar47;
                if ((*in_stack_00000178 == 0) ||
                   (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0)) goto LAB_092c3994;
                if (*(uint *)(lVar29 + 0x18) <= *unaff_x24) goto LAB_092c3b00;
                lVar29 = lVar29 + (long)(int)*unaff_x24 * unaff_x28;
                *(float *)(lVar29 + 0x124) = fVar66;
                *(float *)(lVar29 + 0x128) = fVar63;
                *(float *)(lVar29 + 0x120) = fVar57;
                if ((*in_stack_00000178 == 0) ||
                   (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0)) goto LAB_092c3994;
                if (*(uint *)(lVar29 + 0x18) <= *unaff_x24) goto LAB_092c3b00;
                lVar29 = lVar29 + (long)(int)*unaff_x24 * unaff_x28;
                *(float *)(lVar29 + 300) = fVar60;
                *(float *)(lVar29 + 0x130) = fVar69;
                *(float *)(lVar29 + 0x134) = fVar48;
                if (*in_stack_00000178 == 0) goto LAB_092c3994;
                lVar29 = *(long *)(*in_stack_00000178 + 0x38);
                uVar22 = (ulong)(uint)fVar50;
                if (lVar29 == 0) goto LAB_092c3994;
                uVar14 = *unaff_x24;
                fVar60 = *(float *)(unaff_x19 + 0xcb);
                fVar46 = (float)FUN_095e1598(&stack0x00001230,0);
                if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_092c3b00;
                *(float *)(lVar29 + (long)(int)uVar14 * unaff_x28 + 0x138) =
                     fVar60 + fVar50 * fVar46;
                if ((*in_stack_00000178 == 0) ||
                   (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0)) goto LAB_092c3994;
                uVar14 = *unaff_x24;
                fVar66 = *(float *)((long)unaff_x19 + 0x4ec);
                fVar60 = *(float *)((long)unaff_x19 + 0x634);
                fVar46 = (float)FUN_095e15a8(&stack0x00001230,0);
                if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_092c3b00;
                *(float *)(lVar29 + (long)(int)uVar14 * unaff_x28 + 0x144) =
                     (unaff_s12 - fVar66) + fVar60 + fVar50 * fVar46;
                if ((*in_stack_00000178 == 0) ||
                   (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0)) goto LAB_092c3994;
                uVar14 = *unaff_x24;
                lVar38 = (long)(int)uVar14;
                if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_092c3b00;
                *(float *)(lVar29 + lVar38 * unaff_x28 + 0x158) =
                     (fVar57 - fVar58) / (fVar68 - fVar65);
                fVar53 = fVar50 * (fStack0000000000000118 + fVar53);
                if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
                  fVar53 = fVar53 / fStack000000000000011c;
                  fVar55 = (fVar50 * (fStack0000000000000114 + fVar55)) / fStack000000000000011c;
                }
                else {
                  fVar55 = fVar50 * (fStack0000000000000114 + fVar55);
                }
                fVar57 = *(float *)((long)unaff_x19 + 0x634);
                uVar19 = *(uint *)(unaff_x19 + 0x95);
                if ((in_stack_00000160 == 0) || (uVar14 == uVar19)) {
                  fVar55 = fVar57 + fVar55;
                  fVar53 = fVar57 + fVar53;
                  fVar58 = fVar55;
                  fVar46 = fVar53;
                  if (fVar57 != 0.0) {
                    fVar46 = (fVar53 - fVar57) / *(float *)((long)unaff_x19 + 0x43c);
                    fVar58 = (fVar55 - fVar57) / *(float *)((long)unaff_x19 + 0x43c);
                    if (fVar46 <= fVar53) {
                      fVar46 = fVar53;
                    }
                    if (fVar55 <= fVar58) {
                      fVar58 = fVar55;
                    }
                  }
                  lVar29 = lVar29 + lVar38 * unaff_x28;
                  fVar57 = fVar46;
                  if (fVar46 <= *(float *)((long)unaff_x19 + 0x4dc)) {
                    fVar57 = *(float *)((long)unaff_x19 + 0x4dc);
                  }
                  fVar60 = fVar58;
                  if (*(float *)(unaff_x19 + 0x9c) <= fVar58) {
                    fVar60 = *(float *)(unaff_x19 + 0x9c);
                  }
                  *(float *)((long)unaff_x19 + 0x4dc) = fVar57;
                  *(float *)(unaff_x19 + 0x9c) = fVar60;
                  *(float *)(lVar29 + 0x14c) = fVar46;
                  *(float *)(lVar29 + 0x150) = fVar58;
                  fVar46 = *(float *)((long)unaff_x19 + 0x4ec);
                  *(float *)(lVar29 + 0x140) = fVar53 - fVar46;
                  *(float *)((long)unaff_x19 + 0x4d4) = fVar53 - fVar46;
                  *(float *)(lVar29 + 0x148) = fVar55 - fVar46;
                  *(float *)(unaff_x19 + 0x9b) = fVar55 - fVar46;
                  if (((int)unaff_x19[0x97] == 0) || (*(char *)((long)unaff_x19 + 0x374) != '\0')) {
                    *(float *)((long)unaff_x19 + 0x4cc) = fVar57;
                    if (unaff_x19[0x20] == 0) goto LAB_092c3994;
                    fVar55 = *(float *)(unaff_x19 + 0x9a);
                    fVar57 = (float)FUN_095dcf10(unaff_x19[0x20] + 0x28,0);
                    fStack000000000000011c = (fVar50 * fVar57) / fStack000000000000011c;
                    fVar46 = *(float *)((long)unaff_x19 + 0x4ec);
                    if (fVar55 <= fStack000000000000011c) {
                      fVar55 = fStack000000000000011c;
                    }
                    *(float *)(unaff_x19 + 0x9a) = fVar55;
                  }
                  uVar52 = (ulong)(uint)fVar46;
                  if (fVar46 == 0.0) {
                    fVar55 = *(float *)(unaff_x19 + 0x99);
                    if (*(float *)(unaff_x19 + 0x99) <= fVar53) {
                      fVar55 = fVar53;
                    }
                    *(float *)(unaff_x19 + 0x99) = fVar55;
                  }
                }
                else {
                  fVar53 = *(float *)((long)unaff_x19 + 0x4dc);
                  lVar29 = lVar29 + lVar38 * unaff_x28;
                  *(float *)(lVar29 + 0x14c) = fVar53;
                  fVar57 = *(float *)(unaff_x19 + 0x9c);
                  *(float *)(lVar29 + 0x150) = fVar57;
                  fVar55 = *(float *)((long)unaff_x19 + 0x4ec);
                  uVar52 = (ulong)(uint)fVar55;
                  fVar53 = fVar53 - fVar55;
                  fVar57 = fVar57 - fVar55;
                  *(float *)(lVar29 + 0x140) = fVar53;
                  *(float *)((long)unaff_x19 + 0x4d4) = fVar53;
                  *(float *)(lVar29 + 0x148) = fVar57;
                  *(float *)(unaff_x19 + 0x9b) = fVar57;
                }
                lVar29 = *in_stack_00000178;
                if ((lVar29 == 0) || (lVar38 = *(long *)(lVar29 + 0x38), lVar38 == 0))
                goto LAB_092c3994;
                uVar15 = *unaff_x24;
                if (*(uint *)(lVar38 + 0x18) <= uVar15) goto LAB_092c3b00;
                lVar38 = lVar38 + (long)(int)uVar15 * unaff_x28;
                *(undefined1 *)(lVar38 + 400) = 0;
                uVar16 = *(uint *)(unaff_x19 + 0x54);
                iVar42 = (int)unaff_x28;
                uVar17 = in_stack_0000128c;
                if ((((in_stack_0000128c == 9) ||
                     (((*(uint *)((long)unaff_x19 + 0x304) & 0xfffffffe) == 2 &&
                      ((in_stack_0000128c == 0x200b || (in_stack_00000160 != 0)))))) ||
                    ((in_stack_00000160 == 0 &&
                     (((in_stack_0000128c != 3 && (in_stack_0000128c != 0x200b)) &&
                      (in_stack_0000128c != 0xad)))))) ||
                   ((((uint)(in_stack_0000128c == 0xad) & (uStack0000000000000060 ^ 0xffffffff)) !=
                     0 || (*(int *)((long)unaff_x19 + 0x65c) == 1)))) {
                  *(undefined1 *)(lVar38 + 400) = 1;
                  pfVar30 = _fStack00000000000000b8;
                  pfVar32 = _iStack00000000000000c8;
                  if (unaff_w25 != 0) {
                    lVar29 = *(long *)(lVar29 + 0x50);
                    if (lVar29 == 0) goto LAB_092c3994;
                    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_092c3b00;
                    lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
                    pfVar32 = (float *)(lVar29 + 100);
                    pfVar30 = (float *)(lVar29 + 0x68);
                  }
                  fVar46 = *pfVar32;
                  fVar55 = *pfVar30;
                  fVar53 = *(float *)(unaff_x19 + 0x73);
                  fVar57 = *(float *)(unaff_x19 + 0xcb);
                  in_stack_00000100._4_4_ = (fStack00000000000000b4 - fVar46) - fVar55;
                  bVar13 = true;
                  if ((fVar53 <= in_stack_00000100._4_4_) && (bVar13 = false, !NAN(fVar53))) {
                    bVar13 = fVar53 == -1.0;
                  }
                  if (!bVar13) {
                    in_stack_00000100._4_4_ = fVar53;
                  }
                  fVar53 = 0.0;
                  fVar58 = 0.0;
                  if ((char)unaff_x19[0x1e] == '\0') {
                    fVar58 = (float)FUN_095dd1e4(&stack0x00001240,0);
                    uVar52 = (ulong)*(uint *)((long)unaff_x19 + 0x4ec);
                  }
                  fVar60 = *(float *)(unaff_x19 + 0x60);
                  fVar66 = *(float *)(unaff_x19 + 0x9c);
                  if (in_stack_0000128c != 0xad) {
                    unaff_s15 = fVar50;
                  }
                  fVar69 = (float)uVar52;
                  if ((0.0 < fVar69) && (fVar53 = 0.0, (char)unaff_x19[0x5e] == '\0')) {
                    fVar53 = *(float *)(_uStack0000000000000148 + 0x208) -
                             *(float *)(_uStack0000000000000148 + 0x210);
                  }
                  uVar15 = *unaff_x24;
                  fVar53 = (*(float *)((long)unaff_x19 + 0x4cc) - (fVar66 - fVar69)) + fVar53;
                  if (fStack00000000000000d8 < fVar53) {
                    if (*(int *)((long)unaff_x19 + 0x314) == -1) {
                      *(uint *)((long)unaff_x19 + 0x314) = uVar15;
                    }
                    puVar12 = PTR_DAT_09f56060;
                    uVar59 = DAT_01c74668;
                    if ((char)unaff_x19[0x4c] != '\0') {
                      fVar48 = *(float *)((long)unaff_x19 + 0x2f4);
                      if (((fVar48 < *(float *)(unaff_x19 + 0x5d)) && (0.0 < fVar69)) &&
                         (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
                        fVar50 = *(float *)(unaff_x19 + 0x5d) +
                                 ((fStack0000000000000018 - fVar53) / (float)(int)unaff_x19[0x97]) /
                                 fStack0000000000000050;
                        if (fVar50 <= fVar48) {
                          fVar50 = fVar48;
                        }
                        goto LAB_092c39c0;
                      }
                      fVar69 = *(float *)((long)unaff_x19 + 0x20c);
                      fVar53 = *(float *)(unaff_x19 + 0x4f);
                      uVar52 = (ulong)(uint)fVar53;
                      if ((fVar53 < fVar69) &&
                         (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
                        fVar50 = (fVar69 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
                        if (fVar50 <= DAT_01c7621c) {
                          fVar50 = DAT_01c7621c;
                        }
                        fVar55 = (fVar69 - fVar50) * 20.0 + 0.5;
                        *(float *)((long)unaff_x19 + 0x264) = fVar69;
                        fVar50 = DAT_01c76874;
                        if (fVar55 != INFINITY) {
                          fVar50 = (float)(int)fVar55 / 20.0;
                        }
                        if (fVar50 <= fVar53) {
                          fVar50 = fVar53;
                        }
                        goto LAB_092c0ea8;
                      }
                    }
                    switch((int)unaff_x19[0x62]) {
                    case 1:
                      lVar29 = *(long *)PTR_DAT_09f56060;
                      if (*(int *)(lVar29 + 0xe4) == 0) {
                        thunk_FUN_044a54b4();
                        lVar29 = *(long *)puVar12;
                      }
                      lVar38 = *(long *)(lVar29 + 0xb8);
                      if (*(int *)(lVar38 + 0x1708) == 0) {
LAB_092bf224:
                        uVar59 = DAT_01c74668;
                        in_stack_00000180[0] = 0;
                        in_stack_00000180[1] = 0;
                        unaff_x24 = in_stack_00000180;
                        in_stack_00001258 = 0xffffffff;
                        goto LAB_092c09bc;
                      }
                      if (*(int *)(lVar29 + 0xe4) == 0) {
                        thunk_FUN_044a54b4();
                        lVar38 = *(long *)(*(long *)PTR_DAT_09f56060 + 0xb8);
                      }
                      FUN_0677903c(&stack0x00001290,lVar38 + 0x1338,*(undefined8 *)PTR_DAT_09fc9da0)
                      ;
                      memcpy(&stack0x00000d08,&stack0x00001290,0x3b8);
LAB_092bf1f0:
                      iVar20 = FUN_0930fffc();
                      in_stack_00001258 = iVar20 - 1;
                      unaff_w21 = unaff_w21 + 1;
                      uVar15 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
                      *(uint *)((long)unaff_x19 + 0x4a4) = uVar15;
                      uVar43 = 0x2026;
                      unaff_x24 = in_stack_00000180;
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
                      unaff_x24 = in_stack_00000180;
                      break;
                    case 5:
                      if ((uVar15 == 0) || ((int)in_stack_00001258 < 0)) {
                        *in_stack_00000180 = 0;
                        unaff_x24 = in_stack_00000180;
                        in_stack_00001258 = 0xffffffff;
                      }
                      else {
                        fVar53 = *(float *)(_uStack0000000000000148 + 0x208);
                        if (*(int *)(*(long *)PTR_DAT_09f56060 + 0xe4) == 0) {
                          thunk_FUN_044a54b4();
                        }
                        in_stack_00001258 = FUN_0930fffc();
                        unaff_x24 = in_stack_00000180;
                        if (fStack00000000000000d8 < fVar53 - fVar66) break;
                        *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
                        *(undefined4 *)(unaff_x19 + 0x95) = *(undefined4 *)((long)unaff_x19 + 0x4a4)
                        ;
                        uVar59 = NEON_rev64(*(undefined8 *)
                                             (*(long *)(*(long *)PTR_DAT_09f56060 + 0xb8) + 0x1730),
                                            4);
                        *(undefined8 *)(_uStack0000000000000148 + 0x208) = uVar59;
                        unaff_x19[0x99] = 0;
                        uVar52 = 0;
                        *(int *)(unaff_x19 + 0x97) = (int)unaff_x19[0x97] + 1;
                        *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
                        *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
                        *(float *)(unaff_x19 + 0xcb) = *(float *)((long)unaff_x19 + 0x444) + 0.0;
                        *(int *)((long)unaff_x19 + 0x4c4) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
                        uVar59 = in_stack_00001278;
                      }
                      goto LAB_092c09bc;
                    case 6:
                      if (*(int *)(*(long *)PTR_DAT_09f56060 + 0xe4) == 0) {
                        thunk_FUN_044a54b4();
                      }
                      in_stack_00001258 = FUN_0930fffc();
                      lVar29 = unaff_x19[99];
                      if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
                        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
                      }
                      uVar22 = FUN_09531730(lVar29,0,0);
                      unaff_x24 = in_stack_00000180;
                      if ((uVar22 & 1) != 0) {
                        plVar41 = (long *)unaff_x19[99];
                        uVar59 = (**(code **)(*unaff_x19 + 0x548))();
                        if (plVar41 == (long *)0x0) goto LAB_092c3994;
                        (**(code **)(*plVar41 + 0x558))
                                  (plVar41,uVar59,*(undefined8 *)(*plVar41 + 0x560));
                        lVar29 = unaff_x19[99];
                        if (lVar29 == 0) goto LAB_092c3994;
                        *(int *)(lVar29 + 0x438) = (int)unaff_x19[0x87];
                        FUN_09303930(lVar29,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
                        plVar41 = (long *)unaff_x19[99];
                        if (plVar41 == (long *)0x0) goto LAB_092c3994;
                        (**(code **)(*plVar41 + 0x7d8))
                                  (plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
                        *(undefined1 *)(unaff_x19 + 0x65) = 1;
                      }
                    }
FUN_092bee6c:
                    uVar43 = 3;

                    UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_00000347_PostfixBurstDelegate__Invoke
                    :
                    uVar59 = CONCAT44(uVar43,uVar15);
                    goto LAB_092c09bc;
                  }
switchD_092bea04_caseD_2:
                  puVar12 = PTR_DAT_09f56060;
                  if ((unaff_x29 & 1) != 0) {
                    fVar66 = 1.0 - fVar60;
                    uVar52 = (ulong)(uint)fVar66;
                    fVar57 = ABS(fVar57) + fVar58 * fVar66 * unaff_s15;
                    fVar53 = fVar64;
                    if ((uVar16 & 0x18) != 0) {
                      fVar53 = DAT_01c760f8;
                    }
                    if (fVar57 <= fVar53 * in_stack_00000100._4_4_) goto LAB_092beb7c;
                    if (((*(int *)((long)unaff_x19 + 0x304) == 0) ||
                        (*(int *)((long)unaff_x19 + 0x304) == 3)) ||
                       (uVar15 == *(uint *)(unaff_x19 + 0x95))) {
                      if (((char)unaff_x19[0x4c] != '\0') &&
                         (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
                        fVar58 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
                        if (fVar60 < fVar58) {
                          fVar50 = fVar57 / fVar66;
                          if (fVar60 <= 0.0) {
                            fVar50 = fVar57;
                          }
                          fVar60 = fVar60 + (fVar57 - fVar53 * (in_stack_00000100._4_4_ +
                                                               DAT_01c76534)) / fVar50;
                          goto LAB_092c3ab4;
                        }
                        fVar60 = *(float *)((long)unaff_x19 + 0x20c);
                        uVar52 = (ulong)(uint)fVar60;
                        fVar58 = *(float *)(unaff_x19 + 0x4f);
                        if (fVar60 <= fVar58) goto LAB_092beb30;
LAB_092c3a28:
                        fVar50 = (fVar60 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
                        if (fVar50 <= DAT_01c7621c) {
                          fVar50 = DAT_01c7621c;
                        }
                        *(float *)((long)unaff_x19 + 0x264) = fVar60;
                        fVar53 = (fVar60 - fVar50) * 20.0 + 0.5;
                        fVar50 = DAT_01c76874;
                        if (fVar53 != INFINITY) {
                          fVar50 = (float)(int)fVar53 / 20.0;
                        }
                        if (fVar50 <= fVar58) {
                          fVar50 = fVar58;
                        }
LAB_092c0ea8:
                        *(float *)((long)unaff_x19 + 0x20c) = fVar50;
                        return;
                      }
LAB_092beb30:
                      iVar20 = (int)unaff_x19[0x62];
                      if (iVar20 == 1) {
                        lVar29 = *(long *)PTR_DAT_09f56060;
                        if (*(int *)(lVar29 + 0xe4) == 0) {
                          thunk_FUN_044a54b4();
                          lVar29 = *(long *)puVar12;
                        }
                        lVar38 = *(long *)(lVar29 + 0xb8);
                        if (*(int *)(lVar38 + 0x1708) == 0) goto LAB_092bf224;
                        if (*(int *)(lVar29 + 0xe4) == 0) {
                          thunk_FUN_044a54b4();
                          lVar38 = *(long *)(*(long *)PTR_DAT_09f56060 + 0xb8);
                        }
                        FUN_0677903c(&stack0x00001290,lVar38 + 0x1338,
                                     *(undefined8 *)PTR_DAT_09fc9da0);
                        memcpy(&stack0x00000598,&stack0x00001290,0x3b8);
                        goto LAB_092bf1f0;
                      }
                      if (iVar20 != 6) {
                        if (iVar20 == 3) {
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
                      lVar29 = unaff_x19[99];
                      if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
                        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
                      }
                      uVar22 = FUN_09531730(lVar29,0,0);
                      if ((uVar22 & 1) != 0) {
                        plVar41 = (long *)unaff_x19[99];
                        uVar59 = (**(code **)(*unaff_x19 + 0x548))();
                        if (plVar41 == (long *)0x0) goto LAB_092c3994;
                        (**(code **)(*plVar41 + 0x558))
                                  (plVar41,uVar59,*(undefined8 *)(*plVar41 + 0x560));
                        lVar29 = unaff_x19[99];
                        if (lVar29 == 0) goto LAB_092c3994;
                        *(int *)(lVar29 + 0x438) = (int)unaff_x19[0x87];
                        FUN_09303930(lVar29,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
                        plVar41 = (long *)unaff_x19[99];
                        if (plVar41 == (long *)0x0) goto LAB_092c3994;
                        (**(code **)(*plVar41 + 0x7d8))
                                  (plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
                        *(undefined1 *)(unaff_x19 + 0x65) = 1;
                      }
                      unaff_x24 = in_stack_00000180;
                      uVar59 = CONCAT44(3,*in_stack_00000180);
                      goto LAB_092c09bc;
                    }
                    if (*(int *)(*(long *)PTR_DAT_09f56060 + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                    }
                    in_stack_00001258 = FUN_0930fffc();
                    if (*(float *)((long)unaff_x19 + 0x2ec) == DAT_01c76224) {
                      lVar29 = *in_stack_00000178;
                      if ((lVar29 == 0) || (lVar38 = *(long *)(lVar29 + 0x38), lVar38 == 0))
                      goto LAB_092c3994;
                      if (*(uint *)(lVar38 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
                      fVar58 = *(float *)((long)unaff_x19 + 0x4ec);
                      fVar60 = 0.0;
                      if ((0.0 < fVar58) && (fVar60 = 0.0, (char)unaff_x19[0x5e] == '\0')) {
                        fVar60 = *(float *)(_uStack0000000000000148 + 0x208) -
                                 *(float *)(_uStack0000000000000148 + 0x210);
                      }
                      fVar60 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2e4) +
                               *(float *)(lVar38 + (long)(int)*in_stack_00000180 * unaff_x28 + 0x14c
                                         ) + (fVar60 - *(float *)(unaff_x19 + 0x9c)) +
                               fStack0000000000000050 *
                               (in_stack_00000048._4_4_ + *(float *)(unaff_x19 + 0x5d));
                    }
                    else {
                      lVar29 = unaff_x19[0x74];
                      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                      if (lVar29 == 0) goto LAB_092c3994;
                      fVar58 = *(float *)((long)unaff_x19 + 0x4ec);
                      fVar60 = *(float *)((long)unaff_x19 + 0x2ec) +
                               in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2e4);
                    }
                    puVar12 = PTR_DAT_09f56060;
                    lVar29 = *(long *)(lVar29 + 0x38);
                    if (lVar29 == 0) goto LAB_092c3994;
                    uVar2 = *(uint *)((long)unaff_x19 + 0x4a4);
                    if ((*(uint *)(lVar29 + 0x18) <= uVar2) ||
                       (uVar39 = uVar2 - 1, *(uint *)(lVar29 + 0x18) <= uVar39)) goto LAB_092c3b00;
                    fVar60 = fVar60 + *(float *)((long)unaff_x19 + 0x4cc);
                    uVar52 = (ulong)(uint)fVar60;
                    fVar66 = (fVar60 + fVar58) -
                             *(float *)(lVar29 + (long)(int)uVar2 * unaff_x28 + 0x150);
                    if (((uStack0000000000000060 & 1) == 0 &&
                         *(short *)(lVar29 + (long)(int)uVar39 * (long)iVar42 + 0x24) == 0xad) &&
                       ((fVar66 < fStack00000000000000d8 || ((int)unaff_x19[0x62] == 0)))) {
                      uStack0000000000000060 = 0;
                      *in_stack_00000180 = uVar39;
                      unaff_x24 = in_stack_00000180;
                      in_stack_00001258 = in_stack_00001258 - 1;
                      uVar59 = CONCAT44(0x2d,uVar39);
                      goto LAB_092c09bc;
                    }
                    if (*(short *)(lVar29 + (long)(int)uVar2 * unaff_x28 + 0x24) == 0xad) {
                      uStack0000000000000060 = 1;
                      unaff_x24 = in_stack_00000180;
                      uVar59 = in_stack_00001278;
                      goto LAB_092c09bc;
                    }
                    if ((in_stack_00000080._4_4_ & *(byte *)(unaff_x19 + 0x4c) & 1) != 0) {
                      fVar60 = *(float *)(unaff_x19 + 0x60);
                      fVar58 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
                      if ((fVar58 <= fVar60) ||
                         ((int)unaff_x19[0x4e] <= *(int *)((long)unaff_x19 + 0x26c))) {
                        fVar60 = *(float *)((long)unaff_x19 + 0x20c);
                        uVar52 = (ulong)(uint)fVar60;
                        fVar58 = *(float *)(unaff_x19 + 0x4f);
                        if ((fVar58 < fVar60) &&
                           (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
                        goto LAB_092c3a28;
                        goto LAB_092c074c;
                      }

                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000359_PostfixBurstDelegate__BeginInvoke
                      :
                      fVar50 = fVar57;
                      if (0.0 < fVar60) {
                        fVar50 = fVar57 / (1.0 - fVar60);
                      }
                      fVar60 = fVar60 + (fVar57 - fVar53 * (in_stack_00000100._4_4_ + DAT_01c76534))
                                        / fVar50;
LAB_092c3ab4:
                      if (fVar58 <= fVar60) {
                        fVar60 = fVar58;
                      }
                      *(float *)(unaff_x19 + 0x60) = fVar60;
                      return;
                    }
LAB_092c074c:
                    lVar29 = *(long *)PTR_DAT_09f56060;
                    if (*(int *)(lVar29 + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                      lVar29 = *(long *)puVar12;
                    }
                    iVar20 = *(int *)(*(long *)(lVar29 + 0xb8) + 0xf80);
                    if (((iVar20 != iStack000000000000001c) && (iVar20 != -1)) &&
                       (((in_stack_00000080._4_4_ ^ 1) & 1) == 0)) {
                      if (*(int *)(lVar29 + 0xe4) == 0) {
                        thunk_FUN_044a54b4();
                      }
                      in_stack_00001258 = FUN_0930fffc();
                      if ((unaff_x19[0x74] == 0) ||
                         (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
                      goto LAB_092c3994;
                      uVar2 = *in_stack_00000180 - 1;
                      if (*(uint *)(lVar29 + 0x18) <= uVar2) goto LAB_092c3b00;
                      iStack000000000000001c = iVar20;
                      if (*(short *)(lVar29 + (long)(int)uVar2 * (long)iVar42 + 0x24) == 0xad) {
                        uStack0000000000000060 = 0;
                        *in_stack_00000180 = uVar2;
                        unaff_x24 = in_stack_00000180;
                        in_stack_00001258 = in_stack_00001258 - 1;
                        uVar59 = CONCAT44(0x2d,uVar2);
                        goto LAB_092c09bc;
                      }
                    }
                    if (fVar66 <= fStack00000000000000d8) {
                      FUN_09310af4(fStack0000000000000050);
                      uStack0000000000000060 = 0;
                      unaff_x24 = in_stack_00000180;
                      uVar52 = uVar22;
                      goto LAB_092c0198;
                    }
                    if (*(int *)((long)unaff_x19 + 0x314) == -1) {
                      *(undefined4 *)((long)unaff_x19 + 0x314) =
                           *(undefined4 *)((long)unaff_x19 + 0x4a4);
                    }
                    if ((char)unaff_x19[0x4c] != '\0') {
                      fVar58 = *(float *)((long)unaff_x19 + 0x2f4);
                      if ((fVar58 < *(float *)(unaff_x19 + 0x5d)) &&
                         (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
                        fVar50 = *(float *)(unaff_x19 + 0x5d) +
                                 ((fStack0000000000000018 - fVar66) /
                                 (float)((int)unaff_x19[0x97] + 1)) / fStack0000000000000050;
                        if (fVar50 <= fVar58) {
                          fVar50 = fVar58;
                        }
LAB_092c39c0:
                        *(float *)(unaff_x19 + 0x5d) = fVar50;
                        return;
                      }
                      fVar60 = *(float *)(unaff_x19 + 0x60);
                      fVar58 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
                      if ((fVar60 < fVar58) &&
                         (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_00000359_PostfixBurstDelegate__BeginInvoke
                      ;
                      fVar60 = *(float *)((long)unaff_x19 + 0x20c);
                      uVar52 = (ulong)(uint)fVar60;
                      fVar58 = *(float *)(unaff_x19 + 0x4f);
                      if ((fVar58 < fVar60) &&
                         (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
                      goto LAB_092c3a28;
                    }
                    switch((int)unaff_x19[0x62]) {
                    case 0:
                    case 2:
                    case 4:
                      FUN_09310af4(fStack0000000000000050);
                      goto LAB_092c0ce4;
                    case 1:
                      lVar29 = *(long *)PTR_DAT_09f56060;
                      if (*(int *)(lVar29 + 0xe4) == 0) {
                        thunk_FUN_044a54b4();
                        lVar29 = *(long *)PTR_DAT_09f56060;
                      }
                      uVar59 = DAT_01c74668;
                      lVar38 = *(long *)(lVar29 + 0xb8);
                      if (*(int *)(lVar38 + 0x1708) != 0) {
                        if (*(int *)(lVar29 + 0xe4) == 0) {
                          thunk_FUN_044a54b4();
                          lVar38 = *(long *)(*(long *)PTR_DAT_09f56060 + 0xb8);
                        }
                        FUN_0677903c(&stack0x00001290,lVar38 + 0x1338,
                                     *(undefined8 *)PTR_DAT_09fc9da0);
                        memcpy(&stack0x00000950,&stack0x00001290,0x3b8);
                        iVar20 = FUN_0930fffc();
                        in_stack_00001258 = iVar20 - 1;
                        unaff_w21 = unaff_w21 + 1;
                        uVar15 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
                        *(uint *)((long)unaff_x19 + 0x4a4) = uVar15;
                        uVar43 = 0x2026;
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility__Angle_BurstManaged
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
                      uVar43 = 3;
UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility__Angle_BurstManaged:
                      uVar59 = CONCAT44(uVar43,uVar15);
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
                      unaff_x24 = in_stack_00000180;
                      uVar52 = uVar22;
LAB_092c0198:
                      in_stack_00000080._4_4_ = 1;
                      fStack0000000000000068 = 1.4013e-45;
                      uVar59 = in_stack_00001278;
                      goto LAB_092c09bc;
                    case 6:
                      lVar29 = unaff_x19[99];
                      if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
                        thunk_FUN_044a54b4();
                      }
                      uVar22 = FUN_09531730(lVar29,0,0);
                      if ((uVar22 & 1) != 0) {
                        plVar41 = (long *)unaff_x19[99];
                        uVar59 = (**(code **)(*unaff_x19 + 0x548))();
                        if (plVar41 == (long *)0x0) goto LAB_092c3994;
                        (**(code **)(*plVar41 + 0x558))
                                  (plVar41,uVar59,*(undefined8 *)(*plVar41 + 0x560));
                        lVar29 = unaff_x19[99];
                        if (lVar29 == 0) goto LAB_092c3994;
                        *(int *)(lVar29 + 0x438) = (int)unaff_x19[0x87];
                        FUN_09303930(lVar29,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
                        plVar41 = (long *)unaff_x19[99];
                        if (plVar41 == (long *)0x0) goto LAB_092c3994;
                        (**(code **)(*plVar41 + 0x7d8))
                                  (plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
                        *(undefined1 *)(unaff_x19 + 0x65) = 1;
                      }
                      uVar59 = CONCAT44(3,*in_stack_00000180);
                      break;
                    default:
                      uStack0000000000000060 = 0;
                      goto LAB_092beb7c;
                    }
                    uStack0000000000000060 = 0;
                    unaff_x24 = in_stack_00000180;
LAB_092c09bc:
                    do {
                      do {
                        fVar53 = 1.0;
                        in_stack_00001258 = in_stack_00001258 + 1;
                        lVar29 = unaff_x19[0x91];
                        if (lVar29 == 0) goto LAB_092c3994;
                        if ((int)*(uint *)(lVar29 + 0x18) <= (int)in_stack_00001258) {
LAB_092c0dec:
                          fVar50 = (float)uVar52;
                          if (((char)unaff_x19[0x4c] != '\0') &&
                             (fVar50 = DAT_01c75ea4,
                             DAT_01c75ea4 <
                             *(float *)((long)unaff_x19 + 0x264) - *(float *)(unaff_x19 + 0x4d))) {
                            fVar50 = *(float *)((long)unaff_x19 + 0x20c);
                            fVar53 = *(float *)((long)unaff_x19 + 0x27c);
                            if ((fVar50 < fVar53) &&
                               (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
                              if (*(float *)(unaff_x19 + 0x60) <
                                  *(float *)((long)unaff_x19 + 0x2fc) / 100.0) {
                                *(undefined4 *)(unaff_x19 + 0x60) = 0;
                              }
                              fVar55 = (*(float *)((long)unaff_x19 + 0x264) - fVar50) * 0.5;
                              if (fVar55 <= DAT_01c7621c) {
                                fVar55 = DAT_01c7621c;
                              }
                              *(float *)(unaff_x19 + 0x4d) = fVar50;
                              fVar55 = (fVar50 + fVar55) * 20.0 + 0.5;
                              fVar50 = DAT_01c76874;
                              if (fVar55 != INFINITY) {
                                fVar50 = (float)(int)fVar55 / 20.0;
                              }
                              if (fVar53 <= fVar50) {
                                fVar50 = fVar53;
                              }
                              goto LAB_092c0ea8;
                            }
                          }
                          *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
                          plVar41 = (long *)PTR_DAT_09f56060;
                          if ((int)unaff_x19[0x4e] <= *(int *)((long)unaff_x19 + 0x26c)) {
                            uVar59 = FUN_07a3b850(in_stack_00000038,0);
                            uVar62 = FUN_07a5081c(in_stack_00000040,0);
                            uVar59 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09fc9e20,uVar59,
                                                  *(undefined8 *)PTR_DAT_09fc9e08,uVar62,0);
                            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                            }
                            FUN_094c652c(uVar59,0);
                          }
                          if ((*unaff_x24 == 0) || ((*unaff_x24 == 1 && (uVar17 == 3)))) {
                            (**(code **)(*unaff_x19 + 0x958))();
                            goto LAB_092c0f78;
                          }
                          lVar29 = *plVar41;
                          if (*(int *)(lVar29 + 0xe4) == 0) {
                            thunk_FUN_044a54b4();
                            lVar29 = *plVar41;
                          }
                          lVar29 = **(long **)(lVar29 + 0xb8);
                          if (lVar29 == 0) goto LAB_092c3994;
                          if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0xd4))
                          goto LAB_092c3b00;
                          iVar42 = *(int *)(lVar29 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x38 +
                                           0x54) << 2;
                          if ((*in_stack_00000178 == 0) ||
                             (lVar29 = *(long *)(*in_stack_00000178 + 0x60), lVar29 == 0))
                          goto LAB_092c3994;
                          if (*(int *)(*(long *)PTR_DAT_09fc9d40 + 0xe4) == 0) {
                            thunk_FUN_044a54b4();
                          }
                          if (*(int *)(lVar29 + 0x18) == 0) goto LAB_092c3b00;
                          FUN_09329054(lVar29 + 0x20,0,0);
                          if (DAT_0a51bf43 == '\0') {
                            FUN_04447ba8(PTR_DAT_09f1e740);
                            DAT_0a51bf43 = '\x01';
                          }
                          iVar20 = (int)unaff_x19[0x53];
                          fStack00000000000000ec = **(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
                          _in_stack_000000e0 =
                               *(undefined8 *)(*(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8) + 1);
                          lVar29 = unaff_x19[0xee];
                          in_stack_000000a0 = _in_stack_000000e0;
                          fStack00000000000000a8 = fStack00000000000000ec;
                          if (iVar20 < 0x401) {
                            if (iVar20 == 0x100) {
                              if (lVar29 == 0) goto LAB_092c3994;
                              if (*(uint *)(lVar29 + 0x18) < 2) goto LAB_092c3b00;
                              uVar59 = *(undefined8 *)(lVar29 + 0x30);
                              if ((int)unaff_x19[0x62] == 5) {
                                if ((*in_stack_00000178 == 0) ||
                                   (lVar38 = *(long *)(*in_stack_00000178 + 0x58), lVar38 == 0))
                                goto LAB_092c3994;
                                if (*(uint *)(lVar38 + 0x18) <= uStack0000000000000034)
                                goto LAB_092c3b00;
                                fVar50 = *(float *)(lVar38 + (long)(int)uStack0000000000000034 *
                                                             0x14 + 0x28);
                              }
                              else {
                                fVar50 = *(float *)((long)unaff_x19 + 0x4cc);
                              }
                              fStack00000000000000a8 =
                                   fStack0000000000000030 + 0.0 + *(float *)(lVar29 + 0x2c);
                              fVar50 = (0.0 - fVar50) - fStack0000000000000024;
                            }
                            else if (iVar20 == 0x200) {
                              if (lVar29 == 0) goto LAB_092c3994;
                              if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0))
                              goto LAB_092c3b00;
                              fStack00000000000000a8 =
                                   (*(float *)(lVar29 + 0x20) + *(float *)(lVar29 + 0x2c)) * 0.5;
                              uVar59 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar29 + 0x24) >>
                                                        0x20) +
                                                (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >>
                                                       0x20)) * 0.5,
                                                ((float)*(undefined8 *)(lVar29 + 0x24) +
                                                (float)*(undefined8 *)(lVar29 + 0x30)) * 0.5);
                              if ((int)unaff_x19[0x62] == 5) {
                                if ((*in_stack_00000178 == 0) ||
                                   (lVar29 = *(long *)(*in_stack_00000178 + 0x58), lVar29 == 0))
                                goto LAB_092c3994;
                                if (*(uint *)(lVar29 + 0x18) <= uStack0000000000000034)
                                goto LAB_092c3b00;
                                lVar29 = lVar29 + (long)(int)uStack0000000000000034 * 0x14;
                                fStack00000000000000a8 =
                                     fStack0000000000000030 + 0.0 + fStack00000000000000a8;
                                fVar50 = ((fStack0000000000000024 + *(float *)(lVar29 + 0x28) +
                                          *(float *)(lVar29 + 0x30)) - in_stack_00000028) * -0.5 +
                                         0.0;
                              }
                              else {
                                fStack00000000000000a8 =
                                     fStack0000000000000030 + 0.0 + fStack00000000000000a8;
                                fVar50 = ((fStack0000000000000024 +
                                           *(float *)((long)unaff_x19 + 0x4cc) + in_stack_00001288)
                                         - in_stack_00000028) * -0.5 + 0.0;
                              }
                            }
                            else {
                              if (iVar20 != 0x400) goto LAB_092c1438;
                              if (lVar29 == 0) goto LAB_092c3994;
                              if (*(int *)(lVar29 + 0x18) == 0) goto LAB_092c3b00;
                              uVar59 = *(undefined8 *)(lVar29 + 0x24);
                              if ((int)unaff_x19[0x62] == 5) {
                                if ((*in_stack_00000178 == 0) ||
                                   (lVar38 = *(long *)(*in_stack_00000178 + 0x58), lVar38 == 0))
                                goto LAB_092c3994;
                                if (*(uint *)(lVar38 + 0x18) <= uStack0000000000000034)
                                goto LAB_092c3b00;
                                in_stack_00001288 =
                                     *(float *)(lVar38 + (long)(int)uStack0000000000000034 * 0x14 +
                                               0x30);
                              }
                              fStack00000000000000a8 =
                                   fStack0000000000000030 + 0.0 + *(float *)(lVar29 + 0x20);
                              fVar50 = in_stack_00000028 + (0.0 - in_stack_00001288);
                            }
LAB_092c1428:
                            in_stack_000000a0 =
                                 CONCAT44((float)((ulong)uVar59 >> 0x20) + 0.0,
                                          (float)uVar59 + fVar50);
                          }
                          else if (iVar20 == 0x800) {
                            if (lVar29 == 0) goto LAB_092c3994;
                            if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0))
                            goto LAB_092c3b00;
                            fVar50 = fStack0000000000000030 + 0.0 +
                                     (*(float *)(lVar29 + 0x20) + *(float *)(lVar29 + 0x2c)) * 0.5;
                            in_stack_000000a0 =
                                 CONCAT44(((float)((ulong)*(undefined8 *)(lVar29 + 0x24) >> 0x20) +
                                          (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >> 0x20)) *
                                          0.5 + 0.0,
                                          ((float)*(undefined8 *)(lVar29 + 0x24) +
                                          (float)*(undefined8 *)(lVar29 + 0x30)) * 0.5 + 0.0);
                            fStack00000000000000a8 = fVar50;
                          }
                          else {
                            if (iVar20 == 0x1000) {
                              if (lVar29 == 0) goto LAB_092c3994;
                              if ((*(int *)(lVar29 + 0x18) != 1) && (*(int *)(lVar29 + 0x18) != 0))
                              {
                                uVar59 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar29 + 0x24) >>
                                                          0x20) +
                                                  (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >>
                                                         0x20)) * 0.5,
                                                  ((float)*(undefined8 *)(lVar29 + 0x24) +
                                                  (float)*(undefined8 *)(lVar29 + 0x30)) * 0.5);
                                fStack00000000000000a8 =
                                     fStack0000000000000030 + 0.0 +
                                     (*(float *)(lVar29 + 0x20) + *(float *)(lVar29 + 0x2c)) * 0.5;
                                fVar50 = 0.0 - ((fStack0000000000000024 +
                                                 *(float *)((long)unaff_x19 + 0x4fc) +
                                                *(float *)((long)unaff_x19 + 0x4f4)) -
                                               in_stack_00000028) * 0.5;
                                goto LAB_092c1428;
                              }
                              goto LAB_092c3b00;
                            }
                            if (iVar20 == 0x2000) {
                              if (lVar29 == 0) goto LAB_092c3994;
                              if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0))
                              goto LAB_092c3b00;
                              fVar50 = 0.0 - ((*(float *)(unaff_x19 + 0x9a) - fStack0000000000000024
                                              ) - in_stack_00000028) * 0.5;
                              in_stack_000000a0 =
                                   CONCAT44(((float)((ulong)*(undefined8 *)(lVar29 + 0x24) >> 0x20)
                                            + (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >> 0x20)
                                            ) * 0.5 + 0.0,
                                            ((float)*(undefined8 *)(lVar29 + 0x24) +
                                            (float)*(undefined8 *)(lVar29 + 0x30)) * 0.5 + fVar50);
                              fStack00000000000000a8 =
                                   fStack0000000000000030 + 0.0 +
                                   (*(float *)(lVar29 + 0x20) + *(float *)(lVar29 + 0x2c)) * 0.5;
                            }
                          }
LAB_092c1438:
                          lVar29 = FUN_092ce4f0();
                          if (lVar29 == 0) goto LAB_092c3994;
                          FUN_0953db60(lVar29,0);
                          *(float *)((long)unaff_x19 + 0x6fc) = fVar50;
                          uVar43 = FUN_04624244(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                          FUN_04624244(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                          if (*(int *)(*(long *)PTR_DAT_09fc9d48 + 0xe4) == 0) {
                            thunk_FUN_044a54b4(*(long *)PTR_DAT_09fc9d48);
                          }
                          if (DAT_0a53e2cf == '\0') {
                            FUN_04447ba8(PTR_DAT_09fc9d48);
                            DAT_0a53e2cf = '\x01';
                          }
                          puVar12 = PTR_DAT_09fc9d48;
                          lVar29 = *(long *)PTR_DAT_09fc9d48;
                          if (*(int *)(lVar29 + 0xe4) == 0) {
                            thunk_FUN_044a54b4();
                            lVar29 = *(long *)puVar12;
                          }
                          puVar27 = *(undefined4 **)(lVar29 + 0xb8);
                          FUN_092df690(*puVar27,puVar27[1],puVar27[2],puVar27[3],&stack0x00001260,
                                       0x4000ffff,0);
                          if (*(int *)(*plVar41 + 0xe4) == 0) {
                            thunk_FUN_044a54b4();
                          }
                          lVar29 = *in_stack_00000178;
                          if (lVar29 == 0) goto LAB_092c3994;
                          uVar14 = *unaff_x24;
                          if ((int)uVar14 < 1) {
                            iStack00000000000000c8 = 0;
                            iVar20 = 0;
                            goto LAB_092c3558;
                          }
                          lVar29 = *(long *)(lVar29 + 0x38);
                          if (lVar29 == 0) goto LAB_092c3994;
                          fStack00000000000000f4 = *(float *)(*(long *)(*plVar41 + 0xb8) + 0x1730);
                          in_stack_000000f0 = 0.0;
                          fStack0000000000000070 = in_stack_000000c0._4_4_;
                          fStack0000000000000074 = 0.0;
                          fStack0000000000000114 = 0.0;
                          fStack000000000000005c = 0.0;
                          fStack000000000000008c = in_stack_000000c0._4_4_;
                          fStack0000000000000090 = 0.0;
                          fStack0000000000000058 = 0.0;
                          fVar53 = 0.0;
                          bVar11 = false;
                          bVar10 = false;
                          bVar9 = false;
                          bVar13 = false;
                          iStack00000000000000c8 = 0;
                          uStack0000000000000054 = 0;
                          uStack0000000000000148 = 0;
                          fStack0000000000000064 = 0.0;
                          iStack0000000000000110 = 0;
                          _in_stack_00000160 = 0x2dc;
                          fStack00000000000000b4 = in_stack_000000c0._4_4_;
                          fStack00000000000000b8 = in_stack_000000d0._4_4_;
                          fStack0000000000000068 = in_stack_000000d0._4_4_;
                          uStack000000000000006c = uStack00000000000000b0;
                          in_stack_00000080._4_4_ = uStack00000000000000b0;
                          fStack0000000000000088 = in_stack_000000d0._4_4_;
                          uVar19 = 0;
                          uVar15 = 1;
                          goto LAB_092c15cc;
                        }
                        if (*(uint *)(lVar29 + 0x18) <= in_stack_00001258) goto LAB_092c3b00;
                        in_stack_0000128c =
                             *(uint *)(lVar29 + (long)(int)in_stack_00001258 * 0x10 + 0x24);
                        if (in_stack_0000128c == 0) goto LAB_092c0dec;
                        if (5 < unaff_w21) {
                          uVar59 = FUN_07a5ae30(&stack0x0000128c,0);
                          uVar62 = FUN_07a3b850(&stack0x00001258,0);
                          uVar59 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09fc9e00,uVar59,
                                                *(undefined8 *)PTR_DAT_09fc9e10,uVar62,0);
                          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                          }
                          FUN_094c6b48(uVar59,0);
                          uVar59 = CONCAT44(3,*unaff_x24);
                        }
                        uVar17 = in_stack_0000128c;
                      } while (in_stack_0000128c == 0x1a);
                      if ((in_stack_0000128c == 0x3c) &&
                         (*(char *)((long)unaff_x19 + 0x33a) != '\0')) {
                        *(undefined1 *)((long)unaff_x19 + 0x469) = 1;
                        *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
                        uVar22 = FUN_0930ad80();
                        if (((uVar22 & 1) != 0) &&
                           (in_stack_00001258 = in_stack_0000122c,
                           *(int *)((long)unaff_x19 + 0x65c) == 0)) goto LAB_092c09bc;
                      }
                      else {
                        if ((*in_stack_00000178 == 0) ||
                           (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0))
                        goto LAB_092c3994;
                        if (*(uint *)(lVar29 + 0x18) <= *unaff_x24) goto LAB_092c3b00;
                        lVar29 = lVar29 + (long)(int)*unaff_x24 * unaff_x28;
                        *(undefined4 *)((long)unaff_x19 + 0x65c) = *(undefined4 *)(lVar29 + 0x20);
                        *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar29 + 0x50);
                        unaff_x19[0x20] = *(long *)(lVar29 + 0x40);
                        thunk_FUN_044bb4b4(_fStack0000000000000170);
                      }
                      if ((unaff_x19[0x74] == 0) ||
                         (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
                      goto LAB_092c3994;
                      uVar14 = *in_stack_00000180;
                      if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_092c3b00;
                      lVar40 = (long)(int)uVar14;
                      unaff_w20 = (uint)*(byte *)(lVar29 + lVar40 * unaff_x28 + 0x54);
                      *(undefined1 *)((long)unaff_x19 + 0x469) = 0;
                      lVar38 = unaff_x19[0x24];
                      in_stack_00001278 = uVar59;
                      if ((uint)uVar59 == uVar14) {
                        in_stack_0000128c = (uint)((ulong)uVar59 >> 0x20);
                        *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
                        if (in_stack_0000128c == 0x2026) {
                          *(long *)(lVar29 + lVar40 * unaff_x28 + 0x30) = unaff_x19[0xcd];
                          thunk_FUN_044bb4b4();
                          if ((unaff_x19[0x74] == 0) ||
                             (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
                          goto LAB_092c3994;
                          if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
                          lVar29 = lVar29 + (long)(int)*in_stack_00000180 * unaff_x28;
                          *(undefined4 *)(lVar29 + 0x20) = 0;
                          *(long *)(lVar29 + 0x40) = unaff_x19[0xce];
                          thunk_FUN_044bb4b4();
                          if ((unaff_x19[0x74] == 0) ||
                             (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
                          goto LAB_092c3994;
                          if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
                          *(long *)(lVar29 + (long)(int)*in_stack_00000180 * unaff_x28 + 0x48) =
                               unaff_x19[0xcf];
                          thunk_FUN_044bb4b4();
                          if ((*in_stack_00000178 == 0) ||
                             (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0))
                          goto LAB_092c3994;
                          if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
                          *(int *)(lVar29 + (long)(int)*in_stack_00000180 * unaff_x28 + 0x50) =
                               (int)unaff_x19[0xd0];
                          puVar12 = PTR_DAT_09f56060;
                          lVar29 = *(long *)PTR_DAT_09f56060;
                          if (*(int *)(lVar29 + 0xe4) == 0) {
                            thunk_FUN_044a54b4();
                            lVar29 = *(long *)puVar12;
                          }
                          lVar29 = **(long **)(lVar29 + 0xb8);
                          if (lVar29 == 0) goto LAB_092c3994;
                          if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0xd4))
                          goto LAB_092c3b00;
                          lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x38;
                          unaff_w25 = 1;
                          *(int *)(lVar29 + 0x54) = *(int *)(lVar29 + 0x54) + 1;
                          uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
                          *(undefined1 *)(unaff_x19 + 0x65) = 1;
                          in_stack_00001278 = CONCAT44(3,uVar14 + 1);
                        }
                        else if (in_stack_0000128c == 3) {
                          if ((*_fStack0000000000000170 == 0) ||
                             (lVar21 = FUN_092e76b0(*_fStack0000000000000170,0), lVar21 == 0))
                          goto LAB_092c3994;
                          uVar59 = FUN_074f8f30(lVar21,3,*(undefined8 *)PTR_DAT_09fc9d18);
                          if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_092c3b00;
                          *(undefined8 *)(lVar29 + lVar40 * unaff_x28 + 0x30) = uVar59;
                          thunk_FUN_044bb4b4();
                          uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
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
                      uVar59 = in_stack_00001278;
                      if (((int)uVar14 < *(int *)((long)unaff_x19 + 0x35c)) &&
                         (in_stack_0000128c != 3)) {
                        if ((*in_stack_00000178 == 0) ||
                           (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0))
                        goto LAB_092c3994;
                        if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_092c3b00;
                        lVar29 = lVar29 + (long)(int)uVar14 * (long)iVar42;
                        *(undefined1 *)(lVar29 + 400) = 0;
                        *(undefined2 *)(lVar29 + 0x24) = 0x200b;
                        *(undefined4 *)(lVar29 + 0x5c) = 0;
                        *in_stack_00000180 = uVar14 + 1;
                        unaff_x24 = in_stack_00000180;
                        uVar17 = in_stack_0000128c;
                        goto LAB_092c09bc;
                      }
                      iVar20 = *(int *)((long)unaff_x19 + 0x65c);
                      if (iVar20 == 0) {
                        uVar14 = *(uint *)((long)unaff_x19 + 0x284);
                        if ((uVar14 >> 4 & 1) == 0) {
                          if ((uVar14 >> 3 & 1) == 0) {
                            fStack000000000000011c = 1.0;
                            if ((uVar14 >> 5 & 1) != 0) {
                              if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
                                thunk_FUN_044a54b4();
                              }
                              uVar22 = FUN_079a35e8(in_stack_0000128c,0);
                              if ((uVar22 & 1) != 0) {
                                if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
                                  thunk_FUN_044a54b4();
                                }
                                uVar14 = FUN_079a3874(in_stack_0000128c,0);
                                in_stack_0000128c = uVar14 & 0xffff;
                                fStack000000000000011c = fStack0000000000000020;
                              }
                            }
                          }
                          else {
                            if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
                              thunk_FUN_044a54b4();
                            }
                            uVar22 = FUN_079a3548(in_stack_0000128c,0);
                            fStack000000000000011c = 1.0;
                            if ((uVar22 & 1) != 0) {
                              if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
                                thunk_FUN_044a54b4();
                              }
                              uVar14 = FUN_079a39ec(in_stack_0000128c,0);
                              goto LAB_092bcca8;
                            }
                          }
                        }
                        else {
                          if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
                            thunk_FUN_044a54b4();
                          }
                          uVar22 = FUN_079a35e8(in_stack_0000128c,0);
                          fStack000000000000011c = 1.0;
                          if ((uVar22 & 1) != 0) {
                            if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
                              thunk_FUN_044a54b4();
                            }
                            uVar14 = FUN_079a3874(in_stack_0000128c,0);
LAB_092bcca8:
                            fStack000000000000011c = 1.0;
                            in_stack_0000128c = uVar14 & 0xffff;
                          }
                        }
                        iVar20 = *(int *)((long)unaff_x19 + 0x65c);
                      }
                      else {
                        fStack000000000000011c = 1.0;
                      }
                      if (iVar20 != 0) {
                        if (iVar20 != 1) {
                          lVar29 = *in_stack_00000178;
                          unaff_s12 = 0.0;
                          unaff_s11 = unaff_s12;
                          if (in_stack_0000128c != 3 && in_stack_0000128c != 0xad) {
                            unaff_s11 = fVar50;
                          }
                          if (lVar29 == 0) goto LAB_092c3994;
                          fStack0000000000000118 = 0.0;
                          fStack0000000000000114 = 0.0;
                          unaff_s15 = fVar50;
                          goto LAB_092bd480;
                        }
                        lVar29 = FUN_09303b14();
                        if ((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x38), lVar29 == 0))
                        goto LAB_092c3994;
                        if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
                        plVar41 = *(long **)(lVar29 + (long)(int)*in_stack_00000180 * unaff_x28 +
                                            0x30);
                        if (plVar41 == (long *)0x0) goto LAB_092c3994;
                        bVar4 = *(byte *)(*(long *)PTR_DAT_09fc9d60 + 0x130);
                        if ((*(byte *)(*plVar41 + 0x130) < bVar4) ||
                           (*(long *)(*(long *)(*plVar41 + 200) + (ulong)bVar4 * 8 + -8) !=
                            *(long *)PTR_DAT_09fc9d60)) {
                    /* WARNING: Subroutine does not return */
                          FUN_044481e4(plVar41);
                        }
                        plVar26 = (long *)plVar41[3];
                        if (plVar26 == (long *)0x0) {
                          plVar26 = (long *)0x0;
                          *_fStack0000000000000090 = 0;
                        }
                        else {
                          lVar29 = *(long *)PTR_DAT_09fc9d58;
                          bVar4 = *(byte *)(lVar29 + 0x130);
                          if (*(byte *)(*plVar26 + 0x130) < bVar4) {
                            plVar35 = (long *)0x0;
                          }
                          else {
                            plVar35 = plVar26;
                            if (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar4 * 8 + -8) !=
                                lVar29) {
                              plVar35 = (long *)0x0;
                            }
                          }
                          *_fStack0000000000000090 = (long)plVar35;
                          if (*(byte *)(*plVar26 + 0x130) < bVar4) {
                            plVar26 = (long *)0x0;
                          }
                          else if (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar4 * 8 + -8) !=
                                   lVar29) {
                            plVar26 = (long *)0x0;
                          }
                        }
                        thunk_FUN_044bb4b4(_fStack0000000000000090,plVar26);
                        lVar29 = plVar41[5];
                        *(int *)((long)unaff_x19 + 0x6bc) = (int)lVar29;
                        puVar12 = PTR_DAT_09f56060;
                        if (in_stack_0000128c == 0x3c) {
                          in_stack_0000128c = (int)lVar29 + 0xe000;
                        }
                        else {
                          lVar29 = *(long *)PTR_DAT_09f56060;
                          if (*(int *)(lVar29 + 0xe4) == 0) {
                            thunk_FUN_044a54b4();
                            lVar29 = *(long *)puVar12;
                          }
                          *(undefined4 *)((long)unaff_x19 + 0x1d4) =
                               *(undefined4 *)(*(long *)(lVar29 + 0xb8) + 0x68);
                        }
                        if (unaff_x19[0x20] == 0) goto LAB_092c3994;
                        fVar55 = *(float *)(unaff_x19 + 0x42);
                        memmove(&stack0x000011c0,(void *)(unaff_x19[0x20] + 0x28),0x60);
                        fVar50 = (float)FUN_095dced8(&stack0x000011c0,0);
                        if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
                        memmove(&stack0x000011c0,(void *)(*_fStack0000000000000170 + 0x28),0x60);
                        fVar57 = (float)FUN_095dcee0(&stack0x000011c0,0);
                        fVar44 = in_stack_000000e0;
                        if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
                          fVar44 = fVar53;
                        }
                        if (unaff_x19[0xd6] == 0) goto LAB_092c3994;
                        fVar44 = (fVar55 / fVar50) * fVar57 * fVar44;
                        fVar50 = (float)FUN_095dced8(unaff_x19[0xd6] + 0x28,0);
                        fVar55 = *(float *)(unaff_x19 + 0x42);
                        if (fVar50 <= 0.0) {
                          if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
                          fVar50 = (float)FUN_095dced8(*_fStack0000000000000170 + 0x28,0);
                          if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
                          fVar57 = (float)FUN_095dcee0(*_fStack0000000000000170 + 0x28,0);
                          fStack0000000000000114 = in_stack_000000e0;
                          if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
                            fStack0000000000000114 = fVar53;
                          }
                          if (unaff_x19[0x20] == 0) goto LAB_092c3994;
                          fVar53 = (float)FUN_095dcf08(unaff_x19[0x20] + 0x28,0);
                          if (plVar41[4] == 0) goto LAB_092c3994;
                          FUN_095dd39c(&stack0x00001290,plVar41[4],0);
                          fVar45 = (float)FUN_095dd1cc(&stack0x000011a0,0);
                          if (plVar41[4] == 0) goto LAB_092c3994;
                          fVar58 = *(float *)((long)plVar41 + 0x2c);
                          fVar46 = (float)FUN_095dd3d8(plVar41[4],0);
                          if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
                          fStack0000000000000118 =
                               (float)FUN_095dcf08(*_fStack0000000000000170 + 0x28,0);
                          if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
                          fVar60 = (float)FUN_095dcf30(*_fStack0000000000000170 + 0x28,0);
                          if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
                          fVar69 = *(float *)((long)unaff_x19 + 0x43c);
                          fVar66 = (float)FUN_095dcee0(*_fStack0000000000000170 + 0x28,0);
                          if (unaff_x19[0x20] == 0) goto LAB_092c3994;
                          fStack0000000000000114 =
                               (fVar55 / fVar50) * fVar57 * fStack0000000000000114;
                          unaff_s12 = fVar44 * fVar60 * fVar69 * fVar66;
                          unaff_s15 = fStack0000000000000114 * (fVar53 / fVar45) * fVar58 * fVar46;
                          fStack0000000000000114 = fStack0000000000000114 / unaff_s15;
                          fStack0000000000000118 = fStack0000000000000114 * fStack0000000000000118;
                          fVar50 = (float)FUN_095dcf38(unaff_x19[0x20] + 0x28,0);
                          fStack0000000000000114 = fStack0000000000000114 * fVar50;
                        }
                        else {
                          if (*_fStack0000000000000090 == 0) goto LAB_092c3994;
                          fVar50 = (float)FUN_095dced8(*_fStack0000000000000090 + 0x28,0);
                          if (*_fStack0000000000000090 == 0) goto LAB_092c3994;
                          fVar57 = (float)FUN_095dcee0(*_fStack0000000000000090 + 0x28,0);
                          if (plVar41[4] == 0) goto LAB_092c3994;
                          fVar46 = *(float *)((long)plVar41 + 0x2c);
                          fVar45 = in_stack_000000e0;
                          if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
                            fVar45 = fVar53;
                          }
                          fVar53 = (float)FUN_095dd3d8(plVar41[4],0);
                          if (unaff_x19[0xd6] == 0) goto LAB_092c3994;
                          fStack0000000000000118 = (float)FUN_095dcf08(unaff_x19[0xd6] + 0x28,0);
                          if (*_fStack0000000000000090 == 0) goto LAB_092c3994;
                          fVar58 = (float)FUN_095dcf30(*_fStack0000000000000090 + 0x28,0);
                          if (*_fStack0000000000000090 == 0) goto LAB_092c3994;
                          fVar66 = *(float *)((long)unaff_x19 + 0x43c);
                          fVar60 = (float)FUN_095dcee0(*_fStack0000000000000090 + 0x28,0);
                          if (unaff_x19[0xd6] == 0) goto LAB_092c3994;
                          unaff_s12 = fVar44 * fVar58 * fVar66 * fVar60;
                          unaff_s15 = (fVar55 / fVar50) * fVar57 * fVar45 * fVar46 * fVar53;
                          fStack0000000000000114 = (float)FUN_095dcf38(unaff_x19[0xd6] + 0x28,0);
                        }
                        *in_stack_00000158 = (long)plVar41;
                        thunk_FUN_044bb4b4(in_stack_00000158,plVar41);
                        if ((*in_stack_00000178 == 0) ||
                           (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0))
                        goto LAB_092c3994;
                        if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
                        lVar29 = lVar29 + (long)(int)*in_stack_00000180 * unaff_x28;
                        *(undefined4 *)(lVar29 + 0x20) = 1;
                        *(float *)(lVar29 + 0x15c) = unaff_s15;
                        *(long *)(lVar29 + 0x40) = *_fStack0000000000000170;
                        thunk_FUN_044bb4b4();
                        lVar29 = *in_stack_00000178;
                        if ((lVar29 == 0) || (lVar40 = *(long *)(lVar29 + 0x38), lVar40 == 0))
                        goto LAB_092c3994;
                        if (*(uint *)(lVar40 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
                        in_stack_00000150 = 0.0;
                        *(int *)(lVar40 + (long)(int)*in_stack_00000180 * unaff_x28 + 0x50) =
                             (int)unaff_x19[0x24];
                        *(int *)(unaff_x19 + 0x24) = (int)lVar38;
                        goto LAB_092bd468;
                      }
                      if ((*in_stack_00000178 == 0) ||
                         (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0))
                      goto LAB_092c3994;
                      if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
                      *in_stack_00000158 =
                           *(long *)(lVar29 + (long)(int)*in_stack_00000180 * unaff_x28 + 0x30);
                      thunk_FUN_044bb4b4(in_stack_00000158);
                      unaff_x24 = in_stack_00000180;
                      uVar17 = in_stack_0000128c;
                    } while (*in_stack_00000158 == 0);
                    if ((*in_stack_00000178 == 0) ||
                       (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0))
                    goto LAB_092c3994;
                    if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
                    *_fStack0000000000000170 =
                         *(long *)(lVar29 + (long)(int)*in_stack_00000180 * unaff_x28 + 0x40);
                    thunk_FUN_044bb4b4(_fStack0000000000000170);
                    if ((*in_stack_00000178 == 0) ||
                       (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0))
                    goto LAB_092c3994;
                    if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
                    *in_stack_00000130 =
                         *(long *)(lVar29 + (long)(int)*in_stack_00000180 * unaff_x28 + 0x48);
                    thunk_FUN_044bb4b4();
                    if ((*in_stack_00000178 == 0) ||
                       (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0))
                    goto LAB_092c3994;
                    uVar19 = *in_stack_00000180;
                    uVar14 = *(uint *)(lVar29 + 0x18);
                    if (uVar14 <= uVar19) goto LAB_092c3b00;
                    *(undefined4 *)(unaff_x19 + 0x24) =
                         *(undefined4 *)(lVar29 + (long)(int)uVar19 * unaff_x28 + 0x50);
                    if (unaff_w25 == 0) {
LAB_092bce6c:
                      if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
                      fVar50 = *(float *)(unaff_x19 + 0x42);
                      fVar55 = (float)FUN_095dced8(*_fStack0000000000000170 + 0x28,0);
                      lVar29 = unaff_x19[0x20];
                    }
                    else {
                      lVar38 = unaff_x19[0x91];
                      if (lVar38 == 0) goto LAB_092c3994;
                      if (*(uint *)(lVar38 + 0x18) <= in_stack_00001258) goto LAB_092c3b00;
                      if ((*(int *)(lVar38 + (long)(int)in_stack_00001258 * 0x10 + 0x24) != 10) ||
                         (uVar19 == *(uint *)(unaff_x19 + 0x95))) goto LAB_092bce6c;
                      if (uVar14 <= uVar19 - 1) goto LAB_092c3b00;
                      if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
                      fVar50 = *(float *)(lVar29 + (long)(int)(uVar19 - 1) * (long)iVar42 + 0x58);
                      fVar55 = (float)FUN_095dced8(*_fStack0000000000000170 + 0x28,0);
                      lVar29 = *_fStack0000000000000170;
                    }
                    if (lVar29 == 0) goto LAB_092c3994;
                    fVar57 = (float)FUN_095dcee0(lVar29 + 0x28,0);
                    fStack0000000000000118 = 0.0;
                    fVar44 = in_stack_000000e0;
                    if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
                      fVar44 = fVar53;
                    }
                    fStack0000000000000114 = 0.0;
                    if ((unaff_w25 & in_stack_0000128c == 0x2026) == 0) {
                      if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
                      fStack0000000000000118 =
                           (float)FUN_095dcf08(*_fStack0000000000000170 + 0x28,0);
                      if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
                      fStack0000000000000114 =
                           (float)FUN_095dcf38(*_fStack0000000000000170 + 0x28,0);
                    }
                    lVar29 = unaff_x19[0xcc];
                    if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_092c3994;
                    fVar45 = *(float *)((long)unaff_x19 + 0x43c);
                    fVar46 = *(float *)(lVar29 + 0x2c);
                    fVar53 = (float)FUN_095dd3d8(*(long *)(lVar29 + 0x20),0);
                    if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
                    fVar58 = (float)FUN_095dcf30(*_fStack0000000000000170 + 0x28,0);
                    if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
                    fVar66 = *(float *)((long)unaff_x19 + 0x43c);
                    fVar60 = (float)FUN_095dcee0(*_fStack0000000000000170 + 0x28,0);
                    lVar29 = unaff_x19[0x74];
                    if ((lVar29 == 0) || (lVar38 = *(long *)(lVar29 + 0x38), lVar38 == 0))
                    goto LAB_092c3994;
                    if (*(uint *)(lVar38 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
                    lVar38 = lVar38 + (long)(int)*in_stack_00000180 * unaff_x28;
                    *(undefined4 *)(lVar38 + 0x20) = 0;
                    fVar44 = ((fStack000000000000011c * fVar50) / fVar55) * fVar57 * fVar44;
                    unaff_s15 = fVar44 * fVar45 * fVar46 * fVar53;
                    *(float *)(lVar38 + 0x15c) = unaff_s15;
                    uVar14 = *(uint *)(unaff_x19 + 0x24);
                    unaff_s12 = fVar44 * fVar58 * fVar66 * fVar60;
                    if (uVar14 == 0) {
                      in_stack_00000150 = *(float *)(unaff_x19 + 0xc6);
                    }
                    else {
                      lVar38 = unaff_x19[0xe4];
                      if (lVar38 == 0) goto LAB_092c3994;
                      if (*(uint *)(lVar38 + 0x18) <= uVar14) goto LAB_092c3b00;
                      lVar38 = *(long *)(lVar38 + (long)(int)uVar14 * 8 + 0x20);
                      if (lVar38 == 0) goto LAB_092c3994;
                      in_stack_00000150 = *(float *)(lVar38 + 0x54);
                    }
LAB_092bd468:
                    unaff_s11 = 0.0;
                    if (in_stack_0000128c != 3 && in_stack_0000128c != 0xad) {
                      unaff_s11 = unaff_s15;
                    }
LAB_092bd480:
                    lVar29 = *(long *)(lVar29 + 0x38);
                    if (lVar29 == 0) goto LAB_092c3994;
                    if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
                    lVar29 = lVar29 + (long)(int)*in_stack_00000180 * unaff_x28;
                    *(short *)(lVar29 + 0x24) = (short)in_stack_0000128c;
                    *(int *)(lVar29 + 0x58) = (int)unaff_x19[0x42];
                    *(int *)(lVar29 + 0x160) = (int)unaff_x19[0xa0];
                    if ((unaff_x19[0x74] == 0) ||
                       (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0)) goto LAB_092c3994;
                    if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
                    *(int *)(lVar29 + (long)(int)*in_stack_00000180 * unaff_x28 + 0x164) =
                         (int)unaff_x19[0x2b];
                    if ((unaff_x19[0x74] == 0) ||
                       (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0)) goto LAB_092c3994;
                    if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
                    *(undefined4 *)(lVar29 + (long)(int)*in_stack_00000180 * unaff_x28 + 0x16c) =
                         *(undefined4 *)((long)unaff_x19 + 0x15c);
                    if ((unaff_x19[0x74] == 0) ||
                       (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0)) goto LAB_092c3994;
                    in_stack_000012a0 = *(undefined4 *)(_fStack00000000000000a8 + 2);
                    in_stack_00001298 = _fStack00000000000000a8[1];
                    in_stack_00001290 = *_fStack00000000000000a8;
                    if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
                    lVar29 = lVar29 + (long)(int)*in_stack_00000180 * unaff_x28;
                    *(undefined4 *)(lVar29 + 0x188) = in_stack_000012a0;
                    *(undefined8 *)(lVar29 + 0x180) = in_stack_00001298;
                    *(undefined8 *)(lVar29 + 0x178) = in_stack_00001290;
                    if ((*in_stack_00000178 == 0) ||
                       (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0))
                    goto LAB_092c3994;
                    if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
                    lVar29 = lVar29 + (long)(int)*in_stack_00000180 * unaff_x28;
                    lVar38 = *(long *)(lVar29 + 0x38);
                    *(undefined4 *)(lVar29 + 0x18c) = *(undefined4 *)((long)unaff_x19 + 0x284);
                    if ((lVar38 == 0) &&
                       ((*in_stack_00000158 == 0 ||
                        (lVar38 = *(long *)(*in_stack_00000158 + 0x20), lVar38 == 0))))
                    goto LAB_092c3994;
                    FUN_095dd39c(&stack0x00001290,lVar38,0);
                    unaff_x26[1] = in_stack_00001298;
                    *unaff_x26 = in_stack_00001290;
                    if (in_stack_0000128c >> 0x10 == 0) {
                      if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
                        thunk_FUN_044a54b4();
                      }
                      in_stack_00000160 = FUN_079a0ce0(in_stack_0000128c,0);
                      in_stack_00000160 = in_stack_00000160 & 1;
                    }
                    else {
                      in_stack_00000160 = 0;
                    }
                    uVar43 = 0;
                    fStack00000000000000f4 = *(float *)(unaff_x19 + 0x5a);
                    if (((in_stack_000000a0 & 1) != 0) && (*(int *)((long)unaff_x19 + 0x65c) == 0))
                    {
                      if (*in_stack_00000158 == 0) goto LAB_092c3994;
                      uVar19 = *(uint *)(*in_stack_00000158 + 0x28);
                      uVar14 = *in_stack_00000180;
                      if ((int)uVar14 < (int)uStack0000000000000054) {
                        if ((*in_stack_00000178 == 0) ||
                           (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0))
                        goto LAB_092c3994;
                        uVar14 = uVar14 + 1;
                        if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_092c3b00;
                        if (*(int *)(lVar29 + (long)(int)uVar14 * (long)iVar42 + 0x20) == 0) {
                          lVar29 = *(long *)(lVar29 + (long)(int)uVar14 * unaff_x28 + 0x30);
                          if ((((lVar29 == 0) || (*_fStack0000000000000170 == 0)) ||
                              (lVar38 = *(long *)(*_fStack0000000000000170 + 0x178), lVar38 == 0))
                             || (lVar38 = *(long *)(lVar38 + 0x40), lVar38 == 0)) goto LAB_092c3994;
                          uVar22 = FUN_074e1cf0(lVar38,uVar19 | *(int *)(lVar29 + 0x28) << 0x10,
                                                &stack0x00001170,*(undefined8 *)PTR_DAT_09fc9d00);
                          if ((uVar22 & 1) != 0) {
                            FUN_095e1928(&stack0x00001290,&stack0x00001170,0);
                            unaff_x26[0x17b] = in_stack_00001298;
                            unaff_x26[0x17a] = in_stack_00001290;
                            uVar43 = FUN_095e177c(&stack0x00001150,0);
                            uVar22 = FUN_095e1964(&stack0x00001170,0);
                            if ((uVar22 & 0x100) != 0) {
                              fStack00000000000000f4 = 0.0;
                            }
                          }
                        }
                        uVar14 = *in_stack_00000180;
                      }
                      if (0 < (int)uVar14) {
                        if ((*in_stack_00000178 == 0) ||
                           (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0))
                        goto LAB_092c3994;
                        if (*(uint *)(lVar29 + 0x18) <= uVar14 - 1) goto LAB_092c3b00;
                        lVar29 = *(long *)(lVar29 + (ulong)(uVar14 - 1) * (unaff_x28 & 0xffffffff) +
                                          0x30);
                        if (lVar29 == 0) goto LAB_092c3994;
                        uVar14 = *(uint *)(lVar29 + 0x28);
                        lVar29 = FUN_09303b14();
                        if ((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x38), lVar29 == 0))
                        goto LAB_092c3994;
                        if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000180 - 1) goto LAB_092c3b00;
                        if (*(int *)(lVar29 + (long)(int)(*in_stack_00000180 - 1) * (long)iVar42 +
                                    0x20) == 0) {
                          if (((*_fStack0000000000000170 == 0) ||
                              (lVar29 = *(long *)(*_fStack0000000000000170 + 0x178), lVar29 == 0))
                             || (lVar29 = *(long *)(lVar29 + 0x40), lVar29 == 0)) goto LAB_092c3994;
                          uVar22 = FUN_074e1cf0(lVar29,uVar14 | uVar19 << 0x10,&stack0x00001170,
                                                *(undefined8 *)PTR_DAT_09fc9d00);
                          if ((uVar22 & 1) != 0) {
                            FUN_095e1950(&stack0x00001290,&stack0x00001170,0);
                            unaff_x26[0x17b] = in_stack_00001298;
                            unaff_x26[0x17a] = in_stack_00001290;
                            FUN_095e177c(&stack0x00001150,0);
                            FUN_095e15dc(uVar43,0);
                            uVar22 = FUN_095e1964(&stack0x00001170,0);
                            if ((uVar22 & 0x100) != 0) {
                              fStack00000000000000f4 = 0.0;
                            }
                          }
                        }
                      }
                    }
                    unaff_s14 = 1.0;
                    if ((*in_stack_00000178 == 0) ||
                       (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0))
                    goto LAB_092c3994;
                    uVar14 = *in_stack_00000180;
                    uVar43 = FUN_095e15b8(&stack0x00001230,0);
                    if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_092c3b00;
                    *(undefined4 *)(lVar29 + (long)(int)uVar14 * unaff_x28 + 0x154) = uVar43;
                    if (*(int *)(*(long *)PTR_DAT_09fc9d80 + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                    }
                    uVar22 = FUN_09335b8c(in_stack_0000128c,0);
                    uVar14 = *in_stack_00000180;
                    unaff_x29 = uVar22 & 0xffffffff;
                    fVar50 = unaff_s11;
                    if ((uVar22 & 1) != 0) {
                      *(uint *)((long)unaff_x19 + 0x32c) = uVar14;
                      unaff_x24 = in_stack_00000180;
                      goto LAB_092bda38;
                    }
                    unaff_x24 = in_stack_00000180;
                    if ((int)uVar14 < 1) goto LAB_092bda38;
                    if ((((uVar23 & 0x100000000) == 0) ||
                        (uVar19 = *(uint *)((long)unaff_x19 + 0x32c), uVar19 == 0x80000000)) ||
                       (uVar19 != uVar14 - 1)) {
                      unaff_x23 = in_stack_00000178;
                      if ((in_stack_00000048 & 1) == 0) goto LAB_092bd914;
                      goto LAB_092bd7d4;
                    }
                    if ((*in_stack_00000178 == 0) ||
                       (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0))
                    goto LAB_092c3994;
                    if (*(uint *)(lVar29 + 0x18) <= uVar19) goto LAB_092c3b00;
                    lVar29 = *(long *)(lVar29 + (long)(int)uVar19 * unaff_x28 + 0x30);
                    if ((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x20), lVar29 == 0))
                    goto LAB_092c3994;
                    uVar14 = FUN_095dd38c(lVar29,0);
                    if ((*in_stack_00000158 == 0) ||
                       (((*_fStack0000000000000170 == 0 ||
                         (lVar29 = *(long *)(*_fStack0000000000000170 + 0x178), lVar29 == 0)) ||
                        (lVar29 = *(long *)(lVar29 + 0x48), lVar29 == 0)))) goto LAB_092c3994;
                    uVar22 = FUN_074ec404(lVar29,uVar14 | *(int *)(*in_stack_00000158 + 0x28) <<
                                                          0x10,&stack0x00001138,
                                          *(undefined8 *)PTR_DAT_09fc9d08);
                    if ((uVar22 & 1) != 0) goto LAB_092bd76c;
                    goto LAB_092bda38;
                  }
LAB_092beb7c:
                  if (in_stack_00000160 != 0) {
                    lVar29 = *in_stack_00000178;
                    if ((lVar29 != 0) && (lVar38 = *(long *)(lVar29 + 0x38), lVar38 != 0)) {
                      uVar15 = *in_stack_00000180;
                      if (uVar15 < *(uint *)(lVar38 + 0x18)) {
                        *(undefined1 *)(lVar38 + (long)(int)uVar15 * unaff_x28 + 400) = 0;
                        *(uint *)((long)unaff_x19 + 0x4b4) = uVar15;
                        lVar38 = *(long *)(lVar29 + 0x50);
                        if (lVar38 != 0) {
                          uVar15 = *(uint *)(lVar38 + 0x18);
                          if (*(uint *)(unaff_x19 + 0x97) < uVar15) {
                            lVar40 = lVar38 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
                            iVar20 = *(int *)(lVar40 + 0x2c) + 1;
                            *(int *)(lVar40 + 0x2c) = iVar20;
                            uVar2 = *(uint *)(unaff_x19 + 0x97);
                            *(int *)(unaff_x19 + 0x98) = iVar20;
                            if (uVar2 < uVar15) {
                              lVar40 = lVar38 + (long)(int)uVar2 * 0x60;
                              *(float *)(lVar40 + 100) = fVar46;
                              *(float *)(lVar40 + 0x68) = fVar55;
                              *(int *)(lVar29 + 0x20) = *(int *)(lVar29 + 0x20) + 1;
                              unaff_x24 = in_stack_00000180;
                              if (in_stack_0000128c != 0xa0) goto LAB_092bf3a4;
                              lVar38 = lVar38 + (long)(int)uVar2 * 0x60;
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
                      (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000150,fVar45);
                    }
                    uVar15 = *in_stack_00000180;
                    if (((uint)fStack0000000000000068 & 1) != 0) {
                      *(uint *)(_uStack0000000000000148 + 0x1d8) = uVar15;
                    }
                    *(uint *)((long)unaff_x19 + 0x4b4) = uVar15;
                    *(int *)((long)unaff_x19 + 0x4bc) = *(int *)((long)unaff_x19 + 0x4bc) + 1;
                    if ((unaff_x19[0x74] != 0) &&
                       (lVar29 = *(long *)(unaff_x19[0x74] + 0x50), lVar29 != 0)) {
                      if (*(uint *)(unaff_x19 + 0x97) < *(uint *)(lVar29 + 0x18)) {
                        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
                        fStack0000000000000068 = 0.0;
                        *(float *)(lVar29 + 100) = fVar46;
                        *(float *)(lVar29 + 0x68) = fVar55;
                        unaff_x24 = in_stack_00000180;
                        goto LAB_092bf3a4;
                      }
                      goto LAB_092c3b00;
                    }
                    goto LAB_092c3994;
                  }
                  if ((*in_stack_00000178 == 0) ||
                     (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0))
                  goto LAB_092c3994;
                  if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000180) goto LAB_092c3b00;
                  *(undefined1 *)(lVar29 + (long)(int)*in_stack_00000180 * unaff_x28 + 400) = 0;
                  unaff_x24 = in_stack_00000180;
                }
                else {
                  if (((in_stack_0000128c & 0xfffffffe) == 10) && ((int)unaff_x19[0x62] == 6)) {
                    fVar55 = (float)uVar52;
                    fVar53 = 0.0;
                    if ((0.0 < fVar55) && (fVar53 = 0.0, (char)unaff_x19[0x5e] == '\0')) {
                      fVar53 = *(float *)(_uStack0000000000000148 + 0x208) -
                               *(float *)(_uStack0000000000000148 + 0x210);
                    }
                    uVar52 = _fStack00000000000000d8 & 0xffffffff;
                    if (fStack00000000000000d8 <
                        (*(float *)((long)unaff_x19 + 0x4cc) -
                        (*(float *)(unaff_x19 + 0x9c) - fVar55)) + fVar53) {
                      if (*(int *)((long)unaff_x19 + 0x314) == -1) {
                        *(uint *)((long)unaff_x19 + 0x314) = uVar15;
                      }
                      if (*(int *)(*(long *)PTR_DAT_09f56060 + 0xe4) == 0) {
                        thunk_FUN_044a54b4();
                      }
                      in_stack_00001258 = FUN_0930fffc();
                      lVar29 = unaff_x19[99];
                      if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
                        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
                      }
                      uVar22 = FUN_09531730(lVar29,0,0);
                      if ((uVar22 & 1) != 0) {
                        plVar41 = (long *)unaff_x19[99];
                        uVar59 = (**(code **)(*unaff_x19 + 0x548))();
                        if (plVar41 != (long *)0x0) {
                          (**(code **)(*plVar41 + 0x558))
                                    (plVar41,uVar59,*(undefined8 *)(*plVar41 + 0x560));
                          lVar29 = unaff_x19[99];
                          if (lVar29 != 0) {
                            *(int *)(lVar29 + 0x438) = (int)unaff_x19[0x87];
                            FUN_09303930(lVar29,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
                            plVar41 = (long *)unaff_x19[99];
                            if (plVar41 != (long *)0x0) {
                              (**(code **)(*plVar41 + 0x7d8))
                                        (plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
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
                       ((1L << ((ulong)(in_stack_0000128c - 0x2007) & 0x3f) & 0x600000001U) != 0))
                      || (in_stack_0000128c - 10 < 2)) || (in_stack_0000128c == 0xa0)) {
LAB_092bf08c:
                    if (((in_stack_0000128c != 0xad) && (in_stack_0000128c != 0x200b)) &&
                       (in_stack_0000128c != 0x2060)) {
                      lVar29 = *in_stack_00000178;
                      if ((lVar29 == 0) || (lVar38 = *(long *)(lVar29 + 0x50), lVar38 == 0))
                      goto LAB_092c3994;
                      if (*(uint *)(lVar38 + 0x18) <= *(uint *)(unaff_x19 + 0x97))
                      goto LAB_092c3b00;
                      lVar38 = lVar38 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
                      *(int *)(lVar38 + 0x2c) = *(int *)(lVar38 + 0x2c) + 1;
                      *(int *)(lVar29 + 0x20) = *(int *)(lVar29 + 0x20) + 1;
                    }
                  }
                  else {
                    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                    }
                    uVar22 = FUN_079a44d8(in_stack_0000128c,0);
                    if ((uVar22 & 1) != 0) goto LAB_092bf08c;
                  }
                  if (in_stack_0000128c == 0xa0) {
                    if ((*in_stack_00000178 == 0) ||
                       (lVar38 = *(long *)(*in_stack_00000178 + 0x50), lVar38 == 0))
                    goto LAB_092c3994;
                    if (*(uint *)(lVar38 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_092c3b00;
                    lVar38 = lVar38 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
LAB_092bec1c:
                    *(int *)(lVar38 + 0x20) = *(int *)(lVar38 + 0x20) + 1;
                  }
                }
LAB_092bf3a4:
                if (((int)unaff_x19[0x62] == 1) && ((in_stack_0000128c == 0x2d || (unaff_w25 != 1)))
                   ) {
                  if (unaff_x19[0xce] == 0) goto LAB_092c3994;
                  fVar55 = *(float *)(unaff_x19 + 0x42);
                  fVar53 = (float)FUN_095dced8(unaff_x19[0xce] + 0x28,0);
                  if (unaff_x19[0xce] == 0) goto LAB_092c3994;
                  fVar45 = (float)FUN_095dcee0(unaff_x19[0xce] + 0x28,0);
                  lVar29 = unaff_x19[0xcd];
                  fVar57 = in_stack_000000e0;
                  if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
                    fVar57 = fVar64;
                  }
                  if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_092c3994;
                  fVar60 = *(float *)((long)unaff_x19 + 0x43c);
                  fVar66 = *(float *)(lVar29 + 0x2c);
                  fVar46 = (float)FUN_095dd3d8(*(long *)(lVar29 + 0x20),0);
                  fVar58 = *_iStack00000000000000c8;
                  fVar46 = fVar60 * (fVar55 / fVar53) * fVar45 * fVar57 * fVar66 * fVar46;
                  fVar53 = *_fStack00000000000000b8;
                  if ((in_stack_0000128c == 10) &&
                     (*(int *)((long)unaff_x19 + 0x4a4) != (int)unaff_x19[0x95])) {
                    if ((*in_stack_00000178 == 0) ||
                       (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0))
                    goto LAB_092c3994;
                    uVar15 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
                    if (*(uint *)(lVar29 + 0x18) <= uVar15) goto LAB_092c3b00;
                    if (unaff_x19[0xce] == 0) goto LAB_092c3994;
                    fVar57 = *(float *)(lVar29 + (long)(int)uVar15 * (long)iVar42 + 0x58);
                    fVar55 = (float)FUN_095dced8(unaff_x19[0xce] + 0x28,0);
                    if (unaff_x19[0xce] == 0) goto LAB_092c3994;
                    fVar60 = (float)FUN_095dcee0(unaff_x19[0xce] + 0x28,0);
                    lVar29 = unaff_x19[0xcd];
                    fVar45 = in_stack_000000e0;
                    if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
                      fVar45 = fVar64;
                    }
                    if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_092c3994;
                    fVar66 = *(float *)((long)unaff_x19 + 0x43c);
                    fVar69 = *(float *)(lVar29 + 0x2c);
                    fVar46 = (float)FUN_095dd3d8(*(long *)(lVar29 + 0x20),0);
                    if ((*in_stack_00000178 == 0) ||
                       (lVar29 = *(long *)(*in_stack_00000178 + 0x50), lVar29 == 0))
                    goto LAB_092c3994;
                    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_092c3b00;
                    lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
                    fVar58 = *(float *)(lVar29 + 100);
                    fVar53 = *(float *)(lVar29 + 0x68);
                    fVar46 = fVar66 * (fVar57 / fVar55) * fVar60 * fVar45 * fVar69 * fVar46;
                  }
                  fVar45 = *(float *)((long)unaff_x19 + 0x4ec);
                  fVar55 = 0.0;
                  fVar57 = 0.0;
                  if ((0.0 < fVar45) && (fVar57 = 0.0, (char)unaff_x19[0x5e] == '\0')) {
                    fVar57 = *(float *)(_uStack0000000000000148 + 0x208) -
                             *(float *)(_uStack0000000000000148 + 0x210);
                  }
                  fVar66 = *(float *)((long)unaff_x19 + 0x4cc);
                  fVar69 = *(float *)(unaff_x19 + 0x9c);
                  fVar60 = *(float *)(unaff_x19 + 0xcb);
                  if ((char)unaff_x19[0x1e] == '\0') {
                    if ((unaff_x19[0xcd] == 0) ||
                       (lVar29 = *(long *)(unaff_x19[0xcd] + 0x20), lVar29 == 0)) goto LAB_092c3994;
                    FUN_095dd39c(&stack0x00001290,lVar29,0);
                    fVar55 = (float)FUN_095dd1e4(&stack0x000011a0,0);
                  }
                  puVar12 = PTR_DAT_09f56060;
                  fVar48 = *(float *)(unaff_x19 + 0x73);
                  fVar53 = (fStack00000000000000b4 - fVar58) - fVar53;
                  bVar13 = true;
                  if ((fVar48 <= fVar53) && (bVar13 = false, !NAN(fVar48))) {
                    bVar13 = fVar48 == -1.0;
                  }
                  if (!bVar13) {
                    fVar53 = fVar48;
                  }
                  fVar58 = 1.0;
                  if ((uVar16 & 0x18) != 0) {
                    fVar58 = DAT_01c760f8;
                  }
                  if (((fVar66 - (fVar69 - fVar45)) + fVar57 < fStack00000000000000d8) &&
                     (ABS(fVar60) + fVar46 * fVar55 * (1.0 - *(float *)(unaff_x19 + 0x60)) <
                      fVar58 * fVar53)) {
                    if (*(int *)(*(long *)PTR_DAT_09f56060 + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                    }
                    FUN_093103bc();
                    lVar29 = *(long *)(*(long *)puVar12 + 0xb8);
                    uVar59 = *(undefined8 *)PTR_DAT_09fc9da8;
                    memcpy(&stack0x00001290,(void *)(lVar29 + 0x810),0x3b8);
                    FUN_06778f24(lVar29 + 0x1338,&stack0x00001290,uVar59);
                  }
                }
                lVar29 = *in_stack_00000178;
                if ((lVar29 == 0) || (lVar38 = *(long *)(lVar29 + 0x38), lVar38 == 0))
                goto LAB_092c3994;
                if (*(uint *)(lVar38 + 0x18) <= *unaff_x24) goto LAB_092c3b00;
                uVar15 = *(uint *)(unaff_x19 + 0x97);
                lVar38 = lVar38 + (long)(int)*unaff_x24 * unaff_x28;
                *(uint *)(lVar38 + 0x5c) = uVar15;
                *(undefined4 *)(lVar38 + 0x60) = *(undefined4 *)((long)unaff_x19 + 0x4c4);
                if (((unaff_w25 & 1) == 0) &&
                   ((0xd < in_stack_0000128c ||
                    ((1 << (ulong)(in_stack_0000128c & 0x1f) & 0x2c00U) == 0)))) {
LAB_092bf730:
                  lVar29 = *(long *)(lVar29 + 0x50);
                  if (lVar29 == 0) goto LAB_092c3994;
                  if (*(uint *)(lVar29 + 0x18) <= uVar15) goto LAB_092c3b00;
                  *(int *)(lVar29 + (long)(int)uVar15 * 0x60 + 0x6c) = (int)unaff_x19[0x54];
                }
                else {
                  lVar38 = *(long *)(lVar29 + 0x50);
                  if (lVar38 == 0) goto LAB_092c3994;
                  if (*(uint *)(lVar38 + 0x18) <= uVar15) goto LAB_092c3b00;
                  if (*(int *)(lVar38 + (long)(int)uVar15 * 0x60 + 0x24) == 1) goto LAB_092bf730;
                }
                if (in_stack_0000128c == 9) {
                  if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
                  fVar53 = (float)FUN_095dcf80(*_fStack0000000000000170 + 0x28,0);
                  if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
                  fVar44 = *(float *)(unaff_x19 + 0xcb);
                  uVar52 = (ulong)(uint)fVar44;
                  fVar55 = (float)NEON_ucvtf((uint)*(byte *)(*_fStack0000000000000170 + 0x1b1));
                  fVar55 = fVar50 * fVar53 * fVar55;
                  if ((char)unaff_x19[0x1e] == '\0') {
                    fVar53 = fVar55 * (float)(int)(fVar44 / fVar55);
                    if (fVar53 <= fVar44) {
                      fVar53 = fVar44 + fVar55;
                    }
                  }
                  else {
                    fVar53 = fVar55 * (float)(int)(fVar44 / fVar55);
                    if (fVar44 <= fVar53) {
                      fVar53 = fVar44 - fVar55;
                    }
                  }
LAB_092bf994:
                  *(float *)(unaff_x19 + 0xcb) = fVar53;
                }
                else {
                  fVar53 = *(float *)(unaff_x19 + 0x5b);
                  if (fVar53 == 0.0) {
                    fVar53 = *(float *)(unaff_x19 + 0xcb);
                    if ((char)unaff_x19[0x1e] == '\0') {
                      fVar44 = (float)FUN_095dd1e4(&stack0x00001240,0);
                      fVar45 = *(float *)(_uStack0000000000000148 + 0x1a8);
                      fVar57 = (float)FUN_095e15b8(&stack0x00001230,0);
                      if (*_fStack0000000000000170 != 0) {
                        fVar55 = 1.0 - *(float *)(unaff_x19 + 0x60);
                        fVar53 = fVar53 + fVar55 * (*(float *)((long)unaff_x19 + 0x2d4) +
                                                   fVar50 * (fVar44 * fVar45 + fVar57) +
                                                   in_stack_000000f0 *
                                                   (fStack00000000000000ec +
                                                   fStack00000000000000f4 +
                                                   *(float *)(*_fStack0000000000000170 + 0x1a4)));
                        *(float *)(unaff_x19 + 0xcb) = fVar53;
                        goto joined_r0x092bf8d4;
                      }
                      goto LAB_092c3994;
                    }
                    fVar55 = (float)FUN_095e15b8(&stack0x00001230,0);
                    if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
                    uVar52 = (ulong)(uint)(1.0 - *(float *)(unaff_x19 + 0x60));
                    fVar53 = fVar53 - (1.0 - *(float *)(unaff_x19 + 0x60)) *
                                      (*(float *)((long)unaff_x19 + 0x2d4) +
                                      fVar50 * fVar55 +
                                      in_stack_000000f0 *
                                      (fStack00000000000000ec +
                                      fStack00000000000000f4 +
                                      *(float *)(*_fStack0000000000000170 + 0x1a4)));
                    *(float *)(unaff_x19 + 0xcb) = fVar53;
                    if ((in_stack_0000128c == 0x200b) || (in_stack_00000160 != 0)) {
                      uVar52 = (ulong)(uint)(in_stack_000000f0 * *(float *)(unaff_x19 + 0x5c));
                      fVar53 = fVar53 - in_stack_000000f0 * *(float *)(unaff_x19 + 0x5c);
                      goto LAB_092bf994;
                    }
                  }
                  else {
                    if (((*(char *)((long)unaff_x19 + 0x2dc) != '\0') && (in_stack_0000128c < 0x3b))
                       && ((1L << ((ulong)in_stack_0000128c & 0x3f) & 0x400500000000000U) != 0)) {
                      fVar53 = fVar53 * 0.5;
                    }
                    if (*_fStack0000000000000170 == 0) goto LAB_092c3994;
                    fVar55 = *(float *)(unaff_x19 + 0xcb);
                    fVar53 = fVar55 + (1.0 - *(float *)(unaff_x19 + 0x60)) *
                                      (*(float *)((long)unaff_x19 + 0x2d4) +
                                      (fVar53 - fVar44) +
                                      in_stack_000000f0 *
                                      (fStack00000000000000f4 +
                                      *(float *)(*_fStack0000000000000170 + 0x1a4)));
                    *(float *)(unaff_x19 + 0xcb) = fVar53;
joined_r0x092bf8d4:
                    if ((in_stack_0000128c == 0x200b) ||
                       (uVar52 = (ulong)(uint)fVar55, in_stack_00000160 != 0)) {
                      uVar52 = (ulong)(uint)(in_stack_000000f0 * *(float *)(unaff_x19 + 0x5c));
                      fVar53 = fVar53 + in_stack_000000f0 * *(float *)(unaff_x19 + 0x5c);
                      goto LAB_092bf994;
                    }
                  }
                }
                lVar29 = *in_stack_00000178;
                if ((lVar29 == 0) || (lVar38 = *(long *)(lVar29 + 0x38), lVar38 == 0))
                goto LAB_092c3994;
                uVar15 = *unaff_x24;
                if (*(uint *)(lVar38 + 0x18) <= uVar15) goto LAB_092c3b00;
                *(float *)(lVar38 + (long)(int)uVar15 * unaff_x28 + 0x13c) = fVar53;
                if (in_stack_0000128c == 0xd) {
                  uVar52 = 0;
                  *(float *)(unaff_x19 + 0xcb) = *(float *)((long)unaff_x19 + 0x444) + 0.0;
                }
                if (((int)unaff_x19[0x62] == 5) &&
                   (((0xd < in_stack_0000128c ||
                     ((1 << (ulong)(in_stack_0000128c & 0x1f) & 0x2c00U) == 0)) &&
                    (1 < in_stack_0000128c - 0x2028)))) {
                  lVar38 = *(long *)(lVar29 + 0x58);
                  if (lVar38 == 0) goto LAB_092c3994;
                  iVar20 = *(int *)((long)unaff_x19 + 0x4c4) + 1;
                  if (*(int *)(lVar38 + 0x18) < iVar20) {
                    if (*(int *)(*(long *)PTR_DAT_09fc9d78 + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                    }
                    FUN_04fe1e40((long *)(lVar29 + 0x58),iVar20,1,*(undefined8 *)PTR_DAT_09fc9d68);
                    lVar29 = *in_stack_00000178;
                    if (lVar29 == 0) goto LAB_092c3994;
                  }
                  lVar38 = *(long *)(lVar29 + 0x58);
                  if (lVar38 == 0) goto LAB_092c3994;
                  lVar40 = (long)(int)*(uint *)((long)unaff_x19 + 0x4c4);
                  if (*(uint *)(lVar38 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4c4))
                  goto LAB_092c3b00;
                  lVar21 = lVar38 + lVar40 * 0x14;
                  fVar55 = *(float *)(lVar21 + 0x30);
                  uVar52 = (ulong)(uint)fVar55;
                  *(int *)(lVar21 + 0x28) = (int)unaff_x19[0x99];
                  fVar53 = *(float *)(unaff_x19 + 0x9b);
                  if (fVar55 <= *(float *)(unaff_x19 + 0x9b)) {
                    fVar53 = fVar55;
                  }
                  *(float *)(lVar21 + 0x30) = fVar53;
                  if (*(char *)((long)unaff_x19 + 0x374) != '\0') {
                    *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
                    *(undefined4 *)(lVar38 + lVar40 * 0x14 + 0x20) =
                         *(undefined4 *)((long)unaff_x19 + 0x4a4);
                  }
                  uVar15 = *unaff_x24;
                  *(uint *)(lVar38 + lVar40 * 0x14 + 0x24) = uVar15;
                }
                uVar16 = in_stack_0000128c;
                if (((in_stack_0000128c < 0xc) &&
                    ((1 << (ulong)(in_stack_0000128c & 0x1f) & 0xc08U) != 0)) ||
                   ((in_stack_0000128c - 0x2028 < 2 ||
                    (((unaff_w25 & in_stack_0000128c == 0x2d) != 0 ||
                     (uVar15 == uStack0000000000000054)))))) {
                  if (0.0 < *(float *)((long)unaff_x19 + 0x4ec)) {
                    fVar53 = *(float *)((long)unaff_x19 + 0x4dc);
                    fVar55 = *(float *)((long)unaff_x19 + 0x4e4);
                    if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                    }
                    fVar53 = fVar53 - fVar55;
                    if (((fStack0000000000000058 < ABS(fVar53)) && ((char)unaff_x19[0x5e] == '\0'))
                       && (*(char *)((long)unaff_x19 + 0x374) == '\0')) {
                      FUN_09310778(fVar53);
                      *(float *)(unaff_x19 + 0x9b) = *(float *)(unaff_x19 + 0x9b) - fVar53;
                      *(float *)((long)unaff_x19 + 0x4ec) =
                           fVar53 + *(float *)((long)unaff_x19 + 0x4ec);
                      puVar12 = PTR_DAT_09f56060;
                      lVar29 = *(long *)PTR_DAT_09f56060;
                      if (*(int *)(lVar29 + 0xe4) == 0) {
                        thunk_FUN_044a54b4();
                        lVar29 = *(long *)puVar12;
                      }
                      lVar38 = *(long *)(lVar29 + 0xb8);
                      if (*(int *)(lVar38 + 0x838) == (int)unaff_x19[0x97]) {
                        if (*(int *)(lVar29 + 0xe4) == 0) {
                          thunk_FUN_044a54b4();
                          lVar38 = *(long *)(*(long *)PTR_DAT_09f56060 + 0xb8);
                        }
                        FUN_0677903c(&stack0x00001290,lVar38 + 0x1338,
                                     *(undefined8 *)PTR_DAT_09fc9da0);
                        memcpy(&stack0x000001c0,&stack0x00001290,0x3b8);
                        puVar12 = PTR_DAT_09f56060;
                        lVar29 = *(long *)PTR_DAT_09f56060;
                        memcpy((void *)(*(long *)(lVar29 + 0xb8) + 0x810),&stack0x000001c0,0x3b8);
                        thunk_FUN_044bb4b4(*(long *)(lVar29 + 0xb8) + 0x8a8,0);
                        lVar29 = *(long *)(*(long *)puVar12 + 0xb8);
                        *(float *)(lVar29 + 0x848) = fVar53 + *(float *)(lVar29 + 0x848);
                        *(float *)(lVar29 + 0x894) = fVar53 + *(float *)(lVar29 + 0x894);
                        uVar59 = *(undefined8 *)PTR_DAT_09fc9da8;
                        memcpy(&stack0x00001290,(void *)(lVar29 + 0x810),0x3b8);
                        FUN_06778f24(lVar29 + 0x1338,&stack0x00001290,uVar59);
                      }
                    }
                  }
                  fVar44 = *(float *)((long)unaff_x19 + 0x4ec);
                  *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
                  fVar55 = *(float *)(unaff_x19 + 0x9c) - fVar44;
                  fVar53 = *(float *)(unaff_x19 + 0x9b);
                  if (fVar55 <= *(float *)(unaff_x19 + 0x9b)) {
                    fVar53 = fVar55;
                  }
                  *(float *)(unaff_x19 + 0x9b) = fVar53;
                  fVar57 = *(float *)((long)unaff_x19 + 0x4dc);
                  if (in_stack_00001284 == '\0') {
                    in_stack_00001288 = fVar53;
                  }
                  if ((*(char *)((long)unaff_x19 + 0x36c) != '\0') &&
                     (((int)unaff_x19[0x6c] <= *(int *)((long)unaff_x19 + 0x4a4) ||
                      ((int)unaff_x19[0x6d] <= (int)unaff_x19[0x97])))) {
                    in_stack_00001284 = '\x01';
                  }
                  lVar29 = *in_stack_00000178;
                  if ((lVar29 == 0) || (lVar38 = *(long *)(lVar29 + 0x50), lVar38 == 0))
                  goto LAB_092c3994;
                  uVar15 = *(uint *)(unaff_x19 + 0x97);
                  if (*(uint *)(lVar38 + 0x18) <= uVar15) goto LAB_092c3b00;
                  lVar40 = unaff_x19[0x95];
                  lVar21 = lVar38 + (long)(int)uVar15 * 0x60;
                  *(int *)(lVar21 + 0x38) = (int)lVar40;
                  uVar2 = *(uint *)(unaff_x19 + 0x95);
                  if ((int)lVar40 <= (int)*(uint *)((long)unaff_x19 + 0x4ac)) {
                    uVar2 = *(uint *)((long)unaff_x19 + 0x4ac);
                  }
                  *(uint *)((long)unaff_x19 + 0x4ac) = uVar2;
                  *(uint *)(lVar21 + 0x3c) = uVar2;
                  *(undefined4 *)(unaff_x19 + 0x96) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
                  *(undefined4 *)(lVar21 + 0x40) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
                  iVar20 = *(int *)((long)unaff_x19 + 0x4ac);
                  if ((int)uVar2 <= *(int *)((long)unaff_x19 + 0x4b4)) {
                    iVar20 = *(int *)((long)unaff_x19 + 0x4b4);
                  }
                  *(int *)((long)unaff_x19 + 0x4b4) = iVar20;
                  *(int *)(lVar21 + 0x44) = iVar20;
                  *(int *)(lVar21 + 0x24) = (*(int *)(lVar21 + 0x40) - *(int *)(lVar21 + 0x38)) + 1;
                  iVar18 = *(int *)((long)unaff_x19 + 0x4bc);
                  *(int *)(lVar21 + 0x28) = iVar18;
                  *(int *)(lVar21 + 0x30) = ((iVar20 - *(int *)(lVar21 + 0x38)) - iVar18) + 1;
                  lVar29 = *(long *)(lVar29 + 0x38);
                  if (lVar29 == 0) goto LAB_092c3994;
                  if (*(uint *)(lVar29 + 0x18) <= uVar2) goto LAB_092c3b00;
                  uVar43 = *(undefined4 *)(lVar29 + (long)(int)uVar2 * (long)iVar42 + 0x114);
                  lVar38 = lVar38 + (long)(int)uVar15 * 0x60;
                  *(float *)(lVar38 + 0x74) = fVar55;
                  *(undefined4 *)(lVar38 + 0x70) = uVar43;
                  lVar29 = *in_stack_00000178;
                  if ((lVar29 == 0) || (lVar38 = *(long *)(lVar29 + 0x50), lVar38 == 0))
                  goto LAB_092c3994;
                  if (*(uint *)(lVar38 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_092c3b00;
                  lVar29 = *(long *)(lVar29 + 0x38);
                  if (lVar29 == 0) goto LAB_092c3994;
                  if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4b4))
                  goto LAB_092c3b00;
                  uVar43 = *(undefined4 *)
                            (lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4b4) * unaff_x28 +
                            0x120);
                  fVar57 = fVar57 - fVar44;
                  lVar38 = lVar38 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
                  *(float *)(lVar38 + 0x7c) = fVar57;
                  *(undefined4 *)(lVar38 + 0x78) = uVar43;
                  lVar29 = *in_stack_00000178;
                  if ((lVar29 == 0) || (lVar38 = *(long *)(lVar29 + 0x50), lVar38 == 0))
                  goto LAB_092c3994;
                  lVar40 = (long)(int)*(uint *)(unaff_x19 + 0x97);
                  if (*(uint *)(lVar38 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_092c3b00;
                  lVar21 = lVar38 + lVar40 * 0x60;
                  *(float *)(lVar21 + 0x48) = *(float *)(lVar21 + 0x78) - fVar50 * in_stack_00000150
                  ;
                  *(float *)(lVar21 + 0x60) = in_stack_00000100._4_4_;
                  if (*(int *)(lVar21 + 0x24) == 1) {
                    *(int *)(lVar38 + lVar40 * 0x60 + 0x6c) = (int)unaff_x19[0x54];
                  }
                  if ((*_fStack0000000000000170 == 0) ||
                     (lVar21 = *(long *)(lVar29 + 0x38), lVar21 == 0)) goto LAB_092c3994;
                  lVar34 = (long)(int)*(uint *)((long)unaff_x19 + 0x4b4);
                  if (*(uint *)(lVar21 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4b4))
                  goto LAB_092c3b00;
                  if ((*(char *)(lVar21 + lVar34 * unaff_x28 + 400) == '\0') &&
                     (lVar34 = (long)(int)*(uint *)(unaff_x19 + 0x96),
                     *(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x96))) goto LAB_092c3b00;
                  fVar44 = (1.0 - *(float *)(unaff_x19 + 0x60)) *
                           (*(float *)((long)unaff_x19 + 0x2d4) +
                           in_stack_000000f0 *
                           (fStack00000000000000ec +
                           fStack00000000000000f4 + *(float *)(*_fStack0000000000000170 + 0x1a4)));
                  fVar53 = -fVar44;
                  if ((char)unaff_x19[0x1e] != '\0') {
                    fVar53 = fVar44;
                  }
                  lVar38 = lVar38 + lVar40 * 0x60;
                  *(float *)(lVar38 + 0x5c) =
                       *(float *)(lVar21 + lVar34 * unaff_x28 + 0x13c) + fVar53;
                  fVar53 = *(float *)((long)unaff_x19 + 0x4ec);
                  *(float *)(lVar38 + 0x4c) = fStack0000000000000064 + (fVar57 - fVar55);
                  *(float *)(lVar38 + 0x50) = fVar57;
                  fVar53 = 0.0 - fVar53;
                  uVar52 = (ulong)(uint)fVar53;
                  *(float *)(lVar38 + 0x54) = fVar53;
                  *(float *)(lVar38 + 0x58) = fVar55;
                  if ((((in_stack_0000128c & 0xfffffffe) == 10) ||
                      ((unaff_w25 & in_stack_0000128c == 0x2d) != 0)) ||
                     (in_stack_0000128c - 0x2028 < 2)) {
                    if (*(int *)(*(long *)PTR_DAT_09f56060 + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                    }
                    FUN_093103bc();
                    iVar20 = (int)unaff_x19[0x97] + 1;
                    *(int *)(unaff_x19 + 0x95) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
                    *(int *)(unaff_x19 + 0x97) = iVar20;
                    *(undefined8 *)(_uStack0000000000000148 + 0x1e8) = 0;
                    lVar29 = unaff_x19[0x74];
                    if ((lVar29 != 0) && (*(long *)(lVar29 + 0x50) != 0)) {
                      if (*(int *)(*(long *)(lVar29 + 0x50) + 0x18) <= iVar20) {
                        FUN_09310930();
                        lVar29 = unaff_x19[0x74];
                        if (lVar29 == 0) goto LAB_092c3994;
                      }
                      lVar29 = *(long *)(lVar29 + 0x38);
                      if (lVar29 != 0) {
                        if (*unaff_x24 < *(uint *)(lVar29 + 0x18)) {
                          fVar53 = *(float *)(lVar29 + (long)(int)*unaff_x24 * unaff_x28 + 0x14c);
                          if (*(float *)((long)unaff_x19 + 0x2ec) == DAT_01c76224) {
                            if ((in_stack_0000128c == 0x2029) ||
                               (fVar55 = 0.0, in_stack_0000128c == 10)) {
                              fVar55 = *(float *)(unaff_x19 + 0x5f);
                            }
                            uVar24 = 0;
                            fVar55 = fVar53 + (0.0 - *(float *)(unaff_x19 + 0x9c)) +
                                     fStack0000000000000050 *
                                     (in_stack_00000048._4_4_ + *(float *)(unaff_x19 + 0x5d)) +
                                     in_stack_000000f0 *
                                     (*(float *)((long)unaff_x19 + 0x2e4) + fVar55) +
                                     *(float *)((long)unaff_x19 + 0x4ec);
                          }
                          else {
                            if ((in_stack_0000128c == 0x2029) ||
                               (fVar55 = 0.0, in_stack_0000128c == 10)) {
                              fVar55 = *(float *)(unaff_x19 + 0x5f);
                            }
                            uVar24 = 1;
                            fVar55 = *(float *)((long)unaff_x19 + 0x4ec) +
                                     *(float *)((long)unaff_x19 + 0x2ec) +
                                     in_stack_000000f0 *
                                     (*(float *)((long)unaff_x19 + 0x2e4) + fVar55);
                          }
                          *(float *)((long)unaff_x19 + 0x4ec) = fVar55;
                          *(undefined1 *)(unaff_x19 + 0x5e) = uVar24;
                          puVar12 = PTR_DAT_09f56060;
                          lVar29 = *(long *)PTR_DAT_09f56060;
                          if (*(int *)(lVar29 + 0xe4) == 0) {
                            thunk_FUN_044a54b4();
                            lVar29 = *(long *)puVar12;
                          }
                          uVar59 = NEON_rev64(*(undefined8 *)(*(long *)(lVar29 + 0xb8) + 0x1730),4);
                          *(undefined8 *)(_uStack0000000000000148 + 0x208) = uVar59;
                          uVar52 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x444);
                          *(float *)((long)unaff_x19 + 0x4e4) = fVar53;
                          *(float *)(unaff_x19 + 0xcb) =
                               *(float *)(unaff_x19 + 0x88) + 0.0 +
                               *(float *)((long)unaff_x19 + 0x444);
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
                lVar29 = *(long *)(lVar29 + 0x38);
                if (lVar29 == 0) goto LAB_092c3994;
                uVar2 = *unaff_x24;
                uVar15 = *(uint *)(lVar29 + 0x18);
                if (uVar15 <= uVar2) goto LAB_092c3b00;
                if (*(char *)(lVar29 + (long)(int)uVar2 * unaff_x28 + 400) != '\0') {
                  lVar38 = lVar29 + (long)(int)uVar2 * unaff_x28;
                  uVar22 = unaff_x19[0x9e];
                  uVar52 = *(ulong *)(lVar38 + 0x114);
                  unaff_x19[0x9e] =
                       uVar22 ^ (uVar22 ^ uVar52) &
                                ~CONCAT44(-(uint)((float)(uVar22 >> 0x20) < (float)(uVar52 >> 0x20))
                                          ,-(uint)((float)uVar22 < (float)uVar52));
                  uVar22 = unaff_x19[0x9f];
                  uVar52 = *(ulong *)(lVar38 + 0x120);
                  unaff_x19[0x9f] =
                       uVar22 ^ (uVar22 ^ uVar52) &
                                ~CONCAT44(-(uint)((float)(uVar52 >> 0x20) < (float)(uVar22 >> 0x20))
                                          ,-(uint)((float)uVar52 < (float)uVar22));
                }
                if (((*(int *)((long)unaff_x19 + 0x304) != 3) &&
                    (*(int *)((long)unaff_x19 + 0x304) != 0)) ||
                   ((*(uint *)(unaff_x19 + 0x62) < 7 &&
                    ((1 << (ulong)(*(uint *)(unaff_x19 + 0x62) & 0x1f) & 0x4aU) != 0)))) {
                  if ((((in_stack_00000160 == 0) && (uVar16 != 0x2d)) && (uVar16 != 0x200b)) &&
                     (uVar16 != 0xad)) {
                    if (*(char *)((long)unaff_x19 + 0x309) == '\0') goto LAB_092c0420;
LAB_092c0274:
                    if ((in_stack_00000080._4_4_ & 1) == 0) {
                      in_stack_00000080._4_4_ = 0;
                    }
                    else {
                      uVar14 = 1;
                      uVar15 = (uint)(in_stack_00000160 == 0 || in_stack_0000128c == 0xa0) &
                               (in_stack_0000128c != 0xad | uStack0000000000000060) ^ 1;
LAB_092c08f4:
                      if (*(int *)(*(long *)PTR_DAT_09f56060 + 0xe4) == 0) {
                        thunk_FUN_044a54b4();
                      }
                      FUN_093103bc();
                      in_stack_00000080._4_4_ = uVar14;
                      if (uVar15 != 0) goto LAB_092c093c;
                    }
                  }
                  else {
                    if (*(char *)((long)unaff_x19 + 0x309) == '\x01') goto LAB_092c0274;
                    if ((int)uVar16 < 0x2007) {
                      if (uVar16 == 0x2d) {
                        if (0 < (int)uVar2) {
                          if (uVar15 <= uVar2 - 1) goto LAB_092c3b00;
                          uVar6 = *(undefined2 *)
                                   (lVar29 + (ulong)(uVar2 - 1) * (unaff_x28 & 0xffffffff) + 0x24);
                          if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
                            thunk_FUN_044a54b4();
                          }
                          uVar22 = FUN_079a0ce0(uVar6,0);
                          if ((uVar22 & 1) != 0) {
                            if ((*in_stack_00000178 == 0) ||
                               (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0))
                            goto LAB_092c3994;
                            if (*(uint *)(lVar29 + 0x18) <= *unaff_x24 - 1) goto LAB_092c3b00;
                            if (*(int *)(lVar29 + (long)(int)(*unaff_x24 - 1) * (long)iVar42 + 0x5c)
                                == (int)unaff_x19[0x97]) goto LAB_092c0974;
                          }
                        }
                      }
                      else if (uVar16 == 0xa0) goto LAB_092c0420;
LAB_092c08b8:
                      puVar12 = PTR_DAT_09f56060;
                      lVar29 = *(long *)PTR_DAT_09f56060;
                      if (*(int *)(lVar29 + 0xe4) == 0) {
                        thunk_FUN_044a54b4();
                        lVar29 = *(long *)puVar12;
                      }
                      uVar14 = 0;
                      uVar15 = 0;
                      *(undefined4 *)(*(long *)(lVar29 + 0xb8) + 0xf80) = 0xffffffff;
                      goto LAB_092c08f4;
                    }
                    if (((0x28 < uVar16 - 0x2007) ||
                        ((1L << ((ulong)(uVar16 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
                       (uVar16 != 0x2060)) goto LAB_092c08b8;
LAB_092c0420:
                    if (*(int *)(*(long *)PTR_DAT_09fc9d80 + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                    }
                    uVar22 = FUN_09335db4(uVar16,0);
                    if ((uVar22 & 1) == 0) {
LAB_092c046c:
                      if (*(int *)(*(long *)PTR_DAT_09fc9d80 + 0xe4) == 0) {
                        thunk_FUN_044a54b4();
                      }
                      uVar22 = FUN_09335e24(in_stack_0000128c,0);
                      if ((uVar22 & 1) != 0) goto LAB_092c049c;
                      if ((*(char *)((long)unaff_x19 + 0x309) != '\0') ||
                         (uVar14 = *unaff_x24 + 1, (int)fStack000000000000005c <= (int)uVar14))
                      goto LAB_092c0274;
                      if ((*in_stack_00000178 != 0) &&
                         (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 != 0)) {
                        if (uVar14 < *(uint *)(lVar29 + 0x18)) {
                          uVar6 = *(undefined2 *)(lVar29 + (long)(int)uVar14 * (long)iVar42 + 0x24);
                          if (*(int *)(*(long *)PTR_DAT_09fc9d80 + 0xe4) == 0) {
                            thunk_FUN_044a54b4();
                          }
                          uVar22 = FUN_09335e24(uVar6,0);
                          uVar14 = in_stack_00000080._4_4_;
                          if ((uVar22 & 1) == 0) goto LAB_092c0274;
LAB_092c08f0:
                          uVar15 = 0;
                          goto LAB_092c08f4;
                        }
                        goto LAB_092c3b00;
                      }
                      goto LAB_092c3994;
                    }
                    if (*(int *)(*(long *)PTR_DAT_09fc9d50 + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                    }
                    uVar22 = FUN_0932c20c(0);
                    if ((uVar22 & 1) != 0) goto LAB_092c046c;
LAB_092c049c:
                    if (*(int *)(*(long *)PTR_DAT_09fc9d50 + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                    }
                    lVar29 = FUN_0932bff8(0);
                    if ((lVar29 == 0) || (*(long *)(lVar29 + 0x10) == 0)) goto LAB_092c3994;
                    uVar15 = FUN_05681848(*(long *)(lVar29 + 0x10),in_stack_0000128c,
                                          *(undefined8 *)PTR_DAT_09fc9d20);
                    if ((int)uStack0000000000000054 <= (int)*unaff_x24) {
                      if ((uVar15 & 1) == 0) {
                        uVar14 = 0;
                        goto LAB_092c08f0;
                      }
LAB_092c0610:
                      uVar15 = (uint)(in_stack_00000160 != 0);
                      if (uVar14 != uVar19 || ((in_stack_00000080._4_4_ ^ 0xffffffff) & 1) != 0)
                      goto LAB_092c0974;
                      uVar14 = 1;
                      goto LAB_092c08f4;
                    }
                    if (*(int *)(*(long *)PTR_DAT_09fc9d50 + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                    }
                    lVar29 = FUN_0932bff8(0);
                    if (((lVar29 == 0) || (*in_stack_00000178 == 0)) ||
                       (lVar38 = *(long *)(*in_stack_00000178 + 0x38), lVar38 == 0))
                    goto LAB_092c3994;
                    if (*(uint *)(lVar38 + 0x18) <= *unaff_x24 + 1) goto LAB_092c3b00;
                    if (*(long *)(lVar29 + 0x18) == 0) goto LAB_092c3994;
                    uVar16 = FUN_05681848(*(long *)(lVar29 + 0x18),
                                          *(undefined2 *)
                                           (lVar38 + (long)(int)(*unaff_x24 + 1) * (long)iVar42 +
                                           0x24),*(undefined8 *)PTR_DAT_09fc9d20);
                    if ((uVar15 & 1) != 0) goto LAB_092c0610;
                    uVar14 = in_stack_00000080._4_4_ & uVar16;
                    uVar15 = uVar14 & in_stack_00000160 != 0;
                    if (((in_stack_00000080._4_4_ | uVar16 ^ 0xffffffff) & 1) != 0)
                    goto LAB_092c08f4;
                    in_stack_00000080._4_4_ = uVar14;
                    if (uVar15 == 0) goto LAB_092c0974;
LAB_092c093c:
                    if (*(int *)(*(long *)PTR_DAT_09f56060 + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                    }
                    FUN_093103bc();
                    in_stack_00000080._4_4_ = uVar14;
                  }
                }
LAB_092c0974:
                if (*(int *)(*(long *)PTR_DAT_09f56060 + 0xe4) == 0) {
                  thunk_FUN_044a54b4();
                }
                FUN_093103bc();
                *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
                uVar59 = in_stack_00001278;
                goto LAB_092c09bc;
              }
              goto LAB_092c3b00;
            }
          }
        }
        goto LAB_092c3994;
      }
      goto LAB_092c3b00;
    }
    goto LAB_092c3994;
  }
  goto LAB_092c3b00;
LAB_092c15cc:
  uVar14 = uVar15 - 1;
  if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_092c3b00;
  lVar21 = (long)(int)uVar14;
  lVar38 = lVar29 + lVar21 * 0x178;
  lVar40 = *(long *)(lVar38 + 0x40);
  uVar5 = *(ushort *)(lVar38 + 0x24);
  uVar16 = (uint)uVar5;
  if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar17 = FUN_079a0ce0(uVar5,0);
  if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_092c3b00;
  if ((*in_stack_00000178 == 0) || (lVar38 = *(long *)(*in_stack_00000178 + 0x50), lVar38 == 0))
  goto LAB_092c3994;
  uVar2 = *(uint *)(lVar29 + lVar21 * 0x178 + 0x5c);
  if (*(uint *)(lVar38 + 0x18) <= uVar2) goto LAB_092c3b00;
  lVar33 = (long)(int)uVar2;
  lVar38 = lVar38 + lVar33 * 0x60;
  uVar7 = *(uint *)(lVar38 + 0x40);
  uVar39 = *(uint *)(lVar38 + 0x6c);
  iVar3 = *(int *)(lVar38 + 0x20);
  iVar20 = *(int *)(lVar38 + 0x28);
  iVar18 = *(int *)(lVar38 + 0x2c);
  uVar8 = *(uint *)(lVar38 + 0x44);
  lVar34 = (long)(int)uVar8;
  fVar44 = *(float *)(lVar38 + 0x50);
  fVar45 = *(float *)(lVar38 + 0x58);
  fVar58 = *(float *)(lVar38 + 0x5c);
  fVar60 = *(float *)(lVar38 + 0x60);
  fVar66 = *(float *)(lVar38 + 100);
  fVar46 = *(float *)(lVar38 + 0x70);
  fVar69 = *(float *)(lVar38 + 0x74);
  fVar55 = *(float *)(lVar38 + 0x78);
  fVar57 = *(float *)(lVar38 + 0x7c);
  if ((int)uVar39 < 9) {
    switch(uVar39) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        fStack00000000000000ec = fVar66 + 0.0;
      }
      else {
        fStack00000000000000ec = 0.0 - fVar58;
      }
      break;
    case 2:
      fStack00000000000000ec = (fVar66 + fVar60 * 0.5) - fVar58 * 0.5;
      break;
    case 3:
      goto switchD_092c1704_caseD_3;
    case 4:
      fStack00000000000000ec = (fVar60 + fVar66) - fVar58;
      if ((char)unaff_x19[0x1e] != '\0') {
        fStack00000000000000ec = fVar60 + fVar66;
      }
      break;
    default:
      if ((((uVar16 != 3) && (uVar16 != 0x2060)) && (uVar16 != 0x200b)) &&
         (((uVar16 != 0xad && (uVar16 != 10)) && (((int)uVar14 <= (int)uVar8 && (uVar39 == 8))))))
      goto LAB_092c17a0;
      goto switchD_092c1704_caseD_3;
    }
    _in_stack_000000e0 = 0;
  }
  else if (uVar39 == 0x10) {
    if ((int)uVar8 < (int)uVar14) goto switchD_092c1704_caseD_3;
    if (uVar16 < 0xad) {
      if ((uVar16 != 3) && (uVar16 != 10)) goto LAB_092c17a0;
    }
    else if ((uVar16 != 0xad) && ((uVar16 != 0x200b && (uVar16 != 0x2060)))) {
LAB_092c17a0:
      if (*(uint *)(lVar29 + 0x18) <= uVar7) goto LAB_092c3b00;
      uVar6 = *(undefined2 *)(lVar29 + (long)(int)uVar7 * 0x178 + 0x24);
      if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar23 = FUN_079a4214(uVar6,0);
      plVar41 = (long *)PTR_DAT_09f56060;
      if ((uVar23 & 1) == 0) {
        bVar1 = (int)uVar2 < (int)unaff_x19[0x97];
      }
      else {
        bVar1 = false;
      }
      if ((fVar60 < fVar58) || (bVar1 || uVar39 >> 4 != 0)) {
        if ((uVar15 == 1) || ((uVar2 != uVar19 || (uVar14 == *(uint *)((long)unaff_x19 + 0x35c)))))
        {
          fStack00000000000000ec = fVar66;
          if ((char)unaff_x19[0x1e] != '\0') {
            fStack00000000000000ec = fVar60 + fVar66;
          }
          if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uStack0000000000000054 = FUN_079a44d8(uVar16,0);
          _in_stack_000000e0 = 0;
        }
        else {
          cVar25 = (char)unaff_x19[0x1e];
          iVar18 = (iVar18 - iVar3) - (uStack0000000000000054 & 1);
          fVar66 = -fVar58;
          if (cVar25 != '\0') {
            fVar66 = fVar58;
          }
          if (iVar18 < 1) {
            fVar58 = 1.0;
            iVar18 = 1;
          }
          else {
            fVar58 = *(float *)((long)unaff_x19 + 0x30c);
          }
          fVar48 = (float)((ulong)_in_stack_000000e0 >> 0x20);
          if (uVar16 == 9) {
LAB_092c34a8:
            fVar58 = ((fVar60 + fVar66) * (1.0 - fVar58)) / (float)iVar18;
            if (cVar25 == '\0') {
              fStack00000000000000ec = fStack00000000000000ec + fVar58;
              _in_stack_000000e0 = CONCAT44(fVar48 + 0.0,(float)_in_stack_000000e0 + 0.0);
            }
            else {
              fStack00000000000000ec = fStack00000000000000ec - fVar58;
            }
          }
          else {
            if (uVar16 != 0xa0) {
              if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              uVar23 = FUN_079a44d8(uVar16,0);
              cVar25 = (char)unaff_x19[0x1e];
              if ((uVar23 & 1) != 0) goto LAB_092c34a8;
            }
            fVar58 = ((fVar60 + fVar66) * fVar58) /
                     (float)(int)((iVar3 - (~uStack0000000000000054 & 1)) + iVar20);
            if (cVar25 == '\0') {
              fStack00000000000000ec = fStack00000000000000ec + fVar58;
              _in_stack_000000e0 = CONCAT44(fVar48 + 0.0,(float)_in_stack_000000e0 + 0.0);
            }
            else {
              fStack00000000000000ec = fStack00000000000000ec - fVar58;
            }
          }
        }
      }
      else {
        fStack00000000000000ec = fVar66;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000ec = fVar60 + fVar66;
        }
        _in_stack_000000e0 = 0;
      }
    }
  }
  else if (uVar39 == 0x20) {
    fStack00000000000000ec = (fVar66 + fVar60 * 0.5) - (fVar46 + fVar55) * 0.5;
    _in_stack_000000e0 = 0;
  }
switchD_092c1704_caseD_3:
  uVar39 = (uint)*(undefined8 *)(lVar29 + 0x18);
  if (uVar39 <= uVar14) goto LAB_092c3b00;
  lVar38 = lVar29 + lVar21 * 0x178;
  fVar66 = fStack00000000000000a8 + fStack00000000000000ec;
  fVar58 = (float)in_stack_000000a0 + (float)_in_stack_000000e0;
  fVar60 = (float)(in_stack_000000a0 >> 0x20) + (float)((ulong)_in_stack_000000e0 >> 0x20);
  if (*(char *)(lVar38 + 400) == '\0') goto LAB_092c1fb0;
  iVar20 = *(int *)(lVar29 + lVar21 * 0x178 + 0x20);
  if (iVar20 != 0) goto LAB_092c1dc8;
  fVar53 = fmodf(*(float *)((long)unaff_x19 + 0x34c) * (float)(int)uVar2,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x344)) {
  case 0:
    lVar28 = lVar29 + lVar21 * 0x178;
    *(undefined4 *)(lVar28 + 0x84) = 0;
    *(undefined4 *)(lVar28 + 0xac) = 0;
    *(undefined4 *)(lVar28 + 0xd4) = 0x3f800000;
    fVar53 = 1.0;
    break;
  case 1:
    fVar57 = *(float *)(lVar29 + lVar21 * 0x178 + 0x68);
    if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
      lVar28 = lVar29 + lVar21 * 0x178;
      fVar55 = (fStack00000000000000ec + fVar57) - *(float *)(unaff_x19 + 0x9e);
      fVar57 = *(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e);
      goto LAB_092c19b8;
    }
    lVar28 = lVar29 + lVar21 * 0x178;
    fVar55 = fVar55 - fVar46;
    *(float *)(lVar28 + 0x84) = fVar53 + (fVar57 - fVar46) / fVar55;
    *(float *)(lVar28 + 0xac) = fVar53 + (*(float *)(lVar28 + 0x90) - fVar46) / fVar55;
    *(float *)(lVar28 + 0xd4) = fVar53 + (*(float *)(lVar28 + 0xb8) - fVar46) / fVar55;
    fVar53 = fVar53 + (*(float *)(lVar28 + 0xe0) - fVar46) / fVar55;
    break;
  case 2:
    lVar28 = lVar29 + lVar21 * 0x178;
    fVar57 = *(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e);
    fVar55 = (fStack00000000000000ec + *(float *)(lVar28 + 0x68)) - *(float *)(unaff_x19 + 0x9e);
LAB_092c19b8:
    *(float *)(lVar28 + 0x84) = fVar53 + fVar55 / fVar57;
    *(float *)(lVar28 + 0xac) =
         fVar53 + ((fStack00000000000000ec + *(float *)(lVar28 + 0x90)) -
                  *(float *)(unaff_x19 + 0x9e)) /
                  (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
    *(float *)(lVar28 + 0xd4) =
         fVar53 + ((fStack00000000000000ec + *(float *)(lVar28 + 0xb8)) -
                  *(float *)(unaff_x19 + 0x9e)) /
                  (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
    fVar53 = fVar53 + ((fStack00000000000000ec + *(float *)(lVar28 + 0xe0)) -
                      *(float *)(unaff_x19 + 0x9e)) /
                      (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
    break;
  case 3:
    switch((int)unaff_x19[0x69]) {
    case 0:
      lVar28 = lVar29 + lVar21 * 0x178;
      *(undefined4 *)(lVar28 + 0x88) = 0;
      *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0xd8) = 0;
      *(undefined4 *)(lVar28 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar28 = lVar29 + lVar21 * 0x178;
      fVar57 = fVar57 - fVar69;
      fVar55 = fVar53 + (*(float *)(lVar28 + 0x6c) - fVar69) / fVar57;
      fVar57 = fVar53 + (*(float *)(lVar28 + 0x94) - fVar69) / fVar57;
      *(float *)(lVar28 + 0x88) = fVar55;
      *(float *)(lVar28 + 0xb0) = fVar57;
      *(float *)(lVar28 + 0xd8) = fVar55;
      *(float *)(lVar28 + 0x100) = fVar57;
      break;
    case 2:
      lVar28 = lVar29 + lVar21 * 0x178;
      fVar55 = fVar53 + (*(float *)(lVar28 + 0x6c) - *(float *)((long)unaff_x19 + 0x4f4)) /
                        (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
      *(float *)(lVar28 + 0x88) = fVar55;
      fVar57 = *(float *)((long)unaff_x19 + 0x4f4);
      fVar46 = *(float *)((long)unaff_x19 + 0x4fc);
      *(float *)(lVar28 + 0xd8) = fVar55;
      fVar55 = fVar53 + (*(float *)(lVar28 + 0x94) - fVar57) / (fVar46 - fVar57);
      *(float *)(lVar28 + 0xb0) = fVar55;
      *(float *)(lVar28 + 0x100) = fVar55;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c652c(*(undefined8 *)PTR_DAT_09fc9e18,0);
      uVar39 = (uint)*(undefined8 *)(lVar29 + 0x18);
    }
    if (uVar39 <= uVar14) goto LAB_092c3b00;
    lVar28 = lVar29 + lVar21 * 0x178;
    fVar55 = *(float *)(lVar28 + 0x158);
    fVar57 = (1.0 - (*(float *)(lVar28 + 0x88) + *(float *)(lVar28 + 0xb0)) * fVar55) * 0.5;
    fVar46 = fVar53 + *(float *)(lVar28 + 0x88) * fVar55 + fVar57;
    fVar53 = fVar53 + fVar57 + *(float *)(lVar28 + 0xb0) * fVar55;
    *(float *)(lVar28 + 0x84) = fVar46;
    *(float *)(lVar28 + 0xac) = fVar46;
    *(float *)(lVar28 + 0xd4) = fVar53;
    break;
  default:
    goto switchD_092c1924_default;
  }
  *(float *)(lVar29 + lVar21 * 0x178 + 0xfc) = fVar53;
switchD_092c1924_default:
  switch((int)unaff_x19[0x69]) {
  case 0:
    if (uVar39 <= uVar14) goto LAB_092c3b00;
    lVar28 = lVar29 + lVar21 * 0x178;
    *(undefined4 *)(lVar28 + 0x88) = 0;
    *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar28 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar28 + 0x100) = 0;
    break;
  case 1:
    if (uVar14 < uVar39) {
      lVar28 = lVar29 + lVar21 * 0x178;
      fVar44 = fVar44 - fVar45;
      fVar53 = (*(float *)(lVar28 + 0x6c) - fVar45) / fVar44;
      fVar44 = (*(float *)(lVar28 + 0x94) - fVar45) / fVar44;
      *(float *)(lVar28 + 0x88) = fVar53;
      goto LAB_092c1d10;
    }
    goto LAB_092c3b00;
  case 2:
    if (uVar39 <= uVar14) goto LAB_092c3b00;
    lVar28 = lVar29 + lVar21 * 0x178;
    fVar53 = (*(float *)(lVar28 + 0x6c) - *(float *)((long)unaff_x19 + 0x4f4)) /
             (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
    *(float *)(lVar28 + 0x88) = fVar53;
    fVar44 = (*(float *)(lVar28 + 0x94) - *(float *)((long)unaff_x19 + 0x4f4)) /
             (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
LAB_092c1d10:
    *(float *)(lVar28 + 0xb0) = fVar44;
    *(float *)(lVar28 + 0xd8) = fVar44;
    *(float *)(lVar28 + 0x100) = fVar53;
    break;
  case 3:
    if (uVar39 <= uVar14) goto LAB_092c3b00;
    lVar28 = lVar29 + lVar21 * 0x178;
    fVar44 = *(float *)(lVar28 + 0x158);
    fVar55 = (1.0 - (*(float *)(lVar28 + 0x84) + *(float *)(lVar28 + 0xd4)) / fVar44) * 0.5;
    fVar53 = *(float *)(lVar28 + 0x84) / fVar44 + fVar55;
    fVar55 = fVar55 + *(float *)(lVar28 + 0xd4) / fVar44;
    *(float *)(lVar28 + 0x88) = fVar53;
    *(float *)(lVar28 + 0xb0) = fVar55;
    *(float *)(lVar28 + 0x100) = fVar53;
    *(float *)(lVar28 + 0xd8) = fVar55;
  }
  if (uVar39 <= uVar14) goto LAB_092c3b00;
  lVar28 = lVar29 + lVar21 * 0x178;
  fVar53 = ABS(fVar50) * *(float *)(lVar28 + 0x15c) * (1.0 - *(float *)(unaff_x19 + 0x60));
  if ((*(char *)(lVar28 + 0x54) == '\0') && ((*(byte *)(lVar29 + lVar21 * 0x178 + 0x18c) & 1) != 0))
  {
    fVar53 = -fVar53;
  }
  lVar28 = lVar29 + lVar21 * 0x178;
  *(float *)(lVar28 + 0x80) = fVar53;
  *(float *)(lVar28 + 0xa8) = fVar53;
  *(float *)(lVar28 + 0xd0) = fVar53;
  *(float *)(lVar28 + 0xf8) = fVar53;
LAB_092c1dc8:
  if (((int)uVar14 < (int)unaff_x19[0x6c]) &&
     (iStack00000000000000c8 < *(int *)((long)unaff_x19 + 0x364))) {
    if (((int)uVar2 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] != 5)) {
      if (uVar39 <= uVar14) goto LAB_092c3b00;
      lVar38 = lVar29 + lVar21 * 0x178;
      *(ulong *)(lVar38 + 0x68) =
           CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar38 + 0x68) >> 0x20),
                    fVar66 + (float)*(undefined8 *)(lVar38 + 0x68));
      *(float *)(lVar38 + 0x70) = fVar60 + *(float *)(lVar38 + 0x70);
      *(ulong *)(lVar38 + 0x90) =
           CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar38 + 0x90) >> 0x20),
                    fVar66 + (float)*(undefined8 *)(lVar38 + 0x90));
      *(float *)(lVar38 + 0x98) = fVar60 + *(float *)(lVar38 + 0x98);
      *(ulong *)(lVar38 + 0xb8) =
           CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar38 + 0xb8) >> 0x20),
                    fVar66 + (float)*(undefined8 *)(lVar38 + 0xb8));
      *(float *)(lVar38 + 0xc0) = fVar60 + *(float *)(lVar38 + 0xc0);
      *(ulong *)(lVar38 + 0xe0) =
           CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar38 + 0xe0) >> 0x20),
                    fVar66 + (float)*(undefined8 *)(lVar38 + 0xe0));
      *(float *)(lVar38 + 0xe8) = fVar60 + *(float *)(lVar38 + 0xe8);
      goto LAB_092c1f5c;
    }
    if (((int)uVar2 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] == 5)) {
      if (uVar14 < uVar39) {
        if (*(uint *)(lVar29 + lVar21 * 0x178 + 0x60) == uStack0000000000000034) {
          lVar38 = lVar29 + lVar21 * 0x178;
          *(ulong *)(lVar38 + 0x68) =
               CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar38 + 0x68) >> 0x20),
                        fVar66 + (float)*(undefined8 *)(lVar38 + 0x68));
          *(float *)(lVar38 + 0x70) = fVar60 + *(float *)(lVar38 + 0x70);
          *(ulong *)(lVar38 + 0x90) =
               CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar38 + 0x90) >> 0x20),
                        fVar66 + (float)*(undefined8 *)(lVar38 + 0x90));
          *(float *)(lVar38 + 0x98) = fVar60 + *(float *)(lVar38 + 0x98);
          *(ulong *)(lVar38 + 0xb8) =
               CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar38 + 0xb8) >> 0x20),
                        fVar66 + (float)*(undefined8 *)(lVar38 + 0xb8));
          *(float *)(lVar38 + 0xc0) = fVar60 + *(float *)(lVar38 + 0xc0);
          *(ulong *)(lVar38 + 0xe0) =
               CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar38 + 0xe0) >> 0x20),
                        fVar66 + (float)*(undefined8 *)(lVar38 + 0xe0));
          *(float *)(lVar38 + 0xe8) = fVar60 + *(float *)(lVar38 + 0xe8);
          goto LAB_092c1f5c;
        }
        goto LAB_092c1ea0;
      }
      goto LAB_092c3b00;
    }
  }
LAB_092c1ea0:
  if (uVar39 <= uVar14) goto LAB_092c3b00;
  if (DAT_0a51bf43 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e740);
    DAT_0a51bf43 = '\x01';
    uVar39 = *(uint *)(lVar29 + 0x18);
  }
  puVar12 = PTR_DAT_09f1e740;
  uVar54 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_09f1e740 + 0xb8) + 1);
  lVar28 = lVar29 + lVar21 * 0x178;
  *(undefined8 *)(lVar28 + 0x68) = **(undefined8 **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
  *(undefined4 *)(lVar28 + 0x70) = uVar54;
  if (uVar39 <= uVar14) goto LAB_092c3b00;
  uVar54 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  lVar28 = lVar29 + lVar21 * 0x178;
  *(undefined8 *)(lVar28 + 0x90) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar28 + 0x98) = uVar54;
  uVar54 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  *(undefined8 *)(lVar28 + 0xb8) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar28 + 0xc0) = uVar54;
  uVar54 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  *(undefined8 *)(lVar28 + 0xe0) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar28 + 0xe8) = uVar54;
  *(undefined1 *)(lVar38 + 400) = 0;
LAB_092c1f5c:
  iVar18 = FUN_094d65a8(0);
  *(bool *)((long)unaff_x19 + 0x174) = iVar18 == 1;
  if (iVar20 == 0) {
    pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
LAB_092c1f9c:
    (*pcVar31)();
    plVar41 = (long *)PTR_DAT_09f56060;
  }
  else {
    plVar41 = (long *)PTR_DAT_09f56060;
    if (iVar20 == 1) {
      pcVar31 = *(code **)(*unaff_x19 + 0x8f8);
      goto LAB_092c1f9c;
    }
  }
LAB_092c1fb0:
  if ((*in_stack_00000178 == 0) || (lVar38 = *(long *)(*in_stack_00000178 + 0x38), lVar38 == 0))
  goto LAB_092c3994;
  if (*(uint *)(lVar38 + 0x18) <= uVar14) goto LAB_092c3b00;
  lVar38 = lVar38 + lVar21 * 0x178;
  uVar59 = *(undefined8 *)(lVar38 + 0x114);
  *(undefined8 *)(lVar38 + 0x114) =
       CONCAT44(fVar58 + (float)((ulong)uVar59 >> 0x20),fVar66 + (float)uVar59);
  *(float *)(lVar38 + 0x11c) = fVar60 + *(float *)(lVar38 + 0x11c);
  if ((*in_stack_00000178 == 0) || (lVar38 = *(long *)(*in_stack_00000178 + 0x38), lVar38 == 0))
  goto LAB_092c3994;
  if (*(uint *)(lVar38 + 0x18) <= uVar14) goto LAB_092c3b00;
  lVar38 = lVar38 + lVar21 * 0x178;
  *(ulong *)(lVar38 + 0x108) =
       CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar38 + 0x108) >> 0x20),
                fVar66 + (float)*(undefined8 *)(lVar38 + 0x108));
  *(float *)(lVar38 + 0x110) = fVar60 + *(float *)(lVar38 + 0x110);
  if ((*in_stack_00000178 == 0) || (lVar38 = *(long *)(*in_stack_00000178 + 0x38), lVar38 == 0))
  goto LAB_092c3994;
  if (*(uint *)(lVar38 + 0x18) <= uVar14) goto LAB_092c3b00;
  lVar38 = lVar38 + lVar21 * 0x178;
  *(ulong *)(lVar38 + 0x120) =
       CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar38 + 0x120) >> 0x20),
                fVar66 + (float)*(undefined8 *)(lVar38 + 0x120));
  *(float *)(lVar38 + 0x128) = fVar60 + *(float *)(lVar38 + 0x128);
  if ((*in_stack_00000178 == 0) || (lVar38 = *(long *)(*in_stack_00000178 + 0x38), lVar38 == 0))
  goto LAB_092c3994;
  if (*(uint *)(lVar38 + 0x18) <= uVar14) goto LAB_092c3b00;
  lVar38 = lVar38 + lVar21 * 0x178;
  *(float *)(lVar38 + 300) = fVar66 + *(float *)(lVar38 + 300);
  *(ulong *)(lVar38 + 0x130) =
       CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar38 + 0x130) >> 0x20),
                fVar58 + (float)*(undefined8 *)(lVar38 + 0x130));
  lVar38 = *in_stack_00000178;
  if ((lVar38 == 0) || (lVar28 = *(long *)(lVar38 + 0x38), lVar28 == 0)) goto LAB_092c3994;
  uVar39 = *(uint *)(lVar28 + 0x18);
  if (uVar39 <= uVar14) goto LAB_092c3b00;
  lVar36 = lVar28 + lVar21 * 0x178;
  *(float *)(lVar36 + 0x148) = fVar58 + *(float *)(lVar36 + 0x148);
  *(ulong *)(lVar36 + 0x138) =
       CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar36 + 0x138) >> 0x20),
                fVar66 + (float)*(undefined8 *)(lVar36 + 0x138));
  *(ulong *)(lVar36 + 0x140) =
       CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar36 + 0x140) >> 0x20),
                fVar58 + (float)*(undefined8 *)(lVar36 + 0x140));
  if (uVar2 == uVar19) {
    uVar19 = *in_stack_00000180 - 1;
    if (uVar14 == uVar19) goto LAB_092c21c0;
  }
  else {
    lVar38 = *(long *)(lVar38 + 0x50);
    if (lVar38 == 0) goto LAB_092c3994;
    if (*(uint *)(lVar38 + 0x18) <= uVar19) goto LAB_092c3b00;
    lVar36 = (long)(int)uVar19;
    lVar37 = lVar38 + lVar36 * 0x60;
    fVar55 = fVar58 + *(float *)(lVar37 + 0x58);
    *(ulong *)(lVar37 + 0x50) =
         CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar37 + 0x50) >> 0x20),
                  fVar58 + (float)*(undefined8 *)(lVar37 + 0x50));
    *(float *)(lVar37 + 0x58) = fVar55;
    *(float *)(lVar37 + 0x5c) = fVar66 + *(float *)(lVar37 + 0x5c);
    if (uVar39 <= *(uint *)(lVar37 + 0x38)) goto LAB_092c3b00;
    uVar54 = *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar37 + 0x38) * 0x178 + 0x114);
    lVar38 = lVar38 + lVar36 * 0x60;
    *(float *)(lVar38 + 0x74) = fVar55;
    *(undefined4 *)(lVar38 + 0x70) = uVar54;
    lVar38 = *in_stack_00000178;
    if ((lVar38 == 0) || (lVar28 = *(long *)(lVar38 + 0x50), lVar28 == 0)) goto LAB_092c3994;
    if (*(uint *)(lVar28 + 0x18) <= uVar19) goto LAB_092c3b00;
    lVar38 = *(long *)(lVar38 + 0x38);
    if (lVar38 == 0) goto LAB_092c3994;
    uVar19 = *(uint *)(lVar28 + lVar36 * 0x60 + 0x44);
    if (*(uint *)(lVar38 + 0x18) <= uVar19) goto LAB_092c3b00;
    lVar28 = lVar28 + lVar36 * 0x60;
    *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar38 + (long)(int)uVar19 * 0x178 + 0x120);
    *(undefined4 *)(lVar28 + 0x7c) = *(undefined4 *)(lVar28 + 0x50);
    uVar19 = *in_stack_00000180 - 1;
LAB_092c21c0:
    if (uVar14 == uVar19) {
      lVar38 = *in_stack_00000178;
      if ((lVar38 == 0) || (lVar28 = *(long *)(lVar38 + 0x50), lVar28 == 0)) goto LAB_092c3994;
      if (*(uint *)(lVar28 + 0x18) <= uVar2) goto LAB_092c3b00;
      lVar36 = lVar28 + lVar33 * 0x60;
      fVar55 = fVar58 + *(float *)(lVar36 + 0x58);
      *(ulong *)(lVar36 + 0x50) =
           CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar36 + 0x50) >> 0x20),
                    fVar58 + (float)*(undefined8 *)(lVar36 + 0x50));
      *(float *)(lVar36 + 0x58) = fVar55;
      *(float *)(lVar36 + 0x5c) = fVar66 + *(float *)(lVar36 + 0x5c);
      lVar38 = *(long *)(lVar38 + 0x38);
      if (lVar38 == 0) goto LAB_092c3994;
      if (*(uint *)(lVar38 + 0x18) <= *(uint *)(lVar36 + 0x38)) goto LAB_092c3b00;
      uVar54 = *(undefined4 *)(lVar38 + (long)(int)*(uint *)(lVar36 + 0x38) * 0x178 + 0x114);
      lVar28 = lVar28 + lVar33 * 0x60;
      *(float *)(lVar28 + 0x74) = fVar55;
      *(undefined4 *)(lVar28 + 0x70) = uVar54;
      lVar38 = *in_stack_00000178;
      if ((lVar38 == 0) || (lVar28 = *(long *)(lVar38 + 0x50), lVar28 == 0)) goto LAB_092c3994;
      if (*(uint *)(lVar28 + 0x18) <= uVar2) goto LAB_092c3b00;
      lVar38 = *(long *)(lVar38 + 0x38);
      if (lVar38 == 0) goto LAB_092c3994;
      uVar19 = *(uint *)(lVar28 + lVar33 * 0x60 + 0x44);
      if (*(uint *)(lVar38 + 0x18) <= uVar19) goto LAB_092c3b00;
      lVar28 = lVar28 + lVar33 * 0x60;
      *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar38 + (long)(int)uVar19 * 0x178 + 0x120);
      *(undefined4 *)(lVar28 + 0x7c) = *(undefined4 *)(lVar28 + 0x50);
    }
  }
  if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar23 = FUN_079a3748(uVar16,0);
  if (((((uVar23 & 1) == 0) && (1 < uVar16 - 0x2010)) && (uVar16 != 0xad)) && (uVar16 != 0x2d)) {
    if (bVar10) {
      if (((uVar15 != 1) && ((int)uVar14 < (int)(*(uint *)(lVar29 + 0x18) - 1))) &&
         (((int)uVar14 < (int)*in_stack_00000180 && ((uVar16 == 0x2019 || (uVar16 == 0x27)))))) {
        if (*(uint *)(lVar29 + 0x18) <= uVar15 - 2) goto LAB_092c3b00;
        uVar6 = *(undefined2 *)(lVar29 + _in_stack_00000160 + -0x430);
        if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar23 = FUN_079a3748(uVar6,0);
        if ((uVar23 & 1) != 0) {
          if (*(uint *)(lVar29 + 0x18) <= uVar15) goto LAB_092c3b00;
          uVar6 = *(undefined2 *)(lVar29 + _in_stack_00000160 + -0x140);
          if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar23 = FUN_079a3748(uVar6,0);
          plVar41 = (long *)PTR_DAT_09f56060;
          if ((uVar23 & 1) != 0) goto LAB_092c23e0;
        }
      }
LAB_092c2644:
      if (uVar14 == *in_stack_00000180 - 1) {
        if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar23 = FUN_079a3748(uVar16,0);
        iVar20 = iStack0000000000000110;
        if ((uVar23 & 1) == 0) goto LAB_092c2684;
      }
      else {
LAB_092c2684:
        iVar20 = uVar15 - 2;
      }
      lVar38 = *in_stack_00000178;
      if (lVar38 == 0) goto LAB_092c3994;
      lVar28 = *(long *)(lVar38 + 0x40);
      if (lVar28 == 0) goto LAB_092c3994;
      uVar19 = *(uint *)(lVar38 + 0x24);
      iVar18 = *(int *)(lVar28 + 0x18);
      if (iVar18 < (int)(uVar19 + 1)) {
        if (*(int *)(*(long *)PTR_DAT_09fc9d78 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_04fe1b68((long *)(lVar38 + 0x40),iVar18 + 1,*(undefined8 *)PTR_DAT_09fc9d70);
        lVar38 = *in_stack_00000178;
        if (lVar38 == 0) goto LAB_092c3994;
      }
      plVar41 = (long *)PTR_DAT_09f56060;
      lVar38 = *(long *)(lVar38 + 0x40);
      if (lVar38 == 0) goto LAB_092c3994;
      if (*(uint *)(lVar38 + 0x18) <= uVar19) goto LAB_092c3b00;
      lVar38 = lVar38 + (long)(int)uVar19 * 0x18;
      *(long **)(lVar38 + 0x20) = unaff_x19;
      *(uint *)(lVar38 + 0x28) = uStack0000000000000148;
      *(int *)(lVar38 + 0x2c) = iVar20;
      *(uint *)(lVar38 + 0x30) = (iVar20 - uStack0000000000000148) + 1;
      thunk_FUN_044bb4b4();
      lVar38 = unaff_x19[0x74];
      if (lVar38 == 0) goto LAB_092c3994;
      lVar28 = *(long *)(lVar38 + 0x50);
      *(int *)(lVar38 + 0x24) = *(int *)(lVar38 + 0x24) + 1;
      if (lVar28 == 0) goto LAB_092c3994;
      if (*(uint *)(lVar28 + 0x18) <= uVar2) goto LAB_092c3b00;
      lVar28 = lVar28 + lVar33 * 0x60;
      bVar10 = false;
      iStack00000000000000c8 = iStack00000000000000c8 + 1;
      *(int *)(lVar28 + 0x34) = *(int *)(lVar28 + 0x34) + 1;
    }
    else {
      if (uVar15 == 1) {
        if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar19 = FUN_079a3698(uVar16,0);
        if (((uVar16 == 0x200b) || (((uVar17 | uVar19 ^ 1) & 1) != 0)) || (*in_stack_00000180 == 1))
        goto LAB_092c2644;
      }
      bVar10 = false;
    }
  }
  else {
    if (!bVar10) {
      uStack0000000000000148 = uVar14;
    }
    if (uVar14 == *in_stack_00000180 - 1) {
      lVar38 = *in_stack_00000178;
      if (lVar38 == 0) goto LAB_092c3994;
      lVar28 = *(long *)(lVar38 + 0x40);
      if (lVar28 == 0) goto LAB_092c3994;
      uVar19 = *(uint *)(lVar38 + 0x24);
      iVar20 = *(int *)(lVar28 + 0x18);
      if (iVar20 < (int)(uVar19 + 1)) {
        if (*(int *)(*(long *)PTR_DAT_09fc9d78 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_04fe1b68((long *)(lVar38 + 0x40),iVar20 + 1,*(undefined8 *)PTR_DAT_09fc9d70);
        lVar38 = *in_stack_00000178;
        if (lVar38 == 0) goto LAB_092c3994;
      }
      plVar41 = (long *)PTR_DAT_09f56060;
      lVar38 = *(long *)(lVar38 + 0x40);
      if (lVar38 == 0) goto LAB_092c3994;
      if (*(uint *)(lVar38 + 0x18) <= uVar19) goto LAB_092c3b00;
      lVar38 = lVar38 + (long)(int)uVar19 * 0x18;
      *(long **)(lVar38 + 0x20) = unaff_x19;
      *(uint *)(lVar38 + 0x28) = uStack0000000000000148;
      *(uint *)(lVar38 + 0x2c) = uVar14;
      *(uint *)(lVar38 + 0x30) = uVar15 - uStack0000000000000148;
      thunk_FUN_044bb4b4();
      lVar38 = unaff_x19[0x74];
      if (lVar38 == 0) goto LAB_092c3994;
      lVar28 = *(long *)(lVar38 + 0x50);
      *(int *)(lVar38 + 0x24) = *(int *)(lVar38 + 0x24) + 1;
      if (lVar28 == 0) goto LAB_092c3994;
      if (*(uint *)(lVar28 + 0x18) <= uVar2) goto LAB_092c3b00;
      lVar28 = lVar28 + lVar33 * 0x60;
      iStack00000000000000c8 = iStack00000000000000c8 + 1;
      *(int *)(lVar28 + 0x34) = *(int *)(lVar28 + 0x34) + 1;
    }
LAB_092c23e0:
    bVar10 = true;
  }
  lVar38 = *in_stack_00000178;
  if ((lVar38 == 0) || (lVar33 = *(long *)(lVar38 + 0x38), lVar33 == 0)) goto LAB_092c3994;
  if (*(uint *)(lVar33 + 0x18) <= uVar14) goto LAB_092c3b00;
  if ((*(byte *)(lVar33 + lVar21 * 0x178 + 0x18c) >> 2 & 1) == 0) {
    if (bVar11) {
      if (*(uint *)(lVar33 + 0x18) <= uVar15 - 2) goto LAB_092c3b00;
LAB_092c242c:
      lVar28 = *unaff_x19;
      uVar54 = *(undefined4 *)(lVar33 + _in_stack_00000160 + -0x334);
      uVar56 = *(undefined4 *)(lVar33 + _in_stack_00000160 + -0x2f8);
LAB_092c290c:
      (**(code **)(lVar28 + 0x908))
                (fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,uVar54,
                 fStack00000000000000f4,0,fStack0000000000000074,uVar56);
LAB_092c294c:
      lVar38 = *plVar41;
LAB_092c2950:
      if (*(int *)(lVar38 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar38 = *plVar41;
      }
      bVar11 = false;
      fStack0000000000000114 = 0.0;
      fStack00000000000000f4 = *(float *)(*(long *)(lVar38 + 0xb8) + 0x1730);
      in_stack_000000f0 = 0.0;
    }
    else {
      bVar11 = false;
    }
  }
  else {
    lVar28 = lVar33 + lVar21 * 0x178;
    iVar20 = *(int *)(lVar28 + 0x60);
    *(int *)(lVar28 + 0x168) = iVar42;
    if ((((int)unaff_x19[0x6c] < (int)uVar14) || ((int)unaff_x19[0x6d] < (int)uVar2)) ||
       (((int)unaff_x19[0x62] == 5 && (iVar20 + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (uVar16 != 0x200b && (uVar17 & 1) == 0) {
      fVar55 = *(float *)(lVar33 + lVar21 * 0x178 + 0x15c);
      if (fStack0000000000000114 <= fVar55) {
        fStack0000000000000114 = fVar55;
      }
      if (in_stack_000000f0 <= ABS(fVar53)) {
        in_stack_000000f0 = ABS(fVar53);
      }
      if ((float)iVar20 != fStack0000000000000064) {
        if (*(int *)(*plVar41 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar38 = *in_stack_00000178;
          if (lVar38 == 0) goto LAB_092c3994;
          lVar33 = *(long *)(*plVar41 + 0xb8);
        }
        else {
          lVar33 = *(long *)(*plVar41 + 0xb8);
        }
        fStack00000000000000f4 = *(float *)(lVar33 + 0x1730);
      }
      lVar38 = *(long *)(lVar38 + 0x38);
      if (lVar38 == 0) goto LAB_092c3994;
      if (*(uint *)(lVar38 + 0x18) <= uVar14) goto LAB_092c3b00;
      if (unaff_x19[0x1f] == 0) goto LAB_092c3994;
      fVar44 = *(float *)(lVar38 + lVar21 * 0x178 + 0x144);
      fVar55 = (float)FUN_095dcf60(unaff_x19[0x1f] + 0x28,0);
      fVar44 = fVar44 + fStack0000000000000114 * fVar55;
      fStack0000000000000064 = (float)iVar20;
      if (fVar44 <= fStack00000000000000f4) {
        fStack00000000000000f4 = fVar44;
      }
    }
    if (!bVar11) {
      if ((((uVar16 == 0xd) || ((uVar16 & 0xfffe) == 10)) || ((int)uVar8 < (int)uVar14)) || (!bVar1)
         ) {
LAB_092c2864:
        bVar11 = false;
        goto LAB_092c297c;
      }
      if (uVar14 == uVar8) {
        if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar23 = FUN_079a44d8(uVar16,0);
        if ((uVar23 & 1) != 0) goto LAB_092c2864;
      }
      if ((*in_stack_00000178 == 0) || (lVar38 = *(long *)(*in_stack_00000178 + 0x38), lVar38 == 0))
      goto LAB_092c3994;
      if (*(uint *)(lVar38 + 0x18) <= uVar14) goto LAB_092c3b00;
      lVar38 = lVar38 + lVar21 * 0x178;
      fStack0000000000000074 = *(float *)(lVar38 + 0x15c);
      fStack0000000000000070 = *(float *)(lVar38 + 0x114);
      uVar43 = *(undefined4 *)(lVar38 + 0x164);
      fVar55 = fStack0000000000000074;
      if (fStack0000000000000114 != 0.0) {
        fVar55 = fStack0000000000000114;
      }
      uStack000000000000006c = 0;
      fVar44 = fVar53;
      if (fStack0000000000000114 != 0.0) {
        fVar44 = in_stack_000000f0;
      }
      fStack0000000000000068 = fStack00000000000000f4;
      in_stack_000000f0 = fVar44;
      fStack0000000000000114 = fVar55;
    }
    if (*in_stack_00000180 == 1) {
      if ((*in_stack_00000178 != 0) && (lVar38 = *(long *)(*in_stack_00000178 + 0x38), lVar38 != 0))
      {
        if (uVar14 < *(uint *)(lVar38 + 0x18)) {
          lVar38 = lVar38 + lVar21 * 0x178;
          lVar28 = *unaff_x19;
          uVar54 = *(undefined4 *)(lVar38 + 0x120);
          uVar56 = *(undefined4 *)(lVar38 + 0x15c);
          goto LAB_092c290c;
        }
        goto LAB_092c3b00;
      }
      goto LAB_092c3994;
    }
    if ((uVar14 == uVar7) || ((int)uVar8 <= (int)uVar14)) {
      if ((*in_stack_00000178 != 0) && (lVar38 = *(long *)(*in_stack_00000178 + 0x38), lVar38 != 0))
      {
        lVar33 = lVar21;
        uVar19 = uVar14;
        if (uVar16 == 0x200b || (uVar17 & 1) != 0) {
          lVar33 = lVar34;
          uVar19 = uVar8;
        }
        if (uVar19 < *(uint *)(lVar38 + 0x18)) {
          lVar38 = lVar38 + lVar33 * 0x178;
          (**(code **)(*unaff_x19 + 0x908))
                    (fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,
                     *(undefined4 *)(lVar38 + 0x120),fStack00000000000000f4,0,fStack0000000000000074
                     ,*(undefined4 *)(lVar38 + 0x15c));
          lVar38 = *plVar41;
          goto LAB_092c2950;
        }
        goto LAB_092c3b00;
      }
      goto LAB_092c3994;
    }
    if (!bVar1) {
      if ((*in_stack_00000178 != 0) && (lVar33 = *(long *)(*in_stack_00000178 + 0x38), lVar33 != 0))
      {
        if (uVar15 - 2 < *(uint *)(lVar33 + 0x18)) goto LAB_092c242c;
        goto LAB_092c3b00;
      }
      goto LAB_092c3994;
    }
    if ((int)uVar14 < (int)(*in_stack_00000180 - 1)) {
      if ((*in_stack_00000178 == 0) || (lVar38 = *(long *)(*in_stack_00000178 + 0x38), lVar38 == 0))
      goto LAB_092c3994;
      if (*(uint *)(lVar38 + 0x18) <= uVar15) goto LAB_092c3b00;
      uVar23 = FUN_092de100(uVar43,*(undefined4 *)(lVar38 + _in_stack_00000160),0);
      plVar41 = (long *)PTR_DAT_09f56060;
      if ((uVar23 & 1) == 0) {
        if ((*in_stack_00000178 != 0) &&
           (lVar38 = *(long *)(*in_stack_00000178 + 0x38), lVar38 != 0)) {
          if (uVar14 < *(uint *)(lVar38 + 0x18)) {
            lVar38 = lVar38 + lVar21 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,
                       *(undefined4 *)(lVar38 + 0x120),fStack00000000000000f4,0,
                       fStack0000000000000074,*(undefined4 *)(lVar38 + 0x15c));
            plVar41 = (long *)PTR_DAT_09f56060;
            goto LAB_092c294c;
          }
          goto LAB_092c3b00;
        }
        goto LAB_092c3994;
      }
    }
    bVar11 = true;
  }
LAB_092c297c:
  if ((*in_stack_00000178 == 0) || (lVar38 = *(long *)(*in_stack_00000178 + 0x38), lVar38 == 0))
  goto LAB_092c3994;
  if (*(uint *)(lVar38 + 0x18) <= uVar14) goto LAB_092c3b00;
  if (lVar40 == 0) goto LAB_092c3994;
  uVar19 = *(uint *)(lVar38 + lVar21 * 0x178 + 0x18c);
  fVar55 = (float)FUN_095dcf70(lVar40 + 0x28,0);
  if ((uVar19 >> 6 & 1) == 0) {
    if (bVar9) {
      if ((*in_stack_00000178 == 0) || (lVar38 = *(long *)(*in_stack_00000178 + 0x38), lVar38 == 0))
      goto LAB_092c3994;
      if (*(uint *)(lVar38 + 0x18) <= uVar15 - 2) goto LAB_092c3b00;
      uVar54 = *(undefined4 *)(lVar38 + _in_stack_00000160 + -0x334);
      fVar44 = *(float *)(lVar38 + _in_stack_00000160 + -0x310);
      pcVar31 = *(code **)(*unaff_x19 + 0x908);
LAB_092c2f28:
      (*pcVar31)(fStack000000000000008c,fStack0000000000000088,in_stack_00000080._4_4_,uVar54,
                 fStack0000000000000090 * fVar55 + fVar44,0,fStack0000000000000090,
                 fStack0000000000000090);
    }
LAB_092c2f5c:
    bVar9 = false;
  }
  else {
    lVar38 = *in_stack_00000178;
    if ((lVar38 == 0) || (lVar33 = *(long *)(lVar38 + 0x38), lVar33 == 0)) goto LAB_092c3994;
    if (*(uint *)(lVar33 + 0x18) <= uVar14) goto LAB_092c3b00;
    *(int *)(lVar33 + lVar21 * 0x178 + 0x170) = iVar42;
    if ((((int)unaff_x19[0x6c] < (int)uVar14) || ((int)unaff_x19[0x6d] < (int)uVar2)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar33 + lVar21 * 0x178 + 0x60) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar16 == 0xd) || ((uVar16 & 0xfffe) == 10)) || ((int)uVar8 < (int)uVar14)) ||
       (bVar9 || !bVar1)) {
LAB_092c2acc:
      if (!bVar9) goto LAB_092c2f5c;
    }
    else {
      if (uVar14 == uVar8) {
        if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar23 = FUN_079a44d8(uVar16,0);
        if ((uVar23 & 1) != 0) goto LAB_092c2acc;
        lVar38 = *in_stack_00000178;
        if (lVar38 == 0) goto LAB_092c3994;
      }
      lVar38 = *(long *)(lVar38 + 0x38);
      if (lVar38 == 0) goto LAB_092c3994;
      if (*(uint *)(lVar38 + 0x18) <= uVar14) goto LAB_092c3b00;
      lVar38 = lVar38 + lVar21 * 0x178;
      fStack0000000000000090 = *(float *)(lVar38 + 0x15c);
      fStack000000000000008c = *(float *)(lVar38 + 0x114);
      fStack000000000000005c = *(float *)(lVar38 + 0x58);
      fStack0000000000000058 = *(float *)(lVar38 + 0x144);
      fStack0000000000000088 = fVar55 * fStack0000000000000090 + fStack0000000000000058;
      in_stack_00000080._4_4_ = 0;
    }
    uVar19 = *in_stack_00000180;
    if (uVar19 == 1) {
LAB_092c2c04:
      if ((*in_stack_00000178 != 0) && (lVar38 = *(long *)(*in_stack_00000178 + 0x38), lVar38 != 0))
      {
        if (uVar14 < *(uint *)(lVar38 + 0x18)) {
          lVar38 = lVar38 + lVar21 * 0x178;
          lVar40 = *unaff_x19;
          uVar54 = *(undefined4 *)(lVar38 + 0x120);
          fVar44 = *(float *)(lVar38 + 0x144);
LAB_092c2c30:
          pcVar31 = *(code **)(lVar40 + 0x908);
          goto LAB_092c2f28;
        }
        goto LAB_092c3b00;
      }
      goto LAB_092c3994;
    }
    if (uVar14 == uVar7) {
      if ((*in_stack_00000178 != 0) && (lVar38 = *(long *)(*in_stack_00000178 + 0x38), lVar38 != 0))
      {
        uVar19 = *(uint *)(lVar38 + 0x18);
        if (uVar16 == 0x200b || (uVar17 & 1) != 0) {
          if (uVar19 <= uVar8) goto LAB_092c3b00;
        }
        else {
LAB_092c2efc:
          lVar34 = lVar21;
          if (uVar19 <= uVar14) goto LAB_092c3b00;
        }
LAB_092c2f04:
        lVar38 = lVar38 + lVar34 * 0x178;
        fVar44 = *(float *)(lVar38 + 0x144);
        uVar54 = *(undefined4 *)(lVar38 + 0x120);
        pcVar31 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_092c2f28;
      }
      goto LAB_092c3994;
    }
    if ((int)uVar14 < (int)uVar19) {
      lVar38 = *in_stack_00000178;
      if ((lVar38 != 0) && (lVar33 = *(long *)(lVar38 + 0x38), lVar33 != 0)) {
        if (uVar15 < *(uint *)(lVar33 + 0x18)) {
          if (*(float *)(lVar33 + _in_stack_00000160 + -0x10c) == fStack000000000000005c) {
            fVar44 = *(float *)(lVar33 + _in_stack_00000160 + -0x20);
            if (*(int *)(*(long *)PTR_DAT_09fc9d38 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            uVar23 = FUN_092de624(fVar58 + fVar44,fStack0000000000000058,0);
            if ((uVar23 & 1) != 0) {
              uVar19 = *in_stack_00000180;
              goto LAB_092c2d04;
            }
            lVar38 = *in_stack_00000178;
            if (lVar38 == 0) goto LAB_092c3994;
          }
          lVar38 = *(long *)(lVar38 + 0x38);
          if (lVar38 != 0) {
            uVar19 = *(uint *)(lVar38 + 0x18);
            if ((int)uVar14 <= (int)uVar8) goto LAB_092c2efc;
            if (uVar8 < uVar19) goto LAB_092c2f04;
            goto LAB_092c3b00;
          }
          goto LAB_092c3994;
        }
        goto LAB_092c3b00;
      }
      goto LAB_092c3994;
    }
LAB_092c2d04:
    if ((int)uVar14 < (int)uVar19) {
      iVar20 = FUN_0952fcb8(lVar40,0);
      if (*(uint *)(lVar29 + 0x18) <= uVar15) goto LAB_092c3b00;
      lVar38 = *(long *)(lVar29 + _in_stack_00000160 + -0x124);
      if (lVar38 == 0) goto LAB_092c3994;
      iVar18 = FUN_0952fcb8(lVar38,0);
      if (iVar20 != iVar18) goto LAB_092c2c04;
    }
    if (!bVar1) {
      if ((*in_stack_00000178 != 0) && (lVar38 = *(long *)(*in_stack_00000178 + 0x38), lVar38 != 0))
      {
        if (uVar15 - 2 < *(uint *)(lVar38 + 0x18)) {
          lVar40 = *unaff_x19;
          uVar54 = *(undefined4 *)(lVar38 + _in_stack_00000160 + -0x334);
          fVar44 = *(float *)(lVar38 + _in_stack_00000160 + -0x310);
          goto LAB_092c2c30;
        }
        goto LAB_092c3b00;
      }
      goto LAB_092c3994;
    }
    bVar9 = true;
  }
  if ((*in_stack_00000178 == 0) || (lVar38 = *(long *)(*in_stack_00000178 + 0x38), lVar38 == 0))
  goto LAB_092c3994;
  uVar19 = (uint)*(undefined8 *)(lVar38 + 0x18);
  if (uVar19 <= uVar14) goto LAB_092c3b00;
  if ((*(byte *)(lVar38 + lVar21 * 0x178 + 0x18d) >> 1 & 1) == 0) {
    if (bVar13) {
LAB_092c32e0:
      (**(code **)(*unaff_x19 + 0x918))
                (in_stack_000000c0._4_4_,in_stack_000000d0._4_4_,uStack00000000000000b0,
                 fStack00000000000000b4,fStack00000000000000b8,uStack00000000000000b0);
    }
LAB_092c3314:
    bVar13 = false;
  }
  else {
    if ((((int)unaff_x19[0x6c] < (int)uVar14) || ((int)unaff_x19[0x6d] < (int)uVar2)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar38 + lVar21 * 0x178 + 0x60) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar13) {
      fStack0000000000000170 = in_stack_000000c0._4_4_;
FUN_092c30a4:
      if (uVar19 <= uVar14) goto LAB_092c3b00;
      lVar38 = lVar38 + lVar21 * 0x178;
      fVar57 = *(float *)(lVar38 + 0x120);
      fVar44 = *(float *)(lVar38 + 0x13c);
      fVar60 = *(float *)(lVar38 + 0x180);
      fVar66 = *(float *)(lVar38 + 0x188);
      uVar62 = *(undefined8 *)(lVar38 + 0x178);
      fVar69 = *(float *)(lVar38 + 0x184);
      uVar59 = *(undefined8 *)(lVar38 + 0x180);
      fVar58 = *(float *)(lVar38 + 0x114);
      fVar55 = *(float *)(lVar38 + 0x138);
      fVar45 = *(float *)(lVar38 + 0x140);
      fVar46 = *(float *)(lVar38 + 0x148);
      in_stack_00000188 = uVar62;
      fStack0000000000000190 = fVar60;
      fStack0000000000000194 = fVar69;
      in_stack_00000198 = fVar66;
      in_stack_000001a0 = in_stack_00001260;
      in_stack_000001a8 = in_stack_00001268;
      in_stack_000001b0 = in_stack_00001270;
      uVar23 = FUN_092df768(&stack0x000001a0,&stack0x00000188,0);
      lVar38 = *(long *)PTR_DAT_09fc9d48;
      if ((uVar23 & 1) == 0) {
        if (*(int *)(lVar38 + 0xe4) == 0) {
          thunk_FUN_044a54b4(lVar38);
        }
        bVar13 = (uVar17 & 1) == 0;
        if (bVar13) {
          fVar44 = fVar57;
        }
        fVar44 = fVar44 + (float)in_stack_00001268;
        if (bVar13) {
          fVar55 = fVar58;
        }
        fVar55 = fVar55 - (float)((ulong)in_stack_00001260 >> 0x20);
        in_stack_000000c0._4_4_ = fStack0000000000000170;
        if (fVar55 <= fStack0000000000000170) {
          in_stack_000000c0._4_4_ = fVar55;
        }
        if (fStack00000000000000b4 <= fVar44) {
          fStack00000000000000b4 = fVar44;
        }
        if (*(int *)(*(long *)PTR_DAT_09fc9d48 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        if (fVar46 - in_stack_00001270 <= in_stack_000000d0._4_4_) {
          in_stack_000000d0._4_4_ = fVar46 - in_stack_00001270;
        }
        fVar45 = fVar45 + (float)((ulong)in_stack_00001268 >> 0x20);
        if (fStack00000000000000b8 <= fVar45) {
          fStack00000000000000b8 = fVar45;
        }
      }
      else {
        if (*(int *)(lVar38 + 0xe4) == 0) {
          thunk_FUN_044a54b4(lVar38);
        }
        if ((uVar17 & 1) == 0) {
          fVar55 = fVar58;
        }
        in_stack_000000c0._4_4_ =
             (fVar55 + (fStack00000000000000b4 - (float)in_stack_00001268)) * 0.5;
        if (fVar46 <= in_stack_000000d0._4_4_) {
          in_stack_000000d0._4_4_ = fVar46;
        }
        if (fStack00000000000000b8 <= fVar45) {
          fStack00000000000000b8 = fVar45;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack0000000000000170,in_stack_000000d0._4_4_,uStack00000000000000b0,
                   in_stack_000000c0._4_4_,fStack00000000000000b8,uStack00000000000000b0);
        if ((*(int *)(*(long *)PTR_DAT_09fc9d48 + 0xe4) == 0) &&
           (thunk_FUN_044a54b4(), *(int *)(*(long *)PTR_DAT_09fc9d48 + 0xe4) == 0)) {
          thunk_FUN_044a54b4();
        }
        in_stack_000000d0._4_4_ = fVar46 - fVar66;
        if ((uVar17 & 1) == 0) {
          fVar44 = fVar57;
        }
        fStack00000000000000b4 = fVar44 + fVar60;
        uStack00000000000000b0 = 0;
        fStack00000000000000b8 = fVar45 + fVar69;
        in_stack_00001260 = uVar62;
        in_stack_00001268 = uVar59;
        in_stack_00001270 = fVar66;
      }
      if ((((*in_stack_00000180 == 1) || (uVar14 == uVar7)) || ((int)uVar8 <= (int)uVar14)) ||
         (!bVar1)) goto LAB_092c32e0;
      bVar13 = true;
    }
    else {
      if ((((uVar16 != 0xd) && ((uVar16 & 0xfffe) != 10)) && ((int)uVar14 <= (int)uVar8)) && (bVar1)
         ) {
        if (uVar14 == uVar8) {
          if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x88) + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar23 = FUN_079a44d8(uVar16,0);
          if ((uVar23 & 1) != 0) goto LAB_092c3314;
        }
        lVar40 = *plVar41;
        if (*(int *)(lVar40 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar40 = *plVar41;
        }
        if ((*in_stack_00000178 != 0) &&
           (lVar38 = *(long *)(*in_stack_00000178 + 0x38), lVar38 != 0)) {
          uVar19 = (uint)*(undefined8 *)(lVar38 + 0x18);
          if (uVar14 < uVar19) {
            lVar40 = *(long *)(lVar40 + 0xb8);
            lVar34 = lVar38 + lVar21 * 0x178;
            in_stack_00001268 = *(undefined8 *)(lVar34 + 0x180);
            in_stack_00001260 = *(undefined8 *)(lVar34 + 0x178);
            fStack0000000000000170 = *(float *)(lVar40 + 0x1720);
            in_stack_00001270 = *(float *)(lVar34 + 0x188);
            fStack00000000000000b4 = *(float *)(lVar40 + 0x1728);
            in_stack_000000d0._4_4_ = *(float *)(lVar40 + 0x1724);
            fStack00000000000000b8 = *(float *)(lVar40 + 0x172c);
            uStack00000000000000b0 = 0;
            goto FUN_092c30a4;
          }
          goto LAB_092c3b00;
        }
        goto LAB_092c3994;
      }
      bVar13 = false;
    }
  }
  uVar14 = *in_stack_00000180;
  iStack0000000000000110 = iStack0000000000000110 + 1;
  _in_stack_00000160 = _in_stack_00000160 + 0x178;
  bVar1 = (int)uVar14 <= (int)uVar15;
  uVar19 = uVar2;
  uVar15 = uVar15 + 1;
  if (bVar1) goto LAB_092c3540;
  goto LAB_092c15cc;
LAB_092bd7d4:
  unaff_w22 = uVar14 - 1;
  if (((int)uVar14 < 1) || (unaff_w22 == *(uint *)((long)unaff_x19 + 0x32c))) goto LAB_092bd914;
  if ((*in_stack_00000178 == 0) || (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0))
  goto LAB_092c3994;
  if (*(uint *)(lVar29 + 0x18) <= unaff_w22) goto LAB_092c3b00;
  lVar29 = *(long *)(lVar29 + (ulong)unaff_w22 * (unaff_x28 & 0xffffffff) + 0x30);
  if ((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x20), lVar29 == 0)) goto LAB_092c3994;
  uVar14 = FUN_095dd38c(lVar29,0);
  if ((*in_stack_00000158 == 0) ||
     (((*_fStack0000000000000170 == 0 ||
       (lVar29 = *(long *)(*_fStack0000000000000170 + 0x178), lVar29 == 0)) ||
      (lVar29 = *(long *)(lVar29 + 0x50), lVar29 == 0)))) goto LAB_092c3994;
  uVar22 = FUN_074f384c(lVar29,uVar14 | *(int *)(*in_stack_00000158 + 0x28) << 0x10,&stack0x00001120
                        ,*(undefined8 *)PTR_DAT_09fc9d10);
  uVar14 = unaff_w22;
  if ((uVar22 & 1) != 0) {
    if ((*in_stack_00000178 == 0) || (param_1 = *(long *)(*in_stack_00000178 + 0x38), param_1 == 0))
    goto LAB_092c3994;
    goto code_r0x092bd880;
  }
  goto LAB_092bd7d4;
LAB_092bd914:
  bVar13 = false;
  goto FUN_092bd918;
LAB_092bd76c:
  if ((*in_stack_00000178 == 0) || (lVar29 = *(long *)(*in_stack_00000178 + 0x38), lVar29 == 0))
  goto LAB_092c3994;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x32c)) goto LAB_092c3b00;
  FUN_095e15a0((in_stack_0000113c +
               (*(float *)(lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x32c) * unaff_x28 +
                          0x138) - *(float *)(unaff_x19 + 0xcb)) / unaff_s11) - in_stack_00001148,
               &stack0x00001230,0);
  fVar50 = in_stack_00001140;
  fVar53 = in_stack_0000114c;
  goto LAB_092bda1c;
LAB_092c3540:
  lVar29 = *in_stack_00000178;
  if (lVar29 != 0) {
    iVar20 = uVar2 + 1;
LAB_092c3558:
    puVar12 = PTR_DAT_09fc9d40;
    lVar38 = *(long *)(lVar29 + 0x60);
    if (lVar38 != 0) {
      if (*(uint *)(lVar38 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) {
LAB_092c3b00:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      *(int *)(lVar38 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x50 + 0x28) = iVar42;
      *(uint *)(lVar29 + 0x18) = uVar14;
      lVar38 = unaff_x19[0xd7];
      *(int *)(lVar29 + 0x2c) = iVar20;
      if ((int)uVar14 < 1 || iStack00000000000000c8 == 0) {
        iStack00000000000000c8 = 1;
      }
      *(int *)(lVar29 + 0x1c) = (int)lVar38;
      *(int *)(lVar29 + 0x24) = iStack00000000000000c8;
      *(int *)(lVar29 + 0x30) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
      if (((int)unaff_x19[0x6a] != 0xff) ||
         (uVar23 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar23 & 1) == 0)) {
LAB_092c0f78:
        if (*(int *)(*(long *)PTR_DAT_09f56030 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_092dd650();
        return;
      }
      lVar29 = unaff_x19[0xde];
      if (lVar29 != 0) {
        (**(code **)(lVar29 + 0x18))
                  (*(undefined8 *)(lVar29 + 0x40),*in_stack_00000178,*(undefined8 *)(lVar29 + 0x28))
        ;
      }
      if (*(int *)((long)unaff_x19 + 0x354) != 0) {
        if ((*in_stack_00000178 == 0) ||
           (lVar29 = *(long *)(*in_stack_00000178 + 0x60), lVar29 == 0)) goto LAB_092c3994;
        if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        if (*(int *)(lVar29 + 0x18) == 0) goto LAB_092c3b00;
        FUN_093292c0(lVar29 + 0x20,1,0);
      }
      if (unaff_x19[0x7b] != 0) {
        FUN_094fb3d8(unaff_x19[0x7b],0);
        if ((unaff_x19[0x74] != 0) && (lVar29 = *(long *)(unaff_x19[0x74] + 0x60), lVar29 != 0)) {
          if (*(int *)(lVar29 + 0x18) == 0) goto LAB_092c3b00;
          if (unaff_x19[0x7b] != 0) {
            FUN_094f6188(unaff_x19[0x7b],*(undefined8 *)(lVar29 + 0x30),0);
            if ((unaff_x19[0x74] != 0) && (lVar29 = *(long *)(unaff_x19[0x74] + 0x60), lVar29 != 0))
            {
              if (*(int *)(lVar29 + 0x18) == 0) goto LAB_092c3b00;
              if (unaff_x19[0x7b] != 0) {
                UnityEngine_TextCore_Text_TextGenerator__GenerateText
                          (unaff_x19[0x7b],0,*(undefined8 *)(lVar29 + 0x48),0);
                if ((unaff_x19[0x74] != 0) &&
                   (lVar29 = *(long *)(unaff_x19[0x74] + 0x60), lVar29 != 0)) {
                  if (*(int *)(lVar29 + 0x18) == 0) goto LAB_092c3b00;
                  if (unaff_x19[0x7b] != 0) {
                    FUN_094f6438(unaff_x19[0x7b],*(undefined8 *)(lVar29 + 0x50),0);
                    if ((unaff_x19[0x74] != 0) &&
                       (lVar29 = *(long *)(unaff_x19[0x74] + 0x60), lVar29 != 0)) {
                      if (*(int *)(lVar29 + 0x18) == 0) goto LAB_092c3b00;
                      if (unaff_x19[0x7b] != 0) {
                        UnityEngine_TextCore_Text_FontAsset__UpdateFallbacks
                                  (unaff_x19[0x7b],*(undefined8 *)(lVar29 + 0x58),0);
                        if (unaff_x19[0x7b] != 0) {
                          FUN_094fb008(unaff_x19[0x7b],0);
                          lVar29 = *in_stack_00000178;
                          if (lVar29 != 0) {
                            lVar40 = 0;
                            lVar38 = 0;
                            do {
                              uVar23 = lVar38 + 1;
                              if ((long)*(int *)(lVar29 + 0x34) <= (long)uVar23) goto LAB_092c0f78;
                              lVar29 = *(long *)(lVar29 + 0x60);
                              if (lVar29 == 0) break;
                              if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
                                thunk_FUN_044a54b4();
                              }
                              if (*(uint *)(lVar29 + 0x18) <= uVar23) goto LAB_092c3b00;
                              FUN_0932918c(lVar29 + lVar40 + 0x70,0);
                              lVar29 = unaff_x19[0xe4];
                              if (lVar29 == 0) break;
                              if (*(uint *)(lVar29 + 0x18) <= uVar23) goto LAB_092c3b00;
                              uVar59 = *(undefined8 *)(lVar29 + lVar38 * 8 + 0x28);
                              if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
                                thunk_FUN_044a54b4();
                              }
                              uVar22 = FUN_0952c404(uVar59,0,0);
                              if ((uVar22 & 1) == 0) {
                                if (*(int *)((long)unaff_x19 + 0x354) != 0) {
                                  if ((*in_stack_00000178 == 0) ||
                                     (lVar29 = *(long *)(*in_stack_00000178 + 0x60), lVar29 == 0))
                                  break;
                                  if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
                                    thunk_FUN_044a54b4();
                                  }
                                  if (*(uint *)(lVar29 + 0x18) <= uVar23) goto LAB_092c3b00;
                                  FUN_093292c0(lVar29 + lVar40 + 0x70,1,0);
                                }
                                lVar29 = unaff_x19[0xe4];
                                if (lVar29 == 0) break;
                                if (*(uint *)(lVar29 + 0x18) <= uVar23) goto LAB_092c3b00;
                                lVar29 = *(long *)(lVar29 + lVar38 * 8 + 0x28);
                                if (lVar29 == 0) break;
                                lVar29 = FUN_09332394(lVar29,0);
                                if ((*in_stack_00000178 == 0) ||
                                   (lVar21 = *(long *)(*in_stack_00000178 + 0x60), lVar21 == 0))
                                break;
                                if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_092c3b00;
                                if (lVar29 == 0) break;
                                FUN_094f6188(lVar29,*(undefined8 *)(lVar21 + lVar40 + 0x80),0);
                                lVar29 = unaff_x19[0xe4];
                                if (lVar29 == 0) break;
                                if (*(uint *)(lVar29 + 0x18) <= uVar23) goto LAB_092c3b00;
                                lVar29 = *(long *)(lVar29 + lVar38 * 8 + 0x28);
                                if (lVar29 == 0) break;
                                lVar29 = FUN_09332394(lVar29,0);
                                if ((*in_stack_00000178 == 0) ||
                                   (lVar21 = *(long *)(*in_stack_00000178 + 0x60), lVar21 == 0))
                                break;
                                if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_092c3b00;
                                if (lVar29 == 0) break;
                                UnityEngine_TextCore_Text_TextGenerator__GenerateText
                                          (lVar29,0,*(undefined8 *)(lVar21 + lVar40 + 0x98),0);
                                lVar29 = unaff_x19[0xe4];
                                if (lVar29 == 0) break;
                                if (*(uint *)(lVar29 + 0x18) <= uVar23) goto LAB_092c3b00;
                                lVar29 = *(long *)(lVar29 + lVar38 * 8 + 0x28);
                                if (lVar29 == 0) break;
                                lVar29 = FUN_09332394(lVar29,0);
                                if ((*in_stack_00000178 == 0) ||
                                   (lVar21 = *(long *)(*in_stack_00000178 + 0x60), lVar21 == 0))
                                break;
                                if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_092c3b00;
                                if (lVar29 == 0) break;
                                FUN_094f6438(lVar29,*(undefined8 *)(lVar21 + lVar40 + 0xa0),0);
                                lVar29 = unaff_x19[0xe4];
                                if (lVar29 == 0) break;
                                if (*(uint *)(lVar29 + 0x18) <= uVar23) goto LAB_092c3b00;
                                lVar29 = *(long *)(lVar29 + lVar38 * 8 + 0x28);
                                if (lVar29 == 0) break;
                                lVar29 = FUN_09332394(lVar29,0);
                                if ((*in_stack_00000178 == 0) ||
                                   (lVar21 = *(long *)(*in_stack_00000178 + 0x60), lVar21 == 0))
                                break;
                                if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_092c3b00;
                                if (lVar29 == 0) break;
                                UnityEngine_TextCore_Text_FontAsset__UpdateFallbacks
                                          (lVar29,*(undefined8 *)(lVar21 + lVar40 + 0xa8),0);
                                lVar29 = unaff_x19[0xe4];
                                if (lVar29 == 0) break;
                                if (*(uint *)(lVar29 + 0x18) <= uVar23) goto LAB_092c3b00;
                                lVar29 = *(long *)(lVar29 + lVar38 * 8 + 0x28);
                                if ((lVar29 == 0) || (lVar29 = FUN_09332394(lVar29,0), lVar29 == 0))
                                break;
                                FUN_094fb008(lVar29,0);
                              }
                              lVar29 = *in_stack_00000178;
                              lVar38 = lVar38 + 1;
                              lVar40 = lVar40 + 0x50;
                            } while (lVar29 != 0);
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


