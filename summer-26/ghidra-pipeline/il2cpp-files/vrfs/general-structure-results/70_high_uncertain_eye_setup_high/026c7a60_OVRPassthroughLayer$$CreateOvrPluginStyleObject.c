/*
FUNCTION_NAME: OVRPassthroughLayer$$CreateOvrPluginStyleObject
ENTRY_POINT: 026c7a60
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPassthroughLayer__CreateOvrPluginStyleObject(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  ulong uVar3;
  long unaff_x24;
  long *plVar4;
  long *unaff_x26;
  
  if (unaff_x24 == 0) {
    FUN_031dba18(0x10,0);
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar1 = thunk_FUN_015d0480();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160f170();
  }
  if (0 < *(int *)(lVar1 + 0x18)) {
    uVar3 = 0;
    plVar4 = (long *)(lVar1 + 0x20);
    do {
      uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
      if (uVar2 <= uVar3) {
LAB_026c7b50:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      if (*plVar4 == 0) {
        FUN_031dba18(0x11,0);
        uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
      }
      if (uVar2 <= uVar3) goto LAB_026c7b50;
      (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48) + 8))
                ((int)plVar4[1],*(undefined4 *)((long)plVar4 + 0xc));
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 2;
    } while ((long)uVar3 < (long)*(int *)(lVar1 + 0x18));
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  lVar1 = FUN_03f038c8(0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  FUN_04d772fc();
  return;
}


