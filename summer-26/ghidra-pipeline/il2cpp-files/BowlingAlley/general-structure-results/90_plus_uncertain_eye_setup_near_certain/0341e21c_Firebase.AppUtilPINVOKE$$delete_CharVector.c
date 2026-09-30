/*
FUNCTION_NAME: Firebase.AppUtilPINVOKE$$delete_CharVector
ENTRY_POINT: 0341e21c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0341e5e4) */

void Firebase_AppUtilPINVOKE__delete_CharVector(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  thunk_FUN_032e1da0();
  thunk_FUN_032e1da0(PTR_DAT_07279f60);
  thunk_FUN_032e1da0(PTR_DAT_0727a790);
  thunk_FUN_032e1da0(PTR_DAT_0727a180);
  thunk_FUN_032e1da0(PTR_DAT_072794f0);
  thunk_FUN_032e1da0(PTR_DAT_0727a798);
  thunk_FUN_032e1da0(PTR_DAT_0727a190);
  thunk_FUN_032e1da0(PTR_DAT_0727a198);
  *(undefined1 *)(unaff_x21 + 0xeba) = 1;
  if (unaff_x19 != (long *)0x0) {
    uVar7 = OVRPlugin_OVRP_1_58_0___cctor();
    if ((uVar7 & 1) == 0) {
      lVar8 = (**(code **)(*unaff_x19 + 0x4d8))();
      if (lVar8 != 0) {
        plVar10 = (long *)FUN_04efafb4(lVar8,*(undefined8 *)PTR_DAT_0727a788);
        puVar6 = PTR_DAT_0727a790;
        puVar5 = PTR_DAT_0727a198;
        puVar4 = PTR_DAT_0727a190;
        puVar3 = PTR_DAT_0727a180;
        puVar2 = PTR_DAT_072798f8;
        puVar1 = PTR_DAT_072794f0;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0341e4f4 with catch @ 0341e5e0 */
          FUN_032d5ee8();
        }
        do {
          lVar8 = *plVar10;
          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar7 != 0) {
            piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar11 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0341e3d0;
              }
              uVar7 = uVar7 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar7 != 0);
          }
          puVar11 = (undefined8 *)FUN_032937ac(plVar10,*(long *)puVar3,0);
LAB_0341e3d0:
          uVar7 = (*(code *)*puVar11)(plVar10,puVar11[1]);
          if ((uVar7 & 1) == 0) {
            if (plVar10 == (long *)0x0) {
              return;
            }
            lVar8 = *plVar10;
            uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar7 == 0) goto LAB_0341e580;
            piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_0341e568;
          }
          lVar8 = *plVar10;
          uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar7 != 0) {
            piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
                puVar11 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0341e42c;
              }
              uVar7 = uVar7 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar7 != 0);
          }
          puVar11 = (undefined8 *)FUN_032937ac(plVar10,*(long *)puVar6,0);
LAB_0341e42c:
          lVar8 = (*(code *)*puVar11)(plVar10,puVar11[1]);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (*(long *)(lVar8 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar7 = FUN_057aa36c(*(long *)(lVar8 + 0x68),*(undefined8 *)puVar4,0);
          if ((uVar7 & 1) == 0) {
LAB_0341e4c0:
            if (*(long *)(lVar8 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            uVar7 = FUN_057aa36c(*(long *)(lVar8 + 0x68),*(undefined8 *)puVar5,0);
            if ((uVar7 & 1) != 0) {
              uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              uVar7 = FUN_06be9890(uVar9,0,0);
              if ((uVar7 & 1) != 0) {
                plVar12 = *(long **)(unaff_x20 + 0x38);
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0341e558 with catch @ 0341e5dc */
                  FUN_032d5ee8();
                }
                (**(code **)(*plVar12 + 0x558))
                          (plVar12,*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(*plVar12 + 0x560));
                uVar9 = *(undefined8 *)(lVar8 + 0x38);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                }
                FUN_06bb23f0(uVar9,0);
              }
            }
          }
          else {
            uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            uVar7 = FUN_06be9890(uVar9,0,0);
            if ((uVar7 & 1) == 0) goto LAB_0341e4c0;
            plVar12 = *(long **)(unaff_x20 + 0x30);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            (**(code **)(*plVar12 + 0x558))
                      (plVar12,*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(*plVar12 + 0x560));
            uVar9 = *(undefined8 *)(lVar8 + 0x38);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            FUN_06bb23f0(uVar9,0);
          }
        } while( true );
      }
    }
    else {
      lVar8 = (**(code **)(*unaff_x19 + 0x178))();
      if (lVar8 != 0) {
        uVar9 = FUN_057a19ac(*(undefined8 *)PTR_DAT_0727a798,*(undefined8 *)(lVar8 + 0x18),0);
        if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
        }
        FUN_06bb2a00(uVar9,0);
        if (*(long *)(unaff_x20 + 0x20) != 0) {
          FUN_06e0380c(*(long *)(unaff_x20 + 0x20),0,0);
          if (*(long *)(unaff_x20 + 0x28) != 0) {
            FUN_06e0380c(*(long *)(unaff_x20 + 0x28),0,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar13 = piVar13 + 4;
    if (uVar7 == 0) break;
LAB_0341e568:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07279f60) {
      puVar11 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0341e59c;
    }
  }
LAB_0341e580:
  puVar11 = (undefined8 *)FUN_032937ac(plVar10,*(long *)PTR_DAT_07279f60,0);
LAB_0341e59c:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return;
}


