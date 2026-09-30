/*
FUNCTION_NAME: OVRManager$$get_cpuLevel
ENTRY_POINT: 02fc6f14
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


uint OVRManager__get_cpuLevel(code *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x21;
  uint unaff_w22;
  long unaff_x24;
  int unaff_w25;
  int unaff_w26;
  long unaff_x27;
  
  do {
    uVar3 = (*param_1)();
    if ((uVar3 & 1) != 0) {
      return unaff_w22;
    }
    uVar1 = *(uint *)(unaff_x24 + 0x18);
    do {
      if (uVar1 <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      unaff_w22 = *(uint *)(unaff_x24 + unaff_x27 * 0x10 + 0x24);
      if ((int)uVar1 <= unaff_w26) {
        FUN_031dbf48(0);
      }
      uVar1 = *(uint *)(unaff_x24 + 0x18);
      unaff_w26 = unaff_w26 + 1;
      if (uVar1 <= unaff_w22) {
        return unaff_w22;
      }
      unaff_x27 = (long)(int)unaff_w22;
    } while (*(int *)(unaff_x24 + (long)(int)unaff_w22 * 0x10 + 0x20) != unaff_w25);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x148);
    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
      lVar4 = FUN_015c2790(lVar4);
    }
    lVar5 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02fc6f10;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_015c2a80();
LAB_02fc6f10:
    param_1 = (code *)*puVar2;
  } while( true );
}


