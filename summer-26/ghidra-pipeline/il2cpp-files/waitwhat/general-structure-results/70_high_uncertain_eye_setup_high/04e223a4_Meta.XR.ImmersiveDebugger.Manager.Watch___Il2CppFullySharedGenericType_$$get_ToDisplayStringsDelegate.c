/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<__Il2CppFullySharedGenericType>$$get_ToDisplayStringsDelegate
ENTRY_POINT: 04e223a4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<__Il2CppFullySharedGenericType>__get_ToDisplayStringsDelegate
               (undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x24;
  
  plVar2 = (long *)thunk_FUN_031c39fc(*param_1);
  if (plVar2 == (long *)0x0) {
    lVar3 = FUN_03188b1c(*unaff_x19,0x10);
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4(*(long *)(unaff_x20 + 0x20));
    }
    uVar4 = FUN_0597a880();
    if (lVar3 == 0) goto LAB_04e228b0;
    if ((*(int *)(lVar3 + 0x18) != 0) &&
       (*(undefined8 *)(lVar3 + 0x20) = uVar4, *(int *)(lVar3 + 0x18) != 1)) {
      *(undefined8 *)(lVar3 + 0x28) = *unaff_x24;
      lVar5 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_031c09d4();
      }
      uVar4 = FUN_0592cd7c(unaff_x21 + 8,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x2a8));
      if ((2 < *(uint *)(lVar3 + 0x18)) &&
         (*(undefined8 *)(lVar3 + 0x30) = uVar4, *(uint *)(lVar3 + 0x18) != 3)) {
        *(undefined8 *)(lVar3 + 0x38) = *unaff_x24;
        lVar5 = *(long *)(unaff_x20 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_031c09d4();
        }
        uVar4 = FUN_0597a880(unaff_x21 + 0x10,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x2b0));
        if ((4 < *(uint *)(lVar3 + 0x18)) &&
           (*(undefined8 *)(lVar3 + 0x40) = uVar4, *(uint *)(lVar3 + 0x18) != 5)) {
          *(undefined8 *)(lVar3 + 0x48) = *unaff_x24;
          lVar5 = *(long *)(unaff_x20 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_031c09d4();
          }
          uVar4 = FUN_0592cd7c(unaff_x21 + 0x18,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x2b8));
          if ((6 < *(uint *)(lVar3 + 0x18)) &&
             (*(undefined8 *)(lVar3 + 0x50) = uVar4, *(uint *)(lVar3 + 0x18) != 7)) {
            *(undefined8 *)(lVar3 + 0x58) = *unaff_x24;
            lVar5 = *(long *)(unaff_x20 + 0x20);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_031c09d4();
            }
            uVar4 = FUN_0597a880(unaff_x21 + 0x20,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x2c0));
            if ((8 < *(uint *)(lVar3 + 0x18)) &&
               (*(undefined8 *)(lVar3 + 0x60) = uVar4, *(uint *)(lVar3 + 0x18) != 9)) {
              *(undefined8 *)(lVar3 + 0x68) = *unaff_x24;
              lVar5 = *(long *)(unaff_x20 + 0x20);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_031c09d4();
              }
              uVar4 = FUN_0592cd7c(unaff_x21 + 0x28,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x2c8)
                                  );
              if ((10 < *(uint *)(lVar3 + 0x18)) &&
                 (*(undefined8 *)(lVar3 + 0x70) = uVar4, puVar1 = PTR_DAT_070c1958,
                 *(uint *)(lVar3 + 0x18) != 0xb)) {
                *(undefined8 *)(lVar3 + 0x78) = *unaff_x24;
                if (*(int *)(*(long *)(puVar1 + 0x28) + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                }
                lVar5 = *(long *)(unaff_x20 + 0x20);
                if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_031c09d4();
                }
                uVar4 = FUN_058a4c0c(unaff_x21 + 0x2c,
                                     *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x2d0));
                if ((0xc < *(uint *)(lVar3 + 0x18)) &&
                   (*(undefined8 *)(lVar3 + 0x80) = uVar4, *(uint *)(lVar3 + 0x18) != 0xd)) {
                  *(undefined8 *)(lVar3 + 0x88) = *unaff_x24;
                  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
                    FUN_031c09d4();
                  }
                  uVar4 = FUN_04db3034();
                  if ((0xe < *(uint *)(lVar3 + 0x18)) &&
                     (*(undefined8 *)(lVar3 + 0x90) = uVar4, *(uint *)(lVar3 + 0x18) != 0xf)) {
                    *(undefined8 *)(lVar3 + 0x98) = *(undefined8 *)PTR_DAT_070c3400;
                    goto LAB_04e2288c;
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
    lVar3 = FUN_03188b1c(*unaff_x19,0xf);
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4(*(long *)(unaff_x20 + 0x20));
    }
    uVar4 = FUN_0597a880();
    if (lVar3 == 0) {
LAB_04e228b0:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if ((*(int *)(lVar3 + 0x18) != 0) &&
       (*(undefined8 *)(lVar3 + 0x20) = uVar4, *(int *)(lVar3 + 0x18) != 1)) {
      *(undefined8 *)(lVar3 + 0x28) = *unaff_x24;
      lVar5 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_031c09d4();
      }
      uVar4 = FUN_0592cd7c(unaff_x21 + 8,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x2a8));
      if ((2 < *(uint *)(lVar3 + 0x18)) &&
         (*(undefined8 *)(lVar3 + 0x30) = uVar4, *(uint *)(lVar3 + 0x18) != 3)) {
        *(undefined8 *)(lVar3 + 0x38) = *unaff_x24;
        lVar5 = *(long *)(unaff_x20 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_031c09d4();
        }
        uVar4 = FUN_0597a880(unaff_x21 + 0x10,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x2b0));
        if ((4 < *(uint *)(lVar3 + 0x18)) &&
           (*(undefined8 *)(lVar3 + 0x40) = uVar4, *(uint *)(lVar3 + 0x18) != 5)) {
          *(undefined8 *)(lVar3 + 0x48) = *unaff_x24;
          lVar5 = *(long *)(unaff_x20 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_031c09d4();
          }
          uVar4 = FUN_0592cd7c(unaff_x21 + 0x18,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x2b8));
          if ((6 < *(uint *)(lVar3 + 0x18)) &&
             (*(undefined8 *)(lVar3 + 0x50) = uVar4, *(uint *)(lVar3 + 0x18) != 7)) {
            *(undefined8 *)(lVar3 + 0x58) = *unaff_x24;
            lVar5 = *(long *)(unaff_x20 + 0x20);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_031c09d4();
            }
            uVar4 = FUN_0597a880(unaff_x21 + 0x20,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x2c0));
            if ((8 < *(uint *)(lVar3 + 0x18)) &&
               (*(undefined8 *)(lVar3 + 0x60) = uVar4, *(uint *)(lVar3 + 0x18) != 9)) {
              *(undefined8 *)(lVar3 + 0x68) = *unaff_x24;
              lVar5 = *(long *)(unaff_x20 + 0x20);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_031c09d4();
              }
              uVar4 = FUN_0592cd7c(unaff_x21 + 0x28,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x2c8)
                                  );
              if ((10 < *(uint *)(lVar3 + 0x18)) &&
                 (*(undefined8 *)(lVar3 + 0x70) = uVar4, puVar1 = PTR_DAT_070c1958,
                 *(uint *)(lVar3 + 0x18) != 0xb)) {
                *(undefined8 *)(lVar3 + 0x78) = *unaff_x24;
                if (*(int *)(*(long *)(puVar1 + 0x28) + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                }
                lVar5 = *(long *)(unaff_x20 + 0x20);
                if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_031c09d4();
                }
                uVar4 = FUN_058a4c0c(unaff_x21 + 0x2c,
                                     *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x2d0));
                if ((0xc < *(uint *)(lVar3 + 0x18)) &&
                   (*(undefined8 *)(lVar3 + 0x80) = uVar4, *(uint *)(lVar3 + 0x18) != 0xd)) {
                  *(undefined8 *)(lVar3 + 0x88) = *unaff_x24;
                  lVar5 = *plVar2;
                  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar7 != 0) {
                    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_070f5978) {
                        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                        goto LAB_04e22870;
                      }
                      uVar7 = uVar7 - 1;
                      piVar8 = piVar8 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_031c0d08(plVar2,*(long *)PTR_DAT_070f5978,1);
LAB_04e22870:
                  uVar4 = (*(code *)*puVar6)(plVar2,puVar6[1]);
                  if (0xe < *(uint *)(lVar3 + 0x18)) {
                    *(undefined8 *)(lVar3 + 0x90) = uVar4;
LAB_04e2288c:
                    FUN_057bfff0(lVar3,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


