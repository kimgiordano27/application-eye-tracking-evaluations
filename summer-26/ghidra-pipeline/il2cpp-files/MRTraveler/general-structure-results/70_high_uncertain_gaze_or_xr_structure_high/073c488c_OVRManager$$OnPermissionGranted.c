/*
FUNCTION_NAME: OVRManager$$OnPermissionGranted
ENTRY_POINT: 073c488c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_permission_setup
*/


void OVRManager__OnPermissionGranted(ulong param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  undefined8 uVar5;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e72348);
    *(undefined1 *)(unaff_x21 + 0x632) = 1;
  }
  plVar1 = (long *)(param_2 + 0x168);
  lVar3 = FUN_0714874c(*(undefined8 *)(param_2 + 0x168),param_3,0);
  puVar2 = PTR_DAT_08e72348;
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)PTR_DAT_08e72348;
    lVar4 = thunk_FUN_03cf5138(lVar3,uVar5);
    if (lVar4 != 0) {
      *plVar1 = lVar4;
      uVar5 = *(undefined8 *)puVar2;
      lVar4 = thunk_FUN_03cf5138(lVar3,uVar5);
      if (lVar4 != 0) goto LAB_073c4910;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fecc(lVar3,uVar5);
  }
  lVar4 = 0;
  *plVar1 = 0;
LAB_073c4910:
  thunk_FUN_03d233cc(plVar1,lVar4);
  return;
}


