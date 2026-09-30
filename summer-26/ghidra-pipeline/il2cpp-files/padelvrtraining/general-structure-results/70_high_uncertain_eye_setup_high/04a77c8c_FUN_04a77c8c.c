/*
FUNCTION_NAME: FUN_04a77c8c
ENTRY_POINT: 04a77c8c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_04a77c8c(long param_1,undefined8 *param_2,int param_3,int param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *puVar4;
  
  if (*(long *)(param_5 + 0x38) == 0) {
    FUN_03d8f2c8(param_5);
  }
  if (param_1 == 0) {
    thunk_FUN_03d1e194(PTR_DAT_091adab0);
    uVar1 = thunk_FUN_03d2ef40();
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_091b3178);
    FUN_070c4c34(uVar1,uVar2,0);
    goto System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Vector3f>;
  }
  if (param_3 < 0) {
LAB_04a77d28:
    thunk_FUN_03d1e194(PTR_DAT_091ab0b0);
    uVar1 = thunk_FUN_03d2ef40();
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_091f9130);
    puVar4 = PTR_DAT_091f9138;
  }
  else {
    if (*(int *)(param_1 + 0x18) < param_3) goto LAB_04a77d28;
    if ((-1 < param_4) && (param_4 <= *(int *)(param_1 + 0x18) - param_3)) {
      local_40 = param_2[2];
      uStack_48 = param_2[1];
      local_50 = *param_2;
      FUN_04a948a0(param_1,&local_50,param_3,param_4,
                   *(undefined8 *)(*(long *)(param_5 + 0x38) + 0x10));
      return;
    }
    thunk_FUN_03d1e194(PTR_DAT_091ab0b0);
    uVar1 = thunk_FUN_03d2ef40();
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_091b4488);
    puVar4 = PTR_DAT_091f9140;
  }
  uVar3 = thunk_FUN_03d1e194(puVar4);
  FUN_070c848c(uVar1,uVar2,uVar3,0);
System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Vector3f>:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar1,param_5);
}


