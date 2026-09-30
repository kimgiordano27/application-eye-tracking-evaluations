/*
FUNCTION_NAME: StrikerLink.ThirdParty.WebSocketSharp.Net.ChunkedRequestStream$$Close
ENTRY_POINT: 0655e728
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 StrikerLink_ThirdParty_WebSocketSharp_Net_ChunkedRequestStream__Close(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x19;
  ulong uVar5;
  long unaff_x20;
  
  FUN_0373b518();
  FUN_0373b518(PTR_DAT_07dc1410);
  *(undefined1 *)(unaff_x20 + 0xf72) = 1;
  puVar1 = PTR_DAT_07d889a0;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
    return **(undefined8 **)(*(long *)(PTR_DAT_07d86548 + 0x90) + 0xb8);
  }
  if (-1 < *(long *)(unaff_x19 + 0x10)) {
    uVar2 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d867b8);
    uVar3 = thunk_FUN_0653017c(*(undefined8 *)(unaff_x19 + 0x18),0);
    uVar5 = *(ulong *)(unaff_x19 + 0x10);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar1);
    }
    FUN_061628d0(uVar3,uVar2,0,uVar5 & 0xffffffff,0);
    plVar4 = (long *)FUN_060dca3c(0);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0655e7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar4 + 0x378))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x380));
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar2 = FUN_0373b7c4();
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar2,*(undefined8 *)PTR_DAT_07dc1410);
}


