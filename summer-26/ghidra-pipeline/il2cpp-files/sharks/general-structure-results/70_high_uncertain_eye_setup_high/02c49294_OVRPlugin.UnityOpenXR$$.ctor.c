/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$.ctor
ENTRY_POINT: 02c49294
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR___ctor(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  while( true ) {
    if (*(uint *)(unaff_x21 + 3) <= (uint)unaff_x23) break;
    unaff_x21[unaff_x23 + 4] = unaff_x22;
    thunk_FUN_0188fd20(unaff_x21 + unaff_x23 + 4,unaff_x22);
    uVar1 = (uint)unaff_x23 + 1;
    if (unaff_w20 == uVar1) {
      FUN_02c49394();
      return;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) break;
    unaff_x23 = (long)(int)uVar1;
    unaff_x22 = *(long *)(unaff_x19 + unaff_x23 * 8 + 0x20);
    if (unaff_x22 == 0) {
      thunk_FUN_01851c08(PTR_DAT_037f87a8);
      uVar5 = thunk_FUN_01861bbc();
      uVar3 = thunk_FUN_01851c08(PTR_DAT_0380c838);
      uVar4 = thunk_FUN_01851c08(PTR_DAT_037fb630);
      FUN_02b3cc64(uVar5,uVar3,uVar4,0);
      uVar3 = thunk_FUN_01851c08(PTR_DAT_0380c840);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar5,uVar3);
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar2 = thunk_FUN_01861ac0(unaff_x22,*(undefined8 *)(*unaff_x21 + 0x40));
    if (lVar2 == 0) {
      uVar5 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar5,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


