/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateDictionary
ENTRY_POINT: 050cb158
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateDictionary(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  puVar1 = UnityEngine_EnumData_var;
  uVar2 = FUN_02f0880c(*unaff_x21,0x12);
  FUN_05009b54(uVar2,*(undefined8 *)puVar1,0);
  if (5 < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
    puVar1 = System_Reflection_ExceptionHandlingClause_var;
    uVar2 = FUN_02f0880c(*unaff_x21,0x12);
    FUN_05009b54(uVar2,*(undefined8 *)puVar1,0);
    if (6 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x50) = uVar2;
      puVar1 = UnityEngine_UIElements_EventBase_var;
      uVar2 = FUN_02f0880c(*unaff_x21,0x12);
      FUN_05009b54(uVar2,*(undefined8 *)puVar1,0);
      if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff8) != 0) {
        *(undefined8 *)(unaff_x19 + 0x58) = uVar2;
        puVar1 = UnityEngine_EventSystems_EventSystem_var;
        uVar2 = FUN_02f0880c(*unaff_x21,0x12);
        FUN_05009b54(uVar2,*(undefined8 *)puVar1,0);
        if (8 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x60) = uVar2;
          puVar1 = System_Text_Encoding_var;
          uVar2 = FUN_02f0880c(*unaff_x21,0x12);
          FUN_05009b54(uVar2,*(undefined8 *)puVar1,0);
          if (9 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
            puVar1 = System_ComponentModel_EnumConverter_var;
            uVar2 = FUN_02f0880c(*unaff_x21,0x12);
            FUN_05009b54(uVar2,*(undefined8 *)puVar1,0);
            if (10 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x70) = uVar2;
              puVar1 = System_Runtime_Serialization_EnumMemberAttribute_var;
              uVar2 = FUN_02f0880c(*unaff_x21,0x12);
              FUN_05009b54(uVar2,*(undefined8 *)puVar1,0);
              if (0xb < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0x78) = uVar2;
                puVar1 = System_Text_EncoderFallback_var;
                uVar2 = FUN_02f0880c(*unaff_x21,0x12);
                FUN_05009b54(uVar2,*(undefined8 *)puVar1,0);
                if (0xc < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0x80) = uVar2;
                  puVar1 = Newtonsoft_Json_Serialization_ErrorContext_var;
                  uVar2 = FUN_02f0880c(*unaff_x21,0x12);
                  FUN_05009b54(uVar2,*(undefined8 *)puVar1,0);
                  if (0xd < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0x88) = uVar2;
                    puVar1 = System_ComponentModel_EventDescriptor_var;
                    uVar2 = FUN_02f0880c(*unaff_x21,0x12);
                    FUN_05009b54(uVar2,*(undefined8 *)puVar1,0);
                    if (0xe < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 0x90) = uVar2;
                      puVar1 = System_Collections_Generic_EnumEqualityComparer<T>_var;
                      uVar2 = FUN_02f0880c(*unaff_x21,0x12);
                      FUN_05009b54(uVar2,*(undefined8 *)puVar1,0);
                      if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff0) != 0) {
                        *(undefined8 *)(unaff_x19 + 0x98) = uVar2;
                        puVar1 = UnityEngine_UIElements_EventDispatcherGate_var;
                        uVar2 = FUN_02f0880c(*unaff_x21,0x12);
                        FUN_05009b54(uVar2,*(undefined8 *)puVar1,0);
                        if (0x10 < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined8 *)(unaff_x19 + 0xa0) = uVar2;
                          puVar1 = UnityEngine_ExecuteAlways_var;
                          uVar2 = FUN_02f0880c(*unaff_x21,0x12);
                          FUN_05009b54(uVar2,*(undefined8 *)puVar1,0);
                          if (0x11 < *(uint *)(unaff_x19 + 0x18)) {
                            *(undefined8 *)(unaff_x19 + 0xa8) = uVar2;
                            puVar1 = UnityEngine_ExecuteInEditMode_var;
                            uVar2 = FUN_02f0880c(*unaff_x21,0x12);
                            FUN_05009b54(uVar2,*(undefined8 *)puVar1,0);
                            if (0x12 < *(uint *)(unaff_x19 + 0x18)) {
                              *(undefined8 *)(unaff_x19 + 0xb0) = uVar2;
                              puVar1 = UnityEngine_InputForUI_EventSanitizer_var;
                              uVar2 = FUN_02f0880c(*unaff_x21,0x12);
                              FUN_05009b54(uVar2,*(undefined8 *)puVar1,0);
                              puVar1 = PTR_DAT_067db0e0;
                              if (0x13 < *(uint *)(unaff_x19 + 0x18)) {
                                *(undefined8 *)(unaff_x19 + 0xb8) = uVar2;
                                *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = unaff_x19;
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
  FUN_02f089d0();
}


