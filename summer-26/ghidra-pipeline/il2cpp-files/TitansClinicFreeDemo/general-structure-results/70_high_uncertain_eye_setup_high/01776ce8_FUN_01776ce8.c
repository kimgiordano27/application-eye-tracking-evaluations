/*
FUNCTION_NAME: FUN_01776ce8
ENTRY_POINT: 01776ce8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_01776ce8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 long *param_5,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if (param_5 == (long *)0x0) {
    param_5 = (long *)FUN_0159ffe0(*(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 8))
    ;
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_0122e748();
  }
  uVar1 = thunk_FUN_0124bba8();
  lVar2 = **(long **)(*(long *)(param_6 + 0x20) + 0xc0);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0122e748(lVar2);
  }
  if (param_5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  lVar3 = *param_5;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar2) {
        lVar2 = lVar3 + (long)*piVar5 * 0x10 + 0x138;
        goto System_Array_InternalEnumerator<OVRPlugin_Quatf>__get_Current;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar2 = FUN_0122ea3c(param_5,lVar2,0);
System_Array_InternalEnumerator<OVRPlugin_Quatf>__get_Current:
  FUN_015cadb4(uVar1,param_5,*(undefined8 *)(lVar2 + 8),
               *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x38));
  lVar2 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0122e748();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__MoveNext
            (param_2,param_3,param_4,uVar1,
             *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x40));
  return;
}


