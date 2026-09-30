/*
FUNCTION_NAME: OVRPlugin$$get_positionSupported
ENTRY_POINT: 02c19358
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_positionSupported(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar2;
  long unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000008;
  
  do {
    lVar2 = unaff_x22;
    if (unaff_x23 == 0) {
      if (unaff_x19 == 0) goto LAB_02c19474;
      FUN_02ae137c();
      if (unaff_x21[4] != 0) goto LAB_02c1939c;
    }
    else {
      *(long *)(unaff_x23 + 0x40) = lVar2;
      thunk_FUN_0188fd20((long *)(unaff_x23 + 0x40),lVar2);
      if (unaff_x21[4] != 0) {
        if (unaff_x19 == 0) goto LAB_02c19474;
LAB_02c1939c:
        FUN_02ae137c();
      }
    }
    uVar1 = FUN_02bccfd8((long)&stack0x00000008 + 4,0);
    FUN_02a43498(*unaff_x27,uVar1,0);
    (**(code **)(*unaff_x21 + 0x1a8))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x1b0));
    if (unaff_x19 == 0) goto LAB_02c19474;
    FUN_02ae137c();
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)in_stack_00000008._4_4_) {
      uVar1 = *(undefined8 *)PTR_DAT_038031d0;
      if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      FUN_02bddb5c(uVar1,0);
      if (unaff_x19 != 0) {
        FUN_02ae0008();
        return;
      }
LAB_02c19474:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if (*(uint *)(unaff_x20 + 0x18) <= in_stack_00000008._4_4_) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    unaff_x21 = *(long **)(unaff_x20 + (long)(int)in_stack_00000008._4_4_ * 8 + 0x20);
    if (unaff_x21 == (long *)0x0) goto LAB_02c19474;
    if (unaff_x21[4] == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_02bccfd8((long)&stack0x00000008 + 4,0);
      uVar1 = FUN_02a43498(*unaff_x28,uVar1,0);
    }
    unaff_x22 = thunk_FUN_01861bbc(*unaff_x25);
    FUN_02c19af4(unaff_x22,unaff_x21,uVar1);
    unaff_x23 = lVar2;
  } while( true );
}


