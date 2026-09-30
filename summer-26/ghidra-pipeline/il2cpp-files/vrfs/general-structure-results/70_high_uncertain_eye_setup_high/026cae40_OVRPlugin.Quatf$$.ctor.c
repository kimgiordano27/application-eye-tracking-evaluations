/*
FUNCTION_NAME: OVRPlugin.Quatf$$.ctor
ENTRY_POINT: 026cae40
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x026cae94) */

undefined8 OVRPlugin_Quatf___ctor(long param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_w19;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar5;
  int unaff_w27;
  undefined8 unaff_x29;
  
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    iVar4 = 0;
    if (uVar2 != 0) {
      iVar4 = unaff_w27 / (int)uVar2;
    }
    uVar3 = unaff_w27 - iVar4 * uVar2;
    if (uVar3 < uVar2) {
      lVar5 = *(long *)(unaff_x21 + 0x18);
      piVar1 = (int *)(param_1 + (ulong)uVar3 * 4 + 0x20);
      if (lVar5 == 0) goto LAB_026caf80;
      if (unaff_w19 < *(uint *)(lVar5 + 0x18)) {
        lVar5 = lVar5 + (long)(int)unaff_w19 * 0x18;
        *(int *)(lVar5 + 0x20) = unaff_w27;
        iVar4 = *piVar1;
        *(undefined8 *)(lVar5 + 0x28) = unaff_x20;
        *(int *)(lVar5 + 0x24) = iVar4 + -1;
        thunk_FUN_01656ef8((undefined8 *)(lVar5 + 0x28));
        *(undefined8 *)(lVar5 + 0x30) = unaff_x29;
        *piVar1 = unaff_w19 + 1;
        return 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
LAB_026caf80:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


