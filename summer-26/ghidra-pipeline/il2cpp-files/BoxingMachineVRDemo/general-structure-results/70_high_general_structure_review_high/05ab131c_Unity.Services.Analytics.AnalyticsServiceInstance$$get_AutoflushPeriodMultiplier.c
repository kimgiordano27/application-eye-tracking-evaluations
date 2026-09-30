/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsServiceInstance$$get_AutoflushPeriodMultiplier
ENTRY_POINT: 05ab131c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Analytics_AnalyticsServiceInstance__get_AutoflushPeriodMultiplier(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long *plVar6;
  long unaff_x21;
  
  plVar6 = (long *)(unaff_x20 + 0x48);
  *plVar6 = unaff_x21;
  thunk_FUN_02dd37b4(plVar6);
  if (*plVar6 != 0) {
    FUN_034b1920(*plVar6,1,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TryGetValue__
                );
    if (*plVar6 != 0) {
      FUN_034b1920(*plVar6,3,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_MetaOpenXRPassthroughLayer_PassthroughDataContainer>_Add__
                  );
      if (*plVar6 != 0) {
        FUN_034b1920(*plVar6,3,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_set_Item__
                    );
        if (*plVar6 != 0) {
          FUN_034b1830(*plVar6,0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_ContainsKey__
                      );
          if (*plVar6 != 0) {
            FUN_034b1920(*plVar6,1,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<int,_MetaOpenXRPassthroughLayer_PassthroughDataContainer>__ctor__
                        );
            puVar4 = Method_System_Collections_Generic_Dictionary<int,_Future_Query_Action>__ctor__;
            puVar3 = PTR_DAT_06762d70;
            puVar2 = PTR_DAT_06761158;
            puVar1 = PTR_DAT_06761148;
            if (*plVar6 != 0) {
              FUN_034b1830(*plVar6,0,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_Remove__
                          );
              uVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
              FUN_043e7948();
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              puVar2 = 
              Method_System_Collections_Generic_Dictionary<int,_Future_QuerySnapshot_Action>_Remove__
              ;
              puVar1 = PTR_DAT_06762cd8;
              FUN_06080900(uVar5,0);
              uVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
              FUN_047daf30();
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_060a1720(uVar5,0);
              uVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
              FUN_047daf30();
              FUN_060a1908(uVar5,0);
              uVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
              FUN_047daf30();
              FUN_060a1af0(uVar5,0);
              uVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
              FUN_047daf30();
              FUN_060a1cd8(uVar5,0);
              FUN_06035944(*(undefined8 *)puVar2,0);
              FUN_05ab0370();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


