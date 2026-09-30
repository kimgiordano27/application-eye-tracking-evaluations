/*
FUNCTION_NAME: OVRPlugin.Media$$IsCastingToRemoteClient
ENTRY_POINT: 026ce134
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_Media__IsCastingToRemoteClient(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  long unaff_x24;
  int unaff_w25;
  int unaff_w26;
  long unaff_x27;
  long unaff_x28;
  
  do {
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_2) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_026ce17c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_015c2a80();
LAB_026ce17c:
    uVar4 = (*(code *)*puVar2)();
    if ((uVar4 & 1) != 0) {
      return unaff_w22;
    }
    uVar1 = *(uint *)(unaff_x24 + 0x18);
    do {
      if (uVar1 <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      unaff_w22 = *(uint *)(unaff_x24 + unaff_x28 * unaff_x27 + 0x24);
      if ((int)uVar1 <= unaff_w26) {
        FUN_031dbf48(0);
      }
      uVar1 = *(uint *)(unaff_x24 + 0x18);
      unaff_w26 = unaff_w26 + 1;
      if (uVar1 <= unaff_w22) {
        return unaff_w22;
      }
      unaff_x28 = (long)(int)unaff_w22;
    } while (*(int *)(unaff_x24 + (long)(int)unaff_w22 * (long)(int)unaff_x27 + 0x20) != unaff_w25);
    param_2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
    if ((*(byte *)(param_2 + 0x132) & 1) == 0) {
      param_2 = FUN_015c2790(param_2);
    }
  } while( true );
}


