/*
FUNCTION_NAME: OVRPlugin$$UpdatePassthroughColorLut
ENTRY_POINT: 0694535c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin__UpdatePassthroughColorLut
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  undefined4 uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *unaff_x19;
  long *unaff_x20;
  int iVar21;
  long *plVar22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  long *unaff_x28;
  uint uVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined8 in_stack_00000028;
  
                    /* catch() { ... } // from try @ 06944e7c with catch @ 0694535c */
  thunk_FUN_03afed3c();
                    /* catch() { ... } // from try @ 069451c0 with catch @ 06945360 */
                    /* catch() { ... } // from try @ 069451f8 with catch @ 06945364 */
                    /* catch() { ... } // from try @ 06944f90 with catch @ 06945368 */
                    /* catch() { ... } // from try @ 069451a0 with catch @ 0694536c */
  uVar10 = FUN_044cee2c();
                    /* catch() { ... } // from try @ 06944fc8 with catch @ 06945370 */
                    /* catch() { ... } // from try @ 06944e5c with catch @ 06945374 */
  lVar11 = FUN_044e130c(uVar10,*unaff_x26);
                    /* catch() { ... } // from try @ 06944d4c with catch @ 06945378 */
                    /* catch() { ... } // from try @ 06945090 with catch @ 0694537c */
  *unaff_x20 = lVar11;
                    /* catch() { ... } // from try @ 06945114 with catch @ 06945380 */
                    /* catch() { ... } // from try @ 06944dd0 with catch @ 06945384 */
  thunk_FUN_03afed3c();
                    /* catch() { ... } // from try @ 06945308 with catch @ 06945388 */
                    /* catch() { ... } // from try @ 069450b0 with catch @ 0694538c */
  lVar11 = thunk_FUN_03ac74bc(*unaff_x24);
                    /* catch() { ... } // from try @ 06944d6c with catch @ 06945390 */
                    /* catch() { ... } // from try @ 06945304 with catch @ 06945394 */
                    /* catch() { ... } // from try @ 06944e80 with catch @ 06945398 */
  System_Collections_Generic_List<SpawnWaypoint>__TrimExcess(lVar11,*unaff_x19);
  puVar7 = PTR_DAT_084b5d60;
                    /* catch() { ... } // from try @ 06945300 with catch @ 0694539c */
                    /* catch() { ... } // from try @ 06944f94 with catch @ 069453a0 */
                    /* catch() { ... } // from try @ 069452fc with catch @ 069453a4 */
                    /* catch() { ... } // from try @ 069452f8 with catch @ 069453a8 */
                    /* catch() { ... } // from try @ 069451a4 with catch @ 069453ac */
                    /* catch() { ... } // from try @ 069451c4 with catch @ 069453b0 */
                    /* catch() { ... } // from try @ 06944ff8 with catch @ 069453b4 */
                    /* catch() { ... } // from try @ 06945228 with catch @ 069453b8 */
                    /* catch() { ... } // from try @ 06944e60 with catch @ 069453bc */
                    /* catch() { ... } // from try @ 06944d1c with catch @ 069453c0 */
                    /* catch() { ... } // from try @ 06944f74 with catch @ 069453c4 */
                    /* catch() { ... } // from try @ 06944ee4 with catch @ 069453c8 */
                    /* catch() { ... } // from try @ 06944dc0 with catch @ 069453cc
                       catch() { ... } // from try @ 06944ed4 with catch @ 069453cc
                       catch() { ... } // from try @ 06944fe8 with catch @ 069453cc
                       catch() { ... } // from try @ 06945104 with catch @ 069453cc
                       catch() { ... } // from try @ 06945218 with catch @ 069453cc */
                    /* catch() { ... } // from try @ 069452f4 with catch @ 069453d0 */
  if ((((*unaff_x20 != 0) &&
       (lVar12 = FUN_04de82e0(*unaff_x20,0,*(undefined8 *)PTR_DAT_084b5d60), lVar12 != 0)) &&
      (*(long *)(lVar12 + 0x80) != 0)) &&
     (lVar12 = FUN_07c98f88(*(long *)(lVar12 + 0x80),0), lVar12 != 0)) {
                    /* catch() { ... } // from try @ 069452f0 with catch @ 069453d4 */
                    /* catch() { ... } // from try @ 06944d00 with catch @ 069453d8 */
    FUN_07cab758(lVar12,0);
    puVar8 = PTR_DAT_084b6418;
    puVar6 = PTR_DAT_08487118;
    fVar5 = DAT_015c5928;
    lVar12 = *unaff_x20;
    if (lVar12 != 0) {
                    /* try { // try from 069453f4 to 06a453f7 has its CatchHandler @ 069453fc */
                    /* catch() { ... } // from try @ 069453f4 with catch @ 069453fc */
                    /* try { // try from 06945400 to 06a45407 has its CatchHandler @ 06945410 */
      iVar21 = 0;
      uVar23 = 1;
      fVar24 = param_3;
      do {
        fVar27 = param_3;
                    /* try { // try from 06945408 to 06a45413 has its CatchHandler @ 06944ab0 */
                    /* catch() { ... } // from try @ 06945400 with catch @ 06945410 */
        if (*(int *)(lVar12 + 0x18) <= iVar21) {
          lVar12 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b5fd8);
          FUN_04de7d48(lVar12,*(undefined8 *)PTR_DAT_084b5fe0);
          plVar22 = unaff_x28 + 10;
          *plVar22 = lVar12;
          thunk_FUN_03afed3c(plVar22,lVar12);
          if ((int)uVar23 < 1) goto LAB_069457b4;
          uVar17 = 0;
          goto LAB_069455f4;
        }
        lVar12 = FUN_04de82e0(lVar12,iVar21,*(undefined8 *)puVar7);
        if (((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
           (lVar12 = FUN_07c98f88(*(long *)(lVar12 + 0x80),0), lVar12 == 0)) break;
        FUN_07cab758(lVar12,0);
        param_3 = fVar27;
        if (ABS(fVar27 - fVar24) <= fVar5) {
          if (iVar21 != 0) {
            if ((((*unaff_x20 == 0) ||
                 (lVar12 = FUN_04de82e0(*unaff_x20,iVar21,*(undefined8 *)puVar7), lVar12 == 0)) ||
                (*(long *)(lVar12 + 0x80) == 0)) ||
               (lVar12 = FUN_07c98f88(*(long *)(lVar12 + 0x80),0), lVar12 == 0)) break;
            fVar24 = (float)FUN_07cab758(lVar12,0);
            if (*unaff_x20 == 0) break;
            iVar4 = iVar21 + -1;
            lVar12 = FUN_04de82e0(*unaff_x20,iVar4,*(undefined8 *)puVar7);
            if (((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
               (lVar12 = FUN_07c98f88(*(long *)(lVar12 + 0x80),0), lVar12 == 0)) break;
            fVar25 = (float)FUN_07cab758(lVar12,0);
            if (fVar24 < fVar25) {
              lVar12 = *unaff_x20;
              if (lVar12 == 0) break;
              uVar10 = FUN_04de82e0(lVar12,iVar21,*(undefined8 *)puVar7);
              if (*unaff_x20 == 0) break;
              uVar13 = FUN_04de82e0(*unaff_x20,iVar4,*(undefined8 *)puVar7);
              FUN_04de8334(lVar12,iVar4,uVar10,*(undefined8 *)puVar8);
              FUN_04de8334(lVar12,iVar21,uVar13,*(undefined8 *)puVar8);
            }
          }
        }
        else {
          uVar23 = uVar23 + 1;
        }
        if (lVar11 == 0) break;
        lVar12 = *(long *)(lVar11 + 0x10);
        lVar19 = *(long *)puVar6;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar12 == 0) break;
        uVar17 = *(uint *)(lVar11 + 0x18);
        if (uVar17 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar17 + 1;
          *(uint *)(lVar12 + (long)(int)uVar17 * 4 + 0x20) = uVar23 - 1;
        }
        else {
          FUN_04d8c18c(lVar11,uVar23 - 1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
        lVar12 = *unaff_x20;
        iVar21 = iVar21 + 1;
        fVar24 = fVar27;
      } while (lVar12 != 0);
    }
  }
  goto LAB_069460ac;
LAB_069455f4:
  do {
    iVar21 = uVar17 - uVar23;
    puVar1 = (undefined8 *)PTR_DAT_084b64b0;
    if (iVar21 != -1) {
      puVar1 = (undefined8 *)PTR_DAT_08498a60;
    }
    puVar2 = (undefined8 *)PTR_DAT_084b6458;
    if (uVar17 != 0) {
      puVar2 = puVar1;
    }
    uVar13 = *puVar2;
    in_stack_00000028._4_4_ = uVar17;
    uVar10 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x48),(long)&stack0x00000028 + 4)
    ;
    uVar10 = FUN_065ce754(*(undefined8 *)PTR_DAT_084b6498,uVar13,uVar10,0);
    lVar19 = *plVar22;
    lVar12 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b6440);
    FUN_0694e06c(lVar12,0);
    if (lVar12 == 0) goto LAB_069460ac;
    *(undefined8 *)(lVar12 + 0x10) = uVar10;
    thunk_FUN_03afed3c((undefined8 *)(lVar12 + 0x10),uVar10);
    if (uVar17 == 0) {
      uVar9 = 0x3f800000;
      uVar26 = 0x3f800000;
      if (iVar21 != -1) {
        uVar9 = 0;
      }
LAB_069456c4:
      uVar16 = 0x3f800000;
    }
    else {
      uVar9 = 0x3f800000;
      if (iVar21 != -1) {
        uVar9 = 0;
      }
      if (2 < uVar23) {
        uVar26 = 0x3f000000;
        if (uVar17 != 1) {
          uVar26 = 0;
        }
        goto LAB_069456c4;
      }
      uVar26 = 0;
      uVar16 = 0x3f333333;
    }
    *(undefined4 *)(lVar12 + 0x20) = uVar16;
    *(undefined4 *)(lVar12 + 0x24) = uVar9;
    *(undefined4 *)(lVar12 + 0x30) = uVar26;
    *(undefined1 *)(lVar12 + 0x18) = 1;
    *(undefined1 *)(lVar12 + 0x28) = 0;
    if (lVar19 == 0) goto LAB_069460ac;
    lVar18 = *(long *)(lVar19 + 0x10);
    lVar20 = *(long *)PTR_DAT_084b63f8;
    *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
    if (lVar18 == 0) goto LAB_069460ac;
    uVar3 = *(uint *)(lVar19 + 0x18);
    if (uVar3 < *(uint *)(lVar18 + 0x18)) {
      *(uint *)(lVar19 + 0x18) = uVar3 + 1;
      plVar14 = (long *)(lVar18 + (long)(int)uVar3 * 8 + 0x20);
      *plVar14 = lVar12;
      thunk_FUN_03afed3c(plVar14,lVar12);
    }
    else {
      FUN_04de85b0(lVar19,lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70))
      ;
    }
    uVar10 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b64c0,uVar10,*(undefined8 *)PTR_DAT_0848f320,0);
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
    }
    FUN_07c4f4f4(uVar10,0);
    uVar17 = uVar17 + 1;
  } while (uVar17 != uVar23);
LAB_069457b4:
  lVar12 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b5fb8);
  FUN_04de7d48(lVar12,*(undefined8 *)PTR_DAT_084b5fc0);
  plVar14 = unaff_x28 + 7;
  *plVar14 = lVar12;
  thunk_FUN_03afed3c(plVar14,lVar12);
  if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6478,0);
  lVar19 = *plVar14;
  lVar12 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b63d8);
  uVar13 = _UNK_015c8078;
  uVar10 = _DAT_015c8070;
  *(undefined8 *)(lVar12 + 0x78) = _UNK_015c8078;
  *(undefined8 *)(lVar12 + 0x70) = uVar10;
  FUN_06942668();
  *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)PTR_DAT_084b64c8;
  thunk_FUN_03afed3c();
  if (lVar19 != 0) {
    lVar18 = *(long *)(lVar19 + 0x10);
    lVar20 = *(long *)PTR_DAT_084b6408;
    *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
    if (lVar18 != 0) {
      uVar17 = *(uint *)(lVar19 + 0x18);
      if (uVar17 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar19 + 0x18) = uVar17 + 1;
        plVar15 = (long *)(lVar18 + (long)(int)uVar17 * 8 + 0x20);
        *plVar15 = lVar12;
        thunk_FUN_03afed3c(plVar15,lVar12);
      }
      else {
        FUN_04de85b0(lVar19,lVar12,
                     *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
      }
      FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b64b8,0);
      lVar19 = *plVar14;
      lVar12 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b63d8);
      *(undefined8 *)(lVar12 + 0x78) = uVar13;
      *(undefined8 *)(lVar12 + 0x70) = uVar10;
      FUN_06942668();
      *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)PTR_DAT_084b6460;
      thunk_FUN_03afed3c();
      if (lVar19 != 0) {
        lVar18 = *(long *)(lVar19 + 0x10);
        lVar20 = *(long *)PTR_DAT_084b6408;
        *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
        if (lVar18 != 0) {
          uVar17 = *(uint *)(lVar19 + 0x18);
          if (uVar17 < *(uint *)(lVar18 + 0x18)) {
            *(uint *)(lVar19 + 0x18) = uVar17 + 1;
            plVar15 = (long *)(lVar18 + (long)(int)uVar17 * 8 + 0x20);
            *plVar15 = lVar12;
            thunk_FUN_03afed3c(plVar15,lVar12);
          }
          else {
            FUN_04de85b0(lVar19,lVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
          FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6490,0);
          lVar19 = *plVar14;
          lVar12 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b63d8);
          *(undefined8 *)(lVar12 + 0x78) = uVar13;
          *(undefined8 *)(lVar12 + 0x70) = uVar10;
          FUN_06942668();
          *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)PTR_DAT_084b64a0;
          thunk_FUN_03afed3c();
          if (lVar19 != 0) {
            lVar18 = *(long *)(lVar19 + 0x10);
            lVar20 = *(long *)PTR_DAT_084b6408;
            *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
            if (lVar18 != 0) {
              uVar17 = *(uint *)(lVar19 + 0x18);
              if (uVar17 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar19 + 0x18) = uVar17 + 1;
                plVar15 = (long *)(lVar18 + (long)(int)uVar17 * 8 + 0x20);
                *plVar15 = lVar12;
                thunk_FUN_03afed3c(plVar15,lVar12);
              }
              else {
                FUN_04de85b0(lVar19,lVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              }
              puVar6 = PTR_DAT_084b6410;
              if (*plVar14 != 0) {
                lVar12 = FUN_04de82e0(*plVar14,2,*(undefined8 *)PTR_DAT_084b6410);
                if ((*plVar14 != 0) &&
                   (uVar10 = FUN_04de82e0(*plVar14,0,*(undefined8 *)puVar6), lVar12 != 0)) {
                  FUN_06941ffc(lVar12,uVar10);
                  puVar6 = PTR_DAT_084b6410;
                  if (*plVar14 != 0) {
                    lVar12 = FUN_04de82e0(*plVar14,2,*(undefined8 *)PTR_DAT_084b6410);
                    if ((*plVar14 != 0) &&
                       (uVar10 = FUN_04de82e0(*plVar14,1,*(undefined8 *)puVar6), lVar12 != 0)) {
                      FUN_069426d0(lVar12,uVar10);
                      if ((*plVar14 != 0) &&
                         (lVar12 = FUN_04de82e0(*plVar14,2,*(undefined8 *)PTR_DAT_084b6410),
                         lVar12 != 0)) {
                        uVar10 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b64a8,
                                              *(undefined8 *)(lVar12 + 0x28),
                                              *(undefined8 *)PTR_DAT_0848f320,0);
                        FUN_07c4f4f4(uVar10,0);
                        if (unaff_x28[7] != 0) {
                          lVar12 = unaff_x28[9];
                          uVar10 = FUN_04de82e0(unaff_x28[7],2,*(undefined8 *)PTR_DAT_084b6410);
                          if (lVar12 != 0) {
                            FUN_06941ffc(lVar12,uVar10);
                            lVar12 = *unaff_x20;
                            if (lVar12 != 0) {
                              iVar21 = 0;
                              while (puVar6 = PTR_DAT_084b6480, fVar24 = DAT_015c5994,
                                    fVar5 = DAT_015c56e4, iVar21 < *(int *)(lVar12 + 0x18)) {
                                if (lVar11 == 0) goto LAB_069460ac;
                                uVar9 = FUN_04d8be94(lVar11,iVar21,*(undefined8 *)PTR_DAT_08487a70);
                                if (*unaff_x20 == 0) goto LAB_069460ac;
                                lVar12 = FUN_04de82e0(*unaff_x20,iVar21,*(undefined8 *)puVar7);
                                lVar19 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b6438);
                                FUN_0694d12c(lVar19,0);
                                if ((lVar19 == 0) ||
                                   (*(undefined4 *)(lVar19 + 0x10) = uVar9, lVar12 == 0))
                                goto LAB_069460ac;
                                *(long *)(lVar12 + 0x88) = lVar19;
                                thunk_FUN_03afed3c((long *)(lVar12 + 0x88),lVar19);
                                lVar12 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,5);
                                if (lVar12 == 0) goto LAB_069460ac;
                                if (*(int *)(lVar12 + 0x18) == 0) goto LAB_069460ec;
                                *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_084b64d8;
                                thunk_FUN_03afed3c();
                                if ((*unaff_x20 == 0) ||
                                   (lVar19 = FUN_04de82e0(*unaff_x20,iVar21,*(undefined8 *)puVar7),
                                   lVar19 == 0)) goto LAB_069460ac;
                                if ((*(uint *)(lVar12 + 0x18) & 0xfffffffe) == 0) goto LAB_069460ec;
                                *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)(lVar19 + 0x28);
                                thunk_FUN_03afed3c((undefined8 *)(lVar12 + 0x28));
                                if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_069460ec;
                                *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)PTR_DAT_084b6468;
                                thunk_FUN_03afed3c();
                                if ((*plVar22 == 0) ||
                                   (lVar19 = FUN_04de82e0(*plVar22,uVar9,
                                                          *(undefined8 *)PTR_DAT_084b63c8),
                                   lVar19 == 0)) goto LAB_069460ac;
                                if ((*(uint *)(lVar12 + 0x18) & 0xfffffffc) == 0) goto LAB_069460ec;
                                *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(lVar19 + 0x10);
                                thunk_FUN_03afed3c((undefined8 *)(lVar12 + 0x38));
                                if (*(uint *)(lVar12 + 0x18) < 5) goto LAB_069460ec;
                                *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)PTR_DAT_0848f320;
                                thunk_FUN_03afed3c();
                                uVar10 = FUN_065ce45c(lVar12,0);
                                if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
                                  thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
                                }
                                FUN_07c4f4f4(uVar10,0);
                                lVar12 = *unaff_x20;
                                iVar21 = iVar21 + 1;
                                if (lVar12 == 0) goto LAB_069460ac;
                              }
                              lVar11 = *plVar22;
                              if (lVar11 != 0) {
                                uVar17 = uVar23;
                                if (1 < (int)uVar23) {
                                  uVar17 = 2;
                                }
                                if ((int)uVar23 < 1) goto LAB_069460b0;
                                iVar21 = 0;
                                goto LAB_06945da4;
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
  }
  goto LAB_069460ac;
LAB_06945da4:
  do {
    lVar11 = FUN_04de82e0(lVar11,iVar21,*(undefined8 *)PTR_DAT_084b63c8);
    if ((lVar11 == 0) || (lVar11 = FUN_0694d834(), lVar11 == 0)) break;
    if (*(int *)(lVar11 + 0x18) == 2) {
      lVar12 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,5);
      if (lVar12 == 0) break;
      if (*(int *)(lVar12 + 0x18) == 0) {
LAB_069460ec:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar6;
      thunk_FUN_03afed3c();
      if ((*plVar14 == 0) ||
         (lVar19 = FUN_04de82e0(*plVar14,iVar21,*(undefined8 *)PTR_DAT_084b6410), lVar19 == 0))
      break;
      if ((*(uint *)(lVar12 + 0x18) & 0xfffffffe) == 0) goto LAB_069460ec;
      *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)(lVar19 + 0x28);
      thunk_FUN_03afed3c((undefined8 *)(lVar12 + 0x28));
      if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_069460ec;
      *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)PTR_DAT_084b6468;
      thunk_FUN_03afed3c();
      lVar19 = FUN_04de82e0(lVar11,0,*(undefined8 *)puVar7);
      if (lVar19 == 0) break;
      if ((*(uint *)(lVar12 + 0x18) & 0xfffffffc) == 0) goto LAB_069460ec;
      *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(lVar19 + 0x28);
      thunk_FUN_03afed3c((undefined8 *)(lVar12 + 0x38));
      if (*(uint *)(lVar12 + 0x18) < 5) goto LAB_069460ec;
      *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)PTR_DAT_0848f320;
      thunk_FUN_03afed3c();
      uVar10 = FUN_065ce45c(lVar12,0);
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
      }
      FUN_07c4f4f4(uVar10,0);
      lVar12 = FUN_04de82e0(lVar11,0,*(undefined8 *)puVar7);
      if (((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
         (lVar12 = FUN_07c98f88(*(long *)(lVar12 + 0x80),0), lVar12 == 0)) break;
      fVar27 = (float)FUN_07cac280(lVar12,0);
      if (fVar5 <= fVar27) {
        lVar12 = FUN_04de82e0(lVar11,0,*(undefined8 *)puVar7);
        if (((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
           (lVar12 = FUN_07c98f88(*(long *)(lVar12 + 0x80),0), lVar12 == 0)) break;
        fVar27 = (float)FUN_07cac280(lVar12,0);
        if (fVar27 <= fVar24) {
          if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b6488,0);
          goto LAB_06946098;
        }
        if (*plVar14 == 0) break;
        lVar12 = FUN_04de82e0(*plVar14,iVar21,*(undefined8 *)PTR_DAT_084b6410);
        uVar10 = FUN_04de82e0(lVar11,1,*(undefined8 *)puVar7);
        if (lVar12 == 0) break;
        FUN_06941ffc(lVar12,uVar10);
        if (*plVar14 == 0) break;
        lVar12 = FUN_04de82e0(*plVar14,iVar21,*(undefined8 *)PTR_DAT_084b6410);
        uVar13 = *(undefined8 *)puVar7;
        uVar10 = 0;
      }
      else {
        if (*plVar14 == 0) break;
        lVar12 = FUN_04de82e0(*plVar14,iVar21,*(undefined8 *)PTR_DAT_084b6410);
        uVar10 = FUN_04de82e0(lVar11,0,*(undefined8 *)puVar7);
        if (lVar12 == 0) break;
        FUN_06941ffc(lVar12,uVar10);
        if (*plVar14 == 0) break;
        lVar12 = FUN_04de82e0(*plVar14,iVar21,*(undefined8 *)PTR_DAT_084b6410);
        uVar13 = *(undefined8 *)puVar7;
        uVar10 = 1;
      }
      uVar10 = FUN_04de82e0(lVar11,uVar10,uVar13);
      if (lVar12 == 0) break;
      FUN_069426d0(lVar12,uVar10);
    }
LAB_06946098:
    if (uVar17 - 1 == iVar21) {
LAB_069460b0:
      (**(code **)(*unaff_x28 + 0x248))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x250));
      return;
    }
    lVar11 = *plVar22;
    iVar21 = iVar21 + 1;
  } while (lVar11 != 0);
LAB_069460ac:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


