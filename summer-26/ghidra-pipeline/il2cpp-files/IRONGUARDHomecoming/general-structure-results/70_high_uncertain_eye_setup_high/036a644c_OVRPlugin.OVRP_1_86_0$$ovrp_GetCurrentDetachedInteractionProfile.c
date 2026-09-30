/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_GetCurrentDetachedInteractionProfile
ENTRY_POINT: 036a644c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_86_0__ovrp_GetCurrentDetachedInteractionProfile(long param_1)

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
  uint *puVar10;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  int *piVar11;
  
  uVar4 = FUN_01f08890(*unaff_x22,5);
  FUN_034a9d80(uVar4,*unaff_x21,0);
  if (param_1 == 0) goto LAB_036a70d4;
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x20),uVar4);
    uVar4 = FUN_01f08890(*unaff_x22,0);
    if (1 < *(uint *)(param_1 + 0x18)) {
      *(undefined8 *)(param_1 + 0x28) = uVar4;
      thunk_FUN_01f51358();
      lVar5 = FUN_01f08890(*unaff_x22,1);
      if (lVar5 == 0) goto LAB_036a70d4;
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined4 *)(lVar5 + 0x20) = 3;
        if (2 < *(uint *)(param_1 + 0x18)) {
          *(long *)(param_1 + 0x30) = lVar5;
          thunk_FUN_01f51358();
          lVar5 = FUN_01f08890(*unaff_x22,1);
          if (lVar5 == 0) goto LAB_036a70d4;
          if (*(int *)(lVar5 + 0x18) != 0) {
            *(undefined4 *)(lVar5 + 0x20) = 4;
            if (3 < *(uint *)(param_1 + 0x18)) {
              *(long *)(param_1 + 0x38) = lVar5;
              thunk_FUN_01f51358();
              lVar5 = FUN_01f08890(*unaff_x22,1);
              if (lVar5 == 0) goto LAB_036a70d4;
              if (*(int *)(lVar5 + 0x18) != 0) {
                *(undefined4 *)(lVar5 + 0x20) = 5;
                if (4 < *(uint *)(param_1 + 0x18)) {
                  *(long *)(param_1 + 0x40) = lVar5;
                  thunk_FUN_01f51358();
                  lVar5 = FUN_01f08890(*unaff_x22,1);
                  if (lVar5 == 0) goto LAB_036a70d4;
                  if (*(int *)(lVar5 + 0x18) != 0) {
                    *(undefined4 *)(lVar5 + 0x20) = 0x13;
                    if (5 < *(uint *)(param_1 + 0x18)) {
                      *(long *)(param_1 + 0x48) = lVar5;
                      thunk_FUN_01f51358();
                      lVar5 = FUN_01f08890(*unaff_x22,1);
                      if (lVar5 == 0) goto LAB_036a70d4;
                      if (*(int *)(lVar5 + 0x18) != 0) {
                        *(undefined4 *)(lVar5 + 0x20) = 7;
                        if (6 < *(uint *)(param_1 + 0x18)) {
                          *(long *)(param_1 + 0x50) = lVar5;
                          thunk_FUN_01f51358();
                          lVar5 = FUN_01f08890(*unaff_x22,1);
                          if (lVar5 == 0) goto LAB_036a70d4;
                          if (*(int *)(lVar5 + 0x18) != 0) {
                            *(undefined4 *)(lVar5 + 0x20) = 8;
                            if (7 < *(uint *)(param_1 + 0x18)) {
                              *(long *)(param_1 + 0x58) = lVar5;
                              thunk_FUN_01f51358();
                              lVar5 = FUN_01f08890(*unaff_x22,1);
                              if (lVar5 == 0) goto LAB_036a70d4;
                              if (*(int *)(lVar5 + 0x18) != 0) {
                                *(undefined4 *)(lVar5 + 0x20) = 0x14;
                                if (8 < *(uint *)(param_1 + 0x18)) {
                                  *(long *)(param_1 + 0x60) = lVar5;
                                  thunk_FUN_01f51358();
                                  lVar5 = FUN_01f08890(*unaff_x22,1);
                                  if (lVar5 == 0) goto LAB_036a70d4;
                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                    *(undefined4 *)(lVar5 + 0x20) = 10;
                                    if (9 < *(uint *)(param_1 + 0x18)) {
                                      *(long *)(param_1 + 0x68) = lVar5;
                                      thunk_FUN_01f51358();
                                      lVar5 = FUN_01f08890(*unaff_x22,1);
                                      if (lVar5 == 0) goto LAB_036a70d4;
                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                        *(undefined4 *)(lVar5 + 0x20) = 0xb;
                                        if (10 < *(uint *)(param_1 + 0x18)) {
                                          *(long *)(param_1 + 0x70) = lVar5;
                                          thunk_FUN_01f51358();
                                          lVar5 = FUN_01f08890(*unaff_x22,1);
                                          if (lVar5 == 0) goto LAB_036a70d4;
                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                            *(undefined4 *)(lVar5 + 0x20) = 0x15;
                                            if (0xb < *(uint *)(param_1 + 0x18)) {
                                              *(long *)(param_1 + 0x78) = lVar5;
                                              thunk_FUN_01f51358();
                                              lVar5 = FUN_01f08890(*unaff_x22,1);
                                              if (lVar5 == 0) goto LAB_036a70d4;
                                              if (*(int *)(lVar5 + 0x18) != 0) {
                                                *(undefined4 *)(lVar5 + 0x20) = 0xd;
                                                if (0xc < *(uint *)(param_1 + 0x18)) {
                                                  *(long *)(param_1 + 0x80) = lVar5;
                                                  thunk_FUN_01f51358();
                                                  lVar5 = FUN_01f08890(*unaff_x22,1);
                                                  if (lVar5 == 0) goto LAB_036a70d4;
                                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar5 + 0x20) = 0xe;
                                                    if (0xd < *(uint *)(param_1 + 0x18)) {
                                                      *(long *)(param_1 + 0x88) = lVar5;
                                                      thunk_FUN_01f51358();
                                                      lVar5 = FUN_01f08890(*unaff_x22,1);
                                                      if (lVar5 == 0) goto LAB_036a70d4;
                                                      if (*(int *)(lVar5 + 0x18) != 0) {
                                                        *(undefined4 *)(lVar5 + 0x20) = 0x16;
                                                        if (0xe < *(uint *)(param_1 + 0x18)) {
                                                          *(long *)(param_1 + 0x90) = lVar5;
                                                          thunk_FUN_01f51358();
                                                          lVar5 = FUN_01f08890(*unaff_x22,1);
                                                          if (lVar5 == 0) goto LAB_036a70d4;
                                                          if (*(int *)(lVar5 + 0x18) != 0) {
                                                            *(undefined4 *)(lVar5 + 0x20) = 0x10;
                                                            if (0xf < *(uint *)(param_1 + 0x18)) {
                                                              *(long *)(param_1 + 0x98) = lVar5;
                                                              thunk_FUN_01f51358();
                                                              lVar5 = FUN_01f08890(*unaff_x22,1);
                                                              if (lVar5 == 0) goto LAB_036a70d4;
                                                              if (*(int *)(lVar5 + 0x18) != 0) {
                                                                *(undefined4 *)(lVar5 + 0x20) = 0x11
                                                                ;
                                                                if (0x10 < *(uint *)(param_1 + 0x18)
                                                                   ) {
                                                                  *(long *)(param_1 + 0xa0) = lVar5;
                                                                  thunk_FUN_01f51358();
                                                                  lVar5 = FUN_01f08890(*unaff_x22,1)
                                                                  ;
                                                                  if (lVar5 == 0) goto LAB_036a70d4;
                                                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                                                    *(undefined4 *)(lVar5 + 0x20) =
                                                                         0x12;
                                                                    if (0x11 < *(uint *)(param_1 +
                                                                                        0x18)) {
                                                                      *(long *)(param_1 + 0xa8) =
                                                                           lVar5;
                                                                      thunk_FUN_01f51358();
                                                                      lVar5 = FUN_01f08890(*
                                                  unaff_x22,1);
                                                  if (lVar5 == 0) goto LAB_036a70d4;
                                                  if (*(int *)(lVar5 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar5 + 0x20) = 0x17;
                                                    if (0x12 < *(uint *)(param_1 + 0x18)) {
                                                      *(long *)(param_1 + 0xb0) = lVar5;
                                                      thunk_FUN_01f51358((long *)(param_1 + 0xb0));
                                                      uVar4 = FUN_01f08890(*unaff_x22,0);
                                                      if (0x13 < *(uint *)(param_1 + 0x18)) {
                                                        *(undefined8 *)(param_1 + 0xb8) = uVar4;
                                                        thunk_FUN_01f51358((undefined8 *)
                                                                           (param_1 + 0xb8),uVar4);
                                                        uVar4 = FUN_01f08890(*unaff_x22,0);
                                                        if (0x14 < *(uint *)(param_1 + 0x18)) {
                                                          *(undefined8 *)(param_1 + 0xc0) = uVar4;
                                                          thunk_FUN_01f51358((undefined8 *)
                                                                             (param_1 + 0xc0),uVar4)
                                                          ;
                                                          uVar4 = FUN_01f08890(*unaff_x22,0);
                                                          if (0x15 < *(uint *)(param_1 + 0x18)) {
                                                            *(undefined8 *)(param_1 + 200) = uVar4;
                                                            thunk_FUN_01f51358((undefined8 *)
                                                                               (param_1 + 200),uVar4
                                                                              );
                                                            uVar4 = FUN_01f08890(*unaff_x22,0);
                                                            if (0x16 < *(uint *)(param_1 + 0x18)) {
                                                              *(undefined8 *)(param_1 + 0xd0) =
                                                                   uVar4;
                                                              thunk_FUN_01f51358((undefined8 *)
                                                                                 (param_1 + 0xd0),
                                                                                 uVar4);
                                                              uVar4 = FUN_01f08890(*unaff_x22,0);
                                                              puVar3 = 
                                                  Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_34__
                                                  ;
                                                  puVar2 = 
                                                  Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_22__
                                                  ;
                                                  if (0x17 < *(uint *)(param_1 + 0x18)) {
                                                    *(undefined8 *)(param_1 + 0xd8) = uVar4;
                                                    thunk_FUN_01f51358();
                                                    plVar6 = (long *)(*(long *)(*unaff_x23 + 0xb8) +
                                                                     0x10);
                                                    *plVar6 = param_1;
                                                    thunk_FUN_01f51358(plVar6,param_1);
                                                    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_030bc828(lVar5,*(undefined8 *)puVar3);
                                                    puVar2 = 
                                                  Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_4__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)
                                                  Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_4__
                                                  ;
                                                  piVar11 = (int *)(lVar5 + 0x1c);
                                                  *piVar11 = *piVar11 + 1;
                                                  lVar9 = *(long *)(lVar5 + 0x10);
                                                  puVar10 = (uint *)(lVar5 + 0x18);
                                                  uVar1 = *puVar10;
                                                  if (lVar9 != 0) {
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *puVar10 = uVar1 + 1;
                                                      *(undefined4 *)
                                                       (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                      *piVar11 = *piVar11 + 1;
                                                    }
                                                    else {
                                                      FUN_030bd07c(lVar5,6,*(undefined8 *)
                                                                            (*(long *)(*(long *)(
                                                  lVar8 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar5 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar5,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar5 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar5,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar5 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar5,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar5 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar5,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar8 + 0x20) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar5 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar5,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar5,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar5,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar5,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar5,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar5,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar5,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar5,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar8 = *(long *)puVar2;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar5,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar5 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar5,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar5 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *piVar11 = *piVar11 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar5,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar9 = *(long *)(lVar5 + 0x10);
                                                  lVar8 = *(long *)puVar2;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 == 0) goto LAB_036a70d4;
                                                  }
                                                  puVar2 = 
                                                  Method_System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt64_Run__
                                                  ;
                                                  uVar1 = *puVar10;
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *puVar10 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar9 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar5,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  plVar6 = (long *)(*(long *)(*unaff_x23 + 0xb8) +
                                                                   0x18);
                                                  *plVar6 = lVar5;
                                                  thunk_FUN_01f51358(plVar6,lVar5);
                                                  uVar4 = FUN_01f08890(*unaff_x22,5);
                                                  FUN_034a9d80(uVar4,*(undefined8 *)puVar2,0);
                                                  puVar7 = (undefined8 *)
                                                           (*(long *)(*unaff_x23 + 0xb8) + 0x20);
                                                  *puVar7 = uVar4;
                                                  thunk_FUN_01f51358(puVar7,uVar4);
                                                  return;
                                                  }
                                                  }
LAB_036a70d4:
                    /* WARNING: Subroutine does not return */
                                                  FUN_01f08a3c();
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
  FUN_01f08a44();
}


