/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$OnEnable
ENTRY_POINT: 06da36c8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__OnEnable
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong in_x9;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 uVar11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  float fVar12;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
code_r0x06da36c8:
  if (in_x9 != 0) {
    piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == param_3) {
        puVar4 = (undefined8 *)(param_1 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
        goto LAB_06da370c;
      }
      in_x9 = in_x9 - 1;
      piVar10 = piVar10 + 4;
    } while (in_x9 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da370c:
  iVar2 = (*(code *)*puVar4)();
  if (unaff_x25 == 0) goto LAB_06da4f18;
  if (*(uint *)(unaff_x25 + 0x18) <= unaff_x24) {
LAB_06da4f14:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  *(bool *)(unaff_x25 + unaff_x24 + 0x20) = iVar2 == 1;
  lVar6 = *(long *)(unaff_x20 + 0x118);
  if (lVar6 == 0) goto LAB_06da4f18;
  if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
  lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
  if (lVar6 == 0) goto LAB_06da4f18;
  if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
  lVar7 = *unaff_x19;
  lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x21) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
        goto LAB_06da37c0;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da37c0:
  uVar3 = (*(code *)*puVar4)();
  if (lVar6 == 0) goto LAB_06da4f18;
  if (*(int *)(lVar6 + 0x18) == 0) goto LAB_06da4f14;
  *(undefined4 *)(lVar6 + 0x20) = uVar3;
  lVar6 = *(long *)(unaff_x20 + 0x118);
  if (lVar6 == 0) goto LAB_06da4f18;
  if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
  lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
  if (lVar6 == 0) goto LAB_06da4f18;
  if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
  lVar7 = *unaff_x19;
  lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x21) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
        goto LAB_06da3864;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3864:
  uVar3 = (*(code *)*puVar4)();
  if (lVar6 == 0) goto LAB_06da4f18;
  if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_06da4f14;
  *(undefined4 *)(lVar6 + 0x24) = uVar3;
  lVar6 = *(long *)(unaff_x20 + 0x118);
  if (lVar6 == 0) goto LAB_06da4f18;
  if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
  lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
  if (lVar6 == 0) goto LAB_06da4f18;
  if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
  lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
  if (lVar6 == 0) goto LAB_06da4f18;
  if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_06da4f14;
  *(undefined4 *)(lVar6 + 0x28) = 0;
  lVar6 = *(long *)(unaff_x20 + 0x110);
  if (lVar6 == 0) goto LAB_06da4f18;
  if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
  lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
  if (lVar6 == 0) goto LAB_06da4f18;
  if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
  if (*(int *)(lVar6 + unaff_x24 * 4 + 0x20) == 2) {
    lVar6 = *(long *)(unaff_x20 + 0x108);
    if (lVar6 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
    if (*(char *)(lVar6 + unaff_x24 + 0x20) != '\0') goto LAB_06da3944;
    lVar6 = *(long *)(unaff_x20 + 0x128);
    if (lVar6 == 0) goto LAB_06da4f18;
    uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
    if (uVar8 <= unaff_x22) goto LAB_06da4f14;
    lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_06da4f18;
    uVar9 = (ulong)*(uint *)(lVar6 + 0x18);
    if (uVar9 <= unaff_x24) goto LAB_06da4f14;
    uVar3 = 0xc;
    uVar11 = 8;
  }
  else {
LAB_06da3944:
    lVar6 = *(long *)(unaff_x20 + 0x128);
    if (lVar6 == 0) goto LAB_06da4f18;
    uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
    if (uVar8 <= unaff_x22) goto LAB_06da4f14;
    lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_06da4f18;
    uVar9 = (ulong)*(uint *)(lVar6 + 0x18);
    if (uVar9 <= unaff_x24) goto LAB_06da4f14;
    uVar3 = 0xd;
    uVar11 = 7;
  }
  *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar11;
  lVar6 = *(long *)(unaff_x20 + 0x130);
  if (lVar6 == 0) goto LAB_06da4f18;
  if (((*(uint *)(lVar6 + 0x18) <= unaff_x22) || (uVar8 <= unaff_x22)) || (uVar9 <= unaff_x24))
  goto LAB_06da4f14;
  lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
  if (lVar6 != 0) {
    if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
    *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar3;
    lVar6 = *(long *)(unaff_x20 + 0x120);
    if (lVar6 != 0) {
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
      if (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
        lVar7 = *unaff_x19;
        lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
              goto LAB_06da3a48;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3a48:
        iVar2 = (*(code *)*puVar4)();
        if (lVar6 != 0) {
          if (*(int *)(lVar6 + 0x18) == 0) goto LAB_06da4f14;
          *(float *)(lVar6 + 0x20) = (float)iVar2 * unaff_s10;
          lVar6 = *(long *)(unaff_x20 + 0x120);
          if (lVar6 != 0) {
            if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
            lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
            if (lVar6 != 0) {
              if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
              lVar7 = *unaff_x19;
              lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x21) {
                    puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                    goto LAB_06da3af4;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3af4:
              iVar2 = (*(code *)*puVar4)();
              if (lVar6 != 0) {
                if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_06da4f14;
                *(float *)(lVar6 + 0x24) = (float)iVar2 * unaff_s10;
                lVar6 = *(long *)(unaff_x20 + 0x120);
                if (lVar6 != 0) {
                  if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
                  lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                  if (lVar6 != 0) {
                    if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
                    lVar7 = *unaff_x19;
                    lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
                    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    if (uVar8 != 0) {
                      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar10 + -2) == *unaff_x21) {
                          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                          goto LAB_06da3ba4;
                        }
                        uVar8 = uVar8 - 1;
                        piVar10 = piVar10 + 4;
                      } while (uVar8 != 0);
                    }
                    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3ba4:
                    iVar2 = (*(code *)*puVar4)();
                    if (lVar6 != 0) {
                      if (2 < *(uint *)(lVar6 + 0x18)) {
                        fVar12 = (float)iVar2 * unaff_s10;
                        do {
                          *(float *)(lVar6 + 0x28) = fVar12;
                          lVar6 = *(long *)(unaff_x20 + 0x138);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar10 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da3f78;
                              }
                              uVar8 = uVar8 - 1;
                              piVar10 = piVar10 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3f78:
                          uVar3 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                          *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar3;
                          lVar6 = *(long *)(unaff_x20 + 0x140);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar10 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da400c;
                              }
                              uVar8 = uVar8 - 1;
                              piVar10 = piVar10 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da400c:
                          iVar2 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                          *(float *)(lVar6 + unaff_x24 * 4 + 0x20) =
                               ((float)iVar2 + unaff_s8) * unaff_s9;
                          lVar6 = *(long *)(unaff_x20 + 0x148);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar10 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da40ac;
                              }
                              uVar8 = uVar8 - 1;
                              piVar10 = piVar10 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da40ac:
                          uVar3 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                          *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar3;
                          unaff_x24 = unaff_x24 + 1;
                          if ((long)*(int *)(unaff_x20 + 200) <= (long)unaff_x24) {
                            do {
                              unaff_x22 = unaff_x22 + 1;
                              if (unaff_x22 == 2) {
                                return;
                              }
                            } while (*(int *)(unaff_x20 + 200) < 1);
                            unaff_x24 = 0;
                          }
                          lVar6 = *(long *)(unaff_x20 + 0xe0);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar10 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da32ac;
                              }
                              uVar8 = uVar8 - 1;
                              piVar10 = piVar10 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da32ac:
                          uVar3 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                          *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar3;
                          lVar6 = *(long *)(unaff_x20 + 0xe8);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar10 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da3340;
                              }
                              uVar8 = uVar8 - 1;
                              piVar10 = piVar10 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3340:
                          uVar3 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                          *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar3;
                          lVar6 = *(long *)(unaff_x20 + 0xf0);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          lVar7 = *unaff_x23;
                          lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                          if (*(int *)(lVar7 + 0xe0) == 0) {
                            thunk_FUN_03cd7500();
                            lVar7 = *unaff_x23;
                          }
                          lVar5 = *unaff_x19;
                          lVar7 = **(long **)(lVar7 + 0xb8);
                          uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
                          if (uVar8 != 0) {
                            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar10 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da33f0;
                              }
                              uVar8 = uVar8 - 1;
                              piVar10 = piVar10 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da33f0:
                          uVar1 = (*(code *)*puVar4)();
                          if (lVar7 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar7 + 0x18) <= uVar1) break;
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                          *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) =
                               *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20);
                          lVar6 = *(long *)(unaff_x20 + 0xf8);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar10 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da349c;
                              }
                              uVar8 = uVar8 - 1;
                              piVar10 = piVar10 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da349c:
                          uVar3 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                          *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar3;
                          lVar6 = *(long *)(unaff_x20 + 0x100);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar10 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da3530;
                              }
                              uVar8 = uVar8 - 1;
                              piVar10 = piVar10 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3530:
                          iVar2 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                          *(bool *)(lVar6 + unaff_x24 + 0x20) = iVar2 == 1;
                          lVar6 = *(long *)(unaff_x20 + 0x100);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                          if (*(char *)(lVar6 + unaff_x24 + 0x20) != '\0') goto code_r0x06da3598;
                          lVar6 = *(long *)(unaff_x20 + 0x118);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar10 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da3be0;
                              }
                              uVar8 = uVar8 - 1;
                              piVar10 = piVar10 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3be0:
                          uVar3 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(int *)(lVar6 + 0x18) == 0) break;
                          *(undefined4 *)(lVar6 + 0x20) = uVar3;
                          lVar6 = *(long *)(unaff_x20 + 0x118);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar10 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da3c84;
                              }
                              uVar8 = uVar8 - 1;
                              piVar10 = piVar10 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3c84:
                          uVar3 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) < 2) break;
                          *(undefined4 *)(lVar6 + 0x24) = uVar3;
                          lVar6 = *(long *)(unaff_x20 + 0x118);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar10 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da3d2c;
                              }
                              uVar8 = uVar8 - 1;
                              piVar10 = piVar10 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3d2c:
                          uVar3 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) < 3) break;
                          *(undefined4 *)(lVar6 + 0x28) = uVar3;
                          lVar6 = *(long *)(unaff_x20 + 0x128);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar10 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da3dbc;
                              }
                              uVar8 = uVar8 - 1;
                              piVar10 = piVar10 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3dbc:
                          uVar3 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                          *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar3;
                          lVar6 = *(long *)(unaff_x20 + 0x130);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar10 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da3e50;
                              }
                              uVar8 = uVar8 - 1;
                              piVar10 = piVar10 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3e50:
                          uVar3 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                          *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar3;
                          lVar6 = *(long *)(unaff_x20 + 0x110);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                          *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = 0;
                          lVar6 = *(long *)(unaff_x20 + 0x120);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
                          lVar6 = *(long *)(lVar6 + unaff_x24 * 8 + 0x20);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          uVar1 = *(uint *)(lVar6 + 0x18);
                          if ((uVar1 == 0) || (*(undefined4 *)(lVar6 + 0x20) = 0, uVar1 == 1))
                          break;
                          fVar12 = 0.0;
                          *(undefined4 *)(lVar6 + 0x24) = 0;
                          if (uVar1 < 3) break;
                        } while( true );
                      }
                      goto LAB_06da4f14;
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
  goto LAB_06da4f18;
code_r0x06da3598:
  lVar6 = *(long *)(unaff_x20 + 0x110);
  if (lVar6 != 0) {
    if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    lVar7 = *unaff_x19;
    lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_06da3678;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da3678:
    uVar3 = (*(code *)*puVar4)();
    if (lVar6 != 0) {
      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06da4f14;
      *(undefined4 *)(lVar6 + unaff_x24 * 4 + 0x20) = uVar3;
      lVar6 = *(long *)(unaff_x20 + 0x108);
      if (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
        param_1 = *unaff_x19;
        unaff_x25 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
        param_3 = *unaff_x21;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        goto code_r0x06da36c8;
      }
    }
  }
LAB_06da4f18:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


