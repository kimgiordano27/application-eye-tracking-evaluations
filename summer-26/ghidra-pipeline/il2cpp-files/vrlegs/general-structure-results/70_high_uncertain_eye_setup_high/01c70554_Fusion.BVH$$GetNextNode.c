/*
FUNCTION_NAME: Fusion.BVH$$GetNextNode
ENTRY_POINT: 01c70554
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x01c70504) */
/* WARNING: Removing unreachable block (ram,0x01c70690) */

undefined8 Fusion_BVH__GetNextNode(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x19;
  long lVar8;
  long *plVar9;
  int unaff_w25;
  undefined8 in_stack_00000018;
  
  if (unaff_w25 == 1) {
    puVar3 = (undefined8 *)__cxa_begin_catch();
    uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cc4a70);
    uVar5 = thunk_FUN_01a6848c(uVar4,*(undefined8 *)*puVar3);
    if ((uVar5 & 1) == 0) {
      puVar6 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar6 = *puVar3;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&PTR_PTR_03abd138,0);
    }
    plVar9 = (long *)*puVar3;
    __cxa_end_catch();
    iVar2 = FUN_01c70e60(*(undefined8 *)(unaff_x19 + 0x40));
    if (iVar2 != 0x513) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(plVar9);
    }
    if (plVar9 != (long *)0x0) {
      uVar1 = *(undefined4 *)((long)plVar9 + 0x8c);
      uVar4 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
      uVar4 = FUN_01c6c2c8(uVar1,uVar4);
      uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cc4ea0);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar4,uVar7);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (unaff_w25 != 1) {
    if (in_stack_00000018._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0();
  }
  plVar9 = (long *)__cxa_begin_catch();
  lVar8 = *plVar9;
  __cxa_end_catch();
  if (in_stack_00000018._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar8);
  }
  return 0;
}


