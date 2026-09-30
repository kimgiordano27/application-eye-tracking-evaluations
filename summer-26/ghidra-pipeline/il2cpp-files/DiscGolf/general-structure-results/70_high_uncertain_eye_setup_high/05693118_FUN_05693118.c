/*
FUNCTION_NAME: FUN_05693118
ENTRY_POINT: 05693118
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_05693118(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_06dbc7cb & 1) == 0) {
    FUN_02d965b8(OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo);
    FUN_02d965b8(OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0ba00);
    DAT_06dbc7cb = 1;
  }
  puVar2 = OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo;
  puVar1 = PTR_DAT_06a0ba00;
  lVar4 = *(long *)(param_1 + 0x128);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if (lVar4 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar5) {
        return;
      }
      FUN_03fd1a8c(&local_68,lVar4,iVar5,*(undefined8 *)puVar2);
      uStack_48 = uStack_60;
      local_50 = local_68;
      local_40 = local_58;
      if ((*(long *)(param_1 + 0x130) == 0) ||
         (uVar3 = FUN_03f35094(*(long *)(param_1 + 0x130),iVar5,*(undefined8 *)puVar1), param_2 == 0
         )) break;
      FUN_06320430(param_2,&local_50,uVar3 & 1,0);
      lVar4 = *(long *)(param_1 + 0x128);
      iVar5 = iVar5 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


