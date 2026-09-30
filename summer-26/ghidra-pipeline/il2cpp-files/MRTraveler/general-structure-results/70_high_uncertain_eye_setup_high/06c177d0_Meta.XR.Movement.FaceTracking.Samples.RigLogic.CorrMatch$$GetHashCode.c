/*
FUNCTION_NAME: Meta.XR.Movement.FaceTracking.Samples.RigLogic.CorrMatch$$GetHashCode
ENTRY_POINT: 06c177d0
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


void Meta_XR_Movement_FaceTracking_Samples_RigLogic_CorrMatch__GetHashCode(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long in_x9;
  long lVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long *unaff_x28;
  long in_stack_00000008;
  
  if (in_x9 == 0) goto LAB_06c18310;
  iVar8 = *(int *)(in_x9 + 0x18);
  *(undefined4 *)(in_x9 + 0x18) = 0;
  *(int *)(in_x9 + 0x1c) = *(int *)(in_x9 + 0x1c) + 1;
  if (0 < iVar8) {
    FUN_071245a8(*(undefined8 *)(in_x9 + 0x10),0,iVar8,0);
    param_1 = *(long *)(*unaff_x28 + 0xb8);
  }
  puVar4 = PTR_DAT_08e69b48;
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_06c18310;
  FUN_05212a24(*(long *)(param_1 + 0x28),0,*(undefined8 *)PTR_DAT_08e69b48);
  iVar8 = FUN_06c16c44();
  if (iVar8 < 0) {
LAB_06c17964:
    uVar20 = 0;
  }
  else {
    lVar10 = *unaff_x28;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar10 = *unaff_x28;
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
    if (lVar10 == 0) goto LAB_06c18310;
    uVar11 = FUN_05212a24(lVar10,0,*(undefined8 *)puVar4);
    puVar5 = PTR_DAT_08e87b78;
    iVar19 = iVar8;
    do {
      iVar18 = iVar19;
      if (iVar18 < 1) break;
      lVar10 = *unaff_x28;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar10 = *unaff_x28;
      }
      lVar12 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if (lVar12 == 0) goto LAB_06c18310;
      plVar21 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x38);
      lVar10 = FUN_05212a24(lVar12,iVar18 + -1,*(undefined8 *)puVar5);
      if ((lVar10 == 0) || (plVar21 == (long *)0x0)) goto LAB_06c18310;
      iVar9 = (**(code **)(*plVar21 + 0x1a8))
                        (plVar21,*(undefined8 *)(lVar10 + 0x28),uVar11,3,
                         *(undefined8 *)(*plVar21 + 0x1b0));
      iVar19 = iVar18 + -1;
    } while (iVar9 == 0);
    do {
      iVar19 = iVar8;
      lVar10 = *unaff_x28;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar10 = *unaff_x28;
      }
      lVar17 = *(long *)(lVar10 + 0xb8);
      lVar12 = *(long *)(lVar17 + 8);
      if (lVar12 == 0) goto LAB_06c18310;
      if (*(int *)(lVar12 + 0x18) + -1 <= iVar19) break;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar17 = *(long *)(*unaff_x28 + 0xb8);
        lVar12 = *(long *)(lVar17 + 8);
        if (lVar12 == 0) goto LAB_06c18310;
      }
      plVar21 = *(long **)(lVar17 + 0x38);
      lVar10 = FUN_05212a24(lVar12,iVar19 + 1,*(undefined8 *)puVar5);
      if ((lVar10 == 0) || (plVar21 == (long *)0x0)) goto LAB_06c18310;
      iVar9 = (**(code **)(*plVar21 + 0x1a8))
                        (plVar21,*(undefined8 *)(lVar10 + 0x28),uVar11,3,
                         *(undefined8 *)(*plVar21 + 0x1b0));
      iVar8 = iVar19 + 1;
    } while (iVar9 == 0);
    puVar7 = PTR_DAT_08e87c00;
    puVar6 = PTR_DAT_08e87b68;
    if (iVar19 < iVar18) goto LAB_06c17964;
    uVar20 = 0;
    do {
      lVar10 = *unaff_x28;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar10 = *unaff_x28;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if ((lVar10 == 0) || (lVar10 = FUN_05212a24(lVar10,iVar18,*(undefined8 *)puVar5), lVar10 == 0)
         ) goto LAB_06c18310;
      uVar15 = FUN_06c12174();
      lVar10 = *unaff_x28;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar10);
        lVar10 = *unaff_x28;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if (lVar10 == 0) goto LAB_06c18310;
      if ((uVar15 & 1) == 0) {
        FUN_052143ec(lVar10,iVar18,*(undefined8 *)puVar6);
        iVar19 = iVar19 + -1;
      }
      else {
        lVar10 = FUN_05212a24(lVar10,iVar18,*(undefined8 *)puVar5);
        if ((lVar10 == 0) || (*(long *)(lVar10 + 0x18) == 0)) goto LAB_06c18310;
        lVar12 = *(long *)(*unaff_x28 + 0xb8);
        if (*(long *)(lVar12 + 0x28) == 0) goto LAB_06c18310;
        if (*(int *)(*(long *)(lVar12 + 0x28) + 0x18) + -1 ==
            *(int *)(*(long *)(lVar10 + 0x18) + 0x18)) {
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar12 = *(long *)(*unaff_x28 + 0xb8);
          }
          if (*(long *)(lVar12 + 8) == 0) goto LAB_06c18310;
          lVar10 = *(long *)(lVar12 + 0x10);
          uVar11 = FUN_05212a24(*(long *)(lVar12 + 8),iVar18,*(undefined8 *)puVar5);
          if (lVar10 == 0) goto LAB_06c18310;
          lVar12 = *(long *)(lVar10 + 0x10);
          lVar17 = *(long *)puVar7;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_06c18310;
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
            thunk_FUN_03d233cc();
          }
          else {
            FUN_05212cf4(lVar10,uVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          uVar20 = 1;
        }
        iVar18 = iVar18 + 1;
      }
    } while (iVar18 <= iVar19);
  }
  lVar10 = *unaff_x28;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar10 = *unaff_x28;
  }
  lVar12 = *(long *)(lVar10 + 0xb8);
  if (*(long *)(lVar12 + 0x10) != 0) {
    iVar8 = *(int *)(*(long *)(lVar12 + 0x10) + 0x18);
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar12 = *(long *)(*unaff_x28 + 0xb8);
    }
    lVar10 = *(long *)(lVar12 + 0x28);
    if (lVar10 != 0) {
      if (iVar8 == 0) {
        lVar10 = FUN_05212a24(lVar10,0,*(undefined8 *)puVar4);
        FUN_06c1558c(lVar10,uVar20 ^ 1,*(undefined8 *)(*(long *)(*unaff_x28 + 0xb8) + 0x10));
        puVar4 = PTR_DAT_08e87b78;
        lVar12 = *unaff_x28;
        lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
        if (lVar17 != 0) {
          if (*(int *)(lVar17 + 0x18) == 0) {
            uVar11 = FUN_06f7465c(*(undefined8 *)PTR_DAT_08e87bf8,lVar10,
                                  *(undefined8 *)PTR_DAT_08e82af0,0);
            lVar10 = *(long *)PTR_DAT_08e69670;
            iVar8 = *(int *)(lVar10 + 0xe0);
joined_r0x06c18040:
            if (iVar8 == 0) {
              thunk_FUN_03cd7500(lVar10);
            }
            FUN_085a48e4(uVar11,0);
            return;
          }
          if (lVar10 != 0) {
            iVar19 = 0;
            iVar8 = *(int *)(lVar10 + 0x10) + 0x4b;
            while( true ) {
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
                lVar12 = *unaff_x28;
              }
              lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
              if (lVar17 == 0) goto LAB_06c18310;
              if (*(int *)(lVar17 + 0x18) <= iVar19) break;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
                lVar17 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x10);
                if (lVar17 == 0) goto LAB_06c18310;
              }
              lVar17 = FUN_05212a24(lVar17,iVar19,*(undefined8 *)puVar4);
              if ((lVar17 == 0) || (*(long *)(lVar17 + 0x30) == 0)) goto LAB_06c18310;
              lVar12 = *unaff_x28;
              iVar19 = iVar19 + 1;
              iVar8 = iVar8 + *(int *)(*(long *)(lVar17 + 0x30) + 0x10) + 7;
            }
            plVar21 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6a338);
            FUN_06f7c298(plVar21,iVar8,0);
            if (plVar21 != (long *)0x0) {
              if (uVar20 == 0) {
                lVar12 = FUN_06f7c2f0(plVar21,*(undefined8 *)PTR_DAT_08e87bf8,0);
                if (lVar12 == 0) goto LAB_06c18310;
                lVar10 = FUN_06f7c2f0(lVar12,lVar10,0);
                puVar3 = (undefined8 *)PTR_DAT_08e87d50;
              }
              else {
                lVar12 = FUN_06f7c2f0(plVar21,*(undefined8 *)PTR_DAT_08e87d58,0);
                if ((lVar12 == 0) || (lVar10 = FUN_06f7c2f0(lVar12,lVar10,0), lVar10 == 0))
                goto LAB_06c18310;
                lVar10 = FUN_06f7c2f0(lVar10,*(undefined8 *)PTR_DAT_08e87d60,0);
                lVar12 = *unaff_x28;
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_03cd7500(lVar12);
                  lVar12 = *unaff_x28;
                }
                lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x28);
                if ((lVar12 == 0) || (lVar10 == 0)) goto LAB_06c18310;
                lVar10 = FUN_06f85304(lVar10,*(int *)(lVar12 + 0x18) + -1,0);
                puVar3 = (undefined8 *)PTR_DAT_08e87d68;
              }
              if (lVar10 != 0) {
                FUN_06f7c2f0(lVar10,*puVar3,0);
                puVar5 = PTR_DAT_08e87bb8;
                iVar8 = 0;
                goto LAB_06c180e0;
              }
            }
          }
        }
      }
      else {
        plVar21 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,*(int *)(lVar10 + 0x18) + -1)
        ;
        puVar6 = PTR_DAT_08e87d40;
        puVar5 = PTR_DAT_08e80b78;
        iVar8 = 0;
        uVar22 = 0;
        lVar10 = 0;
        while( true ) {
          lVar12 = *unaff_x28;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar12 = *unaff_x28;
          }
          lVar17 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
          if (lVar17 == 0) goto LAB_06c18310;
          if (*(int *)(lVar17 + 0x18) <= iVar8) break;
          if (lVar10 != 0) goto LAB_06c17e88;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar17 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x10);
            if (lVar17 == 0) goto LAB_06c18310;
          }
          lVar10 = FUN_05212a24(lVar17,iVar8,*(undefined8 *)PTR_DAT_08e87b78);
          if ((lVar10 == 0) || (lVar12 = *(long *)(lVar10 + 0x18), lVar12 == 0)) goto LAB_06c18310;
          bVar2 = true;
          uVar15 = 0;
          while ((bVar2 && ((long)uVar15 < (long)*(int *)(lVar12 + 0x18)))) {
            lVar12 = *unaff_x28;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar12 = *unaff_x28;
            }
            lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x28);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            uVar11 = FUN_05212a24(lVar12,uVar15 + 1 & 0xffffffff,*(undefined8 *)puVar4);
            lVar12 = *(long *)(lVar10 + 0x18);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            if (*(uint *)(lVar12 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            uVar23 = *(undefined8 *)(lVar12 + uVar15 * 8 + 0x20);
            uVar13 = FUN_06c185e4(uVar11,uVar23,&stack0x00000008);
            lVar12 = in_stack_00000008;
            if ((uVar13 & 1) == 0) {
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              uVar22 = FUN_06c16d78(uVar23);
              uVar22 = FUN_06f74e30(*(undefined8 *)puVar6,uVar11,*(undefined8 *)puVar5,uVar22,0);
              bVar2 = false;
            }
            else {
              if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              if ((in_stack_00000008 != 0) &&
                 (lVar17 = thunk_FUN_03cf5138(in_stack_00000008,*(undefined8 *)(*plVar21 + 0x40)),
                 lVar17 == 0)) {
                uVar11 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
                FUN_03c8f9fc(uVar11,0);
              }
              if (*(uint *)(plVar21 + 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb38();
              }
              plVar21[uVar15 + 4] = lVar12;
              thunk_FUN_03d233cc(plVar21 + uVar15 + 4,lVar12);
              bVar2 = true;
            }
            lVar12 = *(long *)(lVar10 + 0x18);
            uVar15 = uVar15 + 1;
            if (lVar12 == 0) goto LAB_06c18310;
          }
          if (!bVar2) {
            lVar10 = 0;
          }
          iVar8 = iVar8 + 1;
        }
        if (lVar10 == 0) {
          uVar15 = FUN_06f74e14(uVar22,0);
          lVar10 = *(long *)PTR_DAT_08e69670;
          iVar8 = *(int *)(lVar10 + 0xe0);
          uVar11 = *(undefined8 *)PTR_DAT_08e87d48;
          if ((uVar15 & 1) == 0) {
            uVar11 = uVar22;
          }
          goto joined_r0x06c18040;
        }
LAB_06c17e88:
        if (*(long *)(lVar10 + 0x10) != 0) {
          plVar14 = (long *)FUN_0702dc3c(*(long *)(lVar10 + 0x10),*(undefined8 *)(lVar10 + 0x20),
                                         plVar21,0);
          plVar16 = *(long **)(lVar10 + 0x10);
          if (plVar16 != (long *)0x0) {
            uVar11 = (**(code **)(*plVar16 + 0x408))(plVar16,*(undefined8 *)(*plVar16 + 0x410));
            uVar22 = *(undefined8 *)PTR_DAT_08e81430;
            if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
            }
            uVar22 = FUN_0710fcf0(uVar22,0);
            uVar15 = FUN_0711a11c(uVar11,uVar22,0);
            if ((uVar15 & 1) != 0) {
              if ((plVar14 == (long *)0x0) ||
                 (uVar15 = (**(code **)(*plVar14 + 0x138))
                                     (plVar14,0,*(undefined8 *)(*plVar14 + 0x140)),
                 (uVar15 & 1) != 0)) {
                if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                uVar11 = *(undefined8 *)PTR_DAT_08e87d78;
              }
              else {
                uVar11 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
                uVar11 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e87d70,uVar11,0);
                if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                  thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
                }
              }
              FUN_085a3c50(uVar11,0);
            }
            lVar12 = *unaff_x28;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar12 = *unaff_x28;
            }
            lVar17 = **(long **)(lVar12 + 0xb8);
            if (lVar17 == 0) {
              return;
            }
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar17 = **(long **)(*unaff_x28 + 0xb8);
              if (lVar17 == 0) goto LAB_06c18310;
            }
            (**(code **)(lVar17 + 0x18))
                      (*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar10 + 0x28),plVar21,
                       *(undefined8 *)(lVar17 + 0x28));
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
  lVar10 = *unaff_x28;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar10 = *unaff_x28;
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
  if (lVar10 == 0) goto LAB_06c18310;
  if (*(int *)(lVar10 + 0x18) <= iVar8) {
    uVar11 = (**(code **)(*plVar21 + 0x168))(plVar21,*(undefined8 *)(*plVar21 + 0x170));
    if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
    }
    FUN_085a48e4(uVar11,0);
    if (DAT_09418fe9 == '\0') {
      FUN_03c8f898(PTR_DAT_08e87bc8);
      DAT_09418fe9 = '\x01';
    }
    puVar4 = PTR_DAT_08e87bc8;
    uVar11 = **(undefined8 **)(*(long *)PTR_DAT_08e87bc8 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar15 = FUN_085e285c(uVar11,0);
    if ((uVar15 & 1) == 0) {
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
  lVar10 = FUN_06f7c2f0(plVar21,*(undefined8 *)puVar5,0);
  lVar12 = *unaff_x28;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_03cd7500(lVar12);
    lVar12 = *unaff_x28;
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
  if (((lVar12 == 0) || (lVar12 = FUN_05212a24(lVar12,iVar8,*(undefined8 *)puVar4), lVar12 == 0)) ||
     (lVar10 == 0)) goto LAB_06c18310;
  FUN_06f7c2f0(lVar10,*(undefined8 *)(lVar12 + 0x30),0);
  iVar8 = iVar8 + 1;
  goto LAB_06c180e0;
}


