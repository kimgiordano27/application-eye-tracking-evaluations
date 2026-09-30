/*
FUNCTION_NAME: FUN_04018288
ENTRY_POINT: 04018288
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_04018288(long param_1,void *param_2,int param_3,int param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_1d0 [400];
  undefined *puVar4;
  
  if (*(long *)(param_5 + 0x38) == 0) {
    FUN_03ac40ec(param_5);
  }
  if (param_1 == 0) {
    thunk_FUN_03af1434(&DAT_08615058);
    uVar1 = thunk_FUN_03ac74bc();
    uVar2 = thunk_FUN_03af1434(&DAT_086a7228);
    FUN_066af6a0(uVar1,uVar2,0);
    goto System_Array__InternalArray__ICollection_Remove<ShadowRequestIntermediateUpdateData>;
  }
  if (param_3 < 0) {
LAB_04018324:
    thunk_FUN_03af1434(&DAT_08615060);
    uVar1 = thunk_FUN_03ac74bc();
    uVar2 = thunk_FUN_03af1434(&DAT_086b0140);
    puVar4 = &DAT_0868e988;
  }
  else {
    if (*(int *)(param_1 + 0x18) < param_3) goto LAB_04018324;
    if ((-1 < param_4) && (param_4 <= *(int *)(param_1 + 0x18) - param_3)) {
      memcpy(auStack_1d0,param_2,400);
      FUN_04027d70(param_1,auStack_1d0,param_3,param_4,
                   *(undefined8 *)(*(long *)(param_5 + 0x38) + 0x10));
      return;
    }
    thunk_FUN_03af1434(&DAT_08615060);
    uVar1 = thunk_FUN_03ac74bc();
    uVar2 = thunk_FUN_03af1434(&DAT_086a8b20);
    puVar4 = &DAT_08688840;
  }
  uVar3 = thunk_FUN_03af1434(puVar4);
  System_Threading_CancellationToken__get_IsCancellationRequested(uVar1,uVar2,uVar3,0);
System_Array__InternalArray__ICollection_Remove<ShadowRequestIntermediateUpdateData>:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar1,param_5);
}


