/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$Raycast
ENTRY_POINT: 08a256e0
PROGRAM: Hyper-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__Raycast(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long in_x9;
  long in_x10;
  int *piVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x23;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  piVar4 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar4 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_08a25730;
    }
    in_x9 = in_x9 + -1;
    piVar4 = piVar4 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_04980e68();
LAB_08a25730:
  (*(code *)*puVar1)();
  if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar2 = FUN_089c6994(in_stack_00000028,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_08438ae4(lVar6,*(undefined4 *)(lVar2 + 0x18),in_stack_00000028,*(undefined8 *)PTR_DAT_0ac52508
              );
  FUN_08a24d18();
  uVar5 = *(undefined8 *)(unaff_x19 + 10);
  if (*(int *)(*(long *)PTR_DAT_0ac10af0 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar2 = FUN_08dfc834(500,uVar5,0);
  if (lVar2 != 0) {
    in_stack_00000020 = FUN_08df2f04(lVar2,0);
    uVar3 = FUN_08c80df8(&stack0x00000020,0);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000020;
      thunk_FUN_049ee3d8(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05a2e250(unaff_x19 + 2,&stack0x00000020);
    }
    else {
      FUN_08c80ec0(&stack0x00000020,0);
      lVar2 = *unaff_x23;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_08c7f478(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


