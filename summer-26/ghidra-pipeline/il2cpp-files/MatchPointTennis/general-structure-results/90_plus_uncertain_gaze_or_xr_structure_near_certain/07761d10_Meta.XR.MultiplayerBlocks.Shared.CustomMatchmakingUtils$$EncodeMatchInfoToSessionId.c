/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmakingUtils$$EncodeMatchInfoToSessionId
ENTRY_POINT: 07761d10
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_MultiplayerBlocks_Shared_CustomMatchmakingUtils__EncodeMatchInfoToSessionId(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint unaff_w22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined4 unaff_w25;
  ulong uVar13;
  undefined4 unaff_w26;
  undefined8 *unaff_x27;
  long unaff_x28;
  float fVar14;
  float fVar15;
  float unaff_s8;
  float fVar16;
  undefined1 uStack000000000000000c;
  undefined8 in_stack_00000010;
  uint uStack0000000000000018;
  uint uStack000000000000001c;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f32c18);
  FUN_04447ba8(PTR_DAT_09f32c20);
  FUN_04447ba8(PTR_DAT_09f32c28);
  *(undefined1 *)(unaff_x28 + 0x2c6) = 1;
  in_stack_00000010 = 0;
  _uStack0000000000000018 = 0;
  uStack000000000000000c = 0;
  lVar9 = thunk_FUN_0448520c(*unaff_x23);
  FUN_07762244(lVar9,1);
  lVar10 = thunk_FUN_0448520c(*unaff_x27);
  FUN_07a80df4(lVar10,0);
  *(undefined8 *)(lVar10 + 0x10) = 0;
  *(undefined4 *)(lVar10 + 0x18) = unaff_w26;
  *(undefined4 *)(lVar10 + 0x1c) = unaff_w25;
  if (lVar9 != 0) {
    *(long *)(lVar9 + 0x20) = lVar10;
    thunk_FUN_044bb4b4((long *)(lVar9 + 0x20),lVar10);
    if (unaff_x24 != 0) {
      if (0 < (int)*(ulong *)(unaff_x24 + 0x18)) {
        uVar13 = 0;
        uVar12 = *(ulong *)(unaff_x24 + 0x18) & 0xffffffff;
        do {
          if ((uVar12 & 0xffffffff) <= uVar13) {
LAB_0776223c:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          lVar10 = FUN_077622bc(lVar9,*(undefined8 *)(unaff_x24 + 0x20 + uVar13 * 8),0);
          if (lVar10 == 0) {
            return 0;
          }
          uVar12 = *(ulong *)(unaff_x24 + 0x18);
          if (uVar13 == (int)uVar12 - 1) {
            _uStack0000000000000018 = 0;
            FUN_07762688();
            uVar7 = uStack0000000000000018;
            uVar8 = uStack000000000000001c;
            if (*(char *)(unaff_x20 + 0x14) == '\0') {
              uVar5 = uStack0000000000000018;
              uVar4 = uStack000000000000001c;
              if ((int)uStack0000000000000018 <= (int)uStack000000000000001c) {
                uVar5 = uStack000000000000001c;
                uVar4 = uStack0000000000000018;
              }
              fVar15 = (float)(int)uVar4 / (float)(int)uVar5;
              fVar14 = 1.0 - ((float)(int)(uStack0000000000000018 * uStack000000000000001c) -
                             unaff_s8) /
                             (float)(int)(uStack0000000000000018 * uStack000000000000001c);
              bVar1 = (int)uStack000000000000001c <= (int)unaff_w22 &&
                      (int)uStack0000000000000018 <= (int)unaff_w21;
              in_stack_00000010 = CONCAT44(fVar14,fVar15);
              uVar5 = uStack0000000000000018;
              uVar4 = uStack000000000000001c;
            }
            else {
              fVar16 = (float)(int)uStack000000000000001c;
              fVar14 = logf(fVar16);
              fVar15 = DAT_01c7661c;
              fVar14 = exp2f((float)(int)(fVar14 / DAT_01c7661c));
              uVar3 = 0x80000000;
              if (fVar14 != INFINITY) {
                uVar3 = (int)fVar14;
              }
              if (uVar3 < 3) {
                uVar3 = 2;
              }
              if ((int)unaff_w22 <= (int)uVar3) {
                uVar3 = unaff_w22;
              }
              fVar14 = logf((float)(int)uVar7);
              fVar15 = exp2f((float)(int)(fVar14 / fVar15));
              uVar4 = 0x80000000;
              if (fVar15 != INFINITY) {
                uVar4 = (int)fVar15;
              }
              if (uVar4 < 3) {
                uVar4 = 2;
              }
              if ((int)unaff_w21 <= (int)uVar4) {
                uVar4 = unaff_w21;
              }
              uVar2 = uVar3;
              if ((int)uVar3 < 0) {
                uVar2 = uVar3 + 1;
              }
              uVar5 = (int)uVar2 >> 1;
              if ((int)uVar2 >> 1 <= (int)uVar4) {
                uVar5 = uVar4;
              }
              uVar2 = uVar5;
              if ((int)uVar5 < 0) {
                uVar2 = uVar5 + 1;
              }
              fVar15 = 1.0;
              fVar16 = fVar16 / (float)(int)unaff_w22;
              uVar4 = (int)uVar2 >> 1;
              if ((int)uVar2 >> 1 <= (int)uVar3) {
                uVar4 = uVar3;
              }
              if (fVar16 <= 1.0) {
                fVar16 = 1.0;
              }
              fVar14 = (float)(int)uVar7 / (float)(int)unaff_w21;
              if (fVar14 <= 1.0) {
                fVar14 = 1.0;
              }
              fVar14 = fVar14 * fVar16 * (float)(int)uVar4 * (float)(int)uVar5;
              bVar1 = (int)uVar8 <= (int)unaff_w22 && (int)uVar7 <= (int)unaff_w21;
              fVar14 = 1.0 - (fVar14 - unaff_s8) / fVar14;
              in_stack_00000010 = CONCAT44(fVar14,0x3f800000);
            }
            uStack000000000000000c = bVar1;
            if (unaff_x19 != 0) {
              *(long *)(unaff_x19 + 0x20) = lVar9;
              *(uint *)(unaff_x19 + 0x10) = uVar8;
              *(uint *)(unaff_x19 + 0x14) = uVar7;
              *(uint *)(unaff_x19 + 0x18) = uVar4;
              *(uint *)(unaff_x19 + 0x1c) = uVar5;
              thunk_FUN_044bb4b4((long *)(unaff_x19 + 0x20),lVar9);
              *(bool *)(unaff_x19 + 0x28) = bVar1;
              *(float *)(unaff_x19 + 0x2c) = fVar14;
              *(float *)(unaff_x19 + 0x30) = fVar15;
              if (*(int *)(unaff_x20 + 0x10) < 4) {
                return 1;
              }
              lVar9 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,10);
              if (lVar9 != 0) {
                if (*(int *)(lVar9 + 0x18) != 0) {
                  *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_09f32c28;
                  thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x20));
                  uVar11 = FUN_07a3b850((long)&stack0x00000018 + 4,0);
                  if (1 < *(uint *)(lVar9 + 0x18)) {
                    *(undefined8 *)(lVar9 + 0x28) = uVar11;
                    thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x28),uVar11);
                    if (2 < *(uint *)(lVar9 + 0x18)) {
                      *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)PTR_DAT_09f307b8;
                      thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x30));
                      uVar11 = FUN_07a3b850(&stack0x00000018,0);
                      if (3 < *(uint *)(lVar9 + 0x18)) {
                        *(undefined8 *)(lVar9 + 0x38) = uVar11;
                        thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x38),uVar11);
                        if (4 < *(uint *)(lVar9 + 0x18)) {
                          *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)PTR_DAT_09f32c20;
                          thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x40));
                          uVar11 = FUN_07a5081c((long)&stack0x00000010 + 4,0);
                          if (5 < *(uint *)(lVar9 + 0x18)) {
                            *(undefined8 *)(lVar9 + 0x48) = uVar11;
                            thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x48),uVar11);
                            if (6 < *(uint *)(lVar9 + 0x18)) {
                              *(undefined8 *)(lVar9 + 0x50) = *(undefined8 *)PTR_DAT_09f32c08;
                              thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x50));
                              uVar11 = FUN_07a5081c(&stack0x00000010,0);
                              if (7 < *(uint *)(lVar9 + 0x18)) {
                                *(undefined8 *)(lVar9 + 0x58) = uVar11;
                                thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x58),uVar11);
                                if (8 < *(uint *)(lVar9 + 0x18)) {
                                  *(undefined8 *)(lVar9 + 0x60) = *(undefined8 *)PTR_DAT_09f32c18;
                                  thunk_FUN_044bb4b4();
                                  if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x28) + 0xe4) == 0) {
                                    thunk_FUN_044a54b4();
                                  }
                                  uVar11 = FUN_079a04dc(&stack0x0000000c,0);
                                  if (9 < *(uint *)(lVar9 + 0x18)) {
                                    *(undefined8 *)(lVar9 + 0x68) = uVar11;
                                    thunk_FUN_044bb4b4();
                                    uVar11 = FUN_078b57fc(lVar9,0);
                                    lVar10 = *(long *)PTR_DAT_09f22e40;
                                    lVar9 = *(long *)(lVar10 + 0x38);
                                    if (lVar9 == 0) {
                                      FUN_04482014(lVar10);
                                      lVar9 = *(long *)(lVar10 + 0x38);
                                    }
                                    lVar9 = *(long *)(lVar9 + 0x10);
                                    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                                      lVar9 = FUN_04481fb8();
                                    }
                                    if (*(int *)(lVar9 + 0xe4) == 0) {
                                      thunk_FUN_044a54b4();
                                    }
                                    lVar9 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
                                    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                                      lVar9 = FUN_04481fb8();
                                    }
                                    FUN_0771ec00(uVar11,**(undefined8 **)(lVar9 + 0xb8),0);
                                    return 1;
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
                goto LAB_0776223c;
              }
            }
            goto LAB_07762240;
          }
          uVar13 = uVar13 + 1;
        } while ((long)uVar13 < (long)(int)uVar12);
      }
      puVar6 = PTR_DAT_09f32c10;
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)puVar6,0);
      return 0;
    }
  }
LAB_07762240:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


