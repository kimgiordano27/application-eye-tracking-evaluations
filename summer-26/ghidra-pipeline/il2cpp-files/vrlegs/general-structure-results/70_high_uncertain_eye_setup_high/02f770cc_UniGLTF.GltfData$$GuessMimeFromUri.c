/*
FUNCTION_NAME: UniGLTF.GltfData$$GuessMimeFromUri
ENTRY_POINT: 02f770cc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f77340) */

void UniGLTF_GltfData__GuessMimeFromUri(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  int in_w8;
  long lVar6;
  long unaff_x28;
  long *unaff_x29;
  int in_stack_00000000;
  
  if (in_w8 != 0) {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (unaff_x28 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c();
  }
  if (in_stack_00000000 == 1) {
    puVar1 = (undefined8 *)__cxa_begin_catch();
    uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
    uVar3 = thunk_FUN_01a6848c(uVar2,*(undefined8 *)*puVar1);
    if ((uVar3 & 1) == 0) {
      puVar4 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar4,&PTR_PTR_03abd138,0);
    }
    __cxa_end_catch();
    FUN_02f7453c();
    lVar6 = 0;
  }
  else {
    if (in_stack_00000000 != 1) {
      FUN_02f73644();
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar3 = FUN_02f651a8();
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02f66c54();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b3fef0();
    }
    plVar5 = (long *)__cxa_begin_catch();
    lVar6 = *plVar5;
    __cxa_end_catch();
  }
  FUN_02f73644();
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_02f651a8();
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02f66c54();
  }
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar6);
  }
  return;
}


