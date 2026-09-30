/*
FUNCTION_NAME: OVRPlugin$$StartEyeTracking
ENTRY_POINT: 07a46268
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StartEyeTracking(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long *unaff_x19;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = DAT_01aee018;
    uVar2 = DAT_01aeed40;
    if (uVar1 != 1) {
      *(undefined8 *)(param_1 + 0x28) = DAT_01aeed40;
                    /* try { // try from 07a462a4 to 07b46457 has its CatchHandler @ 07a462a4
                       catch() { ... } // from try @ 07a462a4 with catch @ 07a462a4
                       catch() { ... } // from try @ 07a46460 with catch @ 07a462a4
                       catch() { ... } // from try @ 07a464c0 with catch @ 07a462a4
                       catch() { ... } // from try @ 07a46848 with catch @ 07a462a4 */
      if (((2 < uVar1) && (*(undefined8 *)(param_1 + 0x30) = uVar2, uVar1 != 3)) &&
         (*(undefined8 *)(param_1 + 0x38) = uVar2, 4 < uVar1)) {
        *(undefined8 *)(param_1 + 0x40) = DAT_01aed420;
        *(long *)(*(long *)(*unaff_x19 + 0xb8) + 0x18) = param_1;
        thunk_FUN_040ec700();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


