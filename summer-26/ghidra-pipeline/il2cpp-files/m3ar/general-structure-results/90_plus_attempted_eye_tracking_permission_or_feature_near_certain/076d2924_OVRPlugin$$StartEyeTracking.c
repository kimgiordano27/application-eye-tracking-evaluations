/*
FUNCTION_NAME: OVRPlugin$$StartEyeTracking
ENTRY_POINT: 076d2924
PROGRAM: m3ar-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StartEyeTracking(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long unaff_x19;
  byte unaff_w21;
  long *unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000028;
  
  uVar2 = *(uint *)(unaff_x24 + 0x18);
                    /* try { // try from 076d2950 to 077d2967 has its CatchHandler @ 076d2b9c */
  if ((((uVar2 == 0) || (*(undefined8 *)(unaff_x24 + 0x20) = param_1, uVar2 == 1)) ||
      (*(undefined8 *)(unaff_x24 + 0x28) = in_stack_00000028, uVar2 < 3)) ||
     ((*(undefined8 *)(unaff_x24 + 0x30) = *(undefined8 *)PTR_DAT_08f8ef88, uVar2 == 3 ||
      (*(undefined8 *)(unaff_x24 + 0x38) = unaff_x23, uVar2 < 5)))) {
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
                    /* try { // try from 076d2970 to 077d29db has its CatchHandler @ 076d2bbc */
  *(undefined8 *)(unaff_x24 + 0x40) = *(undefined8 *)PTR_DAT_08f6f888;
  FUN_07369f9c();
  if (unaff_x22 != (long *)0x0) {
    (**(code **)(*unaff_x22 + 0x558))();
    if (*(byte *)(unaff_x19 + 0x60) != (unaff_w21 & 1)) {
      bVar1 = (unaff_w21 & 1) == 0;
      if (bVar1) {
        puVar3 = (undefined4 *)(unaff_x19 + 0x28);
        puVar4 = (undefined4 *)(unaff_x19 + 0x2c);
        puVar5 = (undefined4 *)(unaff_x19 + 0x30);
        puVar6 = (undefined4 *)(unaff_x19 + 0x34);
      }
      else {
        puVar3 = (undefined4 *)(unaff_x19 + 0x38);
        puVar4 = (undefined4 *)(unaff_x19 + 0x3c);
        puVar5 = (undefined4 *)(unaff_x19 + 0x40);
        puVar6 = (undefined4 *)(unaff_x19 + 0x44);
      }
      if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_076d2a28;
      FUN_085503b8(*puVar3,*puVar4,*puVar5,*puVar6,*(long *)(unaff_x19 + 0x58),0);
      *(byte *)(unaff_x19 + 0x60) = !bVar1;
    }
    return;
  }
LAB_076d2a28:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


