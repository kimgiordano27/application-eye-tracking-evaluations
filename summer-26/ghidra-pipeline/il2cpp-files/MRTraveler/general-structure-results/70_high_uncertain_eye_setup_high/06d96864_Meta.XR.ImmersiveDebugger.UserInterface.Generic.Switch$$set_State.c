/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Switch$$set_State
ENTRY_POINT: 06d96864
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06d96aa4) */
/* WARNING: Removing unreachable block (ram,0x06d96b6c) */
/* WARNING: Removing unreachable block (ram,0x06d96aa8) */
/* WARNING: Removing unreachable block (ram,0x06d96ab0) */
/* WARNING: Removing unreachable block (ram,0x06d96b70) */
/* WARNING: Removing unreachable block (ram,0x06d96ab8) */
/* WARNING: Removing unreachable block (ram,0x06d96b74) */
/* WARNING: Removing unreachable block (ram,0x06d96ac8) */
/* WARNING: Removing unreachable block (ram,0x06d964cc) */
/* WARNING: Removing unreachable block (ram,0x06d96a98) */
/* WARNING: Removing unreachable block (ram,0x06d96764) */
/* WARNING: Removing unreachable block (ram,0x06d9681c) */
/* WARNING: Removing unreachable block (ram,0x06d96768) */
/* WARNING: Removing unreachable block (ram,0x06d96770) */
/* WARNING: Removing unreachable block (ram,0x06d9682c) */
/* WARNING: Removing unreachable block (ram,0x06d96778) */
/* WARNING: Removing unreachable block (ram,0x06d96830) */
/* WARNING: Removing unreachable block (ram,0x06d96788) */
/* WARNING: Removing unreachable block (ram,0x06d96b64) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Switch__set_State
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar5;
  long lVar6;
  int iVar7;
  
                    /* catch() { ... } // from try @ 06d96760 with catch @ 06d96864 */
                    /* catch() { ... } // from try @ 06d96468 with catch @ 06d96868 */
                    /* catch() { ... } // from try @ 06d96444 with catch @ 06d9686c */
                    /* try { // try from 06d968b0 to 06e968b3 has its CatchHandler @ 06d96aac */
  if (param_2 == 1) {
    puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e695a0);
    uVar3 = thunk_FUN_03ce0d60(uVar2,*(undefined8 *)*puVar1);
    if ((uVar3 & 1) == 0) {
      puVar4 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar4,&PTR_PTR_088de0a8,0);
    }
    plVar5 = (long *)*puVar1;
    __cxa_end_catch();
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar6 = *(long *)(unaff_x20 + 0x80);
    if (lVar6 != 0) {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar2 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
      (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),uVar2,*(undefined8 *)(lVar6 + 0x28))
      ;
    }
    lVar6 = *(long *)(unaff_x20 + 0x88);
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),0x3ee,*(undefined8 *)(lVar6 + 0x28))
      ;
    }
    lVar6 = 0;
    iVar7 = 0x15;
  }
  else {
    if (param_2 != 1) {
                    /* catch() { ... } // from try @ 06d96abc with catch @ 06d96ad8
                       catch() { ... } // from try @ 06d96ad0 with catch @ 06d96ad8 */
      if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_03d91ca0(param_1);
      }
      puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
      uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e695a0);
      uVar3 = thunk_FUN_03ce0d60(uVar2,*(undefined8 *)*puVar1);
      if ((uVar3 & 1) != 0) {
        uVar2 = *puVar1;
        __cxa_end_catch();
        *unaff_x19 = 0xfffffffe;
        lVar6 = thunk_FUN_03ce5214(PTR_DAT_08e69550);
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_0701e11c(unaff_x19 + 2,uVar2,0);
        return;
      }
      puVar4 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar4,&PTR_PTR_088de0a8,0);
    }
    plVar5 = (long *)__cxa_begin_catch(param_1);
    lVar6 = *plVar5;
    __cxa_end_catch();
    iVar7 = 0;
  }
  if (lVar6 == 0) {
    if ((iVar7 == 0) || (iVar7 == 0x15)) {
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*(long *)PTR_DAT_08e69550 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0701e078(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb28(lVar6);
}


