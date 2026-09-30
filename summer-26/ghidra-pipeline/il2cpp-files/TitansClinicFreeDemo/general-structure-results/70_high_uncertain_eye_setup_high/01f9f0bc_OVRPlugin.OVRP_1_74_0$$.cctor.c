/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$.cctor
ENTRY_POINT: 01f9f0bc
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


void OVRPlugin_OVRP_1_74_0___cctor(void)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  long unaff_x23;
  undefined8 uVar4;
  long *unaff_x26;
  int unaff_w27;
  ulong uVar5;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char in_stack_00000030;
  undefined8 in_stack_00000038;
  
  FUN_018de658();
  cVar1 = in_stack_00000030;
  if (0 < (int)*(ulong *)(unaff_x23 + 0x18)) {
    uVar5 = 0;
    uVar3 = *(ulong *)(unaff_x23 + 0x18) & 0xffffffff;
    do {
      if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      uVar4 = *(undefined8 *)(unaff_x23 + 0x20 + uVar5 * 8);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar3 = FUN_01f9e900(uVar4,unaff_w22,unaff_w21);
      uVar2 = in_stack_00000038;
      if ((uVar3 & 1) != 0) {
        if (unaff_w27 != 0) {
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar3 = FUN_01f9e2bc(uVar4,uVar2,cVar1 != '\0');
          if ((uVar3 & 1) == 0) goto LAB_01f9f158;
        }
        FUN_018de888(&stack0x00000010,uVar4,*(undefined8 *)PTR_DAT_027c1ef8);
      }
LAB_01f9f158:
      uVar3 = (ulong)*(uint *)(unaff_x23 + 0x18);
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)(int)*(uint *)(unaff_x23 + 0x18));
  }
  in_stack_00000008[2] = in_stack_00000020;
  in_stack_00000008[1] = in_stack_00000018;
  *in_stack_00000008 = in_stack_00000010;
  return;
}


