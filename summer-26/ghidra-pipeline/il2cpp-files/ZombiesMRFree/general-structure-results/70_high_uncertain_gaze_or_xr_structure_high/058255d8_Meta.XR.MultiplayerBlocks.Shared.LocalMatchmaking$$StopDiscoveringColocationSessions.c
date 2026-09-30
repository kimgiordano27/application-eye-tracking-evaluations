/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StopDiscoveringColocationSessions
ENTRY_POINT: 058255d8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StopDiscoveringColocationSessions
               (ulong param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *unaff_x19;
  undefined8 unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  long unaff_x23;
  undefined8 uVar5;
  long unaff_x25;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_02feb2c4();
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar4 = *(long *)(unaff_x23 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02feb2c4(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x23 + 0x20);
  }
  uVar5 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x30);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_02feb2c4(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
  *(void **)(unaff_x29 + -0x10) = unaff_x22;
  (**(code **)(lVar3 + 0x10))(uVar5,lVar3,lVar2,unaff_x29 + -0x18);
  memcpy(unaff_x19,unaff_x22,unaff_x21);
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


