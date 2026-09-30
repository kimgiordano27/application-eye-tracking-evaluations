/*
FUNCTION_NAME: OVRPlugin$$GetSystemHmd3DofModeEnabled
ENTRY_POINT: 05759ce8
PROGRAM: Untangled-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


long OVRPlugin__GetSystemHmd3DofModeEnabled(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined4 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  
  puVar4 = PTR_DAT_06d56c60;
  if ((DAT_071c3a75 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d05520);
    FUN_02f07e70(PTR_DAT_06d56d00);
    FUN_02f07e70(PTR_DAT_06d56c60);
    FUN_02f07e70(PTR_DAT_06d02bc8);
    FUN_02f07e70(PTR_DAT_06d59740);
    FUN_02f07e70(PTR_DAT_06d59748);
    FUN_02f07e70(PTR_DAT_06d59750);
    FUN_02f07e70(PTR_DAT_06d02bd0);
    FUN_02f07e70(PTR_DAT_06d4cd28);
    FUN_02f07e70(PTR_DAT_06d02350);
    FUN_02f07e70(PTR_DAT_06d59758);
    FUN_02f07e70(PTR_DAT_06d59760);
    DAT_071c3a75 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  if (DAT_071c37cf == '\0') {
    FUN_02f07e70(PTR_DAT_06d56c60);
    DAT_071c37cf = '\x01';
  }
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar8 = *(long *)puVar4;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x38);
    plVar9 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
    if (plVar9 != (long *)0x0) {
      if ((param_1 != 0) &&
         (lVar10 = thunk_FUN_02ef170c(param_1,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
LAB_0575a464:
        uVar11 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar11,0);
      }
      if ((int)plVar9[3] == 0) {
LAB_0575a460:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      plVar9[4] = param_1;
      thunk_FUN_02f411dc(plVar9 + 4,param_1);
      puVar7 = PTR_DAT_06d59760;
      puVar6 = PTR_DAT_06d59750;
      puVar5 = PTR_DAT_06d59748;
      if (lVar8 != 0) {
        plVar9 = (long *)(**(code **)(lVar8 + 0x18))
                                   (*(undefined8 *)(lVar8 + 0x40),0,plVar9,
                                    *(undefined8 *)(lVar8 + 0x28));
        uVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar6);
        FUN_03fd0468(uVar11,*(undefined8 *)puVar5);
        lVar8 = thunk_FUN_02ef1808(*(undefined8 *)puVar7);
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
        FUN_0575a4a8(lVar8,plVar9,uVar11);
        if (DAT_071c37cf == '\0') {
          FUN_02f07e70(PTR_DAT_06d56c60);
          DAT_071c37cf = '\x01';
        }
        lVar10 = *(long *)puVar4;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar10 = *(long *)puVar4;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
        if (lVar10 != 0) {
          lVar10 = *(long *)(lVar10 + 0x30);
          plVar9 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
          if (plVar9 != (long *)0x0) {
            if ((param_1 != 0) &&
               (lVar12 = thunk_FUN_02ef170c(param_1,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0))
            goto LAB_0575a464;
            if ((int)plVar9[3] == 0) goto LAB_0575a460;
            plVar9[4] = param_1;
            thunk_FUN_02f411dc(plVar9 + 4,param_1);
            if ((lVar10 != 0) &&
               (lVar10 = (**(code **)(lVar10 + 0x18))
                                   (*(undefined8 *)(lVar10 + 0x40),0,plVar9,
                                    *(undefined8 *)(lVar10 + 0x28)), lVar10 != 0)) {
              uVar11 = *(undefined8 *)PTR_DAT_06d02bd0;
              lVar12 = thunk_FUN_02ef170c(lVar10,uVar11);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08440(lVar10,uVar11);
              }
              if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
                uVar20 = 0;
                uVar18 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
                do {
                  if (uVar18 <= uVar20) goto LAB_0575a460;
                  lVar10 = *(long *)(lVar12 + 0x20 + uVar20 * 8);
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                  }
                  if (DAT_071c37cf == '\0') {
                    FUN_02f07e70(puVar4);
                    DAT_071c37cf = '\x01';
                  }
                  lVar13 = *(long *)puVar4;
                  if (*(int *)(lVar13 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                    lVar13 = *(long *)puVar4;
                  }
                  lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
                  if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x60), lVar13 == 0))
                  goto LAB_0575a45c;
                  plVar14 = (long *)(**(code **)(lVar13 + 0x18))
                                              (*(undefined8 *)(lVar13 + 0x40),lVar10,
                                               *(undefined8 *)(lVar13 + 0x28));
                  if (DAT_071c37cf == '\0') {
                    FUN_02f07e70(puVar4);
                    DAT_071c37cf = '\x01';
                  }
                  lVar13 = *(long *)puVar4;
                  if (*(int *)(lVar13 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                    lVar13 = *(long *)puVar4;
                  }
                  lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
                  if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x58), lVar13 == 0))
                  goto LAB_0575a45c;
                  plVar9 = (long *)(**(code **)(lVar13 + 0x18))
                                             (*(undefined8 *)(lVar13 + 0x40),lVar10,
                                              *(undefined8 *)(lVar13 + 0x28));
                  if (DAT_071c37cf == '\0') {
                    FUN_02f07e70(puVar4);
                    DAT_071c37cf = '\x01';
                  }
                  lVar13 = *(long *)puVar4;
                  if (*(int *)(lVar13 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                    lVar13 = *(long *)puVar4;
                  }
                  lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
                  if (lVar13 == 0) goto LAB_0575a45c;
                  lVar22 = *(long *)(lVar13 + 0x68);
                  lVar21 = *(long *)PTR_DAT_06d05520;
                  lVar13 = *(long *)(lVar21 + 0x38);
                  if (lVar13 == 0) {
                    FUN_02eea7c4(lVar21);
                    lVar13 = *(long *)(lVar21 + 0x38);
                  }
                  lVar13 = *(long *)(lVar13 + 0x10);
                  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                    lVar13 = FUN_02eea768();
                  }
                  if (*(int *)(lVar13 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                  }
                  lVar13 = *(long *)(*(long *)(lVar21 + 0x38) + 0x10);
                  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                    lVar13 = FUN_02eea768();
                  }
                  if (lVar22 == 0) goto LAB_0575a45c;
                  lVar13 = (**(code **)(lVar22 + 0x18))
                                     (*(undefined8 *)(lVar22 + 0x40),lVar10,
                                      **(undefined8 **)(lVar13 + 0xb8),
                                      *(undefined8 *)(lVar22 + 0x28));
                  if (DAT_071c37cf == '\0') {
                    FUN_02f07e70(puVar4);
                    DAT_071c37cf = '\x01';
                  }
                  lVar21 = *(long *)puVar4;
                  if (*(int *)(lVar21 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                    lVar21 = *(long *)puVar4;
                  }
                  lVar21 = *(long *)(*(long *)(lVar21 + 0xb8) + 8);
                  if (lVar21 == 0) goto LAB_0575a45c;
                  lVar21 = *(long *)(lVar21 + 0x40);
                  plVar15 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
                  if (plVar15 == (long *)0x0) goto LAB_0575a45c;
                  if ((lVar10 != 0) &&
                     (lVar22 = thunk_FUN_02ef170c(lVar10,*(undefined8 *)(*plVar15 + 0x40)),
                     lVar22 == 0)) goto LAB_0575a464;
                  if ((int)plVar15[3] == 0) goto LAB_0575a460;
                  plVar15[4] = lVar10;
                  thunk_FUN_02f411dc(plVar15 + 4,lVar10);
                  if (lVar21 == 0) goto LAB_0575a45c;
                  plVar15 = (long *)(**(code **)(lVar21 + 0x18))
                                              (*(undefined8 *)(lVar21 + 0x40),0,plVar15,
                                               *(undefined8 *)(lVar21 + 0x28));
                  if (DAT_071c37cf == '\0') {
                    FUN_02f07e70(puVar4);
                    DAT_071c37cf = '\x01';
                  }
                  lVar21 = *(long *)puVar4;
                  if (*(int *)(lVar21 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                    lVar21 = *(long *)puVar4;
                  }
                  lVar21 = *(long *)(*(long *)(lVar21 + 0xb8) + 8);
                  if (lVar21 == 0) goto LAB_0575a45c;
                  lVar21 = *(long *)(lVar21 + 0x48);
                  plVar16 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
                  if (plVar16 == (long *)0x0) goto LAB_0575a45c;
                  if ((lVar10 != 0) &&
                     (lVar22 = thunk_FUN_02ef170c(lVar10,*(undefined8 *)(*plVar16 + 0x40)),
                     lVar22 == 0)) goto LAB_0575a464;
                  if ((int)plVar16[3] == 0) goto LAB_0575a460;
                  plVar16[4] = lVar10;
                  thunk_FUN_02f411dc(plVar16 + 4,lVar10);
                  if (lVar21 == 0) goto LAB_0575a45c;
                  plVar16 = (long *)(**(code **)(lVar21 + 0x18))
                                              (*(undefined8 *)(lVar21 + 0x40),0,plVar16,
                                               *(undefined8 *)(lVar21 + 0x28));
                  uVar11 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d59758);
                  if (plVar14 == (long *)0x0) goto LAB_0575a45c;
                  if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)PTR_DAT_06d02bc8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f08440(plVar14);
                  }
                  puVar17 = (undefined4 *)thunk_FUN_02ef195c(plVar14);
                  uVar1 = *puVar17;
                  if (plVar9 != (long *)0x0) {
                    if (*plVar9 != *(long *)PTR_DAT_06d02350)
                    goto OVRPlugin__GetPredictedDisplayTime;
                  }
                  if (lVar13 == 0) {
                    lVar10 = 0;
                  }
                  else {
                    uVar23 = *(undefined8 *)PTR_DAT_06d4cd28;
                    lVar10 = thunk_FUN_02ef170c(lVar13,uVar23);
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f08440(lVar13,uVar23);
                    }
                  }
                  lVar13 = *(long *)PTR_DAT_06d56d00;
                  if (plVar15 != (long *)0x0) {
                    if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(lVar13 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 +
                                 -8) != lVar13)) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f08440(plVar15);
                    }
                  }
                  if (plVar16 != (long *)0x0) {
                    if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(lVar13 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 +
                                 -8) != lVar13)) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f08440(plVar16);
                    }
                  }
                  FUN_0575a4ec(uVar11,uVar1,plVar9,lVar10,plVar15,plVar16);
                  if ((lVar8 == 0) || (lVar10 = *(long *)(lVar8 + 0x18), lVar10 == 0))
                  goto LAB_0575a45c;
                  lVar13 = *(long *)(lVar10 + 0x10);
                  lVar21 = *(long *)PTR_DAT_06d59740;
                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                  if (lVar13 == 0) goto LAB_0575a45c;
                  uVar3 = *(uint *)(lVar10 + 0x18);
                  if (uVar3 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                    puVar19 = (undefined8 *)(lVar13 + (long)(int)uVar3 * 8 + 0x20);
                    *puVar19 = uVar11;
                    thunk_FUN_02f411dc(puVar19,uVar11);
                  }
                  else {
                    FUN_03fd0c9c(lVar10,uVar11,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  uVar18 = (ulong)*(uint *)(lVar12 + 0x18);
                  uVar20 = uVar20 + 1;
                } while ((long)uVar20 < (long)(int)*(uint *)(lVar12 + 0x18));
              }
              return lVar8;
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


