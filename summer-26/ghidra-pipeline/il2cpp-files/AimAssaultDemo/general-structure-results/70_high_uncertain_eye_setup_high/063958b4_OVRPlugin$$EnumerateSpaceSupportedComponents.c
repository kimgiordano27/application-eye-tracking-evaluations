/*
FUNCTION_NAME: OVRPlugin$$EnumerateSpaceSupportedComponents
ENTRY_POINT: 063958b4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__EnumerateSpaceSupportedComponents(ulong param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db6750);
    FUN_0373b518(PTR_DAT_07db6758);
    FUN_0373b518(PTR_DAT_07db6760);
    FUN_0373b518(PTR_DAT_07db6748);
    FUN_0373b518(PTR_DAT_07db6768);
    *(undefined1 *)(unaff_x24 + 0x60e) = 1;
  }
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = (long *)0x0;
  lVar3 = RootMotion_FinalIK_Finger___ctor(*unaff_x23,1);
  if (lVar3 != 0) {
    if ((unaff_x22 != 0) && (lVar4 = thunk_FUN_037787d0(), lVar4 == 0)) {
      uVar6 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar6,0);
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    *(long *)(lVar3 + 0x20) = unaff_x22;
    thunk_FUN_037aeb94();
    puVar2 = PTR_DAT_07db6758;
    puVar1 = PTR_DAT_07db6750;
    if (param_2 != 0) {
      FUN_049cf910(&stack0x00000008,param_2,*(undefined8 *)PTR_DAT_07db6768);
      while( true ) {
        uVar5 = FUN_05d64e98(&stack0x00000008,*(undefined8 *)puVar2);
        if ((uVar5 & 1) == 0) {
          FUN_05d64e94(&stack0x00000008,*(undefined8 *)puVar1);
          return lVar3;
        }
        if (in_stack_00000018 == (long *)0x0) break;
        lVar3 = (**(code **)(*in_stack_00000018 + 0x178))(in_stack_00000018,param_3,lVar3);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


