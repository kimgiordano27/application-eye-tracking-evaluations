/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<MatchInfo>
ENTRY_POINT: 0464bc28
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<MatchInfo>
          (undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000008 = 0;
  uStack0000000000000010 = param_1;
  uVar1 = FUN_0666a8c0(&stack0x00000018,0);
  uVar5 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar5 = FUN_0675ff58(uVar5,0);
  if (*(int *)(*(long *)PTR_DAT_08490748 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  plVar2 = (long *)thunk_FUN_03a96820(uVar1,uVar5,0);
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03ac4090(lVar4);
  }
  if (plVar2 != (long *)0x0) {
    if (*(long *)(*plVar2 + 0x40) == *(long *)(lVar4 + 0x40)) {
      puVar3 = (undefined8 *)thunk_FUN_03ac7604(plVar2);
      uVar1 = *puVar3;
      FUN_0666a9a4(&stack0x00000018,0);
      return uVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8ad40(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


