/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$ReconstructNormal
ENTRY_POINT: 08a27c44
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__ReconstructNormal(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *unaff_x19;
  long *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar3 = FUN_08dfc718();
  if (lVar3 != 0) {
    in_stack_00000040 = FUN_08df2f04(lVar3,0);
    uVar4 = FUN_08c80df8(&stack0x00000040,0);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000040;
      thunk_FUN_049ee3d8(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05a28648(unaff_x19 + 2,&stack0x00000040);
    }
    else {
      FUN_08c80ec0(&stack0x00000040,0);
      puVar2 = PTR_DAT_0ac395c8;
      puVar1 = PTR_DAT_0ac0a9b8;
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar3 = *(long *)(unaff_x26 + 0x18);
      while( true ) {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        uVar4 = FUN_0845cb74(lVar3,&stack0x00000038,*(undefined8 *)puVar2);
        if ((uVar4 & 1) == 0) break;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_08ddff68(unaff_x19 + 8,0);
        if (in_stack_00000038 != 0) {
          (**(code **)(in_stack_00000038 + 0x18))
                    (*(undefined8 *)(in_stack_00000038 + 0x40),
                     *(undefined8 *)(in_stack_00000038 + 0x28));
        }
        lVar3 = *(long *)(unaff_x26 + 0x18);
      }
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar5 = FUN_08d59ac8(0);
      *(undefined8 *)(unaff_x26 + 0x88) = uVar5;
      lVar3 = *unaff_x25;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_08c7f478(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


