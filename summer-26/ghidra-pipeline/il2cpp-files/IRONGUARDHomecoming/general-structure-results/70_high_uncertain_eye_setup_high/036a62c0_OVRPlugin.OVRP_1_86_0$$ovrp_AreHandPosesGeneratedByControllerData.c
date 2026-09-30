/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_AreHandPosesGeneratedByControllerData
ENTRY_POINT: 036a62c0
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


void OVRPlugin_OVRP_1_86_0__ovrp_AreHandPosesGeneratedByControllerData(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  uint *puVar12;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  int *piVar13;
  
  uVar6 = FUN_01f08890(*unaff_x22,3);
  FUN_034a9d80(uVar6,*unaff_x23,0);
  lVar10 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  puVar2 = Method_Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_Decode__;
  if (lVar10 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      puVar7 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
      *puVar7 = uVar6;
      thunk_FUN_01f51358(puVar7,uVar6);
    }
    else {
      FUN_030f2bb4();
    }
    uVar6 = FUN_01f08890(*unaff_x22,4);
    FUN_034a9d80(uVar6,*(undefined8 *)puVar2,0);
    lVar10 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    puVar5 = Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_6__;
    puVar4 = Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_5__;
    puVar3 = Method_UnityEngine_UIElements_MouseDownEvent_<>c_<_cctor>b__0_0__;
    puVar2 = Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_11__;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        puVar7 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        *puVar7 = uVar6;
        thunk_FUN_01f51358(puVar7,uVar6);
      }
      else {
        FUN_030f2bb4();
      }
      **(long **)(*(long *)puVar2 + 0xb8) = unaff_x19;
      thunk_FUN_01f51358(*(undefined8 *)(*(long *)puVar2 + 0xb8));
      uVar6 = FUN_01f08890(*unaff_x22,0x18);
      FUN_034a9d80(uVar6,*(undefined8 *)puVar4,0);
      puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *puVar7 = uVar6;
      thunk_FUN_01f51358(puVar7,uVar6);
      lVar10 = FUN_01f08890(*(undefined8 *)puVar3,0x18);
      uVar6 = FUN_01f08890(*unaff_x22,5);
      FUN_034a9d80(uVar6,*(undefined8 *)puVar5,0);
      if (lVar10 != 0) {
        if (*(int *)(lVar10 + 0x18) != 0) {
          *(undefined8 *)(lVar10 + 0x20) = uVar6;
          thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x20),uVar6);
          uVar6 = FUN_01f08890(*unaff_x22,0);
          if (1 < *(uint *)(lVar10 + 0x18)) {
            *(undefined8 *)(lVar10 + 0x28) = uVar6;
            thunk_FUN_01f51358();
            lVar8 = FUN_01f08890(*unaff_x22,1);
            if (lVar8 == 0) goto LAB_036a70d4;
            if (*(int *)(lVar8 + 0x18) != 0) {
              *(undefined4 *)(lVar8 + 0x20) = 3;
              if (2 < *(uint *)(lVar10 + 0x18)) {
                *(long *)(lVar10 + 0x30) = lVar8;
                thunk_FUN_01f51358();
                lVar8 = FUN_01f08890(*unaff_x22,1);
                if (lVar8 == 0) goto LAB_036a70d4;
                if (*(int *)(lVar8 + 0x18) != 0) {
                  *(undefined4 *)(lVar8 + 0x20) = 4;
                  if (3 < *(uint *)(lVar10 + 0x18)) {
                    *(long *)(lVar10 + 0x38) = lVar8;
                    thunk_FUN_01f51358();
                    lVar8 = FUN_01f08890(*unaff_x22,1);
                    if (lVar8 == 0) goto LAB_036a70d4;
                    if (*(int *)(lVar8 + 0x18) != 0) {
                      *(undefined4 *)(lVar8 + 0x20) = 5;
                      if (4 < *(uint *)(lVar10 + 0x18)) {
                        *(long *)(lVar10 + 0x40) = lVar8;
                        thunk_FUN_01f51358();
                        lVar8 = FUN_01f08890(*unaff_x22,1);
                        if (lVar8 == 0) goto LAB_036a70d4;
                        if (*(int *)(lVar8 + 0x18) != 0) {
                          *(undefined4 *)(lVar8 + 0x20) = 0x13;
                          if (5 < *(uint *)(lVar10 + 0x18)) {
                            *(long *)(lVar10 + 0x48) = lVar8;
                            thunk_FUN_01f51358();
                            lVar8 = FUN_01f08890(*unaff_x22,1);
                            if (lVar8 == 0) goto LAB_036a70d4;
                            if (*(int *)(lVar8 + 0x18) != 0) {
                              *(undefined4 *)(lVar8 + 0x20) = 7;
                              if (6 < *(uint *)(lVar10 + 0x18)) {
                                *(long *)(lVar10 + 0x50) = lVar8;
                                thunk_FUN_01f51358();
                                lVar8 = FUN_01f08890(*unaff_x22,1);
                                if (lVar8 == 0) goto LAB_036a70d4;
                                if (*(int *)(lVar8 + 0x18) != 0) {
                                  *(undefined4 *)(lVar8 + 0x20) = 8;
                                  if (7 < *(uint *)(lVar10 + 0x18)) {
                                    *(long *)(lVar10 + 0x58) = lVar8;
                                    thunk_FUN_01f51358();
                                    lVar8 = FUN_01f08890(*unaff_x22,1);
                                    if (lVar8 == 0) goto LAB_036a70d4;
                                    if (*(int *)(lVar8 + 0x18) != 0) {
                                      *(undefined4 *)(lVar8 + 0x20) = 0x14;
                                      if (8 < *(uint *)(lVar10 + 0x18)) {
                                        *(long *)(lVar10 + 0x60) = lVar8;
                                        thunk_FUN_01f51358();
                                        lVar8 = FUN_01f08890(*unaff_x22,1);
                                        if (lVar8 == 0) goto LAB_036a70d4;
                                        if (*(int *)(lVar8 + 0x18) != 0) {
                                          *(undefined4 *)(lVar8 + 0x20) = 10;
                                          if (9 < *(uint *)(lVar10 + 0x18)) {
                                            *(long *)(lVar10 + 0x68) = lVar8;
                                            thunk_FUN_01f51358();
                                            lVar8 = FUN_01f08890(*unaff_x22,1);
                                            if (lVar8 == 0) goto LAB_036a70d4;
                                            if (*(int *)(lVar8 + 0x18) != 0) {
                                              *(undefined4 *)(lVar8 + 0x20) = 0xb;
                                              if (10 < *(uint *)(lVar10 + 0x18)) {
                                                *(long *)(lVar10 + 0x70) = lVar8;
                                                thunk_FUN_01f51358();
                                                lVar8 = FUN_01f08890(*unaff_x22,1);
                                                if (lVar8 == 0) goto LAB_036a70d4;
                                                if (*(int *)(lVar8 + 0x18) != 0) {
                                                  *(undefined4 *)(lVar8 + 0x20) = 0x15;
                                                  if (0xb < *(uint *)(lVar10 + 0x18)) {
                                                    *(long *)(lVar10 + 0x78) = lVar8;
                                                    thunk_FUN_01f51358();
                                                    lVar8 = FUN_01f08890(*unaff_x22,1);
                                                    if (lVar8 == 0) goto LAB_036a70d4;
                                                    if (*(int *)(lVar8 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar8 + 0x20) = 0xd;
                                                      if (0xc < *(uint *)(lVar10 + 0x18)) {
                                                        *(long *)(lVar10 + 0x80) = lVar8;
                                                        thunk_FUN_01f51358();
                                                        lVar8 = FUN_01f08890(*unaff_x22,1);
                                                        if (lVar8 == 0) goto LAB_036a70d4;
                                                        if (*(int *)(lVar8 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar8 + 0x20) = 0xe;
                                                          if (0xd < *(uint *)(lVar10 + 0x18)) {
                                                            *(long *)(lVar10 + 0x88) = lVar8;
                                                            thunk_FUN_01f51358();
                                                            lVar8 = FUN_01f08890(*unaff_x22,1);
                                                            if (lVar8 == 0) goto LAB_036a70d4;
                                                            if (*(int *)(lVar8 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar8 + 0x20) = 0x16;
                                                              if (0xe < *(uint *)(lVar10 + 0x18)) {
                                                                *(long *)(lVar10 + 0x90) = lVar8;
                                                                thunk_FUN_01f51358();
                                                                lVar8 = FUN_01f08890(*unaff_x22,1);
                                                                if (lVar8 == 0) goto LAB_036a70d4;
                                                                if (*(int *)(lVar8 + 0x18) != 0) {
                                                                  *(undefined4 *)(lVar8 + 0x20) =
                                                                       0x10;
                                                                  if (0xf < *(uint *)(lVar10 + 0x18)
                                                                     ) {
                                                                    *(long *)(lVar10 + 0x98) = lVar8
                                                                    ;
                                                                    thunk_FUN_01f51358();
                                                                    lVar8 = FUN_01f08890(*unaff_x22,
                                                                                         1);
                                                                    if (lVar8 == 0)
                                                                    goto LAB_036a70d4;
                                                                    if (*(int *)(lVar8 + 0x18) != 0)
                                                                    {
                                                                      *(undefined4 *)(lVar8 + 0x20)
                                                                           = 0x11;
                                                                      if (0x10 < *(uint *)(lVar10 + 
                                                  0x18)) {
                                                    *(long *)(lVar10 + 0xa0) = lVar8;
                                                    thunk_FUN_01f51358();
                                                    lVar8 = FUN_01f08890(*unaff_x22,1);
                                                    if (lVar8 == 0) goto LAB_036a70d4;
                                                    if (*(int *)(lVar8 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar8 + 0x20) = 0x12;
                                                      if (0x11 < *(uint *)(lVar10 + 0x18)) {
                                                        *(long *)(lVar10 + 0xa8) = lVar8;
                                                        thunk_FUN_01f51358();
                                                        lVar8 = FUN_01f08890(*unaff_x22,1);
                                                        if (lVar8 == 0) goto LAB_036a70d4;
                                                        if (*(int *)(lVar8 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar8 + 0x20) = 0x17;
                                                          if (0x12 < *(uint *)(lVar10 + 0x18)) {
                                                            *(long *)(lVar10 + 0xb0) = lVar8;
                                                            thunk_FUN_01f51358((long *)(lVar10 + 
                                                  0xb0));
                                                  uVar6 = FUN_01f08890(*unaff_x22,0);
                                                  if (0x13 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0xb8) = uVar6;
                                                    thunk_FUN_01f51358((undefined8 *)(lVar10 + 0xb8)
                                                                       ,uVar6);
                                                    uVar6 = FUN_01f08890(*unaff_x22,0);
                                                    if (0x14 < *(uint *)(lVar10 + 0x18)) {
                                                      *(undefined8 *)(lVar10 + 0xc0) = uVar6;
                                                      thunk_FUN_01f51358((undefined8 *)
                                                                         (lVar10 + 0xc0),uVar6);
                                                      uVar6 = FUN_01f08890(*unaff_x22,0);
                                                      if (0x15 < *(uint *)(lVar10 + 0x18)) {
                                                        *(undefined8 *)(lVar10 + 200) = uVar6;
                                                        thunk_FUN_01f51358((undefined8 *)
                                                                           (lVar10 + 200),uVar6);
                                                        uVar6 = FUN_01f08890(*unaff_x22,0);
                                                        if (0x16 < *(uint *)(lVar10 + 0x18)) {
                                                          *(undefined8 *)(lVar10 + 0xd0) = uVar6;
                                                          thunk_FUN_01f51358((undefined8 *)
                                                                             (lVar10 + 0xd0),uVar6);
                                                          uVar6 = FUN_01f08890(*unaff_x22,0);
                                                          puVar4 = 
                                                  Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_34__
                                                  ;
                                                  puVar3 = 
                                                  Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_22__
                                                  ;
                                                  if (0x17 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0xd8) = uVar6;
                                                    thunk_FUN_01f51358();
                                                    plVar9 = (long *)(*(long *)(*(long *)puVar2 +
                                                                               0xb8) + 0x10);
                                                    *plVar9 = lVar10;
                                                    thunk_FUN_01f51358(plVar9,lVar10);
                                                    lVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_030bc828(lVar10,*(undefined8 *)puVar4);
                                                    puVar3 = 
                                                  Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_4__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    lVar8 = *(long *)
                                                  Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_4__
                                                  ;
                                                  piVar13 = (int *)(lVar10 + 0x1c);
                                                  *piVar13 = *piVar13 + 1;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  puVar12 = (uint *)(lVar10 + 0x18);
                                                  uVar1 = *puVar12;
                                                  if (lVar11 != 0) {
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *puVar12 = uVar1 + 1;
                                                      *(undefined4 *)
                                                       (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                      *piVar13 = *piVar13 + 1;
                                                    }
                                                    else {
                                                      FUN_030bd07c(lVar10,6,*(undefined8 *)
                                                                             (*(long *)(*(long *)(
                                                  lVar8 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  lVar8 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar10,7,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar8 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  lVar8 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar10,8,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar8 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  lVar8 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar10,9,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar8 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  lVar8 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar10,10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    lVar8 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar10,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    lVar8 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar10,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    lVar8 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar10,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    lVar8 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar10,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    lVar8 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar10,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    lVar8 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar10,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    lVar8 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar10,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    lVar8 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar10,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    lVar8 = *(long *)puVar3;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar11 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar10,2,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar8 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  lVar8 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar10,3,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar8 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  lVar8 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *piVar13 = *piVar13 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar10,4,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar8 + 0x20) + 0xc0) + 0x70));
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  lVar8 = *(long *)puVar3;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 == 0) goto LAB_036a70d4;
                                                  }
                                                  puVar3 = 
                                                  Method_System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt64_Run__
                                                  ;
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar11 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar10,5,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar8 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8
                                                                             ) + 0x18);
                                                  *plVar9 = lVar10;
                                                  thunk_FUN_01f51358(plVar9,lVar10);
                                                  uVar6 = FUN_01f08890(*unaff_x22,5);
                                                  FUN_034a9d80(uVar6,*(undefined8 *)puVar3,0);
                                                  puVar7 = (undefined8 *)
                                                           (*(long *)(*(long *)puVar2 + 0xb8) + 0x20
                                                           );
                                                  *puVar7 = uVar6;
                                                  thunk_FUN_01f51358(puVar7,uVar6);
                                                  return;
                                                  }
                                                  }
                                                  goto LAB_036a70d4;
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
    }
  }
LAB_036a70d4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


