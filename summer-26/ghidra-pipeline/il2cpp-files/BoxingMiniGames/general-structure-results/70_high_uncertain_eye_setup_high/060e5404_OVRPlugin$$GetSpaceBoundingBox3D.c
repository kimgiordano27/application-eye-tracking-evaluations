/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundingBox3D
ENTRY_POINT: 060e5404
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceBoundingBox3D(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_0459f03c();
  uVar7 = FUN_03642a4c(*unaff_x22,5);
  FUN_05d3bc48(uVar7,*unaff_x23,0);
  lVar11 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  puVar2 = PTR_DAT_07a24948;
  if (lVar11 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      puVar8 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
      *puVar8 = uVar7;
      thunk_FUN_036b7ad0(puVar8,uVar7);
    }
    else {
      FUN_0459f03c();
    }
    uVar7 = FUN_03642a4c(*unaff_x22,5);
    FUN_05d3bc48(uVar7,*(undefined8 *)puVar2,0);
    lVar11 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    puVar2 = PTR_DAT_07a24950;
    if (lVar11 != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        puVar8 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *puVar8 = uVar7;
        thunk_FUN_036b7ad0(puVar8,uVar7);
      }
      else {
        FUN_0459f03c();
      }
      uVar7 = FUN_03642a4c(*unaff_x22,5);
      FUN_05d3bc48(uVar7,*(undefined8 *)puVar2,0);
      lVar11 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      puVar2 = PTR_DAT_07a24980;
      if (lVar11 != 0) {
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          puVar8 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
          *puVar8 = uVar7;
          thunk_FUN_036b7ad0(puVar8,uVar7);
        }
        else {
          FUN_0459f03c();
        }
        uVar7 = FUN_03642a4c(*unaff_x22,5);
        FUN_05d3bc48(uVar7,*(undefined8 *)puVar2,0);
        lVar11 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        puVar6 = PTR_DAT_07a24970;
        puVar5 = PTR_DAT_07a24958;
        puVar4 = PTR_DAT_07a24930;
        puVar3 = PTR_DAT_07a22e38;
        puVar2 = PTR_DAT_07a207a8;
        if (lVar11 != 0) {
          uVar1 = *(uint *)(unaff_x19 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
            puVar8 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
            *puVar8 = uVar7;
            thunk_FUN_036b7ad0(puVar8,uVar7);
          }
          else {
            FUN_0459f03c();
          }
          **(long **)(*(long *)puVar2 + 0xb8) = unaff_x19;
          thunk_FUN_036b7ad0(*(undefined8 *)(*(long *)puVar2 + 0xb8));
          uVar7 = FUN_03642a4c(*(undefined8 *)puVar4,0x1a);
          FUN_05d3bc48(uVar7,*(undefined8 *)puVar6,0);
          puVar8 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          *puVar8 = uVar7;
          thunk_FUN_036b7ad0(puVar8,uVar7);
          uVar7 = FUN_03642a4c(*unaff_x22,0x1a);
          FUN_05d3bc48(uVar7,*(undefined8 *)puVar5,0);
          puVar8 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
          *puVar8 = uVar7;
          thunk_FUN_036b7ad0(puVar8,uVar7);
          lVar11 = FUN_03642a4c(*(undefined8 *)puVar3,0x1a);
          uVar7 = FUN_03642a4c(*unaff_x22,0);
          puVar3 = PTR_DAT_07a24978;
          if (lVar11 != 0) {
            if (*(int *)(lVar11 + 0x18) != 0) {
              *(undefined8 *)(lVar11 + 0x20) = uVar7;
              thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20),uVar7);
              uVar7 = FUN_03642a4c(*unaff_x22,6);
              FUN_05d3bc48(uVar7,*(undefined8 *)puVar3,0);
              if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar11 + 0x28) = uVar7;
                thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x28),uVar7);
                lVar9 = FUN_03642a4c(*unaff_x22,1);
                if (lVar9 == 0) goto LAB_060e647c;
                if (*(int *)(lVar9 + 0x18) != 0) {
                  uVar1 = *(uint *)(lVar11 + 0x18);
                  *(undefined4 *)(lVar9 + 0x20) = 3;
                  if (2 < uVar1) {
                    *(long *)(lVar11 + 0x30) = lVar9;
                    thunk_FUN_036b7ad0();
                    lVar9 = FUN_03642a4c(*unaff_x22,1);
                    if (lVar9 == 0) goto LAB_060e647c;
                    if (*(int *)(lVar9 + 0x18) != 0) {
                      *(undefined4 *)(lVar9 + 0x20) = 4;
                      if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
                        *(long *)(lVar11 + 0x38) = lVar9;
                        thunk_FUN_036b7ad0();
                        lVar9 = FUN_03642a4c(*unaff_x22,1);
                        if (lVar9 == 0) goto LAB_060e647c;
                        if (*(int *)(lVar9 + 0x18) != 0) {
                          uVar1 = *(uint *)(lVar11 + 0x18);
                          *(undefined4 *)(lVar9 + 0x20) = 5;
                          if (4 < uVar1) {
                            *(long *)(lVar11 + 0x40) = lVar9;
                            thunk_FUN_036b7ad0((long *)(lVar11 + 0x40));
                            uVar7 = FUN_03642a4c(*unaff_x22,0);
                            if (5 < *(uint *)(lVar11 + 0x18)) {
                              *(undefined8 *)(lVar11 + 0x48) = uVar7;
                              thunk_FUN_036b7ad0();
                              lVar9 = FUN_03642a4c(*unaff_x22,1);
                              if (lVar9 == 0) goto LAB_060e647c;
                              if (*(int *)(lVar9 + 0x18) != 0) {
                                uVar1 = *(uint *)(lVar11 + 0x18);
                                *(undefined4 *)(lVar9 + 0x20) = 7;
                                if (6 < uVar1) {
                                  *(long *)(lVar11 + 0x50) = lVar9;
                                  thunk_FUN_036b7ad0();
                                  lVar9 = FUN_03642a4c(*unaff_x22,1);
                                  if (lVar9 == 0) goto LAB_060e647c;
                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                    *(undefined4 *)(lVar9 + 0x20) = 8;
                                    if ((*(uint *)(lVar11 + 0x18) & 0xfffffff8) != 0) {
                                      *(long *)(lVar11 + 0x58) = lVar9;
                                      thunk_FUN_036b7ad0();
                                      lVar9 = FUN_03642a4c(*unaff_x22,1);
                                      if (lVar9 == 0) goto LAB_060e647c;
                                      if (*(int *)(lVar9 + 0x18) != 0) {
                                        uVar1 = *(uint *)(lVar11 + 0x18);
                                        *(undefined4 *)(lVar9 + 0x20) = 9;
                                        if (8 < uVar1) {
                                          *(long *)(lVar11 + 0x60) = lVar9;
                                          thunk_FUN_036b7ad0();
                                          lVar9 = FUN_03642a4c(*unaff_x22,1);
                                          if (lVar9 == 0) goto LAB_060e647c;
                                          if (*(int *)(lVar9 + 0x18) != 0) {
                                            uVar1 = *(uint *)(lVar11 + 0x18);
                                            *(undefined4 *)(lVar9 + 0x20) = 10;
                                            if (9 < uVar1) {
                                              *(long *)(lVar11 + 0x68) = lVar9;
                                              thunk_FUN_036b7ad0((long *)(lVar11 + 0x68));
                                              uVar7 = FUN_03642a4c(*unaff_x22,0);
                                              if (10 < *(uint *)(lVar11 + 0x18)) {
                                                *(undefined8 *)(lVar11 + 0x70) = uVar7;
                                                thunk_FUN_036b7ad0();
                                                lVar9 = FUN_03642a4c(*unaff_x22,1);
                                                if (lVar9 == 0) goto LAB_060e647c;
                                                if (*(int *)(lVar9 + 0x18) != 0) {
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  *(undefined4 *)(lVar9 + 0x20) = 0xc;
                                                  if (0xb < uVar1) {
                                                    *(long *)(lVar11 + 0x78) = lVar9;
                                                    thunk_FUN_036b7ad0();
                                                    lVar9 = FUN_03642a4c(*unaff_x22,1);
                                                    if (lVar9 == 0) goto LAB_060e647c;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      *(undefined4 *)(lVar9 + 0x20) = 0xd;
                                                      if (0xc < uVar1) {
                                                        *(long *)(lVar11 + 0x80) = lVar9;
                                                        thunk_FUN_036b7ad0();
                                                        lVar9 = FUN_03642a4c(*unaff_x22,1);
                                                        if (lVar9 == 0) goto LAB_060e647c;
                                                        if (*(int *)(lVar9 + 0x18) != 0) {
                                                          uVar1 = *(uint *)(lVar11 + 0x18);
                                                          *(undefined4 *)(lVar9 + 0x20) = 0xe;
                                                          if (0xd < uVar1) {
                                                            *(long *)(lVar11 + 0x88) = lVar9;
                                                            thunk_FUN_036b7ad0();
                                                            lVar9 = FUN_03642a4c(*unaff_x22,1);
                                                            if (lVar9 == 0) goto LAB_060e647c;
                                                            if (*(int *)(lVar9 + 0x18) != 0) {
                                                              uVar1 = *(uint *)(lVar11 + 0x18);
                                                              *(undefined4 *)(lVar9 + 0x20) = 0xf;
                                                              if (0xe < uVar1) {
                                                                *(long *)(lVar11 + 0x90) = lVar9;
                                                                thunk_FUN_036b7ad0((long *)(lVar11 +
                                                                                           0x90));
                                                                uVar7 = FUN_03642a4c(*unaff_x22,0);
                                                                if ((*(uint *)(lVar11 + 0x18) &
                                                                    0xfffffff0) != 0) {
                                                                  *(undefined8 *)(lVar11 + 0x98) =
                                                                       uVar7;
                                                                  thunk_FUN_036b7ad0();
                                                                  lVar9 = FUN_03642a4c(*unaff_x22,1)
                                                                  ;
                                                                  if (lVar9 == 0) goto LAB_060e647c;
                                                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                                                    uVar1 = *(uint *)(lVar11 + 0x18)
                                                                    ;
                                                                    *(undefined4 *)(lVar9 + 0x20) =
                                                                         0x11;
                                                                    if (0x10 < uVar1) {
                                                                      *(long *)(lVar11 + 0xa0) =
                                                                           lVar9;
                                                                      thunk_FUN_036b7ad0();
                                                                      lVar9 = FUN_03642a4c(*
                                                  unaff_x22,1);
                                                  if (lVar9 == 0) goto LAB_060e647c;
                                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    *(undefined4 *)(lVar9 + 0x20) = 0x12;
                                                    if (0x11 < uVar1) {
                                                      *(long *)(lVar11 + 0xa8) = lVar9;
                                                      thunk_FUN_036b7ad0();
                                                      lVar9 = FUN_03642a4c(*unaff_x22,1);
                                                      if (lVar9 == 0) goto LAB_060e647c;
                                                      if (*(int *)(lVar9 + 0x18) != 0) {
                                                        uVar1 = *(uint *)(lVar11 + 0x18);
                                                        *(undefined4 *)(lVar9 + 0x20) = 0x13;
                                                        if (0x12 < uVar1) {
                                                          *(long *)(lVar11 + 0xb0) = lVar9;
                                                          thunk_FUN_036b7ad0();
                                                          lVar9 = FUN_03642a4c(*unaff_x22,1);
                                                          if (lVar9 == 0) goto LAB_060e647c;
                                                          if (*(int *)(lVar9 + 0x18) != 0) {
                                                            uVar1 = *(uint *)(lVar11 + 0x18);
                                                            *(undefined4 *)(lVar9 + 0x20) = 0x14;
                                                            if (0x13 < uVar1) {
                                                              *(long *)(lVar11 + 0xb8) = lVar9;
                                                              thunk_FUN_036b7ad0((long *)(lVar11 + 
                                                  0xb8));
                                                  uVar7 = FUN_03642a4c(*unaff_x22,0);
                                                  if (0x14 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0xc0) = uVar7;
                                                    thunk_FUN_036b7ad0();
                                                    lVar9 = FUN_03642a4c(*unaff_x22,1);
                                                    if (lVar9 == 0) goto LAB_060e647c;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      *(undefined4 *)(lVar9 + 0x20) = 0x16;
                                                      if (0x15 < uVar1) {
                                                        *(long *)(lVar11 + 200) = lVar9;
                                                        thunk_FUN_036b7ad0();
                                                        lVar9 = FUN_03642a4c(*unaff_x22,1);
                                                        if (lVar9 == 0) goto LAB_060e647c;
                                                        if (*(int *)(lVar9 + 0x18) != 0) {
                                                          uVar1 = *(uint *)(lVar11 + 0x18);
                                                          *(undefined4 *)(lVar9 + 0x20) = 0x17;
                                                          if (0x16 < uVar1) {
                                                            *(long *)(lVar11 + 0xd0) = lVar9;
                                                            thunk_FUN_036b7ad0();
                                                            lVar9 = FUN_03642a4c(*unaff_x22,1);
                                                            if (lVar9 == 0) goto LAB_060e647c;
                                                            if (*(int *)(lVar9 + 0x18) != 0) {
                                                              uVar1 = *(uint *)(lVar11 + 0x18);
                                                              *(undefined4 *)(lVar9 + 0x20) = 0x18;
                                                              if (0x17 < uVar1) {
                                                                *(long *)(lVar11 + 0xd8) = lVar9;
                                                                thunk_FUN_036b7ad0();
                                                                lVar9 = FUN_03642a4c(*unaff_x22,1);
                                                                if (lVar9 == 0) goto LAB_060e647c;
                                                                if (*(int *)(lVar9 + 0x18) != 0) {
                                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                                  *(undefined4 *)(lVar9 + 0x20) =
                                                                       0x19;
                                                                  if (0x18 < uVar1) {
                                                                    *(long *)(lVar11 + 0xe0) = lVar9
                                                                    ;
                                                                    thunk_FUN_036b7ad0((long *)(
                                                  lVar11 + 0xe0));
                                                  uVar7 = FUN_03642a4c(*unaff_x22,0);
                                                  puVar4 = PTR_DAT_07a22fe8;
                                                  puVar3 = PTR_DAT_07a22f90;
                                                  if (0x19 < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0xe8) = uVar7;
                                                    thunk_FUN_036b7ad0();
                                                    plVar10 = (long *)(*(long *)(*(long *)puVar2 +
                                                                                0xb8) + 0x18);
                                                    *plVar10 = lVar11;
                                                    thunk_FUN_036b7ad0(plVar10,lVar11);
                                                    lVar11 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_04529000(lVar11,*(undefined8 *)puVar4);
                                                    puVar3 = PTR_DAT_07a24940;
                                                    if (lVar11 != 0) {
                                                      lVar9 = *(long *)(lVar11 + 0x10);
                                                      lVar12 = *(long *)PTR_DAT_07a24940;
                                                      *(int *)(lVar11 + 0x1c) =
                                                           *(int *)(lVar11 + 0x1c) + 1;
                                                      if (lVar9 != 0) {
                                                        uVar1 = *(uint *)(lVar11 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                          *(undefined4 *)
                                                           (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 6
                                                          ;
                                                          *(int *)(lVar11 + 0x1c) =
                                                               *(int *)(lVar11 + 0x1c) + 1;
                                                        }
                                                        else {
                                                          FUN_04529890(lVar11,6,*(undefined8 *)
                                                                                 (*(long *)(*(long *
                                                  )(lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_060e647c;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04529890(lVar11,7,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_060e647c;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04529890(lVar11,8,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_060e647c;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04529890(lVar11,9,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_060e647c;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04529890(lVar11,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_060e647c;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04529890(lVar11,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_060e647c;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04529890(lVar11,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_060e647c;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04529890(lVar11,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_060e647c;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04529890(lVar11,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_060e647c;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04529890(lVar11,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_060e647c;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04529890(lVar11,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_060e647c;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x13;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04529890(lVar11,0x13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_060e647c;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x15;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04529890(lVar11,0x15,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_060e647c;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04529890(lVar11,0x16,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_060e647c;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x17;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04529890(lVar11,0x17,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_060e647c;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x18;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04529890(lVar11,0x18,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_060e647c;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04529890(lVar11,2,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_060e647c;
                                                  }
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_04529890(lVar11,3,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_060e647c;
                                                  }
                                                  puVar3 = PTR_DAT_07a24960;
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                  }
                                                  else {
                                                    FUN_04529890(lVar11,4,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar2 +
                                                                              0xb8) + 0x20);
                                                  *plVar10 = lVar11;
                                                  thunk_FUN_036b7ad0(plVar10,lVar11);
                                                  uVar7 = FUN_03642a4c(*unaff_x22,5);
                                                  FUN_05d3bc48(uVar7,*(undefined8 *)puVar3,0);
                                                  puVar8 = (undefined8 *)
                                                           (*(long *)(*(long *)puVar2 + 0xb8) + 0x28
                                                           );
                                                  *puVar8 = uVar7;
                                                  thunk_FUN_036b7ad0(puVar8,uVar7);
                                                  return;
                                                  }
                                                  }
                                                  goto LAB_060e647c;
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
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
        }
      }
    }
  }
LAB_060e647c:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


