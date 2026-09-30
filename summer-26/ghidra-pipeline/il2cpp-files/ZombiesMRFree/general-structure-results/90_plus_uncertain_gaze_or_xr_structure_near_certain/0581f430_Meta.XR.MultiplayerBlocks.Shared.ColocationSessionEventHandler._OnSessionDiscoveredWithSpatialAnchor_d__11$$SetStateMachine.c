/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionDiscoveredWithSpatialAnchor>d__11$$SetStateMachine
ENTRY_POINT: 0581f430
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionDiscoveredWithSpatialAnchor>d__11__SetStateMachine
               (undefined8 param_1,undefined8 ****param_2,long param_3)

{
  undefined8 ****__src;
  long lVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_20 [8];
  undefined8 ***pppuStack_18;
  undefined4 uStack_c;
  long lStack_8;
  
  lVar1 = tpidr_el0;
  lStack_8 = *(long *)(lVar1 + 0x28);
  puVar7 = (undefined8 *)(*(long *)(param_3 + 0x20) + 0xc0);
  lVar2 = *(long *)*puVar7;
  uVar3 = *(uint *)(lVar2 + 0xfc);
  uVar6 = (ulong)uVar3;
  pppuStack_18 = param_2;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
    uVar3 = *(uint *)(lVar2 + 0xfc);
    puVar7 = (undefined8 *)(*(long *)(param_3 + 0x20) + 0xc0);
    lVar2 = *(long *)*puVar7;
  }
  puVar5 = auStack_20 + -((ulong)(uVar3 + 0x10) + 0xf & 0x1fffffff0);
  __src = param_2;
  if (-1 < *(int *)(lVar2 + 0x28)) {
    __src = &pppuStack_18;
  }
  memcpy(puVar5 + -(uVar6 + 0xf & 0x1fffffff0),__src,uVar6);
  uVar6 = FUN_02fe94a8(*(undefined8 *)*puVar7,puVar5 + -(uVar6 + 0xf & 0x1fffffff0));
  if ((uVar6 & 1) == 0) {
    uStack_c = 0;
  }
  else {
    plVar4 = *(long **)(*(long *)(param_3 + 0x20) + 0xc0);
    lVar2 = *plVar4;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4();
      plVar4 = *(long **)(*(long *)(param_3 + 0x20) + 0xc0);
      param_2 = (undefined8 ****)pppuStack_18;
    }
    if (-1 < *(int *)(*plVar4 + 0x28)) {
      param_2 = &pppuStack_18;
    }
    FUN_02fe9dc8(lVar2,plVar4[3],puVar5,param_2,0,&uStack_c);
  }
  if (*(long *)(lVar1 + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uStack_c);
  }
  return;
}


