/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetHandTrackingEnabled
ENTRY_POINT: 01f9af44
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetHandTrackingEnabled(long param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  thunk_FUN_01279b34(*(undefined8 *)(param_1 + 0xec0));
  thunk_FUN_01279b34(PTR_DAT_027b5f38);
  thunk_FUN_01279b34(PTR_DAT_027c09f8);
  thunk_FUN_01279b34(PTR_DAT_027c1d90);
  thunk_FUN_01279b34(PTR_DAT_027c1d98);
  *(undefined1 *)(unaff_x21 + 0xf27) = 1;
                    /* try { // try from 01f9af90 to 0209b017 has its CatchHandler @ 01f9af90
                       catch() { ... } // from try @ 01f9af90 with catch @ 01f9af90
                       catch() { ... } // from try @ 01f9b024 with catch @ 01f9af90
                       catch() { ... } // from try @ 01f9b054 with catch @ 01f9af90
                       catch() { ... } // from try @ 01f9b090 with catch @ 01f9af90 */
  if ((unaff_x20 == 0) || (*(int *)(unaff_x20 + 0x10) == 0)) {
    lVar6 = *(long *)PTR_DAT_027b5f38;
    unaff_x20 = lVar6;
  }
  else {
    lVar6 = *(long *)PTR_DAT_027b5f38;
  }
  iVar2 = FUN_01e672c0(unaff_x20,lVar6,5,0);
  if (iVar2 == 0) {
    lVar6 = *unaff_x19;
  }
  else {
    iVar2 = FUN_01e672c0(unaff_x20,*(undefined8 *)PTR_DAT_027c09f8,5,0);
    if (iVar2 != 0) {
      iVar2 = FUN_01e672c0(unaff_x20,*(undefined8 *)PTR_DAT_027c1d90,5,0);
      if (iVar2 == 0) {
        uVar4 = FUN_011f6b80();
        if (*(int *)(*(long *)PTR_DAT_027b3ea8 + 0xe0) == 0) {
          thunk_FUN_01220628(*(long *)PTR_DAT_027b3ea8);
        }
        FUN_01f97f2c(uVar4);
        return;
      }
      iVar2 = FUN_01e672c0(unaff_x20,*(undefined8 *)PTR_DAT_027c1d98,5,0);
      if (iVar2 != 0) {
        uVar4 = thunk_FUN_01279b34(PTR_DAT_027c1da0);
        thunk_FUN_01279b34(PTR_DAT_027b98d8);
        uVar5 = thunk_FUN_0124bba8();
        FUN_01f558a0(uVar5,uVar4,0);
        uVar4 = thunk_FUN_01279b34(PTR_DAT_027c1da8);
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar5,uVar4);
      }
      plVar3 = (long *)thunk_FUN_0122c1cc();
      uVar4 = FUN_011f6b80();
      if (*(int *)(*(long *)PTR_DAT_027b3ea8 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)PTR_DAT_027b3ea8);
      }
      if (plVar3 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
        if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_027b3ec0
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(plVar3);
        }
      }
      FUN_01f985b8(plVar3,uVar4);
      return;
    }
    plVar3 = (long *)FUN_011f6b80();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    lVar6 = *plVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x01f9b07c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x168))();
  return;
}


