/*
FUNCTION_NAME: System.Xml.Schema.DtdValidator$$ValidateElement
ENTRY_POINT: 037ec040
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_12;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;negative_framework_namespace_without_eye_use_flow
*/


void System_Xml_Schema_DtdValidator__ValidateElement(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  
  FUN_01c5d288();
  FUN_01c5d288(Method_Newtonsoft_Json_JsonWriter_set_StringEscapeHandling__);
  FUN_01c5d288(Method_Katana_FillEnergy__);
  FUN_01c5d288(Method_Mono_Security_Cryptography_KeyPairPersistence__ctor__);
  FUN_01c5d288(Method_Mono_Security_Cryptography_KeyPairPersistence_get_MachinePath__);
  FUN_01c5d288(Method_Mono_Security_Cryptography_KeyPairPersistence_get_UserPath__);
  FUN_01c5d288(Method_Newtonsoft_Json_Converters_KeyValuePairConverter_InitializeReflectionObject__)
  ;
  FUN_01c5d288(Method_Newtonsoft_Json_Converters_KeyValuePairConverter_ReadJson__);
  FUN_01c5d288(Method_UnityEngine_UIElements_KeyboardNavigationManipulator_OnKeyDown__);
  FUN_01c5d288(Method_UnityEngine_UIElements_KeyboardNavigationManipulator_OnNavigationCancel__);
  FUN_01c5d288(Method_UnityEngine_UIElements_KeyboardNavigationManipulator_OnNavigationMove__);
  FUN_01c5d288(Method_UnityEngine_UIElements_KeyboardNavigationManipulator_OnNavigationSubmit__);
  FUN_01c5d288(
              Method_UnityEngine_UIElements_KeyboardTextEditorEventHandler_OnNavigationEvent<NavigationCancelEvent>__
              );
  FUN_01c5d288(
              Method_UnityEngine_UIElements_KeyboardTextEditorEventHandler_OnNavigationEvent<NavigationMoveEvent>__
              );
  FUN_01c5d288(
              Method_UnityEngine_UIElements_KeyboardTextEditorEventHandler_OnNavigationEvent<NavigationSubmitEvent>__
              );
  FUN_01c5d288(Method_System_Security_Cryptography_KeyedHashAlgorithm_set_Key__);
  FUN_01c5d288(Method_KillFeed_DisplayLeaveText__);
  FUN_01c5d288(Method_System_Linq_Expressions_Interpreter_LabelInfo_CommonNode<LabelScopeInfo>__);
  FUN_01c5d288(Method_System_Linq_Expressions_Interpreter_LabelInfo_Define__);
  FUN_01c5d288(Method_System_Linq_Expressions_Interpreter_LabelInfo_FirstDefinition__);
  FUN_01c5d288(Method_System_Linq_Expressions_Interpreter_LabelInfo_ValidateFinish__);
  FUN_01c5d288(Method_System_Linq_Expressions_Interpreter_LabelInfo_ValidateJump__);
  FUN_01c5d288(Method_System_Linq_Expressions_LambdaExpression_GetParameter__);
  FUN_01c5d288(Method_System_Linq_Expressions_LambdaExpression_get_ParameterCount__);
  FUN_01c5d288(Method_I2_Loc_LanguageSourceData_ApplyDownloadedDataOnSceneLoaded__);
  FUN_01c5d288(Method_LaserPointer_OnInputFocusAcquired__);
  FUN_01c5d288(Method_LaserPointer_OnInputFocusLost__);
  FUN_01c5d288(Method_System_Text_Latin1Encoding_GetMaxByteCount__);
  FUN_01c5d288(Method_System_Configuration_IgnoreSection_get_Properties__);
  FUN_01c5d288(Method_System_Text_Latin1Encoding_GetMaxCharCount__);
  FUN_01c5d288(Method_UnityEngine_LayerMask_GetMask__);
  FUN_01c5d288(Method_UnityEngine_JsonUtility_FromJson<DiagnosticEvent>__);
  FUN_01c5d288(Method_UnityEngine_UI_LayoutGroup_SetProperty<bool>__);
  *(undefined1 *)(unaff_x19 + 0xfb2) = 1;
  lVar10 = FUN_01c5d2fc(*unaff_x20,1);
  puVar1 = Method_System_Configuration_IgnoreSection_get_Properties__;
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0x18) != 0) {
      *(undefined4 *)(lVar10 + 0x20) = 1;
      **(long **)(*(long *)puVar1 + 0xb8) = lVar10;
      lVar10 = FUN_01c5d2fc(*unaff_x20,2);
      if (lVar10 == 0) goto LAB_037ed5ac;
      if ((*(int *)(lVar10 + 0x18) != 0) &&
         (*(undefined4 *)(lVar10 + 0x20) = 2, *(int *)(lVar10 + 0x18) != 1)) {
        *(undefined4 *)(lVar10 + 0x24) = 3;
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar10;
        puVar2 = Method_UnityEngine_JsonUtility_FromJson<ReferralInfo>__;
        uVar11 = FUN_01c5d2fc(*unaff_x20,5);
        FUN_032032f0(uVar11,*(undefined8 *)puVar2,0);
        *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = uVar11;
        lVar10 = FUN_01c5d2fc(*unaff_x20,1);
        if (lVar10 == 0) goto LAB_037ed5ac;
        if (*(int *)(lVar10 + 0x18) != 0) {
          *(undefined4 *)(lVar10 + 0x20) = 8;
          *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = lVar10;
          lVar10 = FUN_01c5d2fc(*unaff_x20,2);
          if (lVar10 == 0) goto LAB_037ed5ac;
          if ((*(int *)(lVar10 + 0x18) != 0) &&
             (*(undefined4 *)(lVar10 + 0x20) = 4, *(int *)(lVar10 + 0x18) != 1)) {
            *(undefined4 *)(lVar10 + 0x24) = 6;
            puVar2 = Method_UnityEngine_JsonUtility_FromJson<Subscribed>__;
            *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = lVar10;
            puVar5 = 
            Method_UnityEngine_UIElements_KeyboardNavigationManipulator_OnNavigationSubmit__;
            puVar4 = 
            Method_UnityEngine_JsonUtility_FromJson<RichPresenceManager_GroupPresenceDeeplinkMessage>__
            ;
            puVar3 = 
            Method_UnityEngine_JsonUtility_FromJson<InventoryManager_OculusCheckoutErrorJSON>__;
            lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,2);
            uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
            FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar5);
            lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
            FUN_03313b6c(lVar12,0);
            *(undefined4 *)(lVar12 + 0x10) = 1;
            uVar13 = FUN_037ea43c(0);
            *(undefined4 *)(lVar12 + 0x14) = 0;
            *(undefined8 *)(lVar12 + 0x18) = uVar13;
            *(undefined8 *)(lVar12 + 0x20) = uVar11;
            if (lVar10 == 0) goto LAB_037ed5ac;
            if (*(int *)(lVar10 + 0x18) != 0) {
              *(long *)(lVar10 + 0x20) = lVar12;
              puVar5 = 
              Method_UnityEngine_UIElements_KeyboardNavigationManipulator_OnNavigationMove__;
              uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
              FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar5);
              lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
              FUN_03313b6c(lVar12,0);
              *(undefined4 *)(lVar12 + 0x10) = 0x16;
              uVar13 = FUN_037ea43c(10);
              *(undefined4 *)(lVar12 + 0x14) = 0;
              *(undefined8 *)(lVar12 + 0x18) = uVar13;
              *(undefined8 *)(lVar12 + 0x20) = uVar11;
              if (1 < *(uint *)(lVar10 + 0x18)) {
                *(long *)(lVar10 + 0x28) = lVar12;
                *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = lVar10;
                puVar5 = Method_Katana_FillEnergy__;
                lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,8);
                uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar5);
                lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                FUN_03313b6c(lVar12,0);
                *(undefined4 *)(lVar12 + 0x10) = 1;
                uVar13 = FUN_037ea43c(10);
                *(undefined4 *)(lVar12 + 0x14) = 0x100;
                *(undefined8 *)(lVar12 + 0x18) = uVar13;
                *(undefined8 *)(lVar12 + 0x20) = uVar11;
                if (lVar10 == 0) goto LAB_037ed5ac;
                if (*(int *)(lVar10 + 0x18) != 0) {
                  *(long *)(lVar10 + 0x20) = lVar12;
                  puVar5 = Method_Newtonsoft_Json_JsonWriter_get_WriteState__;
                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                  FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar5);
                  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                  FUN_03313b6c(lVar12,0);
                  *(undefined4 *)(lVar12 + 0x10) = 9;
                  uVar13 = FUN_037ea43c(10);
                  *(undefined4 *)(lVar12 + 0x14) = 0;
                  *(undefined8 *)(lVar12 + 0x18) = uVar13;
                  *(undefined8 *)(lVar12 + 0x20) = uVar11;
                  if (1 < *(uint *)(lVar10 + 0x18)) {
                    *(long *)(lVar10 + 0x28) = lVar12;
                    puVar5 = Method_Newtonsoft_Json_JsonWriter_set_StringEscapeHandling__;
                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                    FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar5);
                    lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                    FUN_03313b6c(lVar12,0);
                    *(undefined4 *)(lVar12 + 0x10) = 6;
                    uVar13 = FUN_037ea43c(10);
                    *(undefined4 *)(lVar12 + 0x14) = 0;
                    *(undefined8 *)(lVar12 + 0x18) = uVar13;
                    *(undefined8 *)(lVar12 + 0x20) = uVar11;
                    if (2 < *(uint *)(lVar10 + 0x18)) {
                      *(long *)(lVar10 + 0x30) = lVar12;
                      puVar5 = Method_Mono_Security_Cryptography_KeyPairPersistence__ctor__;
                      uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                      FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar5);
                      lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                      FUN_03313b6c(lVar12,0);
                      *(undefined4 *)(lVar12 + 0x10) = 0xe;
                      uVar13 = FUN_037ea43c(10);
                      *(undefined4 *)(lVar12 + 0x14) = 0;
                      *(undefined8 *)(lVar12 + 0x18) = uVar13;
                      *(undefined8 *)(lVar12 + 0x20) = uVar11;
                      if (3 < *(uint *)(lVar10 + 0x18)) {
                        *(long *)(lVar10 + 0x38) = lVar12;
                        puVar5 = Method_Newtonsoft_Json_JsonWriter_set_FloatFormatHandling__;
                        uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                        FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar5);
                        lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                        FUN_03313b6c(lVar12,0);
                        *(undefined4 *)(lVar12 + 0x10) = 0x29;
                        uVar13 = FUN_037ea43c(0);
                        *(undefined4 *)(lVar12 + 0x14) = 0;
                        *(undefined8 *)(lVar12 + 0x18) = uVar13;
                        *(undefined8 *)(lVar12 + 0x20) = uVar11;
                        if (4 < *(uint *)(lVar10 + 0x18)) {
                          *(long *)(lVar10 + 0x40) = lVar12;
                          puVar5 = Method_Newtonsoft_Json_JsonWriter_set_Formatting__;
                          uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                          FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar5);
                          lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                          FUN_03313b6c(lVar12,0);
                          *(undefined4 *)(lVar12 + 0x10) = 0x2a;
                          uVar13 = FUN_037ea43c(7);
                          *(undefined4 *)(lVar12 + 0x14) = 0;
                          *(undefined8 *)(lVar12 + 0x18) = uVar13;
                          *(undefined8 *)(lVar12 + 0x20) = uVar11;
                          if (5 < *(uint *)(lVar10 + 0x18)) {
                            *(long *)(lVar10 + 0x48) = lVar12;
                            puVar5 = Method_Newtonsoft_Json_JsonWriter_set_DateFormatHandling__;
                            uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                            FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar5);
                            lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                            FUN_03313b6c(lVar12,0);
                            *(undefined4 *)(lVar12 + 0x10) = 0x2b;
                            uVar13 = FUN_037ea43c(0);
                            *(undefined4 *)(lVar12 + 0x14) = 0;
                            *(undefined8 *)(lVar12 + 0x18) = uVar13;
                            *(undefined8 *)(lVar12 + 0x20) = uVar11;
                            if (6 < *(uint *)(lVar10 + 0x18)) {
                              *(long *)(lVar10 + 0x50) = lVar12;
                              puVar5 = Method_Newtonsoft_Json_JsonWriter_set_DateTimeZoneHandling__;
                              uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                              FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar5);
                              lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                              FUN_03313b6c(lVar12,0);
                              *(undefined4 *)(lVar12 + 0x10) = 0x2c;
                              uVar13 = FUN_037ea43c(0);
                              *(undefined4 *)(lVar12 + 0x14) = 0;
                              *(undefined8 *)(lVar12 + 0x18) = uVar13;
                              *(undefined8 *)(lVar12 + 0x20) = uVar11;
                              if (7 < *(uint *)(lVar10 + 0x18)) {
                                *(long *)(lVar10 + 0x58) = lVar12;
                                *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30) = lVar10;
                                puVar5 = Method_Newtonsoft_Json_JsonWriter_WriteEnd__;
                                lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,7);
                                uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar5);
                                lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                                FUN_03313b6c(lVar12,0);
                                *(undefined4 *)(lVar12 + 0x10) = 1;
                                uVar13 = FUN_037ea43c(10);
                                *(undefined4 *)(lVar12 + 0x14) = 0;
                                *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                if (lVar10 == 0) goto LAB_037ed5ac;
                                if (*(int *)(lVar10 + 0x18) != 0) {
                                  *(long *)(lVar10 + 0x20) = lVar12;
                                  puVar5 = Method_Newtonsoft_Json_JsonWriter_WriteToken__;
                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                  FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar5);
                                  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                                  FUN_03313b6c(lVar12,0);
                                  *(undefined4 *)(lVar12 + 0x10) = 0x12;
                                  uVar13 = FUN_037ea43c(10);
                                  *(undefined4 *)(lVar12 + 0x14) = 0;
                                  *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                  *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                    *(long *)(lVar10 + 0x28) = lVar12;
                                    puVar5 = 
                                    Method_Newtonsoft_Json_JsonWriter_CalculateLevelsToComplete__;
                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                    FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar5);
                                    lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                                    FUN_03313b6c(lVar12,0);
                                    *(undefined4 *)(lVar12 + 0x10) = 0x1e;
                                    uVar13 = FUN_037ea43c(0);
                                    *(undefined4 *)(lVar12 + 0x14) = 0;
                                    *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                    *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                    if (2 < *(uint *)(lVar10 + 0x18)) {
                                      *(long *)(lVar10 + 0x30) = lVar12;
                                      puVar5 = 
                                      Method_Newtonsoft_Json_JsonWriter_UpdateCurrentState__;
                                      uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                      FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar5);
                                      lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                                      FUN_03313b6c(lVar12,0);
                                      *(undefined4 *)(lVar12 + 0x10) = 0x29;
                                      uVar13 = FUN_037ea43c(10);
                                      *(undefined4 *)(lVar12 + 0x14) = 0;
                                      *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                      *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                      if (3 < *(uint *)(lVar10 + 0x18)) {
                                        *(long *)(lVar10 + 0x38) = lVar12;
                                        puVar8 = 
                                        Method_Newtonsoft_Json_JsonWriter_WriteConstructorDate__;
                                        uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                        FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar8);
                                        lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                                        FUN_03313b6c(lVar12,0);
                                        *(undefined4 *)(lVar12 + 0x10) = 0x2a;
                                        uVar13 = FUN_037ea43c(7);
                                        *(undefined4 *)(lVar12 + 0x14) = 0;
                                        *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                        *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                        if (4 < *(uint *)(lVar10 + 0x18)) {
                                          *(long *)(lVar10 + 0x40) = lVar12;
                                          puVar6 = 
                                          Method_Newtonsoft_Json_JsonWriter_GetCloseTokenForType__;
                                          uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                          FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar6);
                                          lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                                          FUN_03313b6c(lVar12,0);
                                          *(undefined4 *)(lVar12 + 0x10) = 0x2b;
                                          uVar13 = FUN_037ea43c(0);
                                          *(undefined4 *)(lVar12 + 0x14) = 0;
                                          *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                          *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                          if (5 < *(uint *)(lVar10 + 0x18)) {
                                            *(long *)(lVar10 + 0x48) = lVar12;
                                            puVar7 = 
                                            Method_Newtonsoft_Json_JsonWriter_SetWriteState__;
                                            uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                            FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar7);
                                            lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                                            FUN_03313b6c(lVar12,0);
                                            *(undefined4 *)(lVar12 + 0x10) = 0x2c;
                                            uVar13 = FUN_037ea43c(0);
                                            *(undefined4 *)(lVar12 + 0x14) = 0;
                                            *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                            *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                            if (6 < *(uint *)(lVar10 + 0x18)) {
                                              *(long *)(lVar10 + 0x50) = lVar12;
                                              *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38) =
                                                   lVar10;
                                              puVar9 = 
                                              Method_Newtonsoft_Json_Converters_KeyValuePairConverter_InitializeReflectionObject__
                                              ;
                                              lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,3);
                                              uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                              FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar9);
                                              lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                                              FUN_03313b6c(lVar12,0);
                                              *(undefined4 *)(lVar12 + 0x10) = 2;
                                              uVar13 = FUN_037ea43c(10);
                                              *(undefined4 *)(lVar12 + 0x14) = 0x100;
                                              *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                              *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                              if (lVar10 == 0) goto LAB_037ed5ac;
                                              if (*(int *)(lVar10 + 0x18) != 0) {
                                                *(long *)(lVar10 + 0x20) = lVar12;
                                                puVar9 = 
                                                Method_Mono_Security_Cryptography_KeyPairPersistence_get_UserPath__
                                                ;
                                                uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                                FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar9);
                                                lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
                                                FUN_03313b6c(lVar12,0);
                                                *(undefined4 *)(lVar12 + 0x10) = 4;
                                                uVar13 = FUN_037ea43c(0);
                                                *(undefined4 *)(lVar12 + 0x14) = 0;
                                                *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                                *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                                if (1 < *(uint *)(lVar10 + 0x18)) {
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  puVar9 = 
                                                  Method_Mono_Security_Cryptography_KeyPairPersistence_get_MachinePath__
                                                  ;
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar9);
                                                  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03313b6c(lVar12,0);
                                                  *(undefined4 *)(lVar12 + 0x10) = 3;
                                                  uVar13 = FUN_037ea43c(0);
                                                  *(undefined4 *)(lVar12 + 0x14) = 0;
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                                  if (2 < *(uint *)(lVar10 + 0x18)) {
                                                    *(long *)(lVar10 + 0x30) = lVar12;
                                                    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) +
                                                             0x40) = lVar10;
                                                    puVar9 = 
                                                  Method_Newtonsoft_Json_JsonWriter_WriteValue__;
                                                  lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,3);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar9);
                                                  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03313b6c(lVar12,0);
                                                  *(undefined4 *)(lVar12 + 0x10) = 2;
                                                  uVar13 = FUN_037ea43c(10);
                                                  *(undefined4 *)(lVar12 + 0x14) = 0;
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                                  if (lVar10 == 0) goto LAB_037ed5ac;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(long *)(lVar10 + 0x20) = lVar12;
                                                    puVar9 = 
                                                  Method_Newtonsoft_Json_JsonWriter_WriteValue__;
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar9);
                                                  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03313b6c(lVar12,0);
                                                  *(undefined4 *)(lVar12 + 0x10) = 0x12;
                                                  uVar13 = FUN_037ea43c(10);
                                                  *(undefined4 *)(lVar12 + 0x14) = 0;
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(long *)(lVar10 + 0x28) = lVar12;
                                                    puVar9 = 
                                                  Method_Newtonsoft_Json_JsonWriter_WriteToken__;
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar9);
                                                  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03313b6c(lVar12,0);
                                                  *(undefined4 *)(lVar12 + 0x10) = 0x1e;
                                                  uVar13 = FUN_037ea43c(0);
                                                  *(undefined4 *)(lVar12 + 0x14) = 0;
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                                  if (2 < *(uint *)(lVar10 + 0x18)) {
                                                    *(long *)(lVar10 + 0x30) = lVar12;
                                                    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) +
                                                             0x48) = lVar10;
                                                    puVar9 = 
                                                  Method_UnityEngine_UIElements_KeyboardNavigationManipulator_OnNavigationCancel__
                                                  ;
                                                  lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,3);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar9);
                                                  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03313b6c(lVar12,0);
                                                  *(undefined4 *)(lVar12 + 0x10) = 0xe;
                                                  uVar13 = FUN_037ea43c(10);
                                                  *(undefined4 *)(lVar12 + 0x14) = 0;
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                                  if (lVar10 == 0) goto LAB_037ed5ac;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(long *)(lVar10 + 0x20) = lVar12;
                                                    puVar9 = 
                                                  Method_UnityEngine_UIElements_KeyboardNavigationManipulator_OnKeyDown__
                                                  ;
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar9);
                                                  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03313b6c(lVar12,0);
                                                  *(undefined4 *)(lVar12 + 0x10) = 4;
                                                  uVar13 = FUN_037ea43c(0);
                                                  *(undefined4 *)(lVar12 + 0x14) = 0;
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(long *)(lVar10 + 0x28) = lVar12;
                                                    puVar9 = 
                                                  Method_Newtonsoft_Json_Converters_KeyValuePairConverter_ReadJson__
                                                  ;
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar9);
                                                  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03313b6c(lVar12,0);
                                                  *(undefined4 *)(lVar12 + 0x10) = 3;
                                                  uVar13 = FUN_037ea43c(0);
                                                  *(undefined4 *)(lVar12 + 0x14) = 0;
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                                  if (2 < *(uint *)(lVar10 + 0x18)) {
                                                    *(long *)(lVar10 + 0x30) = lVar12;
                                                    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) +
                                                             0x50) = lVar10;
                                                    lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,4);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_037ed5b0(uVar11,0,*(undefined8 *)
                                                                                                                                                      
                                                  Method_Newtonsoft_Json_JsonWriter_set_FloatFormatHandling__
                                                  );
                                                  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03313b6c(lVar12,0);
                                                  *(undefined4 *)(lVar12 + 0x10) = 0x29;
                                                  uVar13 = FUN_037ea43c(0);
                                                  *(undefined4 *)(lVar12 + 0x14) = 0;
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                                  if (lVar10 == 0) goto LAB_037ed5ac;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(long *)(lVar10 + 0x20) = lVar12;
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_037ed5b0(uVar11,0,*(undefined8 *)
                                                                                                                                                      
                                                  Method_Newtonsoft_Json_JsonWriter_set_Formatting__
                                                  );
                                                  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03313b6c(lVar12,0);
                                                  *(undefined4 *)(lVar12 + 0x10) = 0x2a;
                                                  uVar13 = FUN_037ea43c(7);
                                                  *(undefined4 *)(lVar12 + 0x14) = 0;
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(long *)(lVar10 + 0x28) = lVar12;
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_037ed5b0(uVar11,0,*(undefined8 *)
                                                                                                                                                      
                                                  Method_Newtonsoft_Json_JsonWriter_set_DateFormatHandling__
                                                  );
                                                  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03313b6c(lVar12,0);
                                                  *(undefined4 *)(lVar12 + 0x10) = 0x2b;
                                                  uVar13 = FUN_037ea43c(0);
                                                  *(undefined4 *)(lVar12 + 0x14) = 0;
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                                  if (2 < *(uint *)(lVar10 + 0x18)) {
                                                    *(long *)(lVar10 + 0x30) = lVar12;
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_037ed5b0(uVar11,0,*(undefined8 *)
                                                                                                                                                      
                                                  Method_Newtonsoft_Json_JsonWriter_set_DateTimeZoneHandling__
                                                  );
                                                  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_03313b6c(lVar12,0);
                                                  *(undefined4 *)(lVar12 + 0x10) = 0x2c;
                                                  uVar13 = FUN_037ea43c(0);
                                                  *(undefined4 *)(lVar12 + 0x14) = 0;
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                                  if (3 < *(uint *)(lVar10 + 0x18)) {
                                                    *(long *)(lVar10 + 0x38) = lVar12;
                                                    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) +
                                                             0x58) = lVar10;
                                                    lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar2,4);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar5);
                                                    lVar12 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_03313b6c(lVar12,0);
                                                    *(undefined4 *)(lVar12 + 0x10) = 0x29;
                                                    uVar13 = FUN_037ea43c(10);
                                                    *(undefined4 *)(lVar12 + 0x14) = 0;
                                                    *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                                    *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                                    if (lVar10 == 0) goto LAB_037ed5ac;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      *(long *)(lVar10 + 0x20) = lVar12;
                                                      uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                   puVar4);
                                                      FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar8);
                                                      lVar12 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                   puVar3);
                                                      FUN_03313b6c(lVar12,0);
                                                      *(undefined4 *)(lVar12 + 0x10) = 0x2a;
                                                      uVar13 = FUN_037ea43c(7);
                                                      *(undefined4 *)(lVar12 + 0x14) = 0;
                                                      *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                                      *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                                      if (1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(long *)(lVar10 + 0x28) = lVar12;
                                                        uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                     puVar4);
                                                        FUN_037ed5b0(uVar11,0,*(undefined8 *)puVar6)
                                                        ;
                                                        lVar12 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                     puVar3);
                                                        FUN_03313b6c(lVar12,0);
                                                        *(undefined4 *)(lVar12 + 0x10) = 0x2b;
                                                        uVar13 = FUN_037ea43c(0);
                                                        *(undefined4 *)(lVar12 + 0x14) = 0;
                                                        *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                                        *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                                        if (2 < *(uint *)(lVar10 + 0x18)) {
                                                          *(long *)(lVar10 + 0x30) = lVar12;
                                                          uVar11 = thunk_FUN_01c496e0(*(undefined8 *
                                                                                       )puVar4);
                                                          FUN_037ed5b0(uVar11,0,*(undefined8 *)
                                                                                 puVar7);
                                                          lVar12 = thunk_FUN_01c496e0(*(undefined8 *
                                                                                       )puVar3);
                                                          FUN_03313b6c(lVar12,0);
                                                          *(undefined4 *)(lVar12 + 0x10) = 0x2c;
                                                          uVar13 = FUN_037ea43c(0);
                                                          *(undefined4 *)(lVar12 + 0x14) = 0;
                                                          *(undefined8 *)(lVar12 + 0x18) = uVar13;
                                                          *(undefined8 *)(lVar12 + 0x20) = uVar11;
                                                          if (3 < *(uint *)(lVar10 + 0x18)) {
                                                            *(long *)(lVar10 + 0x38) = lVar12;
                                                            puVar3 = 
                                                  Method_UnityEngine_LayerMask_GetMask__;
                                                  *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x60
                                                           ) = lVar10;
                                                  puVar2 = 
                                                  Method_UnityEngine_JsonUtility_FromJson<DiagnosticEvent>__
                                                  ;
                                                  lVar10 = FUN_01c5d2fc(*(undefined8 *)puVar3,9);
                                                  uVar11 = **(undefined8 **)(*(long *)puVar1 + 0xb8)
                                                  ;
                                                  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03313b6c(lVar12,0);
                                                  *(undefined4 *)(lVar12 + 0x10) = 0;
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar11;
                                                  *(undefined8 *)(lVar12 + 0x28) = 0;
                                                  *(undefined8 *)(lVar12 + 0x20) = 0;
                                                  *(undefined8 *)(lVar12 + 0x38) = 0;
                                                  *(undefined8 *)(lVar12 + 0x30) = 0;
                                                  *(undefined1 *)(lVar12 + 0x40) = 0;
                                                  if (lVar10 == 0) goto LAB_037ed5ac;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(long *)(lVar10 + 0x20) = lVar12;
                                                    puVar7 = 
                                                  Method_UnityEngine_UI_LayoutGroup_SetProperty<bool>__
                                                  ;
                                                  puVar6 = 
                                                  Method_System_Text_Latin1Encoding_GetMaxCharCount__
                                                  ;
                                                  puVar8 = 
                                                  Method_System_Text_Latin1Encoding_GetMaxByteCount__
                                                  ;
                                                  puVar5 = 
                                                  Method_System_Linq_Expressions_Interpreter_LabelInfo_FirstDefinition__
                                                  ;
                                                  puVar4 = 
                                                  Method_Newtonsoft_Json_JsonWriter_AutoComplete__;
                                                  puVar3 = 
                                                  Method_UnityEngine_JsonUtility_FromJson<RateMyAppDefaultController_ControllerStateInfo>__
                                                  ;
                                                  uVar16 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar1 + 0xb8) + 8);
                                                  uVar15 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar1 + 0xb8) +
                                                            0x28);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_UI_LayoutGroup_SetProperty<bool>__
                                                  );
                                                  FUN_037ed74c(uVar11,0,*(undefined8 *)puVar8);
                                                  uVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_037ed7ec(uVar13,0,*(undefined8 *)puVar4);
                                                  uVar14 = thunk_FUN_01c496e0(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037ed888(uVar14,0,*(undefined8 *)puVar5);
                                                  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03313b6c(lVar12,0);
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar16;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar15;
                                                  *(undefined8 *)(lVar12 + 0x28) = uVar11;
                                                  *(undefined8 *)(lVar12 + 0x30) = uVar13;
                                                  *(undefined8 *)(lVar12 + 0x38) = uVar14;
                                                  *(undefined4 *)(lVar12 + 0x10) = 0x1f;
                                                  *(undefined1 *)(lVar12 + 0x40) = 0;
                                                  if (1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(long *)(lVar10 + 0x28) = lVar12;
                                                    puVar5 = 
                                                  Method_I2_Loc_LanguageSourceData_ApplyDownloadedDataOnSceneLoaded__
                                                  ;
                                                  puVar4 = Method_KillFeed_DisplayLeaveText__;
                                                  puVar1 = Method_UnityEngine_JsonUtility_ToJson__;
                                                  uVar15 = *(undefined8 *)
                                                            (*(long *)(*(long *)
                                                  Method_System_Configuration_IgnoreSection_get_Properties__
                                                  + 0xb8) + 0x10);
                                                  uVar16 = *(undefined8 *)
                                                            (*(long *)(*(long *)
                                                  Method_System_Configuration_IgnoreSection_get_Properties__
                                                  + 0xb8) + 0x30);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_037ed74c(uVar11,0,*(undefined8 *)puVar5);
                                                  uVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_037ed7ec(uVar13,0,*(undefined8 *)puVar1);
                                                  uVar14 = thunk_FUN_01c496e0(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037ed888(uVar14,0,*(undefined8 *)puVar4);
                                                  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03313b6c(lVar12,0);
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar15;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar16;
                                                  *(undefined8 *)(lVar12 + 0x28) = uVar11;
                                                  *(undefined8 *)(lVar12 + 0x30) = uVar13;
                                                  *(undefined8 *)(lVar12 + 0x38) = uVar14;
                                                  *(undefined4 *)(lVar12 + 0x10) = 0x20;
                                                  *(undefined1 *)(lVar12 + 0x40) = 0;
                                                  if (2 < *(uint *)(lVar10 + 0x18)) {
                                                    *(long *)(lVar10 + 0x30) = lVar12;
                                                    puVar5 = 
                                                  Method_System_Linq_Expressions_Interpreter_LabelInfo_ValidateJump__
                                                  ;
                                                  puVar4 = 
                                                  Method_UnityEngine_UIElements_KeyboardTextEditorEventHandler_OnNavigationEvent<NavigationMoveEvent>__
                                                  ;
                                                  puVar1 = 
                                                  Method_UnityEngine_JsonUtility_FromJson<RichPresenceManager_RichPresenceDeeplinkMessage>__
                                                  ;
                                                  uVar15 = *(undefined8 *)
                                                            (*(long *)(*(long *)
                                                  Method_System_Configuration_IgnoreSection_get_Properties__
                                                  + 0xb8) + 0x18);
                                                  uVar16 = *(undefined8 *)
                                                            (*(long *)(*(long *)
                                                  Method_System_Configuration_IgnoreSection_get_Properties__
                                                  + 0xb8) + 0x38);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_037ed74c(uVar11,0,*(undefined8 *)puVar5);
                                                  uVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_037ed7ec(uVar13,0,*(undefined8 *)puVar1);
                                                  uVar14 = thunk_FUN_01c496e0(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037ed888(uVar14,0,*(undefined8 *)puVar4);
                                                  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03313b6c(lVar12,0);
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar15;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar16;
                                                  *(undefined8 *)(lVar12 + 0x28) = uVar11;
                                                  *(undefined8 *)(lVar12 + 0x30) = uVar13;
                                                  *(undefined8 *)(lVar12 + 0x38) = uVar14;
                                                  *(undefined4 *)(lVar12 + 0x10) = 0x23;
                                                  *(undefined1 *)(lVar12 + 0x40) = 0;
                                                  if (3 < *(uint *)(lVar10 + 0x18)) {
                                                    *(long *)(lVar10 + 0x38) = lVar12;
                                                    puVar4 = 
                                                  Method_LaserPointer_OnInputFocusAcquired__;
                                                  puVar3 = 
                                                  Method_System_Linq_Expressions_Interpreter_LabelInfo_CommonNode<LabelScopeInfo>__
                                                  ;
                                                  puVar1 = 
                                                  Method_System_Configuration_IgnoreSection_get_Properties__
                                                  ;
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*(long *)
                                                  Method_System_Configuration_IgnoreSection_get_Properties__
                                                  + 0xb8) + 0x40);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_037ed74c(uVar11,0,*(undefined8 *)puVar4);
                                                  uVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037ed888(uVar13,0,*(undefined8 *)puVar3);
                                                  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03313b6c(lVar12,0);
                                                  *(undefined8 *)(lVar12 + 0x18) = 0;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar14;
                                                  *(undefined8 *)(lVar12 + 0x28) = uVar11;
                                                  *(undefined8 *)(lVar12 + 0x30) = 0;
                                                  *(undefined8 *)(lVar12 + 0x38) = uVar13;
                                                  *(undefined4 *)(lVar12 + 0x10) = 0x21;
                                                  *(undefined1 *)(lVar12 + 0x40) = 0;
                                                  if (4 < *(uint *)(lVar10 + 0x18)) {
                                                    *(long *)(lVar10 + 0x40) = lVar12;
                                                    puVar5 = 
                                                  Method_System_Linq_Expressions_LambdaExpression_GetParameter__
                                                  ;
                                                  puVar4 = 
                                                  Method_UnityEngine_UIElements_KeyboardTextEditorEventHandler_OnNavigationEvent<NavigationSubmitEvent>__
                                                  ;
                                                  puVar3 = Method_UnityEngine_JsonUtility_FromJson__
                                                  ;
                                                  uVar15 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar1 + 0xb8) +
                                                            0x48);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_037ed74c(uVar11,0,*(undefined8 *)puVar5);
                                                  uVar13 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_JsonUtility_FromJson<RateMyAppDefaultController_ControllerStateInfo>__
                                                  );
                                                  FUN_037ed7ec(uVar13,0,*(undefined8 *)puVar3);
                                                  uVar14 = thunk_FUN_01c496e0(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037ed888(uVar14,0,*(undefined8 *)puVar4);
                                                  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03313b6c(lVar12,0);
                                                  *(undefined8 *)(lVar12 + 0x18) = 0;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar15;
                                                  *(undefined8 *)(lVar12 + 0x28) = uVar11;
                                                  *(undefined8 *)(lVar12 + 0x30) = uVar13;
                                                  *(undefined8 *)(lVar12 + 0x38) = uVar14;
                                                  *(undefined4 *)(lVar12 + 0x10) = 0x24;
                                                  *(undefined1 *)(lVar12 + 0x40) = 0;
                                                  if (5 < *(uint *)(lVar10 + 0x18)) {
                                                    *(long *)(lVar10 + 0x48) = lVar12;
                                                    puVar4 = Method_LaserPointer_OnInputFocusLost__;
                                                    puVar3 = 
                                                  Method_System_Linq_Expressions_Interpreter_LabelInfo_Define__
                                                  ;
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar1 + 0xb8) +
                                                            0x20);
                                                  uVar15 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar1 + 0xb8) +
                                                            0x50);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_037ed74c(uVar11,0,*(undefined8 *)puVar4);
                                                  uVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037ed888(uVar13,0,*(undefined8 *)puVar3);
                                                  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03313b6c(lVar12,0);
                                                  *(undefined8 *)(lVar12 + 0x18) = uVar14;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar15;
                                                  *(undefined8 *)(lVar12 + 0x28) = uVar11;
                                                  *(undefined8 *)(lVar12 + 0x30) = 0;
                                                  *(undefined8 *)(lVar12 + 0x38) = uVar13;
                                                  *(undefined4 *)(lVar12 + 0x10) = 0x22;
                                                  *(undefined1 *)(lVar12 + 0x40) = 0;
                                                  if (6 < *(uint *)(lVar10 + 0x18)) {
                                                    *(long *)(lVar10 + 0x50) = lVar12;
                                                    puVar4 = 
                                                  Method_System_Linq_Expressions_LambdaExpression_get_ParameterCount__
                                                  ;
                                                  puVar3 = 
                                                  Method_System_Security_Cryptography_KeyedHashAlgorithm_set_Key__
                                                  ;
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar1 + 0xb8) +
                                                            0x58);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_037ed74c(uVar11,0,*(undefined8 *)puVar4);
                                                  uVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037ed888(uVar13,0,*(undefined8 *)puVar3);
                                                  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03313b6c(lVar12,0);
                                                  *(undefined8 *)(lVar12 + 0x18) = 0;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar14;
                                                  *(undefined8 *)(lVar12 + 0x28) = uVar11;
                                                  *(undefined8 *)(lVar12 + 0x30) = 0;
                                                  *(undefined8 *)(lVar12 + 0x38) = uVar13;
                                                  *(undefined4 *)(lVar12 + 0x10) = 0x25;
                                                  *(undefined1 *)(lVar12 + 0x40) = 1;
                                                  if (7 < *(uint *)(lVar10 + 0x18)) {
                                                    *(long *)(lVar10 + 0x58) = lVar12;
                                                    puVar4 = 
                                                  Method_System_Linq_Expressions_Interpreter_LabelInfo_ValidateFinish__
                                                  ;
                                                  puVar3 = 
                                                  Method_UnityEngine_UIElements_KeyboardTextEditorEventHandler_OnNavigationEvent<NavigationCancelEvent>__
                                                  ;
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar1 + 0xb8) +
                                                            0x60);
                                                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_037ed74c(uVar11,0,*(undefined8 *)puVar4);
                                                  uVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037ed888(uVar13,0,*(undefined8 *)puVar3);
                                                  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03313b6c(lVar12,0);
                                                  *(undefined4 *)(lVar12 + 0x10) = 0x25;
                                                  *(undefined8 *)(lVar12 + 0x18) = 0;
                                                  *(undefined8 *)(lVar12 + 0x20) = uVar14;
                                                  *(undefined8 *)(lVar12 + 0x28) = uVar11;
                                                  *(undefined8 *)(lVar12 + 0x30) = 0;
                                                  *(undefined8 *)(lVar12 + 0x38) = uVar13;
                                                  *(undefined1 *)(lVar12 + 0x40) = 1;
                                                  if (8 < *(uint *)(lVar10 + 0x18)) {
                                                    *(long *)(lVar10 + 0x60) = lVar12;
                                                    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) +
                                                             0x68) = lVar10;
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
    FUN_01c5d4ac();
  }
LAB_037ed5ac:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


