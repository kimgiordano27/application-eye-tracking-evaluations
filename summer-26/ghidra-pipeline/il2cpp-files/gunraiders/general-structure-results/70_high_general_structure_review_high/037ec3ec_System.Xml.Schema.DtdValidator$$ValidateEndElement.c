/*
FUNCTION_NAME: System.Xml.Schema.DtdValidator$$ValidateEndElement
ENTRY_POINT: 037ec3ec
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;negative_framework_namespace_without_eye_use_flow
*/


void System_Xml_Schema_DtdValidator__ValidateEndElement(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 uVar13;
  undefined8 *unaff_x25;
  undefined8 uVar14;
  
  FUN_037ed5b0(param_1,0);
  lVar8 = thunk_FUN_01c496e0(*unaff_x22);
  FUN_03313b6c(lVar8,0);
  *(undefined4 *)(lVar8 + 0x10) = 1;
  uVar9 = FUN_037ea43c(10);
  *(undefined4 *)(lVar8 + 0x14) = 0x100;
  *(undefined8 *)(lVar8 + 0x18) = uVar9;
  *(undefined8 *)(lVar8 + 0x20) = param_1;
  if (unaff_x19 == 0) goto LAB_037ed5ac;
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    *(long *)(unaff_x19 + 0x20) = lVar8;
    puVar2 = Method_Newtonsoft_Json_JsonWriter_get_WriteState__;
    uVar9 = thunk_FUN_01c496e0(*unaff_x23);
    FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar2);
    lVar8 = thunk_FUN_01c496e0(*unaff_x22);
    FUN_03313b6c(lVar8,0);
    *(undefined4 *)(lVar8 + 0x10) = 9;
    uVar10 = FUN_037ea43c(10);
    *(undefined4 *)(lVar8 + 0x14) = 0;
    *(undefined8 *)(lVar8 + 0x18) = uVar10;
    *(undefined8 *)(lVar8 + 0x20) = uVar9;
    if (1 < *(uint *)(unaff_x19 + 0x18)) {
      *(long *)(unaff_x19 + 0x28) = lVar8;
      puVar2 = Method_Newtonsoft_Json_JsonWriter_set_StringEscapeHandling__;
      uVar9 = thunk_FUN_01c496e0(*unaff_x23);
      FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar2);
      lVar8 = thunk_FUN_01c496e0(*unaff_x22);
      FUN_03313b6c(lVar8,0);
      *(undefined4 *)(lVar8 + 0x10) = 6;
      uVar10 = FUN_037ea43c(10);
      *(undefined4 *)(lVar8 + 0x14) = 0;
      *(undefined8 *)(lVar8 + 0x18) = uVar10;
      *(undefined8 *)(lVar8 + 0x20) = uVar9;
      if (2 < *(uint *)(unaff_x19 + 0x18)) {
        *(long *)(unaff_x19 + 0x30) = lVar8;
        puVar2 = Method_Mono_Security_Cryptography_KeyPairPersistence__ctor__;
        uVar9 = thunk_FUN_01c496e0(*unaff_x23);
        FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar2);
        lVar8 = thunk_FUN_01c496e0(*unaff_x22);
        FUN_03313b6c(lVar8,0);
        *(undefined4 *)(lVar8 + 0x10) = 0xe;
        uVar10 = FUN_037ea43c(10);
        *(undefined4 *)(lVar8 + 0x14) = 0;
        *(undefined8 *)(lVar8 + 0x18) = uVar10;
        *(undefined8 *)(lVar8 + 0x20) = uVar9;
        if (3 < *(uint *)(unaff_x19 + 0x18)) {
          *(long *)(unaff_x19 + 0x38) = lVar8;
          puVar2 = Method_Newtonsoft_Json_JsonWriter_set_FloatFormatHandling__;
          uVar9 = thunk_FUN_01c496e0(*unaff_x23);
          FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar2);
          lVar8 = thunk_FUN_01c496e0(*unaff_x22);
          FUN_03313b6c(lVar8,0);
          *(undefined4 *)(lVar8 + 0x10) = 0x29;
          uVar10 = FUN_037ea43c(0);
          *(undefined4 *)(lVar8 + 0x14) = 0;
          *(undefined8 *)(lVar8 + 0x18) = uVar10;
          *(undefined8 *)(lVar8 + 0x20) = uVar9;
          if (4 < *(uint *)(unaff_x19 + 0x18)) {
            *(long *)(unaff_x19 + 0x40) = lVar8;
            puVar2 = Method_Newtonsoft_Json_JsonWriter_set_Formatting__;
            uVar9 = thunk_FUN_01c496e0(*unaff_x23);
            FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar2);
            lVar8 = thunk_FUN_01c496e0(*unaff_x22);
            FUN_03313b6c(lVar8,0);
            *(undefined4 *)(lVar8 + 0x10) = 0x2a;
            uVar10 = FUN_037ea43c(7);
            *(undefined4 *)(lVar8 + 0x14) = 0;
            *(undefined8 *)(lVar8 + 0x18) = uVar10;
            *(undefined8 *)(lVar8 + 0x20) = uVar9;
            if (5 < *(uint *)(unaff_x19 + 0x18)) {
              *(long *)(unaff_x19 + 0x48) = lVar8;
              puVar2 = Method_Newtonsoft_Json_JsonWriter_set_DateFormatHandling__;
              uVar9 = thunk_FUN_01c496e0(*unaff_x23);
              FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar2);
              lVar8 = thunk_FUN_01c496e0(*unaff_x22);
              FUN_03313b6c(lVar8,0);
              *(undefined4 *)(lVar8 + 0x10) = 0x2b;
              uVar10 = FUN_037ea43c(0);
              *(undefined4 *)(lVar8 + 0x14) = 0;
              *(undefined8 *)(lVar8 + 0x18) = uVar10;
              *(undefined8 *)(lVar8 + 0x20) = uVar9;
              if (6 < *(uint *)(unaff_x19 + 0x18)) {
                *(long *)(unaff_x19 + 0x50) = lVar8;
                puVar2 = Method_Newtonsoft_Json_JsonWriter_set_DateTimeZoneHandling__;
                uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar2);
                lVar8 = thunk_FUN_01c496e0(*unaff_x22);
                FUN_03313b6c(lVar8,0);
                *(undefined4 *)(lVar8 + 0x10) = 0x2c;
                uVar10 = FUN_037ea43c(0);
                *(undefined4 *)(lVar8 + 0x14) = 0;
                *(undefined8 *)(lVar8 + 0x18) = uVar10;
                *(undefined8 *)(lVar8 + 0x20) = uVar9;
                if (7 < *(uint *)(unaff_x19 + 0x18)) {
                  *(long *)(unaff_x19 + 0x58) = lVar8;
                  *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x30) = unaff_x19;
                  puVar2 = Method_Newtonsoft_Json_JsonWriter_WriteEnd__;
                  lVar8 = FUN_01c5d2fc(*unaff_x25,7);
                  uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                  FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar2);
                  lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                  FUN_03313b6c(lVar11,0);
                  *(undefined4 *)(lVar11 + 0x10) = 1;
                  uVar10 = FUN_037ea43c(10);
                  *(undefined4 *)(lVar11 + 0x14) = 0;
                  *(undefined8 *)(lVar11 + 0x18) = uVar10;
                  *(undefined8 *)(lVar11 + 0x20) = uVar9;
                  if (lVar8 == 0) goto LAB_037ed5ac;
                  if (*(int *)(lVar8 + 0x18) != 0) {
                    *(long *)(lVar8 + 0x20) = lVar11;
                    puVar2 = Method_Newtonsoft_Json_JsonWriter_WriteToken__;
                    uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                    FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar2);
                    lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                    FUN_03313b6c(lVar11,0);
                    *(undefined4 *)(lVar11 + 0x10) = 0x12;
                    uVar10 = FUN_037ea43c(10);
                    *(undefined4 *)(lVar11 + 0x14) = 0;
                    *(undefined8 *)(lVar11 + 0x18) = uVar10;
                    *(undefined8 *)(lVar11 + 0x20) = uVar9;
                    if (1 < *(uint *)(lVar8 + 0x18)) {
                      *(long *)(lVar8 + 0x28) = lVar11;
                      puVar2 = Method_Newtonsoft_Json_JsonWriter_CalculateLevelsToComplete__;
                      uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                      FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar2);
                      lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                      FUN_03313b6c(lVar11,0);
                      *(undefined4 *)(lVar11 + 0x10) = 0x1e;
                      uVar10 = FUN_037ea43c(0);
                      *(undefined4 *)(lVar11 + 0x14) = 0;
                      *(undefined8 *)(lVar11 + 0x18) = uVar10;
                      *(undefined8 *)(lVar11 + 0x20) = uVar9;
                      if (2 < *(uint *)(lVar8 + 0x18)) {
                        *(long *)(lVar8 + 0x30) = lVar11;
                        puVar2 = Method_Newtonsoft_Json_JsonWriter_UpdateCurrentState__;
                        uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                        FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar2);
                        lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                        FUN_03313b6c(lVar11,0);
                        *(undefined4 *)(lVar11 + 0x10) = 0x29;
                        uVar10 = FUN_037ea43c(10);
                        *(undefined4 *)(lVar11 + 0x14) = 0;
                        *(undefined8 *)(lVar11 + 0x18) = uVar10;
                        *(undefined8 *)(lVar11 + 0x20) = uVar9;
                        if (3 < *(uint *)(lVar8 + 0x18)) {
                          *(long *)(lVar8 + 0x38) = lVar11;
                          puVar1 = Method_Newtonsoft_Json_JsonWriter_WriteConstructorDate__;
                          uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                          FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar1);
                          lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                          FUN_03313b6c(lVar11,0);
                          *(undefined4 *)(lVar11 + 0x10) = 0x2a;
                          uVar10 = FUN_037ea43c(7);
                          *(undefined4 *)(lVar11 + 0x14) = 0;
                          *(undefined8 *)(lVar11 + 0x18) = uVar10;
                          *(undefined8 *)(lVar11 + 0x20) = uVar9;
                          if (4 < *(uint *)(lVar8 + 0x18)) {
                            *(long *)(lVar8 + 0x40) = lVar11;
                            puVar3 = Method_Newtonsoft_Json_JsonWriter_GetCloseTokenForType__;
                            uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                            FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar3);
                            lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                            FUN_03313b6c(lVar11,0);
                            *(undefined4 *)(lVar11 + 0x10) = 0x2b;
                            uVar10 = FUN_037ea43c(0);
                            *(undefined4 *)(lVar11 + 0x14) = 0;
                            *(undefined8 *)(lVar11 + 0x18) = uVar10;
                            *(undefined8 *)(lVar11 + 0x20) = uVar9;
                            if (5 < *(uint *)(lVar8 + 0x18)) {
                              *(long *)(lVar8 + 0x48) = lVar11;
                              puVar4 = Method_Newtonsoft_Json_JsonWriter_SetWriteState__;
                              uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                              FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar4);
                              lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                              FUN_03313b6c(lVar11,0);
                              *(undefined4 *)(lVar11 + 0x10) = 0x2c;
                              uVar10 = FUN_037ea43c(0);
                              *(undefined4 *)(lVar11 + 0x14) = 0;
                              *(undefined8 *)(lVar11 + 0x18) = uVar10;
                              *(undefined8 *)(lVar11 + 0x20) = uVar9;
                              if (6 < *(uint *)(lVar8 + 0x18)) {
                                *(long *)(lVar8 + 0x50) = lVar11;
                                *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x38) = lVar8;
                                puVar5 = 
                                Method_Newtonsoft_Json_Converters_KeyValuePairConverter_InitializeReflectionObject__
                                ;
                                lVar8 = FUN_01c5d2fc(*unaff_x25,3);
                                uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                                FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar5);
                                lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                                FUN_03313b6c(lVar11,0);
                                *(undefined4 *)(lVar11 + 0x10) = 2;
                                uVar10 = FUN_037ea43c(10);
                                *(undefined4 *)(lVar11 + 0x14) = 0x100;
                                *(undefined8 *)(lVar11 + 0x18) = uVar10;
                                *(undefined8 *)(lVar11 + 0x20) = uVar9;
                                if (lVar8 == 0) {
LAB_037ed5ac:
                    /* WARNING: Subroutine does not return */
                                  FUN_01c5d4a4();
                                }
                                if (*(int *)(lVar8 + 0x18) != 0) {
                                  *(long *)(lVar8 + 0x20) = lVar11;
                                  puVar5 = 
                                  Method_Mono_Security_Cryptography_KeyPairPersistence_get_UserPath__
                                  ;
                                  uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                                  FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar5);
                                  lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                                  FUN_03313b6c(lVar11,0);
                                  *(undefined4 *)(lVar11 + 0x10) = 4;
                                  uVar10 = FUN_037ea43c(0);
                                  *(undefined4 *)(lVar11 + 0x14) = 0;
                                  *(undefined8 *)(lVar11 + 0x18) = uVar10;
                                  *(undefined8 *)(lVar11 + 0x20) = uVar9;
                                  if (1 < *(uint *)(lVar8 + 0x18)) {
                                    *(long *)(lVar8 + 0x28) = lVar11;
                                    puVar5 = 
                                    Method_Mono_Security_Cryptography_KeyPairPersistence_get_MachinePath__
                                    ;
                                    uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                                    FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar5);
                                    lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                                    FUN_03313b6c(lVar11,0);
                                    *(undefined4 *)(lVar11 + 0x10) = 3;
                                    uVar10 = FUN_037ea43c(0);
                                    *(undefined4 *)(lVar11 + 0x14) = 0;
                                    *(undefined8 *)(lVar11 + 0x18) = uVar10;
                                    *(undefined8 *)(lVar11 + 0x20) = uVar9;
                                    if (2 < *(uint *)(lVar8 + 0x18)) {
                                      *(long *)(lVar8 + 0x30) = lVar11;
                                      *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x40) = lVar8;
                                      puVar5 = Method_Newtonsoft_Json_JsonWriter_WriteValue__;
                                      lVar8 = FUN_01c5d2fc(*unaff_x25,3);
                                      uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                                      FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar5);
                                      lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                                      FUN_03313b6c(lVar11,0);
                                      *(undefined4 *)(lVar11 + 0x10) = 2;
                                      uVar10 = FUN_037ea43c(10);
                                      *(undefined4 *)(lVar11 + 0x14) = 0;
                                      *(undefined8 *)(lVar11 + 0x18) = uVar10;
                                      *(undefined8 *)(lVar11 + 0x20) = uVar9;
                                      if (lVar8 == 0) goto LAB_037ed5ac;
                                      if (*(int *)(lVar8 + 0x18) != 0) {
                                        *(long *)(lVar8 + 0x20) = lVar11;
                                        puVar5 = Method_Newtonsoft_Json_JsonWriter_WriteValue__;
                                        uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                                        FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar5);
                                        lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                                        FUN_03313b6c(lVar11,0);
                                        *(undefined4 *)(lVar11 + 0x10) = 0x12;
                                        uVar10 = FUN_037ea43c(10);
                                        *(undefined4 *)(lVar11 + 0x14) = 0;
                                        *(undefined8 *)(lVar11 + 0x18) = uVar10;
                                        *(undefined8 *)(lVar11 + 0x20) = uVar9;
                                        if (1 < *(uint *)(lVar8 + 0x18)) {
                                          *(long *)(lVar8 + 0x28) = lVar11;
                                          puVar5 = Method_Newtonsoft_Json_JsonWriter_WriteToken__;
                                          uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                                          FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar5);
                                          lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                                          FUN_03313b6c(lVar11,0);
                                          *(undefined4 *)(lVar11 + 0x10) = 0x1e;
                                          uVar10 = FUN_037ea43c(0);
                                          *(undefined4 *)(lVar11 + 0x14) = 0;
                                          *(undefined8 *)(lVar11 + 0x18) = uVar10;
                                          *(undefined8 *)(lVar11 + 0x20) = uVar9;
                                          if (2 < *(uint *)(lVar8 + 0x18)) {
                                            *(long *)(lVar8 + 0x30) = lVar11;
                                            *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x48) = lVar8;
                                            puVar5 = 
                                            Method_UnityEngine_UIElements_KeyboardNavigationManipulator_OnNavigationCancel__
                                            ;
                                            lVar8 = FUN_01c5d2fc(*unaff_x25,3);
                                            uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                                            FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar5);
                                            lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                                            FUN_03313b6c(lVar11,0);
                                            *(undefined4 *)(lVar11 + 0x10) = 0xe;
                                            uVar10 = FUN_037ea43c(10);
                                            *(undefined4 *)(lVar11 + 0x14) = 0;
                                            *(undefined8 *)(lVar11 + 0x18) = uVar10;
                                            *(undefined8 *)(lVar11 + 0x20) = uVar9;
                                            if (lVar8 == 0) goto LAB_037ed5ac;
                                            if (*(int *)(lVar8 + 0x18) != 0) {
                                              *(long *)(lVar8 + 0x20) = lVar11;
                                              puVar5 = 
                                              Method_UnityEngine_UIElements_KeyboardNavigationManipulator_OnKeyDown__
                                              ;
                                              uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                                              FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar5);
                                              lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                                              FUN_03313b6c(lVar11,0);
                                              *(undefined4 *)(lVar11 + 0x10) = 4;
                                              uVar10 = FUN_037ea43c(0);
                                              *(undefined4 *)(lVar11 + 0x14) = 0;
                                              *(undefined8 *)(lVar11 + 0x18) = uVar10;
                                              *(undefined8 *)(lVar11 + 0x20) = uVar9;
                                              if (1 < *(uint *)(lVar8 + 0x18)) {
                                                *(long *)(lVar8 + 0x28) = lVar11;
                                                puVar5 = 
                                                Method_Newtonsoft_Json_Converters_KeyValuePairConverter_ReadJson__
                                                ;
                                                uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                                                FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar5);
                                                lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                                                FUN_03313b6c(lVar11,0);
                                                *(undefined4 *)(lVar11 + 0x10) = 3;
                                                uVar10 = FUN_037ea43c(0);
                                                *(undefined4 *)(lVar11 + 0x14) = 0;
                                                *(undefined8 *)(lVar11 + 0x18) = uVar10;
                                                *(undefined8 *)(lVar11 + 0x20) = uVar9;
                                                if (2 < *(uint *)(lVar8 + 0x18)) {
                                                  *(long *)(lVar8 + 0x30) = lVar11;
                                                  *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x50) =
                                                       lVar8;
                                                  lVar8 = FUN_01c5d2fc(*unaff_x25,4);
                                                  uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                                                  FUN_037ed5b0(uVar9,0,*(undefined8 *)
                                                                                                                                                
                                                  Method_Newtonsoft_Json_JsonWriter_set_FloatFormatHandling__
                                                  );
                                                  lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03313b6c(lVar11,0);
                                                  *(undefined4 *)(lVar11 + 0x10) = 0x29;
                                                  uVar10 = FUN_037ea43c(0);
                                                  *(undefined4 *)(lVar11 + 0x14) = 0;
                                                  *(undefined8 *)(lVar11 + 0x18) = uVar10;
                                                  *(undefined8 *)(lVar11 + 0x20) = uVar9;
                                                  if (lVar8 == 0) goto LAB_037ed5ac;
                                                  if (*(int *)(lVar8 + 0x18) != 0) {
                                                    *(long *)(lVar8 + 0x20) = lVar11;
                                                    uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_037ed5b0(uVar9,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonWriter_set_Formatting__
                                                  );
                                                  lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03313b6c(lVar11,0);
                                                  *(undefined4 *)(lVar11 + 0x10) = 0x2a;
                                                  uVar10 = FUN_037ea43c(7);
                                                  *(undefined4 *)(lVar11 + 0x14) = 0;
                                                  *(undefined8 *)(lVar11 + 0x18) = uVar10;
                                                  *(undefined8 *)(lVar11 + 0x20) = uVar9;
                                                  if (1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(long *)(lVar8 + 0x28) = lVar11;
                                                    uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_037ed5b0(uVar9,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonWriter_set_DateFormatHandling__
                                                  );
                                                  lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03313b6c(lVar11,0);
                                                  *(undefined4 *)(lVar11 + 0x10) = 0x2b;
                                                  uVar10 = FUN_037ea43c(0);
                                                  *(undefined4 *)(lVar11 + 0x14) = 0;
                                                  *(undefined8 *)(lVar11 + 0x18) = uVar10;
                                                  *(undefined8 *)(lVar11 + 0x20) = uVar9;
                                                  if (2 < *(uint *)(lVar8 + 0x18)) {
                                                    *(long *)(lVar8 + 0x30) = lVar11;
                                                    uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_037ed5b0(uVar9,0,*(undefined8 *)
                                                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonWriter_set_DateTimeZoneHandling__
                                                  );
                                                  lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                                                  FUN_03313b6c(lVar11,0);
                                                  *(undefined4 *)(lVar11 + 0x10) = 0x2c;
                                                  uVar10 = FUN_037ea43c(0);
                                                  *(undefined4 *)(lVar11 + 0x14) = 0;
                                                  *(undefined8 *)(lVar11 + 0x18) = uVar10;
                                                  *(undefined8 *)(lVar11 + 0x20) = uVar9;
                                                  if (3 < *(uint *)(lVar8 + 0x18)) {
                                                    *(long *)(lVar8 + 0x38) = lVar11;
                                                    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x58) =
                                                         lVar8;
                                                    lVar8 = FUN_01c5d2fc(*unaff_x25,4);
                                                    uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar2);
                                                    lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                                                    FUN_03313b6c(lVar11,0);
                                                    *(undefined4 *)(lVar11 + 0x10) = 0x29;
                                                    uVar10 = FUN_037ea43c(10);
                                                    *(undefined4 *)(lVar11 + 0x14) = 0;
                                                    *(undefined8 *)(lVar11 + 0x18) = uVar10;
                                                    *(undefined8 *)(lVar11 + 0x20) = uVar9;
                                                    if (lVar8 == 0) goto LAB_037ed5ac;
                                                    if (*(int *)(lVar8 + 0x18) != 0) {
                                                      *(long *)(lVar8 + 0x20) = lVar11;
                                                      uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                                                      FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar1);
                                                      lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                                                      FUN_03313b6c(lVar11,0);
                                                      *(undefined4 *)(lVar11 + 0x10) = 0x2a;
                                                      uVar10 = FUN_037ea43c(7);
                                                      *(undefined4 *)(lVar11 + 0x14) = 0;
                                                      *(undefined8 *)(lVar11 + 0x18) = uVar10;
                                                      *(undefined8 *)(lVar11 + 0x20) = uVar9;
                                                      if (1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(long *)(lVar8 + 0x28) = lVar11;
                                                        uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                                                        FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar3);
                                                        lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                                                        FUN_03313b6c(lVar11,0);
                                                        *(undefined4 *)(lVar11 + 0x10) = 0x2b;
                                                        uVar10 = FUN_037ea43c(0);
                                                        *(undefined4 *)(lVar11 + 0x14) = 0;
                                                        *(undefined8 *)(lVar11 + 0x18) = uVar10;
                                                        *(undefined8 *)(lVar11 + 0x20) = uVar9;
                                                        if (2 < *(uint *)(lVar8 + 0x18)) {
                                                          *(long *)(lVar8 + 0x30) = lVar11;
                                                          uVar9 = thunk_FUN_01c496e0(*unaff_x23);
                                                          FUN_037ed5b0(uVar9,0,*(undefined8 *)puVar4
                                                                      );
                                                          lVar11 = thunk_FUN_01c496e0(*unaff_x22);
                                                          FUN_03313b6c(lVar11,0);
                                                          *(undefined4 *)(lVar11 + 0x10) = 0x2c;
                                                          uVar10 = FUN_037ea43c(0);
                                                          *(undefined4 *)(lVar11 + 0x14) = 0;
                                                          *(undefined8 *)(lVar11 + 0x18) = uVar10;
                                                          *(undefined8 *)(lVar11 + 0x20) = uVar9;
                                                          if (3 < *(uint *)(lVar8 + 0x18)) {
                                                            *(long *)(lVar8 + 0x38) = lVar11;
                                                            puVar1 = 
                                                  Method_UnityEngine_LayerMask_GetMask__;
                                                  *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x60) =
                                                       lVar8;
                                                  puVar2 = 
                                                  Method_UnityEngine_JsonUtility_FromJson<DiagnosticEvent>__
                                                  ;
                                                  lVar8 = FUN_01c5d2fc(*(undefined8 *)puVar1,9);
                                                  uVar9 = **(undefined8 **)(*unaff_x24 + 0xb8);
                                                  lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03313b6c(lVar11,0);
                                                  *(undefined4 *)(lVar11 + 0x10) = 0;
                                                  *(undefined8 *)(lVar11 + 0x18) = uVar9;
                                                  *(undefined8 *)(lVar11 + 0x28) = 0;
                                                  *(undefined8 *)(lVar11 + 0x20) = 0;
                                                  *(undefined8 *)(lVar11 + 0x38) = 0;
                                                  *(undefined8 *)(lVar11 + 0x30) = 0;
                                                  *(undefined1 *)(lVar11 + 0x40) = 0;
                                                  if (lVar8 == 0) goto LAB_037ed5ac;
                                                  if (*(int *)(lVar8 + 0x18) != 0) {
                                                    *(long *)(lVar8 + 0x20) = lVar11;
                                                    puVar7 = 
                                                  Method_UnityEngine_UI_LayoutGroup_SetProperty<bool>__
                                                  ;
                                                  puVar6 = 
                                                  Method_System_Text_Latin1Encoding_GetMaxCharCount__
                                                  ;
                                                  puVar5 = 
                                                  Method_System_Text_Latin1Encoding_GetMaxByteCount__
                                                  ;
                                                  puVar4 = 
                                                  Method_System_Linq_Expressions_Interpreter_LabelInfo_FirstDefinition__
                                                  ;
                                                  puVar3 = 
                                                  Method_Newtonsoft_Json_JsonWriter_AutoComplete__;
                                                  puVar1 = 
                                                  Method_UnityEngine_JsonUtility_FromJson<RateMyAppDefaultController_ControllerStateInfo>__
                                                  ;
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*unaff_x24 + 0xb8) + 8);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*unaff_x24 + 0xb8) + 0x28);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_UI_LayoutGroup_SetProperty<bool>__
                                                  );
                                                  FUN_037ed74c(uVar9,0,*(undefined8 *)puVar5);
                                                  uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar1)
                                                  ;
                                                  FUN_037ed7ec(uVar10,0,*(undefined8 *)puVar3);
                                                  uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037ed888(uVar12,0,*(undefined8 *)puVar4);
                                                  lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03313b6c(lVar11,0);
                                                  *(undefined8 *)(lVar11 + 0x18) = uVar14;
                                                  *(undefined8 *)(lVar11 + 0x20) = uVar13;
                                                  *(undefined8 *)(lVar11 + 0x28) = uVar9;
                                                  *(undefined8 *)(lVar11 + 0x30) = uVar10;
                                                  *(undefined8 *)(lVar11 + 0x38) = uVar12;
                                                  *(undefined4 *)(lVar11 + 0x10) = 0x1f;
                                                  *(undefined1 *)(lVar11 + 0x40) = 0;
                                                  if (1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(long *)(lVar8 + 0x28) = lVar11;
                                                    puVar5 = 
                                                  Method_I2_Loc_LanguageSourceData_ApplyDownloadedDataOnSceneLoaded__
                                                  ;
                                                  puVar4 = Method_KillFeed_DisplayLeaveText__;
                                                  puVar3 = Method_UnityEngine_JsonUtility_ToJson__;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*(long *)
                                                  Method_System_Configuration_IgnoreSection_get_Properties__
                                                  + 0xb8) + 0x10);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*(long *)
                                                  Method_System_Configuration_IgnoreSection_get_Properties__
                                                  + 0xb8) + 0x30);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
                                                  FUN_037ed74c(uVar9,0,*(undefined8 *)puVar5);
                                                  uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar1)
                                                  ;
                                                  FUN_037ed7ec(uVar10,0,*(undefined8 *)puVar3);
                                                  uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037ed888(uVar12,0,*(undefined8 *)puVar4);
                                                  lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03313b6c(lVar11,0);
                                                  *(undefined8 *)(lVar11 + 0x18) = uVar13;
                                                  *(undefined8 *)(lVar11 + 0x20) = uVar14;
                                                  *(undefined8 *)(lVar11 + 0x28) = uVar9;
                                                  *(undefined8 *)(lVar11 + 0x30) = uVar10;
                                                  *(undefined8 *)(lVar11 + 0x38) = uVar12;
                                                  *(undefined4 *)(lVar11 + 0x10) = 0x20;
                                                  *(undefined1 *)(lVar11 + 0x40) = 0;
                                                  if (2 < *(uint *)(lVar8 + 0x18)) {
                                                    *(long *)(lVar8 + 0x30) = lVar11;
                                                    puVar5 = 
                                                  Method_System_Linq_Expressions_Interpreter_LabelInfo_ValidateJump__
                                                  ;
                                                  puVar4 = 
                                                  Method_UnityEngine_UIElements_KeyboardTextEditorEventHandler_OnNavigationEvent<NavigationMoveEvent>__
                                                  ;
                                                  puVar3 = 
                                                  Method_UnityEngine_JsonUtility_FromJson<RichPresenceManager_RichPresenceDeeplinkMessage>__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*(long *)
                                                  Method_System_Configuration_IgnoreSection_get_Properties__
                                                  + 0xb8) + 0x18);
                                                  uVar14 = *(undefined8 *)
                                                            (*(long *)(*(long *)
                                                  Method_System_Configuration_IgnoreSection_get_Properties__
                                                  + 0xb8) + 0x38);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
                                                  FUN_037ed74c(uVar9,0,*(undefined8 *)puVar5);
                                                  uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar1)
                                                  ;
                                                  FUN_037ed7ec(uVar10,0,*(undefined8 *)puVar3);
                                                  uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037ed888(uVar12,0,*(undefined8 *)puVar4);
                                                  lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03313b6c(lVar11,0);
                                                  *(undefined8 *)(lVar11 + 0x18) = uVar13;
                                                  *(undefined8 *)(lVar11 + 0x20) = uVar14;
                                                  *(undefined8 *)(lVar11 + 0x28) = uVar9;
                                                  *(undefined8 *)(lVar11 + 0x30) = uVar10;
                                                  *(undefined8 *)(lVar11 + 0x38) = uVar12;
                                                  *(undefined4 *)(lVar11 + 0x10) = 0x23;
                                                  *(undefined1 *)(lVar11 + 0x40) = 0;
                                                  if (3 < *(uint *)(lVar8 + 0x18)) {
                                                    *(long *)(lVar8 + 0x38) = lVar11;
                                                    puVar4 = 
                                                  Method_LaserPointer_OnInputFocusAcquired__;
                                                  puVar3 = 
                                                  Method_System_Linq_Expressions_Interpreter_LabelInfo_CommonNode<LabelScopeInfo>__
                                                  ;
                                                  puVar1 = 
                                                  Method_System_Configuration_IgnoreSection_get_Properties__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*(long *)
                                                  Method_System_Configuration_IgnoreSection_get_Properties__
                                                  + 0xb8) + 0x40);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
                                                  FUN_037ed74c(uVar9,0,*(undefined8 *)puVar4);
                                                  uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037ed888(uVar10,0,*(undefined8 *)puVar3);
                                                  lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03313b6c(lVar11,0);
                                                  *(undefined8 *)(lVar11 + 0x18) = 0;
                                                  *(undefined8 *)(lVar11 + 0x20) = uVar12;
                                                  *(undefined8 *)(lVar11 + 0x28) = uVar9;
                                                  *(undefined8 *)(lVar11 + 0x30) = 0;
                                                  *(undefined8 *)(lVar11 + 0x38) = uVar10;
                                                  *(undefined4 *)(lVar11 + 0x10) = 0x21;
                                                  *(undefined1 *)(lVar11 + 0x40) = 0;
                                                  if (4 < *(uint *)(lVar8 + 0x18)) {
                                                    *(long *)(lVar8 + 0x40) = lVar11;
                                                    puVar5 = 
                                                  Method_System_Linq_Expressions_LambdaExpression_GetParameter__
                                                  ;
                                                  puVar4 = 
                                                  Method_UnityEngine_UIElements_KeyboardTextEditorEventHandler_OnNavigationEvent<NavigationSubmitEvent>__
                                                  ;
                                                  puVar3 = Method_UnityEngine_JsonUtility_FromJson__
                                                  ;
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar1 + 0xb8) +
                                                            0x48);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
                                                  FUN_037ed74c(uVar9,0,*(undefined8 *)puVar5);
                                                  uVar10 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_JsonUtility_FromJson<RateMyAppDefaultController_ControllerStateInfo>__
                                                  );
                                                  FUN_037ed7ec(uVar10,0,*(undefined8 *)puVar3);
                                                  uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037ed888(uVar12,0,*(undefined8 *)puVar4);
                                                  lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03313b6c(lVar11,0);
                                                  *(undefined8 *)(lVar11 + 0x18) = 0;
                                                  *(undefined8 *)(lVar11 + 0x20) = uVar13;
                                                  *(undefined8 *)(lVar11 + 0x28) = uVar9;
                                                  *(undefined8 *)(lVar11 + 0x30) = uVar10;
                                                  *(undefined8 *)(lVar11 + 0x38) = uVar12;
                                                  *(undefined4 *)(lVar11 + 0x10) = 0x24;
                                                  *(undefined1 *)(lVar11 + 0x40) = 0;
                                                  if (5 < *(uint *)(lVar8 + 0x18)) {
                                                    *(long *)(lVar8 + 0x48) = lVar11;
                                                    puVar4 = Method_LaserPointer_OnInputFocusLost__;
                                                    puVar3 = 
                                                  Method_System_Linq_Expressions_Interpreter_LabelInfo_Define__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar1 + 0xb8) +
                                                            0x20);
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar1 + 0xb8) +
                                                            0x50);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
                                                  FUN_037ed74c(uVar9,0,*(undefined8 *)puVar4);
                                                  uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037ed888(uVar10,0,*(undefined8 *)puVar3);
                                                  lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03313b6c(lVar11,0);
                                                  *(undefined8 *)(lVar11 + 0x18) = uVar12;
                                                  *(undefined8 *)(lVar11 + 0x20) = uVar13;
                                                  *(undefined8 *)(lVar11 + 0x28) = uVar9;
                                                  *(undefined8 *)(lVar11 + 0x30) = 0;
                                                  *(undefined8 *)(lVar11 + 0x38) = uVar10;
                                                  *(undefined4 *)(lVar11 + 0x10) = 0x22;
                                                  *(undefined1 *)(lVar11 + 0x40) = 0;
                                                  if (6 < *(uint *)(lVar8 + 0x18)) {
                                                    *(long *)(lVar8 + 0x50) = lVar11;
                                                    puVar4 = 
                                                  Method_System_Linq_Expressions_LambdaExpression_get_ParameterCount__
                                                  ;
                                                  puVar3 = 
                                                  Method_System_Security_Cryptography_KeyedHashAlgorithm_set_Key__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar1 + 0xb8) +
                                                            0x58);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
                                                  FUN_037ed74c(uVar9,0,*(undefined8 *)puVar4);
                                                  uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037ed888(uVar10,0,*(undefined8 *)puVar3);
                                                  lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03313b6c(lVar11,0);
                                                  *(undefined8 *)(lVar11 + 0x18) = 0;
                                                  *(undefined8 *)(lVar11 + 0x20) = uVar12;
                                                  *(undefined8 *)(lVar11 + 0x28) = uVar9;
                                                  *(undefined8 *)(lVar11 + 0x30) = 0;
                                                  *(undefined8 *)(lVar11 + 0x38) = uVar10;
                                                  *(undefined4 *)(lVar11 + 0x10) = 0x25;
                                                  *(undefined1 *)(lVar11 + 0x40) = 1;
                                                  if (7 < *(uint *)(lVar8 + 0x18)) {
                                                    *(long *)(lVar8 + 0x58) = lVar11;
                                                    puVar4 = 
                                                  Method_System_Linq_Expressions_Interpreter_LabelInfo_ValidateFinish__
                                                  ;
                                                  puVar3 = 
                                                  Method_UnityEngine_UIElements_KeyboardTextEditorEventHandler_OnNavigationEvent<NavigationCancelEvent>__
                                                  ;
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(*(long *)puVar1 + 0xb8) +
                                                            0x60);
                                                  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
                                                  FUN_037ed74c(uVar9,0,*(undefined8 *)puVar4);
                                                  uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037ed888(uVar10,0,*(undefined8 *)puVar3);
                                                  lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03313b6c(lVar11,0);
                                                  *(undefined4 *)(lVar11 + 0x10) = 0x25;
                                                  *(undefined8 *)(lVar11 + 0x18) = 0;
                                                  *(undefined8 *)(lVar11 + 0x20) = uVar12;
                                                  *(undefined8 *)(lVar11 + 0x28) = uVar9;
                                                  *(undefined8 *)(lVar11 + 0x30) = 0;
                                                  *(undefined8 *)(lVar11 + 0x38) = uVar10;
                                                  *(undefined1 *)(lVar11 + 0x40) = 1;
                                                  if (8 < *(uint *)(lVar8 + 0x18)) {
                                                    *(long *)(lVar8 + 0x60) = lVar11;
                                                    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) +
                                                             0x68) = lVar8;
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
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


