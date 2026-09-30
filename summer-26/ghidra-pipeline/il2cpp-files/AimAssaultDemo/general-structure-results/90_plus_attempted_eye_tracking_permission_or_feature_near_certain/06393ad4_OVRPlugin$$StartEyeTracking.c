/*
FUNCTION_NAME: OVRPlugin$$StartEyeTracking
ENTRY_POINT: 06393ad4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


long OVRPlugin__StartEyeTracking(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  short sVar3;
  long lVar4;
  undefined8 uVar5;
  ulong unaff_x19;
  undefined8 uVar6;
  long unaff_x20;
  short unaff_w21;
  undefined2 uStack000000000000000c;
  
  FUN_06393620();
  FUN_06392df8();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  sVar3 = FUN_060bb390(*(long *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x20),0);
  if (sVar3 == unaff_w21) {
    puVar1 = (undefined8 *)PTR_DAT_07db6630;
    if ((unaff_x19 & 1) == 0) {
      puVar1 = (undefined8 *)PTR_DAT_07db6628;
    }
    lVar4 = thunk_FUN_037788cc(*puVar1);
    FUN_062855bc(lVar4,0);
    *(undefined8 *)(lVar4 + 0x10) = param_1;
    thunk_FUN_037aeb94((undefined8 *)(lVar4 + 0x10),param_1);
    return lVar4;
  }
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined4 *)(unaff_x20 + 0x20);
  FUN_031a5e18(uVar6);
  uStack000000000000000c = FUN_060bb390(uVar6,uVar2,0);
  FUN_031ae340(*(undefined8 *)(PTR_DAT_07d86548 + 0x88));
  uVar6 = FUN_0619e108(&stack0x0000000c,0);
  uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6620);
  uVar6 = System_Convert__ToInt32(uVar5,uVar6,0);
  thunk_FUN_037a15ac(PTR_DAT_07d967c8);
  uVar5 = thunk_FUN_037788cc();
  FUN_062d6d20(uVar5,uVar6,0);
  uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6638);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar5,uVar6);
}


