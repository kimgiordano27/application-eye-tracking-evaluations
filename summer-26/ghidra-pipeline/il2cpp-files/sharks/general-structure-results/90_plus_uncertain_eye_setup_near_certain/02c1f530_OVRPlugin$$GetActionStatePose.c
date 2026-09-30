/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 02c1f530
PROGRAM: sharks-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStatePose(long param_1)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  
  FUN_017fc350(*(undefined8 *)(param_1 + 0x7b8));
  FUN_017fc350(PTR_DAT_037f2c78);
  FUN_017fc350(PTR_DAT_0380b9a0);
  *(undefined1 *)(unaff_x21 + 0xee3) = 1;
  if (unaff_x20 == 0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar3 = thunk_FUN_01861bbc();
    uVar5 = thunk_FUN_01851c08(PTR_DAT_037faa38);
    FUN_02b3cbec(uVar3,uVar5,0);
  }
  else {
    uVar5 = *(undefined8 *)PTR_DAT_03803508;
    if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02bddb5c(uVar5,0);
    plVar2 = (long *)FUN_02adfbec();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar4 = *plVar2;
    bVar1 = *(byte *)(*(long *)PTR_DAT_037f87b8 + 0x130);
    if ((*(byte *)(lVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_037f87b8)) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944();
    }
    lVar4 = (**(code **)(lVar4 + 0x7f8))(plVar2,*(undefined8 *)(lVar4 + 0x800));
    *unaff_x19 = lVar4;
    if (lVar4 != 0) {
      return;
    }
    thunk_FUN_01851c08(PTR_DAT_037fb188);
    uVar3 = thunk_FUN_01861bbc();
    uVar5 = thunk_FUN_01851c08(PTR_DAT_0380b950);
    FUN_02ad6d08(uVar3,uVar5,0);
  }
  uVar5 = thunk_FUN_01851c08(PTR_DAT_0380b9a8);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar3,uVar5);
}


