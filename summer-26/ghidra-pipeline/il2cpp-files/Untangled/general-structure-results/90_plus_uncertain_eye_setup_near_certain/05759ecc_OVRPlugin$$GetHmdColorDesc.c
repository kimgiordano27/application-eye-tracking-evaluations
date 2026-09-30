/*
FUNCTION_NAME: OVRPlugin$$GetHmdColorDesc
ENTRY_POINT: 05759ecc
PROGRAM: Untangled-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


long OVRPlugin__GetHmdColorDesc(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar11;
  long *unaff_x22;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long unaff_x29;
  
  if (*(long *)(param_1 + -8) != param_3) {
OVRPlugin__GetPredictedDisplayTime:
                    /* WARNING: Subroutine does not return */
    FUN_02f08440(unaff_x22);
  }
  FUN_0575a4a8();
  if (*(char *)(unaff_x29 + 1999) == '\0') {
    FUN_02f07e70(PTR_DAT_06d56c60);
    *(undefined1 *)(unaff_x29 + 1999) = 1;
  }
  lVar3 = *unaff_x19;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x19;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 != 0) {
    lVar12 = *(long *)(lVar3 + 0x30);
    lVar3 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
    if (lVar3 != 0) {
      if ((unaff_x21 != 0) && (lVar4 = thunk_FUN_02ef170c(), lVar4 == 0)) {
LAB_0575a464:
        uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar13,0);
      }
      if (*(int *)(lVar3 + 0x18) == 0) {
LAB_0575a460:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      *(long *)(lVar3 + 0x20) = unaff_x21;
      thunk_FUN_02f411dc();
      if ((lVar12 != 0) &&
         (lVar3 = (**(code **)(lVar12 + 0x18))
                            (*(undefined8 *)(lVar12 + 0x40),0,lVar3,*(undefined8 *)(lVar12 + 0x28)),
         lVar3 != 0)) {
        uVar13 = *(undefined8 *)PTR_DAT_06d02bd0;
        lVar12 = thunk_FUN_02ef170c(lVar3,uVar13);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(lVar3,uVar13);
        }
        if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
          uVar11 = 0;
          uVar9 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
          do {
            if (uVar9 <= uVar11) goto LAB_0575a460;
            lVar3 = *(long *)(lVar12 + 0x20 + uVar11 * 8);
            if (*(int *)(*unaff_x19 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            if (*(char *)(unaff_x29 + 1999) == '\0') {
              FUN_02f07e70();
              *(undefined1 *)(unaff_x29 + 1999) = 1;
            }
            lVar4 = *unaff_x19;
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
              lVar4 = *unaff_x19;
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
            if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x60), lVar4 == 0)) goto LAB_0575a45c;
            plVar5 = (long *)(**(code **)(lVar4 + 0x18))
                                       (*(undefined8 *)(lVar4 + 0x40),lVar3,
                                        *(undefined8 *)(lVar4 + 0x28));
            if (*(char *)(unaff_x29 + 1999) == '\0') {
              FUN_02f07e70();
              *(undefined1 *)(unaff_x29 + 1999) = 1;
            }
            lVar4 = *unaff_x19;
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
              lVar4 = *unaff_x19;
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
            if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x58), lVar4 == 0)) goto LAB_0575a45c;
            unaff_x22 = (long *)(**(code **)(lVar4 + 0x18))
                                          (*(undefined8 *)(lVar4 + 0x40),lVar3,
                                           *(undefined8 *)(lVar4 + 0x28));
            if (*(char *)(unaff_x29 + 1999) == '\0') {
              FUN_02f07e70();
              *(undefined1 *)(unaff_x29 + 1999) = 1;
            }
            lVar4 = *unaff_x19;
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
              lVar4 = *unaff_x19;
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
            if (lVar4 == 0) goto LAB_0575a45c;
            lVar15 = *(long *)(lVar4 + 0x68);
            lVar14 = *(long *)PTR_DAT_06d05520;
            lVar4 = *(long *)(lVar14 + 0x38);
            if (lVar4 == 0) {
              FUN_02eea7c4(lVar14);
              lVar4 = *(long *)(lVar14 + 0x38);
            }
            lVar4 = *(long *)(lVar4 + 0x10);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02eea768();
            }
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            lVar4 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02eea768();
            }
            if (lVar15 == 0) goto LAB_0575a45c;
            lVar4 = (**(code **)(lVar15 + 0x18))
                              (*(undefined8 *)(lVar15 + 0x40),lVar3,**(undefined8 **)(lVar4 + 0xb8),
                               *(undefined8 *)(lVar15 + 0x28));
            if (*(char *)(unaff_x29 + 1999) == '\0') {
              FUN_02f07e70();
              *(undefined1 *)(unaff_x29 + 1999) = 1;
            }
            lVar14 = *unaff_x19;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
              lVar14 = *unaff_x19;
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
            if (lVar14 == 0) goto LAB_0575a45c;
            lVar14 = *(long *)(lVar14 + 0x40);
            plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
            if (plVar6 == (long *)0x0) goto LAB_0575a45c;
            if ((lVar3 != 0) &&
               (lVar15 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar15 == 0))
            goto LAB_0575a464;
            if ((int)plVar6[3] == 0) goto LAB_0575a460;
            plVar6[4] = lVar3;
            thunk_FUN_02f411dc(plVar6 + 4,lVar3);
            if (lVar14 == 0) goto LAB_0575a45c;
            plVar6 = (long *)(**(code **)(lVar14 + 0x18))
                                       (*(undefined8 *)(lVar14 + 0x40),0,plVar6,
                                        *(undefined8 *)(lVar14 + 0x28));
            if (*(char *)(unaff_x29 + 1999) == '\0') {
              FUN_02f07e70();
              *(undefined1 *)(unaff_x29 + 1999) = 1;
            }
            lVar14 = *unaff_x19;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
              lVar14 = *unaff_x19;
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
            if (lVar14 == 0) goto LAB_0575a45c;
            lVar14 = *(long *)(lVar14 + 0x48);
            plVar7 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
            if (plVar7 == (long *)0x0) goto LAB_0575a45c;
            if ((lVar3 != 0) &&
               (lVar15 = thunk_FUN_02ef170c(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar15 == 0))
            goto LAB_0575a464;
            if ((int)plVar7[3] == 0) goto LAB_0575a460;
            plVar7[4] = lVar3;
            thunk_FUN_02f411dc(plVar7 + 4,lVar3);
            if (lVar14 == 0) goto LAB_0575a45c;
            plVar7 = (long *)(**(code **)(lVar14 + 0x18))
                                       (*(undefined8 *)(lVar14 + 0x40),0,plVar7,
                                        *(undefined8 *)(lVar14 + 0x28));
            uVar13 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d59758);
            if (plVar5 == (long *)0x0) goto LAB_0575a45c;
            if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)PTR_DAT_06d02bc8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08440(plVar5);
            }
            puVar8 = (undefined4 *)thunk_FUN_02ef195c(plVar5);
            uVar1 = *puVar8;
            if (unaff_x22 != (long *)0x0) {
              if (*unaff_x22 != *(long *)PTR_DAT_06d02350) goto OVRPlugin__GetPredictedDisplayTime;
            }
            if (lVar4 == 0) {
              lVar3 = 0;
            }
            else {
              uVar16 = *(undefined8 *)PTR_DAT_06d4cd28;
              lVar3 = thunk_FUN_02ef170c(lVar4,uVar16);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08440(lVar4,uVar16);
              }
            }
            lVar4 = *(long *)PTR_DAT_06d56d00;
            if (plVar6 != (long *)0x0) {
              if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) !=
                  lVar4)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08440(plVar6);
              }
            }
            if (plVar7 != (long *)0x0) {
              if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) !=
                  lVar4)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08440(plVar7);
              }
            }
            FUN_0575a4ec(uVar13,uVar1,unaff_x22,lVar3,plVar6,plVar7);
            if ((unaff_x20 == 0) || (lVar3 = *(long *)(unaff_x20 + 0x18), lVar3 == 0))
            goto LAB_0575a45c;
            lVar4 = *(long *)(lVar3 + 0x10);
            lVar14 = *(long *)PTR_DAT_06d59740;
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (lVar4 == 0) goto LAB_0575a45c;
            uVar2 = *(uint *)(lVar3 + 0x18);
            if (uVar2 < *(uint *)(lVar4 + 0x18)) {
              *(uint *)(lVar3 + 0x18) = uVar2 + 1;
              puVar10 = (undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
              *puVar10 = uVar13;
              thunk_FUN_02f411dc(puVar10,uVar13);
            }
            else {
              FUN_03fd0c9c(lVar3,uVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            uVar9 = (ulong)*(uint *)(lVar12 + 0x18);
            uVar11 = uVar11 + 1;
          } while ((long)uVar11 < (long)(int)*(uint *)(lVar12 + 0x18));
        }
        return unaff_x20;
      }
    }
  }
LAB_0575a45c:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


