/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$SetState
ENTRY_POINT: 06d9ca7c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__SetState(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  ulong uVar13;
  undefined8 *unaff_x23;
  long lVar14;
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
  
  thunk_FUN_03d233cc();
  uVar3 = _UNK_018b1758;
  uVar11 = _DAT_018b1750;
  in_stack_000000f8 = _UNK_018b1758;
  in_stack_000000f0 = _DAT_018b1750;
  uVar9 = FUN_03c8f984(*unaff_x22,&stack0x000000f0);
  FUN_0701f51c(uVar9,*unaff_x23,0);
  puVar7 = PTR_DAT_08e8fcb8;
  if (3 < *(uint *)(unaff_x21 + -0x18)) {
    *(undefined8 *)(unaff_x19 + 0x38) = uVar9;
    thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x38),uVar9);
    in_stack_000000e8 = uVar3;
    in_stack_000000e0 = uVar11;
    uVar9 = FUN_03c8f984(*unaff_x22,&stack0x000000e0);
    FUN_0701f51c(uVar9,*(undefined8 *)puVar7,0);
    puVar7 = PTR_DAT_08e8fc90;
    if (4 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x40) = uVar9;
      thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x40),uVar9);
      uVar2 = _UNK_018b3368;
      uVar9 = _DAT_018b3360;
      in_stack_000000d8 = _UNK_018b3368;
      in_stack_000000d0 = _DAT_018b3360;
      uVar10 = FUN_03c8f984(*unaff_x22,&stack0x000000d0);
      FUN_0701f51c(uVar10,*(undefined8 *)puVar7,0);
      puVar7 = PTR_DAT_08e8fc78;
      if (5 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x48) = uVar10;
        thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x48),uVar10);
        in_stack_000000c8 = uVar2;
        in_stack_000000c0 = uVar9;
        uVar10 = FUN_03c8f984(*unaff_x22,&stack0x000000c0);
        FUN_0701f51c(uVar10,*(undefined8 *)puVar7,0);
        puVar7 = PTR_DAT_08e8fc70;
        if (6 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x50) = uVar10;
          thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x50),uVar10);
          in_stack_000000b8 = uVar2;
          in_stack_000000b0 = uVar9;
          uVar9 = FUN_03c8f984(*unaff_x22,&stack0x000000b0);
          FUN_0701f51c(uVar9,*(undefined8 *)puVar7,0);
          puVar7 = PTR_DAT_08e8fc88;
          if (7 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x58) = uVar9;
            thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x58),uVar9);
            uVar2 = _UNK_018b3298;
            uVar9 = _DAT_018b3290;
            in_stack_000000a8 = _UNK_018b3298;
            in_stack_000000a0 = _DAT_018b3290;
            uVar10 = FUN_03c8f984(*unaff_x22,&stack0x000000a0);
            FUN_0701f51c(uVar10,*(undefined8 *)puVar7,0);
            puVar7 = PTR_DAT_08e8fc98;
            if (8 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x60) = uVar10;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x60),uVar10);
              in_stack_00000098 = uVar2;
              in_stack_00000090 = uVar9;
              uVar10 = FUN_03c8f984(*unaff_x22,&stack0x00000090);
              FUN_0701f51c(uVar10,*(undefined8 *)puVar7,0);
              puVar7 = PTR_DAT_08e8fca8;
              if (9 < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0x68) = uVar10;
                thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x68),uVar10);
                in_stack_00000088 = uVar2;
                in_stack_00000080 = uVar9;
                uVar9 = FUN_03c8f984(*unaff_x22,&stack0x00000080);
                FUN_0701f51c(uVar9,*(undefined8 *)puVar7,0);
                puVar7 = PTR_DAT_08e8fcd8;
                if (10 < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0x70) = uVar9;
                  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x70),uVar9);
                  uVar2 = _UNK_018b13b8;
                  uVar9 = _DAT_018b13b0;
                  in_stack_00000078 = _UNK_018b13b8;
                  in_stack_00000070 = _DAT_018b13b0;
                  uVar10 = FUN_03c8f984(*unaff_x22,&stack0x00000070);
                  FUN_0701f51c(uVar10,*(undefined8 *)puVar7,0);
                  puVar7 = PTR_DAT_08e8fcb0;
                  if (0xb < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0x78) = uVar10;
                    thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x78),uVar10);
                    in_stack_00000068 = uVar2;
                    in_stack_00000060 = uVar9;
                    uVar10 = FUN_03c8f984(*unaff_x22,&stack0x00000060);
                    FUN_0701f51c(uVar10,*(undefined8 *)puVar7,0);
                    puVar7 = PTR_DAT_08e8fc60;
                    if (0xc < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 0x80) = uVar10;
                      thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x80),uVar10);
                      in_stack_00000058 = uVar2;
                      in_stack_00000050 = uVar9;
                      uVar9 = FUN_03c8f984(*unaff_x22,&stack0x00000050);
                      FUN_0701f51c(uVar9,*(undefined8 *)puVar7,0);
                      puVar7 = PTR_DAT_08e8fce0;
                      if (0xd < *(uint *)(unaff_x19 + 0x18)) {
                        *(undefined8 *)(unaff_x19 + 0x88) = uVar9;
                        thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x88),uVar9);
                        in_stack_00000048 = _UNK_018b2618;
                        in_stack_00000040 = _DAT_018b2610;
                        uVar9 = FUN_03c8f984(*unaff_x22,&stack0x00000040);
                        FUN_0701f51c(uVar9,*(undefined8 *)puVar7,0);
                        puVar7 = PTR_DAT_08e8fc80;
                        if (0xe < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined8 *)(unaff_x19 + 0x90) = uVar9;
                          thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x90),uVar9);
                          in_stack_00000038 = uVar3;
                          in_stack_00000030 = uVar11;
                          uVar9 = FUN_03c8f984(*unaff_x22,&stack0x00000030);
                          FUN_0701f51c(uVar9,*(undefined8 *)puVar7,0);
                          puVar7 = PTR_DAT_08e8fca0;
                          if (0xf < *(uint *)(unaff_x19 + 0x18)) {
                            *(undefined8 *)(unaff_x19 + 0x98) = uVar9;
                            thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x98),uVar9);
                            in_stack_00000028 = uVar3;
                            in_stack_00000020 = uVar11;
                            uVar11 = FUN_03c8f984(*unaff_x22,&stack0x00000020);
                            FUN_0701f51c(uVar11,*(undefined8 *)puVar7,0);
                            puVar7 = PTR_DAT_08e8fc58;
                            if (0x10 < *(uint *)(unaff_x19 + 0x18)) {
                              *(undefined8 *)(unaff_x19 + 0xa0) = uVar11;
                              thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0xa0),uVar11);
                              **(long **)(*(long *)puVar7 + 0xb8) = unaff_x19;
                              thunk_FUN_03d233cc(*(undefined8 *)(*(long *)puVar7 + 0xb8));
                              if (**(long **)(*(long *)puVar7 + 0xb8) != 0) {
                                uVar11 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e8fc50,
                                                      *(undefined4 *)
                                                       (**(long **)(*(long *)puVar7 + 0xb8) + 0x18))
                                ;
                                puVar12 = (undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
                                *puVar12 = uVar11;
                                thunk_FUN_03d233cc(puVar12,uVar11);
                                puVar8 = PTR_DAT_08e8fcc0;
                                puVar6 = PTR_DAT_08e6baa0;
                                puVar5 = PTR_DAT_08e6abb8;
                                puVar4 = PTR_DAT_08e6a6b8;
                                if (**(long **)(*(long *)puVar7 + 0xb8) != 0) {
                                  uVar11 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e6baa0,
                                                        *(undefined4 *)
                                                         (**(long **)(*(long *)puVar7 + 0xb8) + 0x18
                                                         ));
                                  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18)
                                  ;
                                  *puVar12 = uVar11;
                                  thunk_FUN_03d233cc(puVar12,uVar11);
                                  uVar11 = FUN_03c8f97c(*(undefined8 *)puVar6,0x20);
                                  FUN_0701f51c(uVar11,*(undefined8 *)puVar8,0);
                                  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x20)
                                  ;
                                  *puVar12 = uVar11;
                                  thunk_FUN_03d233cc(puVar12,uVar11);
                                  uVar11 = FUN_03c8f97c(*(undefined8 *)puVar5,0x200f);
                                  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
                                  *puVar12 = uVar11;
                                  thunk_FUN_03d233cc(puVar12,uVar11);
                                  uVar11 = DAT_018aeef0;
                                  uVar13 = 0;
                                  while( true ) {
                                    lVar14 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
                                    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                      thunk_FUN_03cd7500();
                                    }
                                    dVar15 = (double)thunk_FUN_03cee0d4((double)(int)uVar13,uVar11,0
                                                                       );
                                    if (lVar14 == 0) break;
                                    if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_06d9d060;
                                    lVar1 = uVar13 * 4;
                                    uVar13 = uVar13 + 1;
                                    *(float *)(lVar14 + lVar1 + 0x20) = (float)dVar15;
                                    if (uVar13 == 0x200f) {
                                      return;
                                    }
                                  }
                                }
                              }
                    /* WARNING: Subroutine does not return */
                              FUN_03c8fb30();
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
LAB_06d9d060:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


