/*
FUNCTION_NAME: OVRPlugin$$CreatePassthroughColorLut
ENTRY_POINT: 06945154
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

void OVRPlugin__CreatePassthroughColorLut
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  uint in_w8;
  undefined4 uVar16;
  uint uVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  undefined8 *unaff_x19;
  long *unaff_x20;
  int iVar21;
  long unaff_x21;
  long lVar22;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 *puVar23;
  long unaff_x26;
  long *plVar24;
  uint uVar25;
  long *unaff_x28;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined8 in_stack_00000028;
  
  puVar23 = *(undefined8 **)(unaff_x25 + 0x448);
  plVar24 = *(long **)(unaff_x26 + 0x400);
  uVar25 = 0;
  do {
    if (in_w8 <= uVar25) goto LAB_069460ec;
    lVar22 = *(long *)(unaff_x21 + (long)(int)uVar25 * 8 + 0x20);
    if ((lVar22 == 0) || (lVar11 = FUN_07c98f88(lVar22,0), lVar11 == 0)) goto LAB_069460ac;
    uVar12 = thunk_FUN_07ca227c(lVar11,0);
                    /* try { // try from 069451a0 to 06a451a3 has its CatchHandler @ 0694536c */
                    /* try { // try from 069451a4 to 06a451af has its CatchHandler @ 069453ac */
    uVar12 = FUN_065cddf0(*unaff_x19,uVar12,*(undefined8 *)PTR_DAT_0848f320,0);
                    /* try { // try from 069451c0 to 06a451c3 has its CatchHandler @ 06945360 */
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
                    /* try { // try from 069451c4 to 06a451db has its CatchHandler @ 069453b0 */
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
    }
    FUN_07c4f4f4(uVar12,0);
    lVar11 = thunk_FUN_03ac74bc(*unaff_x24);
    FUN_0694d0b8(lVar11,0);
    lVar13 = FUN_07c98f88(lVar22,0);
                    /* try { // try from 069451f8 to 06a4520f has its CatchHandler @ 06945364 */
    if (lVar13 == 0) goto LAB_069460ac;
    uVar12 = thunk_FUN_07ca227c(lVar13,0);
    uVar12 = FUN_065c0764(*puVar23,uVar12,0);
                    /* try { // try from 06945218 to 06a4521f has its CatchHandler @ 069453cc */
    if (lVar11 == 0) goto LAB_069460ac;
    *(undefined8 *)(lVar11 + 0x28) = uVar12;
                    /* try { // try from 06945228 to 06a452af has its CatchHandler @ 069453b8 */
    thunk_FUN_03afed3c();
    *(long *)(lVar11 + 0x80) = lVar22;
    thunk_FUN_03afed3c((long *)(lVar11 + 0x80),lVar22);
    lVar22 = *unaff_x20;
    if (lVar22 == 0) goto LAB_069460ac;
    lVar13 = *(long *)(lVar22 + 0x10);
    lVar19 = *plVar24;
    *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
    if (lVar13 == 0) goto LAB_069460ac;
    uVar17 = *(uint *)(lVar22 + 0x18);
    if (uVar17 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar22 + 0x18) = uVar17 + 1;
      plVar18 = (long *)(lVar13 + (long)(int)uVar17 * 8 + 0x20);
      *plVar18 = lVar11;
      thunk_FUN_03afed3c(plVar18,lVar11);
    }
    else {
      FUN_04de85b0(lVar22,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
      ;
    }
    puVar7 = PTR_DAT_084b6428;
    in_w8 = *(uint *)(unaff_x21 + 0x18);
    uVar25 = uVar25 + 1;
  } while ((int)uVar25 < (int)in_w8);
  lVar22 = *unaff_x20;
  if (lVar22 != 0) {
    if (*(int *)(lVar22 + 0x18) == 0) {
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b6450,0);
      return;
    }
    lVar11 = *(long *)PTR_DAT_084b6428;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar11 = *(long *)puVar7;
    }
    puVar9 = PTR_DAT_084b63e8;
    puVar8 = PTR_DAT_084b63e0;
    puVar6 = PTR_DAT_08487110;
    puVar5 = PTR_DAT_08487108;
    puVar23 = *(undefined8 **)(lVar11 + 0xb8);
    lVar13 = puVar23[1];
    if (lVar13 == 0) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        puVar23 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar12 = *puVar23;
      lVar13 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b63f0);
      FUN_04963d38(lVar13,uVar12,*(undefined8 *)PTR_DAT_084b6420,0);
      plVar24 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
      *plVar24 = lVar13;
      thunk_FUN_03afed3c(plVar24,lVar13);
    }
    uVar12 = FUN_044cee2c(lVar22,lVar13,*(undefined8 *)puVar8);
    lVar22 = FUN_044e130c(uVar12,*(undefined8 *)puVar9);
    *unaff_x20 = lVar22;
    thunk_FUN_03afed3c();
    lVar22 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
    System_Collections_Generic_List<SpawnWaypoint>__TrimExcess(lVar22,*(undefined8 *)puVar6);
    puVar7 = PTR_DAT_084b5d60;
    if ((((*unaff_x20 != 0) &&
         (lVar11 = FUN_04de82e0(*unaff_x20,0,*(undefined8 *)PTR_DAT_084b5d60), lVar11 != 0)) &&
        (*(long *)(lVar11 + 0x80) != 0)) &&
       (lVar11 = FUN_07c98f88(*(long *)(lVar11 + 0x80),0), lVar11 != 0)) {
      FUN_07cab758(lVar11,0);
      puVar6 = PTR_DAT_084b6418;
      puVar5 = PTR_DAT_08487118;
      fVar4 = DAT_015c5928;
      lVar11 = *unaff_x20;
      if (lVar11 != 0) {
        iVar21 = 0;
        uVar25 = 1;
        fVar26 = param_3;
        do {
          fVar29 = param_3;
          if (*(int *)(lVar11 + 0x18) <= iVar21) {
            lVar11 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b5fd8);
            FUN_04de7d48(lVar11,*(undefined8 *)PTR_DAT_084b5fe0);
            plVar24 = unaff_x28 + 10;
            *plVar24 = lVar11;
            thunk_FUN_03afed3c(plVar24,lVar11);
            if ((int)uVar25 < 1) goto LAB_069457b4;
            uVar17 = 0;
            goto LAB_069455f4;
          }
          lVar11 = FUN_04de82e0(lVar11,iVar21,*(undefined8 *)puVar7);
          if (((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
             (lVar11 = FUN_07c98f88(*(long *)(lVar11 + 0x80),0), lVar11 == 0)) break;
          FUN_07cab758(lVar11,0);
          param_3 = fVar29;
          if (ABS(fVar29 - fVar26) <= fVar4) {
            if (iVar21 != 0) {
              if ((((*unaff_x20 == 0) ||
                   (lVar11 = FUN_04de82e0(*unaff_x20,iVar21,*(undefined8 *)puVar7), lVar11 == 0)) ||
                  (*(long *)(lVar11 + 0x80) == 0)) ||
                 (lVar11 = FUN_07c98f88(*(long *)(lVar11 + 0x80),0), lVar11 == 0)) break;
              fVar26 = (float)FUN_07cab758(lVar11,0);
              if (*unaff_x20 == 0) break;
              iVar3 = iVar21 + -1;
              lVar11 = FUN_04de82e0(*unaff_x20,iVar3,*(undefined8 *)puVar7);
              if (((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
                 (lVar11 = FUN_07c98f88(*(long *)(lVar11 + 0x80),0), lVar11 == 0)) break;
              fVar27 = (float)FUN_07cab758(lVar11,0);
              if (fVar26 < fVar27) {
                lVar11 = *unaff_x20;
                if (lVar11 == 0) break;
                uVar12 = FUN_04de82e0(lVar11,iVar21,*(undefined8 *)puVar7);
                if (*unaff_x20 == 0) break;
                uVar14 = FUN_04de82e0(*unaff_x20,iVar3,*(undefined8 *)puVar7);
                FUN_04de8334(lVar11,iVar3,uVar12,*(undefined8 *)puVar6);
                FUN_04de8334(lVar11,iVar21,uVar14,*(undefined8 *)puVar6);
              }
            }
          }
          else {
            uVar25 = uVar25 + 1;
          }
          if (lVar22 == 0) break;
          lVar11 = *(long *)(lVar22 + 0x10);
          lVar13 = *(long *)puVar5;
          *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
          if (lVar11 == 0) break;
          uVar17 = *(uint *)(lVar22 + 0x18);
          if (uVar17 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar22 + 0x18) = uVar17 + 1;
            *(uint *)(lVar11 + (long)(int)uVar17 * 4 + 0x20) = uVar25 - 1;
          }
          else {
            FUN_04d8c18c(lVar22,uVar25 - 1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          lVar11 = *unaff_x20;
          iVar21 = iVar21 + 1;
          fVar26 = fVar29;
        } while (lVar11 != 0);
      }
    }
  }
  goto LAB_069460ac;
LAB_069455f4:
  do {
    iVar21 = uVar17 - uVar25;
    puVar23 = (undefined8 *)PTR_DAT_084b64b0;
    if (iVar21 != -1) {
      puVar23 = (undefined8 *)PTR_DAT_08498a60;
    }
    puVar1 = (undefined8 *)PTR_DAT_084b6458;
    if (uVar17 != 0) {
      puVar1 = puVar23;
    }
    uVar14 = *puVar1;
    in_stack_00000028._4_4_ = uVar17;
    uVar12 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x48),(long)&stack0x00000028 + 4)
    ;
    uVar12 = FUN_065ce754(*(undefined8 *)PTR_DAT_084b6498,uVar14,uVar12,0);
    lVar13 = *plVar24;
    lVar11 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b6440);
    FUN_0694e06c(lVar11,0);
    if (lVar11 == 0) goto LAB_069460ac;
    *(undefined8 *)(lVar11 + 0x10) = uVar12;
    thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x10),uVar12);
    if (uVar17 == 0) {
      uVar10 = 0x3f800000;
      uVar28 = 0x3f800000;
      if (iVar21 != -1) {
        uVar10 = 0;
      }
LAB_069456c4:
      uVar16 = 0x3f800000;
    }
    else {
      uVar10 = 0x3f800000;
      if (iVar21 != -1) {
        uVar10 = 0;
      }
      if (2 < uVar25) {
        uVar28 = 0x3f000000;
        if (uVar17 != 1) {
          uVar28 = 0;
        }
        goto LAB_069456c4;
      }
      uVar28 = 0;
      uVar16 = 0x3f333333;
    }
    *(undefined4 *)(lVar11 + 0x20) = uVar16;
    *(undefined4 *)(lVar11 + 0x24) = uVar10;
    *(undefined4 *)(lVar11 + 0x30) = uVar28;
    *(undefined1 *)(lVar11 + 0x18) = 1;
    *(undefined1 *)(lVar11 + 0x28) = 0;
    if (lVar13 == 0) goto LAB_069460ac;
    lVar19 = *(long *)(lVar13 + 0x10);
    lVar20 = *(long *)PTR_DAT_084b63f8;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar19 == 0) goto LAB_069460ac;
    uVar2 = *(uint *)(lVar13 + 0x18);
    if (uVar2 < *(uint *)(lVar19 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
      plVar18 = (long *)(lVar19 + (long)(int)uVar2 * 8 + 0x20);
      *plVar18 = lVar11;
      thunk_FUN_03afed3c(plVar18,lVar11);
    }
    else {
      FUN_04de85b0(lVar13,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70))
      ;
    }
    uVar12 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b64c0,uVar12,*(undefined8 *)PTR_DAT_0848f320,0);
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
    }
    FUN_07c4f4f4(uVar12,0);
    uVar17 = uVar17 + 1;
  } while (uVar17 != uVar25);
LAB_069457b4:
  lVar11 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b5fb8);
  FUN_04de7d48(lVar11,*(undefined8 *)PTR_DAT_084b5fc0);
  plVar18 = unaff_x28 + 7;
  *plVar18 = lVar11;
  thunk_FUN_03afed3c(plVar18,lVar11);
  if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6478,0);
  lVar13 = *plVar18;
  lVar11 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b63d8);
  uVar14 = _UNK_015c8078;
  uVar12 = _DAT_015c8070;
  *(undefined8 *)(lVar11 + 0x78) = _UNK_015c8078;
  *(undefined8 *)(lVar11 + 0x70) = uVar12;
  FUN_06942668();
  *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)PTR_DAT_084b64c8;
  thunk_FUN_03afed3c();
  if (lVar13 != 0) {
    lVar19 = *(long *)(lVar13 + 0x10);
    lVar20 = *(long *)PTR_DAT_084b6408;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar19 != 0) {
      uVar17 = *(uint *)(lVar13 + 0x18);
      if (uVar17 < *(uint *)(lVar19 + 0x18)) {
        *(uint *)(lVar13 + 0x18) = uVar17 + 1;
        plVar15 = (long *)(lVar19 + (long)(int)uVar17 * 8 + 0x20);
        *plVar15 = lVar11;
        thunk_FUN_03afed3c(plVar15,lVar11);
      }
      else {
        FUN_04de85b0(lVar13,lVar11,
                     *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
      }
      FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b64b8,0);
      lVar13 = *plVar18;
      lVar11 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b63d8);
      *(undefined8 *)(lVar11 + 0x78) = uVar14;
      *(undefined8 *)(lVar11 + 0x70) = uVar12;
      FUN_06942668();
      *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)PTR_DAT_084b6460;
      thunk_FUN_03afed3c();
      if (lVar13 != 0) {
        lVar19 = *(long *)(lVar13 + 0x10);
        lVar20 = *(long *)PTR_DAT_084b6408;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar19 != 0) {
          uVar17 = *(uint *)(lVar13 + 0x18);
          if (uVar17 < *(uint *)(lVar19 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar17 + 1;
            plVar15 = (long *)(lVar19 + (long)(int)uVar17 * 8 + 0x20);
            *plVar15 = lVar11;
            thunk_FUN_03afed3c(plVar15,lVar11);
          }
          else {
            FUN_04de85b0(lVar13,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
          FUN_07c4f4f4(*(undefined8 *)PTR_DAT_084b6490,0);
          lVar13 = *plVar18;
          lVar11 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b63d8);
          *(undefined8 *)(lVar11 + 0x78) = uVar14;
          *(undefined8 *)(lVar11 + 0x70) = uVar12;
          FUN_06942668();
          *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)PTR_DAT_084b64a0;
          thunk_FUN_03afed3c();
          if (lVar13 != 0) {
            lVar19 = *(long *)(lVar13 + 0x10);
            lVar20 = *(long *)PTR_DAT_084b6408;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar19 != 0) {
              uVar17 = *(uint *)(lVar13 + 0x18);
              if (uVar17 < *(uint *)(lVar19 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar17 + 1;
                plVar15 = (long *)(lVar19 + (long)(int)uVar17 * 8 + 0x20);
                *plVar15 = lVar11;
                thunk_FUN_03afed3c(plVar15,lVar11);
              }
              else {
                FUN_04de85b0(lVar13,lVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              }
              puVar5 = PTR_DAT_084b6410;
              if (*plVar18 != 0) {
                lVar11 = FUN_04de82e0(*plVar18,2,*(undefined8 *)PTR_DAT_084b6410);
                if ((*plVar18 != 0) &&
                   (uVar12 = FUN_04de82e0(*plVar18,0,*(undefined8 *)puVar5), lVar11 != 0)) {
                  FUN_06941ffc(lVar11,uVar12);
                  puVar5 = PTR_DAT_084b6410;
                  if (*plVar18 != 0) {
                    lVar11 = FUN_04de82e0(*plVar18,2,*(undefined8 *)PTR_DAT_084b6410);
                    if ((*plVar18 != 0) &&
                       (uVar12 = FUN_04de82e0(*plVar18,1,*(undefined8 *)puVar5), lVar11 != 0)) {
                      FUN_069426d0(lVar11,uVar12);
                      if ((*plVar18 != 0) &&
                         (lVar11 = FUN_04de82e0(*plVar18,2,*(undefined8 *)PTR_DAT_084b6410),
                         lVar11 != 0)) {
                        uVar12 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b64a8,
                                              *(undefined8 *)(lVar11 + 0x28),
                                              *(undefined8 *)PTR_DAT_0848f320,0);
                        FUN_07c4f4f4(uVar12,0);
                        if (unaff_x28[7] != 0) {
                          lVar11 = unaff_x28[9];
                          uVar12 = FUN_04de82e0(unaff_x28[7],2,*(undefined8 *)PTR_DAT_084b6410);
                          if (lVar11 != 0) {
                            FUN_06941ffc(lVar11,uVar12);
                            lVar11 = *unaff_x20;
                            if (lVar11 != 0) {
                              iVar21 = 0;
                              while (puVar5 = PTR_DAT_084b6480, fVar26 = DAT_015c5994,
                                    fVar4 = DAT_015c56e4, iVar21 < *(int *)(lVar11 + 0x18)) {
                                if (lVar22 == 0) goto LAB_069460ac;
                                uVar10 = FUN_04d8be94(lVar22,iVar21,*(undefined8 *)PTR_DAT_08487a70)
                                ;
                                if (*unaff_x20 == 0) goto LAB_069460ac;
                                lVar11 = FUN_04de82e0(*unaff_x20,iVar21,*(undefined8 *)puVar7);
                                lVar13 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b6438);
                                FUN_0694d12c(lVar13,0);
                                if ((lVar13 == 0) ||
                                   (*(undefined4 *)(lVar13 + 0x10) = uVar10, lVar11 == 0))
                                goto LAB_069460ac;
                                *(long *)(lVar11 + 0x88) = lVar13;
                                thunk_FUN_03afed3c((long *)(lVar11 + 0x88),lVar13);
                                lVar11 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,5);
                                if (lVar11 == 0) goto LAB_069460ac;
                                if (*(int *)(lVar11 + 0x18) == 0) goto LAB_069460ec;
                                *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_084b64d8;
                                thunk_FUN_03afed3c();
                                if ((*unaff_x20 == 0) ||
                                   (lVar13 = FUN_04de82e0(*unaff_x20,iVar21,*(undefined8 *)puVar7),
                                   lVar13 == 0)) goto LAB_069460ac;
                                if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) == 0) goto LAB_069460ec;
                                *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar13 + 0x28);
                                thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x28));
                                if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_069460ec;
                                *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_084b6468;
                                thunk_FUN_03afed3c();
                                if ((*plVar24 == 0) ||
                                   (lVar13 = FUN_04de82e0(*plVar24,uVar10,
                                                          *(undefined8 *)PTR_DAT_084b63c8),
                                   lVar13 == 0)) goto LAB_069460ac;
                                if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) == 0) goto LAB_069460ec;
                                *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(lVar13 + 0x10);
                                thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x38));
                                if (*(uint *)(lVar11 + 0x18) < 5) goto LAB_069460ec;
                                *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)PTR_DAT_0848f320;
                                thunk_FUN_03afed3c();
                                uVar12 = FUN_065ce45c(lVar11,0);
                                if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
                                  thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
                                }
                                FUN_07c4f4f4(uVar12,0);
                                lVar11 = *unaff_x20;
                                iVar21 = iVar21 + 1;
                                if (lVar11 == 0) goto LAB_069460ac;
                              }
                              lVar22 = *plVar24;
                              if (lVar22 != 0) {
                                uVar17 = uVar25;
                                if (1 < (int)uVar25) {
                                  uVar17 = 2;
                                }
                                if ((int)uVar25 < 1) goto LAB_069460b0;
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
    lVar22 = FUN_04de82e0(lVar22,iVar21,*(undefined8 *)PTR_DAT_084b63c8);
    if ((lVar22 == 0) || (lVar22 = FUN_0694d834(), lVar22 == 0)) break;
    if (*(int *)(lVar22 + 0x18) == 2) {
      lVar11 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,5);
      if (lVar11 == 0) break;
      if (*(int *)(lVar11 + 0x18) == 0) {
LAB_069460ec:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar5;
      thunk_FUN_03afed3c();
      if ((*plVar18 == 0) ||
         (lVar13 = FUN_04de82e0(*plVar18,iVar21,*(undefined8 *)PTR_DAT_084b6410), lVar13 == 0))
      break;
      if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) == 0) goto LAB_069460ec;
      *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar13 + 0x28);
      thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x28));
      if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_069460ec;
      *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_084b6468;
      thunk_FUN_03afed3c();
      lVar13 = FUN_04de82e0(lVar22,0,*(undefined8 *)puVar7);
      if (lVar13 == 0) break;
      if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) == 0) goto LAB_069460ec;
      *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(lVar13 + 0x28);
      thunk_FUN_03afed3c((undefined8 *)(lVar11 + 0x38));
      if (*(uint *)(lVar11 + 0x18) < 5) goto LAB_069460ec;
      *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)PTR_DAT_0848f320;
      thunk_FUN_03afed3c();
      uVar12 = FUN_065ce45c(lVar11,0);
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
      }
      FUN_07c4f4f4(uVar12,0);
      lVar11 = FUN_04de82e0(lVar22,0,*(undefined8 *)puVar7);
      if (((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
         (lVar11 = FUN_07c98f88(*(long *)(lVar11 + 0x80),0), lVar11 == 0)) break;
      fVar29 = (float)FUN_07cac280(lVar11,0);
      if (fVar4 <= fVar29) {
        lVar11 = FUN_04de82e0(lVar22,0,*(undefined8 *)puVar7);
        if (((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
           (lVar11 = FUN_07c98f88(*(long *)(lVar11 + 0x80),0), lVar11 == 0)) break;
        fVar29 = (float)FUN_07cac280(lVar11,0);
        if (fVar29 <= fVar26) {
          if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b6488,0);
          goto LAB_06946098;
        }
        if (*plVar18 == 0) break;
        lVar11 = FUN_04de82e0(*plVar18,iVar21,*(undefined8 *)PTR_DAT_084b6410);
        uVar12 = FUN_04de82e0(lVar22,1,*(undefined8 *)puVar7);
        if (lVar11 == 0) break;
        FUN_06941ffc(lVar11,uVar12);
        if (*plVar18 == 0) break;
        lVar11 = FUN_04de82e0(*plVar18,iVar21,*(undefined8 *)PTR_DAT_084b6410);
        uVar14 = *(undefined8 *)puVar7;
        uVar12 = 0;
      }
      else {
        if (*plVar18 == 0) break;
        lVar11 = FUN_04de82e0(*plVar18,iVar21,*(undefined8 *)PTR_DAT_084b6410);
        uVar12 = FUN_04de82e0(lVar22,0,*(undefined8 *)puVar7);
        if (lVar11 == 0) break;
        FUN_06941ffc(lVar11,uVar12);
        if (*plVar18 == 0) break;
        lVar11 = FUN_04de82e0(*plVar18,iVar21,*(undefined8 *)PTR_DAT_084b6410);
        uVar14 = *(undefined8 *)puVar7;
        uVar12 = 1;
      }
      uVar12 = FUN_04de82e0(lVar22,uVar12,uVar14);
      if (lVar11 == 0) break;
      FUN_069426d0(lVar11,uVar12);
    }
LAB_06946098:
    if (uVar17 - 1 == iVar21) {
LAB_069460b0:
      (**(code **)(*unaff_x28 + 0x248))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x250));
      return;
    }
    lVar22 = *plVar24;
    iVar21 = iVar21 + 1;
  } while (lVar22 != 0);
LAB_069460ac:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


