/*
FUNCTION_NAME: RootMotion.FinalIK.IKMapping.BoneMap$$SetLength
ENTRY_POINT: 02994bd0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02994d98) */
/* WARNING: Removing unreachable block (ram,0x02994da4) */

long RootMotion_FinalIK_IKMapping_BoneMap__SetLength(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  uint unaff_w21;
  int unaff_w22;
  byte unaff_w23;
  long lVar9;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  int iStack0000000000000048;
  char cStack000000000000004c;
  
  Animancer_FadeGroup__get_TargetWeight(param_2,&stack0x00000008,**(undefined8 **)(param_1 + 0xc10))
  ;
  puVar4 = PTR_DAT_03d07c18;
  puVar3 = PTR_DAT_03d07c08;
  puVar2 = PTR_DAT_03d07c00;
  puVar1 = PTR_DAT_03d07bf8;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  do {
    uVar5 = FUN_021b51c8(&stack0x00000020,*(undefined8 *)puVar2);
    if ((uVar5 & 1) == 0) {
      lVar9 = 0;
      break;
    }
    FUN_01b7a454(&stack0x00000020,&stack0x00000008,*(undefined8 *)puVar3);
  } while ((((in_stack_00000008 == 0) || (*(int *)(in_stack_00000008 + 0x14) != unaff_w22)) ||
           (*(byte *)(in_stack_00000008 + 0x12) != unaff_w21)) ||
          (lVar9 = in_stack_00000008,
          (((*(byte *)(in_stack_00000008 + 0x10) & 2) == 0 ^ unaff_w23) & 1) == 0));
  FUN_021b51c4(&stack0x00000020,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_03cbeda8;
  if (lVar9 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((4 < *(byte *)(*(long *)(unaff_x20 + 0x10) + 0x40)) && (1 < *(byte *)(unaff_x20 + 0x40) - 3)
       ) {
      iStack0000000000000048 = unaff_w22;
      uVar6 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x00000048);
      uVar7 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000004);
      uVar8 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03d079f0);
      FUN_025be8b0(*(undefined8 *)PTR_DAT_03d07c20,uVar6,uVar7,uVar8,0);
      FUN_0298e564();
    }
    lVar9 = 0;
  }
  else {
    if (*(long *)(unaff_x20 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02218bd8(*(long *)(unaff_x20 + 0x128),lVar9,*(undefined8 *)puVar4);
  }
  if (cStack000000000000004c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return lVar9;
}


