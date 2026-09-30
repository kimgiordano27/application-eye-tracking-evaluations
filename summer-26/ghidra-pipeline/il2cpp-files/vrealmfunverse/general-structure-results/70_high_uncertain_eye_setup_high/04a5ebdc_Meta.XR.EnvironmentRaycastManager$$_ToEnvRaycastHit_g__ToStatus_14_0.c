/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$<ToEnvRaycastHit>g__ToStatus|14_0
ENTRY_POINT: 04a5ebdc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_EnvironmentRaycastManager__<ToEnvRaycastHit>g__ToStatus_14_0(long *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  long *unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  int unaff_w27;
  long unaff_x28;
  long unaff_x29;
  
code_r0x04a5ebdc:
  puVar2 = (undefined8 *)FUN_02b7654c(param_1,param_2,0);
  param_1 = unaff_x23;
  do {
    uVar3 = (*(code *)*puVar2)(param_1,unaff_x24);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
    do {
      uVar6 = (uint)*(undefined8 *)(unaff_x25 + 0x18);
      if ((int)uVar6 <= unaff_w27) {
        thunk_FUN_02ba3594(PTR_DAT_0631cb60);
        uVar4 = thunk_FUN_02b79644();
        uVar5 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
        FUN_04d7b3f4(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar4);
      }
      if (uVar6 <= (uint)unaff_x26) {
LAB_04a5ec54:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      uVar1 = *(uint *)(unaff_x29 + 4);
      unaff_x26 = (ulong)uVar1;
      unaff_w27 = unaff_w27 + 1;
      if ((int)uVar1 < 0) {
        return 0;
      }
      if (uVar6 <= uVar1) goto LAB_04a5ec54;
      unaff_x29 = unaff_x28 + unaff_x26 * 0x10;
    } while (*(int *)(unaff_x28 + unaff_x26 * 0x10) != unaff_w22);
    param_1 = *(long **)(unaff_x20 + 0x30);
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    unaff_x24 = *(undefined8 *)(unaff_x29 + 8);
    param_2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_02b76218(param_2);
    }
    lVar7 = *param_1;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    unaff_x23 = param_1;
    if (uVar3 == 0) goto code_r0x04a5ebdc;
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    while (*(long *)(piVar8 + -2) != param_2) {
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
      if (uVar3 == 0) goto code_r0x04a5ebdc;
    }
    puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
  } while( true );
}


