/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0336954c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingEnabled(void)

{
  bool in_ZR;
  bool in_CY;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint unaff_w21;
  
  if (!in_CY || in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x03369568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(&switchD_03369568::switchdataD_00c7cbe2)[unaff_w21] * 4 + 0x336956c))();
    return;
  }
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03369af0 with catch @ 03369b00
                        */
  thunk_FUN_01c273e8(PTR_DAT_042308a0);
  uVar1 = thunk_FUN_01c49334();
                    /* try { // try from 03369b18 to 03469b2f has its CatchHandler @ 03369b60 */
  uVar2 = thunk_FUN_01c273e8(PTR_DAT_04231be0);
                    /* try { // try from 03369b30 to 03469b4f has its CatchHandler @ 03369aec */
  uVar3 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_List_Enumerator<PhotonPlayerHealth_PlayerKillStats>_get_Current__
                            );
  uVar1 = FUN_03373998(uVar2,uVar1,uVar3,0);
  uVar2 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_ReservedBrick>_Dispose__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar1,uVar2);
}


