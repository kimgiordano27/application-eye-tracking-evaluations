/*
FUNCTION_NAME: OVRPlugin.OVRP_1_85_0$$ovrp_OnEditorShutdown
ENTRY_POINT: 036a605c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_85_0__ovrp_OnEditorShutdown(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *puVar11;
  uint *puVar12;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar13;
  undefined8 *unaff_x23;
  int *piVar14;
  
  puVar13 = *(undefined8 **)(unaff_x22 + 0xa00);
  puVar11 = *(undefined8 **)(unaff_x20 + 0x388);
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_MouseDownEvent_<>c_<_cctor>b__0_0__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanHandler_<>c_<_ctor>b__0_38__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_11__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_4__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_34__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_22__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_10__);
    thunk_FUN_01efb3a4(Method_Mono_Security_PKCS7_ContentInfo__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfInt16_Run__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_5__);
    thunk_FUN_01efb3a4(Method_Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_Decode__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_6__);
    thunk_FUN_01efb3a4(
                      Method_System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt64_Run__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_<>c__DisplayClass71_0_<UpdateSortColumnDescriptionsOnClick>b__0__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_0__);
    *(undefined1 *)(unaff_x21 + 0xfb2) = 1;
  }
  lVar6 = thunk_FUN_01f117cc(*unaff_x23);
  FUN_030f2380(lVar6,*unaff_x19);
  uVar7 = FUN_01f08890(*puVar13,4);
  FUN_034a9d80(uVar7,*puVar11,0);
  puVar2 = Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__;
  if (lVar6 != 0) {
    lVar9 = *(long *)(lVar6 + 0x10);
    lVar10 = *(long *)Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_3__;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    puVar3 = 
    Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_<>c__DisplayClass71_0_<UpdateSortColumnDescriptionsOnClick>b__0__
    ;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        puVar11 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
        *puVar11 = uVar7;
        thunk_FUN_01f51358(puVar11,uVar7);
      }
      else {
        FUN_030f2bb4(lVar6,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar7 = FUN_01f08890(*puVar13,3);
      FUN_034a9d80(uVar7,*(undefined8 *)puVar3,0);
      lVar9 = *(long *)(lVar6 + 0x10);
      lVar10 = *(long *)puVar2;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      puVar3 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_0__;
      if (lVar9 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          puVar11 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
          *puVar11 = uVar7;
          thunk_FUN_01f51358(puVar11,uVar7);
        }
        else {
          FUN_030f2bb4(lVar6,uVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        uVar7 = FUN_01f08890(*puVar13,3);
        FUN_034a9d80(uVar7,*(undefined8 *)puVar3,0);
        lVar9 = *(long *)(lVar6 + 0x10);
        lVar10 = *(long *)puVar2;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        puVar3 = Method_System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfInt16_Run__;
        if (lVar9 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            puVar11 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
            *puVar11 = uVar7;
            thunk_FUN_01f51358(puVar11,uVar7);
          }
          else {
            FUN_030f2bb4(lVar6,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          uVar7 = FUN_01f08890(*puVar13,3);
          FUN_034a9d80(uVar7,*(undefined8 *)puVar3,0);
          lVar9 = *(long *)(lVar6 + 0x10);
          lVar10 = *(long *)puVar2;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          puVar3 = Method_Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_Decode__;
          if (lVar9 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              puVar11 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
              *puVar11 = uVar7;
              thunk_FUN_01f51358(puVar11,uVar7);
            }
            else {
              FUN_030f2bb4(lVar6,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            uVar7 = FUN_01f08890(*puVar13,4);
            FUN_034a9d80(uVar7,*(undefined8 *)puVar3,0);
            lVar9 = *(long *)(lVar6 + 0x10);
            lVar10 = *(long *)puVar2;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            puVar5 = Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_6__;
            puVar4 = Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_5__;
            puVar3 = Method_UnityEngine_UIElements_MouseDownEvent_<>c_<_cctor>b__0_0__;
            puVar2 = Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_11__;
            if (lVar9 != 0) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                puVar11 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                *puVar11 = uVar7;
                thunk_FUN_01f51358(puVar11,uVar7);
              }
              else {
                FUN_030f2bb4(lVar6,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              **(long **)(*(long *)puVar2 + 0xb8) = lVar6;
              thunk_FUN_01f51358(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar6);
              uVar7 = FUN_01f08890(*puVar13,0x18);
              FUN_034a9d80(uVar7,*(undefined8 *)puVar4,0);
              puVar11 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
              *puVar11 = uVar7;
              thunk_FUN_01f51358(puVar11,uVar7);
              lVar6 = FUN_01f08890(*(undefined8 *)puVar3,0x18);
              uVar7 = FUN_01f08890(*puVar13,5);
              FUN_034a9d80(uVar7,*(undefined8 *)puVar5,0);
              if (lVar6 != 0) {
                if (*(int *)(lVar6 + 0x18) != 0) {
                  *(undefined8 *)(lVar6 + 0x20) = uVar7;
                  thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x20),uVar7);
                  uVar7 = FUN_01f08890(*puVar13,0);
                  if (1 < *(uint *)(lVar6 + 0x18)) {
                    *(undefined8 *)(lVar6 + 0x28) = uVar7;
                    thunk_FUN_01f51358();
                    lVar9 = FUN_01f08890(*puVar13,1);
                    if (lVar9 == 0) goto LAB_036a70d4;
                    if (*(int *)(lVar9 + 0x18) != 0) {
                      *(undefined4 *)(lVar9 + 0x20) = 3;
                      if (2 < *(uint *)(lVar6 + 0x18)) {
                        *(long *)(lVar6 + 0x30) = lVar9;
                        thunk_FUN_01f51358();
                        lVar9 = FUN_01f08890(*puVar13,1);
                        if (lVar9 == 0) goto LAB_036a70d4;
                        if (*(int *)(lVar9 + 0x18) != 0) {
                          *(undefined4 *)(lVar9 + 0x20) = 4;
                          if (3 < *(uint *)(lVar6 + 0x18)) {
                            *(long *)(lVar6 + 0x38) = lVar9;
                            thunk_FUN_01f51358();
                            lVar9 = FUN_01f08890(*puVar13,1);
                            if (lVar9 == 0) goto LAB_036a70d4;
                            if (*(int *)(lVar9 + 0x18) != 0) {
                              *(undefined4 *)(lVar9 + 0x20) = 5;
                              if (4 < *(uint *)(lVar6 + 0x18)) {
                                *(long *)(lVar6 + 0x40) = lVar9;
                                thunk_FUN_01f51358();
                                lVar9 = FUN_01f08890(*puVar13,1);
                                if (lVar9 == 0) goto LAB_036a70d4;
                                if (*(int *)(lVar9 + 0x18) != 0) {
                                  *(undefined4 *)(lVar9 + 0x20) = 0x13;
                                  if (5 < *(uint *)(lVar6 + 0x18)) {
                                    *(long *)(lVar6 + 0x48) = lVar9;
                                    thunk_FUN_01f51358();
                                    lVar9 = FUN_01f08890(*puVar13,1);
                                    if (lVar9 == 0) goto LAB_036a70d4;
                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                      *(undefined4 *)(lVar9 + 0x20) = 7;
                                      if (6 < *(uint *)(lVar6 + 0x18)) {
                                        *(long *)(lVar6 + 0x50) = lVar9;
                                        thunk_FUN_01f51358();
                                        lVar9 = FUN_01f08890(*puVar13,1);
                                        if (lVar9 == 0) goto LAB_036a70d4;
                                        if (*(int *)(lVar9 + 0x18) != 0) {
                                          *(undefined4 *)(lVar9 + 0x20) = 8;
                                          if (7 < *(uint *)(lVar6 + 0x18)) {
                                            *(long *)(lVar6 + 0x58) = lVar9;
                                            thunk_FUN_01f51358();
                                            lVar9 = FUN_01f08890(*puVar13,1);
                                            if (lVar9 == 0) goto LAB_036a70d4;
                                            if (*(int *)(lVar9 + 0x18) != 0) {
                                              *(undefined4 *)(lVar9 + 0x20) = 0x14;
                                              if (8 < *(uint *)(lVar6 + 0x18)) {
                                                *(long *)(lVar6 + 0x60) = lVar9;
                                                thunk_FUN_01f51358();
                                                lVar9 = FUN_01f08890(*puVar13,1);
                                                if (lVar9 == 0) goto LAB_036a70d4;
                                                if (*(int *)(lVar9 + 0x18) != 0) {
                                                  *(undefined4 *)(lVar9 + 0x20) = 10;
                                                  if (9 < *(uint *)(lVar6 + 0x18)) {
                                                    *(long *)(lVar6 + 0x68) = lVar9;
                                                    thunk_FUN_01f51358();
                                                    lVar9 = FUN_01f08890(*puVar13,1);
                                                    if (lVar9 == 0) goto LAB_036a70d4;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar9 + 0x20) = 0xb;
                                                      if (10 < *(uint *)(lVar6 + 0x18)) {
                                                        *(long *)(lVar6 + 0x70) = lVar9;
                                                        thunk_FUN_01f51358();
                                                        lVar9 = FUN_01f08890(*puVar13,1);
                                                        if (lVar9 == 0) goto LAB_036a70d4;
                                                        if (*(int *)(lVar9 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar9 + 0x20) = 0x15;
                                                          if (0xb < *(uint *)(lVar6 + 0x18)) {
                                                            *(long *)(lVar6 + 0x78) = lVar9;
                                                            thunk_FUN_01f51358();
                                                            lVar9 = FUN_01f08890(*puVar13,1);
                                                            if (lVar9 == 0) goto LAB_036a70d4;
                                                            if (*(int *)(lVar9 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar9 + 0x20) = 0xd;
                                                              if (0xc < *(uint *)(lVar6 + 0x18)) {
                                                                *(long *)(lVar6 + 0x80) = lVar9;
                                                                thunk_FUN_01f51358();
                                                                lVar9 = FUN_01f08890(*puVar13,1);
                                                                if (lVar9 == 0) goto LAB_036a70d4;
                                                                if (*(int *)(lVar9 + 0x18) != 0) {
                                                                  *(undefined4 *)(lVar9 + 0x20) =
                                                                       0xe;
                                                                  if (0xd < *(uint *)(lVar6 + 0x18))
                                                                  {
                                                                    *(long *)(lVar6 + 0x88) = lVar9;
                                                                    thunk_FUN_01f51358();
                                                                    lVar9 = FUN_01f08890(*puVar13,1)
                                                                    ;
                                                                    if (lVar9 == 0)
                                                                    goto LAB_036a70d4;
                                                                    if (*(int *)(lVar9 + 0x18) != 0)
                                                                    {
                                                                      *(undefined4 *)(lVar9 + 0x20)
                                                                           = 0x16;
                                                                      if (0xe < *(uint *)(lVar6 + 
                                                  0x18)) {
                                                    *(long *)(lVar6 + 0x90) = lVar9;
                                                    thunk_FUN_01f51358();
                                                    lVar9 = FUN_01f08890(*puVar13,1);
                                                    if (lVar9 == 0) goto LAB_036a70d4;
                                                    if (*(int *)(lVar9 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar9 + 0x20) = 0x10;
                                                      if (0xf < *(uint *)(lVar6 + 0x18)) {
                                                        *(long *)(lVar6 + 0x98) = lVar9;
                                                        thunk_FUN_01f51358();
                                                        lVar9 = FUN_01f08890(*puVar13,1);
                                                        if (lVar9 == 0) goto LAB_036a70d4;
                                                        if (*(int *)(lVar9 + 0x18) != 0) {
                                                          *(undefined4 *)(lVar9 + 0x20) = 0x11;
                                                          if (0x10 < *(uint *)(lVar6 + 0x18)) {
                                                            *(long *)(lVar6 + 0xa0) = lVar9;
                                                            thunk_FUN_01f51358();
                                                            lVar9 = FUN_01f08890(*puVar13,1);
                                                            if (lVar9 == 0) goto LAB_036a70d4;
                                                            if (*(int *)(lVar9 + 0x18) != 0) {
                                                              *(undefined4 *)(lVar9 + 0x20) = 0x12;
                                                              if (0x11 < *(uint *)(lVar6 + 0x18)) {
                                                                *(long *)(lVar6 + 0xa8) = lVar9;
                                                                thunk_FUN_01f51358();
                                                                lVar9 = FUN_01f08890(*puVar13,1);
                                                                if (lVar9 == 0) goto LAB_036a70d4;
                                                                if (*(int *)(lVar9 + 0x18) != 0) {
                                                                  *(undefined4 *)(lVar9 + 0x20) =
                                                                       0x17;
                                                                  if (0x12 < *(uint *)(lVar6 + 0x18)
                                                                     ) {
                                                                    *(long *)(lVar6 + 0xb0) = lVar9;
                                                                    thunk_FUN_01f51358((long *)(
                                                  lVar6 + 0xb0));
                                                  uVar7 = FUN_01f08890(*puVar13,0);
                                                  if (0x13 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0xb8) = uVar7;
                                                    thunk_FUN_01f51358((undefined8 *)(lVar6 + 0xb8),
                                                                       uVar7);
                                                    uVar7 = FUN_01f08890(*puVar13,0);
                                                    if (0x14 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined8 *)(lVar6 + 0xc0) = uVar7;
                                                      thunk_FUN_01f51358((undefined8 *)
                                                                         (lVar6 + 0xc0),uVar7);
                                                      uVar7 = FUN_01f08890(*puVar13,0);
                                                      if (0x15 < *(uint *)(lVar6 + 0x18)) {
                                                        *(undefined8 *)(lVar6 + 200) = uVar7;
                                                        thunk_FUN_01f51358((undefined8 *)
                                                                           (lVar6 + 200),uVar7);
                                                        uVar7 = FUN_01f08890(*puVar13,0);
                                                        if (0x16 < *(uint *)(lVar6 + 0x18)) {
                                                          *(undefined8 *)(lVar6 + 0xd0) = uVar7;
                                                          thunk_FUN_01f51358((undefined8 *)
                                                                             (lVar6 + 0xd0),uVar7);
                                                          uVar7 = FUN_01f08890(*puVar13,0);
                                                          puVar4 = 
                                                  Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_34__
                                                  ;
                                                  puVar3 = 
                                                  Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_22__
                                                  ;
                                                  if (0x17 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0xd8) = uVar7;
                                                    thunk_FUN_01f51358();
                                                    plVar8 = (long *)(*(long *)(*(long *)puVar2 +
                                                                               0xb8) + 0x10);
                                                    *plVar8 = lVar6;
                                                    thunk_FUN_01f51358(plVar8,lVar6);
                                                    lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_030bc828(lVar6,*(undefined8 *)puVar4);
                                                    puVar3 = 
                                                  Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_4__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)
                                                  Method_Unity_VisualScripting_PlusHandler_<>c_<_ctor>b__0_4__
                                                  ;
                                                  piVar14 = (int *)(lVar6 + 0x1c);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar10 = *(long *)(lVar6 + 0x10);
                                                  puVar12 = (uint *)(lVar6 + 0x18);
                                                  uVar1 = *puVar12;
                                                  if (lVar10 != 0) {
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *puVar12 = uVar1 + 1;
                                                      *(undefined4 *)
                                                       (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                      *piVar14 = *piVar14 + 1;
                                                    }
                                                    else {
                                                      FUN_030bd07c(lVar6,6,*(undefined8 *)
                                                                            (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar6,7,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar6,8,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar6,9,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar6,10,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar9 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar6,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar6,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar6,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar6,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar6,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar6,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar6,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar6,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar6,2,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar6,3,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_036a70d4;
                                                  }
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *piVar14 = *piVar14 + 1;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar6,4,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar6 + 0x10);
                                                  lVar9 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_036a70d4;
                                                  }
                                                  puVar3 = 
                                                  Method_System_Linq_Expressions_Interpreter_MulOvfInstruction_MulOvfUInt64_Run__
                                                  ;
                                                  uVar1 = *puVar12;
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *puVar12 = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_030bd07c(lVar6,5,*(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8
                                                                             ) + 0x18);
                                                  *plVar8 = lVar6;
                                                  thunk_FUN_01f51358(plVar8,lVar6);
                                                  uVar7 = FUN_01f08890(*puVar13,5);
                                                  FUN_034a9d80(uVar7,*(undefined8 *)puVar3,0);
                                                  puVar11 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar2 + 0xb8) +
                                                            0x20);
                                                  *puVar11 = uVar7;
                                                  thunk_FUN_01f51358(puVar11,uVar7);
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
        }
      }
    }
  }
LAB_036a70d4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


