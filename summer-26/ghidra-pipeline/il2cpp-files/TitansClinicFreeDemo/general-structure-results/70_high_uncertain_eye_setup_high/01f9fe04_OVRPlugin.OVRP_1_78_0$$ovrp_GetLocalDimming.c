/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetLocalDimming
ENTRY_POINT: 01f9fe04
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetLocalDimming(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *unaff_x19;
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
  
  FUN_018de658();
  uVar1 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar1) {
    lVar5 = 0;
    do {
                    /* try { // try from 01f9fe4c to 0209fe63 has its CatchHandler @ 01f9fc4c */
      if (uVar1 <= (uint)lVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      lVar4 = *(long *)(param_1 + 0x20 + lVar5 * 8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      uVar1 = FUN_01ef07cc(lVar4,0);
                    /* try { // try from 01f9fe64 to 0209fe73 has its CatchHandler @ 01f9fe7c */
      uVar2 = FUN_01ef07cc(lVar4,0);
                    /* catch() { ... } // from try @ 01f9fde8 with catch @ 01f9fe74 */
                    /* catch() { ... } // from try @ 01f9fdc8 with catch @ 01f9fe7c
                       catch() { ... } // from try @ 01f9fe64 with catch @ 01f9fe7c */
      if ((uVar1 & (unaff_w21 ^ 2)) == uVar2) {
        if (cStack0000000000000024 != '\0') {
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar3 = FUN_01f9e2bc(lVar4,in_stack_00000028,cStack0000000000000020 != '\0');
          if ((uVar3 & 1) == 0) goto LAB_01f9fec0;
        }
        FUN_018de888();
      }
LAB_01f9fec0:
      uVar1 = *(uint *)(param_1 + 0x18);
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < (int)uVar1);
  }
  unaff_x19[2] = in_stack_00000010;
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  return;
}


