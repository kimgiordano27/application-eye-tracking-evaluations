/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.InteractableController$$set_Hover
ENTRY_POINT: 06d974f0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_InteractableController__set_Hover
               (undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  int in_w9;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 *puVar4;
  long *plVar5;
  
  if (in_w9 == 0) {
    *unaff_x19 = 3;
    *(undefined8 *)(unaff_x19 + 0x1e) = param_1;
    thunk_FUN_03d233cc(unaff_x19 + 0x1e,param_1);
    if (*(int *)(*(long *)PTR_DAT_08e69550 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_04520c2c(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar3 = *(long *)(unaff_x20 + 0x88);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),unaff_x19[10],*(undefined8 *)(lVar3 + 0x28));
    }
    puVar4 = (undefined8 *)(unaff_x19 + 0x14);
    plVar5 = (long *)*puVar4;
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_08e695a0 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_08e695a0))
      {
        lVar3 = FUN_0701b8d8(plVar5,0);
        if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0701b998(lVar3,0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e8fa48);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(plVar5,uVar2);
    }
    *puVar4 = 0;
    thunk_FUN_03d233cc(puVar4,0);
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    *(undefined8 *)(unaff_x19 + 0xe) = 0;
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*(long *)PTR_DAT_08e69550 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_0701e078(unaff_x19 + 2,0);
  }
  return;
}


