/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRawPose
ENTRY_POINT: 07c74b34
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetTrackingTransformRawPose(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  long unaff_x20;
  undefined8 *unaff_x22;
  float fVar3;
  float unaff_s8;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
  lVar1 = FUN_05badb74(param_1,param_2,*unaff_x22);
  if (lVar1 == 0) goto LAB_07c74c60;
                    /* catch() { ... } // from try @ 07c74b28 with catch @ 07c74b40 */
  if ((*(char *)(lVar1 + 0x38) == '\0') || (*(long *)(lVar1 + 0x48) == 0)) {
    if (*(int *)(unaff_x20 + 0x18) < 2) {
      return 0;
    }
    lVar1 = FUN_095258d0();
    if (lVar1 == 0) goto LAB_07c74c60;
    fVar3 = (float)FUN_0953db60(lVar1,0);
                    /* try { // try from 07c74ba0 to 07d74bab has its CatchHandler @ 07c74960 */
                    /* try { // try from 07c74bac to 07d74bb3 has its CatchHandler @ 07c74bb4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07c74b78 with catch @ 07c74bb4
                       catch(type#2 @ 00000000) { ... } // from try @ 07c74bac with catch @ 07c74bb4
                        */
    FUN_07c6c428(unaff_s8 / fVar3);
    if (in_stack_00000028 == 0) goto LAB_07c74c60;
    if ((*(char *)(in_stack_00000028 + 0x38) == '\0') ||
       (lVar1 = *(long *)(in_stack_00000028 + 0x48), lVar1 == 0)) {
      if (in_stack_00000020 == 0) goto LAB_07c74c60;
      if (*(char *)(in_stack_00000020 + 0x38) == '\0') {
        return 0;
      }
      lVar1 = *(long *)(in_stack_00000020 + 0x48);
      if (lVar1 == 0) {
        return 0;
      }
    }
    else {
      if (in_stack_00000020 == 0) goto LAB_07c74c60;
      if ((*(char *)(in_stack_00000020 + 0x38) != '\0') &&
         (*(long *)(in_stack_00000020 + 0x48) != 0)) {
        in_stack_00000008 = *(long *)(in_stack_00000020 + 0x48);
        in_stack_00000010 = lVar1;
        FUN_07c6c7ac(in_stack_00000018._4_4_,&stack0x00000010,&stack0x00000008);
        return 1;
      }
    }
    lVar2 = *unaff_x19;
  }
  else {
    lVar2 = *unaff_x19;
    lVar1 = FUN_05badb74();
    if (lVar1 == 0) goto LAB_07c74c60;
    if (*(char *)(lVar1 + 0x38) == '\0') {
      lVar1 = 0;
    }
    else {
      lVar1 = *(long *)(lVar1 + 0x48);
    }
  }
  if (lVar2 != 0) {
    FUN_07c6c6cc(lVar2,lVar1,0);
    return 1;
  }
LAB_07c74c60:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


