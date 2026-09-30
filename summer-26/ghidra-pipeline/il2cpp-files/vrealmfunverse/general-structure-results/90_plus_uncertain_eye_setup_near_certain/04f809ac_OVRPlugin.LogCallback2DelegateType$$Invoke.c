/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$Invoke
ENTRY_POINT: 04f809ac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType__Invoke(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  if (param_1 == 0) goto LAB_04f81680;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = 5;
    if (4 < uVar1) {
      *(long *)(unaff_x19 + 0x40) = param_1;
      thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x40));
      uVar4 = FUN_02b3c908(*unaff_x22,0);
      if (5 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x48) = uVar4;
        thunk_FUN_02bb0e9c();
        lVar5 = FUN_02b3c908(*unaff_x22,1);
        if (lVar5 == 0) goto LAB_04f81680;
        if (*(int *)(lVar5 + 0x18) != 0) {
          uVar1 = *(uint *)(unaff_x19 + 0x18);
          *(undefined4 *)(lVar5 + 0x20) = 7;
          if (6 < uVar1) {
            *(long *)(unaff_x19 + 0x50) = lVar5;
            thunk_FUN_02bb0e9c();
            lVar5 = FUN_02b3c908(*unaff_x22,1);
            if (lVar5 == 0) goto LAB_04f81680;
            if (*(int *)(lVar5 + 0x18) != 0) {
              *(undefined4 *)(lVar5 + 0x20) = 8;
              if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff8) != 0) {
                *(long *)(unaff_x19 + 0x58) = lVar5;
                thunk_FUN_02bb0e9c();
                lVar5 = FUN_02b3c908(*unaff_x22,1);
                if (lVar5 == 0) goto LAB_04f81680;
                if (*(int *)(lVar5 + 0x18) != 0) {
                  uVar1 = *(uint *)(unaff_x19 + 0x18);
                  *(undefined4 *)(lVar5 + 0x20) = 9;
                  if (8 < uVar1) {
                    *(long *)(unaff_x19 + 0x60) = lVar5;
                    thunk_FUN_02bb0e9c();
                    lVar5 = FUN_02b3c908(*unaff_x22,1);
                    if (lVar5 == 0) goto LAB_04f81680;
                    if (*(int *)(lVar5 + 0x18) != 0) {
                      uVar1 = *(uint *)(unaff_x19 + 0x18);
                      *(undefined4 *)(lVar5 + 0x20) = 10;
                      if (9 < uVar1) {
                        *(long *)(unaff_x19 + 0x68) = lVar5;
                        thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x68));
                        uVar4 = FUN_02b3c908(*unaff_x22,0);
                        if (10 < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined8 *)(unaff_x19 + 0x70) = uVar4;
                          thunk_FUN_02bb0e9c();
                          lVar5 = FUN_02b3c908(*unaff_x22,1);
                          if (lVar5 == 0) goto LAB_04f81680;
                          if (*(int *)(lVar5 + 0x18) != 0) {
                            uVar1 = *(uint *)(unaff_x19 + 0x18);
                            *(undefined4 *)(lVar5 + 0x20) = 0xc;
                            if (0xb < uVar1) {
                              *(long *)(unaff_x19 + 0x78) = lVar5;
                              thunk_FUN_02bb0e9c();
                              lVar5 = FUN_02b3c908(*unaff_x22,1);
                              if (lVar5 == 0) goto LAB_04f81680;
                              if (*(int *)(lVar5 + 0x18) != 0) {
                                uVar1 = *(uint *)(unaff_x19 + 0x18);
                                *(undefined4 *)(lVar5 + 0x20) = 0xd;
                                if (0xc < uVar1) {
                                  *(long *)(unaff_x19 + 0x80) = lVar5;
                                  thunk_FUN_02bb0e9c();
                                  lVar5 = FUN_02b3c908(*unaff_x22,1);
                                  if (lVar5 == 0) goto LAB_04f81680;
                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                    uVar1 = *(uint *)(unaff_x19 + 0x18);
                                    *(undefined4 *)(lVar5 + 0x20) = 0xe;
                                    if (0xd < uVar1) {
                                      *(long *)(unaff_x19 + 0x88) = lVar5;
                                      thunk_FUN_02bb0e9c();
                                      lVar5 = FUN_02b3c908(*unaff_x22,1);
                                      if (lVar5 == 0) goto LAB_04f81680;
                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                        uVar1 = *(uint *)(unaff_x19 + 0x18);
                                        *(undefined4 *)(lVar5 + 0x20) = 0xf;
                                        if (0xe < uVar1) {
                                          *(long *)(unaff_x19 + 0x90) = lVar5;
                                          thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x90));
                                          uVar4 = FUN_02b3c908(*unaff_x22,0);
                                          if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff0) != 0) {
                                            *(undefined8 *)(unaff_x19 + 0x98) = uVar4;
                                            thunk_FUN_02bb0e9c();
                                            lVar5 = FUN_02b3c908(*unaff_x22,1);
                                            if (lVar5 == 0) goto LAB_04f81680;
                                            if (*(int *)(lVar5 + 0x18) != 0) {
                                              uVar1 = *(uint *)(unaff_x19 + 0x18);
                                              *(undefined4 *)(lVar5 + 0x20) = 0x11;
                                              if (0x10 < uVar1) {
                                                *(long *)(unaff_x19 + 0xa0) = lVar5;
                                                thunk_FUN_02bb0e9c();
                                                lVar5 = FUN_02b3c908(*unaff_x22,1);
                                                if (lVar5 == 0) goto LAB_04f81680;
                                                if (*(int *)(lVar5 + 0x18) != 0) {
                                                  uVar1 = *(uint *)(unaff_x19 + 0x18);
                                                  *(undefined4 *)(lVar5 + 0x20) = 0x12;
                                                  if (0x11 < uVar1) {
                                                    *(long *)(unaff_x19 + 0xa8) = lVar5;
                                                    thunk_FUN_02bb0e9c();
                                                    lVar5 = FUN_02b3c908(*unaff_x22,1);
                                                    if (lVar5 == 0) goto LAB_04f81680;
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      uVar1 = *(uint *)(unaff_x19 + 0x18);
                                                      *(undefined4 *)(lVar5 + 0x20) = 0x13;
                                                      if (0x12 < uVar1) {
                                                        *(long *)(unaff_x19 + 0xb0) = lVar5;
                                                        thunk_FUN_02bb0e9c();
                                                        lVar5 = FUN_02b3c908(*unaff_x22,1);
                                                        if (lVar5 == 0) goto LAB_04f81680;
                                                        if (*(int *)(lVar5 + 0x18) != 0) {
                                                          uVar1 = *(uint *)(unaff_x19 + 0x18);
                                                          *(undefined4 *)(lVar5 + 0x20) = 0x14;
                                                          if (0x13 < uVar1) {
                                                            *(long *)(unaff_x19 + 0xb8) = lVar5;
                                                            thunk_FUN_02bb0e9c((long *)(unaff_x19 +
                                                                                       0xb8));
                                                            uVar4 = FUN_02b3c908(*unaff_x22,0);
                                                            if (0x14 < *(uint *)(unaff_x19 + 0x18))
                                                            {
                                                              *(undefined8 *)(unaff_x19 + 0xc0) =
                                                                   uVar4;
                                                              thunk_FUN_02bb0e9c();
                                                              lVar5 = FUN_02b3c908(*unaff_x22,1);
                                                              if (lVar5 == 0) goto LAB_04f81680;
                                                              if (*(int *)(lVar5 + 0x18) != 0) {
                                                                uVar1 = *(uint *)(unaff_x19 + 0x18);
                                                                *(undefined4 *)(lVar5 + 0x20) = 0x16
                                                                ;
                                                                if (0x15 < uVar1) {
                                                                  *(long *)(unaff_x19 + 200) = lVar5
                                                                  ;
                                                                  thunk_FUN_02bb0e9c();
                                                                  lVar5 = FUN_02b3c908(*unaff_x22,1)
                                                                  ;
                                                                  if (lVar5 == 0) goto LAB_04f81680;
                                                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                                                    uVar1 = *(uint *)(unaff_x19 +
                                                                                     0x18);
                                                                    *(undefined4 *)(lVar5 + 0x20) =
                                                                         0x17;
                                                                    if (0x16 < uVar1) {
                                                                      *(long *)(unaff_x19 + 0xd0) =
                                                                           lVar5;
                                                                      thunk_FUN_02bb0e9c();
                                                                      lVar5 = FUN_02b3c908(*
                                                  unaff_x22,1);
                                                  if (lVar5 == 0) goto LAB_04f81680;
                                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(unaff_x19 + 0x18);
                                                    *(undefined4 *)(lVar5 + 0x20) = 0x18;
                                                    if (0x17 < uVar1) {
                                                      *(long *)(unaff_x19 + 0xd8) = lVar5;
                                                      thunk_FUN_02bb0e9c();
                                                      lVar5 = FUN_02b3c908(*unaff_x22,1);
                                                      if (lVar5 == 0) goto LAB_04f81680;
                                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                                        uVar1 = *(uint *)(unaff_x19 + 0x18);
                                                        *(undefined4 *)(lVar5 + 0x20) = 0x19;
                                                        if (0x18 < uVar1) {
                                                          *(long *)(unaff_x19 + 0xe0) = lVar5;
                                                          thunk_FUN_02bb0e9c((long *)(unaff_x19 +
                                                                                     0xe0));
                                                          uVar4 = FUN_02b3c908(*unaff_x22,0);
                                                          puVar3 = 
                                                  Firebase_Firestore_Converters_DictionaryConverter<uint>_TypeInfo
                                                  ;
                                                  puVar2 = 
                                                  UnityEngine_UIElements_DefaultTreeViewController<object>_TypeInfo
                                                  ;
                                                  if (0x19 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0xe8) = uVar4;
                                                    thunk_FUN_02bb0e9c();
                                                    *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18) =
                                                         unaff_x19;
                                                    thunk_FUN_02bb0e9c();
                                                    lVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_037550f8(lVar5,*(undefined8 *)puVar3);
                                                    puVar2 = 
                                                  System_Func<DeactivateEventArgs>_TypeInfo;
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  System_Func<DeactivateEventArgs>_TypeInfo;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined4 *)
                                                       (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                      *(int *)(lVar5 + 0x1c) =
                                                           *(int *)(lVar5 + 0x1c) + 1;
                                                    }
                                                    else {
                                                      FUN_03755988(lVar5,6,*(undefined8 *)
                                                                            (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_04f81680;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar5,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_04f81680;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar5,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_04f81680;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar5,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_04f81680;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar5,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_04f81680;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar5,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_04f81680;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar5,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_04f81680;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar5,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_04f81680;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar5,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_04f81680;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar5,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_04f81680;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar5,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_04f81680;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x13;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar5,0x13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_04f81680;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x15;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar5,0x15,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_04f81680;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar5,0x16,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_04f81680;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x17;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar5,0x17,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_04f81680;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x18;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar5,0x18,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 == 0) goto LAB_04f81680;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar5,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_04f81680;
                                                  }
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar5,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar8 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 == 0) goto LAB_04f81680;
                                                  }
                                                  puVar2 = System_Func<DropEventArgs>_TypeInfo;
                                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar8 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                  }
                                                  else {
                                                    FUN_03755988(lVar5,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  plVar6 = (long *)(*(long *)(*unaff_x23 + 0xb8) +
                                                                   0x20);
                                                  *plVar6 = lVar5;
                                                  thunk_FUN_02bb0e9c(plVar6,lVar5);
                                                  uVar4 = FUN_02b3c908(*unaff_x22,5);
                                                  FUN_04cac0f0(uVar4,*(undefined8 *)puVar2,0);
                                                  puVar7 = (undefined8 *)
                                                           (*(long *)(*unaff_x23 + 0xb8) + 0x28);
                                                  *puVar7 = uVar4;
                                                  thunk_FUN_02bb0e9c(puVar7,uVar4);
                                                  return;
                                                  }
                                                  }
LAB_04f81680:
                    /* WARNING: Subroutine does not return */
                                                  FUN_02b3cac4();
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
  FUN_02b3cacc();
}


