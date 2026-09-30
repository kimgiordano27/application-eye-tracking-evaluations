/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 01702378
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeXNode(ulong param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    *(undefined1 *)(unaff_x20 + 0x993) = 1;
  }
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
  if (unaff_x19 != 0) {
    iVar3 = thunk_FUN_00d402ac(0);
    uVar1 = *(undefined4 *)(unaff_x19 + 0x10);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    FUN_0170241c(unaff_x19 + iVar3,uVar1);
    return;
  }
  thunk_FUN_00d48444(PTR_DAT_033f37c8);
  uVar4 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  uVar5 = thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MessageEventArgs>_RemoveListener__
                            );
  FUN_016ec5b8(uVar4,uVar5);
  uVar5 = thunk_FUN_00d48444(StringLiteral_9413);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar4,uVar5);
}


