/*
FUNCTION_NAME: FUN_02ecf0bc
ENTRY_POINT: 02ecf0bc
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_02ecf0bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 uint param_5)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_0381bf38;
                    /* try { // try from 02ecf0e0 to 02fcf0ef has its CatchHandler @ 02ecf2ec */
  if ((DAT_03a2a6e0 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f9758);
                    /* try { // try from 02ecf104 to 02fcf10b has its CatchHandler @ 02ecf2e4 */
    FUN_017fc350(PTR_DAT_0381bf38);
    DAT_03a2a6e0 = 1;
  }
  plVar2 = (long *)thunk_FUN_01861bbc(*(undefined8 *)puVar1);
  FUN_02ecf294();
  puVar1 = PTR_DAT_037f9758;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
                    /* try { // try from 02ecf138 to 02fcf13f has its CatchHandler @ 02ecf304 */
  (**(code **)(*plVar2 + 0x1d8))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x1e0));
  (**(code **)(*plVar2 + 0x208))(plVar2,param_3,*(undefined8 *)(*plVar2 + 0x210));
  (**(code **)(*plVar2 + 0x198))(plVar2,param_4,*(undefined8 *)(*plVar2 + 0x1a0));
  (**(code **)(*plVar2 + 0x1b8))(plVar2,param_5 & 1,*(undefined8 *)(*plVar2 + 0x1c0));
  (**(code **)(*plVar2 + 0x1a8))(plVar2,0,*(undefined8 *)(*plVar2 + 0x1b0));
                    /* try { // try from 02ecf19c to 02fcf1a3 has its CatchHandler @ 02ecf2f8 */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar3 = FUN_02c303d4(0);
                    /* try { // try from 02ecf1b8 to 02fcf1bf has its CatchHandler @ 02ecf2dc */
  lVar4 = FUN_02ecf300(param_1,1,plVar2,uVar3);
  if (lVar4 != 0) {
    OVRPlugin_Media__SetMrcHeadsetControllerPose(lVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


