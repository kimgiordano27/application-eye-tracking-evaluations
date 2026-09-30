/*
FUNCTION_NAME: Meta.XR.Acoustics.ProgressCallback$$BeginInvoke
ENTRY_POINT: 06dba1b0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Acoustics_ProgressCallback__BeginInvoke(undefined4 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_09840c63 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091a1508);
    DAT_09840c63 = 1;
  }
  if (param_1[1] != 5) {
    if (param_1[1] == 1) {
      lVar1 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03d8f26c();
      }
      FUN_06dcfa34(param_1,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 200));
      *param_1 = 0xffffffff;
    }
    return;
  }
  plVar5 = *(long **)(param_1 + 4);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar1 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_091a1508) {
        puVar2 = (undefined8 *)(lVar1 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_06dba288;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_03d8f370(plVar5,*(long *)PTR_DAT_091a1508,2);
LAB_06dba288:
                    /* WARNING: Could not recover jumptable at 0x06dba298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar5,puVar2[1]);
  return;
}


