/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$Clear
ENTRY_POINT: 04c119b8
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Console__Clear(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar2 = thunk_FUN_02c7737c(PTR_DAT_065e39d8);
  lVar6 = *unaff_x23;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar2) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 6) * 0x10 + 0x138);
        goto code_r0x04c11a48;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02ce0a7c();
code_r0x04c11a48:
  (*(code *)*puVar3)();
  thunk_FUN_02c7737c(PTR_DAT_065e3a00);
  lVar2 = thunk_FUN_02cea894();
  FUN_04f7383c(lVar2,0);
  if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar1 = *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + 0x20);
  in_stack_00000008 = thunk_FUN_02c7737c(PTR_DAT_065ce4b0);
  in_stack_00000010 = 0xffffffffffffffff;
  in_stack_00000018 = uVar1;
  uVar4 = FUN_04f67024(&stack0x00000008,0);
  uVar5 = thunk_FUN_02c7737c(PTR_DAT_065e5450);
  uVar4 = FUN_04db00f0(uVar5,uVar4,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  *(undefined8 *)(lVar2 + 0x10) = uVar4;
  if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  thunk_FUN_02c7737c(PTR_DAT_065e5428);
  Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value();
  thunk_FUN_02c7737c(PTR_DAT_065e3a10);
  uVar4 = thunk_FUN_02cea894();
  FUN_04c11c30(uVar4,lVar2,0);
  uVar5 = thunk_FUN_02c7737c(PTR_DAT_065e5430);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar4,uVar5);
}


