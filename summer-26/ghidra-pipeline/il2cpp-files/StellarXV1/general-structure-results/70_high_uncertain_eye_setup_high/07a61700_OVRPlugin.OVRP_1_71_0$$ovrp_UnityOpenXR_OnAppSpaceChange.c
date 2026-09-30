/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnAppSpaceChange
ENTRY_POINT: 07a61700
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnAppSpaceChange(long param_1)

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
  undefined4 in_w9;
  long lVar12;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  *(undefined4 *)(unaff_x19 + 0x18) = in_w9;
  *(undefined8 *)(param_1 + 0x20) = unaff_x20;
  thunk_FUN_040ec700();
  uVar7 = FUN_04077674(*unaff_x22,5);
  FUN_07593f88(uVar7,*unaff_x23,0);
  lVar11 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  puVar6 = PTR_DAT_092f0cb8;
  puVar5 = PTR_DAT_092f0ca0;
  puVar4 = PTR_DAT_092f0c68;
  puVar3 = PTR_DAT_092f0c60;
  puVar2 = PTR_DAT_092ecf00;
  if (lVar11 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      puVar8 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
      *puVar8 = uVar7;
      thunk_FUN_040ec700(puVar8,uVar7);
    }
    else {
      FUN_05c26d88();
    }
    **(long **)(*(long *)puVar2 + 0xb8) = unaff_x19;
    thunk_FUN_040ec700(*(undefined8 *)(*(long *)puVar2 + 0xb8));
    uVar7 = FUN_04077674(*(undefined8 *)puVar3,0x1a);
    FUN_07593f88(uVar7,*(undefined8 *)puVar6,0);
    puVar8 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *puVar8 = uVar7;
    thunk_FUN_040ec700(puVar8,uVar7);
    uVar7 = FUN_04077674(*unaff_x22,0x1a);
    FUN_07593f88(uVar7,*(undefined8 *)puVar5,0);
    puVar8 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *puVar8 = uVar7;
    thunk_FUN_040ec700(puVar8,uVar7);
    lVar11 = FUN_04077674(*(undefined8 *)puVar4,0x1a);
    uVar7 = FUN_04077674(*unaff_x22,0);
    puVar3 = PTR_DAT_092f0cc0;
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x18) != 0) {
        *(undefined8 *)(lVar11 + 0x20) = uVar7;
        thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x20),uVar7);
        uVar7 = FUN_04077674(*unaff_x22,6);
        FUN_07593f88(uVar7,*(undefined8 *)puVar3,0);
        if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar11 + 0x28) = uVar7;
          thunk_FUN_040ec700((undefined8 *)(lVar11 + 0x28),uVar7);
          lVar9 = FUN_04077674(*unaff_x22,1);
          if (lVar9 == 0) goto LAB_07a6261c;
          if (*(int *)(lVar9 + 0x18) != 0) {
            uVar1 = *(uint *)(lVar11 + 0x18);
            *(undefined4 *)(lVar9 + 0x20) = 3;
            if (2 < uVar1) {
              *(long *)(lVar11 + 0x30) = lVar9;
              thunk_FUN_040ec700();
              lVar9 = FUN_04077674(*unaff_x22,1);
              if (lVar9 == 0) goto LAB_07a6261c;
              if (*(int *)(lVar9 + 0x18) != 0) {
                *(undefined4 *)(lVar9 + 0x20) = 4;
                if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
                  *(long *)(lVar11 + 0x38) = lVar9;
                  thunk_FUN_040ec700();
                  lVar9 = FUN_04077674(*unaff_x22,1);
                  if (lVar9 == 0) goto LAB_07a6261c;
                  if (*(int *)(lVar9 + 0x18) != 0) {
                    uVar1 = *(uint *)(lVar11 + 0x18);
                    *(undefined4 *)(lVar9 + 0x20) = 5;
                    if (4 < uVar1) {
                      *(long *)(lVar11 + 0x40) = lVar9;
                      thunk_FUN_040ec700((long *)(lVar11 + 0x40));
                      uVar7 = FUN_04077674(*unaff_x22,0);
                      if (5 < *(uint *)(lVar11 + 0x18)) {
                        *(undefined8 *)(lVar11 + 0x48) = uVar7;
                        thunk_FUN_040ec700();
                        lVar9 = FUN_04077674(*unaff_x22,1);
                        if (lVar9 == 0) goto LAB_07a6261c;
                        if (*(int *)(lVar9 + 0x18) != 0) {
                          uVar1 = *(uint *)(lVar11 + 0x18);
                          *(undefined4 *)(lVar9 + 0x20) = 7;
                          if (6 < uVar1) {
                            *(long *)(lVar11 + 0x50) = lVar9;
                            thunk_FUN_040ec700();
                            lVar9 = FUN_04077674(*unaff_x22,1);
                            if (lVar9 == 0) goto LAB_07a6261c;
                            if (*(int *)(lVar9 + 0x18) != 0) {
                              *(undefined4 *)(lVar9 + 0x20) = 8;
                              if ((*(uint *)(lVar11 + 0x18) & 0xfffffff8) != 0) {
                                *(long *)(lVar11 + 0x58) = lVar9;
                                thunk_FUN_040ec700();
                                lVar9 = FUN_04077674(*unaff_x22,1);
                                if (lVar9 == 0) goto LAB_07a6261c;
                                if (*(int *)(lVar9 + 0x18) != 0) {
                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                  *(undefined4 *)(lVar9 + 0x20) = 9;
                                  if (8 < uVar1) {
                                    *(long *)(lVar11 + 0x60) = lVar9;
                                    thunk_FUN_040ec700();
                                    lVar9 = FUN_04077674(*unaff_x22,1);
                                    if (lVar9 == 0) goto LAB_07a6261c;
                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                      *(undefined4 *)(lVar9 + 0x20) = 10;
                                      if (9 < uVar1) {
                                        *(long *)(lVar11 + 0x68) = lVar9;
                                        thunk_FUN_040ec700((long *)(lVar11 + 0x68));
                                        uVar7 = FUN_04077674(*unaff_x22,0);
                                        if (10 < *(uint *)(lVar11 + 0x18)) {
                                          *(undefined8 *)(lVar11 + 0x70) = uVar7;
                                          thunk_FUN_040ec700();
                                          lVar9 = FUN_04077674(*unaff_x22,1);
                                          if (lVar9 == 0) goto LAB_07a6261c;
                                          if (*(int *)(lVar9 + 0x18) != 0) {
                                            uVar1 = *(uint *)(lVar11 + 0x18);
                                            *(undefined4 *)(lVar9 + 0x20) = 0xc;
                                            if (0xb < uVar1) {
                                              *(long *)(lVar11 + 0x78) = lVar9;
                                              thunk_FUN_040ec700();
                                              lVar9 = FUN_04077674(*unaff_x22,1);
                                              if (lVar9 == 0) goto LAB_07a6261c;
                                              if (*(int *)(lVar9 + 0x18) != 0) {
                                                uVar1 = *(uint *)(lVar11 + 0x18);
                                                *(undefined4 *)(lVar9 + 0x20) = 0xd;
                                                if (0xc < uVar1) {
                                                  *(long *)(lVar11 + 0x80) = lVar9;
                                                  thunk_FUN_040ec700();
                                                  lVar9 = FUN_04077674(*unaff_x22,1);
                                                  if (lVar9 == 0) goto LAB_07a6261c;
                                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    *(undefined4 *)(lVar9 + 0x20) = 0xe;
                                                    if (0xd < uVar1) {
                                                      *(long *)(lVar11 + 0x88) = lVar9;
                                                      thunk_FUN_040ec700();
                                                      lVar9 = FUN_04077674(*unaff_x22,1);
                                                      if (lVar9 == 0) goto LAB_07a6261c;
                                                      if (*(int *)(lVar9 + 0x18) != 0) {
                                                        uVar1 = *(uint *)(lVar11 + 0x18);
                                                        *(undefined4 *)(lVar9 + 0x20) = 0xf;
                                                        if (0xe < uVar1) {
                                                          *(long *)(lVar11 + 0x90) = lVar9;
                                                          thunk_FUN_040ec700((long *)(lVar11 + 0x90)
                                                                            );
                                                          uVar7 = FUN_04077674(*unaff_x22,0);
                                                          if ((*(uint *)(lVar11 + 0x18) & 0xfffffff0
                                                              ) != 0) {
                                                            *(undefined8 *)(lVar11 + 0x98) = uVar7;
                                                            thunk_FUN_040ec700();
                                                            lVar9 = FUN_04077674(*unaff_x22,1);
                                                            if (lVar9 == 0) goto LAB_07a6261c;
                                                            if (*(int *)(lVar9 + 0x18) != 0) {
                                                              uVar1 = *(uint *)(lVar11 + 0x18);
                                                              *(undefined4 *)(lVar9 + 0x20) = 0x11;
                                                              if (0x10 < uVar1) {
                                                                *(long *)(lVar11 + 0xa0) = lVar9;
                                                                thunk_FUN_040ec700();
                                                                lVar9 = FUN_04077674(*unaff_x22,1);
                                                                if (lVar9 == 0) goto LAB_07a6261c;
                                                                if (*(int *)(lVar9 + 0x18) != 0) {
                                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                                  *(undefined4 *)(lVar9 + 0x20) =
                                                                       0x12;
                                                                  if (0x11 < uVar1) {
                                                                    *(long *)(lVar11 + 0xa8) = lVar9
                                                                    ;
                                                                    thunk_FUN_040ec700();
                                                                    lVar9 = FUN_04077674(*unaff_x22,
                                                                                         1);
                                                                    if (lVar9 == 0)
                                                                    goto LAB_07a6261c;
                                                                    if (*(int *)(lVar9 + 0x18) != 0)
                                                                    {
                                                                      uVar1 = *(uint *)(lVar11 + 
                                                  0x18);
                                                  *(undefined4 *)(lVar9 + 0x20) = 0x13;
                                                  if (0x12 < uVar1) {
                                                    *(long *)(lVar11 + 0xb0) = lVar9;
                                                    thunk_FUN_040ec700();
                                                    lVar9 = FUN_04077674(*unaff_x22,1);
                                                    if (lVar9 == 0) goto LAB_07a6261c;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      *(undefined4 *)(lVar9 + 0x20) = 0x14;
                                                      if (0x13 < uVar1) {
                                                        *(long *)(lVar11 + 0xb8) = lVar9;
                                                        thunk_FUN_040ec700((long *)(lVar11 + 0xb8));
                                                        uVar7 = FUN_04077674(*unaff_x22,0);
                                                        if (0x14 < *(uint *)(lVar11 + 0x18)) {
                                                          *(undefined8 *)(lVar11 + 0xc0) = uVar7;
                                                          thunk_FUN_040ec700();
                                                          lVar9 = FUN_04077674(*unaff_x22,1);
                                                          if (lVar9 == 0) goto LAB_07a6261c;
                                                          if (*(int *)(lVar9 + 0x18) != 0) {
                                                            uVar1 = *(uint *)(lVar11 + 0x18);
                                                            *(undefined4 *)(lVar9 + 0x20) = 0x16;
                                                            if (0x15 < uVar1) {
                                                              *(long *)(lVar11 + 200) = lVar9;
                                                              thunk_FUN_040ec700();
                                                              lVar9 = FUN_04077674(*unaff_x22,1);
                                                              if (lVar9 == 0) goto LAB_07a6261c;
                                                              if (*(int *)(lVar9 + 0x18) != 0) {
                                                                uVar1 = *(uint *)(lVar11 + 0x18);
                                                                *(undefined4 *)(lVar9 + 0x20) = 0x17
                                                                ;
                                                                if (0x16 < uVar1) {
                                                                  *(long *)(lVar11 + 0xd0) = lVar9;
                                                                  thunk_FUN_040ec700();
                                                                  lVar9 = FUN_04077674(*unaff_x22,1)
                                                                  ;
                                                                  if (lVar9 == 0) goto LAB_07a6261c;
                                                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                                                    uVar1 = *(uint *)(lVar11 + 0x18)
                                                                    ;
                                                                    *(undefined4 *)(lVar9 + 0x20) =
                                                                         0x18;
                                                                    if (0x17 < uVar1) {
                                                                      *(long *)(lVar11 + 0xd8) =
                                                                           lVar9;
                                                                      thunk_FUN_040ec700();
                                                                      lVar9 = FUN_04077674(*
                                                  unaff_x22,1);
                                                  if (lVar9 == 0) goto LAB_07a6261c;
                                                  if (*(int *)(lVar9 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    *(undefined4 *)(lVar9 + 0x20) = 0x19;
                                                    if (0x18 < uVar1) {
                                                      *(long *)(lVar11 + 0xe0) = lVar9;
                                                      thunk_FUN_040ec700((long *)(lVar11 + 0xe0));
                                                      uVar7 = FUN_04077674(*unaff_x22,0);
                                                      puVar4 = PTR_DAT_092f0c88;
                                                      puVar3 = PTR_DAT_092f0c80;
                                                      if (0x19 < *(uint *)(lVar11 + 0x18)) {
                                                        *(undefined8 *)(lVar11 + 0xe8) = uVar7;
                                                        thunk_FUN_040ec700();
                                                        plVar10 = (long *)(*(long *)(*(long *)puVar2
                                                                                    + 0xb8) + 0x18);
                                                        *plVar10 = lVar11;
                                                        thunk_FUN_040ec700(plVar10,lVar11);
                                                        lVar11 = thunk_FUN_040b4efc(*(undefined8 *)
                                                                                     puVar4);
                                                        FUN_05bcc4ec(lVar11,*(undefined8 *)puVar3);
                                                        puVar3 = PTR_DAT_092f0c78;
                                                        if (lVar11 != 0) {
                                                          lVar9 = *(long *)(lVar11 + 0x10);
                                                          lVar12 = *(long *)PTR_DAT_092f0c78;
                                                          *(int *)(lVar11 + 0x1c) =
                                                               *(int *)(lVar11 + 0x1c) + 1;
                                                          if (lVar9 != 0) {
                                                            uVar1 = *(uint *)(lVar11 + 0x18);
                                                            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                              *(undefined4 *)
                                                               (lVar9 + (long)(int)uVar1 * 4 + 0x20)
                                                                   = 6;
                                                              *(int *)(lVar11 + 0x1c) =
                                                                   *(int *)(lVar11 + 0x1c) + 1;
                                                            }
                                                            else {
                                                              FUN_05bccd7c(lVar11,6,*(undefined8 *)
                                                                                     (*(long *)(*(
                                                  long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_07a6261c;
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
                                                    FUN_05bccd7c(lVar11,7,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_07a6261c;
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
                                                    FUN_05bccd7c(lVar11,8,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_07a6261c;
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
                                                    FUN_05bccd7c(lVar11,9,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_07a6261c;
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
                                                    FUN_05bccd7c(lVar11,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_07a6261c;
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
                                                    FUN_05bccd7c(lVar11,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_07a6261c;
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
                                                    FUN_05bccd7c(lVar11,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_07a6261c;
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
                                                    FUN_05bccd7c(lVar11,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_07a6261c;
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
                                                    FUN_05bccd7c(lVar11,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_07a6261c;
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
                                                    FUN_05bccd7c(lVar11,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_07a6261c;
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
                                                    FUN_05bccd7c(lVar11,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_07a6261c;
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
                                                    FUN_05bccd7c(lVar11,0x13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_07a6261c;
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
                                                    FUN_05bccd7c(lVar11,0x15,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_07a6261c;
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
                                                    FUN_05bccd7c(lVar11,0x16,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_07a6261c;
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
                                                    FUN_05bccd7c(lVar11,0x17,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_07a6261c;
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
                                                    FUN_05bccd7c(lVar11,0x18,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar9 = *(long *)(lVar11 + 0x10);
                                                    lVar12 = *(long *)puVar3;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_07a6261c;
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
                                                    FUN_05bccd7c(lVar11,2,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_07a6261c;
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
                                                    FUN_05bccd7c(lVar11,3,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar11 + 0x10);
                                                  lVar12 = *(long *)puVar3;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_07a6261c;
                                                  }
                                                  puVar3 = PTR_DAT_092f0ca8;
                                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                  }
                                                  else {
                                                    FUN_05bccd7c(lVar11,4,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar12 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  plVar10 = (long *)(*(long *)(*(long *)puVar2 +
                                                                              0xb8) + 0x20);
                                                  *plVar10 = lVar11;
                                                  thunk_FUN_040ec700(plVar10,lVar11);
                                                  uVar7 = FUN_04077674(*unaff_x22,5);
                                                  FUN_07593f88(uVar7,*(undefined8 *)puVar3,0);
                                                  puVar8 = (undefined8 *)
                                                           (*(long *)(*(long *)puVar2 + 0xb8) + 0x28
                                                           );
                                                  *puVar8 = uVar7;
                                                  thunk_FUN_040ec700(puVar8,uVar7);
                                                  return;
                                                  }
                                                  }
                                                  goto LAB_07a6261c;
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
      FUN_04077838();
    }
  }
LAB_07a6261c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


