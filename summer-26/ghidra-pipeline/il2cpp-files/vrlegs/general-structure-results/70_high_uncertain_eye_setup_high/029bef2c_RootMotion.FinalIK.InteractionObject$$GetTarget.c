/*
FUNCTION_NAME: RootMotion.FinalIK.InteractionObject$$GetTarget
ENTRY_POINT: 029bef2c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029bf104) */

void RootMotion_FinalIK_InteractionObject__GetTarget(undefined4 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int in_w8;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  char cStack000000000000000c;
  
  *(undefined4 *)(unaff_x19 + 0x130) = param_1;
  if (in_w8 == 0) {
    uVar6 = *(undefined8 *)(unaff_x19 + 0x140);
    cStack000000000000000c = '\0';
    FUN_027e0bd8(uVar6,(long)&stack0x00000008 + 4,0);
    lVar2 = *(long *)(unaff_x19 + 0x140);
    in_stack_00000000._4_4_ = param_1;
    uVar5 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,(long)&stack0x00000000 + 4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02999124(lVar2,1,uVar5,0);
    if (*(int *)(*(long *)PTR_DAT_03d07e10 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar2 = FUN_0299a22c();
    if (cStack000000000000000c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
    }
  }
  else {
    uStack0000000000000008 = 1;
    uVar5 = *(undefined8 *)(unaff_x19 + 0x138);
    if (*(int *)(*(long *)PTR_DAT_03cca318 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_029a25d0(param_1,uVar5,&stack0x00000008,0);
    if (*(int *)(*(long *)PTR_DAT_03d07920 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar2 = FUN_02992d88(0);
    lVar4 = *(long *)(unaff_x19 + 0x138);
    if ((lVar4 == 0) || (lVar2 == 0)) goto LAB_029bf100;
    FUN_029b3ef8(lVar2,lVar4,0,*(undefined4 *)(lVar4 + 0x18));
  }
  uVar3 = FUN_0298d310();
  if ((uVar3 & 1) == 0) {
    if (lVar2 == 0) goto LAB_029bf100;
  }
  else {
    lVar4 = FUN_0298d32c();
    if ((lVar2 == 0) || (lVar4 == 0)) {
LAB_029bf100:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(int *)(lVar4 + 0x38) = *(int *)(lVar4 + 0x38) + *(int *)(lVar2 + 0x14);
    *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1;
  }
  iVar1 = FUN_029bfaf0();
  if (iVar1 == 0) {
    if (*(int *)(*(long *)PTR_DAT_03d07920 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02992f5c(lVar2,0);
  }
  return;
}


