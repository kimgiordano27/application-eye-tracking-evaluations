/*
FUNCTION_NAME: OVRPlugin$$SetClientColorDesc
ENTRY_POINT: 05759db8
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


long OVRPlugin__SetClientColorDesc(void)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined4 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long *unaff_x19;
  long unaff_x21;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long unaff_x29;
  
  if (*(char *)(unaff_x29 + 1999) == '\0') {
    FUN_02f07e70(PTR_DAT_06d56c60);
    *(undefined1 *)(unaff_x29 + 1999) = 1;
  }
  lVar7 = *unaff_x19;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar7 = *unaff_x19;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar7 != 0) {
    lVar19 = *(long *)(lVar7 + 0x38);
    lVar7 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
    if (lVar7 != 0) {
      if ((unaff_x21 != 0) && (lVar8 = thunk_FUN_02ef170c(), lVar8 == 0)) {
LAB_0575a464:
        uVar10 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar10,0);
      }
      if (*(int *)(lVar7 + 0x18) == 0) {
LAB_0575a460:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      *(long *)(lVar7 + 0x20) = unaff_x21;
      thunk_FUN_02f411dc();
      puVar6 = PTR_DAT_06d59760;
      puVar5 = PTR_DAT_06d59750;
      puVar4 = PTR_DAT_06d59748;
      if (lVar19 != 0) {
        plVar9 = (long *)(**(code **)(lVar19 + 0x18))
                                   (*(undefined8 *)(lVar19 + 0x40),0,lVar7,
                                    *(undefined8 *)(lVar19 + 0x28));
        uVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
        FUN_03fd0468(uVar10,*(undefined8 *)puVar4);
        lVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar6);
        if (plVar9 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)PTR_DAT_06d56d00 + 0x130);
          if ((*(byte *)(*plVar9 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)PTR_DAT_06d56d00)) {
OVRPlugin__GetPredictedDisplayTime:
                    /* WARNING: Subroutine does not return */
            FUN_02f08440(plVar9);
          }
        }
        FUN_0575a4a8(lVar7,plVar9,uVar10);
        if (*(char *)(unaff_x29 + 1999) == '\0') {
          FUN_02f07e70(PTR_DAT_06d56c60);
          *(undefined1 *)(unaff_x29 + 1999) = 1;
        }
        lVar19 = *unaff_x19;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar19 = *unaff_x19;
        }
        lVar19 = *(long *)(*(long *)(lVar19 + 0xb8) + 8);
        if (lVar19 != 0) {
          lVar8 = *(long *)(lVar19 + 0x30);
          lVar19 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
          if (lVar19 != 0) {
            if ((unaff_x21 != 0) && (lVar11 = thunk_FUN_02ef170c(), lVar11 == 0)) goto LAB_0575a464;
            if (*(int *)(lVar19 + 0x18) == 0) goto LAB_0575a460;
            *(long *)(lVar19 + 0x20) = unaff_x21;
            thunk_FUN_02f411dc();
            if ((lVar8 != 0) &&
               (lVar19 = (**(code **)(lVar8 + 0x18))
                                   (*(undefined8 *)(lVar8 + 0x40),0,lVar19,
                                    *(undefined8 *)(lVar8 + 0x28)), lVar19 != 0)) {
              uVar10 = *(undefined8 *)PTR_DAT_06d02bd0;
              lVar8 = thunk_FUN_02ef170c(lVar19,uVar10);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08440(lVar19,uVar10);
              }
              if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
                uVar18 = 0;
                uVar16 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
                do {
                  if (uVar16 <= uVar18) goto LAB_0575a460;
                  lVar19 = *(long *)(lVar8 + 0x20 + uVar18 * 8);
                  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                  }
                  if (*(char *)(unaff_x29 + 1999) == '\0') {
                    FUN_02f07e70();
                    *(undefined1 *)(unaff_x29 + 1999) = 1;
                  }
                  lVar11 = *unaff_x19;
                  if (*(int *)(lVar11 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                    lVar11 = *unaff_x19;
                  }
                  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
                  if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x60), lVar11 == 0))
                  goto LAB_0575a45c;
                  plVar12 = (long *)(**(code **)(lVar11 + 0x18))
                                              (*(undefined8 *)(lVar11 + 0x40),lVar19,
                                               *(undefined8 *)(lVar11 + 0x28));
                  if (*(char *)(unaff_x29 + 1999) == '\0') {
                    FUN_02f07e70();
                    *(undefined1 *)(unaff_x29 + 1999) = 1;
                  }
                  lVar11 = *unaff_x19;
                  if (*(int *)(lVar11 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                    lVar11 = *unaff_x19;
                  }
                  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
                  if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x58), lVar11 == 0))
                  goto LAB_0575a45c;
                  plVar9 = (long *)(**(code **)(lVar11 + 0x18))
                                             (*(undefined8 *)(lVar11 + 0x40),lVar19,
                                              *(undefined8 *)(lVar11 + 0x28));
                  if (*(char *)(unaff_x29 + 1999) == '\0') {
                    FUN_02f07e70();
                    *(undefined1 *)(unaff_x29 + 1999) = 1;
                  }
                  lVar11 = *unaff_x19;
                  if (*(int *)(lVar11 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                    lVar11 = *unaff_x19;
                  }
                  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
                  if (lVar11 == 0) goto LAB_0575a45c;
                  lVar21 = *(long *)(lVar11 + 0x68);
                  lVar20 = *(long *)PTR_DAT_06d05520;
                  lVar11 = *(long *)(lVar20 + 0x38);
                  if (lVar11 == 0) {
                    FUN_02eea7c4(lVar20);
                    lVar11 = *(long *)(lVar20 + 0x38);
                  }
                  lVar11 = *(long *)(lVar11 + 0x10);
                  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                    lVar11 = FUN_02eea768();
                  }
                  if (*(int *)(lVar11 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                  }
                  lVar11 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
                  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                    lVar11 = FUN_02eea768();
                  }
                  if (lVar21 == 0) goto LAB_0575a45c;
                  lVar11 = (**(code **)(lVar21 + 0x18))
                                     (*(undefined8 *)(lVar21 + 0x40),lVar19,
                                      **(undefined8 **)(lVar11 + 0xb8),
                                      *(undefined8 *)(lVar21 + 0x28));
                  if (*(char *)(unaff_x29 + 1999) == '\0') {
                    FUN_02f07e70();
                    *(undefined1 *)(unaff_x29 + 1999) = 1;
                  }
                  lVar20 = *unaff_x19;
                  if (*(int *)(lVar20 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                    lVar20 = *unaff_x19;
                  }
                  lVar20 = *(long *)(*(long *)(lVar20 + 0xb8) + 8);
                  if (lVar20 == 0) goto LAB_0575a45c;
                  lVar20 = *(long *)(lVar20 + 0x40);
                  plVar13 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
                  if (plVar13 == (long *)0x0) goto LAB_0575a45c;
                  if ((lVar19 != 0) &&
                     (lVar21 = thunk_FUN_02ef170c(lVar19,*(undefined8 *)(*plVar13 + 0x40)),
                     lVar21 == 0)) goto LAB_0575a464;
                  if ((int)plVar13[3] == 0) goto LAB_0575a460;
                  plVar13[4] = lVar19;
                  thunk_FUN_02f411dc(plVar13 + 4,lVar19);
                  if (lVar20 == 0) goto LAB_0575a45c;
                  plVar13 = (long *)(**(code **)(lVar20 + 0x18))
                                              (*(undefined8 *)(lVar20 + 0x40),0,plVar13,
                                               *(undefined8 *)(lVar20 + 0x28));
                  if (*(char *)(unaff_x29 + 1999) == '\0') {
                    FUN_02f07e70();
                    *(undefined1 *)(unaff_x29 + 1999) = 1;
                  }
                  lVar20 = *unaff_x19;
                  if (*(int *)(lVar20 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                    lVar20 = *unaff_x19;
                  }
                  lVar20 = *(long *)(*(long *)(lVar20 + 0xb8) + 8);
                  if (lVar20 == 0) goto LAB_0575a45c;
                  lVar20 = *(long *)(lVar20 + 0x48);
                  plVar14 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
                  if (plVar14 == (long *)0x0) goto LAB_0575a45c;
                  if ((lVar19 != 0) &&
                     (lVar21 = thunk_FUN_02ef170c(lVar19,*(undefined8 *)(*plVar14 + 0x40)),
                     lVar21 == 0)) goto LAB_0575a464;
                  if ((int)plVar14[3] == 0) goto LAB_0575a460;
                  plVar14[4] = lVar19;
                  thunk_FUN_02f411dc(plVar14 + 4,lVar19);
                  if (lVar20 == 0) goto LAB_0575a45c;
                  plVar14 = (long *)(**(code **)(lVar20 + 0x18))
                                              (*(undefined8 *)(lVar20 + 0x40),0,plVar14,
                                               *(undefined8 *)(lVar20 + 0x28));
                  uVar10 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d59758);
                  if (plVar12 == (long *)0x0) goto LAB_0575a45c;
                  if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)PTR_DAT_06d02bc8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f08440(plVar12);
                  }
                  puVar15 = (undefined4 *)thunk_FUN_02ef195c(plVar12);
                  uVar1 = *puVar15;
                  if (plVar9 != (long *)0x0) {
                    if (*plVar9 != *(long *)PTR_DAT_06d02350)
                    goto OVRPlugin__GetPredictedDisplayTime;
                  }
                  if (lVar11 == 0) {
                    lVar19 = 0;
                  }
                  else {
                    uVar22 = *(undefined8 *)PTR_DAT_06d4cd28;
                    lVar19 = thunk_FUN_02ef170c(lVar11,uVar22);
                    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f08440(lVar11,uVar22);
                    }
                  }
                  lVar11 = *(long *)PTR_DAT_06d56d00;
                  if (plVar13 != (long *)0x0) {
                    if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 +
                                 -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f08440(plVar13);
                    }
                  }
                  if (plVar14 != (long *)0x0) {
                    if ((*(byte *)(*plVar14 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 +
                                 -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f08440(plVar14);
                    }
                  }
                  FUN_0575a4ec(uVar10,uVar1,plVar9,lVar19,plVar13,plVar14);
                  if ((lVar7 == 0) || (lVar19 = *(long *)(lVar7 + 0x18), lVar19 == 0))
                  goto LAB_0575a45c;
                  lVar11 = *(long *)(lVar19 + 0x10);
                  lVar20 = *(long *)PTR_DAT_06d59740;
                  *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                  if (lVar11 == 0) goto LAB_0575a45c;
                  uVar3 = *(uint *)(lVar19 + 0x18);
                  if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(lVar19 + 0x18) = uVar3 + 1;
                    puVar17 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
                    *puVar17 = uVar10;
                    thunk_FUN_02f411dc(puVar17,uVar10);
                  }
                  else {
                    FUN_03fd0c9c(lVar19,uVar10,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  uVar16 = (ulong)*(uint *)(lVar8 + 0x18);
                  uVar18 = uVar18 + 1;
                } while ((long)uVar18 < (long)(int)*(uint *)(lVar8 + 0x18));
              }
              return lVar7;
            }
          }
        }
      }
    }
  }
LAB_0575a45c:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


