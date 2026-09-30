/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_AreHandPosesGeneratedByControllerData
ENTRY_POINT: 07cafbb0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_86_0__ovrp_AreHandPosesGeneratedByControllerData(void)

{
  double dVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 uVar6;
  double dVar7;
  undefined8 in_stack_00000008;
  
  thunk_FUN_044a54b4();
  lVar4 = FUN_087daacc(0);
  iVar3 = FUN_094ae2fc(*(undefined8 *)(unaff_x19 + 0x40),0);
  puVar2 = PTR_DAT_09f21ad8;
  dVar1 = DAT_01c74650;
  if (iVar3 < 1) {
    if (lVar4 == 0) goto LAB_07cafc78;
    do {
      in_stack_00000008 = FUN_087daba0(lVar4,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)puVar2);
      }
      dVar7 = (double)FUN_07a54e50(&stack0x00000008,0);
      if (dVar1 <= dVar7) break;
      FUN_07aac1bc(0x32,0);
      iVar3 = FUN_094ae2fc(*(undefined8 *)(unaff_x19 + 0x40),0);
    } while (iVar3 < 1);
  }
  iVar3 = FUN_094ae2fc(*(undefined8 *)(unaff_x19 + 0x40),0);
  if (iVar3 < 1) {
    uVar6 = *(undefined8 *)(unaff_x19 + 0x40);
    uVar5 = thunk_FUN_044adef4(PTR_DAT_09f512f0);
    uVar5 = FUN_078a7764(uVar5,uVar6,0);
    thunk_FUN_044adef4(PTR_DAT_09f1e5c0);
    uVar6 = thunk_FUN_0448520c();
    FUN_07a757d0(uVar6,uVar5,0);
    uVar5 = thunk_FUN_044adef4(PTR_DAT_09f512f8);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar6,uVar5);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_094ad2cc(*(long *)(unaff_x19 + 0x20),0);
    return;
  }
LAB_07cafc78:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


