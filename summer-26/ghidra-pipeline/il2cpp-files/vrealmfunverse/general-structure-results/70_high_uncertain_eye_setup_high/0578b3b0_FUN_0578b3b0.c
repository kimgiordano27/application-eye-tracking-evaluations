/*
FUNCTION_NAME: FUN_0578b3b0
ENTRY_POINT: 0578b3b0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0578b3b0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  puVar1 = Method_System_Collections_Generic_List<LigatureSubstitutionRecord>_Add__;
  if ((DAT_066d2743 & 1) == 0) {
    FUN_02b3c81c(Method_System_Collections_Generic_List<LigatureSubstitutionRecord>_Clear__);
    FUN_02b3c81c(OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_IDebugPanelChangeReceiver_TypeInfo);
    FUN_02b3c81c(Method_System_Collections_Generic_List<LigatureSubstitutionRecord>_GetEnumerator__)
    ;
    FUN_02b3c81c(Method_System_Collections_Generic_List<LigatureSubstitutionRecord>_get_Count__);
    FUN_02b3c81c(OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo);
    FUN_02b3c81c(Method_System_Collections_Generic_List<LigatureSubstitutionRecord>_get_Item__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<LigatureSubstitutionRecord>__ctor__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<LigatureSubstitutionRecord>_Add__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<Canvas>_get_Count__);
    FUN_02b3c81c(Method_System_Collections_Generic_KeyValuePair<uint,_Character>_get_Key__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<LigatureSubstitutionRecord>_Clear__);
    FUN_02b3c81c(PTR_DAT_06317b00);
    FUN_02b3c81c(Method_System_Collections_Generic_List<LigatureSubstitutionRecord>_Add__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<LigatureSubstitutionRecord>_GetEnumerator__)
    ;
    FUN_02b3c81c(Method_System_Collections_Generic_List<LigatureSubstitutionRecord>_get_Count__);
    DAT_066d2743 = 1;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  FUN_04dbdb8c(param_1,0);
  lVar2 = FUN_056e313c(*(undefined8 *)puVar1,0);
  plVar4 = (long *)(param_1 + 0x10);
  *plVar4 = lVar2;
  thunk_FUN_02bb0e9c(plVar4,lVar2);
  if (*plVar4 != 0) {
    lVar2 = FUN_056e34e8(*plVar4,*(undefined8 *)PTR_DAT_06317b00,1,0);
    plVar4 = (long *)(param_1 + 0x18);
    *plVar4 = lVar2;
    thunk_FUN_02bb0e9c(plVar4,lVar2);
    if (*plVar4 != 0) {
      uVar3 = FUN_056e31f4(*plVar4,*(undefined8 *)
                                    UnityEngine_UIElements_IDebugPanelChangeReceiver_TypeInfo,1,0);
      *(undefined8 *)(param_1 + 0x28) = uVar3;
      thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x28),uVar3);
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar3 = FUN_056e31f4(*(long *)(param_1 + 0x18),
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<LigatureSubstitutionRecord>_get_Count__
                             ,1,0);
        *(undefined8 *)(param_1 + 0x30) = uVar3;
        thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x30),uVar3);
        if (*(long *)(param_1 + 0x18) != 0) {
          uVar3 = FUN_056e31f4(*(long *)(param_1 + 0x18),
                               *(undefined8 *)
                                Method_System_Collections_Generic_List<LigatureSubstitutionRecord>_GetEnumerator__
                               ,1,0);
          *(undefined8 *)(param_1 + 0x38) = uVar3;
          thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x38),uVar3);
          if (*(long *)(param_1 + 0x10) != 0) {
            lVar2 = FUN_056e34e8(*(long *)(param_1 + 0x10),
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_KeyValuePair<uint,_Character>_get_Key__
                                 ,1,0);
            plVar4 = (long *)(param_1 + 0x40);
            *plVar4 = lVar2;
            thunk_FUN_02bb0e9c(plVar4,lVar2);
            if (*plVar4 != 0) {
              uVar3 = FUN_056e31f4(*plVar4,*(undefined8 *)
                                            Method_System_Collections_Generic_List<LigatureSubstitutionRecord>_Clear__
                                   ,1,0);
              *(undefined8 *)(param_1 + 0x50) = uVar3;
              thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x50),uVar3);
              if (*(long *)(param_1 + 0x40) != 0) {
                uVar3 = FUN_056e31f4(*(long *)(param_1 + 0x40),
                                     *(undefined8 *)
                                      OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo,1,0);
                *(undefined8 *)(param_1 + 0x58) = uVar3;
                thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x58),uVar3);
                if (*(long *)(param_1 + 0x40) != 0) {
                  uVar3 = FUN_056e31f4(*(long *)(param_1 + 0x40),
                                       *(undefined8 *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo,1
                                       ,0);
                  *(undefined8 *)(param_1 + 0x60) = uVar3;
                  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x60),uVar3);
                  if (*(long *)(param_1 + 0x40) != 0) {
                    uVar3 = FUN_056e31f4(*(long *)(param_1 + 0x40),
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_List<Canvas>_get_Count__
                                         ,1,0);
                    *(undefined8 *)(param_1 + 0x68) = uVar3;
                    thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x68),uVar3);
                    if (*(long *)(param_1 + 0x40) != 0) {
                      uVar3 = FUN_056e31f4(*(long *)(param_1 + 0x40),
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List<LigatureSubstitutionRecord>_GetEnumerator__
                                           ,1,0);
                      *(undefined8 *)(param_1 + 0x70) = uVar3;
                      thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x70),uVar3);
                      if (*(long *)(param_1 + 0x40) != 0) {
                        uVar3 = FUN_056e31f4(*(long *)(param_1 + 0x40),
                                             *(undefined8 *)
                                              Method_System_Collections_Generic_List<LigatureSubstitutionRecord>_Add__
                                             ,1,0);
                        *(undefined8 *)(param_1 + 0x78) = uVar3;
                        thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x78),uVar3);
                        if (*(long *)(param_1 + 0x40) != 0) {
                          uVar3 = FUN_056e31f4(*(long *)(param_1 + 0x40),
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_List<LigatureSubstitutionRecord>__ctor__
                                               ,1,0);
                          *(undefined8 *)(param_1 + 0x80) = uVar3;
                          thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x80),uVar3);
                          if (*(long *)(param_1 + 0x40) != 0) {
                            uVar3 = FUN_056e31f4(*(long *)(param_1 + 0x40),
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_List<LigatureSubstitutionRecord>_get_Count__
                                                 ,1,0);
                            *(undefined8 *)(param_1 + 0x88) = uVar3;
                            thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x88),uVar3);
                            if (*(long *)(param_1 + 0x40) != 0) {
                              uVar3 = FUN_056e31f4(*(long *)(param_1 + 0x40),
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_List<LigatureSubstitutionRecord>_get_Item__
                                                  ,1,0);
                              *(undefined8 *)(param_1 + 0x90) = uVar3;
                              thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x90),uVar3);
                              if (*(long *)(param_1 + 0x40) != 0) {
                                uVar3 = FUN_056e31f4(*(long *)(param_1 + 0x40),
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_Generic_List<LigatureSubstitutionRecord>_Clear__
                                                  ,1,0);
                                *(undefined8 *)(param_1 + 0x98) = uVar3;
                                thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x98),uVar3);
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
  FUN_02b3cac4();
}


