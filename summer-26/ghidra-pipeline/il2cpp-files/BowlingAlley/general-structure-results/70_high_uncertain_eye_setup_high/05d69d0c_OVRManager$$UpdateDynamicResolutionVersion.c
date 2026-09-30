/*
FUNCTION_NAME: OVRManager$$UpdateDynamicResolutionVersion
ENTRY_POINT: 05d69d0c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateDynamicResolutionVersion(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  unaff_x20[5] = unaff_x21;
  thunk_FUN_0333a630();
  lVar1 = thunk_FUN_032a56a0(*unaff_x22);
  FUN_05d69e30(lVar1,2);
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_032a55a4(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0)) {
LAB_05d69e20:
    uVar3 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar3,0);
  }
  if (2 < *(uint *)(unaff_x20 + 3)) {
    unaff_x20[6] = lVar1;
    thunk_FUN_0333a630(unaff_x20 + 6,lVar1);
    lVar1 = thunk_FUN_032a56a0(*unaff_x22);
    FUN_05d69e30(lVar1,3);
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_032a55a4(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0))
    goto LAB_05d69e20;
    if (3 < *(uint *)(unaff_x20 + 3)) {
      unaff_x20[7] = lVar1;
      thunk_FUN_0333a630(unaff_x20 + 7,lVar1);
      lVar1 = thunk_FUN_032a56a0(*unaff_x22);
      FUN_05d69e30(lVar1,4);
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_032a55a4(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0))
      goto LAB_05d69e20;
      if (4 < *(uint *)(unaff_x20 + 3)) {
        unaff_x20[8] = lVar1;
        thunk_FUN_0333a630(unaff_x20 + 8,lVar1);
        *(long **)(unaff_x19 + 0x28) = unaff_x20;
        thunk_FUN_0333a630();
        FUN_059660a0();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


