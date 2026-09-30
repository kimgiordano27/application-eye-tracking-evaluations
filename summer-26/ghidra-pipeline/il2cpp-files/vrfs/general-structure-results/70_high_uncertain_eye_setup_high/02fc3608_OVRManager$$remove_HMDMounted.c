/*
FUNCTION_NAME: OVRManager$$remove_HMDMounted
ENTRY_POINT: 02fc3608
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


uint OVRManager__remove_HMDMounted(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  uint unaff_w21;
  long *unaff_x22;
  long unaff_x24;
  int unaff_w25;
  int unaff_w26;
  long unaff_x27;
  
  do {
    FUN_031dbf48(0);
    do {
      uVar1 = *(uint *)(unaff_x24 + 0x18);
      unaff_w26 = unaff_w26 + 1;
      if (uVar1 <= unaff_w21) {
        return unaff_w21;
      }
      if (*(int *)(unaff_x24 + (long)(int)unaff_w21 * (long)(int)unaff_x27 + 0x20) == unaff_w25) {
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x148);
        if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
          lVar3 = FUN_015c2790(lVar3);
        }
        lVar4 = *unaff_x22;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_02fc35d4;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_015c2a80();
LAB_02fc35d4:
        uVar5 = (*(code *)*puVar2)();
        if ((uVar5 & 1) != 0) {
          return unaff_w21;
        }
        uVar1 = *(uint *)(unaff_x24 + 0x18);
      }
      if (uVar1 <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      unaff_w21 = *(uint *)(unaff_x24 + (int)unaff_w21 * unaff_x27 + 0x24);
    } while (unaff_w26 < (int)uVar1);
  } while( true );
}


