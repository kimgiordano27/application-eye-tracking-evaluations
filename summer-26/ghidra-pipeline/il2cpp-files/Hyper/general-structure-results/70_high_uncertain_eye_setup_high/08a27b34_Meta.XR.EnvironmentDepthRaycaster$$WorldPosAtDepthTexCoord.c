/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$WorldPosAtDepthTexCoord
ENTRY_POINT: 08a27b34
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__WorldPosAtDepthTexCoord(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *unaff_x19;
  undefined8 uVar6;
  long *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  
  thunk_FUN_049ee3d8();
  *unaff_x19 = 0xffffffff;
  if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_08a37b68(in_stack_00000048,0);
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar3 = FUN_08d59ac8(0);
  if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar3 = FUN_08d5b504(uVar3,*(undefined8 *)(unaff_x26 + 0x88),0);
  puVar1 = PTR_DAT_0ac52588;
  lVar4 = *(long *)PTR_DAT_0ac52588;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar4 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_0ac09c40;
  uVar6 = **(undefined8 **)(lVar4 + 0xb8);
  if (*(int *)(*(long *)PTR_DAT_0ac09c40 + 0xe4) == 0) {
    thunk_FUN_049a583c(*(long *)PTR_DAT_0ac09c40);
  }
  uVar3 = FUN_08d93358(uVar6,uVar3,0);
  uVar5 = FUN_08d93644(uVar3,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
  if ((uVar5 & 1) != 0) {
    uVar6 = *(undefined8 *)(unaff_x19 + 8);
    if (*(int *)(*(long *)PTR_DAT_0ac10af0 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    lVar4 = FUN_08dfc718(uVar3,uVar6,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000040 = FUN_08df2f04(lVar4,0);
    uVar5 = FUN_08c80df8(&stack0x00000040,0);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000040;
      thunk_FUN_049ee3d8(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05a28648(unaff_x19 + 2,&stack0x00000040);
      return;
    }
    FUN_08c80ec0(&stack0x00000040,0);
    if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
  }
  puVar2 = PTR_DAT_0ac395c8;
  puVar1 = PTR_DAT_0ac0a9b8;
  lVar4 = *(long *)(unaff_x26 + 0x18);
  while( true ) {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar5 = FUN_0845cb74(lVar4,&stack0x00000038,*(undefined8 *)puVar2);
    if ((uVar5 & 1) == 0) break;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_08ddff68(unaff_x19 + 8,0);
    if (in_stack_00000038 != 0) {
      (**(code **)(in_stack_00000038 + 0x18))
                (*(undefined8 *)(in_stack_00000038 + 0x40),*(undefined8 *)(in_stack_00000038 + 0x28)
                );
    }
    lVar4 = *(long *)(unaff_x26 + 0x18);
  }
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar3 = FUN_08d59ac8(0);
  *(undefined8 *)(unaff_x26 + 0x88) = uVar3;
  lVar4 = *unaff_x25;
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08c7f478(unaff_x19 + 2,0);
  return;
}


