/*
FUNCTION_NAME: FUN_04422028
ENTRY_POINT: 04422028
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


ulong FUN_04422028(int *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0322bef4(lVar4);
  }
  plVar1 = (long *)FUN_04057e40(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x80));
  if (0 < *param_1) {
    if (plVar1 == (long *)0x0) {
LAB_04422124:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar2 = (**(code **)(*plVar1 + 0x1b8))
                      (plVar1,*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4),param_2,
                       param_3,*(undefined8 *)(*plVar1 + 0x1c0));
    if ((uVar2 & 1) != 0) {
      uVar2 = 0;
      goto System_Array_InternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_Reset
      ;
    }
    if (*(long *)(param_1 + 6) != 0) {
      lVar4 = 0;
      uVar2 = 0;
      do {
        if ((long)(*param_1 + -1) <= (long)uVar2) goto LAB_04422108;
        lVar5 = *(long *)(param_1 + 6);
        if (lVar5 == 0) goto LAB_04422124;
        if (*(uint *)(lVar5 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        uVar3 = (**(code **)(*plVar1 + 0x1b8))
                          (plVar1,*(undefined8 *)(lVar5 + lVar4 + 0x20),
                           *(undefined8 *)(lVar5 + lVar4 + 0x28),param_2,param_3,
                           *(undefined8 *)(*plVar1 + 0x1c0));
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0x10;
      } while ((uVar3 & 1) == 0);
      goto System_Array_InternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_Reset
      ;
    }
  }
LAB_04422108:
  uVar2 = 0xffffffff;
System_Array_InternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_Reset:
  return uVar2 & 0xffffffff;
}


