/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<MatchInfo>
ENTRY_POINT: 0464c2a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16]
Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__SerializeToString<MatchInfo>(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long *plVar3;
  undefined1 (*pauVar4) [16];
  long lVar5;
  long unaff_x19;
  undefined8 uVar6;
  undefined8 in_stack_00000018;
  
  FUN_03a8a718();
  if (*(long *)(unaff_x19 + 0x38) == 0) {
    FUN_03ac40ec();
  }
  in_stack_00000018 = 0;
  in_stack_00000018 = FUN_0666a990();
  uVar2 = FUN_0666a8c0(&stack0x00000018,0);
  uVar6 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar6 = FUN_0675ff58(uVar6,0);
  if (*(int *)(*(long *)PTR_DAT_08490748 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  plVar3 = (long *)thunk_FUN_03a96820(uVar2,uVar6,0);
  lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03ac4090(lVar5);
  }
  if (plVar3 != (long *)0x0) {
    if (*(long *)(*plVar3 + 0x40) == *(long *)(lVar5 + 0x40)) {
      pauVar4 = (undefined1 (*) [16])thunk_FUN_03ac7604(plVar3);
      auVar1 = *pauVar4;
      FUN_0666a9a4(&stack0x00000018,0);
      return auVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8ad40(plVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


