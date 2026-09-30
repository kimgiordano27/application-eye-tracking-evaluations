/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$ToDisplayStrings
ENTRY_POINT: 04e21d58
PROGRAM: waitwhat-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__ToDisplayStrings(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 uStack000000000000000c;
  
  if ((*(byte *)(unaff_x19 + 0x1ef) & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f5978);
    FUN_03188a78(PTR_DAT_070c28d8);
    FUN_03188a78(PTR_DAT_070c33f0);
    FUN_03188a78(PTR_DAT_070cc398);
    FUN_03188a78(PTR_DAT_070c3400);
    *(undefined1 *)(unaff_x19 + 0x1ef) = 1;
  }
  puVar1 = PTR_DAT_070c28d8;
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uStack000000000000000c = *(undefined1 *)(unaff_x21 + 0x2d);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4();
  }
  puVar3 = PTR_DAT_070cc398;
  puVar2 = PTR_DAT_070c33f0;
  plVar5 = (long *)thunk_FUN_031c39fc(**(undefined8 **)(lVar4 + 0xc0),&stack0x0000000c);
  if (plVar5 == (long *)0x0) {
    lVar4 = FUN_03188b1c(*(undefined8 *)puVar1,0x11);
    if (lVar4 == 0) goto LAB_04e2230c;
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar3;
      if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      uVar6 = FUN_0597a880();
      if ((1 < *(uint *)(lVar4 + 0x18)) &&
         (*(undefined8 *)(lVar4 + 0x28) = uVar6, *(uint *)(lVar4 + 0x18) != 2)) {
        *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)puVar2;
        lVar7 = *(long *)(unaff_x20 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_031c09d4();
        }
        uVar6 = FUN_0592cd7c(unaff_x21 + 8,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x2a8));
        if ((3 < *(uint *)(lVar4 + 0x18)) &&
           (*(undefined8 *)(lVar4 + 0x38) = uVar6, *(uint *)(lVar4 + 0x18) != 4)) {
          *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)puVar2;
          lVar7 = *(long *)(unaff_x20 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_031c09d4();
          }
          uVar6 = FUN_0597a880(unaff_x21 + 0x10,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x2b0));
          if ((5 < *(uint *)(lVar4 + 0x18)) &&
             (*(undefined8 *)(lVar4 + 0x48) = uVar6, *(uint *)(lVar4 + 0x18) != 6)) {
            *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)puVar2;
            lVar7 = *(long *)(unaff_x20 + 0x20);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_031c09d4();
            }
            uVar6 = FUN_0592cd7c(unaff_x21 + 0x18,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x2b8));
            if ((7 < *(uint *)(lVar4 + 0x18)) &&
               (*(undefined8 *)(lVar4 + 0x58) = uVar6, *(uint *)(lVar4 + 0x18) != 8)) {
              *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)puVar2;
              lVar7 = *(long *)(unaff_x20 + 0x20);
              if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_031c09d4();
              }
              uVar6 = FUN_0597a880(unaff_x21 + 0x20,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x2c0)
                                  );
              if ((9 < *(uint *)(lVar4 + 0x18)) &&
                 (*(undefined8 *)(lVar4 + 0x68) = uVar6, *(uint *)(lVar4 + 0x18) != 10)) {
                *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)puVar2;
                lVar7 = *(long *)(unaff_x20 + 0x20);
                if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                  lVar7 = FUN_031c09d4();
                }
                uVar6 = FUN_0592cd7c(unaff_x21 + 0x28,
                                     *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x2c8));
                if ((0xb < *(uint *)(lVar4 + 0x18)) &&
                   (*(undefined8 *)(lVar4 + 0x78) = uVar6, puVar1 = PTR_DAT_070c1958,
                   *(uint *)(lVar4 + 0x18) != 0xc)) {
                  *(undefined8 *)(lVar4 + 0x80) = *(undefined8 *)puVar2;
                  if (*(int *)(*(long *)(puVar1 + 0x28) + 0xe4) == 0) {
                    thunk_FUN_031e5338();
                  }
                  lVar7 = *(long *)(unaff_x20 + 0x20);
                  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                    lVar7 = FUN_031c09d4();
                  }
                  uVar6 = FUN_058a4c0c(unaff_x21 + 0x2c,
                                       *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x2d0));
                  if ((0xd < *(uint *)(lVar4 + 0x18)) &&
                     (*(undefined8 *)(lVar4 + 0x88) = uVar6, *(uint *)(lVar4 + 0x18) != 0xe)) {
                    *(undefined8 *)(lVar4 + 0x90) = *(undefined8 *)puVar2;
                    lVar7 = *(long *)(unaff_x20 + 0x20);
                    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                      lVar7 = FUN_031c09d4();
                    }
                    uVar6 = FUN_04db3034((undefined1 *)(unaff_x21 + 0x2d),
                                         *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x2d8));
                    if ((0xf < *(uint *)(lVar4 + 0x18)) &&
                       (*(undefined8 *)(lVar4 + 0x98) = uVar6, *(uint *)(lVar4 + 0x18) != 0x10)) {
                      *(undefined8 *)(lVar4 + 0xa0) = *(undefined8 *)PTR_DAT_070c3400;
                      goto LAB_04e222e4;
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
  else {
    lVar4 = FUN_03188b1c(*(undefined8 *)puVar1,0x10);
    if (lVar4 == 0) {
LAB_04e2230c:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar3;
      if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      uVar6 = FUN_0597a880();
      if ((1 < *(uint *)(lVar4 + 0x18)) &&
         (*(undefined8 *)(lVar4 + 0x28) = uVar6, *(uint *)(lVar4 + 0x18) != 2)) {
        *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)puVar2;
        lVar7 = *(long *)(unaff_x20 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_031c09d4();
        }
        uVar6 = FUN_0592cd7c(unaff_x21 + 8,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x2a8));
        if ((3 < *(uint *)(lVar4 + 0x18)) &&
           (*(undefined8 *)(lVar4 + 0x38) = uVar6, *(uint *)(lVar4 + 0x18) != 4)) {
          *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)puVar2;
          lVar7 = *(long *)(unaff_x20 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_031c09d4();
          }
          uVar6 = FUN_0597a880(unaff_x21 + 0x10,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x2b0));
          if ((5 < *(uint *)(lVar4 + 0x18)) &&
             (*(undefined8 *)(lVar4 + 0x48) = uVar6, *(uint *)(lVar4 + 0x18) != 6)) {
            *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)puVar2;
            lVar7 = *(long *)(unaff_x20 + 0x20);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_031c09d4();
            }
            uVar6 = FUN_0592cd7c(unaff_x21 + 0x18,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x2b8));
            if ((7 < *(uint *)(lVar4 + 0x18)) &&
               (*(undefined8 *)(lVar4 + 0x58) = uVar6, *(uint *)(lVar4 + 0x18) != 8)) {
              *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)puVar2;
              lVar7 = *(long *)(unaff_x20 + 0x20);
                    /* try { // try from 04e21f30 to 04f220ef has its CatchHandler @ 04e21f30
                       catch() { ... } // from try @ 04e21f30 with catch @ 04e21f30
                       catch() { ... } // from try @ 04e22174 with catch @ 04e21f30
                       catch() { ... } // from try @ 04e22188 with catch @ 04e21f30
                       catch() { ... } // from try @ 04e221c4 with catch @ 04e21f30
                       catch() { ... } // from try @ 04e2221c with catch @ 04e21f30 */
              if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_031c09d4();
              }
              uVar6 = FUN_0597a880(unaff_x21 + 0x20,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x2c0)
                                  );
              if ((9 < *(uint *)(lVar4 + 0x18)) &&
                 (*(undefined8 *)(lVar4 + 0x68) = uVar6, *(uint *)(lVar4 + 0x18) != 10)) {
                *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)puVar2;
                lVar7 = *(long *)(unaff_x20 + 0x20);
                if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                  lVar7 = FUN_031c09d4();
                }
                uVar6 = FUN_0592cd7c(unaff_x21 + 0x28,
                                     *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x2c8));
                if ((0xb < *(uint *)(lVar4 + 0x18)) &&
                   (*(undefined8 *)(lVar4 + 0x78) = uVar6, puVar1 = PTR_DAT_070c1958,
                   *(uint *)(lVar4 + 0x18) != 0xc)) {
                  *(undefined8 *)(lVar4 + 0x80) = *(undefined8 *)puVar2;
                  if (*(int *)(*(long *)(puVar1 + 0x28) + 0xe4) == 0) {
                    thunk_FUN_031e5338();
                  }
                  lVar7 = *(long *)(unaff_x20 + 0x20);
                  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                    lVar7 = FUN_031c09d4();
                  }
                  uVar6 = FUN_058a4c0c(unaff_x21 + 0x2c,
                                       *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x2d0));
                  if ((0xd < *(uint *)(lVar4 + 0x18)) &&
                     (*(undefined8 *)(lVar4 + 0x88) = uVar6, *(uint *)(lVar4 + 0x18) != 0xe)) {
                    *(undefined8 *)(lVar4 + 0x90) = *(undefined8 *)puVar2;
                    lVar7 = *plVar5;
                    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    if (uVar9 != 0) {
                      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_070f5978) {
                          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                          goto LAB_04e222c8;
                        }
                        uVar9 = uVar9 - 1;
                        piVar10 = piVar10 + 4;
                      } while (uVar9 != 0);
                    }
                    puVar8 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)PTR_DAT_070f5978,1);
LAB_04e222c8:
                    uVar6 = (*(code *)*puVar8)(plVar5,puVar8[1]);
                    if ((*(uint *)(lVar4 + 0x18) & 0xfffffff0) != 0) {
                      *(undefined8 *)(lVar4 + 0x98) = uVar6;
LAB_04e222e4:
                      FUN_057bfff0(lVar4,0);
                      return;
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
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


