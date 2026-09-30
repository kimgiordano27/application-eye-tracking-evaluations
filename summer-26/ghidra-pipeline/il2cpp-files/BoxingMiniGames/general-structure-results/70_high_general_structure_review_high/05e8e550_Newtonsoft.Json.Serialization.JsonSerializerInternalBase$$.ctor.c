/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$.ctor
ENTRY_POINT: 05e8e550
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5,
               uint param_6,undefined8 param_7)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = param_4;
  if ((DAT_07edf144 & 1) == 0) {
    FUN_03642964(PTR_DAT_079fd0e8);
    FUN_03642964(PTR_DAT_079fd118);
    DAT_07edf144 = 1;
  }
  *(undefined8 *)(param_1 + 0x18) = param_2;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x18),param_2);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x20),param_3);
  *(undefined8 *)(param_1 + 0x28) = param_7;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x28),param_7);
  if ((param_5 & 0xffffffa0) == 0) {
    uVar2 = param_6 | param_5;
    if (*(long *)(param_1 + 0x18) == 0 || (param_6 & 0x200) != 0) {
      uVar2 = param_6 | param_5 | 0x2000000;
    }
    thunk_FUN_03650fbc();
    *(uint *)(param_1 + 0x38) = uVar2;
    if ((((param_5 >> 2 & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) &&
       (uVar2 = FUN_05e8ec6c(), (uVar2 >> 3 & 1) == 0)) {
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_05e8e804();
    }
    if (*(int *)(*(long *)PTR_DAT_079fd0e8 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    puVar1 = PTR_DAT_079fd118;
    uVar3 = FUN_05e7b18c(&stack0x00000008,0);
    if ((uVar3 & 1) != 0) {
      FUN_05e8e878(param_1,uStack0000000000000008,0,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar4 = FUN_05e7b5e0(0);
    FUN_05e8eb7c(param_1,uVar4);
    return;
  }
  thunk_FUN_036aa1c8(PTR_DAT_079fb6d0);
  uVar4 = thunk_FUN_0367fe20();
  uVar5 = thunk_FUN_036aa1c8(PTR_DAT_07a17ab8);
  FUN_05d862e8(uVar4,uVar5,0);
  uVar5 = thunk_FUN_036aa1c8(PTR_DAT_07a17ac8);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar4,uVar5);
}


