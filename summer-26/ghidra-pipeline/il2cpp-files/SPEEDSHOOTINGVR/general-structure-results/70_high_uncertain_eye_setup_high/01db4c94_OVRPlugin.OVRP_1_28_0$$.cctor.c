/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$.cctor
ENTRY_POINT: 01db4c94
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db4c34) */

void OVRPlugin_OVRP_1_28_0___cctor(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long unaff_x19;
  long lVar7;
  long unaff_x21;
  char cStack0000000000000028;
  char cStack000000000000002c;
  
  if (cStack0000000000000028 != '\0') {
    FUN_0102a860();
  }
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc52c();
  }
  if (param_2 == 1) {
    puVar2 = (undefined8 *)__cxa_begin_catch();
    uVar3 = thunk_FUN_010303a8(PTR_DAT_0234c5c8);
    uVar4 = thunk_FUN_0102bfdc(uVar3,*(undefined8 *)*puVar2);
    if ((uVar4 & 1) == 0) {
      puVar5 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar5 = *puVar2;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&PTR_PTR_0220e3b8,0);
    }
    uVar3 = *puVar2;
    __cxa_end_catch();
    if (cStack000000000000002c != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc52c(uVar3);
    }
  }
  else {
    if (param_2 != 1) {
      if (cStack000000000000002c != '\0') {
        if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        lVar7 = FUN_01db3820();
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        FUN_01cb97fc(lVar7,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_010dc9f4();
    }
    plVar6 = (long *)__cxa_begin_catch();
    lVar7 = *plVar6;
    __cxa_end_catch();
    if (cStack000000000000002c != '\0') {
      if ((*(long *)(unaff_x19 + 0x18) == 0) || (lVar1 = FUN_01db3820(), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      FUN_01cb97fc(lVar1,0);
    }
    if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc52c(lVar7);
    }
  }
  return;
}


