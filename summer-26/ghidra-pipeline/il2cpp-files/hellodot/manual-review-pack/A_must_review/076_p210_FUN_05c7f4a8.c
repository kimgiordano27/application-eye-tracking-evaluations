/*
FUNCTION_NAME: FUN_05c7f4a8
ENTRY_POINT: 05c7f4a8
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05c7f4a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar4 = Niantic_Peridot_Telemetry_BehaviorStart_var;
  puVar3 = Niantic_Peridot_Telemetry_BehaviorInterrupt_var;
  puVar2 = PTR_DAT_065defd8;
  puVar1 = PTR_DAT_065defd0;
  if ((DAT_06a79f42 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065defd8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065defd0);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Api_BehaviorTreeConfig_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Numerics_BigInteger_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_IO_BinaryWriter_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(Zenject_BindingId_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Telemetry_BehaviorStart_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Collections_BitArray_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Telemetry_BehaviorInterrupt_var);
    DAT_06a79f42 = 1;
  }
  FUN_04f7383c(param_1,0);
  uVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
            (uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  lVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
  FUN_05ca100c(lVar6,0);
  *(long *)(param_1 + 0x10) = lVar6;
  uVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
  FUN_05c8dd00(uVar5,0);
  puVar1 = Zenject_BindingId_var;
  if (lVar6 != 0) {
    FUN_05ca1f6c(lVar6,uVar5,0);
    lVar6 = *(long *)(param_1 + 0x10);
    uVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
    FUN_05c7dbd4();
    puVar1 = System_IO_BinaryWriter_var;
    if (lVar6 != 0) {
      FUN_05ca1f6c(lVar6,uVar5,0);
      lVar6 = *(long *)(param_1 + 0x10);
      uVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
      FUN_05c7d7dc();
      puVar1 = System_Numerics_BigInteger_var;
      if (lVar6 != 0) {
        FUN_05ca1f6c(lVar6,uVar5,0);
        lVar6 = *(long *)(param_1 + 0x10);
        uVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
        FUN_05c9c73c(uVar5,0);
        puVar1 = Niantic_Peridot_Api_BehaviorTreeConfig_var;
        if (lVar6 != 0) {
          FUN_05ca1f6c(lVar6,uVar5,0);
          lVar6 = *(long *)(param_1 + 0x10);
          uVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
          FUN_05c9c73c(uVar5,0);
          if (lVar6 != 0) {
            FUN_05ca1f6c(lVar6,uVar5,0);
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x58), lVar6 != 0)) {
              FUN_0356a194(lVar6,*(undefined8 *)(param_1 + 0x18),
                           *(undefined8 *)System_Collections_BitArray_var);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


