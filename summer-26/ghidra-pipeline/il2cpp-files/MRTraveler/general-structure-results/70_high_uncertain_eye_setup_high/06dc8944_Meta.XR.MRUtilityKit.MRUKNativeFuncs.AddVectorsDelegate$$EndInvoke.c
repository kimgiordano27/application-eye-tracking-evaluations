/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AddVectorsDelegate$$EndInvoke
ENTRY_POINT: 06dc8944
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dc8860) */
/* WARNING: Removing unreachable block (ram,0x06dc8a14) */

void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AddVectorsDelegate__EndInvoke(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 *unaff_x19;
  int unaff_w21;
  long lVar6;
  long *unaff_x23;
  int unaff_w24;
  
  if (unaff_w21 == 1) {
    plVar1 = (long *)__cxa_begin_catch();
    lVar6 = *plVar1;
    __cxa_end_catch();
    if (unaff_w24 < 0) {
      FUN_04aa6560(&stack0x00000030,*(undefined8 *)PTR_DAT_08e90dd8);
    }
    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb28(lVar6);
    }
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_0701e078(unaff_x19 + 2,0);
  }
  else {
    if (unaff_w24 < 0) {
      FUN_04aa6560(&stack0x00000030,*(undefined8 *)PTR_DAT_08e90dd8);
    }
    if (unaff_w21 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_03d91ca0();
    }
    puVar2 = (undefined8 *)__cxa_begin_catch();
    uVar3 = thunk_FUN_03ce5214(PTR_DAT_08e695a0);
    uVar4 = thunk_FUN_03ce0d60(uVar3,*(undefined8 *)*puVar2);
    if ((uVar4 & 1) == 0) {
      puVar5 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar5 = *puVar2;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&PTR_PTR_088de0a8,0);
    }
    uVar3 = *puVar2;
    __cxa_end_catch();
    *unaff_x19 = 0xfffffffe;
    lVar6 = thunk_FUN_03ce5214(PTR_DAT_08e69550);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_0701e11c(unaff_x19 + 2,uVar3,0);
  }
  return;
}


