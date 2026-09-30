/*
FUNCTION_NAME: OVRManager.PassthroughCapabilities$$.ctor
ENTRY_POINT: 01a0a948
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRManager_PassthroughCapabilities___ctor(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long lVar3;
  long unaff_x21;
  uint unaff_w22;
  undefined4 uVar4;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s15;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  
  uStack0000000000000000 = unaff_s15;
  while( true ) {
    uStack0000000000000004 = unaff_s8;
    uStack0000000000000008 = unaff_s9;
    uVar2 = FUN_026f07f4(param_1);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    do {
      unaff_w22 = unaff_w22 + 1;
      if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)unaff_w22) {
        return 0;
      }
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar3 = *(long *)(unaff_x21 + (long)(int)unaff_w22 * 8 + 0x20);
      if (lVar3 == 0) goto LAB_01a0a9a4;
      uVar2 = FUN_026f2c34(lVar3,0);
    } while ((uVar2 & 1) == 0);
    if ((unaff_x19 == 0) || (lVar1 = FUN_0268fd10(), lVar1 == 0)) break;
    param_1 = FUN_0269f578(lVar1,0);
    unaff_s8 = param_2;
    unaff_s9 = param_3;
    lVar1 = FUN_0268fd10();
    if (lVar1 == 0) break;
    FUN_0269f810(lVar1,0);
    lVar1 = FUN_0268fd10(lVar3,0);
    if (lVar1 == 0) break;
    uVar4 = FUN_0269f578(lVar1,0);
    lVar3 = FUN_0268fd10(lVar3,0);
    if (lVar3 == 0) break;
    FUN_0269f810(lVar3,0);
    uStack0000000000000000 = uVar4;
  }
LAB_01a0a9a4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


