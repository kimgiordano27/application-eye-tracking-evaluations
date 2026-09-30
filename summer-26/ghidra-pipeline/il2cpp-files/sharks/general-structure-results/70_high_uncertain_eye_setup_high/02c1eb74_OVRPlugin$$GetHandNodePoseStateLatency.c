/*
FUNCTION_NAME: OVRPlugin$$GetHandNodePoseStateLatency
ENTRY_POINT: 02c1eb74
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHandNodePoseStateLatency(void)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x19;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)PTR_DAT_0380b940;
  if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02bddb5c(uVar5,0);
  plVar2 = (long *)FUN_02adfbec();
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    bVar1 = *(byte *)(*(long *)PTR_DAT_03803208 + 0x130);
    if ((bVar1 <= *(byte *)(lVar4 + 0x130)) &&
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_03803208)) {
      lVar4 = (**(code **)(lVar4 + 0x2b8))(plVar2,*(undefined8 *)(lVar4 + 0x2c0));
      *unaff_x19 = lVar4;
      if (lVar4 != 0) {
        return;
      }
      thunk_FUN_01851c08(PTR_DAT_037fb188);
      uVar5 = thunk_FUN_01861bbc();
      uVar3 = thunk_FUN_01851c08(PTR_DAT_0380b950);
      FUN_02ad6d08(uVar5,uVar3,0);
      uVar3 = thunk_FUN_01851c08(PTR_DAT_0380b958);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar5,uVar3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_017fc944();
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


