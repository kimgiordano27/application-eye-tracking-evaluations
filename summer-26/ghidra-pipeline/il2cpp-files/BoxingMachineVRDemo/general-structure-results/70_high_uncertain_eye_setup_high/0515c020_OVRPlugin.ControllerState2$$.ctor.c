/*
FUNCTION_NAME: OVRPlugin.ControllerState2$$.ctor
ENTRY_POINT: 0515c020
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_ControllerState2___ctor(void)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long lVar9;
  long lVar10;
  long *unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  lVar6 = *unaff_x23;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x25) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0515c070;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_0515c070:
  lVar6 = (*(code *)*puVar2)();
  iVar1 = (**(code **)(*unaff_x19 + 0x238))();
  if (iVar1 == 4) {
    lVar10 = 0;
    lVar9 = 0;
    do {
      plVar3 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      if (plVar3 == (long *)0x0) goto LAB_0515c258;
      uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      uVar7 = FUN_04e8bd88(uVar4,*unaff_x27,5,0);
      if ((uVar7 & 1) == 0) {
        uVar7 = FUN_04e8bd88(uVar4,*unaff_x28,5,0);
        if ((uVar7 & 1) == 0) {
          FUN_05098d24();
        }
        else {
          FUN_050991d4();
          if (lVar6 == 0) goto LAB_0515c258;
          lVar9 = Oculus_Platform_Message__GetUserCapabilityList();
        }
      }
      else {
        FUN_050991d4();
        if (unaff_x22 == 0) goto LAB_0515c258;
        lVar10 = Oculus_Platform_Message__GetUserCapabilityList();
      }
      FUN_0509917c();
      iVar1 = (**(code **)(*unaff_x19 + 0x238))();
    } while (iVar1 == 4);
  }
  else {
    lVar9 = 0;
    lVar10 = 0;
  }
  lVar6 = *(long *)(unaff_x21 + 0x10);
  plVar3 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,2);
  if (plVar3 == (long *)0x0) {
LAB_0515c258:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if ((lVar10 != 0) &&
     (lVar5 = thunk_FUN_02d9d438(lVar10,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_0515c260:
    uVar4 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar4,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar10;
    thunk_FUN_02dd37b4(plVar3 + 4,lVar10);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_02d9d438(lVar9,*(undefined8 *)(*plVar3 + 0x40)), lVar10 == 0))
    goto LAB_0515c260;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar9;
      thunk_FUN_02dd37b4(plVar3 + 5,lVar9);
      if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0515c254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 0x18))
                  (*(undefined8 *)(lVar6 + 0x40),plVar3,*(undefined8 *)(lVar6 + 0x28));
        return;
      }
      goto LAB_0515c258;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


