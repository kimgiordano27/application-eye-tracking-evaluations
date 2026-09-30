/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.InteractableController$$OnHoverChanged
ENTRY_POINT: 07292e7c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_InteractableController__OnHoverChanged
               (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar6;
  
  puVar3 = (undefined8 *)(param_1 + 0x78);
  plVar6 = (long *)*puVar3;
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_092c20c8 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_092c20c8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar6);
    }
  }
  *puVar3 = 0;
  thunk_FUN_040ec700(puVar3,0);
  *unaff_x19 = 0xffffffff;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (unaff_x20 != 0) {
    lVar5 = *(long *)(unaff_x20 + 0x88);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))
                (*(undefined8 *)(lVar5 + 0x40),unaff_x19[10],*(undefined8 *)(lVar5 + 0x28));
    }
    puVar3 = (undefined8 *)(unaff_x19 + 0x14);
    plVar6 = (long *)*puVar3;
    if (plVar6 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_09285a20 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09285a20))
      {
        uVar4 = thunk_FUN_040dedf8(PTR_DAT_092c2100);
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(plVar6,uVar4);
      }
      lVar5 = FUN_0758fe20(plVar6,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_0758fee0(lVar5,0);
    }
    *puVar3 = 0;
    thunk_FUN_040ec700(puVar3,0);
    puVar2 = PTR_DAT_09285a68;
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    *(undefined8 *)(unaff_x19 + 0xe) = 0;
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0759053c(unaff_x19 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


