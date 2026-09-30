/*
FUNCTION_NAME: Meta.XR.Movement.FaceTracking.Samples.RigLogic.Driver$$ToString
ENTRY_POINT: 06c17664
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


void Meta_XR_Movement_FaceTracking_Samples_RigLogic_Driver__ToString(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  long unaff_x19;
  long unaff_x20;
  uint uVar21;
  long *plVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long in_stack_00000008;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0xb78));
  FUN_03c8f898(PTR_DAT_08e69878);
  FUN_03c8f898(PTR_DAT_08e68f00);
  FUN_03c8f898(PTR_DAT_08e6a338);
  FUN_03c8f898(PTR_DAT_08e695f0);
  FUN_03c8f898(PTR_DAT_08e81430);
  FUN_03c8f898(PTR_DAT_08e87d40);
  FUN_03c8f898(PTR_DAT_08e87bb8);
  FUN_03c8f898(PTR_DAT_08e87d48);
                    /* try { // try from 06c176d0 to 06d176d3 has its CatchHandler @ 06c176dc */
  FUN_03c8f898(PTR_DAT_08e82af0);
  FUN_03c8f898(PTR_DAT_08e87d50);
  FUN_03c8f898(PTR_DAT_08e87d58);
  FUN_03c8f898(PTR_DAT_08e80b78);
  FUN_03c8f898(PTR_DAT_08e87d60);
  FUN_03c8f898(PTR_DAT_08e87d68);
  FUN_03c8f898(PTR_DAT_08e87d70);
  FUN_03c8f898(PTR_DAT_08e87bf8);
  FUN_03c8f898(PTR_DAT_08e87d78);
  *(undefined1 *)(unaff_x20 + 0xf81) = 1;
  in_stack_00000008 = 0;
  if (unaff_x19 == 0) {
    return;
  }
  lVar11 = FUN_06f78bac();
  puVar5 = PTR_DAT_08e80b60;
  if (lVar11 == 0) goto LAB_06c18310;
  if (*(int *)(lVar11 + 0x10) == 0) {
    return;
  }
  lVar12 = *(long *)PTR_DAT_08e80b60;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar12 = *(long *)puVar5;
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x28);
  if (lVar12 == 0) goto LAB_06c18310;
  iVar9 = *(int *)(lVar12 + 0x18);
  *(undefined4 *)(lVar12 + 0x18) = 0;
  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
  if (0 < iVar9) {
    FUN_071245a8(*(undefined8 *)(lVar12 + 0x10),0,iVar9,0);
    lVar12 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28);
  }
  FUN_06c1834c(lVar11,lVar12);
  lVar11 = *(long *)(*(long *)puVar5 + 0xb8);
  lVar12 = *(long *)(lVar11 + 0x10);
  if (lVar12 == 0) goto LAB_06c18310;
  iVar9 = *(int *)(lVar12 + 0x18);
  *(undefined4 *)(lVar12 + 0x18) = 0;
  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
  if (0 < iVar9) {
    FUN_071245a8(*(undefined8 *)(lVar12 + 0x10),0,iVar9,0);
    lVar11 = *(long *)(*(long *)puVar5 + 0xb8);
  }
  puVar4 = PTR_DAT_08e69b48;
  if (*(long *)(lVar11 + 0x28) == 0) goto LAB_06c18310;
  FUN_05212a24(*(long *)(lVar11 + 0x28),0,*(undefined8 *)PTR_DAT_08e69b48);
  iVar9 = FUN_06c16c44();
  if (iVar9 < 0) {
LAB_06c17964:
    uVar21 = 0;
  }
  else {
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar11 = *(long *)puVar5;
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x28);
    if (lVar11 == 0) goto LAB_06c18310;
    uVar13 = FUN_05212a24(lVar11,0,*(undefined8 *)puVar4);
    puVar6 = PTR_DAT_08e87b78;
    iVar20 = iVar9;
    do {
      iVar19 = iVar20;
      if (iVar19 < 1) break;
      lVar11 = *(long *)puVar5;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar11 = *(long *)puVar5;
      }
      lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
      if (lVar12 == 0) goto LAB_06c18310;
      plVar22 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x38);
      lVar11 = FUN_05212a24(lVar12,iVar19 + -1,*(undefined8 *)puVar6);
      if ((lVar11 == 0) || (plVar22 == (long *)0x0)) goto LAB_06c18310;
      iVar10 = (**(code **)(*plVar22 + 0x1a8))
                         (plVar22,*(undefined8 *)(lVar11 + 0x28),uVar13,3,
                          *(undefined8 *)(*plVar22 + 0x1b0));
      iVar20 = iVar19 + -1;
    } while (iVar10 == 0);
    do {
      iVar20 = iVar9;
      lVar11 = *(long *)puVar5;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar11 = *(long *)puVar5;
      }
      lVar18 = *(long *)(lVar11 + 0xb8);
      lVar12 = *(long *)(lVar18 + 8);
      if (lVar12 == 0) goto LAB_06c18310;
      if (*(int *)(lVar12 + 0x18) + -1 <= iVar20) break;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar18 = *(long *)(*(long *)puVar5 + 0xb8);
        lVar12 = *(long *)(lVar18 + 8);
        if (lVar12 == 0) goto LAB_06c18310;
      }
      plVar22 = *(long **)(lVar18 + 0x38);
      lVar11 = FUN_05212a24(lVar12,iVar20 + 1,*(undefined8 *)puVar6);
      if ((lVar11 == 0) || (plVar22 == (long *)0x0)) goto LAB_06c18310;
      iVar10 = (**(code **)(*plVar22 + 0x1a8))
                         (plVar22,*(undefined8 *)(lVar11 + 0x28),uVar13,3,
                          *(undefined8 *)(*plVar22 + 0x1b0));
      iVar9 = iVar20 + 1;
    } while (iVar10 == 0);
    puVar8 = PTR_DAT_08e87c00;
    puVar7 = PTR_DAT_08e87b68;
    if (iVar20 < iVar19) goto LAB_06c17964;
    uVar21 = 0;
    do {
      lVar11 = *(long *)puVar5;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar11 = *(long *)puVar5;
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
      if ((lVar11 == 0) || (lVar11 = FUN_05212a24(lVar11,iVar19,*(undefined8 *)puVar6), lVar11 == 0)
         ) goto LAB_06c18310;
      uVar16 = FUN_06c12174();
      lVar11 = *(long *)puVar5;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar11);
        lVar11 = *(long *)puVar5;
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
      if (lVar11 == 0) goto LAB_06c18310;
      if ((uVar16 & 1) == 0) {
        FUN_052143ec(lVar11,iVar19,*(undefined8 *)puVar7);
        iVar20 = iVar20 + -1;
      }
      else {
        lVar11 = FUN_05212a24(lVar11,iVar19,*(undefined8 *)puVar6);
        if ((lVar11 == 0) || (*(long *)(lVar11 + 0x18) == 0)) goto LAB_06c18310;
        lVar12 = *(long *)(*(long *)puVar5 + 0xb8);
        if (*(long *)(lVar12 + 0x28) == 0) goto LAB_06c18310;
        if (*(int *)(*(long *)(lVar12 + 0x28) + 0x18) + -1 ==
            *(int *)(*(long *)(lVar11 + 0x18) + 0x18)) {
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar12 = *(long *)(*(long *)puVar5 + 0xb8);
          }
          if (*(long *)(lVar12 + 8) == 0) goto LAB_06c18310;
          lVar11 = *(long *)(lVar12 + 0x10);
          uVar13 = FUN_05212a24(*(long *)(lVar12 + 8),iVar19,*(undefined8 *)puVar6);
          if (lVar11 == 0) goto LAB_06c18310;
          lVar12 = *(long *)(lVar11 + 0x10);
          lVar18 = *(long *)puVar8;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_06c18310;
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
            thunk_FUN_03d233cc();
          }
          else {
            FUN_05212cf4(lVar11,uVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          uVar21 = 1;
        }
        iVar19 = iVar19 + 1;
      }
    } while (iVar19 <= iVar20);
  }
  lVar11 = *(long *)puVar5;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar11 = *(long *)puVar5;
  }
  lVar12 = *(long *)(lVar11 + 0xb8);
  if (*(long *)(lVar12 + 0x10) != 0) {
    iVar9 = *(int *)(*(long *)(lVar12 + 0x10) + 0x18);
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar12 = *(long *)(*(long *)puVar5 + 0xb8);
    }
    lVar11 = *(long *)(lVar12 + 0x28);
    if (lVar11 != 0) {
      if (iVar9 == 0) {
        lVar11 = FUN_05212a24(lVar11,0,*(undefined8 *)puVar4);
        FUN_06c1558c(lVar11,uVar21 ^ 1,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10));
        puVar4 = PTR_DAT_08e87b78;
        lVar12 = *(long *)puVar5;
        lVar18 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
        if (lVar18 != 0) {
          if (*(int *)(lVar18 + 0x18) == 0) {
            uVar13 = FUN_06f7465c(*(undefined8 *)PTR_DAT_08e87bf8,lVar11,
                                  *(undefined8 *)PTR_DAT_08e82af0,0);
            lVar11 = *(long *)PTR_DAT_08e69670;
            iVar9 = *(int *)(lVar11 + 0xe0);
joined_r0x06c18040:
            if (iVar9 == 0) {
              thunk_FUN_03cd7500(lVar11);
            }
            FUN_085a48e4(uVar13,0);
            return;
          }
          if (lVar11 != 0) {
            iVar20 = 0;
            iVar9 = *(int *)(lVar11 + 0x10) + 0x4b;
            while( true ) {
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
                lVar12 = *(long *)puVar5;
              }
              lVar18 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
              if (lVar18 == 0) goto LAB_06c18310;
              if (*(int *)(lVar18 + 0x18) <= iVar20) break;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
                lVar18 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
                if (lVar18 == 0) goto LAB_06c18310;
              }
              lVar18 = FUN_05212a24(lVar18,iVar20,*(undefined8 *)puVar4);
              if ((lVar18 == 0) || (*(long *)(lVar18 + 0x30) == 0)) goto LAB_06c18310;
              lVar12 = *(long *)puVar5;
              iVar20 = iVar20 + 1;
              iVar9 = iVar9 + *(int *)(*(long *)(lVar18 + 0x30) + 0x10) + 7;
            }
            plVar22 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6a338);
            FUN_06f7c298(plVar22,iVar9,0);
            if (plVar22 != (long *)0x0) {
              if (uVar21 == 0) {
                lVar12 = FUN_06f7c2f0(plVar22,*(undefined8 *)PTR_DAT_08e87bf8,0);
                if (lVar12 == 0) goto LAB_06c18310;
                lVar11 = FUN_06f7c2f0(lVar12,lVar11,0);
                puVar3 = (undefined8 *)PTR_DAT_08e87d50;
              }
              else {
                lVar12 = FUN_06f7c2f0(plVar22,*(undefined8 *)PTR_DAT_08e87d58,0);
                if ((lVar12 == 0) || (lVar11 = FUN_06f7c2f0(lVar12,lVar11,0), lVar11 == 0))
                goto LAB_06c18310;
                lVar11 = FUN_06f7c2f0(lVar11,*(undefined8 *)PTR_DAT_08e87d60,0);
                lVar12 = *(long *)puVar5;
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_03cd7500(lVar12);
                  lVar12 = *(long *)puVar5;
                }
                lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x28);
                if ((lVar12 == 0) || (lVar11 == 0)) goto LAB_06c18310;
                lVar11 = FUN_06f85304(lVar11,*(int *)(lVar12 + 0x18) + -1,0);
                puVar3 = (undefined8 *)PTR_DAT_08e87d68;
              }
              if (lVar11 != 0) {
                FUN_06f7c2f0(lVar11,*puVar3,0);
                puVar6 = PTR_DAT_08e87bb8;
                iVar9 = 0;
                goto LAB_06c180e0;
              }
            }
          }
        }
      }
      else {
        plVar22 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,*(int *)(lVar11 + 0x18) + -1)
        ;
        puVar7 = PTR_DAT_08e87d40;
        puVar6 = PTR_DAT_08e80b78;
        iVar9 = 0;
        uVar23 = 0;
        lVar11 = 0;
        while( true ) {
          lVar12 = *(long *)puVar5;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar12 = *(long *)puVar5;
          }
          lVar18 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
          if (lVar18 == 0) goto LAB_06c18310;
          if (*(int *)(lVar18 + 0x18) <= iVar9) break;
          if (lVar11 != 0) goto LAB_06c17e88;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar18 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
            if (lVar18 == 0) goto LAB_06c18310;
          }
          lVar11 = FUN_05212a24(lVar18,iVar9,*(undefined8 *)PTR_DAT_08e87b78);
          if ((lVar11 == 0) || (lVar12 = *(long *)(lVar11 + 0x18), lVar12 == 0)) goto LAB_06c18310;
          bVar2 = true;
          uVar16 = 0;
          while ((bVar2 && ((long)uVar16 < (long)*(int *)(lVar12 + 0x18)))) {
            lVar12 = *(long *)puVar5;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar12 = *(long *)puVar5;
            }
            lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x28);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            uVar13 = FUN_05212a24(lVar12,uVar16 + 1 & 0xffffffff,*(undefined8 *)puVar4);
            lVar12 = *(long *)(lVar11 + 0x18);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            if (*(uint *)(lVar12 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            uVar24 = *(undefined8 *)(lVar12 + uVar16 * 8 + 0x20);
            uVar14 = FUN_06c185e4(uVar13,uVar24,&stack0x00000008);
            lVar12 = in_stack_00000008;
            if ((uVar14 & 1) == 0) {
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              uVar23 = FUN_06c16d78(uVar24);
              uVar23 = FUN_06f74e30(*(undefined8 *)puVar7,uVar13,*(undefined8 *)puVar6,uVar23,0);
              bVar2 = false;
            }
            else {
              if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              if ((in_stack_00000008 != 0) &&
                 (lVar18 = thunk_FUN_03cf5138(in_stack_00000008,*(undefined8 *)(*plVar22 + 0x40)),
                 lVar18 == 0)) {
                uVar13 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
                FUN_03c8f9fc(uVar13,0);
              }
              if (*(uint *)(plVar22 + 3) <= uVar16) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb38();
              }
              plVar22[uVar16 + 4] = lVar12;
              thunk_FUN_03d233cc(plVar22 + uVar16 + 4,lVar12);
              bVar2 = true;
            }
            lVar12 = *(long *)(lVar11 + 0x18);
            uVar16 = uVar16 + 1;
            if (lVar12 == 0) goto LAB_06c18310;
          }
          if (!bVar2) {
            lVar11 = 0;
          }
          iVar9 = iVar9 + 1;
        }
        if (lVar11 == 0) {
          uVar16 = FUN_06f74e14(uVar23,0);
          lVar11 = *(long *)PTR_DAT_08e69670;
          iVar9 = *(int *)(lVar11 + 0xe0);
          uVar13 = *(undefined8 *)PTR_DAT_08e87d48;
          if ((uVar16 & 1) == 0) {
            uVar13 = uVar23;
          }
          goto joined_r0x06c18040;
        }
LAB_06c17e88:
        if (*(long *)(lVar11 + 0x10) != 0) {
          plVar15 = (long *)FUN_0702dc3c(*(long *)(lVar11 + 0x10),*(undefined8 *)(lVar11 + 0x20),
                                         plVar22,0);
          plVar17 = *(long **)(lVar11 + 0x10);
          if (plVar17 != (long *)0x0) {
            uVar13 = (**(code **)(*plVar17 + 0x408))(plVar17,*(undefined8 *)(*plVar17 + 0x410));
            uVar23 = *(undefined8 *)PTR_DAT_08e81430;
            if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
            }
            uVar23 = FUN_0710fcf0(uVar23,0);
            uVar16 = FUN_0711a11c(uVar13,uVar23,0);
            if ((uVar16 & 1) != 0) {
              if ((plVar15 == (long *)0x0) ||
                 (uVar16 = (**(code **)(*plVar15 + 0x138))
                                     (plVar15,0,*(undefined8 *)(*plVar15 + 0x140)),
                 (uVar16 & 1) != 0)) {
                if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                uVar13 = *(undefined8 *)PTR_DAT_08e87d78;
              }
              else {
                uVar13 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
                uVar13 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e87d70,uVar13,0);
                if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                  thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
                }
              }
              FUN_085a3c50(uVar13,0);
            }
            lVar12 = *(long *)puVar5;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar12 = *(long *)puVar5;
            }
            lVar18 = **(long **)(lVar12 + 0xb8);
            if (lVar18 == 0) {
              return;
            }
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar18 = **(long **)(*(long *)puVar5 + 0xb8);
              if (lVar18 == 0) goto LAB_06c18310;
            }
            (**(code **)(lVar18 + 0x18))
                      (*(undefined8 *)(lVar18 + 0x40),*(undefined8 *)(lVar11 + 0x28),plVar22,
                       *(undefined8 *)(lVar18 + 0x28));
            return;
          }
        }
      }
    }
  }
LAB_06c18310:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
LAB_06c180e0:
  lVar11 = *(long *)puVar5;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar11 = *(long *)puVar5;
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
  if (lVar11 == 0) goto LAB_06c18310;
  if (*(int *)(lVar11 + 0x18) <= iVar9) {
    uVar13 = (**(code **)(*plVar22 + 0x168))(plVar22,*(undefined8 *)(*plVar22 + 0x170));
    if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
    }
    FUN_085a48e4(uVar13,0);
    if (DAT_09418fe9 == '\0') {
      FUN_03c8f898(PTR_DAT_08e87bc8);
      DAT_09418fe9 = '\x01';
    }
    puVar5 = PTR_DAT_08e87bc8;
    uVar13 = **(undefined8 **)(*(long *)PTR_DAT_08e87bc8 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar16 = FUN_085e285c(uVar13,0);
    if ((uVar16 & 1) == 0) {
      return;
    }
    if (DAT_09418fe9 == '\0') {
      FUN_03c8f898(PTR_DAT_08e87bc8);
      DAT_09418fe9 = '\x01';
    }
    if (**(long **)(*(long *)puVar5 + 0xb8) != 0) {
      FUN_06c14f7c(**(long **)(*(long *)puVar5 + 0xb8),1,1);
      return;
    }
    goto LAB_06c18310;
  }
  lVar11 = FUN_06f7c2f0(plVar22,*(undefined8 *)puVar6,0);
  lVar12 = *(long *)puVar5;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_03cd7500(lVar12);
    lVar12 = *(long *)puVar5;
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
  if (((lVar12 == 0) || (lVar12 = FUN_05212a24(lVar12,iVar9,*(undefined8 *)puVar4), lVar12 == 0)) ||
     (lVar11 == 0)) goto LAB_06c18310;
  FUN_06f7c2f0(lVar11,*(undefined8 *)(lVar12 + 0x30),0);
  iVar9 = iVar9 + 1;
  goto LAB_06c180e0;
}


