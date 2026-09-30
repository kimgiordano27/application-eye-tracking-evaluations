/*
FUNCTION_NAME: OVRPlugin.Quatf$$ToString
ENTRY_POINT: 026cae4c
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x026cae94) */

undefined8 OVRPlugin_Quatf__ToString(long param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_w9;
  uint in_w10;
  uint unaff_w19;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar4;
  int unaff_w27;
  undefined8 unaff_x29;
  
  uVar3 = unaff_w27 - in_w9 * in_w10;
  if (uVar3 < in_w10) {
    lVar4 = *(long *)(unaff_x21 + 0x18);
    piVar1 = (int *)(param_1 + (ulong)uVar3 * 4 + 0x20);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (unaff_w19 < *(uint *)(lVar4 + 0x18)) {
      lVar4 = lVar4 + (long)(int)unaff_w19 * 0x18;
      *(int *)(lVar4 + 0x20) = unaff_w27;
      iVar2 = *piVar1;
      *(undefined8 *)(lVar4 + 0x28) = unaff_x20;
      *(int *)(lVar4 + 0x24) = iVar2 + -1;
      thunk_FUN_01656ef8((undefined8 *)(lVar4 + 0x28));
      *(undefined8 *)(lVar4 + 0x30) = unaff_x29;
      *piVar1 = unaff_w19 + 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


