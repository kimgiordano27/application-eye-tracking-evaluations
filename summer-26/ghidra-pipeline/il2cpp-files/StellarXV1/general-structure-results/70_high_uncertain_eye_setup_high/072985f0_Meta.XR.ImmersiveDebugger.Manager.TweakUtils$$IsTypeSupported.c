/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakUtils$$IsTypeSupported
ENTRY_POINT: 072985f0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_15;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Meta_XR_ImmersiveDebugger_Manager_TweakUtils__IsTypeSupported(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  ulong uVar14;
  double dVar15;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_092c2350);
  FUN_04077588(PTR_DAT_092c2358);
  FUN_04077588(PTR_DAT_092c2360);
  FUN_04077588(PTR_DAT_092c2368);
  FUN_04077588(PTR_DAT_092c2370);
  FUN_04077588(PTR_DAT_092c2378);
  FUN_04077588(PTR_DAT_092c2380);
  *(undefined1 *)(unaff_x19 + 0x843) = 1;
  lVar9 = FUN_04077674(*unaff_x21,0x11);
  in_stack_00000128 = _UNK_01af0368;
  in_stack_00000120 = _DAT_01af0360;
  uVar10 = FUN_0407767c(*unaff_x22,&stack0x00000120);
  FUN_07593f88(uVar10,*unaff_x20,0);
  puVar7 = PTR_DAT_092c2370;
  if (lVar9 == 0) {
LAB_07298d38:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(int *)(lVar9 + 0x18) != 0) {
    *(undefined8 *)(lVar9 + 0x20) = uVar10;
    thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x20),uVar10);
    uVar3 = _UNK_01af1198;
    uVar10 = _DAT_01af1190;
    in_stack_00000118 = _UNK_01af1198;
    in_stack_00000110 = _DAT_01af1190;
    uVar11 = FUN_0407767c(*unaff_x22,&stack0x00000110);
    FUN_07593f88(uVar11,*(undefined8 *)puVar7,0);
    puVar7 = PTR_DAT_092c2308;
    if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar9 + 0x28) = uVar11;
      thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x28),uVar11);
      in_stack_00000108 = uVar3;
      in_stack_00000100 = uVar10;
      uVar10 = FUN_0407767c(*unaff_x22,&stack0x00000100);
      FUN_07593f88(uVar10,*(undefined8 *)puVar7,0);
      puVar7 = PTR_DAT_092c2368;
      if (2 < *(uint *)(lVar9 + 0x18)) {
        *(undefined8 *)(lVar9 + 0x30) = uVar10;
        thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x30),uVar10);
        uVar3 = _UNK_01aef718;
        uVar10 = _DAT_01aef710;
        in_stack_000000f8 = _UNK_01aef718;
        in_stack_000000f0 = _DAT_01aef710;
        uVar11 = FUN_0407767c(*unaff_x22,&stack0x000000f0);
        FUN_07593f88(uVar11,*(undefined8 *)puVar7,0);
        puVar7 = PTR_DAT_092c2358;
        if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar9 + 0x38) = uVar11;
          thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x38),uVar11);
          in_stack_000000e8 = uVar3;
          in_stack_000000e0 = uVar10;
          uVar11 = FUN_0407767c(*unaff_x22,&stack0x000000e0);
          FUN_07593f88(uVar11,*(undefined8 *)puVar7,0);
          puVar7 = PTR_DAT_092c2330;
          if (4 < *(uint *)(lVar9 + 0x18)) {
            *(undefined8 *)(lVar9 + 0x40) = uVar11;
            thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x40),uVar11);
            uVar2 = _UNK_01af07c8;
            uVar11 = _DAT_01af07c0;
            in_stack_000000d8 = _UNK_01af07c8;
            in_stack_000000d0 = _DAT_01af07c0;
            uVar12 = FUN_0407767c(*unaff_x22,&stack0x000000d0);
            FUN_07593f88(uVar12,*(undefined8 *)puVar7,0);
            puVar7 = PTR_DAT_092c2318;
            if (5 < *(uint *)(lVar9 + 0x18)) {
              *(undefined8 *)(lVar9 + 0x48) = uVar12;
              thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x48),uVar12);
              in_stack_000000c8 = uVar2;
              in_stack_000000c0 = uVar11;
              uVar12 = FUN_0407767c(*unaff_x22,&stack0x000000c0);
              FUN_07593f88(uVar12,*(undefined8 *)puVar7,0);
              puVar7 = PTR_DAT_092c2310;
              if (6 < *(uint *)(lVar9 + 0x18)) {
                *(undefined8 *)(lVar9 + 0x50) = uVar12;
                thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x50),uVar12);
                in_stack_000000b8 = uVar2;
                in_stack_000000b0 = uVar11;
                uVar11 = FUN_0407767c(*unaff_x22,&stack0x000000b0);
                FUN_07593f88(uVar11,*(undefined8 *)puVar7,0);
                puVar7 = PTR_DAT_092c2328;
                if ((*(uint *)(lVar9 + 0x18) & 0xfffffff8) != 0) {
                  *(undefined8 *)(lVar9 + 0x58) = uVar11;
                  thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x58),uVar11);
                  uVar2 = _UNK_01af0948;
                  uVar11 = _DAT_01af0940;
                  in_stack_000000a8 = _UNK_01af0948;
                  in_stack_000000a0 = _DAT_01af0940;
                  uVar12 = FUN_0407767c(*unaff_x22,&stack0x000000a0);
                  FUN_07593f88(uVar12,*(undefined8 *)puVar7,0);
                  puVar7 = PTR_DAT_092c2338;
                  if (8 < *(uint *)(lVar9 + 0x18)) {
                    *(undefined8 *)(lVar9 + 0x60) = uVar12;
                    thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x60),uVar12);
                    in_stack_00000098 = uVar2;
                    in_stack_00000090 = uVar11;
                    uVar12 = FUN_0407767c(*unaff_x22,&stack0x00000090);
                    FUN_07593f88(uVar12,*(undefined8 *)puVar7,0);
                    puVar7 = PTR_DAT_092c2348;
                    if (9 < *(uint *)(lVar9 + 0x18)) {
                      *(undefined8 *)(lVar9 + 0x68) = uVar12;
                      thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x68),uVar12);
                      in_stack_00000088 = uVar2;
                      in_stack_00000080 = uVar11;
                      uVar11 = FUN_0407767c(*unaff_x22,&stack0x00000080);
                      FUN_07593f88(uVar11,*(undefined8 *)puVar7,0);
                      puVar7 = PTR_DAT_092c2378;
                      if (10 < *(uint *)(lVar9 + 0x18)) {
                        *(undefined8 *)(lVar9 + 0x70) = uVar11;
                        thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x70),uVar11);
                        uVar2 = _UNK_01aef248;
                        uVar11 = _DAT_01aef240;
                        in_stack_00000078 = _UNK_01aef248;
                        in_stack_00000070 = _DAT_01aef240;
                        uVar12 = FUN_0407767c(*unaff_x22,&stack0x00000070);
                        FUN_07593f88(uVar12,*(undefined8 *)puVar7,0);
                        puVar7 = PTR_DAT_092c2350;
                        if (0xb < *(uint *)(lVar9 + 0x18)) {
                          *(undefined8 *)(lVar9 + 0x78) = uVar12;
                          thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x78),uVar12);
                          in_stack_00000068 = uVar2;
                          in_stack_00000060 = uVar11;
                          uVar12 = FUN_0407767c(*unaff_x22,&stack0x00000060);
                          FUN_07593f88(uVar12,*(undefined8 *)puVar7,0);
                          puVar7 = PTR_DAT_092c2300;
                          if (0xc < *(uint *)(lVar9 + 0x18)) {
                            *(undefined8 *)(lVar9 + 0x80) = uVar12;
                            thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x80),uVar12);
                            in_stack_00000058 = uVar2;
                            in_stack_00000050 = uVar11;
                            uVar11 = FUN_0407767c(*unaff_x22,&stack0x00000050);
                            FUN_07593f88(uVar11,*(undefined8 *)puVar7,0);
                            puVar7 = PTR_DAT_092c2380;
                            if (0xd < *(uint *)(lVar9 + 0x18)) {
                              *(undefined8 *)(lVar9 + 0x88) = uVar11;
                              thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x88),uVar11);
                              in_stack_00000048 = _UNK_01af1a38;
                              in_stack_00000040 = _DAT_01af1a30;
                              uVar11 = FUN_0407767c(*unaff_x22,&stack0x00000040);
                              FUN_07593f88(uVar11,*(undefined8 *)puVar7,0);
                              puVar7 = PTR_DAT_092c2320;
                              if (0xe < *(uint *)(lVar9 + 0x18)) {
                                *(undefined8 *)(lVar9 + 0x90) = uVar11;
                                thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x90),uVar11);
                                in_stack_00000038 = uVar3;
                                in_stack_00000030 = uVar10;
                                uVar11 = FUN_0407767c(*unaff_x22,&stack0x00000030);
                                FUN_07593f88(uVar11,*(undefined8 *)puVar7,0);
                                puVar7 = PTR_DAT_092c2340;
                                if ((*(uint *)(lVar9 + 0x18) & 0xfffffff0) != 0) {
                                  *(undefined8 *)(lVar9 + 0x98) = uVar11;
                                  thunk_FUN_040ec700((undefined8 *)(lVar9 + 0x98),uVar11);
                                  in_stack_00000028 = uVar3;
                                  in_stack_00000020 = uVar10;
                                  uVar10 = FUN_0407767c(*unaff_x22,&stack0x00000020);
                                  FUN_07593f88(uVar10,*(undefined8 *)puVar7,0);
                                  puVar7 = PTR_DAT_092c22f8;
                                  if (0x10 < *(uint *)(lVar9 + 0x18)) {
                                    *(undefined8 *)(lVar9 + 0xa0) = uVar10;
                                    thunk_FUN_040ec700((undefined8 *)(lVar9 + 0xa0),uVar10);
                                    **(long **)(*(long *)puVar7 + 0xb8) = lVar9;
                                    thunk_FUN_040ec700(*(undefined8 *)(*(long *)puVar7 + 0xb8),lVar9
                                                      );
                                    if (**(long **)(*(long *)puVar7 + 0xb8) != 0) {
                                      uVar10 = FUN_04077674(*(undefined8 *)PTR_DAT_092c22f0,
                                                            *(undefined4 *)
                                                             (**(long **)(*(long *)puVar7 + 0xb8) +
                                                             0x18));
                                      puVar13 = (undefined8 *)
                                                (*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
                                      *puVar13 = uVar10;
                                      thunk_FUN_040ec700(puVar13,uVar10);
                                      puVar8 = PTR_DAT_092c2360;
                                      puVar6 = PTR_DAT_092869a0;
                                      puVar5 = PTR_DAT_09286860;
                                      puVar4 = PTR_DAT_09285ae0;
                                      if (**(long **)(*(long *)puVar7 + 0xb8) != 0) {
                                        uVar10 = FUN_04077674(*(undefined8 *)PTR_DAT_092869a0,
                                                              *(undefined4 *)
                                                               (**(long **)(*(long *)puVar7 + 0xb8)
                                                               + 0x18));
                                        puVar13 = (undefined8 *)
                                                  (*(long *)(*(long *)puVar7 + 0xb8) + 0x18);
                                        *puVar13 = uVar10;
                                        thunk_FUN_040ec700(puVar13,uVar10);
                                        uVar10 = FUN_04077674(*(undefined8 *)puVar6,0x20);
                                        FUN_07593f88(uVar10,*(undefined8 *)puVar8,0);
                                        puVar13 = (undefined8 *)
                                                  (*(long *)(*(long *)puVar7 + 0xb8) + 0x20);
                                        *puVar13 = uVar10;
                                        thunk_FUN_040ec700(puVar13,uVar10);
                                        uVar10 = FUN_04077674(*(undefined8 *)puVar5,0x200f);
                                        puVar13 = (undefined8 *)
                                                  (*(long *)(*(long *)puVar7 + 0xb8) + 8);
                                        *puVar13 = uVar10;
                                        thunk_FUN_040ec700(puVar13,uVar10);
                                        uVar10 = DAT_01aedb60;
                                        uVar14 = 0;
                                        while( true ) {
                                          lVar9 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
                                          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                                            thunk_FUN_040d65a8();
                                          }
                                          dVar15 = (double)thunk_FUN_040b179c((double)(int)uVar14,
                                                                              uVar10,0);
                                          if (lVar9 == 0) break;
                                          if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_07298d34;
                                          lVar1 = uVar14 * 4;
                                          uVar14 = uVar14 + 1;
                                          *(float *)(lVar9 + lVar1 + 0x20) = (float)dVar15;
                                          if (uVar14 == 0x200f) {
                                            return;
                                          }
                                        }
                                      }
                                    }
                                    goto LAB_07298d38;
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
        }
      }
    }
  }
LAB_07298d34:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


