/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.BoneCapsule>
ENTRY_POINT: 0139a3e4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_BoneCapsule>(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint unaff_w19;
  long unaff_x20;
  
  if (param_1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0139a3c8 with catch @ 0139a3e8
                        */
    thunk_FUN_01279b34(PTR_DAT_027b3650);
    if (*(long *)(unaff_x20 + 0x38) == 0) {
      FUN_0122e7a4();
    }
  }
  uVar1 = FUN_01f7fe4c();
  if (uVar1 <= unaff_w19) {
    thunk_FUN_01279b34(PTR_DAT_027b3fa8);
    uVar6 = thunk_FUN_0124bba8();
    uVar5 = thunk_FUN_01279b34(PTR_DAT_027b3fa0);
    System_TimeSpan__get_Seconds(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar6);
  }
                    /* try { // try from 0139a420 to 0149a423 has its CatchHandler @ 0139a424 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0139a420 with catch @ 0139a424
                        */
                    /* try { // try from 0139a428 to 0149a42b has its CatchHandler @ 0139a434 */
  plVar2 = (long *)thunk_FUN_0124baac();
  if (plVar2 == (long *)0x0) {
    FUN_01230ab0();
    return;
  }
  lVar3 = thunk_FUN_0124b7d8(**(undefined8 **)(unaff_x20 + 0x38));
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_0124baac(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar6,0);
  }
  if (unaff_w19 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)unaff_w19 + 4] = lVar3;
    thunk_FUN_01286abc(plVar2 + (long)(int)unaff_w19 + 4,lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


