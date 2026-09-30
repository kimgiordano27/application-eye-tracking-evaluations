/*
FUNCTION_NAME: FUN_02b75ac0
ENTRY_POINT: 02b75ac0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
FUN_02b75ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  
  iVar3 = *(int *)(param_4 + 0x20);
  if (0 < iVar3) {
    lVar4 = *(long *)(param_4 + 0x18);
    if (lVar4 == 0) {
Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector3f>___ctor:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar5 = 0;
    puVar6 = (undefined4 *)(lVar4 + 0x38);
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_02b75b94:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (-1 < (int)puVar6[-6]) {
        plVar1 = (long *)FUN_021bb388(*(undefined8 *)
                                       (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xf8));
        if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_02b75b94;
        if (plVar1 == (long *)0x0)
        goto Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector3f>___ctor;
        uVar2 = (**(code **)(*plVar1 + 0x1b8))
                          (puVar6[-2],puVar6[-1],*puVar6,param_1,param_2,param_3,plVar1,
                           *(undefined8 *)(*plVar1 + 0x1c0));
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        iVar3 = *(int *)(param_4 + 0x20);
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 8;
    } while ((long)uVar5 < (long)iVar3);
  }
  return 0;
}


