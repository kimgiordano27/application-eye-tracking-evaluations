/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakEnum$$set_Value
ENTRY_POINT: 028e22b4
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(param_2 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
                    /* try { // try from 028e22e0 to 029e22e7 has its CatchHandler @ 028e2390 */
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 028e22e8 to 029e2367 has its CatchHandler @ 028e2078 */
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0185daa4();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
  if (lVar3 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *unaff_x21;
    uVar2 = unaff_x21[1];
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    uVar5 = FUN_02171fa4(lVar3,uVar1,uVar2,&stack0x00000010,
                         *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xf8));
    if ((uVar5 & 1) == 0) {
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if (lVar3 != 0) {
        FUN_02170834(lVar3,*unaff_x21,unaff_x21[1]);
        if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        FUN_028e26c0();
        return;
      }
    }
    else {
      lVar3 = FUN_02afcf34();
      if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02afcff4(lVar3,0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


