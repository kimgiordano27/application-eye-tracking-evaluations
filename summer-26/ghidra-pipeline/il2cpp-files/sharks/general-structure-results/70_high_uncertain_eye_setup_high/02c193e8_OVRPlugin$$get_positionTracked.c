/*
FUNCTION_NAME: OVRPlugin$$get_positionTracked
ENTRY_POINT: 02c193e8
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_positionTracked(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  undefined8 *unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000008;
  
  do {
    FUN_02ae137c();
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)in_stack_00000008._4_4_) {
      uVar2 = *(undefined8 *)PTR_DAT_038031d0;
      if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      FUN_02bddb5c(uVar2,0);
      if (unaff_x19 != 0) {
        FUN_02ae0008();
        return;
      }
      break;
    }
    if (*(uint *)(unaff_x20 + 0x18) <= in_stack_00000008._4_4_) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    plVar3 = *(long **)(unaff_x20 + (long)(int)in_stack_00000008._4_4_ * 8 + 0x20);
    if (plVar3 == (long *)0x0) break;
    if (plVar3[4] == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_02bccfd8((long)&stack0x00000008 + 4,0);
      uVar2 = FUN_02a43498(*unaff_x28,uVar2,0);
    }
    lVar1 = thunk_FUN_01861bbc(*unaff_x25);
    FUN_02c19af4(lVar1,plVar3,uVar2);
    if (unaff_x22 == 0) {
      if (unaff_x19 == 0) break;
      FUN_02ae137c();
      if (plVar3[4] != 0) goto LAB_02c1939c;
    }
    else {
      *(long *)(unaff_x22 + 0x40) = lVar1;
      thunk_FUN_0188fd20((long *)(unaff_x22 + 0x40),lVar1);
      if (plVar3[4] != 0) {
        if (unaff_x19 == 0) break;
LAB_02c1939c:
        FUN_02ae137c();
      }
    }
    uVar2 = FUN_02bccfd8((long)&stack0x00000008 + 4,0);
    FUN_02a43498(*unaff_x27,uVar2,0);
    (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
    unaff_x22 = lVar1;
  } while (unaff_x19 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


