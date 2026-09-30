/*
FUNCTION_NAME: OVRPlugin.Sizei$$GetHashCode
ENTRY_POINT: 0515c13c
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


void OVRPlugin_Sizei__GetHashCode(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x19;
  long lVar7;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
code_r0x0515c13c:
  FUN_050991d4();
  if (unaff_x25 == 0) {
LAB_0515c258:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar3 = Oculus_Platform_Message__GetUserCapabilityList();
LAB_0515c170:
  do {
    FUN_0509917c();
    iVar1 = (**(code **)(*unaff_x19 + 0x238))();
    if (iVar1 != 4) {
      lVar7 = *(long *)(unaff_x21 + 0x10);
      plVar4 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,2);
      if (plVar4 == (long *)0x0) goto LAB_0515c258;
      if ((unaff_x24 != 0) &&
         (lVar5 = thunk_FUN_02d9d438(unaff_x24,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
LAB_0515c260:
        uVar6 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar6,0);
      }
      if ((int)plVar4[3] != 0) {
        plVar4[4] = unaff_x24;
        thunk_FUN_02dd37b4(plVar4 + 4,unaff_x24);
        if ((lVar3 != 0) &&
           (lVar5 = thunk_FUN_02d9d438(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
        goto LAB_0515c260;
        if (1 < *(uint *)(plVar4 + 3)) {
          plVar4[5] = lVar3;
          thunk_FUN_02dd37b4(plVar4 + 5,lVar3);
          if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0515c254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar7 + 0x18))
                      (*(undefined8 *)(lVar7 + 0x40),plVar4,*(undefined8 *)(lVar7 + 0x28));
            return;
          }
          goto LAB_0515c258;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    plVar4 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar4 == (long *)0x0) goto LAB_0515c258;
    uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    uVar2 = FUN_04e8bd88(uVar6,*unaff_x27,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_04e8bd88(uVar6,*unaff_x28,5,0);
      if ((uVar2 & 1) == 0) {
        FUN_05098d24();
        goto LAB_0515c170;
      }
      goto code_r0x0515c13c;
    }
    FUN_050991d4();
    if (unaff_x22 == 0) goto LAB_0515c258;
    unaff_x24 = Oculus_Platform_Message__GetUserCapabilityList();
  } while( true );
}


