/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_ReferenceLoopHandling
ENTRY_POINT: 05ea14dc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ReferenceLoopHandling(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  puVar1 = PTR_DAT_079f4558;
  if ((DAT_07edf208 & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4558);
    FUN_03642964(PTR_DAT_07a18270);
    DAT_07edf208 = 1;
  }
  plVar2 = (long *)FUN_03642a4c(*(undefined8 *)puVar1,4);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if ((lVar5 != 0) &&
     (lVar3 = thunk_FUN_0367fd24(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_05ea1668:
    uVar4 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar4,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar5;
    thunk_FUN_036b7ad0(plVar2 + 4,lVar5);
    lVar5 = FUN_05ea0fd4(param_1);
    if ((lVar5 != 0) &&
       (lVar3 = thunk_FUN_0367fd24(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
    goto LAB_05ea1668;
    if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
      plVar2[5] = lVar5;
      thunk_FUN_036b7ad0(plVar2 + 5,lVar5);
      puVar1 = PTR_DAT_079f4610;
      uStack000000000000000c = *(undefined4 *)(param_1 + 0x3c);
      lVar5 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x48),(long)&stack0x00000008 + 4
                                );
      if ((lVar5 != 0) &&
         (lVar3 = thunk_FUN_0367fd24(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
      goto LAB_05ea1668;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar5;
        thunk_FUN_036b7ad0(plVar2 + 6,lVar5);
        uStack0000000000000008 = *(undefined4 *)(param_1 + 0x1c);
        lVar5 = thunk_FUN_0367fa58(*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
        if ((lVar5 != 0) &&
           (lVar3 = thunk_FUN_0367fd24(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
        goto LAB_05ea1668;
        puVar1 = PTR_DAT_07a18270;
        if ((*(uint *)(plVar2 + 3) & 0xfffffffc) != 0) {
          plVar2[7] = lVar5;
          thunk_FUN_036b7ad0(plVar2 + 7,lVar5);
          FUN_05c98bb4(*(undefined8 *)puVar1,plVar2,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


