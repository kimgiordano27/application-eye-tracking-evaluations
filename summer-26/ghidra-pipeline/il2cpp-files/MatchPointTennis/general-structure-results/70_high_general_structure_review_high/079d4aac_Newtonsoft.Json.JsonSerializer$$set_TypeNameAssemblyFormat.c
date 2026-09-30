/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_TypeNameAssemblyFormat
ENTRY_POINT: 079d4aac
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_TypeNameAssemblyFormat
               (long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_0a524d41 & 1) == 0) {
                    /* try { // try from 079d4ad4 to 07ad4ad7 has its CatchHandler @ 079d4ae8 */
                    /* try { // try from 079d4ad8 to 07ad4aff has its CatchHandler @ 079d4a14 */
    FUN_04447ba8(PTR_DAT_09f42c88);
    DAT_0a524d41 = 1;
  }
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 079d4aa4 with catch @ 079d4ae4
                        */
  if (param_2 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar3 = thunk_FUN_0448520c();
    uVar6 = thunk_FUN_044adef4(PTR_DAT_09f22398);
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09f42c78);
    FUN_0799eb50(uVar3,uVar6,uVar4,0);
    uVar6 = thunk_FUN_044adef4(PTR_DAT_09f42ca8);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar3,uVar6);
  }
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 079d4ad4 with catch @ 079d4ae8
                        */
  lVar5 = *(long *)(param_1 + 0x10);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if (lVar5 == 0) {
    lVar7 = 0;
  }
  else {
    do {
      lVar7 = lVar5;
                    /* try { // try from 079d4b00 to 07ad4b33 has its CatchHandler @ 079d4b7c */
      plVar1 = *(long **)(lVar7 + 0x10);
      if (plVar1 == (long *)0x0) goto LAB_079d4ba8;
      uVar2 = (**(code **)(*plVar1 + 0x138))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x140));
      if ((uVar2 & 1) != 0) {
        uVar6 = *(undefined8 *)(lVar7 + 0x10);
        uVar3 = thunk_FUN_044adef4(PTR_DAT_09f42ca0);
        uVar3 = FUN_07895cb8(uVar3,uVar6,param_2,0);
        thunk_FUN_044adef4(PTR_DAT_09f217f8);
        uVar6 = thunk_FUN_0448520c();
        FUN_0799d598(uVar6,uVar3,0);
        uVar3 = thunk_FUN_044adef4(PTR_DAT_09f42ca8);
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar6,uVar3);
      }
      lVar5 = *(long *)(lVar7 + 0x20);
    } while (*(long *)(lVar7 + 0x20) != 0);
  }
  lVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f42c88);
  FUN_07a80df4(lVar5,0);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = param_2;
    thunk_FUN_044bb4b4((long *)(lVar5 + 0x10),param_2);
    *(undefined8 *)(lVar5 + 0x18) = param_3;
    thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x18),param_3);
    plVar1 = (long *)(param_1 + 0x10);
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 0x20);
    }
    *plVar1 = lVar5;
    thunk_FUN_044bb4b4(plVar1,lVar5);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return;
  }
LAB_079d4ba8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


