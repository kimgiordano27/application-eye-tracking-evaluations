/*
FUNCTION_NAME: FUN_061dbe48
ENTRY_POINT: 061dbe48
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8
*/


void FUN_061dbe48(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((DAT_076dde0c & 1) == 0) {
    thunk_FUN_032e1da0(
                      System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<AssetType,_List<PartnerAsset>>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Collections_Generic_List<Selectable>_TypeInfo);
    DAT_076dde0c = 1;
  }
  puVar2 = System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo;
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 0x138);
    if (plVar4 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)
                         System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo
                       + 0x130);
      if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo))
      {
        uVar3 = FUN_061d8d24(param_1,param_2,
                             *(undefined8 *)
                              System_Collections_Generic_Dictionary<AssetType,_List<PartnerAsset>>_TypeInfo
                            );
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
          FUN_061a1edc(plVar4,uVar3,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar4);
      }
    }
    FUN_061d662c(param_1,*(undefined8 *)System_Collections_Generic_List<Selectable>_TypeInfo,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<AssetType,_List<PartnerAsset>>_TypeInfo);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


