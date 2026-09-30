/*
FUNCTION_NAME: OVRManager$$get_foveatedRenderingLevel
ENTRY_POINT: 073c495c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_foveatedRenderingLevel(void)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  
  plVar1 = (long *)(unaff_x19 + 0x168);
  lVar3 = FUN_07148944();
  puVar2 = PTR_DAT_08e72348;
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)PTR_DAT_08e72348;
    lVar4 = thunk_FUN_03cf5138(lVar3,uVar5);
    if (lVar4 != 0) {
      *plVar1 = lVar4;
      uVar5 = *(undefined8 *)puVar2;
      lVar4 = thunk_FUN_03cf5138(lVar3,uVar5);
      if (lVar4 != 0) goto LAB_073c49bc;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fecc(lVar3,uVar5);
  }
  lVar4 = 0;
  *plVar1 = 0;
LAB_073c49bc:
  thunk_FUN_03d233cc(plVar1,lVar4);
  return;
}


