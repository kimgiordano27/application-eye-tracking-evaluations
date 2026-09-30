/*
FUNCTION_NAME: FullSerializer.Internal.fsVersionManager$$GetVersionedType
ENTRY_POINT: 00e42470
PROGRAM: Lovesick-libil2cpp.so
SCORE: 112
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;telemetry;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x00e4063c) */
/* WARNING: Removing unreachable block (ram,0x00e3fd64) */
/* WARNING: Removing unreachable block (ram,0x00e3ecf8) */
/* WARNING: Removing unreachable block (ram,0x00e40338) */
/* WARNING: Removing unreachable block (ram,0x00e43124) */
/* WARNING: Removing unreachable block (ram,0x00e42814) */
/* WARNING: Removing unreachable block (ram,0x00e42bb8) */
/* WARNING: Removing unreachable block (ram,0x00e428b4) */
/* WARNING: Removing unreachable block (ram,0x00e4022c) */
/* WARNING: Removing unreachable block (ram,0x00e40b00) */
/* WARNING: Removing unreachable block (ram,0x00e411d8) */
/* WARNING: Removing unreachable block (ram,0x00e40474) */
/* WARNING: Removing unreachable block (ram,0x00e40c08) */
/* WARNING: Removing unreachable block (ram,0x00e42b18) */
/* WARNING: Removing unreachable block (ram,0x00e431c4) */
/* WARNING: Removing unreachable block (ram,0x00e42e1c) */
/* WARNING: Removing unreachable block (ram,0x00e42ebc) */

void FullSerializer_Internal_fsVersionManager__GetVersionedType(double param_1)

{
  long *plVar1;
  undefined4 *puVar2;
  float fVar3;
  uint uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  short sVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  long lVar14;
  long in_x9;
  long lVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long *unaff_x19;
  undefined8 *puVar19;
  undefined8 uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong unaff_x22;
  float unaff_w23;
  ulong uVar26;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  ulong unaff_x28;
  ulong unaff_x29;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  double dVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  ulong uVar35;
  float fVar36;
  float in_s4;
  int iVar37;
  float unaff_s10;
  float fVar38;
  float fVar39;
  float unaff_s15;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  undefined8 *in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  double *in_stack_00000060;
  uint in_stack_00000068;
  float fStack0000000000000070;
  long in_stack_00000078;
  
code_r0x00e42470:
  lVar18 = *in_stack_00000038;
  if (lVar18 != 0) {
    if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
    if (*(long *)(in_x9 + 0x18) != 0) {
      fVar34 = *(float *)(lVar18 + unaff_x22 * unaff_x24 + 0x20);
      uVar11 = (ulong)(uint)fVar34;
      uVar12 = (ulong)(uint)*(float *)((long)param_1 + 0x84);
      lVar18 = *unaff_x26;
      fVar28 = in_s4 * *(float *)(in_x9 + 0x24) +
               (fVar34 * *(float *)(in_x9 + 0x20)) / *(float *)((long)param_1 + 0x84);
                    /* try { // try from 00e424bc to 00f424c7 has its CatchHandler @ 00e425cc */
      fVar28 = fVar28 - (float)(int)fVar28;
      fVar34 = fVar28;
      if (unaff_s10 < fVar28) {
        fVar34 = unaff_s10;
      }
      fVar29 = fVar34;
                    /* try { // try from 00e424d0 to 00f424ef has its CatchHandler @ 00e425d4 */
      if (fVar28 < 0.0) {
        fVar29 = 0.0;
      }
      fVar29 = (float)FUN_0269ad38(fVar29,*(long *)(in_x9 + 0x18),0);
      fVar28 = fVar29;
      if (unaff_s10 < fVar29) {
        fVar28 = unaff_s10;
      }
      uVar35 = (ulong)(uint)unaff_w23;
      fVar28 = fVar28 * unaff_w23;
      if (fVar29 < 0.0) {
        fVar28 = 0.0;
      }
      dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
      if (0.0 <= fVar28) {
        if (dVar32 == 0.5) {
          fVar28 = (float)_fStack0000000000000070 + unaff_s10;
          goto LAB_00e42560;
        }
        fVar29 = (float)(int)(fVar28 + 0.5);
      }
      else if (dVar32 == -0.5) {
                    /* try { // try from 00e42538 to 00f4255b has its CatchHandler @ 00e425d8 */
        fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42560:
        fVar29 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar29 = fVar28;
        }
      }
      else {
        fVar29 = (float)(int)(fVar28 + -0.5);
      }
      fVar28 = fVar34;
      if (unaff_s10 < fVar34) {
        fVar28 = unaff_s10;
      }
      fVar28 = fVar28 * unaff_w23;
                    /* try { // try from 00e42598 to 00f425bb has its CatchHandler @ 00e425d0 */
      if (fVar34 < 0.0) {
        fVar28 = 0.0;
      }
      dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
joined_r0x00e425b4:
      fVar34 = (float)uVar11;
      if (fVar28 < 0.0) {
        if (dVar32 == -0.5) {
          fVar28 = (float)_fStack0000000000000070 + -1.0;
          goto LAB_00e425d4;
        }
        fVar38 = (float)(int)(fVar28 + -0.5);
      }
      else {
                    /* try { // try from 00e425bc to 00f425f3 has its CatchHandler @ 00e4236c */
        if (dVar32 == 0.5) {
                    /* catch() { ... } // from try @ 00e424bc with catch @ 00e425cc */
                    /* catch() { ... } // from try @ 00e42598 with catch @ 00e425d0 */
          fVar28 = (float)_fStack0000000000000070 + unaff_s10;
LAB_00e425d4:
                    /* catch() { ... } // from try @ 00e424d0 with catch @ 00e425d4 */
          fVar38 = (float)_fStack0000000000000070;
                    /* catch() { ... } // from try @ 00e42538 with catch @ 00e425d8 */
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = fVar28;
          }
        }
        else {
                    /* catch() { ... } // from try @ 00e4241c with catch @ 00e425e0 */
          fVar38 = (float)(int)(fVar28 + 0.5);
        }
      }
      fVar36 = 0.0;
      fVar28 = fVar34;
      if (unaff_s10 < fVar34) {
        fVar28 = unaff_s10;
      }
      fVar28 = fVar28 * unaff_w23;
      if (fVar34 < 0.0) {
        fVar28 = 0.0;
      }
      dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
      if (0.0 <= fVar28) {
        if (dVar32 == 0.5) {
          fVar34 = (float)_fStack0000000000000070 + unaff_s10;
          goto LAB_00e42654;
        }
        fVar28 = (float)(int)(fVar28 + 0.5);
      }
      else {
                    /* try { // try from 00e42618 to 00f426bf has its CatchHandler @ 00e42618
                       catch() { ... } // from try @ 00e42618 with catch @ 00e42618
                       catch() { ... } // from try @ 00e426cc with catch @ 00e42618 */
        if (dVar32 == -0.5) {
          fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42654:
          fVar28 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar28 = fVar34;
          }
        }
        else {
          fVar28 = (float)(int)(fVar28 + -0.5);
        }
      }
      fVar39 = (float)uVar12;
      fVar34 = fVar39;
      if (unaff_s10 < fVar39) {
        fVar34 = unaff_s10;
      }
      fVar34 = fVar34 * unaff_w23;
      if (fVar39 < 0.0) {
        fVar34 = 0.0;
      }
      dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
      if (0.0 <= fVar34) {
                    /* try { // try from 00e426cc to 00f42703 has its CatchHandler @ 00e42618 */
        if (dVar32 == 0.5) {
          fVar34 = (float)_fStack0000000000000070 + unaff_s10;
          goto LAB_00e426e4;
        }
                    /* try { // try from 00e42714 to 00f42727 has its CatchHandler @ 00e42764 */
        fVar39 = (float)(int)(fVar34 + 0.5);
      }
      else if (dVar32 == -0.5) {
                    /* try { // try from 00e426c0 to 00f426cb has its CatchHandler @ 00e426f0 */
        fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e426e4:
        fVar39 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar39 = fVar34;
        }
      }
      else {
        fVar39 = (float)(int)(fVar34 + -0.5);
      }
      if (lVar18 != 0) {
        if ((uint)in_stack_00000058 < *(uint *)(lVar18 + 0x18)) {
                    /* try { // try from 00e42728 to 00f4272f has its CatchHandler @ 00e42754 */
                    /* try { // try from 00e42730 to 00f4276f has its CatchHandler @ 00e42704 */
                    /* catch() { ... } // from try @ 00e42728 with catch @ 00e42754 */
                    /* catch() { ... } // from try @ 00e42714 with catch @ 00e42764 */
          *(uint *)(lVar18 + in_stack_00000058 * 4 + 0x20) =
               (int)fVar29 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar28 & 0xffU) << 0x10 |
               (int)fVar39 << 0x18;
          if (*in_stack_00000060 != 0.0) {
            uVar20 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar11 = FUN_02681b9c(uVar20,0,0);
            if ((uVar11 & 1) == 0) goto LAB_00e43400;
            lVar18 = *unaff_x26;
            if (lVar18 != 0) {
              if (in_stack_00000068 < *(uint *)(lVar18 + 0x18)) {
                puVar21 = (uint *)(lVar18 + unaff_x22 * 4 + 0x20);
                uVar22 = *puVar21;
                if ((*in_stack_00000060 != 0.0) &&
                   (lVar18 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar18 != 0)) {
                    /* try { // try from 00e42808 to 00f428b7 has its CatchHandler @ 00e42808
                       catch() { ... } // from try @ 00e42808 with catch @ 00e42808
                       catch() { ... } // from try @ 00e428c4 with catch @ 00e42808 */
                  fVar34 = ((float)(uVar22 & 0xff) / 255.0) * *(float *)(lVar18 + 0x18);
                  fVar39 = ((float)(uVar22 >> 8 & 0xff) / 255.0) * *(float *)(lVar18 + 0x1c);
                  fVar38 = *(float *)(lVar18 + 0x20);
                  fVar29 = *(float *)(lVar18 + 0x24);
                  fVar28 = fVar34 * 255.0;
                  if (fVar34 < 0.0) {
                    fVar28 = 0.0;
                  }
                  dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                  if (0.0 <= fVar28) {
                    if (dVar32 == 0.5) {
                      fVar34 = 1.0;
                      goto LAB_00e4287c;
                    }
                    fVar28 = (float)(int)(fVar28 + 0.5);
                  }
                  else if (dVar32 == -0.5) {
                    fVar34 = -1.0;
LAB_00e4287c:
                    fVar28 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar28 = (float)_fStack0000000000000070 + fVar34;
                    }
                  }
                  else {
                    fVar28 = (float)(int)(fVar28 + -0.5);
                  }
                  fVar34 = fVar39 * 255.0;
                  fVar38 = ((float)(uVar22 >> 0x10 & 0xff) / 255.0) * fVar38;
                  if (fVar39 < 0.0) {
                    fVar34 = 0.0;
                  }
                  dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                  if (0.0 <= fVar34) {
                    if (dVar32 == 0.5) {
                      fVar34 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar34 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar34 = (float)(int)(fVar34 + 0.5);
                    }
                  }
                  else if (dVar32 == -0.5) {
                    fVar34 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar34 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar34 = (float)(int)(fVar34 + -0.5);
                  }
                  fVar39 = fVar38;
                  if (1.0 < fVar38) {
                    fVar39 = 1.0;
                  }
                  fVar39 = fVar39 * 255.0;
                  fVar29 = ((float)(uVar22 >> 0x18) / 255.0) * fVar29;
                  if (fVar38 < 0.0) {
                    fVar39 = 0.0;
                  }
                  dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                  if (0.0 <= fVar39) {
                    if (dVar32 == 0.5) {
                      fVar38 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e429c8;
                    }
                    fVar39 = (float)(int)(fVar39 + 0.5);
                  }
                  else if (dVar32 == -0.5) {
                    fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e429c8:
                    fVar39 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar39 = fVar38;
                    }
                  }
                  else {
                    fVar39 = (float)(int)(fVar39 + -0.5);
                  }
                  fVar38 = fVar29;
                  if (1.0 < fVar29) {
                    fVar38 = 1.0;
                  }
                  fVar38 = fVar38 * 255.0;
                  if (fVar29 < 0.0) {
                    fVar38 = 0.0;
                  }
                  dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                  if (0.0 <= fVar38) {
                    if (dVar32 == 0.5) {
                      fVar29 = 1.0;
                      goto LAB_00e42a44;
                    }
                    fVar38 = (float)(int)(fVar38 + 0.5);
                  }
                  else if (dVar32 == -0.5) {
                    fVar29 = -1.0;
LAB_00e42a44:
                    fVar38 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar38 = (float)_fStack0000000000000070 + fVar29;
                    }
                  }
                  else {
                    fVar38 = (float)(int)(fVar38 + -0.5);
                  }
                  *puVar21 = (int)fVar28 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                             ((int)fVar39 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                  lVar18 = *unaff_x26;
                  if (lVar18 != 0) {
                    if ((uint)unaff_x28 < *(uint *)(lVar18 + 0x18)) {
                      puVar21 = (uint *)(lVar18 + (long)(int)(uint)unaff_x28 * 4 + 0x20);
                      uVar22 = *puVar21;
                      if ((*in_stack_00000060 != 0.0) &&
                         (lVar18 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar18 != 0)) {
                        fVar34 = ((float)(uVar22 & 0xff) / 255.0) * *(float *)(lVar18 + 0x18);
                        fVar39 = ((float)(uVar22 >> 8 & 0xff) / 255.0) * *(float *)(lVar18 + 0x1c);
                        fVar38 = *(float *)(lVar18 + 0x20);
                        fVar29 = *(float *)(lVar18 + 0x24);
                        fVar28 = fVar34 * 255.0;
                        if (fVar34 < 0.0) {
                          fVar28 = 0.0;
                        }
                        dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                        if (0.0 <= fVar28) {
                          if (dVar32 == 0.5) {
                            fVar34 = 1.0;
                            goto LAB_00e42b80;
                          }
                          fVar28 = (float)(int)(fVar28 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
                          fVar34 = -1.0;
LAB_00e42b80:
                          fVar28 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar28 = (float)_fStack0000000000000070 + fVar34;
                          }
                        }
                        else {
                          fVar28 = (float)(int)(fVar28 + -0.5);
                        }
                        fVar34 = fVar39 * 255.0;
                        fVar38 = ((float)(uVar22 >> 0x10 & 0xff) / 255.0) * fVar38;
                        if (fVar39 < 0.0) {
                          fVar34 = 0.0;
                        }
                        dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                        if (0.0 <= fVar34) {
                          if (dVar32 == 0.5) {
                            fVar34 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar34 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar34 = (float)(int)(fVar34 + 0.5);
                          }
                        }
                        else if (dVar32 == -0.5) {
                          fVar34 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar34 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar34 = (float)(int)(fVar34 + -0.5);
                        }
                        fVar39 = fVar38;
                        if (1.0 < fVar38) {
                          fVar39 = 1.0;
                        }
                        fVar39 = fVar39 * 255.0;
                        fVar29 = ((float)(uVar22 >> 0x18) / 255.0) * fVar29;
                        if (fVar38 < 0.0) {
                          fVar39 = 0.0;
                        }
                        dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                        if (0.0 <= fVar39) {
                          if (dVar32 == 0.5) {
                            fVar38 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e42ccc;
                          }
                          fVar39 = (float)(int)(fVar39 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
                          fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42ccc:
                          fVar39 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar39 = fVar38;
                          }
                        }
                        else {
                          fVar39 = (float)(int)(fVar39 + -0.5);
                        }
                        fVar38 = fVar29;
                        if (1.0 < fVar29) {
                          fVar38 = 1.0;
                        }
                        fVar38 = fVar38 * 255.0;
                        if (fVar29 < 0.0) {
                          fVar38 = 0.0;
                        }
                        dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                        if (0.0 <= fVar38) {
                          if (dVar32 == 0.5) {
                            fVar29 = 1.0;
                            goto LAB_00e42d48;
                          }
                          fVar38 = (float)(int)(fVar38 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
                          fVar29 = -1.0;
LAB_00e42d48:
                          fVar38 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar38 = (float)_fStack0000000000000070 + fVar29;
                          }
                        }
                        else {
                          fVar38 = (float)(int)(fVar38 + -0.5);
                        }
                        *puVar21 = (int)fVar28 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                                   ((int)fVar39 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                        lVar18 = *unaff_x26;
                        if (lVar18 != 0) {
                          if ((uint)unaff_x29 < *(uint *)(lVar18 + 0x18)) {
                            lVar18 = lVar18 + (long)(int)(uint)unaff_x29 * 4;
                            while( true ) {
                              uVar22 = *(uint *)(lVar18 + 0x20);
                              if ((*in_stack_00000060 == 0.0) ||
                                 (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0))
                              break;
                              fVar34 = ((float)(uVar22 & 0xff) / 255.0) * *(float *)(lVar14 + 0x18);
                              fVar39 = ((float)(uVar22 >> 8 & 0xff) / 255.0) *
                                       *(float *)(lVar14 + 0x1c);
                              fVar38 = *(float *)(lVar14 + 0x20);
                              fVar29 = *(float *)(lVar14 + 0x24);
                              fVar28 = fVar34 * 255.0;
                              if (fVar34 < 0.0) {
                                fVar28 = 0.0;
                              }
                              dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                              if (0.0 <= fVar28) {
                                if (dVar32 == 0.5) {
                                  fVar34 = 1.0;
                                  goto FUN_00e42e84;
                                }
                                fVar28 = (float)(int)(fVar28 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar34 = -1.0;
FUN_00e42e84:
                                fVar28 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar28 = (float)_fStack0000000000000070 + fVar34;
                                }
                              }
                              else {
                                fVar28 = (float)(int)(fVar28 + -0.5);
                              }
                              fVar34 = fVar39 * 255.0;
                              fVar38 = ((float)(uVar22 >> 0x10 & 0xff) / 255.0) * fVar38;
                              if (fVar39 < 0.0) {
                                fVar34 = 0.0;
                              }
                              dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                              if (0.0 <= fVar34) {
                                if (dVar32 == 0.5) {
                                  fVar34 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar34 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar34 = (float)(int)(fVar34 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar34 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar34 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar34 = (float)(int)(fVar34 + -0.5);
                              }
                              fVar39 = fVar38;
                              if (1.0 < fVar38) {
                                fVar39 = 1.0;
                              }
                              fVar39 = fVar39 * 255.0;
                              fVar29 = ((float)(uVar22 >> 0x18) / 255.0) * fVar29;
                              if (fVar38 < 0.0) {
                                fVar39 = 0.0;
                              }
                              dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                              if (0.0 <= fVar39) {
                                if (dVar32 == 0.5) {
                                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e42fd0;
                                }
                                fVar39 = (float)(int)(fVar39 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42fd0:
                                fVar39 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar39 = fVar38;
                                }
                              }
                              else {
                                fVar39 = (float)(int)(fVar39 + -0.5);
                              }
                              fVar38 = fVar29;
                              if (1.0 < fVar29) {
                                fVar38 = 1.0;
                              }
                              fVar38 = fVar38 * 255.0;
                              if (fVar29 < 0.0) {
                                fVar38 = 0.0;
                              }
                              dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                              if (0.0 <= fVar38) {
                                if (dVar32 == 0.5) {
                                  fVar29 = 1.0;
                                  goto LAB_00e4304c;
                                }
                                fVar38 = (float)(int)(fVar38 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar29 = -1.0;
LAB_00e4304c:
                                fVar38 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar38 = (float)_fStack0000000000000070 + fVar29;
                                }
                              }
                              else {
                                fVar38 = (float)(int)(fVar38 + -0.5);
                              }
                              *(uint *)(lVar18 + 0x20) =
                                   (int)fVar28 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                                   ((int)fVar39 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                              lVar18 = *unaff_x26;
                              if (lVar18 == 0) break;
                              if (*(uint *)(lVar18 + 0x18) <= (uint)in_stack_00000058)
                              goto LAB_00e44400;
                              puVar21 = (uint *)(lVar18 + in_stack_00000058 * 4 + 0x20);
                              uVar22 = *puVar21;
                              if ((*in_stack_00000060 == 0.0) ||
                                 (lVar18 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar18 == 0))
                              break;
                              fVar34 = (float)(uVar22 & 0xff) / 255.0;
                              uVar35 = (ulong)(uint)fVar34;
                              fVar34 = fVar34 * *(float *)(lVar18 + 0x18);
                              fVar39 = ((float)(uVar22 >> 8 & 0xff) / 255.0) *
                                       *(float *)(lVar18 + 0x1c);
                              fVar38 = *(float *)(lVar18 + 0x20);
                              fVar29 = *(float *)(lVar18 + 0x24);
                              fVar28 = fVar34 * 255.0;
                              if (fVar34 < 0.0) {
                                fVar28 = 0.0;
                              }
                              dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                              if (0.0 <= fVar28) {
                                if (dVar32 == 0.5) {
                                  fVar34 = 1.0;
                                  goto LAB_00e4318c;
                                }
                                fVar28 = (float)(int)(fVar28 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar34 = -1.0;
LAB_00e4318c:
                                fVar28 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar28 = (float)_fStack0000000000000070 + fVar34;
                                }
                              }
                              else {
                                fVar28 = (float)(int)(fVar28 + -0.5);
                              }
                              fVar34 = fVar39 * 255.0;
                              fVar38 = ((float)(uVar22 >> 0x10 & 0xff) / 255.0) * fVar38;
                              if (fVar39 < 0.0) {
                                fVar34 = 0.0;
                              }
                              dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                              if (0.0 <= fVar34) {
                                if (dVar32 == 0.5) {
                                  fVar34 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar34 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar34 = (float)(int)(fVar34 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar34 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar34 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar34 = (float)(int)(fVar34 + -0.5);
                              }
                              fVar39 = fVar38;
                              if (1.0 < fVar38) {
                                fVar39 = 1.0;
                              }
                              fVar39 = fVar39 * 255.0;
                              fVar29 = ((float)(uVar22 >> 0x18) / 255.0) * fVar29;
                              if (fVar38 < 0.0) {
                                fVar39 = 0.0;
                              }
                              dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                              if (0.0 <= fVar39) {
                                if (dVar32 == 0.5) {
                                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e432e0;
                                }
                                fVar39 = (float)(int)(fVar39 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e432e0:
                                fVar39 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar39 = fVar38;
                                }
                              }
                              else {
                                fVar39 = (float)(int)(fVar39 + -0.5);
                              }
                              fVar38 = fVar29;
                              if (1.0 < fVar29) {
                                fVar38 = 1.0;
                              }
                              fVar38 = fVar38 * 255.0;
                              if (fVar29 < 0.0) {
                                fVar38 = 0.0;
                              }
                              dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                              if (0.0 <= fVar38) {
                                if (dVar32 == 0.5) {
                                  fVar29 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar29 = (float)(int)(fVar38 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar29 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar29 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar29 = (float)(int)(fVar38 + -0.5);
                              }
                              unaff_s10 = 1.0;
                              *puVar21 = (int)fVar28 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                                         ((int)fVar39 & 0xffU) << 0x10 | (int)fVar29 << 0x18;
                              unaff_s15 = in_stack_00000008._4_4_;
LAB_00e43400:
                              do {
                                lVar18 = *unaff_x26;
                                if (lVar18 == 0) goto LAB_00e443fc;
                                if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068)
                                goto LAB_00e44400;
                                lVar18 = lVar18 + unaff_x22 * 4;
                                fVar34 = (float)NEON_ucvtf((uint)*(byte *)(lVar18 + 0x23));
                                *(char *)(lVar18 + 0x23) =
                                     (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar34);
                                lVar18 = unaff_x19[0x5f];
                                if (lVar18 == 0) goto LAB_00e443fc;
                                uVar22 = (uint)unaff_x28;
                                if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_00e44400;
                                lVar18 = lVar18 + (long)(int)uVar22 * 4;
                                fVar34 = (float)NEON_ucvtf((uint)*(byte *)(lVar18 + 0x23));
                                *(char *)(lVar18 + 0x23) =
                                     (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar34);
                                lVar18 = unaff_x19[0x5f];
                                if (lVar18 == 0) goto LAB_00e443fc;
                                uVar23 = (uint)unaff_x29;
                                if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_00e44400;
                                lVar18 = lVar18 + (long)(int)uVar23 * 4;
                                fVar34 = (float)NEON_ucvtf((uint)*(byte *)(lVar18 + 0x23));
                                *(char *)(lVar18 + 0x23) =
                                     (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar34);
                                lVar18 = unaff_x19[0x5f];
                                if (lVar18 == 0) goto LAB_00e443fc;
                                uVar16 = (uint)in_stack_00000058;
                                if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_00e44400;
                                lVar18 = lVar18 + in_stack_00000058 * 4;
                                uVar11 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x374);
                                fVar34 = (float)NEON_ucvtf((uint)*(byte *)(lVar18 + 0x23));
                                *(char *)(lVar18 + 0x23) =
                                     (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar34);
                                uVar12 = FUN_00e3703c();
                                if ((uVar12 & 1) == 0) {
                                  lVar18 = *unaff_x25;
                                  if (*(int *)(lVar18 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar18 = *unaff_x25;
                                  }
                                  if (*(int *)(*(long *)(lVar18 + 0xb8) + 0x20) == 1) {
                                    lVar18 = *unaff_x26;
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068)
                                    goto LAB_00e44400;
                                    puVar21 = (uint *)(lVar18 + unaff_x22 * 4 + 0x20);
                                    uVar4 = *puVar21;
                                    fVar28 = (float)FUN_026982b0((float)(uVar4 & 0xff) / 255.0,0);
                                    fVar29 = (float)FUN_026982b0((float)(uVar4 >> 8 & 0xff) / 255.0,
                                                                 0);
                                    fVar38 = (float)FUN_026982b0((float)(uVar4 >> 0x10 & 0xff) /
                                                                 255.0,0);
                                    fVar34 = fVar28;
                                    if (unaff_s10 < fVar28) {
                                      fVar34 = unaff_s10;
                                    }
                                    fVar34 = fVar34 * 255.0;
                                    if (fVar28 < 0.0) {
                                      fVar34 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                    if (0.0 <= fVar34) {
                                      if (dVar32 == 0.5) {
                                        fVar34 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar34 = (float)(int)(fVar34 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar34 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar34 = (float)(int)(fVar34 + -0.5);
                                    }
                                    fVar28 = fVar29;
                                    if (1.0 < fVar29) {
                                      fVar28 = 1.0;
                                    }
                                    fVar28 = fVar28 * 255.0;
                                    if (fVar29 < 0.0) {
                                      fVar28 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                    if (0.0 <= fVar28) {
                                      if (dVar32 == 0.5) {
                                        fVar28 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar28 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar28 = (float)(int)(fVar28 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar28 = (float)(int)(fVar28 + -0.5);
                                    }
                                    fVar29 = fVar38;
                                    if (1.0 < fVar38) {
                                      fVar29 = 1.0;
                                    }
                                    fVar29 = fVar29 * 255.0;
                                    fVar39 = (float)(uVar4 >> 0x18) / 255.0;
                                    if (fVar38 < 0.0) {
                                      fVar29 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                                    if (0.0 <= fVar29) {
                                      if (dVar32 == 0.5) {
                                        fVar29 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e43744;
                                      }
                                      fVar38 = (float)(int)(fVar29 + 0.5);
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43744:
                                      fVar38 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar38 = fVar29;
                                      }
                                    }
                                    else {
                                      fVar38 = (float)(int)(fVar29 + -0.5);
                                    }
                                    if (1.0 < fVar39) {
                                      fVar39 = 1.0;
                                    }
                                    fVar39 = fVar39 * 255.0;
                                    dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                    if (0.0 <= fVar39) {
                                      if (dVar32 == 0.5) {
                                        fVar29 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar29 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar29 = (float)(int)(fVar39 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar29 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar29 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar29 = (float)(int)(fVar39 + -0.5);
                                    }
                                    if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068)
                                    goto LAB_00e44400;
                                    *puVar21 = (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                               ((int)fVar38 & 0xffU) << 0x10 | (int)fVar29 << 0x18;
                                    lVar18 = *in_stack_00000030;
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_00e44400;
                                    puVar21 = (uint *)(lVar18 + (long)(int)uVar22 * 4 + 0x20);
                                    uVar4 = *puVar21;
                                    fVar28 = (float)FUN_026982b0((float)(uVar4 & 0xff) / 255.0,0);
                                    fVar29 = (float)FUN_026982b0((float)(uVar4 >> 8 & 0xff) / 255.0,
                                                                 0);
                                    fVar38 = (float)FUN_026982b0((float)(uVar4 >> 0x10 & 0xff) /
                                                                 255.0,0);
                                    fVar34 = fVar28;
                                    if (1.0 < fVar28) {
                                      fVar34 = 1.0;
                                    }
                                    fVar34 = fVar34 * 255.0;
                                    if (fVar28 < 0.0) {
                                      fVar34 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                    if (0.0 <= fVar34) {
                                      if (dVar32 == 0.5) {
                                        fVar34 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar34 = (float)(int)(fVar34 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar34 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar34 = (float)(int)(fVar34 + -0.5);
                                    }
                                    fVar28 = fVar29;
                                    if (1.0 < fVar29) {
                                      fVar28 = 1.0;
                                    }
                                    fVar28 = fVar28 * 255.0;
                                    if (fVar29 < 0.0) {
                                      fVar28 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                    if (0.0 <= fVar28) {
                                      if (dVar32 == 0.5) {
                                        fVar28 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar28 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar28 = (float)(int)(fVar28 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar28 = (float)(int)(fVar28 + -0.5);
                                    }
                                    fVar29 = fVar38;
                                    if (1.0 < fVar38) {
                                      fVar29 = 1.0;
                                    }
                                    fVar29 = fVar29 * 255.0;
                                    fVar39 = (float)(uVar4 >> 0x18) / 255.0;
                                    if (fVar38 < 0.0) {
                                      fVar29 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                                    if (0.0 <= fVar29) {
                                      if (dVar32 == 0.5) {
                                        fVar29 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e43a84;
                                      }
                                      fVar38 = (float)(int)(fVar29 + 0.5);
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43a84:
                                      fVar38 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar38 = fVar29;
                                      }
                                    }
                                    else {
                                      fVar38 = (float)(int)(fVar29 + -0.5);
                                    }
                                    if (1.0 < fVar39) {
                                      fVar39 = 1.0;
                                    }
                                    fVar39 = fVar39 * 255.0;
                                    dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                    if (0.0 <= fVar39) {
                                      if (dVar32 == 0.5) {
                                        fVar29 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar29 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar29 = (float)(int)(fVar39 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar29 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar29 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar29 = (float)(int)(fVar39 + -0.5);
                                    }
                                    if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_00e44400;
                                    *puVar21 = (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                               ((int)fVar38 & 0xffU) << 0x10 | (int)fVar29 << 0x18;
                                    lVar18 = *in_stack_00000030;
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_00e44400;
                                    puVar21 = (uint *)(lVar18 + (long)(int)uVar23 * 4 + 0x20);
                                    uVar22 = *puVar21;
                                    fVar28 = (float)FUN_026982b0((float)(uVar22 & 0xff) / 255.0,0);
                                    fVar29 = (float)FUN_026982b0((float)(uVar22 >> 8 & 0xff) / 255.0
                                                                 ,0);
                                    fVar38 = (float)FUN_026982b0((float)(uVar22 >> 0x10 & 0xff) /
                                                                 255.0,0);
                                    fVar34 = fVar28;
                                    if (1.0 < fVar28) {
                                      fVar34 = 1.0;
                                    }
                                    fVar34 = fVar34 * 255.0;
                                    if (fVar28 < 0.0) {
                                      fVar34 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                    if (0.0 <= fVar34) {
                                      if (dVar32 == 0.5) {
                                        fVar34 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar34 = (float)(int)(fVar34 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar34 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar34 = (float)(int)(fVar34 + -0.5);
                                    }
                                    fVar28 = fVar29;
                                    if (1.0 < fVar29) {
                                      fVar28 = 1.0;
                                    }
                                    fVar28 = fVar28 * 255.0;
                                    if (fVar29 < 0.0) {
                                      fVar28 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                    if (0.0 <= fVar28) {
                                      if (dVar32 == 0.5) {
                                        fVar28 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar28 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar28 = (float)(int)(fVar28 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar28 = (float)(int)(fVar28 + -0.5);
                                    }
                                    fVar29 = fVar38;
                                    if (1.0 < fVar38) {
                                      fVar29 = 1.0;
                                    }
                                    fVar29 = fVar29 * 255.0;
                                    fVar39 = (float)(uVar22 >> 0x18) / 255.0;
                                    if (fVar38 < 0.0) {
                                      fVar29 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                                    if (0.0 <= fVar29) {
                                      if (dVar32 == 0.5) {
                                        fVar29 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e43dbc;
                                      }
                                      fVar38 = (float)(int)(fVar29 + 0.5);
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43dbc:
                                      fVar38 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar38 = fVar29;
                                      }
                                    }
                                    else {
                                      fVar38 = (float)(int)(fVar29 + -0.5);
                                    }
                                    if (1.0 < fVar39) {
                                      fVar39 = 1.0;
                                    }
                                    fVar39 = fVar39 * 255.0;
                                    dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                    if (0.0 <= fVar39) {
                                      if (dVar32 == 0.5) {
                                        fVar29 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar29 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar29 = (float)(int)(fVar39 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar29 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar29 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar29 = (float)(int)(fVar39 + -0.5);
                                    }
                                    if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_00e44400;
                                    *puVar21 = (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                               ((int)fVar38 & 0xffU) << 0x10 | (int)fVar29 << 0x18;
                                    lVar18 = *in_stack_00000030;
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_00e44400;
                                    puVar21 = (uint *)(lVar18 + in_stack_00000058 * 4 + 0x20);
                                    uVar22 = *puVar21;
                                    fVar28 = (float)FUN_026982b0((float)(uVar22 & 0xff) / 255.0,0);
                                    fVar29 = (float)FUN_026982b0((float)(uVar22 >> 8 & 0xff) / 255.0
                                                                 ,0);
                                    fVar38 = (float)FUN_026982b0((float)(uVar22 >> 0x10 & 0xff) /
                                                                 255.0,0);
                                    fVar34 = fVar28;
                                    if (1.0 < fVar28) {
                                      fVar34 = 1.0;
                                    }
                                    fVar34 = fVar34 * 255.0;
                                    if (fVar28 < 0.0) {
                                      fVar34 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                    if (0.0 <= fVar34) {
                                      if (dVar32 == 0.5) {
                                        fVar34 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar34 = (float)(int)(fVar34 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar34 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar34 = (float)(int)(fVar34 + -0.5);
                                    }
                                    uVar35 = 0x3f800000;
                                    fVar28 = fVar29;
                                    if (1.0 < fVar29) {
                                      fVar28 = 1.0;
                                    }
                                    fVar28 = fVar28 * 255.0;
                                    if (fVar29 < 0.0) {
                                      fVar28 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                    if (0.0 <= fVar28) {
                                      if (dVar32 == 0.5) {
                                        fVar28 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar28 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar28 = (float)(int)(fVar28 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar28 = (float)(int)(fVar28 + -0.5);
                                    }
                                    fVar29 = fVar38;
                                    if (1.0 < fVar38) {
                                      fVar29 = 1.0;
                                    }
                                    fVar29 = fVar29 * 255.0;
                                    fVar39 = (float)(uVar22 >> 0x18) / 255.0;
                                    if (fVar38 < 0.0) {
                                      fVar29 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                                    if (0.0 <= fVar29) {
                                      if (dVar32 == 0.5) {
                                        fVar29 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e440f4;
                                      }
                                      fVar38 = (float)(int)(fVar29 + 0.5);
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e440f4:
                                      fVar38 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar38 = fVar29;
                                      }
                                    }
                                    else {
                                      fVar38 = (float)(int)(fVar29 + -0.5);
                                    }
                                    if (1.0 < fVar39) {
                                      fVar39 = 1.0;
                                    }
                                    fVar39 = fVar39 * 255.0;
                                    dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                    if (0.0 <= fVar39) {
                                      uVar11 = 0;
                                      if (dVar32 == 0.5) {
                                        fVar29 = 1.0;
                                        goto LAB_00e44170;
                                      }
                                      fVar39 = (float)(int)(fVar39 + 0.5);
                                    }
                                    else {
                                      uVar11 = 0;
                                      if (dVar32 == -0.5) {
                                        fVar29 = -1.0;
LAB_00e44170:
                                        fVar29 = (float)_fStack0000000000000070 + fVar29;
                                        uVar11 = (ulong)(uint)fVar29;
                                        fVar39 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar39 = fVar29;
                                        }
                                      }
                                      else {
                                        fVar39 = (float)(int)(fVar39 + -0.5);
                                      }
                                    }
                                    if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_00e44400;
                                    *puVar21 = (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                               ((int)fVar38 & 0xffU) << 0x10 | (int)fVar39 << 0x18;
                                    unaff_x26 = in_stack_00000030;
                                  }
                                }
                                puVar7 = StringLiteral_4992;
                                puVar6 = OVREyeGaze_TypeInfo;
                                in_stack_00000050 = in_stack_00000050 + 1;
                                if (in_stack_00000050 == in_stack_00000018) {
                                  if (((unaff_x19[0x58] == 0) ||
                                      (iVar9 = FUN_026c82cc(unaff_x19[0x58],0), iVar9 < 1)) &&
                                     (unaff_x19[0x59] == 0)) goto LAB_00e443b0;
                                  puVar6 = Method_Sirenix_Utilities_RectExtensions_TakeFromDir__;
                                  if ((unaff_x19[0xcb] == 0) || (unaff_x19[0xf] == 0))
                                  goto LAB_00e443fc;
                                  iVar9 = *(int *)(unaff_x19[0xf] + 0x10);
                                  plVar10 = unaff_x19 + 0xcb;
                                  if (iVar9 != *(int *)(unaff_x19[0xcb] + 0x18)) {
                                    FUN_010afdd4(plVar10,iVar9,
                                                 *(undefined8 *)
                                                  Method_Sirenix_Utilities_RectExtensions_TakeFromDir__
                                                );
                                  }
                                  if ((unaff_x19[0xcc] == 0) ||
                                     (lVar18 = unaff_x19[0xf], lVar18 == 0)) goto LAB_00e443fc;
                                  plVar1 = unaff_x19 + 0xcc;
                                  if (*(int *)(lVar18 + 0x10) != *(int *)(unaff_x19[0xcc] + 0x18)) {
                                    FUN_010afdd4(plVar1,*(int *)(lVar18 + 0x10),
                                                 *(undefined8 *)puVar6);
                                    lVar18 = unaff_x19[0xf];
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                  }
                                  uVar22 = *(uint *)(lVar18 + 0x10);
                                  if ((int)uVar22 < 1) goto LAB_00e44358;
                                  uVar12 = 0;
                                  lVar18 = 0x20;
                                  goto LAB_00e442cc;
                                }
                                if (unaff_x19[9] == 0) goto LAB_00e443fc;
                                FUN_0132138c(unaff_x19[9],in_stack_00000050 & 0xffffffff,
                                             &stack0x00000070,*(undefined8 *)StringLiteral_4992);
                                *in_stack_00000060 = _fStack0000000000000070;
                                if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
                                iVar9 = FUN_00e4e99c();
                                if (iVar9 <= *(int *)((long)unaff_x19 + 0x38c)) {
                                  if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                  *(undefined1 *)((long)*in_stack_00000060 + 0x165) = 1;
                                }
                                if (*(float *)(unaff_x19 + 0x14) == 0.0) {
                                  FUN_00e45d2c();
                                }
                                *(undefined2 *)(unaff_x19 + 0xdc) = 0;
                                if (*(char *)((long)unaff_x19 + 0xf6) == '\0') {
                                  uVar11 = FUN_0269e56c(0);
                                  if (((fStack000000000000004c == 0.0) || ((uVar11 & 1) == 0)) ||
                                     (1 < (int)unaff_x19[0x2a] - 3U)) {
                                    if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                                    iVar9 = *(int *)(unaff_x19[0xf] + 0x10) + -1;
                                    *(int *)((long)unaff_x19 + 0x38c) = iVar9;
                                    if ((unaff_x19[9] == 0) ||
                                       (FUN_0132138c(unaff_x19[9],iVar9,&stack0x00000070,
                                                     *(undefined8 *)puVar7),
                                       _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
                                    *(undefined4 *)(unaff_x19 + 0x4a) =
                                         *(undefined4 *)((long)_fStack0000000000000070 + 0x48);
                                    if ((unaff_x19[9] == 0) ||
                                       (FUN_0132138c(unaff_x19[9],
                                                     *(undefined4 *)((long)unaff_x19 + 0x38c),
                                                     &stack0x00000070,*(undefined8 *)puVar7),
                                       _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
                                    *(float *)((long)unaff_x19 + 0x254) =
                                         *(float *)((long)_fStack0000000000000070 + 0x48) +
                                         *(float *)((long)unaff_x19 + 0x50c);
                                    *(undefined4 *)(unaff_x19 + 0x4b) =
                                         *(undefined4 *)((long)unaff_x19 + 0x18c);
                                  }
                                }
                                else {
                                  dVar32 = *in_stack_00000060;
                                  if ((dVar32 == 0.0) || (*(long *)((long)dVar32 + 0x78) == 0))
                                  goto LAB_00e443fc;
                                  fVar28 = *(float *)(*(long *)((long)dVar32 + 0x78) + 0x18);
                                  fVar34 = DAT_028aa034;
                                  if (fVar28 != 0.0) {
                                    fVar34 = fVar28;
                                  }
                                  if ((0.0 < (unaff_s15 - *(float *)((long)dVar32 + 100)) / fVar34)
                                     && (*(char *)((long)dVar32 + 0x165) == '\0')) {
                                    *(undefined1 *)((long)dVar32 + 0x165) = 1;
                                    *(undefined1 *)((long)unaff_x19 + 0x6e1) = 1;
                                    if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                                    sVar8 = FUN_015fa29c(unaff_x19[0xf],
                                                         in_stack_00000050 & 0xffffffff,0);
                                    if (sVar8 != 0x200b) {
                                      *(undefined1 *)(unaff_x19 + 0xdc) = 1;
                                      if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                                      sVar8 = FUN_015fa29c(unaff_x19[0xf],
                                                           in_stack_00000050 & 0xffffffff,0);
                                      if (sVar8 != 0x20) {
                                        if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                                        sVar8 = FUN_015fa29c(unaff_x19[0xf],
                                                             in_stack_00000050 & 0xffffffff,0);
                                        if (sVar8 != 10) {
                                          lVar18 = unaff_x19[0xca];
                                          if (lVar18 == 0) goto LAB_00e443fc;
                                          fVar29 = *(float *)(lVar18 + 0x48);
                                          fVar34 = *(float *)(unaff_x19 + 0x4b);
                                          fVar38 = fVar29 + *(float *)((long)unaff_x19 + 0x50c);
                                          fVar28 = *(float *)(unaff_x19 + 0x4a);
                                          if (fVar29 <= *(float *)(unaff_x19 + 0x4a)) {
                                            fVar28 = fVar29;
                                          }
                                          *(float *)(unaff_x19 + 0x4a) = fVar28;
                                          fVar28 = *(float *)((long)unaff_x19 + 0x254);
                                          if (fVar38 <= *(float *)((long)unaff_x19 + 0x254)) {
                                            fVar28 = fVar38;
                                          }
                                          *(float *)((long)unaff_x19 + 0x254) = fVar28;
                                          fVar28 = (float)FUN_00e5ef30(*(undefined4 *)
                                                                        ((long)unaff_x19 + 0x134),
                                                                       lVar18,0);
                                          fVar28 = fVar28 + *(float *)(unaff_x19 + 0xa1) +
                                                   *(float *)((long)unaff_x19 + 0x55c);
                                          if (fVar34 <= fVar28) {
                                            fVar34 = fVar28;
                                          }
                                          *(float *)(unaff_x19 + 0x4b) = fVar34;
                                        }
                                      }
                                    }
                                    iVar37 = *(int *)((long)unaff_x19 + 0x38c);
                                    if (*(int *)((long)unaff_x19 + 0x38c) <= iVar9) {
                                      iVar37 = iVar9;
                                    }
                                    *(int *)((long)unaff_x19 + 0x38c) = iVar37;
                                  }
                                }
                                FUN_00e4e52c();
                                if (*(char *)((long)unaff_x19 + 0x6e1) != '\0') {
                                  FUN_00e45d2c();
                                }
                                if ((char)unaff_x19[0xdc] != '\0') {
                                  (**(code **)(*unaff_x19 + 0x218))();
                                  if (unaff_x19[0x54] != 0) {
                                    FUN_026c868c(unaff_x19[0x54],0);
                                  }
                                  lVar18 = unaff_x19[0x55];
                                  if (lVar18 != 0) {
                                    (**(code **)(lVar18 + 0x18))
                                              (*(undefined8 *)(lVar18 + 0x40),
                                               *(undefined8 *)(lVar18 + 0x28));
                                  }
                                }
                                unaff_x19[0xc6] = 0;
                                fVar28 = 0.0;
                                *(undefined4 *)(unaff_x19 + 199) = 0;
                                fVar34 = 0.0;
                                if ((((0.0 < fStack000000000000004c) &&
                                     (uVar22 = *(uint *)(unaff_x19 + 0x2a), fVar34 = fVar28,
                                     uVar22 < 5)) && ((1 << (ulong)(uVar22 & 0x1f) & 0x19U) != 0))
                                   && (*(float *)(unaff_x19 + 0x4a) <
                                       -*(float *)((long)unaff_x19 + 0x184))) {
                                  if (uVar22 == 4) {
                                    lVar18 = unaff_x19[0xc];
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (0 < *(int *)(lVar18 + 0x18)) {
                                      iVar9 = 0;
                                      do {
                                        FUN_0132138c(lVar18,iVar9,&stack0x00000070,
                                                     *(undefined8 *)puVar6);
                                        *(float *)((long)unaff_x19 + 0x634) = fStack0000000000000070
                                        ;
                                        fVar34 = fStack0000000000000070;
                                        if (-*(float *)(unaff_x19 + 0x4a) -
                                            *(float *)((long)unaff_x19 + 0x184) <=
                                            fStack0000000000000070) break;
                                        lVar18 = unaff_x19[0xc];
                                        if (lVar18 == 0) goto LAB_00e443fc;
                                        iVar9 = iVar9 + 1;
                                      } while (iVar9 < *(int *)(lVar18 + 0x18));
                                    }
                                  }
                                  else {
                                    lVar18 = unaff_x19[0xb];
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    iVar9 = 0;
                                    fVar34 = 0.0;
                                    while (iVar9 < *(int *)(lVar18 + 0x18)) {
                                      FUN_0132138c(lVar18,iVar9,&stack0x00000070,
                                                   *(undefined8 *)puVar6);
                                      fVar34 = fVar34 + fStack0000000000000070;
                                      *(float *)((long)unaff_x19 + 0x634) = fVar34;
                                      if (-*(float *)(unaff_x19 + 0x4a) -
                                          *(float *)((long)unaff_x19 + 0x184) <= fVar34) break;
                                      lVar18 = unaff_x19[0xb];
                                      iVar9 = iVar9 + 1;
                                      if (lVar18 == 0) goto LAB_00e443fc;
                                    }
                                  }
                                }
                                *(float *)(unaff_x19 + 0xc6) =
                                     *(float *)(unaff_x19 + 0xc6) + *(float *)(unaff_x19 + 0xa7);
                                if (unaff_x19[9] == 0) goto LAB_00e443fc;
                                fVar28 = *(float *)((long)unaff_x19 + 0x53c);
                                FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar7);
                                if ((_fStack0000000000000070 == 0.0) || (unaff_x19[9] == 0))
                                goto LAB_00e443fc;
                                fVar29 = *(float *)((long)_fStack0000000000000070 + 0x5c);
                                FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar7);
                                if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
                                fVar39 = *(float *)(unaff_x19 + 0xa8);
                                fVar38 = *(float *)(unaff_x19 + 199) + fVar39;
                                *(float *)((long)unaff_x19 + 0x634) =
                                     fVar34 + fVar28 + (fVar29 + -1.0) *
                                                       *(float *)((long)_fStack0000000000000070 +
                                                                 0x84);
                                *(float *)(unaff_x19 + 199) = fVar38;
                                puVar6 = 
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                ;
                                if (DAT_03774d76 == '\0') {
                                  thunk_FUN_00d48444(
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                                  );
                                  DAT_03774d76 = '\x01';
                                }
                                fVar28 = 1.0;
                                fVar34 = 1.0;
                                uVar30 = *(undefined4 *)
                                          (*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
                                in_stack_00000040[0x10] = **(undefined8 **)(*(long *)puVar6 + 0xb8);
                                *(undefined4 *)((long)unaff_x19 + 0x67c) = uVar30;
                                if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                uVar20 = *(undefined8 *)(unaff_x19[0xca] + 200);
                                if (*(int *)(*(long *)
                                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                            + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar11 = FUN_02681b9c(uVar20,0,0);
                                if ((uVar11 & 1) != 0) {
                                  lVar18 = __start_il2cpp();
                                  if (lVar18 == 0) goto LAB_00e443fc;
                                  if ((*(char *)(lVar18 + 0x109) == '\0') &&
                                     (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
                                    *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                                    if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                    uVar30 = FUN_00e4ee40();
                                    *(undefined4 *)((long)unaff_x19 + 0x674) = uVar30;
                                    *(float *)(unaff_x19 + 0xcf) = fVar38;
                                    *(float *)((long)unaff_x19 + 0x67c) = fVar39;
                                  }
                                }
                                if (DAT_03774d76 == '\0') {
                                  thunk_FUN_00d48444(puVar6);
                                  DAT_03774d76 = '\x01';
                                }
                                lVar14 = *(long *)puVar6;
                                uVar30 = *(undefined4 *)(*(undefined8 **)(lVar14 + 0xb8) + 1);
                                *in_stack_00000040 = **(undefined8 **)(lVar14 + 0xb8);
                                *(undefined4 *)((long)unaff_x19 + 0x5fc) = uVar30;
                                lVar18 = (*(long **)(lVar14 + 0xb8))[1];
                                unaff_x19[0xc0] = **(long **)(lVar14 + 0xb8);
                                *(int *)(unaff_x19 + 0xc1) = (int)lVar18;
                                uVar30 = *(undefined4 *)(*(undefined8 **)(lVar14 + 0xb8) + 1);
                                in_stack_00000040[3] = **(undefined8 **)(lVar14 + 0xb8);
                                *(undefined4 *)((long)unaff_x19 + 0x614) = uVar30;
                                lVar18 = (*(long **)(lVar14 + 0xb8))[1];
                                unaff_x19[0xc3] = **(long **)(lVar14 + 0xb8);
                                *(int *)(unaff_x19 + 0xc4) = (int)lVar18;
                                uVar30 = *(undefined4 *)(*(undefined8 **)(lVar14 + 0xb8) + 1);
                                in_stack_00000040[6] = **(undefined8 **)(lVar14 + 0xb8);
                                *(undefined4 *)((long)unaff_x19 + 0x62c) = uVar30;
                                if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                uVar20 = *(undefined8 *)(unaff_x19[0xca] + 0xc0);
                                if (*(int *)(*(long *)
                                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                            + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar11 = FUN_02681b9c(uVar20,0,0);
                                if ((uVar11 & 1) != 0) {
                                  if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                  if (*(float *)((long)*in_stack_00000060 + 0x84) != 0.0) {
                                    lVar18 = __start_il2cpp();
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if ((*(char *)(lVar18 + 0x109) == '\0') &&
                                       (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
                                      lVar18 = unaff_x19[0xca];
                                      *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                                      if ((lVar18 == 0) ||
                                         (lVar14 = *(long *)(lVar18 + 0xc0), lVar14 == 0))
                                      goto LAB_00e443fc;
                                      fVar29 = fStack0000000000000048;
                                      if (*(char *)(lVar14 + 0x18) != '\0') {
                                        fVar38 = *(float *)(lVar18 + 100);
                                        fVar29 = *(float *)((long)unaff_x19 + 0x2ec) - fVar38;
                                      }
                                      if (*(char *)(lVar14 + 0x19) != '\0') {
                                        uVar30 = FUN_00e4e9f4(fVar29);
                                        lVar18 = unaff_x19[0xca];
                                        *(undefined4 *)((long)unaff_x19 + 0x5f4) = uVar30;
                                        *(float *)(unaff_x19 + 0xbf) = fVar38;
                                        *(float *)((long)unaff_x19 + 0x5fc) = fVar39;
                                        if (lVar18 == 0) goto LAB_00e443fc;
                                      }
                                      if (*(long *)(lVar18 + 0xc0) == 0) goto LAB_00e443fc;
                                      if (*(char *)(*(long *)(lVar18 + 0xc0) + 0x28) != '\0') {
                                        fVar27 = (float)FUN_00e4e9f4(fVar29);
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar27;
                                        *(float *)(unaff_x19 + 200) = fVar38;
                                        fVar33 = fVar39 + *(float *)(unaff_x19 + 0xc1);
                                        *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                        unaff_x19[0xc0] =
                                             CONCAT44(fVar38 + (float)((ulong)unaff_x19[0xc0] >>
                                                                      0x20),
                                                      fVar27 + (float)unaff_x19[0xc0]);
                                        *(float *)(unaff_x19 + 0xc1) = fVar33;
                                        if ((unaff_x19[0xca] == 0) ||
                                           (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                                        goto LAB_00e443fc;
                                        fVar38 = (float)FUN_00e4e9f4(fVar29);
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar38;
                                        *(float *)(unaff_x19 + 200) = fVar33;
                                        *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                        in_stack_00000040[3] =
                                             CONCAT44(fVar33 + (float)((ulong)in_stack_00000040[3]
                                                                      >> 0x20),
                                                      fVar38 + (float)in_stack_00000040[3]);
                                        *(float *)((long)unaff_x19 + 0x614) =
                                             fVar39 + *(float *)((long)unaff_x19 + 0x614);
                                        if ((unaff_x19[0xca] == 0) ||
                                           (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                                        goto LAB_00e443fc;
                                        fVar27 = (float)FUN_00e4e9f4(fVar29);
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar27;
                                        *(float *)(unaff_x19 + 200) = fVar33;
                                        fVar38 = fVar39 + *(float *)(unaff_x19 + 0xc4);
                                        *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                        unaff_x19[0xc3] =
                                             CONCAT44(fVar33 + (float)((ulong)unaff_x19[0xc3] >>
                                                                      0x20),
                                                      fVar27 + (float)unaff_x19[0xc3]);
                                        *(float *)(unaff_x19 + 0xc4) = fVar38;
                                        if ((unaff_x19[0xca] == 0) ||
                                           (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                                        goto LAB_00e443fc;
                                        fVar29 = (float)FUN_00e4e9f4(fVar29);
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                        *(float *)(unaff_x19 + 200) = fVar38;
                                        *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                        in_stack_00000040[6] =
                                             CONCAT44(fVar38 + (float)((ulong)in_stack_00000040[6]
                                                                      >> 0x20),
                                                      fVar29 + (float)in_stack_00000040[6]);
                                        lVar18 = unaff_x19[0xca];
                                        *(float *)((long)unaff_x19 + 0x62c) =
                                             fVar39 + *(float *)((long)unaff_x19 + 0x62c);
                                        if (lVar18 == 0) goto LAB_00e443fc;
                                      }
                                      if (*(long *)(lVar18 + 0xc0) == 0) goto LAB_00e443fc;
                                      if (*(char *)(*(long *)(lVar18 + 0xc0) + 0x50) != '\0') {
                                        FUN_00e5eda8(lVar18,0);
                                        fVar29 = (float)FUN_00e4eb50();
                                        lVar18 = unaff_x19[0xca];
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                        *(float *)(unaff_x19 + 200) = fVar38;
                                        fVar27 = fVar39 + *(float *)(unaff_x19 + 0xc1);
                                        *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                        unaff_x19[0xc0] =
                                             CONCAT44(fVar38 + (float)((ulong)unaff_x19[0xc0] >>
                                                                      0x20),
                                                      fVar29 + (float)unaff_x19[0xc0]);
                                        *(float *)(unaff_x19 + 0xc1) = fVar27;
                                        if ((lVar18 == 0) || (*(long *)(lVar18 + 0xc0) == 0))
                                        goto LAB_00e443fc;
                                        FUN_00e5b838(lVar18,0);
                                        fVar29 = (float)FUN_00e4eb50();
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                        *(float *)(unaff_x19 + 200) = fVar27;
                                        *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                        in_stack_00000040[3] =
                                             CONCAT44(fVar27 + (float)((ulong)in_stack_00000040[3]
                                                                      >> 0x20),
                                                      fVar29 + (float)in_stack_00000040[3]);
                                        lVar18 = unaff_x19[0xca];
                                        *(float *)((long)unaff_x19 + 0x614) =
                                             fVar39 + *(float *)((long)unaff_x19 + 0x614);
                                        if ((lVar18 == 0) || (*(long *)(lVar18 + 0xc0) == 0))
                                        goto LAB_00e443fc;
                                        FUN_00e5eea4(lVar18,0);
                                        fVar29 = (float)FUN_00e4eb50();
                                        lVar18 = unaff_x19[0xca];
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                        *(float *)(unaff_x19 + 200) = fVar27;
                                        fVar38 = fVar39 + *(float *)(unaff_x19 + 0xc4);
                                        *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                        unaff_x19[0xc3] =
                                             CONCAT44(fVar27 + (float)((ulong)unaff_x19[0xc3] >>
                                                                      0x20),
                                                      fVar29 + (float)unaff_x19[0xc3]);
                                        *(float *)(unaff_x19 + 0xc4) = fVar38;
                                        if ((lVar18 == 0) || (*(long *)(lVar18 + 0xc0) == 0))
                                        goto LAB_00e443fc;
                                        FUN_00e5b7d8(lVar18,0);
                                        fVar29 = (float)FUN_00e4eb50();
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                        *(float *)(unaff_x19 + 200) = fVar38;
                                        *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                        in_stack_00000040[6] =
                                             CONCAT44(fVar38 + (float)((ulong)in_stack_00000040[6]
                                                                      >> 0x20),
                                                      fVar29 + (float)in_stack_00000040[6]);
                                        lVar18 = unaff_x19[0xca];
                                        *(float *)((long)unaff_x19 + 0x62c) =
                                             fVar39 + *(float *)((long)unaff_x19 + 0x62c);
                                        if (lVar18 == 0) goto LAB_00e443fc;
                                      }
                                      lVar14 = *(long *)(lVar18 + 0xc0);
                                      if (lVar14 == 0) goto LAB_00e443fc;
                                      if (*(char *)(lVar14 + 0x60) != '\0') {
                                        uVar24 = *(undefined8 *)(lVar14 + 0x68);
                                        uVar20 = FUN_00e5eda8(lVar18,0);
                                        fVar29 = (float)FUN_00e4ecc4(uVar20,lVar18,uVar24);
                                        lVar18 = unaff_x19[0xca];
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                        *(float *)(unaff_x19 + 200) = fVar38;
                                        fVar27 = fVar39 + *(float *)(unaff_x19 + 0xc1);
                                        *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                        unaff_x19[0xc0] =
                                             CONCAT44(fVar38 + (float)((ulong)unaff_x19[0xc0] >>
                                                                      0x20),
                                                      fVar29 + (float)unaff_x19[0xc0]);
                                        *(float *)(unaff_x19 + 0xc1) = fVar27;
                                        if ((lVar18 == 0) || (*(long *)(lVar18 + 0xc0) == 0))
                                        goto LAB_00e443fc;
                                        uVar24 = *(undefined8 *)(*(long *)(lVar18 + 0xc0) + 0x68);
                                        uVar20 = FUN_00e5b838(lVar18,0);
                                        fVar29 = (float)FUN_00e4ecc4(uVar20,lVar18,uVar24);
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                        *(float *)(unaff_x19 + 200) = fVar27;
                                        *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                        in_stack_00000040[3] =
                                             CONCAT44(fVar27 + (float)((ulong)in_stack_00000040[3]
                                                                      >> 0x20),
                                                      fVar29 + (float)in_stack_00000040[3]);
                                        lVar18 = unaff_x19[0xca];
                                        *(float *)((long)unaff_x19 + 0x614) =
                                             fVar39 + *(float *)((long)unaff_x19 + 0x614);
                                        if ((lVar18 == 0) || (*(long *)(lVar18 + 0xc0) == 0))
                                        goto LAB_00e443fc;
                                        uVar24 = *(undefined8 *)(*(long *)(lVar18 + 0xc0) + 0x68);
                                        uVar20 = FUN_00e5eea4(lVar18,0);
                                        fVar29 = (float)FUN_00e4ecc4(uVar20,lVar18,uVar24);
                                        lVar18 = unaff_x19[0xca];
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                        *(float *)(unaff_x19 + 200) = fVar27;
                                        fVar38 = fVar39 + *(float *)(unaff_x19 + 0xc4);
                                        *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                        unaff_x19[0xc3] =
                                             CONCAT44(fVar27 + (float)((ulong)unaff_x19[0xc3] >>
                                                                      0x20),
                                                      fVar29 + (float)unaff_x19[0xc3]);
                                        *(float *)(unaff_x19 + 0xc4) = fVar38;
                                        if ((lVar18 == 0) || (*(long *)(lVar18 + 0xc0) == 0))
                                        goto LAB_00e443fc;
                                        uVar24 = *(undefined8 *)(*(long *)(lVar18 + 0xc0) + 0x68);
                                        uVar20 = FUN_00e5b7d8(lVar18,0);
                                        fVar29 = (float)FUN_00e4ecc4(uVar20,lVar18,uVar24);
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                        *(float *)(unaff_x19 + 200) = fVar38;
                                        *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                        in_stack_00000040[6] =
                                             CONCAT44(fVar38 + (float)((ulong)in_stack_00000040[6]
                                                                      >> 0x20),
                                                      fVar29 + (float)in_stack_00000040[6]);
                                        *(float *)((long)unaff_x19 + 0x62c) =
                                             fVar39 + *(float *)((long)unaff_x19 + 0x62c);
                                      }
                                    }
                                  }
                                }
                                in_stack_00000068 = (int)in_stack_00000050 << 2;
                                if ((fStack000000000000004c <= 0.0) || ((int)unaff_x19[0x2a] == 2))
                                {
LAB_00e3cd74:
                                  if (*(char *)((long)unaff_x19 + 300) == '\0') {
                                    in_stack_00000040[0x1e] = unaff_x19[0x24];
                                  }
                                  else {
                                    if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                    uVar20 = *(undefined8 *)((long)*in_stack_00000060 + 0x80);
                                    in_stack_00000040[0x1e] =
                                         CONCAT44((float)((ulong)unaff_x19[0x24] >> 0x20) *
                                                  (float)((ulong)uVar20 >> 0x20),
                                                  (float)unaff_x19[0x24] * (float)uVar20);
                                  }
                                  lVar18 = unaff_x19[0x5e];
                                  *(int *)((long)unaff_x19 + 0x6ec) = (int)unaff_x19[0x25];
                                  if ((lVar18 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  fVar29 = (float)FUN_00e5eda8(*in_stack_00000060,0);
                                  if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068)
                                  goto LAB_00e44400;
                                  fVar38 = *(float *)((long)unaff_x19 + 0x674);
                                  uVar11 = (ulong)(int)in_stack_00000068;
                                  *(float *)(lVar18 + uVar11 * 0xc + 0x20) =
                                       fVar29 + fVar38 + *(float *)(unaff_x19 + 0xc0) +
                                       *(float *)((long)unaff_x19 + 0x5f4) +
                                       *(float *)(unaff_x19 + 0xc6) +
                                       *(float *)((long)unaff_x19 + 0x6e4);
                                  lVar18 = unaff_x19[0x5e];
                                  if ((lVar18 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  FUN_00e5eda8(*in_stack_00000060,0);
                                  if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068)
                                  goto LAB_00e44400;
                                  fVar29 = *(float *)((long)unaff_x19 + 0x604);
                                  *(float *)(lVar18 + uVar11 * 0xc + 0x24) =
                                       fVar38 + *(float *)(unaff_x19 + 0xcf) + fVar29 +
                                       *(float *)(unaff_x19 + 0xbf) +
                                       *(float *)((long)unaff_x19 + 0x634) +
                                       *(float *)(unaff_x19 + 0xdd);
                                  lVar18 = unaff_x19[0x5e];
                                  if ((lVar18 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  FUN_00e5eda8(*in_stack_00000060,0);
                                  if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068)
                                  goto LAB_00e44400;
                                  *(float *)(lVar18 + uVar11 * 0xc + 0x28) =
                                       fVar29 + *(float *)((long)unaff_x19 + 0x67c) +
                                       *(float *)(unaff_x19 + 0xc1) +
                                       *(float *)((long)unaff_x19 + 0x5fc) +
                                       *(float *)(unaff_x19 + 199) +
                                       *(float *)((long)unaff_x19 + 0x6ec);
                                  lVar18 = unaff_x19[0x5e];
                                  if ((lVar18 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  fVar29 = (float)FUN_00e5b838(*in_stack_00000060,0);
                                  uVar12 = uVar11 | 1;
                                  uVar22 = (uint)uVar12;
                                  if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_00e44400;
                                  fVar38 = *(float *)((long)unaff_x19 + 0x674);
                                  *(float *)(lVar18 + uVar12 * 0xc + 0x20) =
                                       fVar29 + fVar38 + *(float *)((long)unaff_x19 + 0x60c) +
                                       *(float *)((long)unaff_x19 + 0x5f4) +
                                       *(float *)(unaff_x19 + 0xc6) +
                                       *(float *)((long)unaff_x19 + 0x6e4);
                                  lVar18 = unaff_x19[0x5e];
                                  if ((lVar18 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  FUN_00e5b838(*in_stack_00000060,0);
                                  if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_00e44400;
                                  fVar29 = *(float *)(unaff_x19 + 0xc2);
                                  *(float *)(lVar18 + uVar12 * 0xc + 0x24) =
                                       fVar38 + *(float *)(unaff_x19 + 0xcf) + fVar29 +
                                       *(float *)(unaff_x19 + 0xbf) +
                                       *(float *)((long)unaff_x19 + 0x634) +
                                       *(float *)(unaff_x19 + 0xdd);
                                  lVar18 = unaff_x19[0x5e];
                                  if ((lVar18 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  FUN_00e5b838(*in_stack_00000060,0);
                                  if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_00e44400;
                                  *(float *)(lVar18 + uVar12 * 0xc + 0x28) =
                                       fVar29 + *(float *)((long)unaff_x19 + 0x67c) +
                                       *(float *)((long)unaff_x19 + 0x614) +
                                       *(float *)((long)unaff_x19 + 0x5fc) +
                                       *(float *)(unaff_x19 + 199) +
                                       *(float *)((long)unaff_x19 + 0x6ec);
                                  lVar18 = unaff_x19[0x5e];
                                  if ((lVar18 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  fVar29 = (float)FUN_00e5eea4(*in_stack_00000060,0);
                                  uVar25 = uVar11 | 2;
                                  uVar23 = (uint)uVar25;
                                  if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_00e44400;
                                  fVar38 = *(float *)((long)unaff_x19 + 0x674);
                                  *(float *)(lVar18 + uVar25 * 0xc + 0x20) =
                                       fVar29 + fVar38 + *(float *)(unaff_x19 + 0xc3) +
                                       *(float *)((long)unaff_x19 + 0x5f4) +
                                       *(float *)(unaff_x19 + 0xc6) +
                                       *(float *)((long)unaff_x19 + 0x6e4);
                                  lVar18 = unaff_x19[0x5e];
                                  if ((lVar18 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  FUN_00e5eea4(*in_stack_00000060,0);
                                  if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_00e44400;
                                  fVar29 = *(float *)((long)unaff_x19 + 0x61c);
                                  *(float *)(lVar18 + uVar25 * 0xc + 0x24) =
                                       fVar38 + *(float *)(unaff_x19 + 0xcf) + fVar29 +
                                       *(float *)(unaff_x19 + 0xbf) +
                                       *(float *)((long)unaff_x19 + 0x634) +
                                       *(float *)(unaff_x19 + 0xdd);
                                  lVar18 = unaff_x19[0x5e];
                                  if ((lVar18 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  FUN_00e5eea4(*in_stack_00000060,0);
                                  if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_00e44400;
                                  *(float *)(lVar18 + uVar25 * 0xc + 0x28) =
                                       fVar29 + *(float *)((long)unaff_x19 + 0x67c) +
                                       *(float *)(unaff_x19 + 0xc4) +
                                       *(float *)((long)unaff_x19 + 0x5fc) +
                                       *(float *)(unaff_x19 + 199) +
                                       *(float *)((long)unaff_x19 + 0x6ec);
                                  lVar18 = unaff_x19[0x5e];
                                  if ((lVar18 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  fVar29 = (float)FUN_00e5b7d8(*in_stack_00000060,0);
                                  uVar26 = uVar11 | 3;
                                  uVar16 = (uint)uVar26;
                                  if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_00e44400;
                                  fVar38 = *(float *)((long)unaff_x19 + 0x674);
                                  *(float *)(lVar18 + uVar26 * 0xc + 0x20) =
                                       fVar29 + fVar38 + *(float *)((long)unaff_x19 + 0x624) +
                                       *(float *)((long)unaff_x19 + 0x5f4) +
                                       *(float *)(unaff_x19 + 0xc6) +
                                       *(float *)((long)unaff_x19 + 0x6e4);
                                  lVar18 = unaff_x19[0x5e];
                                  if ((lVar18 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  FUN_00e5b7d8(*in_stack_00000060,0);
                                  if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_00e44400;
                                  uVar35 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
                                  *(float *)(lVar18 + uVar26 * 0xc + 0x24) =
                                       fVar38 + *(float *)(unaff_x19 + 0xcf) +
                                       *(float *)(unaff_x19 + 0xc5) + *(float *)(unaff_x19 + 0xbf) +
                                       *(float *)((long)unaff_x19 + 0x634) +
                                       *(float *)(unaff_x19 + 0xdd);
                                  lVar18 = unaff_x19[0x5e];
                                  if ((lVar18 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  FUN_00e5b7d8(*in_stack_00000060,0);
                                  if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_00e44400;
                                  fVar29 = *(float *)((long)unaff_x19 + 0x62c);
                                  *(float *)(lVar18 + uVar26 * 0xc + 0x28) =
                                       (float)uVar35 + *(float *)((long)unaff_x19 + 0x67c) + fVar29
                                       + *(float *)((long)unaff_x19 + 0x5fc) +
                                       *(float *)(unaff_x19 + 199) +
                                       *(float *)((long)unaff_x19 + 0x6ec);
                                  lVar18 = unaff_x19[0xca];
                                  if (lVar18 == 0) goto LAB_00e443fc;
                                  lVar14 = *in_stack_00000020;
                                  if (*(char *)(lVar18 + 0x108) == '\0') {
                                    uVar30 = FUN_0272b9dc(lVar18 + 0x10,0);
                                    if (lVar14 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068)
                                    goto LAB_00e44400;
                                    lVar14 = lVar14 + uVar11 * 8;
                                    *(undefined4 *)(lVar14 + 0x20) = uVar30;
                                    *(float *)(lVar14 + 0x24) = fVar29;
                                    if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                    lVar18 = *in_stack_00000020;
                                    uVar30 = thunk_FUN_0272b8d8((long)*in_stack_00000060 + 0x10,0);
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_00e44400;
                                    lVar18 = lVar18 + uVar12 * 8;
                                    *(undefined4 *)(lVar18 + 0x20) = uVar30;
                                    *(float *)(lVar18 + 0x24) = fVar29;
                                    if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                    lVar18 = *in_stack_00000020;
                                    uVar30 = FUN_0272b9c8((long)*in_stack_00000060 + 0x10,0);
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_00e44400;
                                    lVar18 = lVar18 + uVar25 * 8;
                                    *(undefined4 *)(lVar18 + 0x20) = uVar30;
                                    *(float *)(lVar18 + 0x24) = fVar29;
                                    if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                    lVar18 = *in_stack_00000020;
                                    uVar30 = FUN_0272b98c((long)*in_stack_00000060 + 0x10,0);
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_00e44400;
                                    lVar18 = lVar18 + uVar26 * 8;
                                    *(undefined4 *)(lVar18 + 0x20) = uVar30;
                                    *(float *)(lVar18 + 0x24) = fVar29;
                                    if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                    uVar30 = FUN_00e5ecc0(*in_stack_00000060,0);
                                    *(undefined4 *)(unaff_x19 + 0xd9) = uVar30;
                                    if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                    FUN_00e5ecc0(unaff_x19[0xca],0);
                                    *(float *)((long)unaff_x19 + 0x6cc) = fVar29;
                                    unaff_x26 = in_stack_00000030;
                                  }
                                  else {
                                    if ((*(long *)(lVar18 + 0x100) == 0) ||
                                       (uVar30 = FUN_00e5dd14(fStack0000000000000048,
                                                              *(long *)(lVar18 + 0x100),
                                                              *(undefined4 *)(lVar18 + 0x10c),0),
                                       lVar14 == 0)) goto LAB_00e443fc;
                                    if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068)
                                    goto LAB_00e44400;
                                    lVar14 = lVar14 + uVar11 * 8;
                                    *(undefined4 *)(lVar14 + 0x20) = uVar30;
                                    *(float *)(lVar14 + 0x24) = fVar29;
                                    dVar32 = *in_stack_00000060;
                                    if ((dVar32 == 0.0) || (*(long *)((long)dVar32 + 0x100) == 0))
                                    goto LAB_00e443fc;
                                    lVar18 = *in_stack_00000020;
                                    uVar30 = FUN_00e5de6c(fStack0000000000000048,
                                                          *(long *)((long)dVar32 + 0x100),
                                                          *(undefined4 *)((long)dVar32 + 0x10c),0);
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_00e44400;
                                    lVar18 = lVar18 + uVar12 * 8;
                                    *(undefined4 *)(lVar18 + 0x20) = uVar30;
                                    *(float *)(lVar18 + 0x24) = fVar29;
                                    dVar32 = *in_stack_00000060;
                                    if ((dVar32 == 0.0) || (*(long *)((long)dVar32 + 0x100) == 0))
                                    goto LAB_00e443fc;
                                    lVar18 = *in_stack_00000020;
                                    uVar30 = FUN_00e5dea4(fStack0000000000000048,
                                                          *(long *)((long)dVar32 + 0x100),
                                                          *(undefined4 *)((long)dVar32 + 0x10c),0);
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_00e44400;
                                    lVar18 = lVar18 + uVar25 * 8;
                                    *(undefined4 *)(lVar18 + 0x20) = uVar30;
                                    *(float *)(lVar18 + 0x24) = fVar29;
                                    dVar32 = *in_stack_00000060;
                                    if ((dVar32 == 0.0) || (*(long *)((long)dVar32 + 0x100) == 0))
                                    goto LAB_00e443fc;
                                    lVar18 = *in_stack_00000020;
                                    uVar30 = thunk_FUN_00e5dd60(fStack0000000000000048,
                                                                *(long *)((long)dVar32 + 0x100),
                                                                *(undefined4 *)
                                                                 ((long)dVar32 + 0x10c),0);
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_00e44400;
                                    lVar18 = lVar18 + uVar26 * 8;
                                    *(undefined4 *)(lVar18 + 0x20) = uVar30;
                                    *(float *)(lVar18 + 0x24) = fVar29;
                                    dVar32 = *in_stack_00000060;
                                    if ((dVar32 == 0.0) || (*(long *)((long)dVar32 + 0x100) == 0))
                                    goto LAB_00e443fc;
                                    uVar30 = FUN_00e5dedc(fStack0000000000000048,
                                                          *(long *)((long)dVar32 + 0x100),
                                                          *(undefined4 *)((long)dVar32 + 0x10c),0);
                                    lVar18 = unaff_x19[0xca];
                                    *(undefined4 *)(unaff_x19 + 0xd9) = uVar30;
                                    *(float *)((long)unaff_x19 + 0x6cc) = fVar29;
                                    if ((lVar18 == 0) ||
                                       (lVar14 = *(long *)(lVar18 + 0x100), lVar14 == 0))
                                    goto LAB_00e443fc;
                                    unaff_x26 = in_stack_00000030;
                                    if (((1 < *(int *)(lVar14 + 0x28)) &&
                                        (0.0 < *(float *)(lVar14 + 0x34))) &&
                                       (*(int *)(lVar18 + 0x10c) < 0)) {
                                      *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                                    }
                                  }
                                }
                                else {
                                  dVar32 = *in_stack_00000060;
                                  if (dVar32 == 0.0) goto LAB_00e443fc;
                                  uVar35 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x634);
                                  if ((*(float *)((long)dVar32 + 0x48) +
                                       *(float *)((long)dVar32 + 0x84) +
                                      *(float *)((long)unaff_x19 + 0x634)) -
                                      *(float *)((long)unaff_x19 + 0x53c) <=
                                      DAT_028aa038 - *(float *)(unaff_x19 + 0x2f))
                                  goto LAB_00e3cd74;
                                  lVar18 = *in_stack_00000038;
                                  if (DAT_03774d76 == '\0') {
                                    thunk_FUN_00d48444(puVar6);
                                    DAT_03774d76 = '\x01';
                                  }
                                  if (lVar18 == 0) goto LAB_00e443fc;
                                  if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068)
                                  goto LAB_00e44400;
                                  uVar30 = *(undefined4 *)
                                            (*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
                                  uVar11 = (ulong)(int)in_stack_00000068;
                                  lVar18 = lVar18 + uVar11 * 0xc;
                                  *(undefined8 *)(lVar18 + 0x20) =
                                       **(undefined8 **)(*(long *)puVar6 + 0xb8);
                                  *(undefined4 *)(lVar18 + 0x28) = uVar30;
                                  lVar18 = *in_stack_00000038;
                                  if (lVar18 == 0) goto LAB_00e443fc;
                                  if (*(uint *)(lVar18 + 0x18) <= (uint)(uVar11 | 1))
                                  goto LAB_00e44400;
                                  lVar18 = lVar18 + (uVar11 | 1) * 0xc;
                                  uVar30 = *(undefined4 *)
                                            (*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
                                  *(undefined8 *)(lVar18 + 0x20) =
                                       **(undefined8 **)(*(long *)puVar6 + 0xb8);
                                  *(undefined4 *)(lVar18 + 0x28) = uVar30;
                                  lVar18 = *in_stack_00000038;
                                  if (lVar18 == 0) goto LAB_00e443fc;
                                  if (*(uint *)(lVar18 + 0x18) <= (uint)(uVar11 | 2))
                                  goto LAB_00e44400;
                                  lVar18 = lVar18 + (uVar11 | 2) * 0xc;
                                  uVar30 = *(undefined4 *)
                                            (*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
                                  *(undefined8 *)(lVar18 + 0x20) =
                                       **(undefined8 **)(*(long *)puVar6 + 0xb8);
                                  *(undefined4 *)(lVar18 + 0x28) = uVar30;
                                  lVar18 = *in_stack_00000038;
                                  if (lVar18 == 0) goto LAB_00e443fc;
                                  if (*(uint *)(lVar18 + 0x18) <= (uint)(uVar11 | 3))
                                  goto LAB_00e44400;
                                  lVar18 = lVar18 + (uVar11 | 3) * 0xc;
                                  uVar30 = *(undefined4 *)
                                            (*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
                                  *(undefined8 *)(lVar18 + 0x20) =
                                       **(undefined8 **)(*(long *)puVar6 + 0xb8);
                                  *(undefined4 *)(lVar18 + 0x28) = uVar30;
                                }
                                if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                uVar20 = *(undefined8 *)((long)*in_stack_00000060 + 0xf8);
                                if (*(int *)(*(long *)
                                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                            + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar11 = FUN_02681b9c(uVar20,0,0);
                                if ((uVar11 & 1) == 0) {
                                  lVar18 = unaff_x19[0x10];
                                }
                                else {
                                  if ((*in_stack_00000060 == 0.0) ||
                                     (lVar18 = *(long *)((long)*in_stack_00000060 + 0xf8),
                                     lVar18 == 0)) goto LAB_00e443fc;
                                  lVar18 = *(long *)(lVar18 + 0x18);
                                }
                                if (((lVar18 == 0) || (lVar18 = FUN_0272bcf4(lVar18,0), lVar18 == 0)
                                    ) || (plVar10 = (long *)FUN_0267dac8(lVar18,0),
                                         plVar10 == (long *)0x0)) goto LAB_00e443fc;
                                iVar9 = (**(code **)(*plVar10 + 0x188))
                                                  (plVar10,*(undefined8 *)(*plVar10 + 400));
                                *(float *)(unaff_x19 + 0xda) = (float)iVar9;
                                iVar9 = (**(code **)(*plVar10 + 0x1a8))
                                                  (plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
                                *(float *)((long)unaff_x19 + 0x6d4) = (float)iVar9;
                                *(int *)(unaff_x19 + 0xdb) = (int)unaff_x19[0xd9];
                                *(undefined4 *)((long)unaff_x19 + 0x6dc) =
                                     *(undefined4 *)((long)unaff_x19 + 0x6cc);
                                puVar6 = 
                                UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                                ;
                                if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                                _fStack0000000000000070 =
                                     (double)CONCAT44((float)iVar9,(int)unaff_x19[0xda]);
                                in_stack_00000078 = unaff_x19[0xd9];
                                FUN_0132149c(unaff_x19[0x62],in_stack_00000068,&stack0x00000070,
                                             *(undefined8 *)
                                              UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                                            );
                                if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                                in_stack_00000078 = unaff_x19[0xdb];
                                _fStack0000000000000070 = (double)unaff_x19[0xda];
                                unaff_x22 = (ulong)(int)in_stack_00000068;
                                unaff_x28 = unaff_x22 | 1;
                                FUN_0132149c(unaff_x19[0x62],in_stack_00000068 | 1,&stack0x00000070,
                                             *(undefined8 *)puVar6);
                                if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                                in_stack_00000078 = unaff_x19[0xdb];
                                _fStack0000000000000070 = (double)unaff_x19[0xda];
                                unaff_x29 = unaff_x22 | 2;
                                FUN_0132149c(unaff_x19[0x62],unaff_x29,&stack0x00000070,
                                             *(undefined8 *)puVar6);
                                if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                                in_stack_00000078 = unaff_x19[0xdb];
                                _fStack0000000000000070 = (double)unaff_x19[0xda];
                                in_stack_00000058 = unaff_x22 | 3;
                                FUN_0132149c(unaff_x19[0x62],in_stack_00000068 | 3,&stack0x00000070,
                                             *(undefined8 *)puVar6);
                                unaff_x25 = (long *)StringLiteral_9119;
                                lVar18 = unaff_x19[0x60];
                                if (lVar18 == 0) goto LAB_00e443fc;
                                if ((*(uint *)(lVar18 + 0x18) <= in_stack_00000068) ||
                                   (uVar22 = (uint)in_stack_00000058,
                                   *(uint *)(lVar18 + 0x18) <= uVar22)) goto LAB_00e44400;
                                lVar14 = unaff_x19[0xca];
                                fVar29 = 0.0;
                                if (*(float *)(lVar18 + 0x20 + unaff_x22 * 8) !=
                                    *(float *)(lVar18 + 0x20 + in_stack_00000058 * 8)) {
                                  fVar29 = fVar28;
                                }
                                *(float *)(unaff_x19 + 0xda) = fVar29;
                                if (lVar14 == 0) goto LAB_00e443fc;
                                cVar5 = *(char *)(lVar14 + 0x108);
                                fVar29 = fVar28;
                                if (cVar5 != '\0' || 0x7fffffff < *(uint *)(lVar14 + 0x138)) {
                                  fVar29 = -1.0;
                                }
                                *(float *)((long)unaff_x19 + 0x6d4) =
                                     *(float *)(lVar14 + 0x84) * fVar29;
                                if (cVar5 == '\0') {
                                  iVar37 = *(int *)(lVar14 + 0x160);
                                  iVar9 = (**(code **)(*plVar10 + 0x188))
                                                    (plVar10,*(undefined8 *)(*plVar10 + 400));
                                  uVar35 = 0x3e800000;
                                  *(float *)(unaff_x19 + 0xdb) =
                                       (float)iVar37 / ((float)iVar9 * 0.25);
                                  if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                  iVar37 = *(int *)(unaff_x19[0xca] + 0x160);
                                  iVar9 = (**(code **)(*plVar10 + 0x1a8))
                                                    (plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
                                  fVar38 = (float)iVar37;
                                  fVar29 = (float)iVar9;
                                  puVar19 = (undefined8 *)
                                            UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                                  ;
                                }
                                else {
                                  if (*(long *)(lVar14 + 0x100) == 0) goto LAB_00e443fc;
                                  fVar29 = (float)FUN_00e5df18(*(long *)(lVar14 + 0x100),0);
                                  puVar19 = (undefined8 *)
                                            UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                                  ;
                                  if (((*in_stack_00000060 == 0.0) ||
                                      (lVar18 = *(long *)((long)*in_stack_00000060 + 0x100),
                                      lVar18 == 0)) ||
                                     (plVar10 = *(long **)(lVar18 + 0x18), plVar10 == (long *)0x0))
                                  goto LAB_00e443fc;
                                  iVar9 = (**(code **)(*plVar10 + 0x188))
                                                    (plVar10,*(undefined8 *)(*plVar10 + 400));
                                  if ((*in_stack_00000060 == 0.0) ||
                                     (lVar18 = *(long *)((long)*in_stack_00000060 + 0x100),
                                     lVar18 == 0)) goto LAB_00e443fc;
                                  fVar38 = 0.25;
                                  *(float *)(unaff_x19 + 0xdb) =
                                       fVar29 / (*(float *)(lVar18 + 0x40) * (float)iVar9 * 0.25);
                                  FUN_00e5df18(lVar18,0);
                                  if ((unaff_x19[0xca] == 0) ||
                                     ((lVar18 = *(long *)(unaff_x19[0xca] + 0x100), lVar18 == 0 ||
                                      (plVar10 = *(long **)(lVar18 + 0x18), plVar10 == (long *)0x0))
                                     )) goto LAB_00e443fc;
                                  iVar9 = (**(code **)(*plVar10 + 0x1a8))
                                                    (plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
                                  if ((*in_stack_00000060 == 0.0) ||
                                     (lVar18 = *(long *)((long)*in_stack_00000060 + 0x100),
                                     lVar18 == 0)) goto LAB_00e443fc;
                                  fVar29 = *(float *)(lVar18 + 0x44) * (float)iVar9;
                                }
                                fVar39 = 0.25;
                                fVar38 = fVar38 / (fVar29 * 0.25);
                                *(float *)((long)unaff_x19 + 0x6dc) = fVar38;
                                if (unaff_x19[99] == 0) goto LAB_00e443fc;
                                _fStack0000000000000070 = (double)unaff_x19[0xda];
                                in_stack_00000078 = CONCAT44(fVar38,(int)unaff_x19[0xdb]);
                                FUN_0132149c(unaff_x19[99],in_stack_00000068,&stack0x00000070,
                                             *puVar19);
                                if (unaff_x19[99] == 0) goto LAB_00e443fc;
                                in_stack_00000078 = unaff_x19[0xdb];
                                _fStack0000000000000070 = (double)unaff_x19[0xda];
                                FUN_0132149c(unaff_x19[99],in_stack_00000068 | 1,&stack0x00000070,
                                             *puVar19);
                                if (unaff_x19[99] == 0) goto LAB_00e443fc;
                                in_stack_00000078 = unaff_x19[0xdb];
                                _fStack0000000000000070 = (double)unaff_x19[0xda];
                                FUN_0132149c(unaff_x19[99],in_stack_00000068 | 2,&stack0x00000070,
                                             *puVar19);
                                if (unaff_x19[99] == 0) goto LAB_00e443fc;
                                in_stack_00000078 = unaff_x19[0xdb];
                                _fStack0000000000000070 = (double)unaff_x19[0xda];
                                FUN_0132149c(unaff_x19[99],in_stack_00000068 | 3,&stack0x00000070,
                                             *puVar19);
                                if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                uVar20 = *(undefined8 *)(unaff_x19[0xca] + 0xb0);
                                if (*(int *)(*(long *)
                                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                            + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar11 = FUN_02681b9c(uVar20,0,0);
                                fVar29 = (float)uVar35;
                                uVar16 = (uint)unaff_x28;
                                uVar23 = (uint)unaff_x29;
                                if ((uVar11 & 1) != 0) {
                                  if (in_stack_00000050 == in_stack_00000010) {
                                    if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                    fVar38 = (float)FUN_00e5b838(*in_stack_00000060,0);
                                    if (DAT_03774d76 == '\0') {
                                      thunk_FUN_00d48444(
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                                  );
                                      DAT_03774d76 = '\x01';
                                    }
                                    pfVar13 = *(float **)
                                               (*(long *)
                                                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                               + 0xb8);
                                    fVar29 = fVar29 - pfVar13[2];
                                    uVar35 = (ulong)(uint)fVar29;
                                    if (fVar29 * fVar29 +
                                        (fVar38 - *pfVar13) * (fVar38 - *pfVar13) +
                                        (fVar39 - pfVar13[1]) * (fVar39 - pfVar13[1]) < DAT_028aa020
                                       ) goto LAB_00e3dbd8;
                                  }
                                  if ((*in_stack_00000060 == 0.0) ||
                                     (lVar18 = *(long *)((long)*in_stack_00000060 + 0xb0),
                                     lVar18 == 0)) goto LAB_00e443fc;
                                  uVar20 = *(undefined8 *)(lVar18 + 0x38);
                                  if (DAT_03774d77 == '\0') {
                                    thunk_FUN_00d48444(
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                                  );
                                    DAT_03774d77 = '\x01';
                                  }
                                  fVar29 = (float)uVar20 -
                                           (float)**(undefined8 **)
                                                    (*(long *)
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                                  + 0xb8);
                                  fVar38 = (float)((ulong)uVar20 >> 0x20) -
                                           (float)((ulong)**(undefined8 **)
                                                            (*(long *)
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                                  + 0xb8) >> 0x20);
                                  if (DAT_028aa020 <= fVar29 * fVar29 + fVar38 * fVar38) {
                                    *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                                  }
                                  dVar32 = *in_stack_00000060;
                                  if ((dVar32 == 0.0) ||
                                     (lVar18 = *(long *)((long)dVar32 + 0xb0), lVar18 == 0))
                                  goto LAB_00e443fc;
                                  fVar38 = fStack0000000000000048 * *(float *)(lVar18 + 0x38);
                                  *(float *)(unaff_x19 + 0xc9) = fVar38;
                                  fVar29 = fStack0000000000000048 * *(float *)(lVar18 + 0x3c);
                                  *(float *)((long)unaff_x19 + 0x64c) = fVar29;
                                  if (*(char *)(lVar18 + 0x25) != '\0') {
                                    fVar34 = 1.0 / *(float *)((long)dVar32 + 0x84);
                                  }
                                  lVar18 = *in_stack_00000038;
                                  if (lVar18 == 0) goto LAB_00e443fc;
                                  if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068)
                                  goto LAB_00e44400;
                                  lVar14 = lVar18 + unaff_x22 * 0xc;
                                  fVar39 = *(float *)(lVar14 + 0x20);
                                  uVar20 = *(undefined8 *)(lVar14 + 0x24);
                                  *(float *)(unaff_x19 + 0xcd) = fVar39;
                                  in_stack_00000040[0xf] = uVar20;
                                  *(float *)(unaff_x19 + 0xd0) = fVar39;
                                  fVar27 = (float)uVar20;
                                  *(float *)((long)unaff_x19 + 0x684) = fVar27;
                                  if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_00e44400;
                                  lVar14 = lVar18 + unaff_x28 * 0xc;
                                  uVar30 = *(undefined4 *)(lVar14 + 0x20);
                                  uVar20 = *(undefined8 *)(lVar14 + 0x24);
                                  *(undefined4 *)(unaff_x19 + 0xcd) = uVar30;
                                  in_stack_00000040[0xf] = uVar20;
                                  *(undefined4 *)(unaff_x19 + 0xd2) = uVar30;
                                  *(int *)((long)unaff_x19 + 0x694) = (int)uVar20;
                                  if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_00e44400;
                                  lVar14 = lVar18 + unaff_x29 * 0xc;
                                  uVar30 = *(undefined4 *)(lVar14 + 0x20);
                                  uVar20 = *(undefined8 *)(lVar14 + 0x24);
                                  *(undefined4 *)(unaff_x19 + 0xcd) = uVar30;
                                  in_stack_00000040[0xf] = uVar20;
                                  *(undefined4 *)(unaff_x19 + 0xd4) = uVar30;
                                  *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar20;
                                  if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_00e44400;
                                  lVar18 = lVar18 + in_stack_00000058 * 0xc;
                                  uVar30 = *(undefined4 *)(lVar18 + 0x20);
                                  uVar20 = *(undefined8 *)(lVar18 + 0x24);
                                  *(undefined4 *)(unaff_x19 + 0xcd) = uVar30;
                                  in_stack_00000040[0xf] = uVar20;
                                  *(undefined4 *)(unaff_x19 + 0xd6) = uVar30;
                                  *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar20;
                                  lVar18 = *(long *)((long)dVar32 + 0xb0);
                                  if (lVar18 == 0) goto LAB_00e443fc;
                                  if (*(char *)(lVar18 + 0x24) == '\0') {
                                    lVar14 = *in_stack_00000028;
                                    if (lVar14 == 0) goto LAB_00e443fc;
                                    uVar4 = *(uint *)(lVar14 + 0x18);
                                    if (uVar4 <= in_stack_00000068) goto LAB_00e44400;
                                    lVar15 = lVar14 + unaff_x22 * 8;
                                    *(float *)(lVar15 + 0x20) =
                                         (fVar38 + fVar34 * fVar39) - *(float *)(lVar18 + 0x30);
                                    *(float *)(lVar15 + 0x24) =
                                         (fVar29 + fVar34 * fVar27) - *(float *)(lVar18 + 0x34);
                                    if (((uVar4 <= uVar16) ||
                                        (*(ulong *)(lVar14 + unaff_x28 * 8 + 0x20) =
                                              CONCAT44(((float)((ulong)unaff_x19[0xd2] >> 0x20) *
                                                        fVar34 + (float)((ulong)unaff_x19[0xc9] >>
                                                                        0x20)) -
                                                       (float)((ulong)*(undefined8 *)(lVar18 + 0x30)
                                                              >> 0x20),
                                                       ((float)unaff_x19[0xd2] * fVar34 +
                                                       (float)unaff_x19[0xc9]) -
                                                       (float)*(undefined8 *)(lVar18 + 0x30)),
                                        uVar4 <= uVar23)) ||
                                       (*(ulong *)(lVar14 + unaff_x29 * 8 + 0x20) =
                                             CONCAT44((fVar34 * (float)((ulong)unaff_x19[0xd4] >>
                                                                       0x20) +
                                                      (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                                                      (float)((ulong)*(undefined8 *)(lVar18 + 0x30)
                                                             >> 0x20),
                                                      (fVar34 * (float)unaff_x19[0xd4] +
                                                      (float)unaff_x19[0xc9]) -
                                                      (float)*(undefined8 *)(lVar18 + 0x30)),
                                       uVar4 <= uVar22)) goto LAB_00e44400;
                                    uVar35 = unaff_x19[0xc9];
                                    *(ulong *)(lVar14 + in_stack_00000058 * 8 + 0x20) =
                                         CONCAT44((fVar34 * (float)((ulong)unaff_x19[0xd6] >> 0x20)
                                                  + (float)(uVar35 >> 0x20)) -
                                                  (float)((ulong)*(undefined8 *)(lVar18 + 0x30) >>
                                                         0x20),
                                                  (fVar34 * (float)unaff_x19[0xd6] + (float)uVar35)
                                                  - (float)*(undefined8 *)(lVar18 + 0x30));
                                  }
                                  else {
                                    fVar33 = *(float *)((long)dVar32 + 0x44);
                                    *(float *)(unaff_x19 + 0xd8) = fVar33;
                                    fVar3 = *(float *)((long)dVar32 + 0x48);
                                    lVar14 = unaff_x19[0x61];
                                    *(float *)((long)unaff_x19 + 0x6c4) = fVar3;
                                    if (lVar14 == 0) goto LAB_00e443fc;
                                    uVar4 = *(uint *)(lVar14 + 0x18);
                                    if (uVar4 <= in_stack_00000068) goto LAB_00e44400;
                                    lVar15 = lVar14 + unaff_x22 * 8;
                                    *(float *)(lVar15 + 0x20) =
                                         (fVar38 + fVar34 * (fVar39 - fVar33)) -
                                         *(float *)(lVar18 + 0x30);
                                    *(float *)(lVar15 + 0x24) =
                                         (fVar29 + fVar34 * (fVar27 - fVar3)) -
                                         *(float *)(lVar18 + 0x34);
                                    if (((uVar4 <= uVar16) ||
                                        (*(ulong *)(lVar14 + unaff_x28 * 8 + 0x20) =
                                              CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                                       ((float)((ulong)unaff_x19[0xd2] >> 0x20) -
                                                       (float)((ulong)unaff_x19[0xd8] >> 0x20)) *
                                                       fVar34) - (float)((ulong)*(undefined8 *)
                                                                                 (lVar18 + 0x30) >>
                                                                        0x20),
                                                       ((float)unaff_x19[0xc9] +
                                                       ((float)unaff_x19[0xd2] -
                                                       (float)unaff_x19[0xd8]) * fVar34) -
                                                       (float)*(undefined8 *)(lVar18 + 0x30)),
                                        uVar4 <= uVar23)) ||
                                       (*(ulong *)(lVar14 + unaff_x29 * 8 + 0x20) =
                                             CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                                      fVar34 * ((float)((ulong)unaff_x19[0xd4] >>
                                                                       0x20) -
                                                               (float)((ulong)unaff_x19[0xd8] >>
                                                                      0x20))) -
                                                      (float)((ulong)*(undefined8 *)(lVar18 + 0x30)
                                                             >> 0x20),
                                                      ((float)unaff_x19[0xc9] +
                                                      fVar34 * ((float)unaff_x19[0xd4] -
                                                               (float)unaff_x19[0xd8])) -
                                                      (float)*(undefined8 *)(lVar18 + 0x30)),
                                       uVar4 <= uVar22)) goto LAB_00e44400;
                                    uVar35 = unaff_x19[0xd8];
                                    *(ulong *)(lVar14 + in_stack_00000058 * 8 + 0x20) =
                                         CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                                  fVar34 * ((float)((ulong)unaff_x19[0xd6] >> 0x20)
                                                           - (float)(uVar35 >> 0x20))) -
                                                  (float)((ulong)*(undefined8 *)(lVar18 + 0x30) >>
                                                         0x20),
                                                  ((float)unaff_x19[0xc9] +
                                                  fVar34 * ((float)unaff_x19[0xd6] - (float)uVar35))
                                                  - (float)*(undefined8 *)(lVar18 + 0x30));
                                  }
                                }
LAB_00e3dbd8:
                                unaff_x24 = 0xc;
                                dVar32 = *in_stack_00000060;
                                if (dVar32 == 0.0) goto LAB_00e443fc;
                                if (*(char *)((long)dVar32 + 0x108) != '\0') {
                                  if (*(long *)((long)dVar32 + 0x100) == 0) goto LAB_00e443fc;
                                  if (*(char *)(*(long *)((long)dVar32 + 0x100) + 0x20) == '\0') {
                                    lVar18 = *in_stack_00000020;
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068)
                                    goto LAB_00e44400;
                                    lVar14 = *in_stack_00000028;
                                    if (lVar14 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068)
                                    goto LAB_00e44400;
                                    *(undefined8 *)(lVar14 + unaff_x22 * 8 + 0x20) =
                                         *(undefined8 *)(lVar18 + unaff_x22 * 8 + 0x20);
                                    lVar18 = *in_stack_00000020;
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_00e44400;
                                    lVar14 = *in_stack_00000028;
                                    if (lVar14 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar14 + 0x18) <= uVar16) goto LAB_00e44400;
                                    *(undefined8 *)(lVar14 + (long)(int)uVar16 * 8 + 0x20) =
                                         *(undefined8 *)(lVar18 + (long)(int)uVar16 * 8 + 0x20);
                                    lVar18 = *in_stack_00000020;
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_00e44400;
                                    lVar14 = *in_stack_00000028;
                                    if (lVar14 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_00e44400;
                                    *(undefined8 *)(lVar14 + (long)(int)uVar23 * 8 + 0x20) =
                                         *(undefined8 *)(lVar18 + (long)(int)uVar23 * 8 + 0x20);
                                    lVar18 = *in_stack_00000020;
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_00e44400;
                                    lVar14 = *in_stack_00000028;
                                    if (lVar14 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_00e44400;
                                    *(undefined8 *)(lVar14 + in_stack_00000058 * 8 + 0x20) =
                                         *(undefined8 *)(lVar18 + in_stack_00000058 * 8 + 0x20);
                                    dVar32 = *in_stack_00000060;
                                    if (dVar32 == 0.0) goto LAB_00e443fc;
                                  }
                                }
                                dVar31 = DAT_028aa048;
                                if (*(char *)((long)dVar32 + 0x108) != '\0') {
                                  if (*(long *)((long)dVar32 + 0x100) == 0) goto LAB_00e443fc;
                                  if (*(char *)(*(long *)((long)dVar32 + 0x100) + 0x20) == '\0') {
                                    lVar18 = *unaff_x26;
                                    dVar32 = modf(DAT_028aa048,(double *)&stack0x00000070);
                                    if (dVar32 == 0.5) {
                                      fVar34 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar34 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar34 = 255.0;
                                    }
                                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                                    if (dVar32 == 0.5) {
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar28 = 255.0;
                                    }
                                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                                    if (dVar32 == 0.5) {
                                      fVar29 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar29 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar29 = 255.0;
                                    }
                                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                                    if (dVar32 == 0.5) {
                                      fVar38 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar38 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar38 = 255.0;
                                    }
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068)
                                    goto LAB_00e44400;
                                    *(uint *)(lVar18 + unaff_x22 * 4 + 0x20) =
                                         (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                         ((int)fVar29 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                                    lVar18 = *unaff_x26;
                                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                                    if (dVar32 == 0.5) {
                                      fVar34 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar34 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar34 = 255.0;
                                    }
                                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                                    if (dVar32 == 0.5) {
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar28 = 255.0;
                                    }
                                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                                    if (dVar32 == 0.5) {
                                      fVar29 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar29 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar29 = 255.0;
                                    }
                                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                                    if (dVar32 == 0.5) {
                                      fVar38 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar38 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar38 = 255.0;
                                    }
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_00e44400;
                                    *(uint *)(lVar18 + (long)(int)uVar16 * 4 + 0x20) =
                                         (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                         ((int)fVar29 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                                    lVar18 = *unaff_x26;
                                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                                    if (dVar32 == 0.5) {
                                      fVar34 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar34 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar34 = 255.0;
                                    }
                                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                                    if (dVar32 == 0.5) {
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar28 = 255.0;
                                    }
                                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                                    if (dVar32 == 0.5) {
                                      fVar29 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar29 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar29 = 255.0;
                                    }
                                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                                    if (dVar32 == 0.5) {
                                      fVar38 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar38 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar38 = 255.0;
                                    }
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_00e44400;
                                    *(uint *)(lVar18 + (long)(int)uVar23 * 4 + 0x20) =
                                         (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                         ((int)fVar29 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                                    lVar18 = *unaff_x26;
                                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                                    if (dVar32 == 0.5) {
                                      fVar34 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar34 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar34 = 255.0;
                                    }
                                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                                    if (dVar32 == 0.5) {
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar28 = 255.0;
                                    }
                                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                                    if (dVar32 == 0.5) {
                                      fVar29 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar29 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar29 = 255.0;
                                    }
                                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                                    if (dVar32 == 0.5) {
                                      fVar38 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar38 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar38 = 255.0;
                                    }
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_00e44400;
                                    *(uint *)(lVar18 + in_stack_00000058 * 4 + 0x20) =
                                         (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                         ((int)fVar29 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                                    unaff_s10 = 1.0;
                                    goto LAB_00e43400;
                                  }
                                }
                                uVar20 = *(undefined8 *)((long)dVar32 + 0xa8);
                                if (*(int *)(*(long *)
                                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                            + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar11 = FUN_02681b9c(uVar20,0,0);
                                dVar32 = *in_stack_00000060;
                                if (dVar32 == 0.0) goto LAB_00e443fc;
                                if ((uVar11 & 1) != 0) {
                                  lVar18 = *(long *)((long)dVar32 + 0xa8);
                                  if (lVar18 == 0) goto LAB_00e443fc;
                                  fVar34 = *(float *)(lVar18 + 0x24);
                                  if (fVar34 != 0.0) {
                                    *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                                  }
                                  unaff_x25 = (long *)StringLiteral_9119;
                                  cVar5 = *(char *)(lVar18 + 0x2c);
                                  lVar15 = *unaff_x26;
                                  lVar14 = *(long *)(lVar18 + 0x18);
                                  fVar34 = fStack0000000000000048 * fVar34;
                                  if (*(int *)(lVar18 + 0x28) == 1) {
                                    if (cVar5 == '\0') {
                                      if (lVar14 == 0) goto LAB_00e443fc;
                                      fVar38 = *(float *)(lVar18 + 0x20);
                                      fVar36 = *(float *)((long)dVar32 + 0x84);
                                      fVar34 = fVar34 + (*(float *)((long)dVar32 + 0x48) * fVar38) /
                                                        fVar36;
                                      fVar34 = fVar34 - (float)(int)fVar34;
                                      fVar29 = fVar34;
                                      if (1.0 < fVar34) {
                                        fVar29 = fVar28;
                                      }
                                      fVar39 = fVar29;
                                      if (fVar34 < 0.0) {
                                        fVar39 = 0.0;
                                      }
                                      fVar39 = (float)FUN_0269ad38(fVar39,lVar14,0);
                                      fVar34 = fVar39;
                                      if (1.0 < fVar39) {
                                        fVar34 = fVar28;
                                      }
                                      fVar34 = fVar34 * 255.0;
                                      if (fVar39 < 0.0) {
                                        fVar34 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                      if (0.0 <= fVar34) {
                                        if (dVar32 == 0.5) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e3eeac;
                                        }
                                        fVar28 = (float)(int)(fVar34 + 0.5);
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3eeac:
                                        fVar28 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar28 = fVar34;
                                        }
                                      }
                                      else {
                                        fVar28 = (float)(int)(fVar34 + -0.5);
                                      }
                                      fVar34 = fVar29;
                                      if (1.0 < fVar29) {
                                        fVar34 = 1.0;
                                      }
                                      fVar34 = fVar34 * 255.0;
                                      if (fVar29 < 0.0) {
                                        fVar34 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                      if (0.0 <= fVar34) {
                                        if (dVar32 == 0.5) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e41534;
                                        }
                                        fVar29 = (float)(int)(fVar34 + 0.5);
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41534:
                                        fVar29 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar29 = fVar34;
                                        }
                                      }
                                      else {
                                        fVar29 = (float)(int)(fVar34 + -0.5);
                                      }
                                      fVar34 = fVar38;
                                      if (1.0 < fVar38) {
                                        fVar34 = 1.0;
                                      }
                                      fVar34 = fVar34 * 255.0;
                                      if (fVar38 < 0.0) {
                                        fVar34 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                      if (0.0 <= fVar34) {
                                        if (dVar32 == 0.5) {
                                          fVar34 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar34 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar34 = (float)(int)(fVar34 + 0.5);
                                        }
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar34 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar34 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar34 = (float)(int)(fVar34 + -0.5);
                                      }
                                      fVar38 = fVar36;
                                      if (1.0 < fVar36) {
                                        fVar38 = 1.0;
                                      }
                                      fVar38 = fVar38 * 255.0;
                                      if (fVar36 < 0.0) {
                                        fVar38 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                                      if (0.0 <= fVar38) {
                                        if (dVar32 == 0.5) {
                                          fVar38 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar38 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar38 = (float)(int)(fVar38 + 0.5);
                                        }
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar38 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar38 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar38 = (float)(int)(fVar38 + -0.5);
                                      }
                                      if (lVar15 == 0) goto LAB_00e443fc;
                                      if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068)
                                      goto LAB_00e44400;
                                      *(uint *)(lVar15 + unaff_x22 * 4 + 0x20) =
                                           (int)fVar28 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                           ((int)fVar34 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                                      dVar32 = *in_stack_00000060;
                                      if (((dVar32 == 0.0) ||
                                          (lVar18 = *(long *)((long)dVar32 + 0xa8), lVar18 == 0)) ||
                                         (lVar14 = *(long *)(lVar18 + 0x18), lVar14 == 0))
                                      goto LAB_00e443fc;
                                      fVar29 = *(float *)((long)dVar32 + 0x48);
                                      fVar38 = *(float *)((long)dVar32 + 0x84);
                                      lVar15 = *unaff_x26;
                                      fVar28 = fStack0000000000000048 * *(float *)(lVar18 + 0x24) +
                                               (fVar29 * *(float *)(lVar18 + 0x20)) / fVar38;
                                      fVar28 = fVar28 - (float)(int)fVar28;
                                      fVar34 = fVar28;
                                      if (1.0 < fVar28) {
                                        fVar34 = 1.0;
                                      }
                                    }
                                    else {
                                      if (lVar14 == 0) goto LAB_00e443fc;
                                      fVar38 = *(float *)((long)dVar32 + 0x84);
                                      fVar36 = *(float *)(lVar18 + 0x20);
                                      fVar34 = fVar34 + ((*(float *)((long)dVar32 + 0x48) + fVar38)
                                                        * fVar36) / fVar38;
                                      fVar34 = fVar34 - (float)(int)fVar34;
                                      fVar29 = fVar34;
                                      if (1.0 < fVar34) {
                                        fVar29 = fVar28;
                                      }
                                      fVar39 = fVar29;
                                      if (fVar34 < 0.0) {
                                        fVar39 = 0.0;
                                      }
                                      fVar39 = (float)FUN_0269ad38(fVar39,lVar14,0);
                                      fVar34 = fVar39;
                                      if (1.0 < fVar39) {
                                        fVar34 = fVar28;
                                      }
                                      fVar34 = fVar34 * 255.0;
                                      if (fVar39 < 0.0) {
                                        fVar34 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                      if (0.0 <= fVar34) {
                                        if (dVar32 == 0.5) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e3ed6c;
                                        }
                                        fVar28 = (float)(int)(fVar34 + 0.5);
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ed6c:
                                        fVar28 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar28 = fVar34;
                                        }
                                      }
                                      else {
                                        fVar28 = (float)(int)(fVar34 + -0.5);
                                      }
                                      fVar34 = fVar29;
                                      if (1.0 < fVar29) {
                                        fVar34 = 1.0;
                                      }
                                      fVar34 = fVar34 * 255.0;
                                      if (fVar29 < 0.0) {
                                        fVar34 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                      if (0.0 <= fVar34) {
                                        if (dVar32 == 0.5) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e3f2ec;
                                        }
                                        fVar29 = (float)(int)(fVar34 + 0.5);
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f2ec:
                                        fVar29 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar29 = fVar34;
                                        }
                                      }
                                      else {
                                        fVar29 = (float)(int)(fVar34 + -0.5);
                                      }
                                      fVar34 = fVar38;
                                      if (1.0 < fVar38) {
                                        fVar34 = 1.0;
                                      }
                                      fVar34 = fVar34 * 255.0;
                                      if (fVar38 < 0.0) {
                                        fVar34 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                      if (0.0 <= fVar34) {
                                        if (dVar32 == 0.5) {
                                          fVar34 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar34 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar34 = (float)(int)(fVar34 + 0.5);
                                        }
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar34 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar34 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar34 = (float)(int)(fVar34 + -0.5);
                                      }
                                      fVar38 = fVar36;
                                      if (1.0 < fVar36) {
                                        fVar38 = 1.0;
                                      }
                                      fVar38 = fVar38 * 255.0;
                                      if (fVar36 < 0.0) {
                                        fVar38 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                                      if (0.0 <= fVar38) {
                                        if (dVar32 == 0.5) {
                                          fVar38 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar38 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar38 = (float)(int)(fVar38 + 0.5);
                                        }
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar38 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar38 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar38 = (float)(int)(fVar38 + -0.5);
                                      }
                                      if (lVar15 == 0) goto LAB_00e443fc;
                                      if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068)
                                      goto LAB_00e44400;
                                      *(uint *)(lVar15 + unaff_x22 * 4 + 0x20) =
                                           (int)fVar28 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                           ((int)fVar34 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                                      dVar32 = *in_stack_00000060;
                                      if (((dVar32 == 0.0) ||
                                          (lVar18 = *(long *)((long)dVar32 + 0xa8), lVar18 == 0)) ||
                                         (lVar14 = *(long *)(lVar18 + 0x18), lVar14 == 0))
                                      goto LAB_00e443fc;
                                      fVar29 = *(float *)((long)dVar32 + 0x84);
                                      fVar38 = *(float *)(lVar18 + 0x20);
                                      lVar15 = *unaff_x26;
                                      fVar28 = fStack0000000000000048 * *(float *)(lVar18 + 0x24) +
                                               ((*(float *)((long)dVar32 + 0x48) + fVar29) * fVar38)
                                               / fVar29;
                                      fVar28 = fVar28 - (float)(int)fVar28;
                                      fVar34 = fVar28;
                                      if (1.0 < fVar28) {
                                        fVar34 = 1.0;
                                      }
                                    }
                                    fVar36 = fVar34;
                                    if (fVar28 < 0.0) {
                                      fVar36 = 0.0;
                                    }
                                    fVar36 = (float)FUN_0269ad38(fVar36,lVar14,0);
                                    fVar28 = fVar36;
                                    if (1.0 < fVar36) {
                                      fVar28 = 1.0;
                                    }
                                    fVar28 = fVar28 * 255.0;
                                    if (fVar36 < 0.0) {
                                      fVar28 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                    if (0.0 <= fVar28) {
                                      if (dVar32 == 0.5) {
                                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e419a4;
                                      }
                                      fVar36 = (float)(int)(fVar28 + 0.5);
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e419a4:
                                      fVar36 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar36 = fVar28;
                                      }
                                    }
                                    else {
                                      fVar36 = (float)(int)(fVar28 + -0.5);
                                    }
                                    fVar28 = fVar34;
                                    if (1.0 < fVar34) {
                                      fVar28 = 1.0;
                                    }
                                    fVar28 = fVar28 * 255.0;
                                    if (fVar34 < 0.0) {
                                      fVar28 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                    if (0.0 <= fVar28) {
                                      if (dVar32 == 0.5) {
                                        fVar34 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e41a34;
                                      }
                                      fVar28 = (float)(int)(fVar28 + 0.5);
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41a34:
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = fVar34;
                                      }
                                    }
                                    else {
                                      fVar28 = (float)(int)(fVar28 + -0.5);
                                    }
                                    fVar34 = fVar29;
                                    if (1.0 < fVar29) {
                                      fVar34 = 1.0;
                                    }
                                    fVar34 = fVar34 * 255.0;
                                    if (fVar29 < 0.0) {
                                      fVar34 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                    if (0.0 <= fVar34) {
                                      if (dVar32 == 0.5) {
                                        fVar34 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar34 = (float)(int)(fVar34 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar34 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar34 = (float)(int)(fVar34 + -0.5);
                                    }
                                    fVar29 = fVar38;
                                    if (1.0 < fVar38) {
                                      fVar29 = 1.0;
                                    }
                                    fVar29 = fVar29 * 255.0;
                                    if (fVar38 < 0.0) {
                                      fVar29 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                                    if (0.0 <= fVar29) {
                                      if (dVar32 == 0.5) {
                                        fVar29 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar29 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar29 = (float)(int)(fVar29 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar29 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar29 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar29 = (float)(int)(fVar29 + -0.5);
                                    }
                                    if (lVar15 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar15 + 0x18) <= uVar16) goto LAB_00e44400;
                                    *(uint *)(lVar15 + (long)(int)uVar16 * 4 + 0x20) =
                                         (int)fVar36 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                         ((int)fVar34 & 0xffU) << 0x10 | (int)fVar29 << 0x18;
                                    dVar32 = *in_stack_00000060;
                                    if (((dVar32 == 0.0) ||
                                        (lVar18 = *(long *)((long)dVar32 + 0xa8), lVar18 == 0)) ||
                                       (*(long *)(lVar18 + 0x18) == 0)) goto LAB_00e443fc;
                                    fVar29 = *(float *)((long)dVar32 + 0x48);
                                    fVar38 = *(float *)((long)dVar32 + 0x84);
                                    lVar14 = *unaff_x26;
                                    fVar28 = fStack0000000000000048 * *(float *)(lVar18 + 0x24) +
                                             (fVar29 * *(float *)(lVar18 + 0x20)) / fVar38;
                                    fVar28 = fVar28 - (float)(int)fVar28;
                                    fVar34 = fVar28;
                                    if (1.0 < fVar28) {
                                      fVar34 = 1.0;
                                    }
                                    fVar36 = fVar34;
                                    if (fVar28 < 0.0) {
                                      fVar36 = 0.0;
                                    }
                                    fVar36 = (float)FUN_0269ad38(fVar36,*(long *)(lVar18 + 0x18),0);
                                    fVar28 = fVar36;
                                    if (1.0 < fVar36) {
                                      fVar28 = 1.0;
                                    }
                                    fVar28 = fVar28 * 255.0;
                                    if (fVar36 < 0.0) {
                                      fVar28 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                    if (0.0 <= fVar28) {
                                      if (dVar32 == 0.5) {
                                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e41cd0;
                                      }
                                      fVar36 = (float)(int)(fVar28 + 0.5);
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41cd0:
                                      fVar36 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar36 = fVar28;
                                      }
                                    }
                                    else {
                                      fVar36 = (float)(int)(fVar28 + -0.5);
                                    }
                                    fVar28 = fVar34;
                                    if (1.0 < fVar34) {
                                      fVar28 = 1.0;
                                    }
                                    fVar28 = fVar28 * 255.0;
                                    if (fVar34 < 0.0) {
                                      fVar28 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                    if (0.0 <= fVar28) {
                                      if (dVar32 == 0.5) {
                                        fVar34 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e41d60;
                                      }
                                      fVar28 = (float)(int)(fVar28 + 0.5);
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41d60:
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = fVar34;
                                      }
                                    }
                                    else {
                                      fVar28 = (float)(int)(fVar28 + -0.5);
                                    }
                                    fVar34 = fVar29;
                                    if (1.0 < fVar29) {
                                      fVar34 = 1.0;
                                    }
                                    fVar34 = fVar34 * 255.0;
                                    if (fVar29 < 0.0) {
                                      fVar34 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                    if (0.0 <= fVar34) {
                                      if (dVar32 == 0.5) {
                                        fVar34 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar34 = (float)(int)(fVar34 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar34 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar34 = (float)(int)(fVar34 + -0.5);
                                    }
                                    fVar29 = fVar38;
                                    if (1.0 < fVar38) {
                                      fVar29 = 1.0;
                                    }
                                    fVar29 = fVar29 * 255.0;
                                    if (fVar38 < 0.0) {
                                      fVar29 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                                    if (0.0 <= fVar29) {
                                      if (dVar32 == 0.5) {
                                        fVar29 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar29 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar29 = (float)(int)(fVar29 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar29 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar29 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar29 = (float)(int)(fVar29 + -0.5);
                                    }
                                    if (lVar14 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_00e44400;
                                    *(uint *)(lVar14 + (long)(int)uVar23 * 4 + 0x20) =
                                         (int)fVar36 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                         ((int)fVar34 & 0xffU) << 0x10 | (int)fVar29 << 0x18;
                                    dVar32 = *in_stack_00000060;
                                    if (((dVar32 == 0.0) ||
                                        (lVar14 = *(long *)((long)dVar32 + 0xa8), lVar14 == 0)) ||
                                       (*(long *)(lVar14 + 0x18) == 0)) goto LAB_00e443fc;
                                    uVar11 = (ulong)(uint)*(float *)((long)dVar32 + 0x48);
                                    uVar12 = (ulong)(uint)*(float *)((long)dVar32 + 0x84);
                                    lVar18 = *unaff_x26;
                                    fVar28 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                                             (*(float *)((long)dVar32 + 0x48) *
                                             *(float *)(lVar14 + 0x20)) /
                                             *(float *)((long)dVar32 + 0x84);
                                    fVar28 = fVar28 - (float)(int)fVar28;
                                    fVar34 = fVar28;
                                    if (1.0 < fVar28) {
                                      fVar34 = 1.0;
                                    }
                                    fVar29 = fVar34;
                                    if (fVar28 < 0.0) {
                                      fVar29 = 0.0;
                                    }
                                    fVar29 = (float)FUN_0269ad38(fVar29,*(long *)(lVar14 + 0x18),0);
                                    fVar28 = fVar29;
                                    if (1.0 < fVar29) {
                                      fVar28 = 1.0;
                                    }
                                    uVar35 = 0x437f0000;
                                    fVar28 = fVar28 * 255.0;
                                    if (fVar29 < 0.0) {
                                      fVar28 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                    if (0.0 <= fVar28) {
                                      if (dVar32 == 0.5) {
                                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e41ffc;
                                      }
                                      fVar29 = (float)(int)(fVar28 + 0.5);
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41ffc:
                                      fVar29 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar29 = fVar28;
                                      }
                                    }
                                    else {
                                      fVar29 = (float)(int)(fVar28 + -0.5);
                                    }
                                    fVar28 = fVar34;
                                    if (1.0 < fVar34) {
                                      fVar28 = 1.0;
                                    }
                                    fVar28 = fVar28 * 255.0;
                                    if (fVar34 < 0.0) {
                                      fVar28 = 0.0;
                                    }
                                  }
                                  else {
                                    lVar17 = *in_stack_00000038;
                                    if (lVar17 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar17 + 0x18) <= in_stack_00000068)
                                    goto LAB_00e44400;
                                    if (lVar14 == 0) goto LAB_00e443fc;
                                    fVar38 = *(float *)(lVar17 + unaff_x22 * 0xc + 0x20);
                                    fVar36 = *(float *)((long)dVar32 + 0x84);
                                    fVar34 = fVar34 + (fVar38 * *(float *)(lVar18 + 0x20)) / fVar36;
                                    fVar34 = fVar34 - (float)(int)fVar34;
                                    fVar29 = fVar34;
                                    if (1.0 < fVar34) {
                                      fVar29 = fVar28;
                                    }
                                    fVar39 = fVar29;
                                    if (fVar34 < 0.0) {
                                      fVar39 = 0.0;
                                    }
                                    fVar39 = (float)FUN_0269ad38(fVar39,lVar14,0);
                                    fVar34 = fVar39;
                                    if (1.0 < fVar39) {
                                      fVar34 = fVar28;
                                    }
                                    fVar34 = fVar34 * 255.0;
                                    if (fVar39 < 0.0) {
                                      fVar34 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                    if (0.0 <= fVar34) {
                                      if (dVar32 == 0.5) {
                                        fVar34 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e3e0b0;
                                      }
                                      fVar28 = (float)(int)(fVar34 + 0.5);
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3e0b0:
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = fVar34;
                                      }
                                    }
                                    else {
                                      fVar28 = (float)(int)(fVar34 + -0.5);
                                    }
                                    fVar34 = fVar29;
                                    if (1.0 < fVar29) {
                                      fVar34 = 1.0;
                                    }
                                    fVar34 = fVar34 * 255.0;
                                    if (fVar29 < 0.0) {
                                      fVar34 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                    if (0.0 <= fVar34) {
                                      if (dVar32 == 0.5) {
                                        fVar34 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e3ee80;
                                      }
                                      fVar29 = (float)(int)(fVar34 + 0.5);
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ee80:
                                      fVar29 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar29 = fVar34;
                                      }
                                    }
                                    else {
                                      fVar29 = (float)(int)(fVar34 + -0.5);
                                    }
                                    fVar34 = fVar38;
                                    if (1.0 < fVar38) {
                                      fVar34 = 1.0;
                                    }
                                    fVar34 = fVar34 * 255.0;
                                    if (fVar38 < 0.0) {
                                      fVar34 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                    if (0.0 <= fVar34) {
                                      if (dVar32 == 0.5) {
                                        fVar34 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar34 = (float)(int)(fVar34 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar34 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar34 = (float)(int)(fVar34 + -0.5);
                                    }
                                    fVar38 = fVar36;
                                    if (1.0 < fVar36) {
                                      fVar38 = 1.0;
                                    }
                                    fVar38 = fVar38 * 255.0;
                                    if (fVar36 < 0.0) {
                                      fVar38 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                                    if (0.0 <= fVar38) {
                                      if (dVar32 == 0.5) {
                                        fVar38 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar38 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar38 = (float)(int)(fVar38 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar38 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar38 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar38 = (float)(int)(fVar38 + -0.5);
                                    }
                                    if (lVar15 == 0) goto LAB_00e443fc;
                                    fVar36 = 1.0;
                                    if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068)
                                    goto LAB_00e44400;
                                    *(uint *)(lVar15 + unaff_x22 * 4 + 0x20) =
                                         (int)fVar28 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                         ((int)fVar34 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                                    unaff_x25 = (long *)StringLiteral_9119;
                                    dVar32 = *in_stack_00000060;
                                    if (((dVar32 == 0.0) ||
                                        (lVar18 = *(long *)((long)dVar32 + 0xa8), lVar18 == 0)) ||
                                       (lVar14 = *in_stack_00000038, lVar14 == 0))
                                    goto LAB_00e443fc;
                                    lVar17 = *unaff_x26;
                                    lVar15 = *(long *)(lVar18 + 0x18);
                                    fVar34 = fStack0000000000000048 * *(float *)(lVar18 + 0x24);
                                    if (cVar5 == '\0') {
                                      if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068)
                                      goto LAB_00e44400;
                                      unaff_w23 = 255.0;
                                      if (lVar15 == 0) goto LAB_00e443fc;
                                      fVar29 = *(float *)(lVar14 + unaff_x22 * 0xc + 0x20);
                                      fVar38 = *(float *)((long)dVar32 + 0x84);
                                      fVar34 = fVar34 + (fVar29 * *(float *)(lVar18 + 0x20)) /
                                                        fVar38;
                                      fVar34 = fVar34 - (float)(int)fVar34;
                                      fVar28 = fVar34;
                                      if (1.0 < fVar34) {
                                        fVar28 = fVar36;
                                      }
                                      fVar39 = fVar28;
                                      if (fVar34 < 0.0) {
                                        fVar39 = 0.0;
                                      }
                                      fVar39 = (float)FUN_0269ad38(fVar39,lVar15,0);
                                      fVar34 = fVar39;
                                      if (1.0 < fVar39) {
                                        fVar34 = fVar36;
                                      }
                                      fVar34 = fVar34 * 255.0;
                                      if (fVar39 < 0.0) {
                                        fVar34 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                      if (0.0 <= fVar34) {
                                        if (dVar32 == 0.5) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e3f25c;
                                        }
                                        fVar36 = (float)(int)(fVar34 + 0.5);
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f25c:
                                        fVar36 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar36 = fVar34;
                                        }
                                      }
                                      else {
                                        fVar36 = (float)(int)(fVar34 + -0.5);
                                      }
                                      fVar34 = fVar28;
                                      if (1.0 < fVar28) {
                                        fVar34 = 1.0;
                                      }
                                      fVar34 = fVar34 * 255.0;
                                      if (fVar28 < 0.0) {
                                        fVar34 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                      if (0.0 <= fVar34) {
                                        if (dVar32 == 0.5) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e415c4;
                                        }
                                        fVar28 = (float)(int)(fVar34 + 0.5);
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e415c4:
                                        fVar28 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar28 = fVar34;
                                        }
                                      }
                                      else {
                                        fVar28 = (float)(int)(fVar34 + -0.5);
                                      }
                                      fVar34 = fVar29;
                                      if (1.0 < fVar29) {
                                        fVar34 = 1.0;
                                      }
                                      fVar34 = fVar34 * 255.0;
                                      if (fVar29 < 0.0) {
                                        fVar34 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                      if (0.0 <= fVar34) {
                                        if (dVar32 == 0.5) {
                                          fVar34 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar34 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar34 = (float)(int)(fVar34 + 0.5);
                                        }
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar34 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar34 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar34 = (float)(int)(fVar34 + -0.5);
                                      }
                                      fVar29 = fVar38;
                                      if (1.0 < fVar38) {
                                        fVar29 = 1.0;
                                      }
                                      fVar29 = fVar29 * 255.0;
                                      if (fVar38 < 0.0) {
                                        fVar29 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                                      if (0.0 <= fVar29) {
                                        if (dVar32 == 0.5) {
                                          fVar29 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar29 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar29 = (float)(int)(fVar29 + 0.5);
                                        }
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar29 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar29 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar29 = (float)(int)(fVar29 + -0.5);
                                      }
                                      if (lVar17 == 0) goto LAB_00e443fc;
                                      if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_00e44400;
                                      *(uint *)(lVar17 + (long)(int)uVar16 * 4 + 0x20) =
                                           (int)fVar36 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                           ((int)fVar34 & 0xffU) << 0x10 | (int)fVar29 << 0x18;
                                      dVar32 = *in_stack_00000060;
                                      if (((dVar32 == 0.0) ||
                                          (lVar18 = *(long *)((long)dVar32 + 0xa8), lVar18 == 0)) ||
                                         (lVar14 = *in_stack_00000038, lVar14 == 0))
                                      goto LAB_00e443fc;
                                      if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068)
                                      goto LAB_00e44400;
                                      if (*(long *)(lVar18 + 0x18) == 0) goto LAB_00e443fc;
                                      fVar29 = *(float *)(lVar14 + unaff_x22 * 0xc + 0x20);
                                      fVar38 = *(float *)((long)dVar32 + 0x84);
                                      lVar14 = *unaff_x26;
                                      fVar28 = fStack0000000000000048 * *(float *)(lVar18 + 0x24) +
                                               (fVar29 * *(float *)(lVar18 + 0x20)) / fVar38;
                                      fVar28 = fVar28 - (float)(int)fVar28;
                                      fVar34 = fVar28;
                                      if (1.0 < fVar28) {
                                        fVar34 = 1.0;
                                      }
                                      fVar36 = fVar34;
                                      if (fVar28 < 0.0) {
                                        fVar36 = 0.0;
                                      }
                                      fVar36 = (float)FUN_0269ad38(fVar36,*(long *)(lVar18 + 0x18),0
                                                                  );
                                      fVar28 = fVar36;
                                      if (1.0 < fVar36) {
                                        fVar28 = 1.0;
                                      }
                                      fVar28 = fVar28 * 255.0;
                                      if (fVar36 < 0.0) {
                                        fVar28 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                      if (0.0 <= fVar28) {
                                        if (dVar32 == 0.5) {
                                          fVar28 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e421fc;
                                        }
                                        fVar36 = (float)(int)(fVar28 + 0.5);
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e421fc:
                                        fVar36 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar36 = fVar28;
                                        }
                                      }
                                      else {
                                        fVar36 = (float)(int)(fVar28 + -0.5);
                                      }
                                      fVar28 = fVar34;
                                      if (1.0 < fVar34) {
                                        fVar28 = 1.0;
                                      }
                                      fVar28 = fVar28 * 255.0;
                                      if (fVar34 < 0.0) {
                                        fVar28 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                      if (0.0 <= fVar28) {
                                        if (dVar32 == 0.5) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e4228c;
                                        }
                                        fVar28 = (float)(int)(fVar28 + 0.5);
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4228c:
                                        fVar28 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar28 = fVar34;
                                        }
                                      }
                                      else {
                                        fVar28 = (float)(int)(fVar28 + -0.5);
                                      }
                                      fVar34 = fVar29;
                                      if (1.0 < fVar29) {
                                        fVar34 = 1.0;
                                      }
                                      fVar34 = fVar34 * 255.0;
                                      if (fVar29 < 0.0) {
                                        fVar34 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                      if (0.0 <= fVar34) {
                                        if (dVar32 == 0.5) {
                                          fVar34 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar34 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar34 = (float)(int)(fVar34 + 0.5);
                                        }
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar34 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar34 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar34 = (float)(int)(fVar34 + -0.5);
                                      }
                                      fVar29 = fVar38;
                                      if (1.0 < fVar38) {
                                        fVar29 = 1.0;
                                      }
                                      fVar29 = fVar29 * 255.0;
                                      if (fVar38 < 0.0) {
                                        fVar29 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                                      if (0.0 <= fVar29) {
                                        if (dVar32 == 0.5) {
                                          fVar29 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar29 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar29 = (float)(int)(fVar29 + 0.5);
                                        }
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar29 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar29 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar29 = (float)(int)(fVar29 + -0.5);
                                      }
                                      if (lVar14 == 0) goto LAB_00e443fc;
                                      unaff_s10 = 1.0;
                                      if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_00e44400;
                                      *(uint *)(lVar14 + (long)(int)uVar23 * 4 + 0x20) =
                                           (int)fVar36 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                           ((int)fVar34 & 0xffU) << 0x10 | (int)fVar29 << 0x18;
                                      param_1 = *in_stack_00000060;
                                      if ((param_1 == 0.0) ||
                                         (in_x9 = *(long *)((long)param_1 + 0xa8),
                                         in_s4 = fStack0000000000000048, in_x9 == 0))
                                      goto LAB_00e443fc;
                                      goto code_r0x00e42470;
                                    }
                                    if (*(uint *)(lVar14 + 0x18) <= uVar16) goto LAB_00e44400;
                                    if (lVar15 == 0) goto LAB_00e443fc;
                                    fVar29 = *(float *)(lVar14 + (long)(int)uVar16 * 0xc + 0x20);
                                    fVar38 = *(float *)((long)dVar32 + 0x84);
                                    fVar34 = fVar34 + (fVar29 * *(float *)(lVar18 + 0x20)) / fVar38;
                                    fVar34 = fVar34 - (float)(int)fVar34;
                                    fVar28 = fVar34;
                                    if (1.0 < fVar34) {
                                      fVar28 = fVar36;
                                    }
                                    fVar39 = fVar28;
                                    if (fVar34 < 0.0) {
                                      fVar39 = 0.0;
                                    }
                                    fVar39 = (float)FUN_0269ad38(fVar39,lVar15,0);
                                    fVar34 = fVar39;
                                    if (1.0 < fVar39) {
                                      fVar34 = fVar36;
                                    }
                                    fVar34 = fVar34 * 255.0;
                                    if (fVar39 < 0.0) {
                                      fVar34 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                    if (0.0 <= fVar34) {
                                      if (dVar32 == 0.5) {
                                        fVar34 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e3f234;
                                      }
                                      fVar36 = (float)(int)(fVar34 + 0.5);
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f234:
                                      fVar36 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar36 = fVar34;
                                      }
                                    }
                                    else {
                                      fVar36 = (float)(int)(fVar34 + -0.5);
                                    }
                                    fVar34 = fVar28;
                                    if (1.0 < fVar28) {
                                      fVar34 = 1.0;
                                    }
                                    fVar34 = fVar34 * 255.0;
                                    if (fVar28 < 0.0) {
                                      fVar34 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                    if (0.0 <= fVar34) {
                                      if (dVar32 == 0.5) {
                                        fVar34 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e3f594;
                                      }
                                      fVar28 = (float)(int)(fVar34 + 0.5);
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f594:
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = fVar34;
                                      }
                                    }
                                    else {
                                      fVar28 = (float)(int)(fVar34 + -0.5);
                                    }
                                    fVar34 = fVar29;
                                    if (1.0 < fVar29) {
                                      fVar34 = 1.0;
                                    }
                                    fVar34 = fVar34 * 255.0;
                                    if (fVar29 < 0.0) {
                                      fVar34 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                    if (0.0 <= fVar34) {
                                      if (dVar32 == 0.5) {
                                        fVar34 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar34 = (float)(int)(fVar34 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar34 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar34 = (float)(int)(fVar34 + -0.5);
                                    }
                                    fVar29 = fVar38;
                                    if (1.0 < fVar38) {
                                      fVar29 = 1.0;
                                    }
                                    fVar29 = fVar29 * 255.0;
                                    if (fVar38 < 0.0) {
                                      fVar29 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                                    if (0.0 <= fVar29) {
                                      if (dVar32 == 0.5) {
                                        fVar29 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar29 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar29 = (float)(int)(fVar29 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar29 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar29 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar29 = (float)(int)(fVar29 + -0.5);
                                    }
                                    if (lVar17 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_00e44400;
                                    *(uint *)(lVar17 + (long)(int)uVar16 * 4 + 0x20) =
                                         (int)fVar36 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                         ((int)fVar34 & 0xffU) << 0x10 | (int)fVar29 << 0x18;
                                    dVar32 = *in_stack_00000060;
                                    if (((dVar32 == 0.0) ||
                                        (lVar18 = *(long *)((long)dVar32 + 0xa8), lVar18 == 0)) ||
                                       (lVar14 = *in_stack_00000038, lVar14 == 0))
                                    goto LAB_00e443fc;
                                    if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_00e44400;
                                    if (*(long *)(lVar18 + 0x18) == 0) goto LAB_00e443fc;
                                    fVar29 = *(float *)(lVar14 + (long)(int)uVar23 * 0xc + 0x20);
                                    fVar38 = *(float *)((long)dVar32 + 0x84);
                                    lVar14 = *unaff_x26;
                                    fVar28 = fStack0000000000000048 * *(float *)(lVar18 + 0x24) +
                                             (fVar29 * *(float *)(lVar18 + 0x20)) / fVar38;
                                    fVar28 = fVar28 - (float)(int)fVar28;
                                    fVar34 = fVar28;
                                    if (1.0 < fVar28) {
                                      fVar34 = 1.0;
                                    }
                                    fVar36 = fVar34;
                                    if (fVar28 < 0.0) {
                                      fVar36 = 0.0;
                                    }
                                    fVar36 = (float)FUN_0269ad38(fVar36,*(long *)(lVar18 + 0x18),0);
                                    fVar28 = fVar36;
                                    if (1.0 < fVar36) {
                                      fVar28 = 1.0;
                                    }
                                    fVar28 = fVar28 * 255.0;
                                    if (fVar36 < 0.0) {
                                      fVar28 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                    if (0.0 <= fVar28) {
                                      if (dVar32 == 0.5) {
                                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e3f858;
                                      }
                                      fVar36 = (float)(int)(fVar28 + 0.5);
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f858:
                                      fVar36 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar36 = fVar28;
                                      }
                                    }
                                    else {
                                      fVar36 = (float)(int)(fVar28 + -0.5);
                                    }
                                    fVar28 = fVar34;
                                    if (1.0 < fVar34) {
                                      fVar28 = 1.0;
                                    }
                                    fVar28 = fVar28 * 255.0;
                                    if (fVar34 < 0.0) {
                                      fVar28 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                    if (0.0 <= fVar28) {
                                      if (dVar32 == 0.5) {
                                        fVar34 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e3f8e8;
                                      }
                                      fVar28 = (float)(int)(fVar28 + 0.5);
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f8e8:
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = fVar34;
                                      }
                                    }
                                    else {
                                      fVar28 = (float)(int)(fVar28 + -0.5);
                                    }
                                    fVar34 = fVar29;
                                    if (1.0 < fVar29) {
                                      fVar34 = 1.0;
                                    }
                                    fVar34 = fVar34 * 255.0;
                                    if (fVar29 < 0.0) {
                                      fVar34 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                    if (0.0 <= fVar34) {
                                      if (dVar32 == 0.5) {
                                        fVar34 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar34 = (float)(int)(fVar34 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar34 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar34 = (float)(int)(fVar34 + -0.5);
                                    }
                                    fVar29 = fVar38;
                                    if (1.0 < fVar38) {
                                      fVar29 = 1.0;
                                    }
                                    fVar29 = fVar29 * 255.0;
                                    if (fVar38 < 0.0) {
                                      fVar29 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                                    unaff_x25 = (long *)StringLiteral_9119;
                                    if (0.0 <= fVar29) {
                                      if (dVar32 == 0.5) {
                                        fVar29 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar29 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar29 = (float)(int)(fVar29 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar29 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar29 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar29 = (float)(int)(fVar29 + -0.5);
                                    }
                                    if (lVar14 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_00e44400;
                                    *(uint *)(lVar14 + (long)(int)uVar23 * 4 + 0x20) =
                                         (int)fVar36 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                         ((int)fVar34 & 0xffU) << 0x10 | (int)fVar29 << 0x18;
                                    dVar32 = *in_stack_00000060;
                                    if (((dVar32 == 0.0) ||
                                        (lVar14 = *(long *)((long)dVar32 + 0xa8), lVar14 == 0)) ||
                                       (lVar18 = *in_stack_00000038, lVar18 == 0))
                                    goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_00e44400;
                                    if (*(long *)(lVar14 + 0x18) == 0) goto LAB_00e443fc;
                                    fVar34 = *(float *)(lVar18 + in_stack_00000058 * 0xc + 0x20);
                                    uVar11 = (ulong)(uint)fVar34;
                                    uVar12 = (ulong)(uint)*(float *)((long)dVar32 + 0x84);
                                    lVar18 = *unaff_x26;
                                    fVar28 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                                             (fVar34 * *(float *)(lVar14 + 0x20)) /
                                             *(float *)((long)dVar32 + 0x84);
                                    fVar28 = fVar28 - (float)(int)fVar28;
                                    fVar34 = fVar28;
                                    if (1.0 < fVar28) {
                                      fVar34 = 1.0;
                                    }
                                    fVar29 = fVar34;
                                    if (fVar28 < 0.0) {
                                      fVar29 = 0.0;
                                    }
                                    fVar29 = (float)FUN_0269ad38(fVar29,*(long *)(lVar14 + 0x18),0);
                                    fVar28 = fVar29;
                                    if (1.0 < fVar29) {
                                      fVar28 = 1.0;
                                    }
                                    uVar35 = 0x437f0000;
                                    fVar28 = fVar28 * 255.0;
                                    if (fVar29 < 0.0) {
                                      fVar28 = 0.0;
                                    }
                                    dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                    if (0.0 <= fVar28) {
                                      if (dVar32 == 0.5) {
                                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e3fbd0;
                                      }
                                      fVar29 = (float)(int)(fVar28 + 0.5);
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fbd0:
                                      fVar29 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar29 = fVar28;
                                      }
                                    }
                                    else {
                                      fVar29 = (float)(int)(fVar28 + -0.5);
                                    }
                                    fVar28 = fVar34;
                                    if (1.0 < fVar34) {
                                      fVar28 = 1.0;
                                    }
                                    fVar28 = fVar28 * 255.0;
                                    if (fVar34 < 0.0) {
                                      fVar28 = 0.0;
                                    }
                                  }
                                  unaff_s10 = 1.0;
                                  unaff_w23 = 255.0;
                                  dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                  goto joined_r0x00e425b4;
                                }
                                uVar20 = *(undefined8 *)((long)dVar32 + 0xb0);
                                if (*(int *)(*(long *)
                                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                            + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar11 = FUN_02681b9c(uVar20,0,0);
                                dVar32 = DAT_028aa048;
                                if ((uVar11 & 1) == 0) {
                                  if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                  uVar20 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
                                  if (*(int *)(*(long *)
                                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                              + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar11 = FUN_02681b9c(uVar20,0,0);
                                  lVar18 = *unaff_x26;
                                  if ((uVar11 & 1) == 0) {
                                    fVar28 = *(float *)((long)unaff_x19 + 0x8c);
                                    fVar29 = *(float *)(unaff_x19 + 0x12);
                                    fVar39 = *(float *)((long)unaff_x19 + 0x94);
                                    fVar38 = *(float *)(unaff_x19 + 0x13);
                                    fVar34 = fVar28;
                                    if (1.0 < fVar28) {
                                      fVar34 = 1.0;
                                    }
                                    fVar34 = fVar34 * 255.0;
                                    if (fVar28 < 0.0) {
                                      fVar34 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                    if (0.0 <= fVar34) {
                                      if (dVar32 == 0.5) {
                                        fVar34 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar34 = (float)(int)(fVar34 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar34 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar34 = (float)(int)(fVar34 + -0.5);
                                    }
                                    fVar28 = fVar29;
                                    if (1.0 < fVar29) {
                                      fVar28 = 1.0;
                                    }
                                    fVar28 = fVar28 * 255.0;
                                    if (fVar29 < 0.0) {
                                      fVar28 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                    if (0.0 <= fVar28) {
                                      if (dVar32 == 0.5) {
                                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e3fd48;
                                      }
                                      fVar29 = (float)(int)(fVar28 + 0.5);
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fd48:
                                      fVar29 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar29 = fVar28;
                                      }
                                    }
                                    else {
                                      fVar29 = (float)(int)(fVar28 + -0.5);
                                    }
                                    fVar28 = fVar39;
                                    if (1.0 < fVar39) {
                                      fVar28 = 1.0;
                                    }
                                    fVar28 = fVar28 * 255.0;
                                    if (fVar39 < 0.0) {
                                      fVar28 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                    if (0.0 <= fVar28) {
                                      if (dVar32 == 0.5) {
                                        fVar28 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar28 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar28 = (float)(int)(fVar28 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar28 = (float)(int)(fVar28 + -0.5);
                                    }
                                    fVar39 = fVar38;
                                    if (1.0 < fVar38) {
                                      fVar39 = 1.0;
                                    }
                                    fVar39 = fVar39 * 255.0;
                                    if (fVar38 < 0.0) {
                                      fVar39 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                    if (0.0 <= fVar39) {
                                      if (dVar32 == 0.5) {
                                        fVar38 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar38 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar38 = (float)(int)(fVar39 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar38 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar38 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar38 = (float)(int)(fVar39 + -0.5);
                                    }
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068)
                                    goto LAB_00e44400;
                                    *(uint *)(lVar18 + unaff_x22 * 4 + 0x20) =
                                         (int)fVar34 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                         ((int)fVar28 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                                    fVar28 = *(float *)(unaff_x19 + 0x12);
                                    lVar18 = unaff_x19[0x5f];
                                    fVar38 = *(float *)((long)unaff_x19 + 0x94);
                                    fVar29 = *(float *)(unaff_x19 + 0x13);
                                    fVar34 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                                    if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                                      fVar34 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                    if (0.0 <= fVar34) {
                                      if (dVar32 == 0.5) {
                                        fVar34 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar34 = (float)(int)(fVar34 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar34 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar34 = (float)(int)(fVar34 + -0.5);
                                    }
                                    fVar39 = fVar28;
                                    if (1.0 < fVar28) {
                                      fVar39 = 1.0;
                                    }
                                    fVar39 = fVar39 * 255.0;
                                    if (fVar28 < 0.0) {
                                      fVar39 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                    if (0.0 <= fVar39) {
                                      if (dVar32 == 0.5) {
                                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e40610;
                                      }
                                      fVar39 = (float)(int)(fVar39 + 0.5);
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40610:
                                      fVar39 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar39 = fVar28;
                                      }
                                    }
                                    else {
                                      fVar39 = (float)(int)(fVar39 + -0.5);
                                    }
                                    fVar28 = fVar38;
                                    if (1.0 < fVar38) {
                                      fVar28 = 1.0;
                                    }
                                    fVar28 = fVar28 * 255.0;
                                    if (fVar38 < 0.0) {
                                      fVar28 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                    if (0.0 <= fVar28) {
                                      if (dVar32 == 0.5) {
                                        fVar28 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar28 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar28 = (float)(int)(fVar28 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar28 = (float)(int)(fVar28 + -0.5);
                                    }
                                    fVar38 = fVar29;
                                    if (1.0 < fVar29) {
                                      fVar38 = 1.0;
                                    }
                                    fVar38 = fVar38 * 255.0;
                                    if (fVar29 < 0.0) {
                                      fVar38 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                                    if (0.0 <= fVar38) {
                                      if (dVar32 == 0.5) {
                                        fVar29 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar29 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar29 = (float)(int)(fVar38 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar29 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar29 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar29 = (float)(int)(fVar38 + -0.5);
                                    }
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_00e44400;
                                    *(uint *)(lVar18 + (long)(int)uVar16 * 4 + 0x20) =
                                         (int)fVar34 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                                         ((int)fVar28 & 0xffU) << 0x10 | (int)fVar29 << 0x18;
                                    fVar28 = *(float *)(unaff_x19 + 0x12);
                                    lVar18 = unaff_x19[0x5f];
                                    fVar38 = *(float *)((long)unaff_x19 + 0x94);
                                    fVar29 = *(float *)(unaff_x19 + 0x13);
                                    fVar34 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                                    if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                                      fVar34 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                    if (0.0 <= fVar34) {
                                      if (dVar32 == 0.5) {
                                        fVar34 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar34 = (float)(int)(fVar34 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar34 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar34 = (float)(int)(fVar34 + -0.5);
                                    }
                                    fVar39 = fVar28;
                                    if (1.0 < fVar28) {
                                      fVar39 = 1.0;
                                    }
                                    fVar39 = fVar39 * 255.0;
                                    if (fVar28 < 0.0) {
                                      fVar39 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                    if (0.0 <= fVar39) {
                                      if (dVar32 == 0.5) {
                                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e40e20;
                                      }
                                      fVar39 = (float)(int)(fVar39 + 0.5);
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40e20:
                                      fVar39 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar39 = fVar28;
                                      }
                                    }
                                    else {
                                      fVar39 = (float)(int)(fVar39 + -0.5);
                                    }
                                    fVar28 = fVar38;
                                    if (1.0 < fVar38) {
                                      fVar28 = 1.0;
                                    }
                                    fVar28 = fVar28 * 255.0;
                                    if (fVar38 < 0.0) {
                                      fVar28 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                    if (0.0 <= fVar28) {
                                      if (dVar32 == 0.5) {
                                        fVar28 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar28 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar28 = (float)(int)(fVar28 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar28 = (float)(int)(fVar28 + -0.5);
                                    }
                                    fVar38 = fVar29;
                                    if (1.0 < fVar29) {
                                      fVar38 = 1.0;
                                    }
                                    fVar38 = fVar38 * 255.0;
                                    if (fVar29 < 0.0) {
                                      fVar38 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                                    if (0.0 <= fVar38) {
                                      if (dVar32 == 0.5) {
                                        fVar29 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar29 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar29 = (float)(int)(fVar38 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar29 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar29 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar29 = (float)(int)(fVar38 + -0.5);
                                    }
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_00e44400;
                                    *(uint *)(lVar18 + (long)(int)uVar23 * 4 + 0x20) =
                                         (int)fVar34 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                                         ((int)fVar28 & 0xffU) << 0x10 | (int)fVar29 << 0x18;
                                    fVar34 = *(float *)((long)unaff_x19 + 0x8c);
                                    fVar28 = *(float *)(unaff_x19 + 0x12);
                                    lVar18 = unaff_x19[0x5f];
                                    fVar38 = *(float *)((long)unaff_x19 + 0x94);
                                    fVar29 = *(float *)(unaff_x19 + 0x13);
                                  }
                                  else {
                                    if ((*in_stack_00000060 == 0.0) ||
                                       (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0),
                                       lVar14 == 0)) goto LAB_00e443fc;
                                    fVar28 = *(float *)(lVar14 + 0x18);
                                    fVar29 = *(float *)(lVar14 + 0x1c);
                                    fVar39 = *(float *)(lVar14 + 0x20);
                                    fVar38 = *(float *)(lVar14 + 0x24);
                                    fVar34 = fVar28;
                                    if (1.0 < fVar28) {
                                      fVar34 = 1.0;
                                    }
                                    fVar34 = fVar34 * 255.0;
                                    if (fVar28 < 0.0) {
                                      fVar34 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                    if (0.0 <= fVar34) {
                                      if (dVar32 == 0.5) {
                                        fVar34 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar34 = (float)(int)(fVar34 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar34 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar34 = (float)(int)(fVar34 + -0.5);
                                    }
                                    fVar28 = fVar29;
                                    if (1.0 < fVar29) {
                                      fVar28 = 1.0;
                                    }
                                    fVar28 = fVar28 * 255.0;
                                    if (fVar29 < 0.0) {
                                      fVar28 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                    if (0.0 <= fVar28) {
                                      if (dVar32 == 0.5) {
                                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e3fcc4;
                                      }
                                      fVar29 = (float)(int)(fVar28 + 0.5);
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fcc4:
                                      fVar29 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar29 = fVar28;
                                      }
                                    }
                                    else {
                                      fVar29 = (float)(int)(fVar28 + -0.5);
                                    }
                                    fVar28 = fVar39;
                                    if (1.0 < fVar39) {
                                      fVar28 = 1.0;
                                    }
                                    fVar28 = fVar28 * 255.0;
                                    if (fVar39 < 0.0) {
                                      fVar28 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                    if (0.0 <= fVar28) {
                                      if (dVar32 == 0.5) {
                                        fVar28 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar28 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar28 = (float)(int)(fVar28 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar28 = (float)(int)(fVar28 + -0.5);
                                    }
                                    fVar39 = fVar38;
                                    if (1.0 < fVar38) {
                                      fVar39 = 1.0;
                                    }
                                    fVar39 = fVar39 * 255.0;
                                    if (fVar38 < 0.0) {
                                      fVar39 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                    if (0.0 <= fVar39) {
                                      if (dVar32 == 0.5) {
                                        fVar38 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar38 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar38 = (float)(int)(fVar39 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar38 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar38 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar38 = (float)(int)(fVar39 + -0.5);
                                    }
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068)
                                    goto LAB_00e44400;
                                    *(uint *)(lVar18 + unaff_x22 * 4 + 0x20) =
                                         (int)fVar34 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                         ((int)fVar28 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                                    if ((*in_stack_00000060 == 0.0) ||
                                       (lVar18 = *(long *)((long)*in_stack_00000060 + 0xa0),
                                       lVar18 == 0)) goto LAB_00e443fc;
                                    fVar28 = *(float *)(lVar18 + 0x1c);
                                    lVar14 = *unaff_x26;
                                    fVar38 = *(float *)(lVar18 + 0x20);
                                    fVar29 = *(float *)(lVar18 + 0x24);
                                    fVar34 = *(float *)(lVar18 + 0x18) * 255.0;
                                    if (*(float *)(lVar18 + 0x18) < 0.0) {
                                      fVar34 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                    if (0.0 <= fVar34) {
                                      if (dVar32 == 0.5) {
                                        fVar34 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar34 = (float)(int)(fVar34 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar34 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar34 = (float)(int)(fVar34 + -0.5);
                                    }
                                    fVar39 = fVar28;
                                    if (1.0 < fVar28) {
                                      fVar39 = 1.0;
                                    }
                                    fVar39 = fVar39 * 255.0;
                                    if (fVar28 < 0.0) {
                                      fVar39 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                    if (0.0 <= fVar39) {
                                      if (dVar32 == 0.5) {
                                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e4057c;
                                      }
                                      fVar39 = (float)(int)(fVar39 + 0.5);
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4057c:
                                      fVar39 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar39 = fVar28;
                                      }
                                    }
                                    else {
                                      fVar39 = (float)(int)(fVar39 + -0.5);
                                    }
                                    fVar28 = fVar38;
                                    if (1.0 < fVar38) {
                                      fVar28 = 1.0;
                                    }
                                    fVar28 = fVar28 * 255.0;
                                    if (fVar38 < 0.0) {
                                      fVar28 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                    if (0.0 <= fVar28) {
                                      if (dVar32 == 0.5) {
                                        fVar28 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar28 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar28 = (float)(int)(fVar28 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar28 = (float)(int)(fVar28 + -0.5);
                                    }
                                    fVar38 = fVar29;
                                    if (1.0 < fVar29) {
                                      fVar38 = 1.0;
                                    }
                                    fVar38 = fVar38 * 255.0;
                                    if (fVar29 < 0.0) {
                                      fVar38 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                                    if (0.0 <= fVar38) {
                                      if (dVar32 == 0.5) {
                                        fVar29 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar29 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar29 = (float)(int)(fVar38 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar29 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar29 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar29 = (float)(int)(fVar38 + -0.5);
                                    }
                                    if (lVar14 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar14 + 0x18) <= uVar16) goto LAB_00e44400;
                                    *(uint *)(lVar14 + (long)(int)uVar16 * 4 + 0x20) =
                                         (int)fVar34 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                                         ((int)fVar28 & 0xffU) << 0x10 | (int)fVar29 << 0x18;
                                    if ((*in_stack_00000060 == 0.0) ||
                                       (lVar18 = *(long *)((long)*in_stack_00000060 + 0xa0),
                                       lVar18 == 0)) goto LAB_00e443fc;
                                    fVar28 = *(float *)(lVar18 + 0x1c);
                                    lVar14 = *unaff_x26;
                                    fVar38 = *(float *)(lVar18 + 0x20);
                                    fVar29 = *(float *)(lVar18 + 0x24);
                                    fVar34 = *(float *)(lVar18 + 0x18) * 255.0;
                                    if (*(float *)(lVar18 + 0x18) < 0.0) {
                                      fVar34 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                    if (0.0 <= fVar34) {
                                      if (dVar32 == 0.5) {
                                        fVar34 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar34 = (float)(int)(fVar34 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar34 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar34 = (float)(int)(fVar34 + -0.5);
                                    }
                                    fVar39 = fVar28;
                                    if (1.0 < fVar28) {
                                      fVar39 = 1.0;
                                    }
                                    fVar39 = fVar39 * 255.0;
                                    if (fVar28 < 0.0) {
                                      fVar39 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                    if (0.0 <= fVar39) {
                                      if (dVar32 == 0.5) {
                                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e40d8c;
                                      }
                                      fVar39 = (float)(int)(fVar39 + 0.5);
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40d8c:
                                      fVar39 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar39 = fVar28;
                                      }
                                    }
                                    else {
                                      fVar39 = (float)(int)(fVar39 + -0.5);
                                    }
                                    fVar28 = fVar38;
                                    if (1.0 < fVar38) {
                                      fVar28 = 1.0;
                                    }
                                    fVar28 = fVar28 * 255.0;
                                    if (fVar38 < 0.0) {
                                      fVar28 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                    if (0.0 <= fVar28) {
                                      if (dVar32 == 0.5) {
                                        fVar28 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar28 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar28 = (float)(int)(fVar28 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar28 = (float)(int)(fVar28 + -0.5);
                                    }
                                    fVar38 = fVar29;
                                    if (1.0 < fVar29) {
                                      fVar38 = 1.0;
                                    }
                                    fVar38 = fVar38 * 255.0;
                                    if (fVar29 < 0.0) {
                                      fVar38 = fVar36;
                                    }
                                    dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                                    if (0.0 <= fVar38) {
                                      if (dVar32 == 0.5) {
                                        fVar29 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar29 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar29 = (float)(int)(fVar38 + 0.5);
                                      }
                                    }
                                    else if (dVar32 == -0.5) {
                                      fVar29 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar29 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar29 = (float)(int)(fVar38 + -0.5);
                                    }
                                    if (lVar14 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_00e44400;
                                    *(uint *)(lVar14 + (long)(int)uVar23 * 4 + 0x20) =
                                         (int)fVar34 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                                         ((int)fVar28 & 0xffU) << 0x10 | (int)fVar29 << 0x18;
                                    if ((*in_stack_00000060 == 0.0) ||
                                       (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0),
                                       lVar14 == 0)) goto LAB_00e443fc;
                                    fVar34 = *(float *)(lVar14 + 0x18);
                                    fVar28 = *(float *)(lVar14 + 0x1c);
                                    lVar18 = *unaff_x26;
                                    fVar38 = *(float *)(lVar14 + 0x20);
                                    fVar29 = *(float *)(lVar14 + 0x24);
                                  }
                                  fVar39 = fVar34 * 255.0;
                                  if (fVar34 < 0.0) {
                                    fVar39 = fVar36;
                                  }
                                  dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                  if (0.0 <= fVar39) {
                                    if (dVar32 == 0.5) {
                                      fVar34 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar34 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar34 = (float)(int)(fVar39 + 0.5);
                                    }
                                  }
                                  else if (dVar32 == -0.5) {
                                    fVar34 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar34 = (float)_fStack0000000000000070 + -1.0;
                                    }
                                  }
                                  else {
                                    fVar34 = (float)(int)(fVar39 + -0.5);
                                  }
                                  fVar39 = fVar28;
                                  if (1.0 < fVar28) {
                                    fVar39 = 1.0;
                                  }
                                  fVar39 = fVar39 * 255.0;
                                  if (fVar28 < 0.0) {
                                    fVar39 = fVar36;
                                  }
                                  dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                  if (0.0 <= fVar39) {
                                    if (dVar32 == 0.5) {
                                      fVar28 = (float)_fStack0000000000000070 + 1.0;
                                      goto LAB_00e412dc;
                                    }
                                    fVar39 = (float)(int)(fVar39 + 0.5);
                                  }
                                  else if (dVar32 == -0.5) {
                                    fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e412dc:
                                    fVar39 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar39 = fVar28;
                                    }
                                  }
                                  else {
                                    fVar39 = (float)(int)(fVar39 + -0.5);
                                  }
                                  fVar28 = fVar38;
                                  if (1.0 < fVar38) {
                                    fVar28 = 1.0;
                                  }
                                  fVar28 = fVar28 * 255.0;
                                  if (fVar38 < 0.0) {
                                    fVar28 = fVar36;
                                  }
                                  dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                  if (0.0 <= fVar28) {
                                    if (dVar32 == 0.5) {
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar28 = (float)(int)(fVar28 + 0.5);
                                    }
                                  }
                                  else if (dVar32 == -0.5) {
                                    fVar28 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar28 = (float)_fStack0000000000000070 + -1.0;
                                    }
                                  }
                                  else {
                                    fVar28 = (float)(int)(fVar28 + -0.5);
                                  }
                                  uVar35 = 0x3f800000;
                                  fVar38 = fVar29;
                                  if (1.0 < fVar29) {
                                    fVar38 = 1.0;
                                  }
                                  fVar38 = fVar38 * 255.0;
                                  if (fVar29 < 0.0) {
                                    fVar38 = fVar36;
                                  }
                                  dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                                  if (0.0 <= fVar38) {
                                    if (dVar32 == 0.5) {
                                      fVar29 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar29 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar29 = (float)(int)(fVar38 + 0.5);
                                    }
                                  }
                                  else if (dVar32 == -0.5) {
                                    fVar29 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar29 = (float)_fStack0000000000000070 + -1.0;
                                    }
                                  }
                                  else {
                                    fVar29 = (float)(int)(fVar38 + -0.5);
                                  }
                                  if (lVar18 == 0) goto LAB_00e443fc;
                                  unaff_s10 = 1.0;
                                  if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_00e44400;
                                  *(uint *)(lVar18 + in_stack_00000058 * 4 + 0x20) =
                                       (int)fVar34 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                                       ((int)fVar28 & 0xffU) << 0x10 | (int)fVar29 << 0x18;
                                  goto LAB_00e43400;
                                }
                                lVar18 = *unaff_x26;
                                dVar31 = modf(DAT_028aa048,(double *)&stack0x00000070);
                                if (dVar31 == 0.5) {
                                  fVar34 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar34 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar34 = 255.0;
                                }
                                dVar31 = modf(dVar32,(double *)&stack0x00000070);
                                if (dVar31 == 0.5) {
                                  fVar28 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar28 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar28 = 255.0;
                                }
                                dVar31 = modf(dVar32,(double *)&stack0x00000070);
                                if (dVar31 == 0.5) {
                                  fVar29 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar29 = 255.0;
                                }
                                dVar31 = modf(dVar32,(double *)&stack0x00000070);
                                if (dVar31 == 0.5) {
                                  fVar38 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar38 = 255.0;
                                }
                                if (lVar18 == 0) goto LAB_00e443fc;
                                if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068)
                                goto LAB_00e44400;
                                *(uint *)(lVar18 + unaff_x22 * 4 + 0x20) =
                                     (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                     ((int)fVar29 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                                lVar18 = *unaff_x26;
                                dVar31 = modf(dVar32,(double *)&stack0x00000070);
                                if (dVar31 == 0.5) {
                                  fVar34 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar34 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar34 = 255.0;
                                }
                                dVar31 = modf(dVar32,(double *)&stack0x00000070);
                                if (dVar31 == 0.5) {
                                  fVar28 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar28 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar28 = 255.0;
                                }
                                dVar31 = modf(dVar32,(double *)&stack0x00000070);
                                if (dVar31 == 0.5) {
                                  fVar29 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar29 = 255.0;
                                }
                                dVar31 = modf(dVar32,(double *)&stack0x00000070);
                                if (dVar31 == 0.5) {
                                  fVar38 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar38 = 255.0;
                                }
                                if (lVar18 == 0) goto LAB_00e443fc;
                                if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_00e44400;
                                *(uint *)(lVar18 + (long)(int)uVar16 * 4 + 0x20) =
                                     (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                     ((int)fVar29 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                                lVar18 = *unaff_x26;
                                dVar31 = modf(dVar32,(double *)&stack0x00000070);
                                if (dVar31 == 0.5) {
                                  fVar34 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar34 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar34 = 255.0;
                                }
                                dVar31 = modf(dVar32,(double *)&stack0x00000070);
                                if (dVar31 == 0.5) {
                                  fVar28 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar28 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar28 = 255.0;
                                }
                                dVar31 = modf(dVar32,(double *)&stack0x00000070);
                                if (dVar31 == 0.5) {
                                  fVar29 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar29 = 255.0;
                                }
                                dVar31 = modf(dVar32,(double *)&stack0x00000070);
                                if (dVar31 == 0.5) {
                                  fVar38 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar38 = 255.0;
                                }
                                if (lVar18 == 0) goto LAB_00e443fc;
                                if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_00e44400;
                                *(uint *)(lVar18 + (long)(int)uVar23 * 4 + 0x20) =
                                     (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                     ((int)fVar29 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                                lVar18 = *unaff_x26;
                                dVar31 = modf(dVar32,(double *)&stack0x00000070);
                                if (dVar31 == 0.5) {
                                  fVar34 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar34 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar34 = 255.0;
                                }
                                dVar31 = modf(dVar32,(double *)&stack0x00000070);
                                if (dVar31 == 0.5) {
                                  fVar28 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar28 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar28 = 255.0;
                                }
                                dVar31 = modf(dVar32,(double *)&stack0x00000070);
                                if (dVar31 == 0.5) {
                                  fVar29 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar29 = 255.0;
                                }
                                dVar32 = modf(dVar32,(double *)&stack0x00000070);
                                if (dVar32 == 0.5) {
                                  fVar38 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar38 = 255.0;
                                }
                                if (lVar18 == 0) goto LAB_00e443fc;
                                if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_00e44400;
                                *(uint *)(lVar18 + in_stack_00000058 * 4 + 0x20) =
                                     (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                     ((int)fVar29 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                                if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                uVar20 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
                                unaff_s10 = 1.0;
                                if (*(int *)(*(long *)
                                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                            + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar11 = FUN_02681b9c(uVar20,0,0);
                              } while ((uVar11 & 1) == 0);
                              lVar18 = *unaff_x26;
                              if (lVar18 == 0) break;
                              if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                              puVar21 = (uint *)(lVar18 + unaff_x22 * 4 + 0x20);
                              uVar22 = *puVar21;
                              if ((*in_stack_00000060 == 0.0) ||
                                 (lVar18 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar18 == 0))
                              break;
                              fVar28 = ((float)(uVar22 & 0xff) / 255.0) * *(float *)(lVar18 + 0x18);
                              fVar39 = ((float)(uVar22 >> 8 & 0xff) / 255.0) *
                                       *(float *)(lVar18 + 0x1c);
                              fVar38 = *(float *)(lVar18 + 0x20);
                              fVar29 = *(float *)(lVar18 + 0x24);
                              fVar34 = fVar28 * 255.0;
                              if (fVar28 < 0.0) {
                                fVar34 = fVar36;
                              }
                              dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                              if (0.0 <= fVar34) {
                                if (dVar32 == 0.5) {
                                  fVar34 = 1.0;
                                  goto LAB_00e3ede4;
                                }
                                fVar28 = (float)(int)(fVar34 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar34 = -1.0;
LAB_00e3ede4:
                                fVar28 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar28 = (float)_fStack0000000000000070 + fVar34;
                                }
                              }
                              else {
                                fVar28 = (float)(int)(fVar34 + -0.5);
                              }
                              fVar38 = ((float)(uVar22 >> 0x10 & 0xff) / 255.0) * fVar38;
                              fVar34 = fVar39 * 255.0;
                              if (fVar39 < 0.0) {
                                fVar34 = fVar36;
                              }
                              dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                              if (0.0 <= fVar34) {
                                if (dVar32 == 0.5) {
                                  fVar34 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar34 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar34 = (float)(int)(fVar34 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar34 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar34 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar34 = (float)(int)(fVar34 + -0.5);
                              }
                              fVar39 = fVar38;
                              if (1.0 < fVar38) {
                                fVar39 = 1.0;
                              }
                              fVar29 = ((float)(uVar22 >> 0x18) / 255.0) * fVar29;
                              fVar39 = fVar39 * 255.0;
                              if (fVar38 < 0.0) {
                                fVar39 = fVar36;
                              }
                              dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                              if (0.0 <= fVar39) {
                                if (dVar32 == 0.5) {
                                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3ffb0;
                                }
                                fVar39 = (float)(int)(fVar39 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ffb0:
                                fVar39 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar39 = fVar38;
                                }
                              }
                              else {
                                fVar39 = (float)(int)(fVar39 + -0.5);
                              }
                              fVar38 = fVar29;
                              if (1.0 < fVar29) {
                                fVar38 = 1.0;
                              }
                              fVar38 = fVar38 * 255.0;
                              if (fVar29 < 0.0) {
                                fVar38 = fVar36;
                              }
                              dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                              if (0.0 <= fVar38) {
                                if (dVar32 == 0.5) {
                                  fVar29 = 1.0;
                                  goto LAB_00e40174;
                                }
                                fVar38 = (float)(int)(fVar38 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar29 = -1.0;
LAB_00e40174:
                                fVar38 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar38 = (float)_fStack0000000000000070 + fVar29;
                                }
                              }
                              else {
                                fVar38 = (float)(int)(fVar38 + -0.5);
                              }
                              *puVar21 = (int)fVar28 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                                         ((int)fVar39 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                              lVar18 = *unaff_x26;
                              if (lVar18 == 0) break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_00e44400;
                              puVar21 = (uint *)(lVar18 + (long)(int)uVar16 * 4 + 0x20);
                              uVar22 = *puVar21;
                              if ((*in_stack_00000060 == 0.0) ||
                                 (lVar18 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar18 == 0))
                              break;
                              fVar28 = ((float)(uVar22 & 0xff) / 255.0) * *(float *)(lVar18 + 0x18);
                              fVar39 = ((float)(uVar22 >> 8 & 0xff) / 255.0) *
                                       *(float *)(lVar18 + 0x1c);
                              fVar38 = *(float *)(lVar18 + 0x20);
                              fVar29 = *(float *)(lVar18 + 0x24);
                              fVar34 = fVar28 * 255.0;
                              if (fVar28 < 0.0) {
                                fVar34 = fVar36;
                              }
                              dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                              if (0.0 <= fVar34) {
                                if (dVar32 == 0.5) {
                                  fVar34 = 1.0;
                                  goto LAB_00e404dc;
                                }
                                fVar28 = (float)(int)(fVar34 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar34 = -1.0;
LAB_00e404dc:
                                fVar28 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar28 = (float)_fStack0000000000000070 + fVar34;
                                }
                              }
                              else {
                                fVar28 = (float)(int)(fVar34 + -0.5);
                              }
                              fVar38 = ((float)(uVar22 >> 0x10 & 0xff) / 255.0) * fVar38;
                              fVar34 = fVar39 * 255.0;
                              if (fVar39 < 0.0) {
                                fVar34 = fVar36;
                              }
                              dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                              if (0.0 <= fVar34) {
                                if (dVar32 == 0.5) {
                                  fVar34 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar34 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar34 = (float)(int)(fVar34 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar34 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar34 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar34 = (float)(int)(fVar34 + -0.5);
                              }
                              fVar39 = fVar38;
                              if (1.0 < fVar38) {
                                fVar39 = 1.0;
                              }
                              fVar29 = ((float)(uVar22 >> 0x18) / 255.0) * fVar29;
                              fVar39 = fVar39 * 255.0;
                              if (fVar38 < 0.0) {
                                fVar39 = fVar36;
                              }
                              dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                              if (0.0 <= fVar39) {
                                if (dVar32 == 0.5) {
                                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e40888;
                                }
                                fVar39 = (float)(int)(fVar39 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40888:
                                fVar39 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar39 = fVar38;
                                }
                              }
                              else {
                                fVar39 = (float)(int)(fVar39 + -0.5);
                              }
                              fVar38 = fVar29;
                              if (1.0 < fVar29) {
                                fVar38 = 1.0;
                              }
                              fVar38 = fVar38 * 255.0;
                              if (fVar29 < 0.0) {
                                fVar38 = fVar36;
                              }
                              dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                              if (0.0 <= fVar38) {
                                if (dVar32 == 0.5) {
                                  fVar29 = 1.0;
                                  goto LAB_00e40a4c;
                                }
                                fVar38 = (float)(int)(fVar38 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar29 = -1.0;
LAB_00e40a4c:
                                fVar38 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar38 = (float)_fStack0000000000000070 + fVar29;
                                }
                              }
                              else {
                                fVar38 = (float)(int)(fVar38 + -0.5);
                              }
                              *puVar21 = (int)fVar28 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                                         ((int)fVar39 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                              lVar18 = *unaff_x26;
                              if (lVar18 == 0) break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_00e44400;
                              lVar18 = lVar18 + (long)(int)uVar23 * 4;
                            }
                            goto LAB_00e443fc;
                          }
                          goto LAB_00e44400;
                        }
                      }
                      goto LAB_00e443fc;
                    }
                    goto LAB_00e44400;
                  }
                }
                goto LAB_00e443fc;
              }
              goto LAB_00e44400;
            }
          }
          goto LAB_00e443fc;
        }
        goto LAB_00e44400;
      }
    }
  }
  goto LAB_00e443fc;
LAB_00e442cc:
  do {
    if (unaff_x19[9] == 0) goto LAB_00e443fc;
    FUN_0132138c(unaff_x19[9],uVar12 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar7);
    unaff_x19[0xca] = (long)_fStack0000000000000070;
    if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
    lVar14 = unaff_x19[0xcb];
    uVar30 = FUN_00e58a1c(_fStack0000000000000070,0);
    if (lVar14 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar14 + 0x18) <= uVar12) {
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    puVar2 = (undefined4 *)(lVar14 + lVar18);
    *puVar2 = uVar30;
    puVar2[1] = (int)uVar11;
    puVar2[2] = (int)uVar35;
    lVar14 = unaff_x19[0xca];
    if ((lVar14 == 0) || (lVar15 = unaff_x19[0xcc], lVar15 == 0)) goto LAB_00e443fc;
    if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_00e44400;
    uVar30 = *(undefined4 *)(lVar14 + 0x4c);
    uVar12 = uVar12 + 1;
    puVar19 = (undefined8 *)(lVar15 + lVar18);
    lVar18 = lVar18 + 0xc;
    *puVar19 = *(undefined8 *)(lVar14 + 0x44);
    *(undefined4 *)(puVar19 + 1) = uVar30;
  } while (uVar22 != uVar12);
LAB_00e44358:
  if (unaff_x19[0x58] != 0) {
    FUN_013e0924(unaff_x19[0x58],*in_stack_00000038,*plVar10,*plVar1,
                 *(undefined8 *)StringLiteral_225);
  }
  lVar18 = unaff_x19[0x59];
  if (lVar18 != 0) {
    (**(code **)(lVar18 + 0x18))
              (*(undefined8 *)(lVar18 + 0x40),*in_stack_00000038,*plVar10,*plVar1,
               *(undefined8 *)(lVar18 + 0x28));
  }
  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
LAB_00e443b0:
  lVar18 = __start_il2cpp();
  if (lVar18 != 0) {
    if ((*(char *)(lVar18 + 0x109) != '\0') || (*(char *)((long)unaff_x19 + 0xa9) != '\0')) {
      *(undefined1 *)(unaff_x19 + 0x2e) = 0;
    }
    return;
  }
LAB_00e443fc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


