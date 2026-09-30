/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$DrawLine
ENTRY_POINT: 06da46b0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawLine
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  undefined4 uVar10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  float fVar11;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
code_r0x06da46b0:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_06da46a4;
LAB_06da46bc:
  puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da46dc:
  uVar2 = (*(code *)*puVar4)();
  if (unaff_x24 == 0) goto LAB_06da4f18;
  if (*(int *)(unaff_x24 + 0x18) == 0) goto LAB_06da4f14;
  *(undefined4 *)(unaff_x24 + 0x20) = uVar2;
  lVar6 = *(long *)(unaff_x20 + 0x118);
  if (lVar6 == 0) goto LAB_06da4f18;
  if (*(int *)(lVar6 + 0x18) == 0) goto LAB_06da4f14;
  lVar6 = *(long *)(lVar6 + 0x20);
  if (lVar6 == 0) goto LAB_06da4f18;
  if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
  lVar7 = *unaff_x19;
  lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x21) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
        goto LAB_06da4778;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4778:
  uVar2 = (*(code *)*puVar4)();
  if (lVar6 == 0) goto LAB_06da4f18;
  if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_06da4f14;
  *(undefined4 *)(lVar6 + 0x24) = uVar2;
  lVar6 = *(long *)(unaff_x20 + 0x118);
  if (lVar6 == 0) goto LAB_06da4f18;
  if (*(int *)(lVar6 + 0x18) == 0) goto LAB_06da4f14;
  lVar6 = *(long *)(lVar6 + 0x20);
  if (lVar6 == 0) goto LAB_06da4f18;
  if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
  lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
  if (lVar6 == 0) goto LAB_06da4f18;
  if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_06da4f14;
  *(undefined4 *)(lVar6 + 0x28) = 0;
  lVar6 = *(long *)(unaff_x20 + 0x110);
  if (lVar6 == 0) goto LAB_06da4f18;
  if (*(int *)(lVar6 + 0x18) == 0) goto LAB_06da4f14;
  lVar6 = *(long *)(lVar6 + 0x20);
  if (lVar6 == 0) goto LAB_06da4f18;
  if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
  if (*(int *)(lVar6 + unaff_x22 * 4 + 0x20) == 2) {
    lVar6 = *(long *)(unaff_x20 + 0x108);
    if (lVar6 == 0) goto LAB_06da4f18;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_06da4f14;
    lVar6 = *(long *)(lVar6 + 0x20);
    if (lVar6 == 0) goto LAB_06da4f18;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
    if (*(char *)(lVar6 + unaff_x22 + 0x20) != '\0') goto LAB_06da4840;
    lVar6 = *(long *)(unaff_x20 + 0x128);
    if (lVar6 == 0) goto LAB_06da4f18;
    iVar3 = (int)*(undefined8 *)(lVar6 + 0x18);
    if (iVar3 == 0) goto LAB_06da4f14;
    lVar6 = *(long *)(lVar6 + 0x20);
    if (lVar6 == 0) goto LAB_06da4f18;
    uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
    if (uVar8 <= unaff_x22) goto LAB_06da4f14;
    uVar2 = 0xc;
    uVar10 = 8;
  }
  else {
LAB_06da4840:
    lVar6 = *(long *)(unaff_x20 + 0x128);
    if (lVar6 == 0) goto LAB_06da4f18;
    iVar3 = (int)*(undefined8 *)(lVar6 + 0x18);
    if (iVar3 == 0) goto LAB_06da4f14;
    lVar6 = *(long *)(lVar6 + 0x20);
    if (lVar6 == 0) goto LAB_06da4f18;
    uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
    if (uVar8 <= unaff_x22) goto LAB_06da4f14;
    uVar2 = 0xd;
    uVar10 = 7;
  }
  *(undefined4 *)(lVar6 + unaff_x22 * 4 + 0x20) = uVar10;
  lVar6 = *(long *)(unaff_x20 + 0x130);
  if (lVar6 == 0) goto LAB_06da4f18;
  if (((*(int *)(lVar6 + 0x18) != 0) && (iVar3 != 0)) && (unaff_x22 < uVar8)) {
    lVar6 = *(long *)(lVar6 + 0x20);
    if (lVar6 == 0) goto LAB_06da4f18;
    if (unaff_x22 < *(uint *)(lVar6 + 0x18)) {
      *(undefined4 *)(lVar6 + unaff_x22 * 4 + 0x20) = uVar2;
      lVar6 = *(long *)(unaff_x20 + 0x120);
      if (lVar6 == 0) goto LAB_06da4f18;
      if (*(int *)(lVar6 + 0x18) != 0) {
        lVar6 = *(long *)(lVar6 + 0x20);
        if (lVar6 == 0) goto LAB_06da4f18;
        if (unaff_x22 < *(uint *)(lVar6 + 0x18)) {
          lVar7 = *unaff_x19;
          lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x21) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                goto LAB_06da4928;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4928:
          iVar3 = (*(code *)*puVar4)();
          if (lVar6 == 0) goto LAB_06da4f18;
          if (*(int *)(lVar6 + 0x18) != 0) {
            *(float *)(lVar6 + 0x20) = (float)iVar3 * unaff_s10;
            lVar6 = *(long *)(unaff_x20 + 0x120);
            if (lVar6 == 0) goto LAB_06da4f18;
            if (*(int *)(lVar6 + 0x18) != 0) {
              lVar6 = *(long *)(lVar6 + 0x20);
              if (lVar6 == 0) goto LAB_06da4f18;
              if (unaff_x22 < *(uint *)(lVar6 + 0x18)) {
                lVar7 = *unaff_x19;
                lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *unaff_x21) {
                      puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                      goto LAB_06da49cc;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da49cc:
                iVar3 = (*(code *)*puVar4)();
                if (lVar6 == 0) goto LAB_06da4f18;
                if (1 < *(uint *)(lVar6 + 0x18)) {
                  *(float *)(lVar6 + 0x24) = (float)iVar3 * unaff_s10;
                  lVar6 = *(long *)(unaff_x20 + 0x120);
                  if (lVar6 == 0) goto LAB_06da4f18;
                  if (*(int *)(lVar6 + 0x18) != 0) {
                    lVar6 = *(long *)(lVar6 + 0x20);
                    if (lVar6 == 0) goto LAB_06da4f18;
                    if (unaff_x22 < *(uint *)(lVar6 + 0x18)) {
                      lVar7 = *unaff_x19;
                      lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                      if (uVar8 != 0) {
                        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar9 + -2) == *unaff_x21) {
                            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                            goto LAB_06da4a74;
                          }
                          uVar8 = uVar8 - 1;
                          piVar9 = piVar9 + 4;
                        } while (uVar8 != 0);
                      }
                      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4a74:
                      iVar3 = (*(code *)*puVar4)();
                      if (lVar6 == 0) goto LAB_06da4f18;
                      if (2 < *(uint *)(lVar6 + 0x18)) {
                        fVar11 = (float)iVar3 * unaff_s10;
                        do {
                          *(float *)(lVar6 + 0x28) = fVar11;
                          lVar6 = *(long *)(unaff_x20 + 0x140);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(int *)(lVar6 + 0x18) == 0) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da4e10;
                              }
                              uVar8 = uVar8 - 1;
                              piVar9 = piVar9 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4e10:
                          iVar3 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          *(float *)(lVar6 + unaff_x22 * 4 + 0x20) =
                               ((float)iVar3 + unaff_s8) * unaff_s9;
                          lVar6 = *(long *)(unaff_x20 + 0x148);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(int *)(lVar6 + 0x18) == 0) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da4ea8;
                              }
                              uVar8 = uVar8 - 1;
                              piVar9 = piVar9 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4ea8:
                          uVar2 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          *(undefined4 *)(lVar6 + unaff_x22 * 4 + 0x20) = uVar2;
                          unaff_x22 = unaff_x22 + 1;
                          if ((long)*(int *)(unaff_x20 + 200) <= (long)unaff_x22) {
                            return;
                          }
                          lVar6 = *(long *)(unaff_x20 + 0xe0);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(int *)(lVar6 + 0x18) == 0) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da4210;
                              }
                              uVar8 = uVar8 - 1;
                              piVar9 = piVar9 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4210:
                          uVar2 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          *(undefined4 *)(lVar6 + unaff_x22 * 4 + 0x20) = uVar2;
                          lVar6 = *(long *)(unaff_x20 + 0xe8);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(int *)(lVar6 + 0x18) == 0) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da429c;
                              }
                              uVar8 = uVar8 - 1;
                              piVar9 = piVar9 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da429c:
                          uVar2 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          *(undefined4 *)(lVar6 + unaff_x22 * 4 + 0x20) = uVar2;
                          lVar6 = *(long *)(unaff_x20 + 0xf0);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(int *)(lVar6 + 0x18) == 0) break;
                          lVar7 = *unaff_x23;
                          lVar6 = *(long *)(lVar6 + 0x20);
                          if (*(int *)(lVar7 + 0xe0) == 0) {
                            thunk_FUN_03cd7500();
                            lVar7 = *unaff_x23;
                          }
                          lVar5 = *unaff_x19;
                          lVar7 = **(long **)(lVar7 + 0xb8);
                          uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
                          if (uVar8 != 0) {
                            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar5 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da4344;
                              }
                              uVar8 = uVar8 - 1;
                              piVar9 = piVar9 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4344:
                          uVar1 = (*(code *)*puVar4)();
                          if (lVar7 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar7 + 0x18) <= uVar1) break;
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          *(undefined4 *)(lVar6 + unaff_x22 * 4 + 0x20) =
                               *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20);
                          lVar6 = *(long *)(unaff_x20 + 0xf8);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(int *)(lVar6 + 0x18) == 0) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da43e8;
                              }
                              uVar8 = uVar8 - 1;
                              piVar9 = piVar9 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da43e8:
                          uVar2 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          *(undefined4 *)(lVar6 + unaff_x22 * 4 + 0x20) = uVar2;
                          lVar6 = *(long *)(unaff_x20 + 0x100);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(int *)(lVar6 + 0x18) == 0) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da4474;
                              }
                              uVar8 = uVar8 - 1;
                              piVar9 = piVar9 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4474:
                          iVar3 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          *(bool *)(lVar6 + unaff_x22 + 0x20) = iVar3 == 1;
                          lVar6 = *(long *)(unaff_x20 + 0x100);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(int *)(lVar6 + 0x18) == 0) break;
                          lVar6 = *(long *)(lVar6 + 0x20);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          if (*(char *)(lVar6 + unaff_x22 + 0x20) != '\0') goto code_r0x06da44d4;
                          lVar6 = *(long *)(unaff_x20 + 0x118);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(int *)(lVar6 + 0x18) == 0) break;
                          lVar6 = *(long *)(lVar6 + 0x20);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                goto FUN_06da4ab0;
                              }
                              uVar8 = uVar8 - 1;
                              piVar9 = piVar9 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
FUN_06da4ab0:
                          uVar2 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(int *)(lVar6 + 0x18) == 0) break;
                          *(undefined4 *)(lVar6 + 0x20) = uVar2;
                          lVar6 = *(long *)(unaff_x20 + 0x118);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(int *)(lVar6 + 0x18) == 0) break;
                          lVar6 = *(long *)(lVar6 + 0x20);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da4b4c;
                              }
                              uVar8 = uVar8 - 1;
                              piVar9 = piVar9 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4b4c:
                          uVar2 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) < 2) break;
                          *(undefined4 *)(lVar6 + 0x24) = uVar2;
                          lVar6 = *(long *)(unaff_x20 + 0x118);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(int *)(lVar6 + 0x18) == 0) break;
                          lVar6 = *(long *)(lVar6 + 0x20);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da4bec;
                              }
                              uVar8 = uVar8 - 1;
                              piVar9 = piVar9 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4bec:
                          uVar2 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) < 3) break;
                          *(undefined4 *)(lVar6 + 0x28) = uVar2;
                          lVar6 = *(long *)(unaff_x20 + 0x128);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(int *)(lVar6 + 0x18) == 0) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da4c74;
                              }
                              uVar8 = uVar8 - 1;
                              piVar9 = piVar9 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4c74:
                          uVar2 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          *(undefined4 *)(lVar6 + unaff_x22 * 4 + 0x20) = uVar2;
                          lVar6 = *(long *)(unaff_x20 + 0x130);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(int *)(lVar6 + 0x18) == 0) break;
                          lVar7 = *unaff_x19;
                          lVar6 = *(long *)(lVar6 + 0x20);
                          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar8 != 0) {
                            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar9 + -2) == *unaff_x21) {
                                puVar4 = (undefined8 *)
                                         (lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
                                goto LAB_06da4d00;
                              }
                              uVar8 = uVar8 - 1;
                              piVar9 = piVar9 + 4;
                            } while (uVar8 != 0);
                          }
                          puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4d00:
                          uVar2 = (*(code *)*puVar4)();
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          *(undefined4 *)(lVar6 + unaff_x22 * 4 + 0x20) = uVar2;
                          lVar6 = *(long *)(unaff_x20 + 0x110);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(int *)(lVar6 + 0x18) == 0) break;
                          lVar6 = *(long *)(lVar6 + 0x20);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          *(undefined4 *)(lVar6 + unaff_x22 * 4 + 0x20) = 0;
                          lVar6 = *(long *)(unaff_x20 + 0x120);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(int *)(lVar6 + 0x18) == 0) break;
                          lVar6 = *(long *)(lVar6 + 0x20);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) break;
                          lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                          if (lVar6 == 0) goto LAB_06da4f18;
                          uVar1 = *(uint *)(lVar6 + 0x18);
                          if ((uVar1 == 0) || (*(undefined4 *)(lVar6 + 0x20) = 0, uVar1 == 1))
                          break;
                          fVar11 = 0.0;
                          *(undefined4 *)(lVar6 + 0x24) = 0;
                          if (uVar1 < 3) break;
                        } while( true );
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
  goto LAB_06da4f14;
code_r0x06da44d4:
  lVar6 = *(long *)(unaff_x20 + 0x110);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_06da4f14:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar7 = *unaff_x19;
    lVar6 = *(long *)(lVar6 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_06da45a4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da45a4:
    uVar2 = (*(code *)*puVar4)();
    if (lVar6 != 0) {
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
      *(undefined4 *)(lVar6 + unaff_x22 * 4 + 0x20) = uVar2;
      lVar6 = *(long *)(unaff_x20 + 0x108);
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) == 0) goto LAB_06da4f14;
        lVar7 = *unaff_x19;
        lVar6 = *(long *)(lVar6 + 0x20);
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
              goto LAB_06da4630;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da4630:
        iVar3 = (*(code *)*puVar4)();
        if (lVar6 != 0) {
          if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_06da4f14;
          *(bool *)(lVar6 + unaff_x22 + 0x20) = iVar3 == 1;
          lVar6 = *(long *)(unaff_x20 + 0x118);
          if (lVar6 != 0) {
            if (*(int *)(lVar6 + 0x18) == 0) goto LAB_06da4f14;
            lVar6 = *(long *)(lVar6 + 0x20);
            if (lVar6 != 0) {
              if (unaff_x22 < *(uint *)(lVar6 + 0x18)) {
                param_1 = *unaff_x19;
                unaff_x24 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
                param_3 = *unaff_x21;
                in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
                if (in_x9 == 0) goto LAB_06da46bc;
                in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_06da46a4:
                if (*(long *)(in_x10 + -2) != param_3) goto code_r0x06da46b0;
                puVar4 = (undefined8 *)(param_1 + (long)(*in_x10 + 0xe) * 0x10 + 0x138);
                goto LAB_06da46dc;
              }
              goto LAB_06da4f14;
            }
          }
        }
      }
    }
  }
LAB_06da4f18:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


