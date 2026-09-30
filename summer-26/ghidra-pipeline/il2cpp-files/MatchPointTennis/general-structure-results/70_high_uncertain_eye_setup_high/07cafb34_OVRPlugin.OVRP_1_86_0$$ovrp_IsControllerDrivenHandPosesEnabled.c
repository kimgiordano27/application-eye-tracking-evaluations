/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_IsControllerDrivenHandPosesEnabled
ENTRY_POINT: 07cafb34
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_86_0__ovrp_IsControllerDrivenHandPosesEnabled(long param_1)

{
  double dVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  double dVar7;
  undefined8 in_stack_00000008;
  
  if ((*(byte *)(unaff_x20 + 0xacc) & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f2fba0);
    FUN_04447ba8(PTR_DAT_09f21ad8);
    *(undefined1 *)(unaff_x20 + 0xacc) = 1;
  }
  in_stack_00000008 = 0;
  if (*(char *)(param_1 + 0x48) == '\0') {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  uVar4 = FUN_094ae0e8(*(undefined8 *)(param_1 + 0x40),1,1,*(undefined4 *)(param_1 + 0x34),0);
  puVar2 = PTR_DAT_09f2fba0;
  if (lVar6 != 0) {
    thunk_FUN_094ad0a0(lVar6,uVar4,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar6 = FUN_087daacc(0);
    iVar3 = FUN_094ae2fc(*(undefined8 *)(param_1 + 0x40),0);
    puVar2 = PTR_DAT_09f21ad8;
    dVar1 = DAT_01c74650;
    if (iVar3 < 1) {
      if (lVar6 == 0) goto LAB_07cafc78;
      do {
        in_stack_00000008 = FUN_087daba0(lVar6,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)puVar2);
        }
        dVar7 = (double)FUN_07a54e50(&stack0x00000008,0);
        if (dVar1 <= dVar7) break;
        FUN_07aac1bc(0x32,0);
        iVar3 = FUN_094ae2fc(*(undefined8 *)(param_1 + 0x40),0);
      } while (iVar3 < 1);
    }
    iVar3 = FUN_094ae2fc(*(undefined8 *)(param_1 + 0x40),0);
    if (iVar3 < 1) {
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      uVar4 = thunk_FUN_044adef4(PTR_DAT_09f512f0);
      uVar4 = FUN_078a7764(uVar4,uVar5,0);
      thunk_FUN_044adef4(PTR_DAT_09f1e5c0);
      uVar5 = thunk_FUN_0448520c();
      FUN_07a757d0(uVar5,uVar4,0);
      uVar4 = thunk_FUN_044adef4(PTR_DAT_09f512f8);
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar5,uVar4);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_094ad2cc(*(long *)(param_1 + 0x20),0);
      return;
    }
  }
LAB_07cafc78:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


