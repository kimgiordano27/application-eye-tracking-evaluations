/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeTrackingEnabled
ENTRY_POINT: 01f9fadc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x01f9fc50) */

long OVRPlugin_OVRP_1_78_0__ovrp_GetEyeTrackingEnabled
               (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 unaff_w19;
  ulong uVar6;
  long unaff_x23;
  long lVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027c1f38);
    thunk_FUN_01279b34(PTR_DAT_027c1f40);
    *(undefined1 *)(unaff_x23 + 0xf93) = 1;
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  FUN_01fb58d8(&stack0x00000018);
                    /* try { // try from 01f9fb20 to 0209fb37 has its CatchHandler @ 01f9f7b0 */
  FUN_01e5b5a4(&stack0x00000008,param_3,0);
                    /* try { // try from 01f9fb38 to 0209fb47 has its CatchHandler @ 01f9fb50 */
  uVar3 = FUN_01e5b7a4(&stack0x00000008,0);
                    /* catch() { ... } // from try @ 01f9fa4c with catch @ 01f9fb48 */
  FUN_01244e6c(param_2,uVar3,unaff_w19);
                    /* catch() { ... } // from try @ 01f9fab8 with catch @ 01f9fb4c */
                    /* catch() { ... } // from try @ 01f9fa2c with catch @ 01f9fb50
                       catch() { ... } // from try @ 01f9fb38 with catch @ 01f9fb50 */
  FUN_01e5b728();
  uVar2 = FUN_01e5b764();
  lVar4 = FUN_01230af8(*(undefined8 *)PTR_DAT_027c1f38,(ulong)uVar2);
  puVar1 = PTR_DAT_027c1f40;
  if (0 < (int)uVar2) {
    uVar6 = 0;
    lVar7 = 0x20;
    do {
      uVar3 = thunk_FUN_01e5b420();
      plVar5 = (long *)FUN_01ee393c(uVar3,in_stack_00000018,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      if ((plVar5 != (long *)0x0) && (*plVar5 != *(long *)puVar1)) {
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(plVar5);
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      *(long **)(lVar4 + uVar6 * 8 + 0x20) = plVar5;
      thunk_FUN_01286abc(lVar4 + lVar7,plVar5);
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (uVar2 != uVar6);
  }
  FUN_01e5b748();
  FUN_01e5b7ec(&stack0x00000008,0);
  return lVar4;
}


