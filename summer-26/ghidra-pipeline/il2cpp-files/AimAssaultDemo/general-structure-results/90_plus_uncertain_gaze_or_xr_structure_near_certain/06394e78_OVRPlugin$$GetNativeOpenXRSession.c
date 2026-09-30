/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRSession
ENTRY_POINT: 06394e78
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint OVRPlugin__GetNativeOpenXRSession(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 06394e7c to 06494e97 has its CatchHandler @ 063954d8 */
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03798b70(*unaff_x21);
  }
  if (param_1 != 0) {
                    /* try { // try from 06394ea0 to 06494ea7 has its CatchHandler @ 06395448 */
    iVar1 = FUN_060c5c98(param_1,**(undefined8 **)(*unaff_x21 + 0xb8),0);
                    /* try { // try from 06394eb0 to 06494ebb has its CatchHandler @ 06395438 */
    if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07d88078);
    }
                    /* try { // try from 06394ed0 to 06494ee7 has its CatchHandler @ 063954d4 */
    uVar3 = FUN_061d52c8(0);
    if (iVar1 == -1) {
                    /* try { // try from 06394f50 to 06494f57 has its CatchHandler @ 06395488 */
      uVar2 = FUN_06242524(param_1,7,uVar3,&stack0x00000010,0);
      uVar3 = *(undefined8 *)(unaff_x23 + 0x68);
      in_stack_00000008 = in_stack_00000010;
    }
    else {
                    /* try { // try from 06394ef0 to 06494f07 has its CatchHandler @ 063954d0 */
      uVar2 = FUN_0622add4(param_1,0xe7,uVar3,&stack0x00000018,0);
      uVar3 = *(undefined8 *)(unaff_x23 + 0x80);
      in_stack_00000008 = in_stack_00000018;
    }
    uVar3 = thunk_FUN_037784fc(uVar3,&stack0x00000008);
    *unaff_x19 = uVar3;
    thunk_FUN_037aeb94();
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


