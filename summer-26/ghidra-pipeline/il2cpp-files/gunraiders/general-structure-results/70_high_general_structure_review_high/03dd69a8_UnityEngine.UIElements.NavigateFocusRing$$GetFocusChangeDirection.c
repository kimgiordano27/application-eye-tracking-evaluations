/*
FUNCTION_NAME: UnityEngine.UIElements.NavigateFocusRing$$GetFocusChangeDirection
ENTRY_POINT: 03dd69a8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UnityEngine_UIElements_NavigateFocusRing__GetFocusChangeDirection(long param_1)

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
  uint uVar40;
  long *unaff_x22;
  undefined4 unaff_w23;
  uint uVar41;
  long *unaff_x24;
  long lVar42;
  long unaff_x25;
  undefined8 uVar43;
  ulong unaff_x26;
  char *unaff_x27;
  int unaff_w28;
  long unaff_x29;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  float fVar59;
  undefined4 uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined8 uVar64;
  float unaff_s10;
  float fVar65;
  float fVar66;
  float unaff_s13;
  float fVar67;
  float fVar68;
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
  
code_r0x03dd69a8:
  fVar44 = (float)FUN_03dc0e30(param_1 + 0xb0,0);
  fVar51 = in_stack_00000148;
  if (*(char *)(unaff_x25 + 0xbd) != '\0') {
    fVar51 = 1.0;
  }
  if (*unaff_x24 != 0) {
    fVar45 = (float)FUN_03dc0e50(*unaff_x24 + 0xb0,0);
    if (unaff_x22[4] != 0) {
      FUN_03dc133c(&stack0x00001290,unaff_x22[4],0);
      fVar46 = (float)FUN_03dc116c(&stack0x000011b0,0);
      if (unaff_x22[4] != 0) {
        fVar47 = *(float *)((long)unaff_x22 + 0x2c);
        fVar48 = (float)FUN_03dc1378(unaff_x22[4],0);
        if (*unaff_x24 != 0) {
          fStack0000000000000178 = (float)FUN_03dc0e50(*unaff_x24 + 0xb0,0);
          if (*unaff_x24 != 0) {
            fVar49 = (float)FUN_03dc0e80(*unaff_x24 + 0xb0,0);
            if (*unaff_x24 != 0) {
              fVar61 = *(float *)(unaff_x19 + 0xf0);
              fVar50 = (float)FUN_03dc0e30(*unaff_x24 + 0xb0,0);
              if (*(long *)(unaff_x19 + 0x68) != 0) {
                fVar50 = unaff_s10 * fVar49 * fVar61 * fVar50;
                fVar51 = (unaff_s13 / (float)unaff_w28) * fVar44 * fVar51;
                fVar44 = fVar51 * (fVar45 / fVar46) * fVar47 * fVar48;
                fVar51 = fVar51 / fVar44;
                fStack0000000000000178 = fVar51 * fStack0000000000000178;
                fVar45 = (float)UnityEngine_UIElements_EventDispatcherGate__GetHashCode
                                          (*(long *)(unaff_x19 + 0x68) + 0xb0,0);
                fVar51 = fVar51 * fVar45;
LAB_03dd6af0:
                _fStack0000000000000168 = CONCAT44(uStack000000000000016c,fVar51);
                *(long **)(unaff_x19 + 0x1588) = unaff_x22;
                lVar26 = *in_stack_000001d8;
                if (lVar26 != 0) {
                  uVar14 = *(uint *)(unaff_x19 + 0x324);
                  if (uVar14 < *(uint *)(lVar26 + 0x18)) {
                    lVar31 = lVar26 + (long)(int)uVar14 * unaff_x26;
                    *(undefined1 *)(lVar31 + 0x28) = 2;
                    *(float *)(lVar31 + 0x16c) = fVar44;
                    fVar51 = 0.0;
                    *(undefined8 *)(lVar31 + 0x48) = *(undefined8 *)(unaff_x19 + 0xe0);
                    *(undefined8 *)(lVar31 + 0x40) = *(undefined8 *)(unaff_x19 + 0x68);
                    *(undefined4 *)(lVar31 + 0x60) = *(undefined4 *)(unaff_x19 + 0x78);
                    *(undefined4 *)(unaff_x19 + 0x78) = unaff_w23;
LAB_03dd6b58:
                    fVar45 = fVar44;
                    if (in_stack_0000128c == 3 || in_stack_0000128c == 0xad) {
                      fVar45 = 0.0;
                    }
FUN_03dd6b70:
                    if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_03ddcab0;
                    iVar13 = (int)unaff_x26;
                    lVar26 = lVar26 + (long)(int)uVar14 * (long)iVar13;
                    *(short *)(lVar26 + 0x20) = (short)in_stack_0000128c;
                    *(undefined4 *)(lVar26 + 0x68) = *(undefined4 *)(unaff_x19 + 0xf4);
                    *(undefined4 *)(lVar26 + 0x170) = *(undefined4 *)(unaff_x19 + 0x1ac);
                    lVar26 = *in_stack_000001d8;
                    if (lVar26 == 0) goto LAB_03ddcaac;
                    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_03ddcab0;
                    *(undefined4 *)
                     (lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x26 + 0x174) =
                         *(undefined4 *)(unaff_x19 + 0x1b0);
                    lVar26 = *in_stack_000001d8;
                    if (lVar26 == 0) goto LAB_03ddcaac;
                    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_03ddcab0;
                    *(undefined4 *)
                     (lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x26 + 0x17c) =
                         *(undefined4 *)(unaff_x19 + 0x1b4);
                    lVar26 = *in_stack_000001d8;
                    if (lVar26 == 0) goto LAB_03ddcaac;
                    uVar64 = in_stack_00000108[1];
                    uVar43 = *in_stack_00000108;
                    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_03ddcab0;
                    lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x26;
                    *(undefined4 *)(lVar26 + 0x198) = *(undefined4 *)(in_stack_00000108 + 2);
                    *(undefined8 *)(lVar26 + 400) = uVar64;
                    *(undefined8 *)(lVar26 + 0x188) = uVar43;
                    lVar26 = *in_stack_000001d8;
                    if (lVar26 == 0) goto LAB_03ddcaac;
                    if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001c8) goto LAB_03ddcab0;
                    lVar26 = lVar26 + (long)(int)*in_stack_000001c8 * unaff_x26;
                    lVar31 = *(long *)(lVar26 + 0x38);
                    *(undefined4 *)(lVar26 + 0x19c) = *(undefined4 *)(unaff_x19 + 0x124);
                    if ((lVar31 == 0) &&
                       ((*(long *)(unaff_x19 + 0x1588) == 0 ||
                        (lVar31 = *(long *)(*(long *)(unaff_x19 + 0x1588) + 0x20), lVar31 == 0))))
                    goto LAB_03ddcaac;
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
                    uVar53 = 0;
                    uVar52 = *(undefined4 *)(unaff_x25 + 0xc0);
                    _fStack0000000000000180 = CONCAT44(fVar50,uVar52);
                    if (*(char *)(unaff_x25 + 0xb4) != '\0') {
                      if (*(long *)(unaff_x19 + 0x1588) == 0) goto LAB_03ddcaac;
                      uVar15 = *in_stack_000001c8;
                      uVar29 = *(uint *)(*(long *)(unaff_x19 + 0x1588) + 0x28);
                      if ((int)uVar15 < (int)uStack00000000000000e4) {
                        lVar26 = *in_stack_000001d8;
                        if (lVar26 == 0) goto LAB_03ddcaac;
                        if (*(uint *)(lVar26 + 0x18) <= uVar15 + 1) goto LAB_03ddcab0;
                        lVar26 = *(long *)(lVar26 + (long)(int)(uVar15 + 1) * (long)iVar13 + 0x30);
                        if ((((lVar26 == 0) || (*unaff_x24 == 0)) ||
                            (lVar31 = *(long *)(*unaff_x24 + 0x170), lVar31 == 0)) ||
                           (lVar31 = *(long *)(lVar31 + 0x40), lVar31 == 0)) goto LAB_03ddcaac;
                        uVar19 = FUN_0295c2c8(lVar31,uVar29 | *(int *)(lVar26 + 0x28) << 0x10,
                                              &stack0x00001180,*(undefined8 *)StringLiteral_8866);
                        if ((uVar19 & 1) != 0) {
                          FUN_03dc3568(&stack0x00001290,&stack0x00001180,0);
                          uVar53 = FUN_03dc33cc(&stack0x00001160,0);
                          uVar19 = FUN_03dc3590(&stack0x00001180,0);
                          if ((uVar19 & 0x100) != 0) {
                            uVar52 = 0;
                          }
                          _fStack0000000000000180 = CONCAT44(fVar50,uVar52);
                        }
                        uVar15 = *in_stack_000001c8;
                      }
                      if (0 < (int)uVar15) {
                        lVar26 = *in_stack_000001d8;
                        if (lVar26 == 0) goto LAB_03ddcaac;
                        if (*(uint *)(lVar26 + 0x18) <= uVar15 - 1) goto LAB_03ddcab0;
                        lVar26 = *(long *)(lVar26 + (ulong)(uVar15 - 1) * (unaff_x26 & 0xffffffff) +
                                          0x30);
                        if (((lVar26 == 0) || (*unaff_x24 == 0)) ||
                           ((lVar31 = *(long *)(*unaff_x24 + 0x170), lVar31 == 0 ||
                            (lVar31 = *(long *)(lVar31 + 0x40), lVar31 == 0)))) goto LAB_03ddcaac;
                        uVar19 = FUN_0295c2c8(lVar31,*(uint *)(lVar26 + 0x28) | uVar29 << 0x10,
                                              &stack0x00001180,*(undefined8 *)StringLiteral_8866);
                        if ((uVar19 & 1) != 0) {
                          FUN_03dc357c(&stack0x00001290,&stack0x00001180,0);
                          FUN_03dc33cc(&stack0x00001160,0);
                          FUN_03dc322c(uVar53,0);
                          uVar19 = FUN_03dc3590(&stack0x00001180,0);
                          uVar52 = fStack0000000000000180;
                          if ((uVar19 & 0x100) != 0) {
                            uVar52 = 0;
                          }
                          _fStack0000000000000180 = CONCAT44(fStack0000000000000184,uVar52);
                        }
                      }
                    }
                    lVar26 = *in_stack_000001d8;
                    if (lVar26 == 0) goto LAB_03ddcaac;
                    uVar15 = *in_stack_000001c8;
                    uVar52 = FUN_03dc321c(&stack0x000011d0,0);
                    if (*(uint *)(lVar26 + 0x18) <= uVar15) goto LAB_03ddcab0;
                    *(undefined4 *)(lVar26 + (long)(int)uVar15 * unaff_x26 + 0x160) = uVar52;
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
                              if ((lVar26 == 0) || (lVar26 = FUN_03dd17e4(lVar26,0), lVar26 == 0))
                              goto LAB_03ddcaac;
                              uVar15 = FUN_03dc132c(lVar26,0);
                              if (*(long *)(unaff_x19 + 0x1588) == 0) goto LAB_03ddcaac;
                              iVar17 = FUN_03dc4f30(*(long *)(unaff_x19 + 0x1588),0);
                              if (((*unaff_x24 == 0) ||
                                  (lVar26 = FUN_03dc3f8c(*unaff_x24,0), lVar26 == 0)) ||
                                 (*(long *)(lVar26 + 0x48) == 0)) goto LAB_03ddcaac;
                              uVar21 = FUN_0296238c(*(long *)(lVar26 + 0x48),uVar15 | iVar17 << 0x10
                                                    ,&stack0x00001108,
                                                    *(undefined8 *)StringLiteral_8868);
                              unaff_x25 = in_stack_000001d0;
                              if ((uVar21 & 1) == 0) goto LAB_03dd7478;
                              lVar26 = *in_stack_000001d8;
                              if (lVar26 == 0) goto LAB_03ddcaac;
                              if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4))
                              goto LAB_03ddcab0;
                              fVar46 = *(float *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x19c4)
                                                           * unaff_x26 + 0x148);
                              fVar49 = *(float *)(unaff_x19 + 0x2f4);
                              FUN_03dc3750(&stack0x00001108,0);
                              fVar47 = (float)FUN_03dc3728(&stack0x00001140,0);
                              FUN_03dc3760(&stack0x00001108,0);
                              fVar48 = (float)FUN_03dc3738(&stack0x00001138,0);
                              FUN_03dc3204(((fVar46 - fVar49) / fVar45 + fVar47) - fVar48,
                                           &stack0x000011d0,0);
                              FUN_03dc3750(&stack0x00001108,0);
                              fVar46 = (float)FUN_03dc3730(&stack0x00001140,0);
                              puVar20 = &stack0x00001108;
                              goto UnityEngine_UIElements_NavigateFocusRing__IsNavigable;
                            }
                            lVar26 = *in_stack_000001d8;
                            if (lVar26 == 0) goto LAB_03ddcaac;
                            if (*(uint *)(lVar26 + 0x18) <= uVar29) goto LAB_03ddcab0;
                            lVar26 = *(long *)(lVar26 + (ulong)uVar29 * (unaff_x26 & 0xffffffff) +
                                              0x30);
                            if ((lVar26 == 0) || (lVar26 = FUN_03dd17e4(lVar26,0), lVar26 == 0))
                            goto LAB_03ddcaac;
                            uVar15 = FUN_03dc132c(lVar26,0);
                            if (*(long *)(unaff_x19 + 0x1588) == 0) goto LAB_03ddcaac;
                            iVar17 = FUN_03dc4f30(*(long *)(unaff_x19 + 0x1588),0);
                            if (((*unaff_x24 == 0) ||
                                (lVar26 = FUN_03dc3f8c(*unaff_x24,0), lVar26 == 0)) ||
                               (*(long *)(lVar26 + 0x50) == 0)) goto LAB_03ddcaac;
                            uVar21 = FUN_02965498(*(long *)(lVar26 + 0x50),uVar15 | iVar17 << 0x10,
                                                  &stack0x00001120,*(undefined8 *)StringLiteral_8867
                                                 );
                            unaff_x25 = in_stack_000001d0;
                            uVar15 = uVar29;
                          } while ((uVar21 & 1) == 0);
                          lVar26 = *in_stack_000001d8;
                          if (lVar26 == 0) goto LAB_03ddcaac;
                          if (*(uint *)(lVar26 + 0x18) <= uVar29) goto LAB_03ddcab0;
                          fVar49 = *(float *)(unaff_x19 + 0x2e0);
                          fVar50 = *(float *)(unaff_x19 + 0x180);
                          lVar26 = lVar26 + uVar29 * unaff_x26;
                          fVar46 = *(float *)(unaff_x19 + 0x2f4);
                          fVar61 = *(float *)(lVar26 + 0x148);
                          fVar54 = *(float *)(lVar26 + 0x150);
                          FUN_03dc3770(&stack0x00001120,0);
                          fVar47 = (float)FUN_03dc3728(&stack0x00001140,0);
                          FUN_03dc3780(&stack0x00001120,0);
                          fVar48 = (float)FUN_03dc3738(&stack0x00001138,0);
                          FUN_03dc3204(((fVar61 - fVar46) / fVar45 + fVar47) - fVar48,
                                       &stack0x000011d0,0);
                          FUN_03dc3770(&stack0x00001120,0);
                          fVar47 = (float)FUN_03dc3730(&stack0x00001140,0);
                          FUN_03dc3780(&stack0x00001120,0);
                          fVar46 = (float)FUN_03dc3740(&stack0x00001138,0);
                          fVar46 = ((fVar54 - ((fStack0000000000000184 - fVar49) + fVar50)) / fVar45
                                   + fVar47) - fVar46;
                        }
                        else {
                          lVar26 = *in_stack_000001d8;
                          if (lVar26 == 0) goto LAB_03ddcaac;
                          if (*(uint *)(lVar26 + 0x18) <= uVar29) goto LAB_03ddcab0;
                          lVar26 = *(long *)(lVar26 + (long)(int)uVar29 * unaff_x26 + 0x30);
                          if ((lVar26 == 0) || (lVar26 = FUN_03dd17e4(lVar26,0), lVar26 == 0))
                          goto LAB_03ddcaac;
                          uVar15 = FUN_03dc132c(lVar26,0);
                          if (*(long *)(unaff_x19 + 0x1588) == 0) goto LAB_03ddcaac;
                          iVar17 = FUN_03dc4f30(*(long *)(unaff_x19 + 0x1588),0);
                          if (((*unaff_x24 == 0) ||
                              (lVar26 = FUN_03dc3f8c(*unaff_x24,0), lVar26 == 0)) ||
                             (*(long *)(lVar26 + 0x48) == 0)) goto LAB_03ddcaac;
                          uVar21 = FUN_0296238c(*(long *)(lVar26 + 0x48),uVar15 | iVar17 << 0x10,
                                                &stack0x00001148,*(undefined8 *)StringLiteral_8868);
                          unaff_x25 = in_stack_000001d0;
                          if ((uVar21 & 1) == 0) goto LAB_03dd7478;
                          lVar26 = *in_stack_000001d8;
                          if (lVar26 == 0) goto LAB_03ddcaac;
                          if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4))
                          goto LAB_03ddcab0;
                          fVar46 = *(float *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) *
                                                       unaff_x26 + 0x148);
                          fVar49 = *(float *)(unaff_x19 + 0x2f4);
                          FUN_03dc3750(&stack0x00001148,0);
                          fVar47 = (float)FUN_03dc3728(&stack0x00001140,0);
                          FUN_03dc3760(&stack0x00001148,0);
                          fVar48 = (float)FUN_03dc3738(&stack0x00001138,0);
                          FUN_03dc3204(((fVar46 - fVar49) / fVar45 + fVar47) - fVar48,
                                       &stack0x000011d0,0);
                          FUN_03dc3750(&stack0x00001148,0);
                          fVar46 = (float)FUN_03dc3730(&stack0x00001140,0);
                          puVar20 = &stack0x00001148;
UnityEngine_UIElements_NavigateFocusRing__IsNavigable:
                          FUN_03dc3760(puVar20,0);
                          fVar47 = (float)FUN_03dc3740(&stack0x00001138,0);
                          fVar46 = fVar46 - fVar47;
                        }
                        FUN_03dc3214(fVar46,&stack0x000011d0,0);
                        _fStack0000000000000180 = (ulong)(uint)fStack0000000000000184 << 0x20;
                        unaff_x25 = in_stack_000001d0;
                      }
                    }
                    else {
                      *(uint *)(unaff_x19 + 0x19c4) = uVar15;
                    }
LAB_03dd7478:
                    fVar46 = (float)FUN_03dc320c(&stack0x000011d0,0);
                    fVar47 = (float)FUN_03dc320c(&stack0x000011d0,0);
                    if (*(char *)(unaff_x25 + 0xb6) != '\0') {
                      fVar49 = *(float *)(unaff_x19 + 0x2f4);
                      fVar48 = (float)FUN_03dc1184(&stack0x000011e0,0);
                      fVar49 = fVar49 - fVar45 * fVar48 * (1.0 - *(float *)(unaff_x19 + 0x1594));
                      *(float *)(unaff_x19 + 0x2f4) = fVar49;
                      if ((uVar14 != 0) || (in_stack_0000128c == 0x200b)) {
                        *(float *)(unaff_x19 + 0x2f4) =
                             fVar49 - in_stack_00000150 * *(float *)(unaff_x25 + 0xc4);
                      }
                    }
                    fVar48 = *(float *)(unaff_x19 + 0x2f0);
                    if (fVar48 == 0.0) {
                      fVar48 = 0.0;
                    }
                    else {
                      fVar49 = (float)FUN_03dc1164(&stack0x000011e0,0);
                      fVar50 = (float)FUN_03dc1174(&stack0x000011e0,0);
                      fVar48 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                               (fVar48 * 0.5 - fVar45 * (fVar49 * 0.5 + fVar50));
                      *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2f4) + fVar48;
                    }
                    uVar15 = 0;
                    if ((unaff_w20 == 0) && (*unaff_x27 == '\x01')) {
                      uVar15 = *(uint *)(unaff_x19 + 0x124) & 1;
                    }
                    uVar43 = *(undefined8 *)(unaff_x19 + 0x70);
                    if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    uVar21 = FUN_03d4f3bc(uVar43,0,0);
                    puVar6 = StringLiteral_8589;
                    if (uVar15 == 0) {
                      fStack0000000000000140 = 0.0;
                      if ((uVar21 & 1) != 0) {
                        lVar26 = *(long *)(unaff_x19 + 0x70);
                        if (*(int *)(*(long *)StringLiteral_8589 + 0xe0) == 0) {
                          thunk_FUN_01c1d1e8();
                        }
                        if (lVar26 == 0) goto LAB_03ddcaac;
                        uVar21 = FUN_03d18b4c(lVar26,*(undefined4 *)
                                                      (*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
                        if ((uVar21 & 1) != 0) {
                          lVar26 = *(long *)(unaff_x19 + 0x70);
                          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                            thunk_FUN_01c1d1e8();
                          }
                          if (lVar26 == 0) goto LAB_03ddcaac;
                          uVar21 = FUN_03d18b4c(lVar26,*(undefined4 *)
                                                        (*(long *)(*(long *)puVar6 + 0xb8) + 0xe4),0
                                               );
                          if ((uVar21 & 1) != 0) {
                            lVar26 = *(long *)(unaff_x19 + 0x70);
                            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                              thunk_FUN_01c1d1e8();
                            }
                            if (lVar26 != 0) {
                              fVar49 = (float)FUN_03d1cd14(lVar26,*(undefined4 *)
                                                                   (*(long *)(*(long *)puVar6 + 0xb8
                                                                             ) + 0x6c),0);
                              if ((*unaff_x24 != 0) && (*(long *)(unaff_x19 + 0x70) != 0)) {
                                fVar61 = *(float *)(*unaff_x24 + 0x188);
                                fVar50 = (float)FUN_03d1cd14(*(long *)(unaff_x19 + 0x70),
                                                             *(undefined4 *)
                                                              (*(long *)(*(long *)puVar6 + 0xb8) +
                                                              0xe4),0);
                                fVar50 = fVar50 * fVar49 * fVar61 * 0.25;
                                if (fVar49 < fVar51 + fVar50) {
                                  fVar51 = fVar49 - fVar50;
                                }
                                goto LAB_03dd77cc;
                              }
                            }
                            goto LAB_03ddcaac;
                          }
                        }
                      }
                      fVar50 = 0.0;
                    }
                    else {
                      fVar50 = 0.0;
                      if ((uVar21 & 1) != 0) {
                        lVar26 = *(long *)(unaff_x19 + 0x70);
                        if (*(int *)(*(long *)StringLiteral_8589 + 0xe0) == 0) {
                          thunk_FUN_01c1d1e8();
                        }
                        if (lVar26 == 0) goto LAB_03ddcaac;
                        uVar21 = FUN_03d18b4c(lVar26,*(undefined4 *)
                                                      (*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
                        if ((uVar21 & 1) != 0) {
                          lVar26 = *(long *)(unaff_x19 + 0x70);
                          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                            thunk_FUN_01c1d1e8();
                          }
                          if (lVar26 == 0) goto LAB_03ddcaac;
                          fVar49 = (float)FUN_03d1cd14(lVar26,*(undefined4 *)
                                                               (*(long *)(*(long *)puVar6 + 0xb8) +
                                                               0x6c),0);
                          if (*unaff_x24 == 0) goto LAB_03ddcaac;
                          fVar61 = (float)FUN_03dc3fdc(*unaff_x24,0);
                          if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_03ddcaac;
                          fVar50 = (float)FUN_03d1cd14(*(long *)(unaff_x19 + 0x70),
                                                       *(undefined4 *)
                                                        (*(long *)(*(long *)puVar6 + 0xb8) + 0xe4),0
                                                      );
                          fVar50 = fVar49 * fVar61 * 0.25 * fVar50;
                          if (fVar49 < fVar51 + fVar50) {
                            fVar51 = fVar49 - fVar50;
                          }
                        }
                      }
                      if (*unaff_x24 == 0) goto LAB_03ddcaac;
                      fStack0000000000000140 = (float)FUN_03dc3fec(*unaff_x24,0);
                    }
LAB_03dd77cc:
                    fVar49 = *(float *)(unaff_x19 + 0x2f4);
                    fVar61 = (float)FUN_03dc1174(&stack0x000011e0,0);
                    fVar65 = *(float *)(unaff_x19 + 0x19a8);
                    fVar54 = (float)FUN_03dc31fc(&stack0x000011d0,0);
                    fVar49 = fVar49 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                      fVar45 * (fVar54 + ((fVar61 * fVar65 - fVar51) - fVar50));
                    fVar61 = (float)FUN_03dc117c(&stack0x000011e0,0);
                    fVar54 = (float)FUN_03dc320c(&stack0x000011d0,0);
                    fVar65 = *(float *)(unaff_x19 + 0x180) +
                             ((fStack0000000000000184 + fVar45 * (fVar51 + fVar61 + fVar54)) -
                             *(float *)(unaff_x19 + 0x2e0));
                    fVar61 = (float)FUN_03dc116c(&stack0x000011e0,0);
                    fStack000000000000017c = fVar65 - fVar45 * (fVar51 + fVar51 + fVar61);
                    fVar61 = (float)FUN_03dc1164(&stack0x000011e0,0);
                    fVar61 = fVar49 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                      fVar45 * (fVar50 + fVar50 +
                                               fVar51 + fVar51 +
                                               fVar61 * *(float *)(unaff_x19 + 0x19a8));
                    fStack00000000000001b4 = fVar49;
                    fVar54 = fVar61;
                    if (((unaff_w20 == 0) && (*unaff_x27 == '\x01')) &&
                       ((*(byte *)(unaff_x19 + 0x124) >> 1 & 1) != 0)) {
                      if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03ddcaac;
                      iVar17 = *(int *)(unaff_x19 + 0x19a4);
                      fVar56 = (float)FUN_03dc0e60(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
                      if (*unaff_x24 == 0) goto LAB_03ddcaac;
                      fVar59 = (float)FUN_03dc0e80(*unaff_x24 + 0xb0,0);
                      if (*unaff_x24 == 0) goto LAB_03ddcaac;
                      fVar55 = *(float *)(unaff_x19 + 0xf0);
                      fVar63 = *(float *)(unaff_x19 + 0x180);
                      fVar54 = (float)iVar17 * fStack00000000000000b0;
                      fVar68 = (float)FUN_03dc0e30(*unaff_x24 + 0xb0,0);
                      fVar68 = fVar68 * fVar55 * (fVar56 - (fVar59 + fVar63)) * 0.5;
                      fVar56 = (float)FUN_03dc117c(&stack0x000011e0,0);
                      fVar55 = fVar54 * fVar45 * ((fVar50 + fVar51 + fVar56) - fVar68);
                      fVar56 = (float)FUN_03dc117c(&stack0x000011e0,0);
                      fVar59 = (float)FUN_03dc116c(&stack0x000011e0,0);
                      fVar65 = fVar65 + 0.0;
                      fStack000000000000017c = fStack000000000000017c + 0.0;
                      fVar54 = fVar54 * fVar45 * ((((fVar56 - fVar59) - fVar51) - fVar50) - fVar68);
                      fStack00000000000001b4 = fVar49 + fVar54;
                      fVar54 = fVar61 + fVar54;
                      fVar49 = fVar49 + fVar55;
                      fVar61 = fVar61 + fVar55;
                    }
                    uVar43 = *in_stack_00000100;
                    uVar64 = *_fStack00000000000000f8;
                    if (DAT_0452d6ea == '\0') {
                      FUN_01c5d288(PTR_DAT_042301a0);
                      DAT_0452d6ea = '\x01';
                    }
                    uVar57 = **(undefined8 **)(*(long *)PTR_DAT_042301a0 + 0xb8);
                    uVar58 = (*(undefined8 **)(*(long *)PTR_DAT_042301a0 + 0xb8))[1];
                    fVar56 = 0.0;
                    if (DAT_00b93268 <
                        (float)((ulong)uVar64 >> 0x20) * (float)((ulong)uVar58 >> 0x20) +
                        (float)uVar64 * (float)uVar58 +
                        (float)uVar43 * (float)uVar57 +
                        (float)((ulong)uVar43 >> 0x20) * (float)((ulong)uVar57 >> 0x20)) {
                      fVar62 = 0.0;
                      fVar63 = 0.0;
                      fVar55 = 0.0;
                      fVar59 = fVar65;
                      fVar68 = fStack000000000000017c;
                    }
                    else {
                      FUN_03d3bc60(&stack0x00001290,*(undefined4 *)(unaff_x19 + 0x19b4),
                                   *(undefined4 *)(unaff_x19 + 0x19b8),
                                   *(undefined4 *)(unaff_x19 + 0x19bc),
                                   *(undefined4 *)(unaff_x19 + 0x19c0),0);
                      fVar66 = (fVar61 + fStack00000000000001b4) * 0.5;
                      fVar67 = (fStack000000000000017c + fVar65) * 0.5;
                      fVar65 = fVar65 - fVar67;
                      fVar55 = 0.0;
                      fVar59 = fVar65;
                      fVar49 = (float)FUN_03d3bb60(fVar49 - fVar66,&stack0x000010c0,0);
                      fVar49 = fVar66 + fVar49;
                      fVar55 = fVar55 + 0.0;
                      fVar68 = fStack000000000000017c - fVar67;
                      fVar63 = 0.0;
                      fStack000000000000017c = fVar68;
                      fStack00000000000001b4 =
                           (float)FUN_03d3bb60(fStack00000000000001b4 - fVar66,&stack0x000010c0,0);
                      fStack00000000000001b4 = fVar66 + fStack00000000000001b4;
                      fStack000000000000017c = fVar67 + fStack000000000000017c;
                      fVar63 = fVar63 + 0.0;
                      fVar62 = 0.0;
                      fVar61 = (float)FUN_03d3bb60(fVar61 - fVar66,&stack0x000010c0,0);
                      fVar61 = fVar66 + fVar61;
                      fVar65 = fVar67 + fVar65;
                      fVar62 = fVar62 + 0.0;
                      fVar56 = 0.0;
                      fVar54 = (float)FUN_03d3bb60(fVar54 - fVar66,&stack0x000010c0,0);
                      fVar54 = fVar66 + fVar54;
                      fVar56 = fVar56 + 0.0;
                      fVar59 = fVar67 + fVar59;
                      fVar68 = fVar67 + fVar68;
                    }
                    lVar26 = *in_stack_000001d8;
                    if (lVar26 == 0) goto LAB_03ddcaac;
                    if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001c8) goto LAB_03ddcab0;
                    lVar26 = lVar26 + (long)(int)*in_stack_000001c8 * unaff_x26;
                    *(float *)(lVar26 + 0x128) = fStack000000000000017c;
                    *(float *)(lVar26 + 300) = fVar63;
                    *(float *)(lVar26 + 0x124) = fStack00000000000001b4;
                    lVar26 = *in_stack_000001d8;
                    if (lVar26 == 0) goto LAB_03ddcaac;
                    if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001c8) goto LAB_03ddcab0;
                    lVar26 = lVar26 + (long)(int)*in_stack_000001c8 * unaff_x26;
                    *(float *)(lVar26 + 0x118) = fVar49;
                    *(float *)(lVar26 + 0x11c) = fVar59;
                    *(float *)(lVar26 + 0x120) = fVar55;
                    lVar26 = *in_stack_000001d8;
                    if (lVar26 == 0) goto LAB_03ddcaac;
                    if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001c8) goto LAB_03ddcab0;
                    lVar26 = lVar26 + (long)(int)*in_stack_000001c8 * unaff_x26;
                    *(float *)(lVar26 + 0x130) = fVar61;
                    *(float *)(lVar26 + 0x134) = fVar65;
                    *(float *)(lVar26 + 0x138) = fVar62;
                    lVar26 = *in_stack_000001d8;
                    if (lVar26 == 0) goto LAB_03ddcaac;
                    if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001c8) goto LAB_03ddcab0;
                    lVar26 = lVar26 + (long)(int)*in_stack_000001c8 * unaff_x26;
                    *(float *)(lVar26 + 0x13c) = fVar54;
                    *(float *)(lVar26 + 0x140) = fVar68;
                    *(float *)(lVar26 + 0x144) = fVar56;
                    lVar26 = *in_stack_000001d8;
                    if (lVar26 == 0) goto LAB_03ddcaac;
                    uVar15 = *in_stack_000001c8;
                    fVar54 = *(float *)(unaff_x19 + 0x2f4);
                    fVar49 = (float)FUN_03dc31fc(&stack0x000011d0,0);
                    if (*(uint *)(lVar26 + 0x18) <= uVar15) goto LAB_03ddcab0;
                    *(float *)(lVar26 + (long)(int)uVar15 * unaff_x26 + 0x148) =
                         fVar54 + fVar45 * fVar49;
                    lVar26 = *in_stack_000001d8;
                    if (lVar26 == 0) goto LAB_03ddcaac;
                    uVar15 = *in_stack_000001c8;
                    fVar65 = *(float *)(unaff_x19 + 0x2e0);
                    fVar54 = *(float *)(unaff_x19 + 0x180);
                    fVar49 = (float)FUN_03dc320c(&stack0x000011d0,0);
                    if (*(uint *)(lVar26 + 0x18) <= uVar15) goto LAB_03ddcab0;
                    *(float *)(lVar26 + (long)(int)uVar15 * unaff_x26 + 0x150) =
                         (fStack0000000000000184 - fVar65) + fVar54 + fVar45 * fVar49;
                    lVar26 = *in_stack_000001d8;
                    if (lVar26 == 0) goto LAB_03ddcaac;
                    uVar15 = *in_stack_000001c8;
                    lVar31 = (long)(int)uVar15;
                    if (*(uint *)(lVar26 + 0x18) <= uVar15) goto LAB_03ddcab0;
                    *(float *)(lVar26 + lVar31 * unaff_x26 + 0x168) =
                         (fVar61 - fStack00000000000001b4) / (fVar59 - fStack000000000000017c);
                    fVar46 = fVar45 * (fStack0000000000000178 + fVar46);
                    if (*unaff_x27 == '\x01') {
                      fVar46 = fVar46 / fStack0000000000000174;
                      fVar47 = (fVar45 * (fStack0000000000000168 + fVar47)) / fStack0000000000000174
                      ;
                    }
                    else {
                      fVar47 = fVar45 * (fStack0000000000000168 + fVar47);
                    }
                    uVar29 = *(uint *)(unaff_x19 + 0x328);
                    fVar49 = *(float *)(unaff_x19 + 0x180);
                    bVar7 = uVar15 == uVar29;
                    bVar8 = uVar14 == 0;
                    fVar46 = fVar49 + fVar46;
                    if (bVar8 || bVar7) {
                      fVar47 = fVar49 + fVar47;
                      fVar61 = fVar46;
                      fVar54 = fVar47;
                      if (fVar49 != 0.0) {
                        fVar61 = (fVar46 - fVar49) / *(float *)(unaff_x19 + 0xf0);
                        fVar54 = (fVar47 - fVar49) / *(float *)(unaff_x19 + 0xf0);
                        if (fVar61 <= fVar46) {
                          fVar61 = fVar46;
                        }
                        if (fVar47 <= fVar54) {
                          fVar54 = fVar47;
                        }
                      }
                      lVar32 = lVar26 + lVar31 * unaff_x26;
                      fVar49 = fVar61;
                      if (fVar61 <= *(float *)(unaff_x19 + 0x338)) {
                        fVar49 = *(float *)(unaff_x19 + 0x338);
                      }
                      fVar65 = fVar54;
                      if (*(float *)(unaff_x19 + 0x33c) <= fVar54) {
                        fVar65 = *(float *)(unaff_x19 + 0x33c);
                      }
                      *(float *)(unaff_x19 + 0x338) = fVar49;
                      *(float *)(unaff_x19 + 0x33c) = fVar65;
                      *(float *)(lVar32 + 0x158) = fVar61;
                      *(float *)(lVar32 + 0x15c) = fVar54;
                      fVar61 = *(float *)(unaff_x19 + 0x2e0);
                      fVar54 = fVar46 - fVar61;
                    }
                    else {
                      fVar49 = *(float *)(unaff_x19 + 0x338);
                      lVar32 = lVar26 + lVar31 * unaff_x26;
                      *(float *)(lVar32 + 0x158) = fVar49;
                      fVar47 = *(float *)(unaff_x19 + 0x33c);
                      *(float *)(lVar32 + 0x15c) = fVar47;
                      fVar61 = *(float *)(unaff_x19 + 0x2e0);
                      fVar54 = fVar49 - fVar61;
                    }
                    *(float *)(lVar32 + 0x14c) = fVar54;
                    *(float *)(lVar26 + lVar31 * unaff_x26 + 0x154) = fVar47 - fVar61;
                    *(float *)(unaff_x19 + 0x378) = fVar47 - fVar61;
                    if ((*(int *)(unaff_x19 + 0x340) == 0) || (*(char *)(unaff_x19 + 0x37c) != '\0')
                       ) {
                      if (bVar8 || bVar7) {
                        *(float *)(unaff_x19 + 0x374) = fVar49;
                        if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03ddcaac;
                        fVar47 = *(float *)(unaff_x19 + 0x370);
                        fVar49 = (float)FUN_03dc0e60(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
                        fVar61 = *(float *)(unaff_x19 + 0x2e0);
                        fStack0000000000000174 = (fVar45 * fVar49) / fStack0000000000000174;
                        if (fVar47 <= fStack0000000000000174) {
                          fVar47 = fStack0000000000000174;
                        }
                        *(float *)(unaff_x19 + 0x370) = fVar47;
                        if (fVar61 == 0.0) goto LAB_03dd7ee0;
                      }
                    }
                    else if ((bVar8 || bVar7) && fVar61 == 0.0) {
LAB_03dd7ee0:
                      fVar47 = *(float *)(unaff_x19 + 0x19c8);
                      if (*(float *)(unaff_x19 + 0x19c8) <= fVar46) {
                        fVar47 = fVar46;
                      }
                      *(float *)(unaff_x19 + 0x19c8) = fVar47;
                    }
                    lVar26 = *in_stack_000001d8;
                    if (lVar26 == 0) goto LAB_03ddcaac;
                    uVar41 = *in_stack_000001c8;
                    if (*(uint *)(lVar26 + 0x18) <= uVar41) goto LAB_03ddcab0;
                    lVar26 = lVar26 + (long)(int)uVar41 * unaff_x26;
                    *(undefined1 *)(lVar26 + 0x1a0) = 0;
                    uVar37 = *(uint *)(unaff_x19 + 0x158) & 0x18;
                    if ((in_stack_0000128c == 9) ||
                       ((((uVar14 == 0 && (in_stack_0000128c != 3)) &&
                         ((in_stack_0000128c != 0x200b && (in_stack_0000128c != 0xad)))) ||
                        (((in_stack_0000128c == 0xad & (in_stack_000000c0 ^ 0xff)) != 0 ||
                         (*unaff_x27 == '\x02')))))) {
                      *(undefined1 *)(lVar26 + 0x1a0) = 1;
                      pfVar27 = _fStack0000000000000130;
                      pfVar36 = _fStack0000000000000138;
                      if (in_stack_000001c0._4_4_ != 0) {
                        lVar26 = *(long *)(in_stack_000001b8 + 0x48);
                        if (lVar26 == 0) goto LAB_03ddcaac;
                        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x340))
                        goto LAB_03ddcab0;
                        lVar26 = lVar26 + (int)*(uint *)(unaff_x19 + 0x340) * unaff_x29;
                        pfVar36 = (float *)(lVar26 + 100);
                        pfVar27 = (float *)(lVar26 + 0x68);
                      }
                      fVar54 = *pfVar36;
                      fVar49 = *pfVar27;
                      fVar47 = *(float *)(unaff_x19 + 0x35c);
                      fVar65 = *(float *)(unaff_x19 + 0x2f4);
                      fVar46 = (in_stack_00000120._4_4_ - fVar54) - fVar49;
                      bVar7 = true;
                      if ((fVar47 <= fVar46) && (bVar7 = false, !NAN(fVar47))) {
                        bVar7 = fVar47 == -1.0;
                      }
                      if (!bVar7) {
                        fVar46 = fVar47;
                      }
                      _fStack0000000000000168 = CONCAT44(fVar46,fStack0000000000000168);
                      fVar47 = 0.0;
                      if (*(char *)(in_stack_000001d0 + 0xb6) == '\0') {
                        fVar47 = (float)FUN_03dc1184(&stack0x000011e0,0);
                        fVar61 = *(float *)(unaff_x19 + 0x2e0);
                      }
                      fVar56 = *(float *)(unaff_x19 + 0x1594);
                      fVar59 = *(float *)(unaff_x19 + 0x33c);
                      if (in_stack_0000128c != 0xad) {
                        fVar44 = fVar45;
                      }
                      fVar68 = 0.0;
                      if ((0.0 < fVar61) && (fVar68 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
                        fVar68 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
                      }
                      uVar41 = *in_stack_000001c8;
                      fVar68 = (*(float *)(unaff_x19 + 0x374) - (fVar59 - fVar61)) + fVar68;
                      if (fVar68 <= in_stack_00000110) goto switchD_03dd8188_caseD_2;
                      if (*(int *)(unaff_x19 + 0x34c) == -1) {
                        *(uint *)(unaff_x19 + 0x34c) = uVar41;
                      }
                      uVar43 = DAT_00b91f68;
                      if (*(char *)(in_stack_000001d0 + 0xa8) != '\0') {
                        fVar55 = *(float *)(in_stack_000001d0 + 0xd0);
                        if (((*(float *)(unaff_x19 + 0x15b0) <= fVar55) || (fVar61 <= 0.0)) ||
                           (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
                          fVar61 = *(float *)(in_stack_000001d0 + 0xac);
                          fVar68 = *_iStack00000000000000c8;
                          if ((fVar68 <= fVar61) ||
                             (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)))
                          goto LAB_03dd8164;
                          fVar51 = (fVar68 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
                          if (fVar51 <= DAT_00b932d0) {
                            fVar51 = DAT_00b932d0;
                          }
                          fVar44 = (fVar68 - fVar51) * 20.0 + 0.5;
                          fVar51 = DAT_00b934d4;
                          if (fVar44 != INFINITY) {
                            fVar51 = (float)(int)fVar44 / 20.0;
                          }
                          if (fVar51 <= fVar61) {
                            fVar51 = fVar61;
                          }
                          *(float *)(unaff_x19 + 0x1598) = fVar68;
LAB_03dd9f28:
                          *(float *)(unaff_x19 + 0xec) = fVar51;
                        }
                        else {
                          fVar51 = *(float *)(unaff_x19 + 0x15b0) +
                                   ((in_stack_00000020._4_4_ - fVar68) /
                                   (float)*(int *)(unaff_x19 + 0x340)) / fStack0000000000000088;
                          if (fVar51 <= fVar55) {
                            fVar51 = fVar55;
                          }
LAB_03ddc960:
                          *(float *)(unaff_x19 + 0x15b0) = fVar51;
                        }
                        goto LAB_03dd59bc;
                      }
LAB_03dd8164:
                      switch(*(undefined4 *)(in_stack_000001d0 + 0x74)) {
                      case 1:
                        if (*(int *)(unaff_x19 + 0x340) < 1) goto switchD_03dd8188_caseD_2;
                        iVar17 = FUN_025deea8(in_stack_00000078,*(undefined8 *)StringLiteral_8889);
                        in_stack_00001278 = DAT_00b91f68;
                        if (iVar17 == 0) {
                          in_stack_000001c8[0] = 0;
                          in_stack_000001c8[1] = 0;
                          goto LAB_03dd9890;
                        }
                        FUN_025df310(&stack0x00001290,in_stack_00000078,
                                     *(undefined8 *)StringLiteral_8879);
                        memcpy(&stack0x00000d28,&stack0x00001290,0x398);
                        iVar16 = FUN_03ddfb90();
                        iVar17 = *(int *)(unaff_x19 + 0x324) + -1;
                        *(int *)(unaff_x19 + 0x324) = iVar17;
                        plVar18 = (long *)PTR_DAT_0422fae0;
LAB_03dd97fc:
                        in_stack_00001278 = CONCAT44(0x2026,iVar17);
                        in_stack_000001a8 = in_stack_000001a8 + 1;
                        in_stack_000011fc = iVar16 - 1;
                        break;
                      default:
switchD_03dd8188_caseD_2:
                        if ((uVar19 & 1) == 0) {
LAB_03dd8290:
                          if (uVar14 == 0) {
                            if (in_stack_0000128c != 0xad) {
                              if (*unaff_x27 == '\x02') {
                                FUN_03de51a0();
                              }
                              else if (*unaff_x27 == '\x01') {
                                FUN_03de4634(fVar51,fVar50);
                              }
                              uVar41 = *in_stack_000001c8;
                              if ((uStack00000000000000b4 & 1) != 0) {
                                *(uint *)(unaff_x19 + 0x330) = uVar41;
                              }
                              *(uint *)(unaff_x19 + 0x334) = uVar41;
                              *(int *)(unaff_x19 + 0x344) = *(int *)(unaff_x19 + 0x344) + 1;
                              lVar26 = *(long *)(in_stack_000001b8 + 0x48);
                              if (lVar26 != 0) {
                                if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar26 + 0x18)) {
                                  lVar26 = lVar26 + (int)*(uint *)(unaff_x19 + 0x340) * unaff_x29;
                                  uStack00000000000000b4 = 0;
                                  *(float *)(lVar26 + 100) = fVar54;
                                  *(float *)(lVar26 + 0x68) = fVar49;
                                  goto LAB_03dd8760;
                                }
                                goto LAB_03ddcab0;
                              }
                              goto LAB_03ddcaac;
                            }
                            lVar26 = *in_stack_000001d8;
                            if (lVar26 == 0) goto LAB_03ddcaac;
                            if (*(uint *)(lVar26 + 0x18) <= uVar41) goto LAB_03ddcab0;
                            *(undefined1 *)(lVar26 + (long)(int)uVar41 * (long)iVar13 + 0x1a0) = 0;
                          }
                          else {
                            lVar26 = *in_stack_000001d8;
                            if (lVar26 == 0) goto LAB_03ddcaac;
                            if (*(uint *)(lVar26 + 0x18) <= uVar41) goto LAB_03ddcab0;
                            *(undefined1 *)(lVar26 + (long)(int)uVar41 * (long)iVar13 + 0x1a0) = 0;
                            *(uint *)(unaff_x19 + 0x334) = uVar41;
                            lVar26 = *(long *)(in_stack_000001b8 + 0x48);
                            if (lVar26 == 0) goto LAB_03ddcaac;
                            uVar41 = *(uint *)(lVar26 + 0x18);
                            if (uVar41 <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03ddcab0;
                            lVar31 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                            iVar17 = *(int *)(lVar31 + 0x2c) + 1;
                            *(int *)(lVar31 + 0x2c) = iVar17;
                            *(int *)(unaff_x19 + 0x348) = iVar17;
                            if (uVar41 <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03ddcab0;
                            lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                            *(float *)(lVar26 + 100) = fVar54;
                            *(float *)(lVar26 + 0x68) = fVar49;
                            unaff_x29 = 0x60;
                            *(int *)(in_stack_000001b8 + 0x18) =
                                 *(int *)(in_stack_000001b8 + 0x18) + 1;
                          }
                          goto LAB_03dd8760;
                        }
                        fVar47 = ABS(fVar65) + fVar47 * (1.0 - fVar56) * fVar44;
                        fVar44 = 1.0;
                        if (uVar37 != 0) {
                          fVar44 = DAT_00b93264;
                        }
                        if (fVar47 <= fVar44 * fVar46) goto LAB_03dd8290;
                        if ((iStack000000000000008c == 0) ||
                           (uVar41 == *(uint *)(unaff_x19 + 0x328))) {
                          if ((*(char *)(in_stack_000001d0 + 0xa8) == '\0') ||
                             (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
LAB_03dd839c:
                            iVar17 = *(int *)(in_stack_000001d0 + 0x74);
                            if (iVar17 != 1) {
                              if (iVar17 != 6) {
                                if (iVar17 == 3) {
                                  in_stack_000011fc = FUN_03ddfb90();
                                  goto LAB_03dd83e4;
                                }
                                goto LAB_03dd8290;
                              }
                              in_stack_000011fc = FUN_03ddfb90();
                              in_stack_00001278 = CONCAT44(3,*(undefined4 *)(unaff_x19 + 0x324));
                              plVar18 = (long *)PTR_DAT_0422fae0;
                              break;
                            }
                            iVar17 = FUN_025deea8(in_stack_00000078,
                                                  *(undefined8 *)StringLiteral_8889);
                            plVar18 = (long *)PTR_DAT_0422fae0;
                            if (iVar17 != 0) {
                              FUN_025df310(&stack0x00001290,in_stack_00000078,
                                           *(undefined8 *)StringLiteral_8879);
                              memcpy(&stack0x000005f8,&stack0x00001290,0x398);
                              iVar16 = FUN_03ddfb90();
                              iVar17 = *(int *)(unaff_x19 + 0x324) + -1;
                              *(int *)(unaff_x19 + 0x324) = iVar17;
                              goto LAB_03dd97fc;
                            }
LAB_03dd9b24:
                            plVar18 = (long *)PTR_DAT_0422fae0;
                            in_stack_00001278 = DAT_00b91f68;
                            in_stack_000001c8[0] = 0;
                            in_stack_000001c8[1] = 0;
                            in_stack_000011fc = 0xffffffff;
                            break;
                          }
                          fVar61 = *(float *)(in_stack_000001d0 + 0x108) / 100.0;
                          if (fVar61 <= fVar56) {
                            fVar61 = *(float *)(in_stack_000001d0 + 0xac);
                            fVar65 = *_iStack00000000000000c8;
                            if (fVar65 <= fVar61) goto LAB_03dd839c;
LAB_03ddc9cc:
                            fVar51 = (fVar65 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
                            if (fVar51 <= DAT_00b932d0) {
                              fVar51 = DAT_00b932d0;
                            }
                            *(float *)(unaff_x19 + 0x1598) = fVar65;
                            fVar44 = (fVar65 - fVar51) * 20.0 + 0.5;
                            fVar51 = DAT_00b934d4;
                            if (fVar44 != INFINITY) {
                              fVar51 = (float)(int)fVar44 / 20.0;
                            }
                            if (fVar51 <= fVar61) {
                              fVar51 = fVar61;
                            }
                            goto LAB_03dd9f28;
                          }
                          fVar51 = fVar47 / (1.0 - fVar56);
                          if (fVar56 <= 0.0) {
                            fVar51 = fVar47;
                          }
                          fVar56 = fVar56 + (fVar47 - fVar44 * (fVar46 + DAT_00b933cc)) / fVar51;
LAB_03ddca5c:
                          if (fVar61 <= fVar56) {
                            fVar56 = fVar61;
                          }
                          *(float *)(unaff_x19 + 0x1594) = fVar56;
                          goto LAB_03dd59bc;
                        }
                        in_stack_000011fc = FUN_03ddfb90();
                        if (*(float *)(unaff_x19 + 0x2e4) == DAT_00b932ec) {
                          lVar26 = *in_stack_000001d8;
                          if (lVar26 == 0) goto LAB_03ddcaac;
                          uVar40 = *in_stack_000001c8;
                          if (*(uint *)(lVar26 + 0x18) <= uVar40) goto LAB_03ddcab0;
                          fVar65 = *(float *)(unaff_x19 + 0x2e0);
                          fVar61 = 0.0;
                          if ((0.0 < fVar65) && (fVar61 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')
                             ) {
                            fVar61 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
                          }
                          fVar61 = in_stack_00000150 * *(float *)(in_stack_000001d0 + 200) +
                                   *(float *)(lVar26 + (long)(int)uVar40 * unaff_x26 + 0x158) +
                                   (fVar61 - *(float *)(unaff_x19 + 0x33c)) +
                                   fStack0000000000000088 *
                                   (fStack0000000000000084 + *(float *)(unaff_x19 + 0x15b0));
                        }
                        else {
                          fVar61 = *(float *)(in_stack_000001d0 + 200);
                          *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
                          lVar26 = *in_stack_000001d8;
                          if (lVar26 == 0) goto LAB_03ddcaac;
                          fVar65 = *(float *)(unaff_x19 + 0x2e0);
                          uVar40 = *(uint *)(unaff_x19 + 0x324);
                          fVar61 = *(float *)(unaff_x19 + 0x2e4) + in_stack_00000150 * fVar61;
                        }
                        if ((*(uint *)(lVar26 + 0x18) <= uVar40) ||
                           (uVar4 = uVar40 - 1, *(uint *)(lVar26 + 0x18) <= uVar4))
                        goto LAB_03ddcab0;
                        fVar59 = (fVar61 + *(float *)(unaff_x19 + 0x374) + fVar65) -
                                 *(float *)(lVar26 + (long)(int)uVar40 * (long)iVar13 + 0x15c);
                        if (((in_stack_000000c0 & 1) == 0 &&
                             *(short *)(lVar26 + (long)(int)uVar4 * (long)iVar13 + 0x20) == 0xad) &&
                           ((fVar59 < in_stack_00000110 || (*(int *)(in_stack_000001d0 + 0x74) == 0)
                            ))) {
                          in_stack_000000c0 = 0;
                          in_stack_00001278 = CONCAT44(0x2d,uVar4);
                          *in_stack_000001c8 = uVar4;
                          plVar18 = (long *)PTR_DAT_0422fae0;
                          in_stack_000011fc = in_stack_000011fc - 1;
                          break;
                        }
                        if (*(short *)(lVar26 + (long)(int)uVar40 * unaff_x26 + 0x20) == 0xad) {
                          in_stack_000000c0 = 1;
                          plVar18 = (long *)PTR_DAT_0422fae0;
                          break;
                        }
                        if ((bStack00000000000000e0 & *(byte *)(in_stack_000001d0 + 0xa8) & 1) != 0)
                        {
                          fVar56 = *(float *)(unaff_x19 + 0x1594);
                          fVar61 = *(float *)(in_stack_000001d0 + 0x108) / 100.0;
                          if ((fVar61 <= fVar56) ||
                             (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
                            fVar61 = *(float *)(in_stack_000001d0 + 0xac);
                            fVar65 = *_iStack00000000000000c8;
                            if ((fVar61 < fVar65) &&
                               (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
                            goto LAB_03ddc9cc;
                            goto LAB_03dd99c8;
                          }
LAB_03ddca70:
                          fVar51 = fVar47;
                          if (0.0 < fVar56) {
                            fVar51 = fVar47 / (1.0 - fVar56);
                          }
                          fVar56 = fVar56 + (fVar47 - fVar44 * (fVar46 + DAT_00b933cc)) / fVar51;
                          goto LAB_03ddca5c;
                        }
LAB_03dd99c8:
                        iVar17 = *in_stack_00000030;
                        if ((iVar17 != iStack0000000000000028) &&
                           ((bStack00000000000000e0 & iVar17 != -1) != 0)) {
                          in_stack_000011fc = FUN_03ddfb90();
                          lVar26 = *(long *)(in_stack_000001b8 + 0x30);
                          if (lVar26 == 0) goto LAB_03ddcaac;
                          uVar40 = *in_stack_000001c8;
                          uVar4 = uVar40 - 1;
                          if (*(uint *)(lVar26 + 0x18) <= uVar4) goto LAB_03ddcab0;
                          iStack0000000000000028 = iVar17;
                          if (*(short *)(lVar26 + (long)(int)uVar4 * (long)iVar13 + 0x20) == 0xad) {
                            in_stack_000000c0 = 0;
                            in_stack_00001278 = CONCAT44(0x2d,uVar4);
                            *in_stack_000001c8 = uVar4;
                            plVar18 = (long *)PTR_DAT_0422fae0;
                            in_stack_000011fc = in_stack_000011fc - 1;
                            break;
                          }
                        }
                        if (fVar59 <= in_stack_00000110) {
                          FUN_03de9b60(fStack0000000000000088,fVar45,in_stack_00000150,
                                       fStack0000000000000140,_fStack0000000000000180 & 0xffffffff,
                                       fVar46,fStack0000000000000084);
                          bStack00000000000000e0 = 1;
                          in_stack_000000c0 = 0;
                          uStack00000000000000b4 = 1;
                          plVar18 = (long *)PTR_DAT_0422fae0;
                          break;
                        }
                        if (*(int *)(unaff_x19 + 0x34c) == -1) {
                          *(uint *)(unaff_x19 + 0x34c) = uVar40;
                        }
                        if (*(char *)(in_stack_000001d0 + 0xa8) != '\0') {
                          fVar61 = *(float *)(in_stack_000001d0 + 0xd0);
                          if ((fVar61 < *(float *)(unaff_x19 + 0x15b0)) &&
                             (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
                            fVar51 = *(float *)(unaff_x19 + 0x15b0) +
                                     ((in_stack_00000020._4_4_ - fVar59) /
                                     (float)(*(int *)(unaff_x19 + 0x340) + 1)) /
                                     fStack0000000000000088;
                            if (fVar51 <= fVar61) {
                              fVar51 = fVar61;
                            }
                            goto LAB_03ddc960;
                          }
                          fVar56 = *(float *)(unaff_x19 + 0x1594);
                          fVar61 = *(float *)(in_stack_000001d0 + 0x108) / 100.0;
                          if ((fVar56 < fVar61) &&
                             (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
                          goto LAB_03ddca70;
                          fVar61 = *(float *)(in_stack_000001d0 + 0xac);
                          fVar65 = *_iStack00000000000000c8;
                          if ((fVar61 < fVar65) &&
                             (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
                          goto LAB_03ddc9cc;
                        }
                        switch(*(undefined4 *)(in_stack_000001d0 + 0x74)) {
                        case 0:
                        case 2:
                        case 4:
                          FUN_03de9b60(fStack0000000000000088,fVar45,in_stack_00000150,
                                       fStack0000000000000140,_fStack0000000000000180 & 0xffffffff,
                                       fVar46,fStack0000000000000084);
                          goto LAB_03dd9e2c;
                        case 1:
                          iVar17 = FUN_025deea8(in_stack_00000078,*(undefined8 *)StringLiteral_8889)
                          ;
                          plVar18 = (long *)PTR_DAT_0422fae0;
                          if (iVar17 != 0) {
                            FUN_025df310(&stack0x00001290,in_stack_00000078,
                                         *(undefined8 *)StringLiteral_8879);
                            memcpy(&stack0x00000990,&stack0x00001290,0x398);
                            iVar17 = FUN_03ddfb90();
                            in_stack_000011fc = iVar17 - 1;
                            in_stack_000000c0 = 0;
                            in_stack_000001a8 = in_stack_000001a8 + 1;
                            uVar41 = *(int *)(unaff_x19 + 0x324) - 1;
                            *(uint *)(unaff_x19 + 0x324) = uVar41;
                            uVar52 = 0x2026;
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
                          FUN_03de9b60(fStack0000000000000088,fVar45,in_stack_00000150,
                                       fStack0000000000000140,_fStack0000000000000180 & 0xffffffff,
                                       fVar46,fStack0000000000000084);
                          *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
                          *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
                          *(undefined4 *)(unaff_x19 + 0x374) = 0;
                          *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
                          *(int *)(unaff_x19 + 0x350) = *(int *)(unaff_x19 + 0x350) + 1;
LAB_03dd9e2c:
                          bStack00000000000000e0 = 1;
                          in_stack_000000c0 = 0;
                          uStack00000000000000b4 = 1;
                          plVar18 = (long *)PTR_DAT_0422fae0;
                          goto LAB_03dd6304;
                        case 6:
                          in_stack_000000c0 = 0;
                          uVar41 = uVar40;
                          break;
                        default:
                          in_stack_000000c0 = 0;
                          uVar41 = uVar40;
                          goto LAB_03dd8290;
                        }
LAB_03dd83e4:
                        in_stack_00001278 = CONCAT44(3,uVar41);
                        plVar18 = (long *)PTR_DAT_0422fae0;
                        break;
                      case 3:
                        in_stack_000011fc = FUN_03ddfb90();
                        in_stack_00001278 = CONCAT44((int)((ulong)in_stack_00001278 >> 0x20),uVar41)
                        ;
                        plVar18 = (long *)PTR_DAT_0422fae0;
                        break;
                      case 5:
                        if (uVar41 == 0 || (int)in_stack_000011fc < 0) {
                          *in_stack_000001c8 = 0;
                          in_stack_00001278 = uVar43;
LAB_03dd9890:
                          plVar18 = (long *)PTR_DAT_0422fae0;
                          in_stack_000011fc = 0xffffffff;
                        }
                        else {
                          fVar44 = *(float *)(unaff_x19 + 0x338);
                          in_stack_000011fc = FUN_03ddfb90();
                          plVar18 = (long *)PTR_DAT_0422fae0;
                          if (fVar44 - fVar59 <= in_stack_00000110) {
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
                            break;
                          }
                          uVar52 = 3;
LAB_03dd86cc:
                          in_stack_00001278 = CONCAT44(uVar52,uVar41);
                        }
                        break;
                      case 6:
                        in_stack_000011fc = FUN_03ddfb90();
                        in_stack_00001278 = CONCAT44(3,uVar41);
                        plVar18 = (long *)PTR_DAT_0422fae0;
                      }
LAB_03dd6304:
                      in_stack_000011fc = in_stack_000011fc + 1;
                      lVar26 = *(long *)(unaff_x19 + 0x20);
                      if (lVar26 == 0) goto LAB_03ddcaac;
                      if ((int)*(uint *)(lVar26 + 0x18) <= (int)in_stack_000011fc) {
LAB_03dd9e64:
                        if ((((*(char *)(in_stack_000001d0 + 0xa8) != '\0') &&
                             (DAT_00b9319c <
                              *(float *)(unaff_x19 + 0x1598) - *(float *)(unaff_x19 + 0x159c))) &&
                            (fVar51 = *_iStack00000000000000c8,
                            fVar51 < *(float *)(in_stack_000001d0 + 0xb0))) &&
                           (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
                          fVar44 = *(float *)(in_stack_000001d0 + 0x108);
                          if (*(float *)(unaff_x19 + 0x1594) < fVar44 / 100.0) {
                            *(undefined4 *)(unaff_x19 + 0x1594) = 0;
                          }
                          fVar45 = (*(float *)(unaff_x19 + 0x1598) - fVar51) * 0.5;
                          if (fVar45 <= DAT_00b932d0) {
                            fVar45 = DAT_00b932d0;
                          }
                          *(float *)(unaff_x19 + 0x159c) = fVar51;
                          fVar45 = (fVar51 + fVar45) * 20.0 + 0.5;
                          fVar51 = DAT_00b934d4;
                          if (fVar45 != INFINITY) {
                            fVar51 = (float)(int)fVar45 / 20.0;
                          }
                          if (fVar44 <= fVar51) {
                            fVar51 = fVar44;
                          }
                          goto LAB_03dd9f28;
                        }
                        unaff_x27[0x30] = '\x01';
                        if (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)) {
                          uVar43 = FUN_032cf308(in_stack_00000070,0);
                          uVar64 = FUN_032e3e84(_iStack00000000000000c8,0);
                          uVar43 = FUN_031532c4(*(undefined8 *)StringLiteral_5975,uVar43,
                                                *(undefined8 *)StringLiteral_5972,uVar64,0);
                          if (*(int *)(*plVar18 + 0xe0) == 0) {
                            thunk_FUN_01c1d1e8(*plVar18);
                          }
                          FUN_03d03d14(uVar43,0);
                        }
                        plVar18 = (long *)StringLiteral_8728;
                        if ((*in_stack_000001c8 == 0) ||
                           ((*in_stack_000001c8 == 1 && (in_stack_0000128c == 3)))) {
                          FUN_03de6b6c(1,in_stack_000001b8,0);
                          goto LAB_03dd59bc;
                        }
                        lVar26 = *(long *)(in_stack_000001b8 + 0x58);
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
                        iVar13 = *(int *)(in_stack_000001d0 + 0x70);
                        fStack000000000000015c = **(float **)(*(long *)PTR_DAT_042301b0 + 0xb8);
                        _in_stack_00000148 =
                             *(undefined8 *)(*(float **)(*(long *)PTR_DAT_042301b0 + 0xb8) + 1);
                        lVar26 = *(long *)(unaff_x19 + 0x50);
                        uStack0000000000000118 = _in_stack_00000148;
                        in_stack_00000120._4_4_ = fStack000000000000015c;
                        if (iVar13 < 0x421) {
                          if (iVar13 < 0x205) {
                            if (iVar13 < 0x109) {
                              if ((iVar13 - 0x101U < 8) &&
                                 ((1 << (ulong)(iVar13 - 0x101U & 0x1f) & 0x8bU) != 0)) {
LAB_03dda2cc:
                                if (lVar26 == 0) goto LAB_03ddcaac;
                                if (*(uint *)(lVar26 + 0x18) < 2) goto LAB_03ddcab0;
                                uVar43 = *(undefined8 *)(lVar26 + 0x30);
                                if (*(int *)(in_stack_000001d0 + 0x74) == 5) {
                                  lVar31 = *in_stack_00000050;
                                  if (lVar31 == 0) goto LAB_03ddcaac;
                                  if (*(uint *)(lVar31 + 0x18) <= uStack0000000000000080)
                                  goto LAB_03ddcab0;
                                  fVar51 = *(float *)(lVar31 + (long)(int)uStack0000000000000080 *
                                                               0x14 + 0x28);
                                }
                                else {
                                  fVar51 = *(float *)(unaff_x19 + 0x374);
                                }
                                in_stack_00000120._4_4_ =
                                     in_stack_00000058._4_4_ + 0.0 + *(float *)(lVar26 + 0x2c);
                                fStack0000000000000038 = (0.0 - fVar51) - fStack000000000000003c;
                                goto LAB_03dda660;
                              }
                            }
                            else if (iVar13 < 0x121) {
                              if ((iVar13 == 0x110) || (iVar13 == 0x120)) goto LAB_03dda2cc;
                            }
                            else if ((iVar13 - 0x201U < 4) && (iVar13 - 0x201U != 2))
                            goto LAB_03dda554;
                          }
                          else {
                            if (iVar13 < 0x403) {
                              if (iVar13 < 0x211) {
                                if ((iVar13 == 0x208) || (iVar13 == 0x210)) goto LAB_03dda554;
                                goto LAB_03dda670;
                              }
                              if (iVar13 != 0x220) {
                                if (iVar13 - 0x401U < 2) goto LAB_03dda404;
                                goto LAB_03dda670;
                              }
LAB_03dda554:
                              if (lVar26 == 0) goto LAB_03ddcaac;
                              if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0))
                              goto LAB_03ddcab0;
                              in_stack_00000120._4_4_ =
                                   (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
                              uVar43 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >>
                                                        0x20) +
                                                (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >>
                                                       0x20)) * 0.5,
                                                ((float)*(undefined8 *)(lVar26 + 0x24) +
                                                (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5);
                              if (*(int *)(in_stack_000001d0 + 0x74) == 5) {
                                lVar26 = *in_stack_00000050;
                                if (lVar26 == 0) goto LAB_03ddcaac;
                                if (uStack0000000000000080 < *(uint *)(lVar26 + 0x18)) {
                                  lVar26 = lVar26 + (long)(int)uStack0000000000000080 * 0x14;
                                  in_stack_00000120._4_4_ =
                                       in_stack_00000058._4_4_ + 0.0 + in_stack_00000120._4_4_;
                                  fStack0000000000000038 =
                                       ((fStack000000000000003c + *(float *)(lVar26 + 0x28) +
                                        *(float *)(lVar26 + 0x30)) - fStack0000000000000038) * -0.5
                                       + 0.0;
                                  goto LAB_03dda660;
                                }
                                goto LAB_03ddcab0;
                              }
                              in_stack_00000120._4_4_ =
                                   in_stack_00000058._4_4_ + 0.0 + in_stack_00000120._4_4_;
                              fStack0000000000000038 =
                                   ((fStack000000000000003c + *(float *)(unaff_x19 + 0x374) +
                                    in_stack_00001288) - fStack0000000000000038) * -0.5 + 0.0;
                            }
                            else {
                              if (iVar13 < 0x409) {
                                if (iVar13 != 0x404) {
                                  bVar7 = iVar13 == 0x408;
                                  goto LAB_03dda3f0;
                                }
                              }
                              else if (iVar13 != 0x410) {
                                bVar7 = iVar13 == 0x420;
LAB_03dda3f0:
                                if (!bVar7) goto LAB_03dda670;
                              }
LAB_03dda404:
                              if (lVar26 == 0) goto LAB_03ddcaac;
                              if (*(int *)(lVar26 + 0x18) == 0) goto LAB_03ddcab0;
                              uVar43 = *(undefined8 *)(lVar26 + 0x24);
                              if (*(int *)(in_stack_000001d0 + 0x74) == 5) {
                                lVar31 = *in_stack_00000050;
                                if (lVar31 == 0) goto LAB_03ddcaac;
                                if (*(uint *)(lVar31 + 0x18) <= uStack0000000000000080)
                                goto LAB_03ddcab0;
                                in_stack_00001288 =
                                     *(float *)(lVar31 + (long)(int)uStack0000000000000080 * 0x14 +
                                               0x30);
                              }
                              in_stack_00000120._4_4_ =
                                   in_stack_00000058._4_4_ + 0.0 + *(float *)(lVar26 + 0x20);
                              fStack0000000000000038 =
                                   fStack0000000000000038 + (0.0 - in_stack_00001288);
                            }
LAB_03dda660:
                            uStack0000000000000118 =
                                 CONCAT44((float)((ulong)uVar43 >> 0x20) + 0.0,
                                          (float)uVar43 + fStack0000000000000038);
                          }
                        }
                        else if (iVar13 < 0x1005) {
                          if (iVar13 < 0x809) {
                            if ((iVar13 - 0x801U < 8) &&
                               ((1 << (ulong)(iVar13 - 0x801U & 0x1f) & 0x8bU) != 0)) {
LAB_03dda230:
                              if (lVar26 == 0) goto LAB_03ddcaac;
                              if ((*(int *)(lVar26 + 0x18) != 1) && (*(int *)(lVar26 + 0x18) != 0))
                              {
                                uStack0000000000000118 =
                                     CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20
                                                      ) +
                                              (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)
                                              ) * 0.5 + 0.0,
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
                          else if (iVar13 < 0x821) {
                            if ((iVar13 == 0x810) || (iVar13 == 0x820)) goto LAB_03dda230;
                          }
                          else if ((iVar13 - 0x1001U < 4) && (iVar13 - 0x1001U != 2))
                          goto LAB_03dda4bc;
                        }
                        else if (iVar13 < 0x2003) {
                          if (iVar13 < 0x1011) {
                            if ((iVar13 == 0x1008) || (iVar13 == 0x1010)) goto LAB_03dda4bc;
                          }
                          else {
                            if (iVar13 == 0x1020) {
LAB_03dda4bc:
                              if (lVar26 == 0) goto LAB_03ddcaac;
                              if ((*(int *)(lVar26 + 0x18) != 1) && (*(int *)(lVar26 + 0x18) != 0))
                              {
                                uVar43 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >>
                                                          0x20) +
                                                  (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >>
                                                         0x20)) * 0.5,
                                                  ((float)*(undefined8 *)(lVar26 + 0x24) +
                                                  (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5);
                                in_stack_00000120._4_4_ =
                                     in_stack_00000058._4_4_ + 0.0 +
                                     (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
                                fStack0000000000000038 =
                                     0.0 - ((fStack000000000000003c + *(float *)(unaff_x19 + 0x36c)
                                            + *(float *)(unaff_x19 + 0x364)) -
                                           fStack0000000000000038) * 0.5;
                                goto LAB_03dda660;
                              }
                              goto LAB_03ddcab0;
                            }
                            if (iVar13 - 0x2001U < 2) goto LAB_03dda368;
                          }
                        }
                        else {
                          if (iVar13 < 0x2009) {
                            if (iVar13 != 0x2004) {
                              iVar17 = 0x2008;
                              goto LAB_03dda350;
                            }
                          }
                          else if (iVar13 != 0x2010) {
                            iVar17 = 0x2020;
LAB_03dda350:
                            if (iVar13 != iVar17) goto LAB_03dda670;
                          }
LAB_03dda368:
                          if (lVar26 == 0) goto LAB_03ddcaac;
                          if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0))
                          goto LAB_03ddcab0;
                          uStack0000000000000118 =
                               CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                                        (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) *
                                        0.5 + 0.0,
                                        ((float)*(undefined8 *)(lVar26 + 0x24) +
                                        (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5 +
                                        (0.0 - ((*(float *)(unaff_x19 + 0x370) -
                                                fStack000000000000003c) - fStack0000000000000038) *
                                               0.5));
                          in_stack_00000120._4_4_ =
                               in_stack_00000058._4_4_ + 0.0 +
                               (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
                        }
LAB_03dda670:
                        uVar52 = FUN_01d35248(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                        FUN_01d35248(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                        if (*(int *)(*(long *)StringLiteral_8869 + 0xe0) == 0) {
                          thunk_FUN_01c1d1e8(*(long *)StringLiteral_8869);
                        }
                        FUN_03dea3a8(0);
                        FUN_03dea578(&stack0x00001260,0x4000ffff,0);
                        fVar51 = DAT_00b9343c;
                        uVar14 = *in_stack_000001c8;
                        if ((int)uVar14 < 1) {
                          iVar13 = 0;
                          fStack0000000000000140 = 0.0;
                          goto LAB_03ddc86c;
                        }
                        lVar26 = *in_stack_000001d8;
                        if (lVar26 == 0) goto LAB_03ddcaac;
                        fStack0000000000000174 = 0.0;
                        _bStack00000000000000e0 = 0.0;
                        fStack00000000000000b0 = 0.0;
                        plVar18 = (long *)(in_stack_000001b8 + 0x38);
                        fStack00000000000000f4 = fStack000000000000012c;
                        fStack00000000000000f8 = 0.0;
                        in_stack_000000a8._4_4_ = 0.0;
                        uVar21 = (ulong)&stack0x00001260 | 4;
                        bVar10 = false;
                        lVar31 = 0x2fc;
                        fVar45 = 0.0;
                        fVar44 = 0.0;
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
                      if (*(uint *)(lVar26 + 0x18) <= in_stack_000011fc) goto LAB_03ddcab0;
                      uVar14 = *(uint *)(lVar26 + (long)(int)in_stack_000011fc * 0x10 + 0x24);
                      if (uVar14 == 0) goto LAB_03dd9e64;
                      if (5 < in_stack_000001a8) {
                        uVar43 = Oculus_Platform_CAPI__ovr_User_LaunchFriendRequestFlow
                                           (&stack0x0000128c,0);
                        uVar64 = FUN_032cf308(&stack0x000011fc,0);
                        uVar43 = FUN_031532c4(*(undefined8 *)StringLiteral_5971,uVar43,
                                              *(undefined8 *)StringLiteral_5973,uVar64,0);
                        if (*(int *)(*plVar18 + 0xe0) == 0) {
                          thunk_FUN_01c1d1e8(*plVar18);
                        }
                        FUN_03d04168(uVar43,0);
                        in_stack_00001278 = CONCAT44(3,*in_stack_000001c8);
                      }
                      in_stack_0000128c = uVar14;
                      if (uVar14 == 0x1a) goto LAB_03dd6304;
                      if ((uVar14 == 0x3c) && (*(char *)(in_stack_000001d0 + 0xb5) != '\0')) {
                        unaff_x27[0] = '\x01';
                        unaff_x27[1] = '\x01';
                        uVar19 = FUN_03ddfe50();
                        if (((uVar19 & 1) != 0) &&
                           (in_stack_000011fc = in_stack_000011cc, *unaff_x27 == '\x01'))
                        goto LAB_03dd6304;
                      }
                      else {
                        lVar26 = *in_stack_000001d8;
                        if (lVar26 == 0) goto LAB_03ddcaac;
                        if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001c8) goto LAB_03ddcab0;
                        lVar26 = lVar26 + (long)(int)*in_stack_000001c8 * unaff_x26;
                        *unaff_x27 = *(char *)(lVar26 + 0x28);
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
                      unaff_x27[1] = '\0';
                      in_stack_000001c0._4_4_ = 0;
                      if ((uint)in_stack_00001278 == uVar14) {
                        in_stack_0000128c = (uint)((ulong)in_stack_00001278 >> 0x20);
                        in_stack_000001c0._4_4_ = 1;
                        *unaff_x27 = '\x01';
                        if (in_stack_0000128c == 0x2026) {
                          uVar43 = *(undefined8 *)(unaff_x19 + 0x1a00);
                          lVar26 = lVar26 + lVar31 * unaff_x26;
                          *(undefined1 *)(lVar26 + 0x28) = 1;
                          *(undefined8 *)(lVar26 + 0x30) = uVar43;
                          *(undefined8 *)(lVar26 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1a08);
                          *(undefined8 *)(lVar26 + 0x58) = *(undefined8 *)(unaff_x19 + 0x1a10);
                          *(undefined4 *)(lVar26 + 0x60) = *(undefined4 *)(unaff_x19 + 0x1a18);
                          *(undefined1 *)(*(long *)(*(long *)StringLiteral_8872 + 0xb8) + 8) = 1;
                          in_stack_00001278 = CONCAT44(3,uVar14 + 1);
                        }
                        else if (in_stack_0000128c == 3) {
                          if ((*in_stack_00000190 == 0) ||
                             (lVar32 = FUN_03dc3e34(*in_stack_00000190,0), lVar32 == 0))
                          goto LAB_03ddcaac;
                          uVar43 = FUN_02966be0(lVar32,3,*(undefined8 *)StringLiteral_8586);
                          if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_03ddcab0;
                          *(undefined8 *)(lVar26 + lVar31 * unaff_x26 + 0x30) = uVar43;
                          in_stack_000001c0._4_4_ = 1;
                          *(undefined1 *)(*(long *)(*(long *)StringLiteral_8872 + 0xb8) + 8) = 1;
                          uVar14 = *in_stack_000001c8;
                        }
                      }
                      plVar18 = (long *)PTR_DAT_0422fae0;
                      if (((int)uVar14 < *(int *)(in_stack_000001d0 + 0xe4)) &&
                         (in_stack_0000128c != 3)) {
                        lVar26 = *in_stack_000001d8;
                        if (lVar26 == 0) goto LAB_03ddcaac;
                        if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_03ddcab0;
                        lVar26 = lVar26 + (long)(int)uVar14 * (long)iVar13;
                        *(undefined1 *)(lVar26 + 0x1a0) = 0;
                        *(undefined2 *)(lVar26 + 0x20) = 0x200b;
                        *(undefined4 *)(lVar26 + 0x6c) = 0;
                        *in_stack_000001c8 = uVar14 + 1;
                        goto LAB_03dd6304;
                      }
                      cVar24 = *unaff_x27;
                      if (cVar24 == '\x01') {
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
                          }
                          else {
                            if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
                              thunk_FUN_01c1d1e8();
                            }
                            uVar19 = FUN_0324ca78(in_stack_0000128c,0);
                            fStack0000000000000174 = 1.0;
                            if ((uVar19 & 1) != 0) {
                              if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
                                thunk_FUN_01c1d1e8();
                              }
                              uVar14 = FUN_0324cf8c(in_stack_0000128c,0);
                              goto LAB_03dd647c;
                            }
                          }
                        }
                        else {
                          if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
                            thunk_FUN_01c1d1e8();
                          }
                          uVar19 = FUN_0324cb34(in_stack_0000128c,0);
                          fStack0000000000000174 = 1.0;
                          if ((uVar19 & 1) != 0) {
                            if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
                              thunk_FUN_01c1d1e8();
                            }
                            uVar14 = FUN_0324ce14(in_stack_0000128c,0);
LAB_03dd647c:
                            fStack0000000000000174 = 1.0;
                            in_stack_0000128c = uVar14 & 0xffff;
                          }
                        }
                        cVar24 = *unaff_x27;
                      }
                      else {
                        fStack0000000000000174 = 1.0;
                      }
                      unaff_x24 = in_stack_00000190;
                      if (cVar24 == '\x01') {
                        lVar26 = *in_stack_000001d8;
                        if (lVar26 == 0) goto LAB_03ddcaac;
                        uVar14 = *(uint *)(lVar26 + 0x18);
                        uVar15 = *in_stack_000001c8;
                        if (uVar14 <= uVar15) goto LAB_03ddcab0;
                        lVar31 = *(long *)(lVar26 + (long)(int)uVar15 * unaff_x26 + 0x30);
                        *(long *)(unaff_x19 + 0x1588) = lVar31;
                        plVar18 = (long *)PTR_DAT_0422fae0;
                        if (lVar31 != 0) {
                          lVar32 = lVar26 + (long)(int)uVar15 * unaff_x26;
                          lVar31 = *(long *)(lVar32 + 0x40);
                          *(long *)(unaff_x19 + 0x68) = lVar31;
                          *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(lVar32 + 0x58);
                          *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar32 + 0x60);
                          if (in_stack_000001c0._4_4_ == 0) {
LAB_03dd65b4:
                            if (lVar31 == 0) goto LAB_03ddcaac;
                            fVar51 = *(float *)(unaff_x19 + 0xf4);
                            iVar13 = FUN_03dc0e20(lVar31 + 0xb0,0);
                            lVar26 = *(long *)(unaff_x19 + 0x68);
                          }
                          else {
                            lVar32 = *(long *)(unaff_x19 + 0x20);
                            if (lVar32 == 0) goto LAB_03ddcaac;
                            if (*(uint *)(lVar32 + 0x18) <= in_stack_000011fc) goto LAB_03ddcab0;
                            if ((*(int *)(lVar32 + (long)(int)in_stack_000011fc * 0x10 + 0x24) != 10
                                ) || (uVar15 == *(uint *)(unaff_x19 + 0x328))) goto LAB_03dd65b4;
                            if (uVar14 <= uVar15 - 1) goto LAB_03ddcab0;
                            if (lVar31 == 0) goto LAB_03ddcaac;
                            fVar51 = *(float *)(lVar26 + (long)(int)(uVar15 - 1) * (long)iVar13 +
                                               0x68);
                            iVar13 = FUN_03dc0e20(lVar31 + 0xb0,0);
                            lVar26 = *in_stack_00000190;
                          }
                          if (lVar26 == 0) goto LAB_03ddcaac;
                          fVar46 = (float)FUN_03dc0e30(lVar26 + 0xb0,0);
                          fVar45 = in_stack_00000148;
                          if (*(char *)(in_stack_000001d0 + 0xbd) != '\0') {
                            fVar45 = 1.0;
                          }
                          uVar52 = 0;
                          fStack0000000000000178 = 0.0;
                          if ((in_stack_000001c0._4_4_ & in_stack_0000128c == 0x2026) == 0) {
                            if (*in_stack_00000190 == 0) goto LAB_03ddcaac;
                            fStack0000000000000178 =
                                 (float)FUN_03dc0e50(*in_stack_00000190 + 0xb0,0);
                            if (*in_stack_00000190 == 0) goto LAB_03ddcaac;
                            uVar52 = UnityEngine_UIElements_EventDispatcherGate__GetHashCode
                                               (*in_stack_00000190 + 0xb0,0);
                          }
                          lVar26 = *(long *)(unaff_x19 + 0x1588);
                          if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_03ddcaac;
                          fVar47 = *(float *)(unaff_x19 + 0xf0);
                          fVar48 = *(float *)(lVar26 + 0x2c);
                          fVar44 = (float)FUN_03dc1378(*(long *)(lVar26 + 0x20),0);
                          if (*in_stack_00000190 == 0) goto LAB_03ddcaac;
                          _fStack0000000000000168 = CONCAT44(uStack000000000000016c,uVar52);
                          fVar49 = (float)FUN_03dc0e80(*in_stack_00000190 + 0xb0,0);
                          if (*in_stack_00000190 == 0) goto LAB_03ddcaac;
                          fVar61 = *(float *)(unaff_x19 + 0xf0);
                          fVar50 = (float)FUN_03dc0e30(*in_stack_00000190 + 0xb0,0);
                          lVar26 = *in_stack_000001d8;
                          if (lVar26 == 0) goto LAB_03ddcaac;
                          uVar14 = *(uint *)(unaff_x19 + 0x324);
                          if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_03ddcab0;
                          lVar31 = lVar26 + (long)(int)uVar14 * unaff_x26;
                          fVar45 = ((fStack0000000000000174 * fVar51) / (float)iVar13) * fVar46 *
                                   fVar45;
                          fVar44 = fVar45 * fVar47 * fVar48 * fVar44;
                          *(undefined1 *)(lVar31 + 0x28) = 1;
                          *(float *)(lVar31 + 0x16c) = fVar44;
                          fVar51 = *(float *)(unaff_x19 + 0xd8);
                          fVar50 = fVar45 * fVar49 * fVar61 * fVar50;
                          unaff_x25 = in_stack_000001d0;
                          goto LAB_03dd6b58;
                        }
                        goto LAB_03dd6304;
                      }
                      if (cVar24 == '\x02') {
                        lVar26 = *in_stack_000001d8;
                        if (lVar26 == 0) goto LAB_03ddcaac;
                        if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001c8) goto LAB_03ddcab0;
                        unaff_x22 = *(long **)(lVar26 + (long)(int)*in_stack_000001c8 * unaff_x26 +
                                              0x30);
                        if (unaff_x22 == (long *)0x0) goto LAB_03ddcaac;
                        bVar11 = *(byte *)(*(long *)StringLiteral_8870 + 0x130);
                        if ((*(byte *)(*unaff_x22 + 0x130) < bVar11) ||
                           (*(long *)(*(long *)(*unaff_x22 + 200) + (ulong)bVar11 * 8 + -8) !=
                            *(long *)StringLiteral_8870)) {
                    /* WARNING: Subroutine does not return */
                          FUN_01c5d748(unaff_x22);
                        }
                        plVar18 = (long *)FUN_03dcd358(unaff_x22,0);
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
                        iVar13 = FUN_03dc4f30(unaff_x22,0);
                        *(int *)(unaff_x19 + 0x157c) = iVar13;
                        if (in_stack_0000128c == 0x3c) {
                          in_stack_0000128c = iVar13 + 0xe000;
                        }
                        else {
                          uVar52 = FUN_01d35248(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                          *(undefined4 *)(unaff_x19 + 0x1580) = uVar52;
                        }
                        if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03ddcaac;
                        fVar51 = *(float *)(unaff_x19 + 0xf4);
                        FUN_03dc39ac(&stack0x00001290,*(long *)(unaff_x19 + 0x68),0);
                        memcpy(&stack0x00001200,&stack0x00001290,0x60);
                        iVar13 = FUN_03dc0e20(&stack0x00001200,0);
                        if (*in_stack_00000190 == 0) goto LAB_03ddcaac;
                        FUN_03dc39ac(&stack0x00001290,*in_stack_00000190,0);
                        memcpy(&stack0x00001200,&stack0x00001290,0x60);
                        fVar45 = (float)FUN_03dc0e30(&stack0x00001200,0);
                        fVar44 = in_stack_00000148;
                        if (*(char *)(in_stack_000001d0 + 0xbd) != '\0') {
                          fVar44 = 1.0;
                        }
                        if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03ddcaac;
                        unaff_s10 = (fVar51 / (float)iVar13) * fVar45 * fVar44;
                        iVar13 = FUN_03dc0e20(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
                        unaff_s13 = *(float *)(unaff_x19 + 0xf4);
                        if (iVar13 < 1) {
                          if (*in_stack_00000190 == 0) goto LAB_03ddcaac;
                          unaff_w28 = FUN_03dc0e20(*in_stack_00000190 + 0xb0,0);
                          param_1 = *in_stack_00000190;
                          unaff_x25 = in_stack_000001d0;
                          if (param_1 != 0) goto code_r0x03dd69a8;
                          goto LAB_03ddcaac;
                        }
                        if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03ddcaac;
                        iVar13 = FUN_03dc0e20(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
                        if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03ddcaac;
                        fVar51 = (float)FUN_03dc0e30(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
                        if (unaff_x22[4] == 0) goto LAB_03ddcaac;
                        fVar45 = *(float *)((long)unaff_x22 + 0x2c);
                        fVar44 = in_stack_00000148;
                        if (*(char *)(in_stack_000001d0 + 0xbd) != '\0') {
                          fVar44 = 1.0;
                        }
                        fVar46 = (float)FUN_03dc1378(unaff_x22[4],0);
                        if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03ddcaac;
                        fStack0000000000000178 =
                             (float)FUN_03dc0e50(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
                        if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03ddcaac;
                        fVar47 = (float)FUN_03dc0e80(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
                        if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03ddcaac;
                        fVar48 = *(float *)(unaff_x19 + 0xf0);
                        fVar50 = (float)FUN_03dc0e30(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
                        if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03ddcaac;
                        fVar50 = unaff_s10 * fVar47 * fVar48 * fVar50;
                        fVar44 = (unaff_s13 / (float)iVar13) * fVar51 * fVar44 * fVar45 * fVar46;
                        fVar51 = (float)UnityEngine_UIElements_EventDispatcherGate__GetHashCode
                                                  (*(long *)(unaff_x19 + 0xe0) + 0x48,0);
                        unaff_x25 = in_stack_000001d0;
                        goto LAB_03dd6af0;
                      }
                      lVar26 = *in_stack_000001d8;
                      fVar46 = fVar45;
                      if (in_stack_0000128c == 3 || in_stack_0000128c == 0xad) {
                        fVar46 = 0.0;
                      }
                      fVar50 = 0.0;
                      if (lVar26 == 0) goto LAB_03ddcaac;
                      fStack0000000000000178 = 0.0;
                      uVar14 = *in_stack_000001c8;
                      _fStack0000000000000168 = _fStack0000000000000168 & 0xffffffff00000000;
                      unaff_x25 = in_stack_000001d0;
                      fVar44 = fVar45;
                      fVar45 = fVar46;
                      goto FUN_03dd6b70;
                    }
                    if (((in_stack_0000128c & 0xfffffffe) == 10) &&
                       (*(int *)(in_stack_000001d0 + 0x74) == 6)) {
                      fVar44 = 0.0;
                      if ((0.0 < fVar61) && (fVar44 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
                        fVar44 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
                      }
                      if (in_stack_00000110 <
                          (*(float *)(unaff_x19 + 0x374) - (*(float *)(unaff_x19 + 0x33c) - fVar61))
                          + fVar44) {
                        if (*(int *)(unaff_x19 + 0x34c) == -1) {
                          *(uint *)(unaff_x19 + 0x34c) = uVar41;
                        }
                        in_stack_000011fc = FUN_03ddfb90();
                        goto LAB_03dd83e4;
                      }
                    }
                    if ((((in_stack_0000128c - 0x2007 < 0x23) &&
                         ((1L << ((ulong)(in_stack_0000128c - 0x2007) & 0x3f) & 0x600000001U) != 0))
                        || (in_stack_0000128c - 10 < 2)) || (in_stack_0000128c == 0xa0)) {
LAB_03dd85f4:
                      if ((in_stack_0000128c == 0xad) || (in_stack_0000128c == 0x200b))
                      goto LAB_03dd8760;
                      if (in_stack_0000128c != 0x2060) {
                        lVar26 = *(long *)(in_stack_000001b8 + 0x48);
                        if (lVar26 != 0) {
                          if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar26 + 0x18)) {
                            lVar26 = lVar26 + (int)*(uint *)(unaff_x19 + 0x340) * unaff_x29;
                            *(int *)(lVar26 + 0x2c) = *(int *)(lVar26 + 0x2c) + 1;
                            *(int *)(in_stack_000001b8 + 0x18) =
                                 *(int *)(in_stack_000001b8 + 0x18) + 1;
                            goto LAB_03dd8648;
                          }
                          goto LAB_03ddcab0;
                        }
                        goto LAB_03ddcaac;
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
                      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x340))
                      goto LAB_03ddcab0;
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
                      fVar44 = *(float *)(unaff_x19 + 0xf4);
                      iVar17 = FUN_03dc0e20(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
                      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03ddcaac;
                      fVar47 = (float)FUN_03dc0e30(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
                      lVar26 = *(long *)(unaff_x19 + 0x1a00);
                      fVar46 = in_stack_00000148;
                      if (*(char *)(in_stack_000001d0 + 0xbd) != '\0') {
                        fVar46 = 1.0;
                      }
                      if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_03ddcaac;
                      fVar50 = *(float *)(unaff_x19 + 0xf0);
                      fVar54 = *(float *)(lVar26 + 0x2c);
                      fVar49 = (float)FUN_03dc1378(*(long *)(lVar26 + 0x20),0);
                      fVar61 = *_fStack0000000000000138;
                      fVar49 = fVar50 * (fVar44 / (float)iVar17) * fVar47 * fVar46 * fVar54 * fVar49
                      ;
                      fVar44 = *_fStack0000000000000130;
                      if ((in_stack_0000128c == 10) &&
                         (*(int *)(unaff_x19 + 0x324) != *(int *)(unaff_x19 + 0x328))) {
                        lVar26 = *in_stack_000001d8;
                        if (lVar26 == 0) goto LAB_03ddcaac;
                        uVar41 = *(int *)(unaff_x19 + 0x324) - 1;
                        if (*(uint *)(lVar26 + 0x18) <= uVar41) goto LAB_03ddcab0;
                        if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03ddcaac;
                        fVar46 = *(float *)(lVar26 + (long)(int)uVar41 * (long)iVar13 + 0x68);
                        iVar17 = FUN_03dc0e20(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
                        if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03ddcaac;
                        fVar50 = (float)FUN_03dc0e30(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
                        lVar26 = *(long *)(unaff_x19 + 0x1a00);
                        fVar47 = in_stack_00000148;
                        if (*(char *)(in_stack_000001d0 + 0xbd) != '\0') {
                          fVar47 = 1.0;
                        }
                        if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_03ddcaac;
                        fVar54 = *(float *)(unaff_x19 + 0xf0);
                        fVar65 = *(float *)(lVar26 + 0x2c);
                        fVar49 = (float)FUN_03dc1378(*(long *)(lVar26 + 0x20),0);
                        lVar26 = *(long *)(in_stack_000001b8 + 0x48);
                        if (lVar26 == 0) goto LAB_03ddcaac;
                        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x340))
                        goto LAB_03ddcab0;
                        lVar26 = lVar26 + (int)*(uint *)(unaff_x19 + 0x340) * unaff_x29;
                        fVar61 = *(float *)(lVar26 + 100);
                        fVar44 = *(float *)(lVar26 + 0x68);
                        fVar49 = fVar54 * (fVar46 / (float)iVar17) * fVar50 * fVar47 * fVar65 *
                                 fVar49;
                      }
                      fVar47 = *(float *)(unaff_x19 + 0x2f4);
                      fVar46 = 0.0;
                      if (*(char *)(in_stack_000001d0 + 0xb6) == '\0') {
                        if ((*(long *)(unaff_x19 + 0x1a00) == 0) ||
                           (lVar26 = *(long *)(*(long *)(unaff_x19 + 0x1a00) + 0x20), lVar26 == 0))
                        goto LAB_03ddcaac;
                        FUN_03dc133c(&stack0x00001290,lVar26,0);
                        fVar46 = (float)FUN_03dc1184(&stack0x000011b0,0);
                      }
                      fVar50 = *(float *)(unaff_x19 + 0x35c);
                      fVar44 = (in_stack_00000120._4_4_ - fVar61) - fVar44;
                      bVar7 = true;
                      if ((fVar50 <= fVar44) && (bVar7 = false, !NAN(fVar50))) {
                        bVar7 = fVar50 == -1.0;
                      }
                      if (!bVar7) {
                        fVar44 = fVar50;
                      }
                      fVar50 = 1.0;
                      if (uVar37 != 0) {
                        fVar50 = DAT_00b93264;
                      }
                      if (ABS(fVar47) + fVar49 * fVar46 * (1.0 - *(float *)(unaff_x19 + 0x1594)) <
                          fVar50 * fVar44) {
                        FUN_03ddf8fc();
                        uVar43 = *(undefined8 *)StringLiteral_8880;
                        memcpy(&stack0x00001290,in_stack_00000068,0x398);
                        FUN_025df208(in_stack_00000078,&stack0x00001290,uVar43);
                      }
                    }
                    lVar26 = *in_stack_000001d8;
                    if (lVar26 == 0) goto LAB_03ddcaac;
                    if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001c8) goto LAB_03ddcab0;
                    uVar41 = *(uint *)(unaff_x19 + 0x340);
                    lVar26 = lVar26 + (long)(int)*in_stack_000001c8 * unaff_x26;
                    *(uint *)(lVar26 + 0x6c) = uVar41;
                    *(undefined4 *)(lVar26 + 0x70) = *(undefined4 *)(unaff_x19 + 0x350);
                    if (((in_stack_000001c0._4_4_ & 1) == 0) &&
                       ((0xd < in_stack_0000128c ||
                        ((1 << (ulong)(in_stack_0000128c & 0x1f) & 0x2c00U) == 0)))) {
                      lVar26 = *(long *)(in_stack_000001b8 + 0x48);
                      if (lVar26 == 0) goto LAB_03ddcaac;
LAB_03dd8a98:
                      if (*(uint *)(lVar26 + 0x18) <= uVar41) goto LAB_03ddcab0;
                      *(undefined4 *)(lVar26 + (int)uVar41 * unaff_x29 + 0x6c) =
                           *(undefined4 *)(unaff_x19 + 0x158);
                    }
                    else {
                      lVar26 = *(long *)(in_stack_000001b8 + 0x48);
                      if (lVar26 == 0) goto LAB_03ddcaac;
                      if (*(uint *)(lVar26 + 0x18) <= uVar41) goto LAB_03ddcab0;
                      if (*(int *)(lVar26 + (int)uVar41 * unaff_x29 + 0x24) == 1) goto LAB_03dd8a98;
                    }
                    if (in_stack_0000128c != 0x200b) {
                      if (in_stack_0000128c == 9) {
                        if (*in_stack_00000190 == 0) goto LAB_03ddcaac;
                        fVar44 = (float)FUN_03dc0f18(*in_stack_00000190 + 0xb0,0);
                        if (*in_stack_00000190 == 0) goto LAB_03ddcaac;
                        bVar11 = FUN_03dc400c(*in_stack_00000190,0);
                        fVar46 = *(float *)(unaff_x19 + 0x2f4);
                        fVar47 = fVar45 * fVar44 * (float)bVar11;
                        fVar44 = fVar47 * (float)(int)(fVar46 / fVar47);
                        if (fVar44 <= fVar46) {
                          fVar44 = fVar46 + fVar47;
                        }
                      }
                      else {
                        fVar44 = *(float *)(unaff_x19 + 0x2f0);
                        if (fVar44 == 0.0) {
                          fVar46 = *(float *)(unaff_x19 + 0x2f4);
                          if (*(char *)(in_stack_000001d0 + 0xb6) != '\0') {
                            fVar44 = (float)FUN_03dc321c(&stack0x000011d0,0);
                            if (*in_stack_00000190 != 0) {
                              fVar47 = (float)FUN_03dc3fcc(*in_stack_00000190,0);
                              fVar46 = fVar46 - (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                                (*(float *)(unaff_x19 + 0x2ec) +
                                                fVar45 * fVar44 +
                                                in_stack_00000150 *
                                                (fStack0000000000000140 +
                                                fStack0000000000000180 + fVar47));
                              *(float *)(unaff_x19 + 0x2f4) = fVar46;
                              if ((uVar14 == 0) && (in_stack_0000128c != 0x200b)) goto LAB_03dd8c54;
                              fVar44 = fVar46 - in_stack_00000150 *
                                                *(float *)(in_stack_000001d0 + 0xc4);
                              goto LAB_03dd8c50;
                            }
                            goto LAB_03ddcaac;
                          }
                          fVar44 = (float)FUN_03dc1184(&stack0x000011e0,0);
                          fVar48 = *(float *)(unaff_x19 + 0x19a8);
                          fVar47 = (float)FUN_03dc321c(&stack0x000011d0,0);
                          if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03ddcaac;
                          fVar49 = (float)FUN_03dc3fcc(*(long *)(unaff_x19 + 0x68),0);
                          fVar46 = fVar46 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                            (*(float *)(unaff_x19 + 0x2ec) +
                                            fVar45 * (fVar44 * fVar48 + fVar47) +
                                            in_stack_00000150 *
                                            (fStack0000000000000140 +
                                            fStack0000000000000180 + fVar49));
                        }
                        else {
                          if (*in_stack_00000190 == 0) goto LAB_03ddcaac;
                          fVar46 = *(float *)(unaff_x19 + 0x2f4);
                          fVar47 = (float)FUN_03dc3fcc(*in_stack_00000190,0);
                          fVar46 = fVar46 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                            (*(float *)(unaff_x19 + 0x2ec) +
                                            (fVar44 - fVar48) +
                                            in_stack_00000150 * (fStack0000000000000180 + fVar47));
                        }
                        *(float *)(unaff_x19 + 0x2f4) = fVar46;
                        if ((uVar14 == 0) && (in_stack_0000128c != 0x200b)) goto LAB_03dd8c54;
                        fVar44 = fVar46 + in_stack_00000150 * *(float *)(in_stack_000001d0 + 0xc4);
                      }
LAB_03dd8c50:
                      *(float *)(unaff_x19 + 0x2f4) = fVar44;
                    }
LAB_03dd8c54:
                    lVar26 = *in_stack_000001d8;
                    if (lVar26 == 0) goto LAB_03ddcaac;
                    uVar41 = *in_stack_000001c8;
                    if (*(uint *)(lVar26 + 0x18) <= uVar41) goto LAB_03ddcab0;
                    *(undefined4 *)(lVar26 + (long)(int)uVar41 * unaff_x26 + 0x164) =
                         *(undefined4 *)(unaff_x19 + 0x2f4);
                    if (in_stack_0000128c == 0xd) {
                      *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
                    }
                    if ((*(int *)(in_stack_000001d0 + 0x74) == 5) &&
                       (((0xd < in_stack_0000128c ||
                         ((1 << (ulong)(in_stack_0000128c & 0x1f) & 0x2c00U) == 0)) &&
                        (1 < in_stack_0000128c - 0x2028)))) {
                      lVar26 = *in_stack_00000050;
                      if (lVar26 == 0) goto LAB_03ddcaac;
                      uVar37 = *(uint *)(unaff_x19 + 0x350);
                      if (*(int *)(lVar26 + 0x18) < (int)(uVar37 + 1)) {
                        if (*(int *)(*(long *)StringLiteral_8875 + 0xe0) == 0) {
                          thunk_FUN_01c1d1e8();
                        }
                        FUN_0243bfd8(in_stack_00000050,uVar37 + 1,1,
                                     *(undefined8 *)StringLiteral_8873);
                        lVar26 = *in_stack_00000050;
                        if (lVar26 == 0) goto LAB_03ddcaac;
                        uVar37 = *(uint *)(unaff_x19 + 0x350);
                      }
                      if (*(uint *)(lVar26 + 0x18) <= uVar37) goto LAB_03ddcab0;
                      lVar31 = lVar26 + (long)(int)uVar37 * 0x14;
                      *(undefined4 *)(lVar31 + 0x28) = *(undefined4 *)(unaff_x19 + 0x19c8);
                      fVar44 = *(float *)(unaff_x19 + 0x378);
                      if (*(float *)(lVar31 + 0x30) <= *(float *)(unaff_x19 + 0x378)) {
                        fVar44 = *(float *)(lVar31 + 0x30);
                      }
                      *(float *)(lVar31 + 0x30) = fVar44;
                      if (*(char *)(unaff_x19 + 0x37c) != '\0') {
                        *(undefined1 *)(unaff_x19 + 0x37c) = 0;
                        *(undefined4 *)(lVar26 + (long)(int)uVar37 * 0x14 + 0x20) =
                             *(undefined4 *)(unaff_x19 + 0x324);
                      }
                      uVar41 = *in_stack_000001c8;
                      *(uint *)(lVar26 + (long)(int)uVar37 * 0x14 + 0x24) = uVar41;
                    }
                    if (((in_stack_0000128c < 0xc) &&
                        ((1 << (ulong)(in_stack_0000128c & 0x1f) & 0xc08U) != 0)) ||
                       ((in_stack_0000128c - 0x2028 < 2 ||
                        (((in_stack_000001c0._4_4_ & in_stack_0000128c == 0x2d) != 0 ||
                         (uVar41 == uStack00000000000000e4)))))) {
                      if (0.0 < *(float *)(unaff_x19 + 0x2e0)) {
                        fVar44 = *(float *)(unaff_x19 + 0x338);
                        fVar46 = *(float *)(unaff_x19 + 0x15ac);
                        if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
                          thunk_FUN_01c1d1e8();
                        }
                        fVar44 = fVar44 - fVar46;
                        if (((fStack00000000000000b0 < ABS(fVar44)) &&
                            (*(char *)(unaff_x19 + 0x2e8) == '\0')) &&
                           (*(char *)(unaff_x19 + 0x37c) != '\x01')) {
                          uVar52 = *(undefined4 *)(unaff_x19 + 0x328);
                          uVar53 = *(undefined4 *)(unaff_x19 + 0x324);
                          if (*(int *)(*(long *)StringLiteral_8871 + 0xe0) == 0) {
                            thunk_FUN_01c1d1e8();
                          }
                          FUN_03dedad8(fVar44,uVar52,uVar53,in_stack_000001b8,0);
                          *(float *)(unaff_x19 + 0x378) = *(float *)(unaff_x19 + 0x378) - fVar44;
                          *(float *)(unaff_x19 + 0x2e0) = fVar44 + *(float *)(unaff_x19 + 0x2e0);
                          if (*(int *)(unaff_x19 + 0xad8) == *(int *)(unaff_x19 + 0x340)) {
                            FUN_025df310(&stack0x00001290,in_stack_00000078,
                                         *(undefined8 *)StringLiteral_8879);
                            memcpy(&stack0x00000220,&stack0x00001290,0x398);
                            memcpy(in_stack_00000068,&stack0x00000220,0x398);
                            *(float *)(unaff_x19 + 0xaf0) = fVar44 + *(float *)(unaff_x19 + 0xaf0);
                            *(float *)(unaff_x19 + 0xb24) = fVar44 + *(float *)(unaff_x19 + 0xb24);
                            uVar43 = *(undefined8 *)StringLiteral_8880;
                            memcpy(&stack0x00001290,in_stack_00000068,0x398);
                            FUN_025df208(in_stack_00000078,&stack0x00001290,uVar43);
                          }
                        }
                      }
                      fVar46 = *(float *)(unaff_x19 + 0x2e0);
                      *(undefined1 *)(unaff_x19 + 0x37c) = 0;
                      fVar47 = *(float *)(unaff_x19 + 0x33c) - fVar46;
                      fVar44 = *(float *)(unaff_x19 + 0x378);
                      if (fVar47 <= *(float *)(unaff_x19 + 0x378)) {
                        fVar44 = fVar47;
                      }
                      *(float *)(unaff_x19 + 0x378) = fVar44;
                      plVar18 = (long *)PTR_DAT_0422fae0;
                      fVar48 = *(float *)(unaff_x19 + 0x338);
                      if (in_stack_00001284 == '\0') {
                        in_stack_00001288 = fVar44;
                      }
                      if ((*(char *)(in_stack_000001d0 + 0xe8) != '\0') &&
                         ((*(int *)(in_stack_000001d0 + 0xd8) <= (int)*in_stack_000001c8 ||
                          (*(int *)(in_stack_000001d0 + 0xe0) <= *(int *)(unaff_x19 + 0x340))))) {
                        in_stack_00001284 = '\x01';
                      }
                      lVar26 = *(long *)(in_stack_000001b8 + 0x48);
                      if (lVar26 == 0) goto LAB_03ddcaac;
                      uVar41 = *(uint *)(unaff_x19 + 0x340);
                      if (*(uint *)(lVar26 + 0x18) <= uVar41) goto LAB_03ddcab0;
                      iVar17 = *(int *)(unaff_x19 + 0x328);
                      lVar31 = lVar26 + (long)(int)uVar41 * 0x60;
                      *(int *)(lVar31 + 0x38) = iVar17;
                      uVar37 = *(uint *)(unaff_x19 + 0x328);
                      if (iVar17 <= (int)*(uint *)(unaff_x19 + 0x330)) {
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
                      *(int *)(lVar31 + 0x24) = (iVar1 - iVar17) + 1;
                      *(undefined4 *)(lVar31 + 0x28) = *(undefined4 *)(unaff_x19 + 0x344);
                      *(undefined4 *)(lVar31 + 0x30) = *(undefined4 *)(unaff_x19 + 0x348);
                      lVar31 = *in_stack_000001d8;
                      if (lVar31 == 0) goto LAB_03ddcaac;
                      if (*(uint *)(lVar31 + 0x18) <= uVar37) goto LAB_03ddcab0;
                      uVar52 = *(undefined4 *)(lVar31 + (long)(int)uVar37 * (long)iVar13 + 0x124);
                      lVar26 = lVar26 + (long)(int)uVar41 * 0x60;
                      *(float *)(lVar26 + 0x74) = fVar47;
                      *(undefined4 *)(lVar26 + 0x70) = uVar52;
                      lVar26 = *(long *)(in_stack_000001b8 + 0x48);
                      if (lVar26 == 0) goto LAB_03ddcaac;
                      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x340))
                      goto LAB_03ddcab0;
                      lVar31 = *in_stack_000001d8;
                      if (lVar31 == 0) goto LAB_03ddcaac;
                      if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x334))
                      goto LAB_03ddcab0;
                      uVar52 = *(undefined4 *)
                                (lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x334) * unaff_x26 +
                                0x130);
                      fVar48 = fVar48 - fVar46;
                      lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                      *(float *)(lVar26 + 0x7c) = fVar48;
                      *(undefined4 *)(lVar26 + 0x78) = uVar52;
                      lVar26 = *(long *)(in_stack_000001b8 + 0x48);
                      if (lVar26 == 0) goto LAB_03ddcaac;
                      uVar41 = *(uint *)(unaff_x19 + 0x340);
                      if (*(uint *)(lVar26 + 0x18) <= uVar41) goto LAB_03ddcab0;
                      lVar31 = lVar26 + (long)(int)uVar41 * 0x60;
                      *(float *)(lVar31 + 0x48) = *(float *)(lVar31 + 0x78) - fVar45 * fVar51;
                      *(undefined4 *)(lVar31 + 0x60) = uStack000000000000016c;
                      if (*(int *)(lVar31 + 0x24) == 1) {
                        *(undefined4 *)(lVar26 + (long)(int)uVar41 * 0x60 + 0x6c) =
                             *(undefined4 *)(unaff_x19 + 0x158);
                      }
                      if (*in_stack_00000190 == 0) goto LAB_03ddcaac;
                      fVar44 = (float)FUN_03dc3fcc(*in_stack_00000190,0);
                      lVar26 = *in_stack_000001d8;
                      if (lVar26 == 0) goto LAB_03ddcaac;
                      lVar31 = (long)(int)*(uint *)(unaff_x19 + 0x334);
                      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x334))
                      goto LAB_03ddcab0;
                      lVar32 = *(long *)(in_stack_000001b8 + 0x48);
                      if (lVar32 == 0) goto LAB_03ddcaac;
                      uVar41 = *(uint *)(unaff_x19 + 0x340);
                      if (((*(char *)(lVar26 + lVar31 * unaff_x26 + 0x1a0) == '\0') &&
                          (lVar31 = (long)(int)*(uint *)(unaff_x19 + 0x32c),
                          *(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x32c))) ||
                         (uVar37 = (uint)*(undefined8 *)(lVar32 + 0x18), uVar37 <= uVar41))
                      goto LAB_03ddcab0;
                      fVar46 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                               (*(float *)(unaff_x19 + 0x2ec) +
                               in_stack_00000150 *
                               (fStack0000000000000140 + fStack0000000000000180 + fVar44));
                      fVar44 = -fVar46;
                      if (*(char *)(in_stack_000001d0 + 0xb6) != '\0') {
                        fVar44 = fVar46;
                      }
                      *(float *)(lVar32 + (long)(int)uVar41 * 0x60 + 0x5c) =
                           *(float *)(lVar26 + lVar31 * unaff_x26 + 0x164) + fVar44;
                      if (uVar37 <= uVar41) goto LAB_03ddcab0;
                      lVar32 = lVar32 + (long)(int)uVar41 * 0x60;
                      *(float *)(lVar32 + 0x54) = 0.0 - *(float *)(unaff_x19 + 0x2e0);
                      *(float *)(lVar32 + 0x58) = fVar47;
                      *(float *)(lVar32 + 0x4c) = in_stack_000000a8._4_4_ + (fVar48 - fVar47);
                      *(float *)(lVar32 + 0x50) = fVar48;
                      if ((int)in_stack_0000128c < 0x2d) {
                        if (in_stack_0000128c - 10 < 2) {
LAB_03dd9208:
                          FUN_03ddf8fc();
                          uVar14 = *(uint *)(unaff_x19 + 0x324);
                          iVar17 = *(int *)(unaff_x19 + 0x340) + 1;
                          *(int *)(unaff_x19 + 0x340) = iVar17;
                          *(uint *)(unaff_x19 + 0x328) = uVar14 + 1;
                          in_stack_000001c8[8] = 0;
                          in_stack_000001c8[9] = 0;
                          if (*(long *)(in_stack_000001b8 + 0x48) != 0) {
                            if (*(int *)(*(long *)(in_stack_000001b8 + 0x48) + 0x18) <= iVar17) {
                              if (*(int *)(*(long *)StringLiteral_8871 + 0xe0) == 0) {
                                thunk_FUN_01c1d1e8();
                              }
                              FUN_03dedc58(iVar17,in_stack_000001b8,0);
                              uVar14 = *in_stack_000001c8;
                            }
                            lVar26 = *in_stack_000001d8;
                            if (lVar26 != 0) {
                              if (uVar14 < *(uint *)(lVar26 + 0x18)) {
                                fVar44 = *(float *)(lVar26 + (long)(int)uVar14 * (long)iVar13 +
                                                   0x158);
                                if (*(float *)(unaff_x19 + 0x2e4) == DAT_00b932ec) {
                                  if ((in_stack_0000128c == 0x2029) ||
                                     (fVar46 = 0.0, in_stack_0000128c == 10)) {
                                    fVar46 = *(float *)(in_stack_000001d0 + 0xcc);
                                  }
                                  uVar23 = 0;
                                  fVar46 = fVar44 + (0.0 - *(float *)(unaff_x19 + 0x33c)) +
                                           fStack0000000000000088 *
                                           (fStack0000000000000084 + *(float *)(unaff_x19 + 0x15b0))
                                           + in_stack_00000150 *
                                             (*(float *)(in_stack_000001d0 + 200) + fVar46) +
                                           *(float *)(unaff_x19 + 0x2e0);
                                }
                                else {
                                  if ((in_stack_0000128c == 0x2029) ||
                                     (fVar46 = 0.0, in_stack_0000128c == 10)) {
                                    fVar46 = *(float *)(in_stack_000001d0 + 0xcc);
                                  }
                                  uVar23 = 1;
                                  fVar46 = *(float *)(unaff_x19 + 0x2e0) +
                                           *(float *)(unaff_x19 + 0x2e4) +
                                           in_stack_00000150 *
                                           (*(float *)(in_stack_000001d0 + 200) + fVar46);
                                }
                                *(float *)(unaff_x19 + 0x2e0) = fVar46;
                                *(float *)(unaff_x19 + 0x15ac) = fVar44;
                                *(undefined1 *)(unaff_x19 + 0x2e8) = uVar23;
                                *(undefined8 *)(unaff_x19 + 0x338) = _uStack0000000000000090;
                                *(float *)(unaff_x19 + 0x2f4) =
                                     *(float *)(unaff_x19 + 0x2f8) + 0.0 +
                                     *(float *)(unaff_x19 + 0x2fc);
                                FUN_03ddf8fc();
                                FUN_03ddf8fc();
                                bStack00000000000000e0 = 1;
                                *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
                                uStack00000000000000b4 = 1;
                                goto LAB_03dd6304;
                              }
                              goto LAB_03ddcab0;
                            }
                          }
                          goto LAB_03ddcaac;
                        }
                        if (in_stack_0000128c == 3) {
                          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03ddcaac;
                          in_stack_000011fc =
                               (uint)*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
                        }
                      }
                      else if ((in_stack_0000128c - 0x2028 < 2) || (in_stack_0000128c == 0x2d))
                      goto LAB_03dd9208;
                    }
                    else {
                      lVar26 = *in_stack_000001d8;
                      plVar18 = (long *)PTR_DAT_0422fae0;
                      if (lVar26 == 0) goto LAB_03ddcaac;
                    }
                    uVar41 = *in_stack_000001c8;
                    if (*(uint *)(lVar26 + 0x18) <= uVar41) goto LAB_03ddcab0;
                    if (*(char *)(lVar26 + (long)(int)uVar41 * unaff_x26 + 0x1a0) != '\0') {
                      lVar26 = lVar26 + (long)(int)uVar41 * unaff_x26;
                      uVar19 = *(ulong *)(unaff_x19 + 0x360);
                      uVar21 = *(ulong *)(lVar26 + 0x124);
                      *(ulong *)(unaff_x19 + 0x360) =
                           uVar19 ^ (uVar19 ^ uVar21) &
                                    ~CONCAT44(-(uint)((float)(uVar19 >> 0x20) <
                                                     (float)(uVar21 >> 0x20)),
                                              -(uint)((float)uVar19 < (float)uVar21));
                      uVar19 = *(ulong *)(unaff_x19 + 0x368);
                      uVar21 = *(ulong *)(lVar26 + 0x130);
                      *(ulong *)(unaff_x19 + 0x368) =
                           uVar19 ^ (uVar19 ^ uVar21) &
                                    ~CONCAT44(-(uint)((float)(uVar21 >> 0x20) <
                                                     (float)(uVar19 >> 0x20)),
                                              -(uint)((float)uVar21 < (float)uVar19));
                    }
                    if ((iStack000000000000008c != 0) ||
                       ((*(uint *)(in_stack_000001d0 + 0x74) < 7 &&
                        ((1 << (ulong)(*(uint *)(in_stack_000001d0 + 0x74) & 0x1f) & 0x4aU) != 0))))
                    {
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
                               (lVar26 = FUN_03df0e80(in_stack_00000060,0), lVar26 == 0))
                            goto LAB_03ddcaac;
                            if (*(char *)(lVar26 + 0x28) != '\0') goto LAB_03dd9574;
                          }
                          lVar26 = FUN_03df0e80(in_stack_00000060,0);
                          if ((lVar26 == 0) || (lVar26 = FUN_03df2ef4(lVar26,0), lVar26 == 0))
                          goto LAB_03ddcaac;
                          uVar19 = FUN_02b9e934(lVar26,in_stack_0000128c,
                                                *(undefined8 *)StringLiteral_6266);
                          if ((int)*in_stack_000001c8 < (int)uStack00000000000000e4) {
                            lVar26 = FUN_03df0e80(in_stack_00000060,0);
                            if (lVar26 == 0) goto LAB_03ddcaac;
                            lVar26 = FUN_03df30f0(lVar26,0);
                            lVar31 = *in_stack_000001d8;
                            if (lVar31 == 0) goto LAB_03ddcaac;
                            if (*(uint *)(lVar31 + 0x18) <= *in_stack_000001c8 + 1)
                            goto LAB_03ddcab0;
                            if (lVar26 == 0) goto LAB_03ddcaac;
                            uVar21 = FUN_02b9e934(lVar26,*(undefined2 *)
                                                          (lVar31 + (long)(int)(*in_stack_000001c8 +
                                                                               1) * (long)iVar13 +
                                                          0x20),*(undefined8 *)StringLiteral_6266);
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
                            if (uVar15 != uVar29 || ((bStack00000000000000e0 ^ 0xff) & 1) != 0)
                            goto LAB_03dd9b5c;
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
                             ((in_stack_000000c0 & 1) == 0 && in_stack_0000128c == 0xad))
                          goto LAB_03dd96a0;
                        }
                        FUN_03ddf8fc();
                        bStack00000000000000e0 = 1;
                      }
                      else {
                        if (*(char *)(unaff_x19 + 0x37d) == '\x01') goto LAB_03dd965c;
                        if (((in_stack_0000128c - 0x2007 < 0x29) &&
                            ((1L << ((ulong)(in_stack_0000128c - 0x2007) & 0x3f) & 0x10000000401U)
                             != 0)) ||
                           ((in_stack_0000128c == 0xa0 || (in_stack_0000128c == 0x2060))))
                        goto LAB_03dd952c;
                        FUN_03ddf8fc();
                        bStack00000000000000e0 = 0;
                        *(undefined4 *)(unaff_x19 + 0x11e0) = 0xffffffff;
                      }
                    }
LAB_03dd9b5c:
                    FUN_03ddf8fc();
                    *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
                    goto LAB_03dd6304;
                  }
                  goto LAB_03ddcab0;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03ddcaac:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
LAB_03dda7b8:
  do {
    uVar14 = uVar29 - 1;
    if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_03ddcab0;
    lVar42 = (long)(int)uVar14;
    lVar32 = lVar26 + lVar42 * 0x188;
    lVar30 = *(long *)(lVar32 + 0x40);
    uVar2 = *(ushort *)(lVar32 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    bVar11 = FUN_0324a054(uVar2,0);
    if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_03ddcab0;
    lVar32 = *(long *)(in_stack_000001b8 + 0x48);
    uVar41 = (uint)uVar2;
    if (lVar32 == 0) goto LAB_03ddcaac;
    uVar37 = *(uint *)(lVar26 + lVar42 * 0x188 + 0x6c);
    if (*(uint *)(lVar32 + 0x18) <= uVar37) goto LAB_03ddcab0;
    lVar33 = (long)(int)uVar37;
    lVar32 = lVar32 + lVar33 * 0x60;
    uVar4 = *(uint *)(lVar32 + 0x40);
    uVar40 = *(uint *)(lVar32 + 0x6c);
    iVar16 = *(int *)(lVar32 + 0x20);
    iVar13 = *(int *)(lVar32 + 0x28);
    iVar17 = *(int *)(lVar32 + 0x2c);
    uVar5 = *(uint *)(lVar32 + 0x44);
    lVar34 = (long)(int)uVar5;
    fVar49 = *(float *)(lVar32 + 0x50);
    fVar61 = *(float *)(lVar32 + 0x58);
    fVar46 = *(float *)(lVar32 + 0x5c);
    fVar47 = *(float *)(lVar32 + 0x60);
    fVar65 = *(float *)(lVar32 + 100);
    fVar54 = *(float *)(lVar32 + 0x70);
    fVar56 = *(float *)(lVar32 + 0x74);
    fVar48 = *(float *)(lVar32 + 0x78);
    fVar50 = *(float *)(lVar32 + 0x7c);
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
        fVar46 = fVar54 + fVar48;
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
          if (uVar41 < 0xad) {
            if ((uVar41 != 3) && (uVar41 != 10)) goto LAB_03ddad30;
          }
          else if ((uVar41 != 0xad) && ((uVar41 != 0x200b && (uVar41 != 0x2060)))) {
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
            if ((fVar46 <= fVar47) && (!bVar9 && (uVar40 >> 4 & 1) == 0)) {
              fStack000000000000015c = fVar65;
              if (*(char *)(in_stack_000001d0 + 0xb6) != '\0') {
                fStack000000000000015c = fVar47 + fVar65;
              }
              goto LAB_03ddaa94;
            }
            if ((uVar29 == 1) || (uVar37 != uVar15)) {
              cVar24 = *(char *)(in_stack_000001d0 + 0xb6);
            }
            else {
              cVar24 = *(char *)(in_stack_000001d0 + 0xb6);
              if (uVar14 != *(uint *)(in_stack_000001d0 + 0xe4)) {
                iVar17 = (iVar17 - iVar16) - (uStack0000000000000090 & 1);
                fVar65 = -fVar46;
                if (cVar24 != '\0') {
                  fVar65 = fVar46;
                }
                if (iVar17 < 1) {
                  fVar46 = 1.0;
                }
                else {
                  fVar46 = *(float *)(in_stack_000001d0 + 0x7c);
                }
                if (iVar17 < 2) {
                  iVar17 = 1;
                }
                fVar47 = fVar47 + fVar65;
                if (uVar41 == 9) {
LAB_03ddc7d8:
                  if (cVar24 != '\0') {
                    fVar47 = fVar47 * (1.0 - fVar46);
                    fVar65 = (float)iVar17;
LAB_03ddc814:
                    fStack000000000000015c = fStack000000000000015c - fVar47 / fVar65;
                    break;
                  }
                  fVar65 = (float)iVar17;
                  fVar47 = fVar47 * (1.0 - fVar46);
                }
                else {
                  if (uVar41 != 0xa0) {
                    if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    uVar22 = FUN_0324dc50(uVar41,0);
                    cVar24 = *(char *)(in_stack_000001d0 + 0xb6);
                    if ((uVar22 & 1) != 0) goto LAB_03ddc7d8;
                  }
                  fVar47 = fVar47 * fVar46;
                  fVar65 = (float)(int)((iVar16 - (~uStack0000000000000090 & 1)) + iVar13);
                  if (cVar24 != '\0') goto LAB_03ddc814;
                }
                fStack000000000000015c = fStack000000000000015c + fVar47 / fVar65;
                _in_stack_00000148 =
                     CONCAT44((float)((ulong)_in_stack_00000148 >> 0x20) + 0.0,
                              (float)_in_stack_00000148 + 0.0);
                break;
              }
            }
            fStack000000000000015c = fVar65;
            if (cVar24 != '\0') {
              fStack000000000000015c = fVar47 + fVar65;
            }
            if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uStack0000000000000090 = FUN_0324dc50(uVar41,0);
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
          fStack000000000000015c = fVar65 + 0.0;
        }
        else {
          fStack000000000000015c = 0.0 - fVar46;
        }
        break;
      case 0x1002:
switchD_03dda918_caseD_1002:
LAB_03ddaa90:
        fStack000000000000015c = (fVar65 + fVar47 * 0.5) - fVar46 * 0.5;
        break;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        goto switchD_03dda918_caseD_1003;
      case 0x1004:
UnityEngine_UIElements_UIDocument__FindUIDocumentParent:
        fStack000000000000015c = (fVar47 + fVar65) - fVar46;
        if (*(char *)(in_stack_000001d0 + 0xb6) != '\0') {
          fStack000000000000015c = fVar47 + fVar65;
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
    lVar32 = lVar26 + lVar42 * 0x188;
    fVar65 = in_stack_00000120._4_4_ + fStack000000000000015c;
    fVar46 = (float)uStack0000000000000118 + (float)_in_stack_00000148;
    fVar47 = (float)((ulong)uStack0000000000000118 >> 0x20) +
             (float)((ulong)_in_stack_00000148 >> 0x20);
    if (*(char *)(lVar32 + 0x1a0) == '\0') goto LAB_03ddb2e8;
    cVar24 = *(char *)(lVar26 + lVar42 * 0x188 + 0x28);
    if (cVar24 != '\x01') goto LAB_03ddb098;
    fVar45 = fmodf(*(float *)(in_stack_000001d0 + 0xfc) * (float)(int)uVar37,1.0);
    switch(*(undefined4 *)(in_stack_000001d0 + 0xf4)) {
    case 0:
      lVar28 = lVar26 + lVar42 * 0x188;
      *(undefined4 *)(lVar28 + 0xbc) = 0;
      *(undefined4 *)(lVar28 + 0x94) = 0;
      *(undefined4 *)(lVar28 + 0xe4) = 0x3f800000;
      fVar45 = 1.0;
      break;
    case 1:
      fVar50 = *(float *)(lVar26 + lVar42 * 0x188 + 0xa0);
      if (*(int *)(in_stack_000001d0 + 0x70) == 0x208) {
        lVar28 = lVar26 + lVar42 * 0x188;
        fVar48 = (fStack000000000000015c + fVar50) - *(float *)(unaff_x19 + 0x360);
        fVar50 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
        goto LAB_03ddac48;
      }
      lVar28 = lVar26 + lVar42 * 0x188;
      fVar48 = fVar48 - fVar54;
      *(float *)(lVar28 + 0xbc) = fVar45 + (fVar50 - fVar54) / fVar48;
      *(float *)(lVar28 + 0x94) = fVar45 + (*(float *)(lVar28 + 0x78) - fVar54) / fVar48;
      *(float *)(lVar28 + 0xe4) = fVar45 + (*(float *)(lVar28 + 200) - fVar54) / fVar48;
      fVar45 = fVar45 + (*(float *)(lVar28 + 0xf0) - fVar54) / fVar48;
      break;
    case 2:
      lVar28 = lVar26 + lVar42 * 0x188;
      fVar50 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
      fVar48 = (fStack000000000000015c + *(float *)(lVar28 + 0xa0)) - *(float *)(unaff_x19 + 0x360);
LAB_03ddac48:
      *(float *)(lVar28 + 0xbc) = fVar45 + fVar48 / fVar50;
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
        lVar28 = lVar26 + lVar42 * 0x188;
        *(undefined4 *)(lVar28 + 0xc0) = 0;
        *(undefined4 *)(lVar28 + 0x98) = 0x3f800000;
        *(undefined4 *)(lVar28 + 0xe8) = 0;
        *(undefined4 *)(lVar28 + 0x110) = 0x3f800000;
        break;
      case 1:
        lVar28 = lVar26 + lVar42 * 0x188;
        fVar50 = fVar50 - fVar56;
        fVar48 = fVar45 + (*(float *)(lVar28 + 0xa4) - fVar56) / fVar50;
        fVar50 = fVar45 + (*(float *)(lVar28 + 0x7c) - fVar56) / fVar50;
        *(float *)(lVar28 + 0xc0) = fVar48;
        *(float *)(lVar28 + 0x98) = fVar50;
        *(float *)(lVar28 + 0xe8) = fVar48;
        *(float *)(lVar28 + 0x110) = fVar50;
        break;
      case 2:
        lVar28 = lVar26 + lVar42 * 0x188;
        fVar48 = fVar45 + (*(float *)(lVar28 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
                          (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
        *(float *)(lVar28 + 0xc0) = fVar48;
        fVar50 = *(float *)(unaff_x19 + 0x364);
        fVar54 = *(float *)(unaff_x19 + 0x36c);
        *(float *)(lVar28 + 0xe8) = fVar48;
        fVar48 = fVar45 + (*(float *)(lVar28 + 0x7c) - fVar50) / (fVar54 - fVar50);
        *(float *)(lVar28 + 0x98) = fVar48;
        *(float *)(lVar28 + 0x110) = fVar48;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_03d03d14(*(undefined8 *)StringLiteral_5974,0);
        uVar40 = (uint)*(undefined8 *)(lVar26 + 0x18);
      }
      if (uVar40 <= uVar14) goto LAB_03ddcab0;
      lVar28 = lVar26 + lVar42 * 0x188;
      fVar48 = *(float *)(lVar28 + 0x168);
      fVar50 = (1.0 - (*(float *)(lVar28 + 0xc0) + *(float *)(lVar28 + 0x98)) * fVar48) * 0.5;
      fVar54 = fVar45 + *(float *)(lVar28 + 0xc0) * fVar48 + fVar50;
      fVar45 = fVar45 + *(float *)(lVar28 + 0x98) * fVar48 + fVar50;
      *(float *)(lVar28 + 0xbc) = fVar54;
      *(float *)(lVar28 + 0x94) = fVar54;
      *(float *)(lVar28 + 0xe4) = fVar45;
      break;
    default:
      goto switchD_03ddab74_default;
    }
    *(float *)(lVar26 + lVar42 * 0x188 + 0x10c) = fVar45;
switchD_03ddab74_default:
    switch(*(undefined4 *)(in_stack_000001d0 + 0xf8)) {
    case 0:
      if (uVar40 <= uVar14) goto LAB_03ddcab0;
      lVar28 = lVar26 + lVar42 * 0x188;
      *(undefined4 *)(lVar28 + 0xc0) = 0;
      *(undefined4 *)(lVar28 + 0x98) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0xe8) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0x110) = 0;
      break;
    case 1:
      if (uVar14 < uVar40) {
        lVar28 = lVar26 + lVar42 * 0x188;
        fVar49 = fVar49 - fVar61;
        fVar45 = (*(float *)(lVar28 + 0xa4) - fVar61) / fVar49;
        fVar49 = (*(float *)(lVar28 + 0x7c) - fVar61) / fVar49;
        *(float *)(lVar28 + 0xc0) = fVar45;
        goto LAB_03ddafc4;
      }
      goto LAB_03ddcab0;
    case 2:
      if (uVar40 <= uVar14) goto LAB_03ddcab0;
      lVar28 = lVar26 + lVar42 * 0x188;
      fVar45 = (*(float *)(lVar28 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
      *(float *)(lVar28 + 0xc0) = fVar45;
      fVar49 = (*(float *)(lVar28 + 0x7c) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
LAB_03ddafc4:
      *(float *)(lVar28 + 0x98) = fVar49;
      *(float *)(lVar28 + 0xe8) = fVar49;
      *(float *)(lVar28 + 0x110) = fVar45;
      break;
    case 3:
      if (uVar40 <= uVar14) goto LAB_03ddcab0;
      lVar28 = lVar26 + lVar42 * 0x188;
      fVar49 = *(float *)(lVar28 + 0x168);
      fVar48 = (1.0 - (*(float *)(lVar28 + 0xbc) + *(float *)(lVar28 + 0xe4)) / fVar49) * 0.5;
      fVar45 = *(float *)(lVar28 + 0xbc) / fVar49 + fVar48;
      fVar48 = *(float *)(lVar28 + 0xe4) / fVar49 + fVar48;
      *(float *)(lVar28 + 0xc0) = fVar45;
      *(float *)(lVar28 + 0x98) = fVar48;
      *(float *)(lVar28 + 0x110) = fVar45;
      *(float *)(lVar28 + 0xe8) = fVar48;
    }
    if (uVar40 <= uVar14) goto LAB_03ddcab0;
    lVar28 = lVar26 + lVar42 * 0x188;
    fVar45 = *(float *)(lVar28 + 0x16c) * (1.0 - *(float *)(unaff_x19 + 0x1594));
    if ((*(char *)(lVar28 + 100) == '\0') && ((*(byte *)(lVar26 + lVar42 * 0x188 + 0x19c) & 1) != 0)
       ) {
      fVar45 = -fVar45;
    }
    lVar28 = lVar26 + lVar42 * 0x188;
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
          bVar9 = *(uint *)(lVar26 + lVar42 * 0x188 + 0x70) == uStack0000000000000080;
          goto LAB_03ddb10c;
        }
        goto LAB_03ddcab0;
      }
      if (uVar40 <= uVar14) goto LAB_03ddcab0;
LAB_03ddb118:
      lVar32 = lVar26 + lVar42 * 0x188;
      *(ulong *)(lVar32 + 0xa0) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar32 + 0xa0) >> 0x20),
                    fVar65 + (float)*(undefined8 *)(lVar32 + 0xa0));
      *(float *)(lVar32 + 0xa8) = fVar47 + *(float *)(lVar32 + 0xa8);
      *(ulong *)(lVar32 + 0x78) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar32 + 0x78) >> 0x20),
                    fVar65 + (float)*(undefined8 *)(lVar32 + 0x78));
      *(float *)(lVar32 + 0x80) = fVar47 + *(float *)(lVar32 + 0x80);
      *(ulong *)(lVar32 + 200) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar32 + 200) >> 0x20),
                    fVar65 + (float)*(undefined8 *)(lVar32 + 200));
      *(float *)(lVar32 + 0xd0) = fVar47 + *(float *)(lVar32 + 0xd0);
      *(ulong *)(lVar32 + 0xf0) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar32 + 0xf0) >> 0x20),
                    fVar65 + (float)*(undefined8 *)(lVar32 + 0xf0));
      *(float *)(lVar32 + 0xf8) = fVar47 + *(float *)(lVar32 + 0xf8);
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
      uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_042301b0 + 0xb8) + 1);
      lVar28 = lVar26 + lVar42 * 0x188;
      *(undefined8 *)(lVar28 + 0xa0) = **(undefined8 **)(*(long *)PTR_DAT_042301b0 + 0xb8);
      *(undefined4 *)(lVar28 + 0xa8) = uVar53;
      if (uVar40 <= uVar14) goto LAB_03ddcab0;
      uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
      lVar28 = lVar26 + lVar42 * 0x188;
      *(undefined8 *)(lVar28 + 0x78) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
      *(undefined4 *)(lVar28 + 0x80) = uVar53;
      uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
      *(undefined8 *)(lVar28 + 200) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
      *(undefined4 *)(lVar28 + 0xd0) = uVar53;
      uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
      *(undefined8 *)(lVar28 + 0xf0) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
      *(undefined4 *)(lVar28 + 0xf8) = uVar53;
      *(undefined1 *)(lVar32 + 0x1a0) = 0;
    }
    iVar13 = FUN_03d0f290(0);
    if (iVar13 == 1) {
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
    lVar32 = lVar32 + lVar42 * 0x188;
    uVar43 = *(undefined8 *)(lVar32 + 0x124);
    *(undefined8 *)(lVar32 + 0x124) =
         CONCAT44(fVar46 + (float)((ulong)uVar43 >> 0x20),fVar65 + (float)uVar43);
    *(float *)(lVar32 + 300) = fVar47 + *(float *)(lVar32 + 300);
    lVar32 = *in_stack_000001d8;
    if (lVar32 == 0) goto LAB_03ddcaac;
    if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_03ddcab0;
    lVar32 = lVar32 + lVar42 * 0x188;
    *(ulong *)(lVar32 + 0x118) =
         CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar32 + 0x118) >> 0x20),
                  fVar65 + (float)*(undefined8 *)(lVar32 + 0x118));
    *(float *)(lVar32 + 0x120) = fVar47 + *(float *)(lVar32 + 0x120);
    lVar32 = *in_stack_000001d8;
    if (lVar32 == 0) goto LAB_03ddcaac;
    if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_03ddcab0;
    lVar32 = lVar32 + lVar42 * 0x188;
    *(ulong *)(lVar32 + 0x130) =
         CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar32 + 0x130) >> 0x20),
                  fVar65 + (float)*(undefined8 *)(lVar32 + 0x130));
    *(float *)(lVar32 + 0x138) = fVar47 + *(float *)(lVar32 + 0x138);
    lVar32 = *in_stack_000001d8;
    if (lVar32 == 0) goto LAB_03ddcaac;
    if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_03ddcab0;
    lVar32 = lVar32 + lVar42 * 0x188;
    *(float *)(lVar32 + 0x13c) = fVar65 + *(float *)(lVar32 + 0x13c);
    *(ulong *)(lVar32 + 0x140) =
         CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar32 + 0x140) >> 0x20),
                  fVar46 + (float)*(undefined8 *)(lVar32 + 0x140));
    lVar32 = *in_stack_000001d8;
    if (lVar32 == 0) goto LAB_03ddcaac;
    uVar40 = *(uint *)(lVar32 + 0x18);
    if (uVar40 <= uVar14) goto LAB_03ddcab0;
    lVar28 = lVar32 + lVar42 * 0x188;
    *(float *)(lVar28 + 0x148) = fVar65 + *(float *)(lVar28 + 0x148);
    *(float *)(lVar28 + 0x164) = fVar65 + *(float *)(lVar28 + 0x164);
    *(float *)(lVar28 + 0x154) = fVar46 + *(float *)(lVar28 + 0x154);
    uVar43 = *(undefined8 *)(lVar28 + 0x14c);
    *(undefined8 *)(lVar28 + 0x14c) =
         CONCAT44(fVar46 + (float)((ulong)uVar43 >> 0x20),fVar46 + (float)uVar43);
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
      fVar47 = fVar46 + *(float *)(lVar38 + 0x58);
      *(ulong *)(lVar38 + 0x50) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar38 + 0x50) >> 0x20),
                    fVar46 + (float)*(undefined8 *)(lVar38 + 0x50));
      *(float *)(lVar38 + 0x58) = fVar47;
      *(float *)(lVar38 + 0x5c) = fVar65 + *(float *)(lVar38 + 0x5c);
      if (uVar40 <= *(uint *)(lVar38 + 0x38)) goto LAB_03ddcab0;
      uVar53 = *(undefined4 *)(lVar32 + (long)(int)*(uint *)(lVar38 + 0x38) * 0x188 + 0x124);
      lVar28 = lVar28 + lVar35 * 0x60;
      *(float *)(lVar28 + 0x74) = fVar47;
      *(undefined4 *)(lVar28 + 0x70) = uVar53;
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
        fVar47 = fVar46 + *(float *)(lVar28 + 0x58);
        *(ulong *)(lVar28 + 0x50) =
             CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar28 + 0x50) >> 0x20),
                      fVar46 + (float)*(undefined8 *)(lVar28 + 0x50));
        *(float *)(lVar28 + 0x58) = fVar47;
        *(float *)(lVar28 + 0x5c) = fVar65 + *(float *)(lVar28 + 0x5c);
        lVar35 = *in_stack_000001d8;
        if (lVar35 == 0) goto LAB_03ddcaac;
        if (*(uint *)(lVar35 + 0x18) <= *(uint *)(lVar28 + 0x38)) goto LAB_03ddcab0;
        uVar53 = *(undefined4 *)(lVar35 + (long)(int)*(uint *)(lVar28 + 0x38) * 0x188 + 0x124);
        lVar32 = lVar32 + lVar33 * 0x60;
        *(float *)(lVar32 + 0x74) = fVar47;
        *(undefined4 *)(lVar32 + 0x70) = uVar53;
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
    uVar22 = FUN_0324cccc(uVar41,0);
    if (((((uVar22 & 1) == 0) && (1 < uVar41 - 0x2010)) && (uVar41 != 0xad)) && (uVar41 != 0x2d)) {
      if ((_fStack0000000000000168 & 0x100000000) == 0) {
        if (uVar29 == 1) {
          if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          bVar12 = FUN_0324cc00(uVar41,0);
          if (((uVar41 == 0x200b) || (((bVar11 | bVar12 ^ 1) & 1) != 0)) ||
             (*in_stack_000001c8 == 1)) goto LAB_03ddbee0;
        }
        uStack000000000000016c = 0;
      }
      else {
        if (((uVar29 != 1) && ((int)uVar14 < (int)(*(uint *)(lVar26 + 0x18) - 1))) &&
           (((int)uVar14 < (int)*in_stack_000001c8 && ((uVar41 == 0x2019 || (uVar41 == 0x27)))))) {
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
          uVar22 = FUN_0324cccc(uVar41,0);
          uStack0000000000000170 = uVar14;
          if ((uVar22 & 1) == 0) goto LAB_03ddbf1c;
        }
        else {
LAB_03ddbf1c:
          uStack0000000000000170 = (int)fStack0000000000000178 - 1;
        }
        lVar32 = *plVar18;
        if (lVar32 == 0) goto LAB_03ddcaac;
        uVar15 = *(uint *)(in_stack_000001b8 + 0x1c);
        iVar13 = *(int *)(lVar32 + 0x18);
        if (iVar13 < (int)(uVar15 + 1)) {
          if (*(int *)(*(long *)StringLiteral_8875 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_0243be7c(plVar18,iVar13 + 1,*(undefined8 *)StringLiteral_8874);
          lVar32 = *plVar18;
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
        lVar32 = *plVar18;
        if (lVar32 == 0) goto LAB_03ddcaac;
        uVar15 = *(uint *)(in_stack_000001b8 + 0x1c);
        iVar13 = *(int *)(lVar32 + 0x18);
        if (iVar13 < (int)(uVar15 + 1)) {
          if (*(int *)(*(long *)StringLiteral_8875 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_0243be7c(plVar18,iVar13 + 1,*(undefined8 *)StringLiteral_8874);
          lVar32 = *plVar18;
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
    if ((*(byte *)(lVar32 + lVar42 * 0x188 + 0x19c) >> 2 & 1) == 0) {
      if (bVar7) {
UnityEngine_UIElements_GroupBoxUtility__OnPanelDestroyed:
        if (uVar29 - 2 < uVar15) {
          uVar53 = *(undefined4 *)(lVar32 + lVar31 + -0x354);
          uVar60 = *(undefined4 *)(lVar32 + lVar31 + -0x318);
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
      iVar13 = *(int *)(lVar32 + lVar42 * 0x188 + 0x70);
      *(int *)(lVar32 + lVar42 * 0x188 + 0x178) =
           *(int *)(lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001d0 + 0xd8) < (int)uVar14) ||
         (*(int *)(in_stack_000001d0 + 0xe0) < (int)uVar37)) {
        bVar9 = true;
      }
      else if (*(int *)(in_stack_000001d0 + 0x74) == 5) {
        bVar9 = iVar13 + 1 != *(int *)(in_stack_000001d0 + 0xf0);
      }
      else {
        bVar9 = false;
      }
      if (uVar41 != 0x200b && (bVar11 & 1) == 0) {
        fVar47 = *(float *)(lVar32 + lVar42 * 0x188 + 0x16c);
        if (fVar44 <= fVar47) {
          fVar44 = fVar47;
        }
        if (iVar13 != iStack00000000000000c8) {
          fStack0000000000000160 = fVar51;
        }
        if (lVar30 == 0) goto LAB_03ddcaac;
        fVar47 = *(float *)(lVar32 + lVar42 * 0x188 + 0x150);
        if (fStack0000000000000174 <= ABS(fVar45)) {
          fStack0000000000000174 = ABS(fVar45);
        }
        FUN_03dc39ac(&stack0x00001290,lVar30,0);
        memcpy(&stack0x00001200,&stack0x00001290,0x60);
        fVar48 = (float)FUN_03dc0ee0(&stack0x00001200,0);
        fVar47 = fVar47 + fVar44 * fVar48;
        iStack00000000000000c8 = iVar13;
        if (fVar47 <= fStack0000000000000160) {
          fStack0000000000000160 = fVar47;
        }
      }
      if ((((uVar41 == 0xd) || ((uVar41 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar14)) ||
         (bVar7 || bVar9)) {
LAB_03ddb8ac:
        if (!bVar7) goto LAB_03ddb8b8;
      }
      else {
        if (uVar14 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar22 = FUN_0324dc50(uVar41,0);
          if ((uVar22 & 1) != 0) goto LAB_03ddb8ac;
        }
        lVar32 = *in_stack_000001d8;
        if (lVar32 == 0) goto LAB_03ddcaac;
        if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_03ddcab0;
        lVar32 = lVar32 + lVar42 * 0x188;
        _bStack00000000000000e0 = *(float *)(lVar32 + 0x16c);
        fStack00000000000000dc = *(float *)(lVar32 + 0x124);
        bVar7 = fVar44 != 0.0;
        uVar52 = *(undefined4 *)(lVar32 + 0x174);
        fVar47 = _bStack00000000000000e0;
        if (bVar7) {
          fVar47 = fVar44;
        }
        fVar44 = fVar47;
        uStack00000000000000d8 = 0;
        fVar47 = fVar45;
        if (bVar7) {
          fVar47 = fStack0000000000000174;
        }
        fStack00000000000000d4 = fStack0000000000000160;
        fStack0000000000000174 = fVar47;
      }
      if (*in_stack_000001c8 == 1) {
        lVar32 = *in_stack_000001d8;
        if (lVar32 == 0) goto LAB_03ddcaac;
        if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_03ddcab0;
        lVar32 = lVar32 + lVar42 * 0x188;
        uVar53 = *(undefined4 *)(lVar32 + 0x130);
        uVar60 = *(undefined4 *)(lVar32 + 0x16c);
LAB_03ddb964:
        FUN_03de59c4(fStack00000000000000dc,fStack00000000000000d4,uStack00000000000000d8,uVar53,
                     fStack0000000000000160,0,_bStack00000000000000e0,uVar60);
      }
      else {
        if ((uVar14 == uVar4) || ((int)uVar5 <= (int)uVar14)) {
          lVar32 = *in_stack_000001d8;
          if (lVar32 != 0) {
            lVar33 = lVar42;
            uVar15 = uVar14;
            if (uVar41 == 0x200b || (bVar11 & 1) != 0) {
              lVar33 = lVar34;
              uVar15 = uVar5;
            }
            if (uVar15 < *(uint *)(lVar32 + 0x18)) {
              lVar32 = lVar32 + lVar33 * 0x188;
              uVar53 = *(undefined4 *)(lVar32 + 0x130);
              uVar60 = *(undefined4 *)(lVar32 + 0x16c);
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
        uVar22 = FUN_03dc3890(uVar52,*(undefined4 *)(lVar32 + lVar31),0);
        if ((uVar22 & 1) != 0) goto LAB_03ddc0a0;
        lVar32 = *in_stack_000001d8;
        if (lVar32 == 0) goto LAB_03ddcaac;
        if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_03ddcab0;
        lVar32 = lVar32 + lVar42 * 0x188;
        FUN_03de59c4(fStack00000000000000dc,fStack00000000000000d4,uStack00000000000000d8,
                     *(undefined4 *)(lVar32 + 0x130),fStack0000000000000160,0,
                     _bStack00000000000000e0,*(undefined4 *)(lVar32 + 0x16c));
      }
      fVar44 = 0.0;
      bVar7 = false;
      fStack0000000000000160 = DAT_00b9343c;
      fStack0000000000000174 = 0.0;
    }
LAB_03ddb99c:
    lVar32 = *in_stack_000001d8;
    if (lVar32 == 0) goto LAB_03ddcaac;
    if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_03ddcab0;
    if (lVar30 == 0) goto LAB_03ddcaac;
    uVar15 = *(uint *)(lVar32 + lVar42 * 0x188 + 0x19c);
    FUN_03dc39ac(&stack0x00001290,lVar30,0);
    memcpy(&stack0x00001200,&stack0x00001290,0x60);
    fVar47 = (float)FUN_03dc0f00(&stack0x00001200,0);
    if ((uVar15 >> 6 & 1) == 0) {
      if (bVar8) {
        lVar32 = *in_stack_000001d8;
        if (lVar32 != 0) {
          if (uVar29 - 2 < *(uint *)(lVar32 + 0x18)) {
            fVar46 = *(float *)(lVar32 + lVar31 + -0x334);
            uVar53 = *(undefined4 *)(lVar32 + lVar31 + -0x354);
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
      *(int *)(lVar32 + lVar42 * 0x188 + 0x180) =
           *(int *)(lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001d0 + 0xd8) < (int)uVar14) ||
         (*(int *)(in_stack_000001d0 + 0xe0) < (int)uVar37)) {
        bVar9 = true;
      }
      else if (*(int *)(in_stack_000001d0 + 0x74) == 5) {
        bVar9 = *(int *)(lVar32 + lVar42 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001d0 + 0xf0);
      }
      else {
        bVar9 = false;
      }
      if ((((uVar41 == 0xd) || ((uVar41 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar14)) ||
         (!(bool)(~bVar8 & (bVar9 ^ 1U)))) {
LAB_03ddbb1c:
        if (!bVar8) goto LAB_03ddbb24;
      }
      else {
        if (uVar14 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar22 = FUN_0324dc50(uVar41,0);
          if ((uVar22 & 1) != 0) goto LAB_03ddbb1c;
          lVar32 = *in_stack_000001d8;
          if (lVar32 == 0) goto LAB_03ddcaac;
        }
        if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_03ddcab0;
        lVar32 = lVar32 + lVar42 * 0x188;
        fStack00000000000000f8 = *(float *)(lVar32 + 0x16c);
        fStack00000000000000f4 = *(float *)(lVar32 + 0x124);
        fStack00000000000000b0 = *(float *)(lVar32 + 0x68);
        in_stack_000000a8._4_4_ = *(float *)(lVar32 + 0x150);
        fStack00000000000000e8 = fVar47 * fStack00000000000000f8 + in_stack_000000a8._4_4_;
        uStack00000000000000e4 = 0;
      }
      uVar15 = *in_stack_000001c8;
      if (uVar15 == 1) {
LAB_03ddbd0c:
        lVar33 = *in_stack_000001d8;
        if (lVar33 == 0) goto LAB_03ddcaac;
        if (*(uint *)(lVar33 + 0x18) <= uVar14) goto LAB_03ddcab0;
        lVar33 = lVar33 + lVar42 * 0x188;
      }
      else {
        lVar32 = lVar42;
        if (uVar14 == uVar4) {
          lVar33 = *in_stack_000001d8;
          if (lVar33 == 0) goto LAB_03ddcaac;
          uVar15 = uVar14;
          if ((uVar41 != 0x200b & (bVar11 ^ 1)) == 0) {
            lVar32 = lVar34;
            uVar15 = uVar5;
          }
          if (*(uint *)(lVar33 + 0x18) <= uVar15) goto LAB_03ddcab0;
        }
        else {
          if ((int)uVar15 <= (int)uVar14) {
LAB_03ddbdf0:
            if ((int)uVar14 < (int)uVar15) {
              iVar13 = FUN_03d4da10(lVar30,0);
              if (*(uint *)(lVar26 + 0x18) <= uVar29) goto LAB_03ddcab0;
              lVar32 = *(long *)(lVar26 + lVar31 + -0x134);
              if (lVar32 == 0) goto LAB_03ddcaac;
              iVar17 = FUN_03d4da10(lVar32,0);
              if (iVar13 != iVar17) goto LAB_03ddbd0c;
            }
            if (!bVar9) {
              bVar8 = true;
              goto LAB_03ddc144;
            }
            lVar32 = *in_stack_000001d8;
            if (lVar32 != 0) {
              if (uVar29 - 2 < *(uint *)(lVar32 + 0x18)) {
                fVar46 = *(float *)(lVar32 + lVar31 + -0x334);
                uVar53 = *(undefined4 *)(lVar32 + lVar31 + -0x354);
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
            fVar48 = *(float *)(lVar33 + lVar31 + -0x24);
            if (*(int *)(*(long *)StringLiteral_8871 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar22 = FUN_03dea7b0(fVar46 + fVar48,in_stack_000000a8._4_4_,0);
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
      fVar46 = *(float *)(lVar33 + 0x150);
      uVar53 = *(undefined4 *)(lVar33 + 0x130);
UnityEngine_UIElements_IMGUIContainer__get_guiState:
      FUN_03de59c4(fStack00000000000000f4,fStack00000000000000e8,uStack00000000000000e4,uVar53,
                   fStack00000000000000f8 * fVar47 + fVar46,0,fStack00000000000000f8,
                   fStack00000000000000f8);
      bVar8 = false;
    }
LAB_03ddc144:
    lVar32 = *in_stack_000001d8;
    if (lVar32 == 0) goto LAB_03ddcaac;
    uVar15 = (uint)*(undefined8 *)(lVar32 + 0x18);
    if (uVar15 <= uVar14) goto LAB_03ddcab0;
    if ((*(byte *)(lVar32 + lVar42 * 0x188 + 0x19d) >> 1 & 1) == 0) {
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
        bVar9 = *(int *)(lVar32 + lVar42 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001d0 + 0xf0);
      }
      else {
        bVar9 = false;
      }
      if (!bVar10) {
        if (((uVar41 == 0xd) || ((uVar41 & 0xfffe) == 10)) ||
           (((int)uVar5 < (int)uVar14 || (bVar9)))) goto FUN_03ddc238;
        if (uVar14 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_042303d0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar22 = FUN_0324dc50(uVar41,0);
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
      lVar32 = lVar32 + lVar42 * 0x188;
      fVar48 = *(float *)(lVar32 + 0x130);
      fVar61 = *(float *)(lVar32 + 0x124);
      fVar46 = *(float *)(lVar32 + 0x148);
      fVar49 = *(float *)(lVar32 + 0x14c);
      fVar50 = *(float *)(lVar32 + 0x154);
      fVar47 = *(float *)(lVar32 + 0x164);
      in_stack_000001e8 = *(undefined8 *)(lVar32 + 400);
      in_stack_000001e0 = *(undefined8 *)(lVar32 + 0x188);
      in_stack_000001f0 = (undefined4)*(undefined8 *)(lVar32 + 0x198);
      uVar22 = FUN_03dea67c(&stack0x00000200,&stack0x000001e0,0);
      lVar32 = *(long *)StringLiteral_8869;
      if ((uVar22 & 1) == 0) {
        if (*(int *)(lVar32 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar32);
        }
        fVar54 = (float)FUN_03dea388(uVar21,0);
        bVar10 = (bVar11 & 1) == 0;
        if (bVar10) {
          fVar46 = fVar61;
        }
        if (bVar10) {
          fVar47 = fVar48;
        }
        if (fVar46 - fVar54 <= fStack000000000000012c) {
          fStack000000000000012c = fVar46 - fVar54;
        }
        fVar46 = (float)FUN_03dea390(uVar21,0);
        if (fStack0000000000000130 <= fVar47 + fVar46) {
          fStack0000000000000130 = fVar47 + fVar46;
        }
        if (*(int *)(*(long *)StringLiteral_8869 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        fVar46 = (float)FUN_03dea3a0(uVar21,0);
        if (fVar50 - fVar46 <= fStack0000000000000144) {
          fStack0000000000000144 = fVar50 - fVar46;
        }
        fVar46 = (float)FUN_03dea398(uVar21,0);
        if (fStack0000000000000138 <= fVar49 + fVar46) {
          fStack0000000000000138 = fVar49 + fVar46;
        }
      }
      else {
        if (*(int *)(lVar32 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar32);
        }
        fVar54 = (float)FUN_03dea390(uVar21,0);
        if ((bVar11 & 1) == 0) {
          fVar46 = fVar61;
        }
        if (fVar50 <= fStack0000000000000144) {
          fStack0000000000000144 = fVar50;
        }
        fVar46 = (fVar46 + (fStack0000000000000130 - fVar54)) * 0.5;
        if (fStack0000000000000138 <= fVar49) {
          fStack0000000000000138 = fVar49;
        }
        FUN_03de65f0(fStack000000000000012c,fStack0000000000000144,uStack0000000000000128,fVar46,
                     fStack0000000000000138,uStack0000000000000128);
        puVar6 = StringLiteral_8869;
        if (*(int *)(*(long *)StringLiteral_8869 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        fStack0000000000000144 = (float)FUN_03dea3a0(uVar19,0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        fStack0000000000000144 = fVar50 - fStack0000000000000144;
        fStack0000000000000130 = (float)FUN_03dea390(uVar19,0);
        fVar50 = (float)FUN_03dea398(uVar19,0);
        if ((bVar11 & 1) == 0) {
          fVar47 = fVar48;
        }
        fStack0000000000000130 = fVar47 + fStack0000000000000130;
        uStack0000000000000128 = 0;
        fStack000000000000012c = fVar46;
        fStack0000000000000138 = fVar49 + fVar50;
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
  iVar13 = uVar37 + 1;
  plVar18 = (long *)StringLiteral_8728;
LAB_03ddc86c:
  *(uint *)(in_stack_000001b8 + 0x10) = uVar14;
  uVar52 = *(undefined4 *)(unaff_x19 + 0x15c0);
  *(int *)(in_stack_000001b8 + 0x24) = iVar13;
  if ((int)uVar14 < 1 || fStack0000000000000140 == 0.0) {
    fStack0000000000000140 = 1.4013e-45;
  }
  *(float *)(in_stack_000001b8 + 0x1c) = fStack0000000000000140;
  *(undefined4 *)(in_stack_000001b8 + 0x14) = uVar52;
  *(int *)(in_stack_000001b8 + 0x28) = *(int *)(unaff_x19 + 0x350) + 1;
  if (1 < *(int *)(in_stack_000001b8 + 0x2c)) {
    uVar19 = 1;
    lVar26 = 0x70;
    do {
      lVar31 = *(long *)(in_stack_000001b8 + 0x58);
      if (lVar31 == 0) goto LAB_03ddcaac;
      if (*(int *)(*plVar18 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      if (*(uint *)(lVar31 + 0x18) <= uVar19) goto LAB_03ddcab0;
      FUN_03dcfa7c(lVar31 + lVar26,0);
      if (*(int *)(in_stack_000001d0 + 0x100) != 0) {
        lVar31 = *(long *)(in_stack_000001b8 + 0x58);
        if (lVar31 == 0) goto LAB_03ddcaac;
        if (*(int *)(*plVar18 + 0xe0) == 0) {
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


