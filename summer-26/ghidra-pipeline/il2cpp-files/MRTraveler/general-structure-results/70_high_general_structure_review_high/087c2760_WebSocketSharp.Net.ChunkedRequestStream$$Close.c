/*
FUNCTION_NAME: WebSocketSharp.Net.ChunkedRequestStream$$Close
ENTRY_POINT: 087c2760
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void WebSocketSharp_Net_ChunkedRequestStream__Close(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *unaff_x19;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  lVar2 = thunk_FUN_03cf5234(*param_1);
  FUN_050c5f38(lVar2,1,*(undefined8 *)System_Func<int,_int,_bool>_TypeInfo);
  *unaff_x19 = lVar2;
  thunk_FUN_03d233cc();
  lVar2 = *unaff_x19;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        puVar4 = (undefined8 *)(lVar3 + 0x28);
        *puVar4 = in_stack_00000008;
        *(undefined8 *)(lVar3 + 0x20) = in_stack_00000000;
        thunk_FUN_03d233cc(puVar4,0);
      }
      else {
        FUN_050c6748();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


