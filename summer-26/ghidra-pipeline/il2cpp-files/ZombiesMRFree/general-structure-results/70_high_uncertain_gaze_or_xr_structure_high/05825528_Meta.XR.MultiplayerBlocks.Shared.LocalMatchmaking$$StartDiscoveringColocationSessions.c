/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StartDiscoveringColocationSessions
ENTRY_POINT: 05825528
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StartDiscoveringColocationSessions
               (undefined8 param_1,void *param_2,long param_3)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong __n;
  undefined1 *__src;
  undefined8 uVar6;
  undefined1 auStack_20 [8];
  undefined8 uStack_18;
  undefined1 *puStack_10;
  long lStack_8;
  
  lVar2 = tpidr_el0;
  lStack_8 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(param_3 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02feb2c4(lVar4);
    uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar3 = *(long *)(param_3 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x38) + 0xfc);
  __src = auStack_20 + -(__n + 0xf & 0x1fffffff0);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_02feb2c4(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02feb2c4();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar3 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02feb2c4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02feb2c4();
  }
  lVar3 = **(long **)(lVar3 + 0xb8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar5 = *(long *)(param_3 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar4 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_02feb2c4(lVar5);
    uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar4 = *(long *)(param_3 + 0x20);
  }
  uVar6 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x30);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02feb2c4(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x30);
  uStack_18 = param_1;
  puStack_10 = __src;
  (**(code **)(lVar4 + 0x10))(uVar6,lVar4,lVar3,&uStack_18,__src);
  memcpy(param_2,__src,__n);
  if (*(long *)(lVar2 + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


