/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartAdvertisingColocationSession>d__19$$MoveNext
ENTRY_POINT: 0776517c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartAdvertisingColocationSession>d__19__MoveNext
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long unaff_x21;
  long *plVar10;
  long *plVar11;
  int unaff_w26;
  long unaff_x27;
  long *unaff_x28;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long in_stack_00000088;
  undefined8 in_stack_000000b0;
  float fStack00000000000000b8;
  uint uStack00000000000000bc;
  undefined4 in_stack_000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  int iStack00000000000000d0;
  int iStack00000000000000d4;
  
  thunk_FUN_044bb4b4();
  if (6 < *(uint *)(unaff_x21 + -0x30)) {
    *(undefined8 *)(unaff_x27 + 0x50) = *(undefined8 *)PTR_DAT_09f307b8;
    thunk_FUN_044bb4b4();
    if (*unaff_x28 == 0) goto LAB_07765a28;
    uVar4 = FUN_07a3b850(*unaff_x28 + 0x14,0);
    if (7 < *(uint *)(unaff_x27 + 0x18)) {
      *(undefined8 *)(unaff_x27 + 0x58) = uVar4;
      thunk_FUN_044bb4b4((undefined8 *)(unaff_x27 + 0x58),uVar4);
      if (8 < *(uint *)(unaff_x27 + 0x18)) {
        *(undefined8 *)(unaff_x27 + 0x60) = *(undefined8 *)PTR_DAT_09f32d50;
        thunk_FUN_044bb4b4();
        if (*unaff_x28 == 0) goto LAB_07765a28;
        uVar4 = FUN_07a5081c(*unaff_x28 + 0x2c,0);
        if (9 < *(uint *)(unaff_x27 + 0x18)) {
          *(undefined8 *)(unaff_x27 + 0x68) = uVar4;
          thunk_FUN_044bb4b4((undefined8 *)(unaff_x27 + 0x68),uVar4);
          if (10 < *(uint *)(unaff_x27 + 0x18)) {
            *(undefined8 *)(unaff_x27 + 0x70) = *(undefined8 *)PTR_DAT_09f32d58;
            thunk_FUN_044bb4b4();
            if (*unaff_x28 == 0) goto LAB_07765a28;
            uVar4 = FUN_07a5081c(*unaff_x28 + 0x30,0);
            if (0xb < *(uint *)(unaff_x27 + 0x18)) {
              *(undefined8 *)(unaff_x27 + 0x78) = uVar4;
              thunk_FUN_044bb4b4((undefined8 *)(unaff_x27 + 0x78),uVar4);
              if (0xc < *(uint *)(unaff_x27 + 0x18)) {
                *(undefined8 *)(unaff_x27 + 0x80) = *(undefined8 *)PTR_DAT_09f32d70;
                thunk_FUN_044bb4b4();
                lVar7 = *unaff_x28;
                if (lVar7 != 0) {
                  if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0x28) + 0xe4) == 0) {
                    thunk_FUN_044a54b4();
                  }
                  uVar4 = FUN_079a04dc(lVar7 + 0x28,0);
                  if (*(uint *)(unaff_x27 + 0x18) < 0xe) goto LAB_07765a24;
                  *(undefined8 *)(unaff_x27 + 0x88) = uVar4;
                  thunk_FUN_044bb4b4();
                  uVar4 = FUN_078b57fc();
                  if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                    thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                  }
                  FUN_094c652c(uVar4,0);
                  puVar1 = PTR_DAT_09f32ce0;
                  lVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32d18);
                  FUN_05bad610(lVar7,*(undefined8 *)puVar1);
                  puVar1 = PTR_DAT_09f32d80;
                  if (*unaff_x28 != 0) {
                    FUN_077617f0(*(undefined8 *)(*unaff_x28 + 0x20),lVar7);
                    uVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
                    FUN_07a80df4(uVar4,0);
                    if (lVar7 != 0) {
                      FUN_05baf864(lVar7,uVar4,*(undefined8 *)PTR_DAT_09f32d88);
                      lVar8 = *unaff_x28;
                      if ((lVar8 != 0) && (in_stack_00000088 != 0)) {
                        iVar13 = *(int *)(lVar8 + 0x10);
                        iVar12 = *(int *)(lVar8 + 0x14);
                        FUN_05a28f70(in_stack_00000088,0,*(undefined8 *)PTR_DAT_09f32c78);
                        uVar5 = FUN_07760c44((float)iVar13,(float)iVar12);
                        if ((unaff_w26 < 0xb) && ((uVar5 & 1) != 0)) {
                          if (3 < *(int *)(unaff_x20 + 0x10)) {
                            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                              thunk_FUN_044a54b4();
                            }
                            FUN_094c652c(*(undefined8 *)PTR_DAT_09f32db8,0);
                          }
                          lVar8 = FUN_07764110();
                        }
                        else {
                          uVar4 = FUN_05a2ad3c(in_stack_00000088,*(undefined8 *)PTR_DAT_09f32cc8);
                          lVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
                          FUN_07a80df4(lVar8,0);
                          *(undefined8 *)(lVar8 + 0x28) = uVar4;
                          thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x28),uVar4);
                          lVar6 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,
                                               *(undefined4 *)(lVar7 + 0x18));
                          plVar10 = (long *)(lVar8 + 0x20);
                          *plVar10 = lVar6;
                          thunk_FUN_044bb4b4(plVar10);
                          lVar6 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,
                                               *(undefined4 *)(lVar7 + 0x18));
                          plVar11 = (long *)(lVar8 + 0x30);
                          *plVar11 = lVar6;
                          thunk_FUN_044bb4b4(plVar11,lVar6);
                          *(undefined8 *)(lVar8 + 0x18) = 0xffffffffffffffff;
                          *(int *)(lVar8 + 0x10) = iStack00000000000000d4;
                          *(int *)(lVar8 + 0x14) = iStack00000000000000d0;
                          puVar3 = PTR_DAT_09f32ba8;
                          puVar2 = PTR_DAT_09f24a78;
                          puVar1 = PTR_DAT_09f22e40;
                          uStack00000000000000bc = 0;
                          if (0 < *(int *)(lVar7 + 0x18)) {
                            do {
                              lVar6 = FUN_05badb74(lVar7,uStack00000000000000bc,
                                                   *(undefined8 *)puVar3);
                              if ((lVar6 == 0) || (lVar9 = *plVar10, lVar9 == 0)) goto LAB_07765a28;
                              if (*(uint *)(lVar9 + 0x18) <= uStack00000000000000bc)
                              goto LAB_07765a24;
                              fVar17 = fStack00000000000000cc +
                                       (float)*(int *)(lVar6 + 0x1c) / (float)iStack00000000000000d4
                              ;
                              lVar9 = lVar9 + (long)(int)uStack00000000000000bc * 0x10;
                              fVar16 = fStack00000000000000c8 +
                                       (float)*(int *)(lVar6 + 0x20) / (float)iStack00000000000000d0
                              ;
                              fVar15 = (float)*(int *)(lVar6 + 0x14) / (float)iStack00000000000000d4
                                       - (fStack00000000000000cc + fStack00000000000000cc);
                              fVar14 = (float)*(int *)(lVar6 + 0x18) / (float)iStack00000000000000d0
                                       - (fStack00000000000000c8 + fStack00000000000000c8);
                              *(float *)(lVar9 + 0x20) = fVar17;
                              *(float *)(lVar9 + 0x24) = fVar16;
                              *(float *)(lVar9 + 0x28) = fVar15;
                              *(float *)(lVar9 + 0x2c) = fVar14;
                              lVar9 = *plVar11;
                              if (lVar9 == 0) goto LAB_07765a28;
                              if (*(uint *)(lVar9 + 0x18) <= uStack00000000000000bc)
                              goto LAB_07765a24;
                              *(undefined4 *)(lVar9 + (long)(int)uStack00000000000000bc * 4 + 0x20)
                                   = *(undefined4 *)(lVar6 + 0x10);
                              if (3 < *(int *)(unaff_x20 + 0x10)) {
                                lVar9 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,0x10);
                                if (lVar9 == 0) goto LAB_07765a28;
                                if (*(int *)(lVar9 + 0x18) == 0) goto LAB_07765a24;
                                *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_09f32df8;
                                thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x20));
                                uVar4 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
                                if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_07765a24;
                                *(undefined8 *)(lVar9 + 0x28) = uVar4;
                                thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x28),uVar4);
                                if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_07765a24;
                                *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)PTR_DAT_09f32db0;
                                thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x30));
                                uVar4 = FUN_07a3b850((undefined4 *)(lVar6 + 0x10),0);
                                if (*(uint *)(lVar9 + 0x18) < 4) goto LAB_07765a24;
                                *(undefined8 *)(lVar9 + 0x38) = uVar4;
                                thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x38),uVar4);
                                if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_07765a24;
                                *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)PTR_DAT_09f32dc8;
                                thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x40));
                                fStack00000000000000b8 = fVar17 * (float)iStack00000000000000d4;
                                uVar4 = FUN_07a5081c(&stack0x000000b8,0);
                                if (*(uint *)(lVar9 + 0x18) < 6) goto LAB_07765a24;
                                *(undefined8 *)(lVar9 + 0x48) = uVar4;
                                thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x48),uVar4);
                                if (*(uint *)(lVar9 + 0x18) < 7) goto LAB_07765a24;
                                *(undefined8 *)(lVar9 + 0x50) = *(undefined8 *)PTR_DAT_09f32da8;
                                thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x50));
                                fStack00000000000000b8 = fVar16 * (float)iStack00000000000000d0;
                                uVar4 = FUN_07a5081c(&stack0x000000b8,0);
                                if (*(uint *)(lVar9 + 0x18) < 8) goto LAB_07765a24;
                                *(undefined8 *)(lVar9 + 0x58) = uVar4;
                                thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x58),uVar4);
                                if (*(uint *)(lVar9 + 0x18) < 9) goto LAB_07765a24;
                                *(undefined8 *)(lVar9 + 0x60) = *(undefined8 *)PTR_DAT_09f32de8;
                                thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x60));
                                fStack00000000000000b8 = fVar15 * (float)iStack00000000000000d4;
                                uVar4 = FUN_07a5081c(&stack0x000000b8,0);
                                if (*(uint *)(lVar9 + 0x18) < 10) goto LAB_07765a24;
                                *(undefined8 *)(lVar9 + 0x68) = uVar4;
                                thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x68),uVar4);
                                if (*(uint *)(lVar9 + 0x18) < 0xb) goto LAB_07765a24;
                                *(undefined8 *)(lVar9 + 0x70) = *(undefined8 *)PTR_DAT_09f307b8;
                                thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x70));
                                fStack00000000000000b8 = fVar14 * (float)iStack00000000000000d0;
                                uVar4 = FUN_07a5081c(&stack0x000000b8,0);
                                if (*(uint *)(lVar9 + 0x18) < 0xc) goto LAB_07765a24;
                                *(undefined8 *)(lVar9 + 0x78) = uVar4;
                                thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x78),uVar4);
                                if (*(uint *)(lVar9 + 0x18) < 0xd) goto LAB_07765a24;
                                *(undefined8 *)(lVar9 + 0x80) = *(undefined8 *)PTR_DAT_09f307e8;
                                thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x80));
                                uVar5 = FUN_05a28f70(in_stack_00000088,uStack00000000000000bc,
                                                     *(undefined8 *)PTR_DAT_09f32c78);
                                in_stack_000000b0._4_4_ = (uint)(uVar5 >> 0x1f) & 0xfffffffe;
                                uVar4 = FUN_07a3b850((long)&stack0x000000b0 + 4,0);
                                if (*(uint *)(lVar9 + 0x18) < 0xe) goto LAB_07765a24;
                                *(undefined8 *)(lVar9 + 0x88) = uVar4;
                                thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x88),uVar4);
                                if (*(uint *)(lVar9 + 0x18) < 0xf) goto LAB_07765a24;
                                *(undefined8 *)(lVar9 + 0x90) = *(undefined8 *)puVar2;
                                thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x90));
                                iVar12 = FUN_05a28f70(in_stack_00000088,uStack00000000000000bc,
                                                      *(undefined8 *)PTR_DAT_09f32c78);
                                in_stack_000000b0._4_4_ = iVar12 << 1;
                                uVar4 = FUN_07a3b850((long)&stack0x000000b0 + 4,0);
                                if (*(uint *)(lVar9 + 0x18) < 0x10) goto LAB_07765a24;
                                *(undefined8 *)(lVar9 + 0x98) = uVar4;
                                thunk_FUN_044bb4b4();
                                uVar4 = FUN_078b57fc(lVar9,0);
                                lVar9 = *(long *)puVar1;
                                lVar6 = *(long *)(lVar9 + 0x38);
                                if (lVar6 == 0) {
                                  FUN_04482014(lVar9);
                                  lVar6 = *(long *)(lVar9 + 0x38);
                                }
                                lVar6 = *(long *)(lVar6 + 0x10);
                                if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                                  lVar6 = FUN_04481fb8();
                                }
                                if (*(int *)(lVar6 + 0xe4) == 0) {
                                  thunk_FUN_044a54b4();
                                }
                                lVar6 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
                                if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                                  lVar6 = FUN_04481fb8();
                                }
                                FUN_0771ec00(uVar4,**(undefined8 **)(lVar6 + 0xb8),0);
                              }
                              uStack00000000000000bc = uStack00000000000000bc + 1;
                            } while ((int)uStack00000000000000bc < *(int *)(lVar7 + 0x18));
                          }
                          FUN_077606dc(lVar8);
                        }
                        return lVar8;
                      }
                    }
                  }
                }
LAB_07765a28:
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
            }
          }
        }
      }
    }
  }
LAB_07765a24:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


