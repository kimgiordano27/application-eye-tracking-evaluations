/*
FUNCTION_NAME: Meta.XR.Movement.FaceTracking.Samples.RigLogic.CorrMatch$$ToString
ENTRY_POINT: 06c17860
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


void Meta_XR_Movement_FaceTracking_Samples_RigLogic_CorrMatch__ToString(void)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  int unaff_w21;
  uint uVar17;
  long *plVar18;
  undefined8 *unaff_x24;
  undefined8 uVar19;
  undefined8 uVar20;
  long *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  
  iVar16 = unaff_w21;
  do {
    iVar15 = iVar16;
    if (iVar15 < 1) break;
    lVar7 = *unaff_x28;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar7 = *unaff_x28;
    }
    lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar8 == 0) goto LAB_06c18310;
    plVar18 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x38);
    lVar7 = FUN_05212a24(lVar8,iVar15 + -1,*unaff_x24);
    if ((lVar7 == 0) || (plVar18 == (long *)0x0)) goto LAB_06c18310;
    iVar6 = (**(code **)(*plVar18 + 0x1a8))(plVar18,*(undefined8 *)(lVar7 + 0x28));
    iVar16 = iVar15 + -1;
  } while (iVar6 == 0);
  do {
    iVar16 = unaff_w21;
    lVar7 = *unaff_x28;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar7 = *unaff_x28;
    }
    lVar14 = *(long *)(lVar7 + 0xb8);
    lVar8 = *(long *)(lVar14 + 8);
    if (lVar8 == 0) goto LAB_06c18310;
    if (*(int *)(lVar8 + 0x18) + -1 <= iVar16) break;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar14 = *(long *)(*unaff_x28 + 0xb8);
      lVar8 = *(long *)(lVar14 + 8);
      if (lVar8 == 0) goto LAB_06c18310;
    }
    plVar18 = *(long **)(lVar14 + 0x38);
    lVar7 = FUN_05212a24(lVar8,iVar16 + 1,*unaff_x24);
    if ((lVar7 == 0) || (plVar18 == (long *)0x0)) goto LAB_06c18310;
    iVar6 = (**(code **)(*plVar18 + 0x1a8))(plVar18,*(undefined8 *)(lVar7 + 0x28));
    unaff_w21 = iVar16 + 1;
  } while (iVar6 == 0);
  puVar5 = PTR_DAT_08e87c00;
  puVar4 = PTR_DAT_08e87b68;
  if (iVar16 < iVar15) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    do {
      lVar7 = *unaff_x28;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar7 = *unaff_x28;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if ((lVar7 == 0) || (lVar7 = FUN_05212a24(lVar7,iVar15,*unaff_x24), lVar7 == 0))
      goto LAB_06c18310;
      uVar12 = FUN_06c12174();
      lVar7 = *unaff_x28;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar7);
        lVar7 = *unaff_x28;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar7 == 0) goto LAB_06c18310;
      if ((uVar12 & 1) == 0) {
        FUN_052143ec(lVar7,iVar15,*(undefined8 *)puVar4);
        iVar16 = iVar16 + -1;
      }
      else {
        lVar7 = FUN_05212a24(lVar7,iVar15,*unaff_x24);
        if ((lVar7 == 0) || (*(long *)(lVar7 + 0x18) == 0)) goto LAB_06c18310;
        lVar8 = *(long *)(*unaff_x28 + 0xb8);
        if (*(long *)(lVar8 + 0x28) == 0) goto LAB_06c18310;
        if (*(int *)(*(long *)(lVar8 + 0x28) + 0x18) + -1 ==
            *(int *)(*(long *)(lVar7 + 0x18) + 0x18)) {
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar8 = *(long *)(*unaff_x28 + 0xb8);
          }
          if (*(long *)(lVar8 + 8) == 0) goto LAB_06c18310;
          lVar7 = *(long *)(lVar8 + 0x10);
          uVar9 = FUN_05212a24(*(long *)(lVar8 + 8),iVar15,*unaff_x24);
          if (lVar7 == 0) goto LAB_06c18310;
          lVar8 = *(long *)(lVar7 + 0x10);
          lVar14 = *(long *)puVar5;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_06c18310;
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
            thunk_FUN_03d233cc();
          }
          else {
            FUN_05212cf4(lVar7,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          uVar17 = 1;
        }
        iVar15 = iVar15 + 1;
      }
    } while (iVar15 <= iVar16);
  }
  lVar7 = *unaff_x28;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar7 = *unaff_x28;
  }
  lVar8 = *(long *)(lVar7 + 0xb8);
  if (*(long *)(lVar8 + 0x10) != 0) {
    iVar16 = *(int *)(*(long *)(lVar8 + 0x10) + 0x18);
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar8 = *(long *)(*unaff_x28 + 0xb8);
    }
    lVar7 = *(long *)(lVar8 + 0x28);
    if (lVar7 != 0) {
      if (iVar16 == 0) {
        lVar7 = FUN_05212a24(lVar7,0,*unaff_x29);
        FUN_06c1558c(lVar7,uVar17 ^ 1,*(undefined8 *)(*(long *)(*unaff_x28 + 0xb8) + 0x10));
        puVar4 = PTR_DAT_08e87b78;
        lVar8 = *unaff_x28;
        lVar14 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
        if (lVar14 != 0) {
          if (*(int *)(lVar14 + 0x18) == 0) {
            uVar9 = FUN_06f7465c(*(undefined8 *)PTR_DAT_08e87bf8,lVar7,
                                 *(undefined8 *)PTR_DAT_08e82af0,0);
            lVar7 = *(long *)PTR_DAT_08e69670;
            iVar16 = *(int *)(lVar7 + 0xe0);
joined_r0x06c18040:
            if (iVar16 == 0) {
              thunk_FUN_03cd7500(lVar7);
            }
            FUN_085a48e4(uVar9,0);
            return;
          }
          if (lVar7 != 0) {
            iVar15 = 0;
            iVar16 = *(int *)(lVar7 + 0x10) + 0x4b;
            while( true ) {
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
                lVar8 = *unaff_x28;
              }
              lVar14 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
              if (lVar14 == 0) goto LAB_06c18310;
              if (*(int *)(lVar14 + 0x18) <= iVar15) break;
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
                lVar14 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x10);
                if (lVar14 == 0) goto LAB_06c18310;
              }
              lVar14 = FUN_05212a24(lVar14,iVar15,*(undefined8 *)puVar4);
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0x30) == 0)) goto LAB_06c18310;
              lVar8 = *unaff_x28;
              iVar15 = iVar15 + 1;
              iVar16 = iVar16 + *(int *)(*(long *)(lVar14 + 0x30) + 0x10) + 7;
            }
            plVar18 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6a338);
            FUN_06f7c298(plVar18,iVar16,0);
            if (plVar18 != (long *)0x0) {
              if (uVar17 == 0) {
                lVar8 = FUN_06f7c2f0(plVar18,*(undefined8 *)PTR_DAT_08e87bf8,0);
                if (lVar8 == 0) goto LAB_06c18310;
                lVar7 = FUN_06f7c2f0(lVar8,lVar7,0);
                puVar3 = (undefined8 *)PTR_DAT_08e87d50;
              }
              else {
                lVar8 = FUN_06f7c2f0(plVar18,*(undefined8 *)PTR_DAT_08e87d58,0);
                if ((lVar8 == 0) || (lVar7 = FUN_06f7c2f0(lVar8,lVar7,0), lVar7 == 0))
                goto LAB_06c18310;
                lVar7 = FUN_06f7c2f0(lVar7,*(undefined8 *)PTR_DAT_08e87d60,0);
                lVar8 = *unaff_x28;
                if (*(int *)(lVar8 + 0xe0) == 0) {
                  thunk_FUN_03cd7500(lVar8);
                  lVar8 = *unaff_x28;
                }
                lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
                if ((lVar8 == 0) || (lVar7 == 0)) goto LAB_06c18310;
                lVar7 = FUN_06f85304(lVar7,*(int *)(lVar8 + 0x18) + -1,0);
                puVar3 = (undefined8 *)PTR_DAT_08e87d68;
              }
              if (lVar7 != 0) {
                FUN_06f7c2f0(lVar7,*puVar3,0);
                puVar5 = PTR_DAT_08e87bb8;
                iVar16 = 0;
                goto LAB_06c180e0;
              }
            }
          }
        }
      }
      else {
        plVar18 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,*(int *)(lVar7 + 0x18) + -1);
        puVar5 = PTR_DAT_08e87d40;
        puVar4 = PTR_DAT_08e80b78;
        iVar16 = 0;
        uVar19 = 0;
        lVar7 = 0;
        while( true ) {
          lVar8 = *unaff_x28;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar8 = *unaff_x28;
          }
          lVar14 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
          if (lVar14 == 0) goto LAB_06c18310;
          if (*(int *)(lVar14 + 0x18) <= iVar16) break;
          if (lVar7 != 0) goto LAB_06c17e88;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar14 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x10);
            if (lVar14 == 0) goto LAB_06c18310;
          }
          lVar7 = FUN_05212a24(lVar14,iVar16,*(undefined8 *)PTR_DAT_08e87b78);
          if ((lVar7 == 0) || (lVar8 = *(long *)(lVar7 + 0x18), lVar8 == 0)) goto LAB_06c18310;
          bVar2 = true;
          uVar12 = 0;
          while ((bVar2 && ((long)uVar12 < (long)*(int *)(lVar8 + 0x18)))) {
            lVar8 = *unaff_x28;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar8 = *unaff_x28;
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            uVar9 = FUN_05212a24(lVar8,uVar12 + 1 & 0xffffffff,*unaff_x29);
            lVar8 = *(long *)(lVar7 + 0x18);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            if (*(uint *)(lVar8 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            uVar20 = *(undefined8 *)(lVar8 + uVar12 * 8 + 0x20);
            uVar10 = FUN_06c185e4(uVar9,uVar20,&stack0x00000008);
            lVar8 = in_stack_00000008;
            if ((uVar10 & 1) == 0) {
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              uVar19 = FUN_06c16d78(uVar20);
              uVar19 = FUN_06f74e30(*(undefined8 *)puVar5,uVar9,*(undefined8 *)puVar4,uVar19,0);
              bVar2 = false;
            }
            else {
              if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              if ((in_stack_00000008 != 0) &&
                 (lVar14 = thunk_FUN_03cf5138(in_stack_00000008,*(undefined8 *)(*plVar18 + 0x40)),
                 lVar14 == 0)) {
                uVar9 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
                FUN_03c8f9fc(uVar9,0);
              }
              if (*(uint *)(plVar18 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb38();
              }
              plVar18[uVar12 + 4] = lVar8;
              thunk_FUN_03d233cc(plVar18 + uVar12 + 4,lVar8);
              bVar2 = true;
            }
            lVar8 = *(long *)(lVar7 + 0x18);
            uVar12 = uVar12 + 1;
            if (lVar8 == 0) goto LAB_06c18310;
          }
          if (!bVar2) {
            lVar7 = 0;
          }
          iVar16 = iVar16 + 1;
        }
        if (lVar7 == 0) {
          uVar12 = FUN_06f74e14(uVar19,0);
          lVar7 = *(long *)PTR_DAT_08e69670;
          iVar16 = *(int *)(lVar7 + 0xe0);
          uVar9 = *(undefined8 *)PTR_DAT_08e87d48;
          if ((uVar12 & 1) == 0) {
            uVar9 = uVar19;
          }
          goto joined_r0x06c18040;
        }
LAB_06c17e88:
        if (*(long *)(lVar7 + 0x10) != 0) {
          plVar11 = (long *)FUN_0702dc3c(*(long *)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x20),
                                         plVar18,0);
          plVar13 = *(long **)(lVar7 + 0x10);
          if (plVar13 != (long *)0x0) {
            uVar9 = (**(code **)(*plVar13 + 0x408))(plVar13,*(undefined8 *)(*plVar13 + 0x410));
            uVar19 = *(undefined8 *)PTR_DAT_08e81430;
            if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
            }
            uVar19 = FUN_0710fcf0(uVar19,0);
            uVar12 = FUN_0711a11c(uVar9,uVar19,0);
            if ((uVar12 & 1) != 0) {
              if ((plVar11 == (long *)0x0) ||
                 (uVar12 = (**(code **)(*plVar11 + 0x138))
                                     (plVar11,0,*(undefined8 *)(*plVar11 + 0x140)),
                 (uVar12 & 1) != 0)) {
                if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                uVar9 = *(undefined8 *)PTR_DAT_08e87d78;
              }
              else {
                uVar9 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
                uVar9 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e87d70,uVar9,0);
                if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                  thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
                }
              }
              FUN_085a3c50(uVar9,0);
            }
            lVar8 = *unaff_x28;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar8 = *unaff_x28;
            }
            lVar14 = **(long **)(lVar8 + 0xb8);
            if (lVar14 == 0) {
              return;
            }
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar14 = **(long **)(*unaff_x28 + 0xb8);
              if (lVar14 == 0) goto LAB_06c18310;
            }
            (**(code **)(lVar14 + 0x18))
                      (*(undefined8 *)(lVar14 + 0x40),*(undefined8 *)(lVar7 + 0x28),plVar18,
                       *(undefined8 *)(lVar14 + 0x28));
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
  lVar7 = *unaff_x28;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar7 = *unaff_x28;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar7 == 0) goto LAB_06c18310;
  if (*(int *)(lVar7 + 0x18) <= iVar16) {
    uVar9 = (**(code **)(*plVar18 + 0x168))(plVar18,*(undefined8 *)(*plVar18 + 0x170));
    if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
    }
    FUN_085a48e4(uVar9,0);
    if (DAT_09418fe9 == '\0') {
      FUN_03c8f898(PTR_DAT_08e87bc8);
      DAT_09418fe9 = '\x01';
    }
    puVar4 = PTR_DAT_08e87bc8;
    uVar9 = **(undefined8 **)(*(long *)PTR_DAT_08e87bc8 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar12 = FUN_085e285c(uVar9,0);
    if ((uVar12 & 1) == 0) {
      return;
    }
    if (DAT_09418fe9 == '\0') {
      FUN_03c8f898(PTR_DAT_08e87bc8);
      DAT_09418fe9 = '\x01';
    }
    if (**(long **)(*(long *)puVar4 + 0xb8) != 0) {
      FUN_06c14f7c(**(long **)(*(long *)puVar4 + 0xb8),1,1);
      return;
    }
    goto LAB_06c18310;
  }
  lVar7 = FUN_06f7c2f0(plVar18,*(undefined8 *)puVar5,0);
  lVar8 = *unaff_x28;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_03cd7500(lVar8);
    lVar8 = *unaff_x28;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  if (((lVar8 == 0) || (lVar8 = FUN_05212a24(lVar8,iVar16,*(undefined8 *)puVar4), lVar8 == 0)) ||
     (lVar7 == 0)) goto LAB_06c18310;
  FUN_06f7c2f0(lVar7,*(undefined8 *)(lVar8 + 0x30),0);
  iVar16 = iVar16 + 1;
  goto LAB_06c180e0;
}


