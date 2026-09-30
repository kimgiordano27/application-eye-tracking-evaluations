/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceTrackingEnabled
ENTRY_POINT: 01f9f9cc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingEnabled
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long lVar4;
  long *unaff_x23;
  long lVar5;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  char cStack0000000000000020;
  char cStack0000000000000024;
  undefined8 in_stack_00000028;
  
  FUN_018de658(param_2,param_3,*param_1);
  uVar1 = *(uint *)(unaff_x20 + 0x18);
                    /* try { // try from 01f9f9dc to 0209f9df has its CatchHandler @ 01f9fa14 */
  if (0 < (int)uVar1) {
                    /* try { // try from 01f9f9e0 to 0209f9e3 has its CatchHandler @ 01f9f9ec */
                    /* catch() { ... } // from try @ 01f9f964 with catch @ 01f9f9e4
                       try { // try from 01f9f9e4 to 0209fa2b has its CatchHandler @ 01f9f7b0 */
                    /* catch() { ... } // from try @ 01f9f94c with catch @ 01f9f9e8 */
                    /* catch() { ... } // from try @ 01f9f970 with catch @ 01f9f9ec
                       catch() { ... } // from try @ 01f9f9e0 with catch @ 01f9f9ec */
    lVar5 = 0;
                    /* catch() { ... } // from try @ 01f9f928 with catch @ 01f9f9f8 */
    do {
      if (uVar1 <= (uint)lVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
                    /* catch() { ... } // from try @ 01f9f8d0 with catch @ 01f9fa04 */
      lVar4 = *(long *)(unaff_x20 + 0x20 + lVar5 * 8);
                    /* catch() { ... } // from try @ 01f9f900 with catch @ 01f9fa08 */
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
                    /* catch() { ... } // from try @ 01f9f8b8 with catch @ 01f9fa0c */
                    /* catch() { ... } // from try @ 01f9f8dc with catch @ 01f9fa14
                       catch() { ... } // from try @ 01f9f9dc with catch @ 01f9fa14 */
      uVar1 = thunk_FUN_01ef0118(lVar4,0);
      uVar2 = thunk_FUN_01ef0118(lVar4,0);
                    /* try { // try from 01f9fa2c to 0209fa43 has its CatchHandler @ 01f9fb50 */
      if ((uVar1 & (unaff_w21 ^ 2)) == uVar2) {
        if (cStack0000000000000024 != '\0') {
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar3 = FUN_01f9e2bc(lVar4,in_stack_00000028,cStack0000000000000020 != '\0');
          if ((uVar3 & 1) == 0) goto LAB_01f9fa74;
        }
        FUN_018de888();
      }
LAB_01f9fa74:
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < (int)uVar1);
  }
  unaff_x19[2] = in_stack_00000010;
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  return;
}


