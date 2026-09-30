/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarManager$$RequestEyeTrackingPermission
ENTRY_POINT: 071e1ebc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void Oculus_Avatar2_OvrAvatarManager__RequestEyeTrackingPermission(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08eaa298);
  FUN_03c8f898(PTR_DAT_08eaa308);
  FUN_03c8f898(PTR_DAT_08eaa2e0);
  FUN_03c8f898(PTR_DAT_08eaa2d8);
  FUN_03c8f898(PTR_DAT_08eaa2f8);
  FUN_03c8f898(PTR_DAT_08eaa310);
  FUN_03c8f898(PTR_DAT_08eaa318);
  FUN_03c8f898(PTR_DAT_08eaa320);
  FUN_03c8f898(PTR_DAT_08eaa328);
  FUN_03c8f898(PTR_DAT_08eaa330);
  FUN_03c8f898(PTR_DAT_08eaa338);
  FUN_03c8f898(PTR_DAT_08eaa340);
  FUN_03c8f898(PTR_DAT_08eaa348);
  FUN_03c8f898(PTR_DAT_08eaa350);
  FUN_03c8f898(PTR_DAT_08eaa358);
  FUN_03c8f898(PTR_DAT_08eaa360);
  FUN_03c8f898(PTR_DAT_08eaa368);
  FUN_03c8f898(PTR_DAT_08eaa370);
  FUN_03c8f898(PTR_DAT_08eaa378);
  FUN_03c8f898(PTR_DAT_08eaa380);
  FUN_03c8f898(PTR_DAT_08eaa388);
  FUN_03c8f898(PTR_DAT_08eaa2f0);
  FUN_03c8f898(PTR_DAT_08eaa390);
  FUN_03c8f898(PTR_DAT_08eaa300);
  FUN_03c8f898(PTR_DAT_08eaa398);
  *(undefined1 *)(unaff_x19 + 0xab6) = 1;
  lVar8 = thunk_FUN_03cf5234(*unaff_x23);
  FUN_052124c0(lVar8,*unaff_x22);
  uVar9 = thunk_FUN_03cf5234(*unaff_x21);
  FUN_071e2728(uVar9,*unaff_x20,*unaff_x25,*unaff_x26);
  puVar3 = PTR_DAT_08eaa308;
  if (lVar8 != 0) {
    lVar13 = *(long *)(lVar8 + 0x10);
    lVar14 = *(long *)PTR_DAT_08eaa308;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar13 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        puVar10 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
        *puVar10 = uVar9;
        thunk_FUN_03d233cc(puVar10,uVar9);
      }
      else {
        FUN_05212cf4(lVar8,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar9 = thunk_FUN_03cf5234(*unaff_x21);
      FUN_071e2728(uVar9,*unaff_x25,*unaff_x25,*unaff_x26);
      lVar13 = *(long *)(lVar8 + 0x10);
      lVar14 = *(long *)puVar3;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      puVar4 = PTR_DAT_08eaa388;
      puVar5 = PTR_DAT_08eaa378;
      puVar2 = PTR_DAT_08eaa338;
      if (lVar13 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          puVar10 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
          *puVar10 = uVar9;
          thunk_FUN_03d233cc(puVar10,uVar9);
        }
        else {
          FUN_05212cf4(lVar8,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        uVar9 = thunk_FUN_03cf5234(*unaff_x21);
        FUN_071e2728(uVar9,*(undefined8 *)puVar2,*(undefined8 *)puVar5,*(undefined8 *)puVar4);
        lVar13 = *(long *)(lVar8 + 0x10);
        lVar14 = *(long *)puVar3;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar13 != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            puVar10 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
            *puVar10 = uVar9;
            thunk_FUN_03d233cc(puVar10,uVar9);
          }
          else {
            FUN_05212cf4(lVar8,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          uVar9 = thunk_FUN_03cf5234(*unaff_x21);
          uVar12 = *(undefined8 *)puVar5;
          FUN_071e2728(uVar9,uVar12,uVar12,*(undefined8 *)puVar4);
          lVar13 = *(long *)(lVar8 + 0x10);
          lVar14 = *(long *)puVar3;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          puVar4 = PTR_DAT_08eaa398;
          puVar5 = PTR_DAT_08eaa320;
          puVar2 = PTR_DAT_08eaa310;
          if (lVar13 != 0) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              puVar10 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
              *puVar10 = uVar9;
              thunk_FUN_03d233cc(puVar10,uVar9);
            }
            else {
              FUN_05212cf4(lVar8,uVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            uVar9 = thunk_FUN_03cf5234(*unaff_x21);
            FUN_071e2728(uVar9,*(undefined8 *)puVar5,*(undefined8 *)puVar4,*(undefined8 *)puVar2);
            lVar13 = *(long *)(lVar8 + 0x10);
            lVar14 = *(long *)puVar3;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar13 != 0) {
              uVar1 = *(uint *)(lVar8 + 0x18);
              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                puVar10 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                *puVar10 = uVar9;
                thunk_FUN_03d233cc(puVar10,uVar9);
              }
              else {
                FUN_05212cf4(lVar8,uVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              uVar9 = thunk_FUN_03cf5234(*unaff_x21);
              uVar12 = *(undefined8 *)puVar4;
              FUN_071e2728(uVar9,uVar12,uVar12,*(undefined8 *)puVar2);
              lVar13 = *(long *)(lVar8 + 0x10);
              lVar14 = *(long *)puVar3;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              puVar4 = PTR_DAT_08eaa390;
              puVar5 = PTR_DAT_08eaa380;
              puVar2 = PTR_DAT_08eaa348;
              if (lVar13 != 0) {
                uVar1 = *(uint *)(lVar8 + 0x18);
                if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                  puVar10 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar10 = uVar9;
                  thunk_FUN_03d233cc(puVar10,uVar9);
                }
                else {
                  FUN_05212cf4(lVar8,uVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
                uVar9 = thunk_FUN_03cf5234(*unaff_x21);
                FUN_071e2728(uVar9,*(undefined8 *)puVar4,*(undefined8 *)puVar5,*(undefined8 *)puVar2
                            );
                lVar13 = *(long *)(lVar8 + 0x10);
                lVar14 = *(long *)puVar3;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                puVar6 = PTR_DAT_08eaa360;
                puVar4 = PTR_DAT_08eaa358;
                if (lVar13 != 0) {
                  uVar1 = *(uint *)(lVar8 + 0x18);
                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                    puVar10 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                    *puVar10 = uVar9;
                    thunk_FUN_03d233cc(puVar10,uVar9);
                  }
                  else {
                    FUN_05212cf4(lVar8,uVar9,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  uVar9 = thunk_FUN_03cf5234(*unaff_x21);
                  FUN_071e2728(uVar9,*(undefined8 *)puVar6,*(undefined8 *)puVar6,
                               *(undefined8 *)puVar4);
                  lVar13 = *(long *)(lVar8 + 0x10);
                  lVar14 = *(long *)puVar3;
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  if (lVar13 != 0) {
                    uVar1 = *(uint *)(lVar8 + 0x18);
                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                      puVar10 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                      *puVar10 = uVar9;
                      thunk_FUN_03d233cc(puVar10,uVar9);
                    }
                    else {
                      FUN_05212cf4(lVar8,uVar9,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                    }
                    uVar9 = thunk_FUN_03cf5234(*unaff_x21);
                    uVar12 = *(undefined8 *)puVar5;
                    FUN_071e2728(uVar9,uVar12,uVar12,*(undefined8 *)puVar2);
                    lVar13 = *(long *)(lVar8 + 0x10);
                    lVar14 = *(long *)puVar3;
                    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                    puVar5 = PTR_DAT_08eaa340;
                    puVar2 = PTR_DAT_08eaa328;
                    if (lVar13 != 0) {
                      uVar1 = *(uint *)(lVar8 + 0x18);
                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                        puVar10 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                        *puVar10 = uVar9;
                        thunk_FUN_03d233cc(puVar10,uVar9);
                      }
                      else {
                        FUN_05212cf4(lVar8,uVar9,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                      }
                      uVar9 = thunk_FUN_03cf5234(*unaff_x21);
                      FUN_071e2728(uVar9,*(undefined8 *)puVar2,*(undefined8 *)puVar2,
                                   *(undefined8 *)puVar5);
                      lVar13 = *(long *)(lVar8 + 0x10);
                      lVar14 = *(long *)puVar3;
                      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                      puVar6 = PTR_DAT_08eaa370;
                      puVar4 = PTR_DAT_08eaa350;
                      puVar5 = PTR_DAT_08eaa330;
                      puVar2 = PTR_DAT_08eaa298;
                      if (lVar13 != 0) {
                        uVar1 = *(uint *)(lVar8 + 0x18);
                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                          puVar10 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                          *puVar10 = uVar9;
                          thunk_FUN_03d233cc(puVar10,uVar9);
                        }
                        else {
                          FUN_05212cf4(lVar8,uVar9,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                        }
                        **(long **)(*(long *)puVar2 + 0xb8) = lVar8;
                        thunk_FUN_03d233cc(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar8);
                        lVar8 = thunk_FUN_03cf5234(*unaff_x23);
                        FUN_052124c0(lVar8,*unaff_x22);
                        uVar9 = thunk_FUN_03cf5234(*unaff_x21);
                        FUN_071e2728(uVar9,*(undefined8 *)puVar4,*(undefined8 *)puVar5,
                                     *(undefined8 *)puVar6);
                        if (lVar8 != 0) {
                          lVar13 = *(long *)(lVar8 + 0x10);
                          lVar14 = *(long *)puVar3;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          puVar7 = PTR_DAT_08eaa368;
                          puVar4 = PTR_DAT_08eaa318;
                          if (lVar13 != 0) {
                            uVar1 = *(uint *)(lVar8 + 0x18);
                            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                              puVar10 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                              *puVar10 = uVar9;
                              thunk_FUN_03d233cc(puVar10,uVar9);
                            }
                            else {
                              FUN_05212cf4(lVar8,uVar9,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                            }
                            uVar9 = thunk_FUN_03cf5234(*unaff_x21);
                            FUN_071e2728(uVar9,*(undefined8 *)puVar4,*(undefined8 *)puVar4,
                                         *(undefined8 *)puVar7);
                            lVar13 = *(long *)(lVar8 + 0x10);
                            lVar14 = *(long *)puVar3;
                            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                            if (lVar13 != 0) {
                              uVar1 = *(uint *)(lVar8 + 0x18);
                              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                puVar10 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                                *puVar10 = uVar9;
                                thunk_FUN_03d233cc(puVar10,uVar9);
                              }
                              else {
                                FUN_05212cf4(lVar8,uVar9,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                              }
                              uVar9 = thunk_FUN_03cf5234(*unaff_x21);
                              uVar12 = *(undefined8 *)puVar5;
                              FUN_071e2728(uVar9,uVar12,uVar12,*(undefined8 *)puVar6);
                              lVar13 = *(long *)(lVar8 + 0x10);
                              lVar14 = *(long *)puVar3;
                              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                              if (lVar13 != 0) {
                                uVar1 = *(uint *)(lVar8 + 0x18);
                                if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                  puVar10 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                                  *puVar10 = uVar9;
                                  thunk_FUN_03d233cc(puVar10,uVar9);
                                }
                                else {
                                  FUN_05212cf4(lVar8,uVar9,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                plVar11 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                                *plVar11 = lVar8;
                                thunk_FUN_03d233cc(plVar11,lVar8);
                                return;
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
  FUN_03c8fb30();
}


