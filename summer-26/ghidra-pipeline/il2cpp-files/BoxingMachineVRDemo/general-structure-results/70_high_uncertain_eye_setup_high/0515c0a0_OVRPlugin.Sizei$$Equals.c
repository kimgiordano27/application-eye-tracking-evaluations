/*
FUNCTION_NAME: OVRPlugin.Sizei$$Equals
ENTRY_POINT: 0515c0a0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Sizei__Equals(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x19;
  long lVar6;
  long unaff_x21;
  long unaff_x22;
  long lVar7;
  long lVar8;
  long unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  lVar8 = 0;
  lVar7 = 0;
  do {
    plVar2 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar2 == (long *)0x0) goto LAB_0515c258;
    uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    uVar4 = FUN_04e8bd88(uVar3,*unaff_x27,5,0);
    if ((uVar4 & 1) == 0) {
      uVar4 = FUN_04e8bd88(uVar3,*unaff_x28,5,0);
      if ((uVar4 & 1) == 0) {
        FUN_05098d24();
      }
      else {
        FUN_050991d4();
        if (unaff_x25 == 0) goto LAB_0515c258;
        lVar7 = Oculus_Platform_Message__GetUserCapabilityList();
      }
    }
    else {
      FUN_050991d4();
      if (unaff_x22 == 0) goto LAB_0515c258;
      lVar8 = Oculus_Platform_Message__GetUserCapabilityList();
    }
    FUN_0509917c();
    iVar1 = (**(code **)(*unaff_x19 + 0x238))();
  } while (iVar1 == 4);
  lVar6 = *(long *)(unaff_x21 + 0x10);
  plVar2 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,2);
  if (plVar2 == (long *)0x0) {
LAB_0515c258:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if ((lVar8 != 0) &&
     (lVar5 = thunk_FUN_02d9d438(lVar8,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0)) {
LAB_0515c260:
    uVar3 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar3,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar8;
    thunk_FUN_02dd37b4(plVar2 + 4,lVar8);
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_02d9d438(lVar7,*(undefined8 *)(*plVar2 + 0x40)), lVar8 == 0))
    goto LAB_0515c260;
    if (1 < *(uint *)(plVar2 + 3)) {
      plVar2[5] = lVar7;
      thunk_FUN_02dd37b4(plVar2 + 5,lVar7);
      if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0515c254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 0x18))
                  (*(undefined8 *)(lVar6 + 0x40),plVar2,*(undefined8 *)(lVar6 + 0x28));
        return;
      }
      goto LAB_0515c258;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


