/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeGazesState
ENTRY_POINT: 01f9fb58
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x01f9fc50) */

long OVRPlugin_OVRP_1_78_0__ovrp_GetEyeGazesState(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 01f9fb58 to 0209fb5b has its CatchHandler @ 01f9fbe0 */
  FUN_01e5b728();
                    /* try { // try from 01f9fb5c to 0209fb7f has its CatchHandler @ 01f9f7b0 */
                    /* catch() { ... } // from try @ 01f9fa54 with catch @ 01f9fb64 */
  uVar2 = FUN_01e5b764();
  lVar3 = FUN_01230af8(*(undefined8 *)PTR_DAT_027c1f38,(ulong)uVar2);
  puVar1 = PTR_DAT_027c1f40;
                    /* try { // try from 01f9fb80 to 0209fb83 has its CatchHandler @ 01f9fba0 */
  if (0 < (int)uVar2) {
    uVar6 = 0;
    lVar7 = 0x20;
    do {
                    /* catch() { ... } // from try @ 01f9fb80 with catch @ 01f9fba0 */
      uVar4 = thunk_FUN_01e5b420();
      plVar5 = (long *)FUN_01ee393c(uVar4,in_stack_00000018,0);
                    /* try { // try from 01f9fbbc to 0209fbcb has its CatchHandler @ 01f9fbe0 */
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
                    /* try { // try from 01f9fbcc to 0209fbd7 has its CatchHandler @ 01f9f7b0 */
      if ((plVar5 != (long *)0x0) && (*plVar5 != *(long *)puVar1)) {
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(plVar5);
      }
                    /* try { // try from 01f9fbd8 to 0209fbdf has its CatchHandler @ 01f9fbe0 */
                    /* catch() { ... } // from try @ 01f9fb58 with catch @ 01f9fbe0
                       catch() { ... } // from try @ 01f9fbbc with catch @ 01f9fbe0
                       catch() { ... } // from try @ 01f9fbd8 with catch @ 01f9fbe0 */
      if (*(uint *)(lVar3 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      *(long **)(lVar3 + uVar6 * 8 + 0x20) = plVar5;
      thunk_FUN_01286abc(lVar3 + lVar7,plVar5);
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (uVar2 != uVar6);
  }
  FUN_01e5b748();
  FUN_01e5b7ec(&stack0x00000008,0);
  return lVar3;
}


