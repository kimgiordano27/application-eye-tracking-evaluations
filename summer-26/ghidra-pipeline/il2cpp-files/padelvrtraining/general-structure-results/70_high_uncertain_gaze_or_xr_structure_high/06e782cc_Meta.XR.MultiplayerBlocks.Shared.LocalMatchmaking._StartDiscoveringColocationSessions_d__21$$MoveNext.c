/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartDiscoveringColocationSessions>d__21$$MoveNext
ENTRY_POINT: 06e782cc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartDiscoveringColocationSessions>d__21__MoveNext
               (long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_1b8 [208];
  undefined1 auStack_e8 [216];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  puVar3 = &uStack_290;
  if ((DAT_09840d47 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091add10);
    DAT_09840d47 = 1;
  }
  if (*(int *)((long)param_1 + 0xc) != 0) {
    if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(int *)((long)param_1 + 0xc) != *(int *)(*param_1 + 0x20) + 1) goto LAB_06e78328;
  }
  FUN_07199c28(0);
LAB_06e78328:
  lVar2 = param_1[0x1d];
  if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  lVar5 = *(long *)(param_2 + 0x20);
  lVar4 = param_1[2];
  uVar6 = *(ushort *)(lVar5 + 0x135);
  if ((int)lVar2 == 1) {
    if ((uVar6 & 1) == 0) {
      FUN_03d8f26c(lVar5);
      lVar5 = *(long *)(param_2 + 0x20);
      uVar6 = *(ushort *)(lVar5 + 0x135);
    }
    memcpy(auStack_e8,param_1 + 3,0xd0);
    if ((uVar6 & 1) == 0) {
      lVar5 = FUN_03d8f26c(lVar5);
    }
    uVar1 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x30),auStack_e8);
    uStack_290 = 0;
    uStack_288 = 0;
    FUN_07143704(&uStack_290,lVar4,uVar1,0);
    puVar3 = &uStack_10;
    uStack_8 = uStack_288;
    uStack_10 = uStack_290;
    uVar1 = *(undefined8 *)PTR_DAT_091add10;
  }
  else {
    if ((uVar6 & 1) == 0) {
      FUN_03d8f26c(lVar5);
      lVar5 = *(long *)(param_2 + 0x20);
      uVar6 = *(ushort *)(lVar5 + 0x135);
    }
    memcpy(auStack_1b8,param_1 + 3,0xd0);
    memset(auStack_e8,0,0xd8);
    if ((uVar6 & 1) == 0) {
      lVar5 = FUN_03d8f26c(lVar5);
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38);
    memcpy(&uStack_290,auStack_1b8,0xd0);
    FUN_058168d4(auStack_e8,lVar4,&uStack_290,uVar1);
    memcpy(&uStack_290,auStack_e8,0xd8);
    lVar2 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10);
  }
  thunk_FUN_03d2eb70(uVar1,puVar3);
  return;
}


