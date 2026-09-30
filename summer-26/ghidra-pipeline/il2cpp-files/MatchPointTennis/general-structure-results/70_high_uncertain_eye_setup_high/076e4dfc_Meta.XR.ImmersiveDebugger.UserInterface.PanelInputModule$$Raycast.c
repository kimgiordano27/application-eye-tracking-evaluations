/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$Raycast
ENTRY_POINT: 076e4dfc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;weak_pose_support;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;weak_vector_component_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__Raycast(void)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  ulong uVar4;
  long unaff_x23;
  long unaff_x24;
  undefined1 unaff_w25;
  double unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  double dVar5;
  double __x;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  double unaff_d12;
  float unaff_s13;
  double in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 uStack000000000000001c;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  double in_stack_00000040;
  undefined4 in_stack_00000048;
  
  do {
    *(undefined1 *)(unaff_x23 + 0x7a1) = unaff_w25;
    uVar4 = unaff_x22;
    do {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      __x = (double)unaff_s13;
      dVar5 = modf(__x,&stack0x00000010);
      if (0.0 <= unaff_s13) {
        dVar2 = unaff_d12;
        if (dVar5 == unaff_d11) goto LAB_076e4e54;
        dVar5 = (double)(long)(__x + unaff_d11);
      }
      else {
        dVar2 = unaff_d10;
        if (dVar5 == unaff_d9) {
LAB_076e4e54:
          dVar5 = in_stack_00000010;
          if (((long)in_stack_00000010 & 1U) != 0) {
            dVar5 = in_stack_00000010 + dVar2;
          }
        }
        else {
          dVar5 = (double)(long)(__x + unaff_d9);
        }
      }
      iVar1 = unaff_w27;
      if (dVar5 != unaff_x26) {
        iVar1 = (int)dVar5;
      }
      FUN_076edf80(&stack0x00000030,uVar4 & 0xffffffff,iVar1,0);
      if (4 < unaff_x28) {
LAB_076e4eb4:
        uStack000000000000001c = in_stack_00000030;
        uStack0000000000000024 = in_stack_00000038;
        in_stack_00000010 = in_stack_00000040;
        in_stack_00000018 = in_stack_00000048;
        uVar3 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f252e8,&stack0x00000010);
        *unaff_x19 = uVar3;
        thunk_FUN_044bb4b4();
        return 1;
      }
      unaff_x22 = uVar4 + 1;
      if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)(unaff_x28 + 1)) goto LAB_076e4eb4;
      unaff_x28 = uVar4 + 4;
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_x28) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      unaff_s13 = *(float *)(unaff_x24 + unaff_x22 * 4);
      uVar4 = unaff_x22;
    } while (*(char *)(unaff_x23 + 0x7a1) != '\0');
    FUN_04447ba8();
  } while( true );
}


