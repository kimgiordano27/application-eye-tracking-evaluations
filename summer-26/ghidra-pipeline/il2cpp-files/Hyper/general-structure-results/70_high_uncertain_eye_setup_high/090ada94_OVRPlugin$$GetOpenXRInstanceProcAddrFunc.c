/*
FUNCTION_NAME: OVRPlugin$$GetOpenXRInstanceProcAddrFunc
ENTRY_POINT: 090ada94
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetOpenXRInstanceProcAddrFunc(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x21;
  
  lVar3 = *param_1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac78c88) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_090adaf4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_04980e68(param_1,*(long *)PTR_DAT_0ac78c88,0);
LAB_090adaf4:
  uVar2 = (*(code *)*puVar1)(param_1,puVar1[1]);
  if (unaff_x21 != 0) {
    *(undefined8 *)(unaff_x21 + 0x28) = uVar2;
    thunk_FUN_049ee3d8((undefined8 *)(unaff_x21 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


