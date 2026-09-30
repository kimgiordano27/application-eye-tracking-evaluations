/*
FUNCTION_NAME: OVRPlugin.Sizei$$Equals
ENTRY_POINT: 0515c078
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


void OVRPlugin_Sizei__Equals(code *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long lVar7;
  long lVar8;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  lVar2 = (*param_1)();
  iVar1 = (**(code **)(*unaff_x19 + 0x238))();
  if (iVar1 == 4) {
    lVar8 = 0;
    lVar7 = 0;
    do {
      plVar3 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      if (plVar3 == (long *)0x0) goto LAB_0515c258;
      uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      uVar5 = FUN_04e8bd88(uVar4,*unaff_x27,5,0);
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_04e8bd88(uVar4,*unaff_x28,5,0);
        if ((uVar5 & 1) == 0) {
          FUN_05098d24();
        }
        else {
          FUN_050991d4();
          if (lVar2 == 0) goto LAB_0515c258;
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
  }
  else {
    lVar7 = 0;
    lVar8 = 0;
  }
  lVar2 = *(long *)(unaff_x21 + 0x10);
  plVar3 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,2);
  if (plVar3 == (long *)0x0) {
LAB_0515c258:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if ((lVar8 != 0) &&
     (lVar6 = thunk_FUN_02d9d438(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0)) {
LAB_0515c260:
    uVar4 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar4,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar8;
    thunk_FUN_02dd37b4(plVar3 + 4,lVar8);
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_02d9d438(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar8 == 0))
    goto LAB_0515c260;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar7;
      thunk_FUN_02dd37b4(plVar3 + 5,lVar7);
      if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0515c254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x18))
                  (*(undefined8 *)(lVar2 + 0x40),plVar3,*(undefined8 *)(lVar2 + 0x28));
        return;
      }
      goto LAB_0515c258;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


