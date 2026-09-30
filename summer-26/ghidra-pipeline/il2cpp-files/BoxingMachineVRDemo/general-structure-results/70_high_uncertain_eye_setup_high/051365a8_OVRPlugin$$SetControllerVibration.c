/*
FUNCTION_NAME: OVRPlugin$$SetControllerVibration
ENTRY_POINT: 051365a8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerVibration(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *unaff_x19;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined4 uStack000000000000002c;
  
  uStack0000000000000010 = param_2;
  uStack0000000000000018 = param_3;
  uVar2 = FUN_0467cf10(&stack0x00000010,**(undefined8 **)(param_1 + 0xa98));
  if ((uVar2 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0x12) = uStack0000000000000018;
    *(undefined8 *)(unaff_x19 + 0x10) = uStack0000000000000010;
    thunk_FUN_02dd37b4(unaff_x19 + 0x10,0);
    if (*(int *)(*(long *)PTR_DAT_06781368 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0301e9c4(unaff_x19 + 2,&stack0x00000010);
  }
  else {
    FUN_0467cf5c(&stack0x00000010,*(undefined8 *)PTR_DAT_0676aa90);
    plVar3 = *(long **)(unaff_x19 + 8);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    iVar1 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
    if (iVar1 != 1) {
      uVar5 = *(undefined8 *)(unaff_x19 + 8);
      lVar4 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar9 = FUN_04f8e414(0);
      plVar3 = *(long **)(unaff_x19 + 8);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uStack000000000000002c =
           (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
      uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0677db48);
      uVar7 = thunk_FUN_02d9d164(uVar7,&stack0x0000002c);
      uVar8 = thunk_FUN_02dc61f4(PTR_DAT_06781440);
      uVar9 = FUN_050f0ec0(uVar8,uVar9,uVar7,0);
      uVar5 = FUN_05095eec(uVar5,uVar9,0);
      uVar9 = thunk_FUN_02dc61f4(PTR_DAT_06781568);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar5,uVar9);
    }
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06780528);
    FUN_0512f970();
    plVar3 = (long *)(unaff_x19 + 0xe);
    *plVar3 = lVar4;
    thunk_FUN_02dd37b4(plVar3,lVar4);
    lVar4 = *(long *)(unaff_x19 + 0xe);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar9 = *(undefined8 *)(unaff_x19 + 0xc);
    uVar5 = thunk_FUN_02d9d438(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)PTR_DAT_0677d968);
    FUN_0512b384(lVar4,uVar5,uVar9);
    if (*plVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar4 = FUN_0512bd30(*plVar3,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0xc),
                         *(undefined8 *)(unaff_x19 + 10));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    auVar10 = FUN_0507b064(lVar4,0,0);
    uVar2 = FUN_04f2d31c();
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 2;
      *(undefined1 (*) [16])(unaff_x19 + 0x14) = auVar10;
      thunk_FUN_02dd37b4(unaff_x19 + 0x14,0);
      if (*(int *)(*(long *)PTR_DAT_06781368 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_03024330(unaff_x19 + 2);
    }
    else {
      FUN_04f2d338();
      puVar6 = (undefined8 *)(unaff_x19 + 0xe);
      uVar5 = *puVar6;
      *unaff_x19 = 0xfffffffe;
      *puVar6 = 0;
      thunk_FUN_02dd37b4(puVar6,0);
      if (*(int *)(*(long *)PTR_DAT_06781368 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_03ded864(unaff_x19 + 2,uVar5,*(undefined8 *)PTR_DAT_06781560);
    }
  }
  return;
}


