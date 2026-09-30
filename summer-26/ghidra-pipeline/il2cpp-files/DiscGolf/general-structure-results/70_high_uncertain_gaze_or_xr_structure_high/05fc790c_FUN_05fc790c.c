/*
FUNCTION_NAME: FUN_05fc790c
ENTRY_POINT: 05fc790c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_05fc790c(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* catch() { ... } // from try @ 05fc78e8 with catch @ 05fc790c */
                    /* try { // try from 05fc7910 to 060c7917 has its CatchHandler @ 05fc7920 */
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
                    /* try { // try from 05fc7918 to 060c7923 has its CatchHandler @ 05fc7750 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05fc7910 with catch @ 05fc7920
                        */
  if ((param_2[0x17] == 0) && ((char)param_2[2] == '\0')) {
    FUN_02979e58(param_2);
    uVar1 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    uVar2 = thunk_FUN_02dfd288(Method_System_Array_Resize<OVRPlugin_Vector3f>__);
    uVar3 = thunk_FUN_02dfd288(Method_System_Array_Resize<OvrAvatarEntity_PrimitiveRenderData>__);
    uVar1 = FUN_0536d554(uVar2,uVar1,uVar3,0);
    thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
    uVar2 = thunk_FUN_02dd3144();
    FUN_054e8008(uVar2,uVar1,0);
    uVar1 = thunk_FUN_02dfd288(Method_System_Array_Resize<OvrAvatarManager_LoadRequest>__);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar2,uVar1);
  }
  return;
}


