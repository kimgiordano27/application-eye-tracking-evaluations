/*
FUNCTION_NAME: FUN_05c5161c
ENTRY_POINT: 05c5161c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05c5161c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = Method_System_Runtime_Diagnostics_DiagnosticsEventProvider_EtwEnableCallBack__;
  puVar2 = Method_System_Diagnostics_DiagnosticsConfigurationHandler_Create__;
  puVar1 = Method_System_Diagnostics_DiagnosticsConfigurationHandler__ctor__;
  if ((DAT_06bc2f0c & 1) == 0) {
    FUN_02f08768(Method_System_Diagnostics_DiagnosticsConfigurationHandler__ctor__);
    FUN_02f08768(Method_System_Runtime_Diagnostics_DiagnosticsEventProvider_EtwEnableCallBack__);
    FUN_02f08768(Method_System_Diagnostics_DiagnosticsConfigurationHandler_Create__);
    FUN_02f08768(Method_System_Runtime_Diagnostics_DiagnosticsEventProvider_EtwRegister__);
    FUN_02f08768(Method_Newtonsoft_Json_Serialization_DiagnosticsTraceWriter_GetTraceEventType__);
    FUN_02f08768(Method_Unity_AppUI_UI_Dialog_OnCloseButtonClicked__);
    FUN_02f08768(Method_Unity_AppUI_UI_DialogTrigger_OnActionTriggered__);
    FUN_02f08768(Method_Unity_AppUI_UI_DialogTrigger_OnGeometryChanged__);
    FUN_02f08768(Method_System_Runtime_Serialization_DictionaryGlobals__cctor__);
    FUN_02f08768(Method_System_Net_DigestSession_Authenticate__);
    FUN_02f08768(Method_System_IO_Directory_CreateDirectory__);
    FUN_02f08768(Method_System_IO_Directory_InsecureGetCurrentDirectory__);
    DAT_06bc2f0c = 1;
  }
  uVar4 = FUN_02f0880c(*(undefined8 *)puVar1,9);
  uVar7 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  uVar4 = FUN_02f0880c(uVar7,9);
  uVar7 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  lVar5 = thunk_FUN_02f45270(uVar7);
  FUN_05116b38(lVar5,0);
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (uVar4 = FUN_05a7be68(*(long *)(param_1 + 0x20),
                           *(undefined8 *)Method_System_IO_Directory_CreateDirectory__,0,0),
     lVar5 != 0)) {
    *(undefined8 *)(lVar5 + 0x10) = uVar4;
    *(undefined4 *)(lVar5 + 0x18) = 0;
    FUN_05c51a04(param_1,0,lVar5);
    lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
    FUN_05116b38(lVar5,0);
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar4 = FUN_05a7be68(*(long *)(param_1 + 0x20),
                             *(undefined8 *)Method_Unity_AppUI_UI_DialogTrigger_OnActionTriggered__,
                             0,0), lVar5 != 0)) {
      *(undefined8 *)(lVar5 + 0x10) = uVar4;
      *(undefined4 *)(lVar5 + 0x18) = 0;
      FUN_05c51a04(param_1,8,lVar5);
      lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
      FUN_05116b38(lVar5,0);
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (uVar4 = FUN_05a7be68(*(long *)(param_1 + 0x20),
                               *(undefined8 *)
                                Method_System_Runtime_Serialization_DictionaryGlobals__cctor__,0,0),
         lVar5 != 0)) {
        *(undefined8 *)(lVar5 + 0x10) = uVar4;
        *(undefined4 *)(lVar5 + 0x18) = 0;
        FUN_05c51a04(param_1,2,lVar5);
        lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
        FUN_05116b38(lVar5,0);
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (uVar4 = FUN_05a7be68(*(long *)(param_1 + 0x20),
                                 *(undefined8 *)
                                  Method_Unity_AppUI_UI_DialogTrigger_OnGeometryChanged__,0,0),
           lVar5 != 0)) {
          *(undefined8 *)(lVar5 + 0x10) = uVar4;
          *(undefined4 *)(lVar5 + 0x18) = 0;
          FUN_05c51a04(param_1,1,lVar5);
          lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
          FUN_05116b38(lVar5,0);
          if ((*(long *)(param_1 + 0x20) != 0) &&
             (uVar4 = FUN_05a7be68(*(long *)(param_1 + 0x20),
                                   *(undefined8 *)
                                    Method_Unity_AppUI_UI_Dialog_OnCloseButtonClicked__,0,0),
             lVar5 != 0)) {
            *(undefined8 *)(lVar5 + 0x10) = uVar4;
            *(undefined4 *)(lVar5 + 0x18) = 0;
            FUN_05c51a04(param_1,3,lVar5);
            lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
            FUN_05116b38(lVar6,0);
            if ((*(long *)(param_1 + 0x20) != 0) &&
               (uVar4 = FUN_05a7be68(*(long *)(param_1 + 0x20),
                                     *(undefined8 *)
                                      Method_Newtonsoft_Json_Serialization_DiagnosticsTraceWriter_GetTraceEventType__
                                     ,0,0), lVar6 != 0)) {
              *(undefined8 *)(lVar6 + 0x10) = uVar4;
              *(undefined4 *)(lVar6 + 0x18) = 0;
              FUN_05c51a04(param_1,4,lVar6);
              lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
              FUN_05116b38(lVar6,0);
              if ((*(long *)(param_1 + 0x20) != 0) &&
                 (uVar4 = FUN_05a7be68(*(long *)(param_1 + 0x20),
                                       *(undefined8 *)Method_System_Net_DigestSession_Authenticate__
                                       ,0,0), lVar6 != 0)) {
                *(undefined8 *)(lVar6 + 0x10) = uVar4;
                *(undefined4 *)(lVar6 + 0x18) = 1;
                *(undefined4 *)(lVar5 + 0x1c) = 0;
                FUN_05c51a04(param_1,7,lVar6);
                lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                FUN_05116b38(lVar5,0);
                if ((*(long *)(param_1 + 0x20) != 0) &&
                   (uVar4 = FUN_05a7be68(*(long *)(param_1 + 0x20),
                                         *(undefined8 *)
                                          Method_System_Runtime_Diagnostics_DiagnosticsEventProvider_EtwRegister__
                                         ,0,0), lVar5 != 0)) {
                  *(undefined8 *)(lVar5 + 0x10) = uVar4;
                  *(undefined8 *)(lVar5 + 0x18) = 0x3e23d70a00000001;
                  FUN_05c51a04(param_1,5,lVar5);
                  lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                  FUN_05116b38(lVar5,0);
                  if ((*(long *)(param_1 + 0x20) != 0) &&
                     (uVar4 = FUN_05a7be68(*(long *)(param_1 + 0x20),
                                           *(undefined8 *)
                                            Method_System_IO_Directory_InsecureGetCurrentDirectory__
                                           ,0,0), lVar5 != 0)) {
                    *(undefined8 *)(lVar5 + 0x10) = uVar4;
                    *(undefined8 *)(lVar5 + 0x18) = 0x3e23d70a00000001;
                    FUN_05c51a04(param_1,6,lVar5);
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


