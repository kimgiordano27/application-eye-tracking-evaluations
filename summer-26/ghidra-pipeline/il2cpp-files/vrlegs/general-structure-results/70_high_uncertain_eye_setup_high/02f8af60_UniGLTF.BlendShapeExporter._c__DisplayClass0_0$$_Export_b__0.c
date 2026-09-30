/*
FUNCTION_NAME: UniGLTF.BlendShapeExporter.<>c__DisplayClass0_0$$<Export>b__0
ENTRY_POINT: 02f8af60
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f8adbc) */
/* WARNING: Removing unreachable block (ram,0x02f8adc8) */
/* WARNING: Removing unreachable block (ram,0x02f8add4) */
/* WARNING: Removing unreachable block (ram,0x02f8ab6c) */
/* WARNING: Removing unreachable block (ram,0x02f8adb4) */
/* WARNING: Removing unreachable block (ram,0x02f8ab80) */
/* WARNING: Removing unreachable block (ram,0x02f8adb8) */
/* WARNING: Removing unreachable block (ram,0x02f8abac) */
/* WARNING: Removing unreachable block (ram,0x02f8ac04) */
/* WARNING: Removing unreachable block (ram,0x02f8abd4) */
/* WARNING: Removing unreachable block (ram,0x02f8abe8) */
/* WARNING: Removing unreachable block (ram,0x02f8abfc) */
/* WARNING: Removing unreachable block (ram,0x02f8ac24) */
/* WARNING: Removing unreachable block (ram,0x02f8ac34) */
/* WARNING: Removing unreachable block (ram,0x02f8ac40) */
/* WARNING: Removing unreachable block (ram,0x02f8ac44) */
/* WARNING: Removing unreachable block (ram,0x02f8ac4c) */
/* WARNING: Removing unreachable block (ram,0x02f8ac50) */
/* WARNING: Removing unreachable block (ram,0x02f8ac5c) */
/* WARNING: Removing unreachable block (ram,0x02f8adc4) */
/* WARNING: Removing unreachable block (ram,0x02f8ac74) */
/* WARNING: Removing unreachable block (ram,0x02f8acbc) */
/* WARNING: Removing unreachable block (ram,0x02f8ac8c) */
/* WARNING: Removing unreachable block (ram,0x02f8addc) */
/* WARNING: Removing unreachable block (ram,0x02f8ac94) */
/* WARNING: Removing unreachable block (ram,0x02f8acc4) */
/* WARNING: Removing unreachable block (ram,0x02f8accc) */
/* WARNING: Removing unreachable block (ram,0x02f8acd8) */
/* WARNING: Removing unreachable block (ram,0x02f8acdc) */
/* WARNING: Removing unreachable block (ram,0x02f8ace0) */
/* WARNING: Removing unreachable block (ram,0x02f8acec) */
/* WARNING: Removing unreachable block (ram,0x02f8acfc) */
/* WARNING: Removing unreachable block (ram,0x02f8ad10) */
/* WARNING: Removing unreachable block (ram,0x02f8ad20) */
/* WARNING: Removing unreachable block (ram,0x02f8ad30) */
/* WARNING: Removing unreachable block (ram,0x02f8add0) */
/* WARNING: Removing unreachable block (ram,0x02f8ad48) */
/* WARNING: Removing unreachable block (ram,0x02f8ad70) */
/* WARNING: Removing unreachable block (ram,0x02f8ad7c) */
/* WARNING: Removing unreachable block (ram,0x02f8b0e8) */

void UniGLTF_BlendShapeExporter_<>c__DisplayClass0_0__<Export>b__0(undefined8 param_1,int param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong unaff_x19;
  long lVar7;
  int in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (param_2 == 1) {
    plVar1 = (long *)__cxa_begin_catch(param_1);
    lVar7 = *plVar1;
    __cxa_end_catch();
    if (in_stack_00000018._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar7);
  }
  if (in_stack_00000018._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0(param_1);
  }
  puVar2 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
  uVar4 = thunk_FUN_01a6848c(uVar3,*(undefined8 *)*puVar2);
  if ((uVar4 & 1) == 0) {
    puVar6 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar6 = *puVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&PTR_PTR_03abd138,0);
  }
  plVar1 = (long *)*puVar2;
  *(long **)(&stack0x00000008 + (long)in_stack_00000010 * 8) = plVar1;
  __cxa_end_catch();
  lVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cdaa78);
  if (plVar1 != (long *)0x0) {
    if ((*plVar1 != lVar7) && (lVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cf3bd0), *plVar1 != lVar7)) {
      lVar7 = thunk_FUN_01a6ca08(PTR_DAT_03ccb048);
      if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
         (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7))
      goto LAB_02f8b074;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(plVar1);
  }
  thunk_FUN_01a6ca08(PTR_DAT_03cf3bd0);
  thunk_FUN_01a6ca08(PTR_DAT_03ccb048);
LAB_02f8b074:
  if ((unaff_x19 & 1) == 0) {
    return;
  }
  uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03d25710);
  uVar3 = FUN_0259f040(uVar3,0);
  thunk_FUN_01a6ca08(PTR_DAT_03d25618);
  uVar5 = thunk_FUN_01a89e68();
  FUN_02f8cc90(uVar5,uVar3,plVar1);
  uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03d25708);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar5,uVar3);
}


