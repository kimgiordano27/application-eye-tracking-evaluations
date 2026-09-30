/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_OnDeserializedCallbacks
ENTRY_POINT: 05dd752c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonContract__get_OnDeserializedCallbacks(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x20;
  long lVar5;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 05dd752c to 05ed7533 has its CatchHandler @ 05dd7574 */
  uVar1 = FUN_05d25fd4(param_1,0);
                    /* try { // try from 05dd7534 to 05ed756f has its CatchHandler @ 05dd7494 */
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)(*unaff_x20 + 0x1b8))();
    if ((uVar1 & 1) == 0) {
      thunk_FUN_03257e30(PTR_DAT_0759b208);
      uVar4 = thunk_FUN_0322f148();
      puVar2 = PTR_DAT_075eb8f8;
    }
    else {
      uVar1 = (**(code **)(*unaff_x20 + 0x1d8))();
      puVar2 = PTR_DAT_075e2eb0;
      if ((uVar1 & 1) != 0) {
        if (unaff_x19 < 0) {
          thunk_FUN_03257e30(PTR_DAT_0759e028);
          uVar4 = thunk_FUN_0322f148();
          uVar3 = thunk_FUN_03257e30(PTR_DAT_075eba10);
          FUN_05d7734c(uVar4,uVar3,0);
        }
        else {
                    /* try { // try from 05dd7570 to 05ed7573 has its CatchHandler @ 05dd7578 */
          FUN_05dd585c();
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05dd752c with catch @ 05dd7574
                       try { // try from 05dd7574 to 05ed7593 has its CatchHandler @ 05dd7494 */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05dd7570 with catch @ 05dd7578
                        */
          lVar5 = unaff_x20[7];
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05dd74f0 with catch @ 05dd757c
                        */
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
                    /* try { // try from 05dd7594 to 05ed7597 has its CatchHandler @ 05dd75a8 */
          FUN_05dd76ec(lVar5);
          if (in_stack_00000008._4_4_ == 0) {
                    /* catch() { ... } // from try @ 05dd7594 with catch @ 05dd75a8 */
            lVar5 = (**(code **)(*unaff_x20 + 0x1f8))();
            if (unaff_x19 < lVar5) {
              (**(code **)(*unaff_x20 + 0x208))();
            }
            return;
          }
          uVar3 = FUN_05dd4624();
          thunk_FUN_03257e30(PTR_DAT_075e2eb0);
          FUN_02d65908();
          uVar4 = Newtonsoft_Json_Serialization_DefaultReferenceResolver__GetMappings
                            (uVar3,in_stack_00000008._4_4_);
        }
        goto LAB_05dd76d4;
      }
      thunk_FUN_03257e30(PTR_DAT_0759b208);
      uVar4 = thunk_FUN_0322f148();
      puVar2 = PTR_DAT_075eba08;
    }
    uVar3 = thunk_FUN_03257e30(puVar2);
    FUN_05dfcbd0(uVar4,uVar3,0);
  }
  else {
    thunk_FUN_03257e30(PTR_DAT_0759c520);
    uVar4 = thunk_FUN_0322f148();
    uVar3 = thunk_FUN_03257e30(PTR_DAT_075eb8f0);
    FUN_05e0fea0(uVar4,uVar3,0);
  }
LAB_05dd76d4:
  uVar3 = thunk_FUN_03257e30(PTR_DAT_075eba18);
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(uVar4,uVar3);
}


