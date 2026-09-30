/*
FUNCTION_NAME: RootMotion.FinalIK.InteractionObject$$OnStartInteraction
ENTRY_POINT: 029bf55c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029bf798) */
/* WARNING: Removing unreachable block (ram,0x029bf704) */

uint RootMotion_FinalIK_InteractionObject__OnStartInteraction(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x19;
  long lVar6;
  long lVar7;
  char cStack0000000000000004;
  long in_stack_00000008;
  long in_stack_00000018;
  
  iVar2 = FUN_02990f60();
  lVar7 = unaff_x19[0x11];
  iVar3 = FUN_02993cf8();
  if (iVar3 < iVar2 - (int)lVar7) {
    FUN_0298e1e4();
    thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d079d8);
    FUN_0299c3f0();
    FUN_02994f0c();
  }
  puVar1 = PTR_DAT_03d07a50;
  lVar7 = 0;
  while( true ) {
    lVar6 = unaff_x19[0xc];
    cStack0000000000000004 = '\0';
    FUN_027e0bd8(lVar6,&stack0x00000004,0);
    lVar4 = unaff_x19[0xc];
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar4 + 0x20) < 1) {
      iVar2 = 8;
    }
    else {
      FUN_022661a4(lVar4,&stack0x00000008,*(undefined8 *)puVar1);
      iVar2 = 9;
      lVar7 = in_stack_00000008;
    }
    if (cStack0000000000000004 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(lVar6,0);
    }
    if ((iVar2 != 0) && (iVar2 != 9)) break;
    if (lVar7 == 0) {
LAB_029bf7a0:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
  }
  if (iVar2 == 8) {
    FUN_027e0bd8(unaff_x19[0x24]);
    lVar7 = unaff_x19[0x24];
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar7 + 0x20) < 1) {
      lVar7 = 0;
      iVar2 = 0xb;
    }
    else {
      FUN_022661a4(lVar7,&stack0x00000018,*(undefined8 *)PTR_DAT_03d07b50);
      iVar2 = 0xc;
      lVar7 = in_stack_00000018;
    }
    if ((iVar2 == 0xc) || (iVar2 == 0)) {
      if (lVar7 == 0) goto LAB_029bf7a0;
      *(int *)(unaff_x19 + 9) = *(int *)(lVar7 + 0x14) + 3;
      uVar5 = (**(code **)(*unaff_x19 + 600))();
      unaff_x19 = (long *)(uVar5 & 0xffffffff);
      if (*(int *)(*(long *)PTR_DAT_03d07920 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03d07920);
      }
      FUN_02992f5c(lVar7,0);
    }
    else {
      unaff_x19 = (long *)0x0;
    }
  }
  return (uint)unaff_x19 & 1;
}


