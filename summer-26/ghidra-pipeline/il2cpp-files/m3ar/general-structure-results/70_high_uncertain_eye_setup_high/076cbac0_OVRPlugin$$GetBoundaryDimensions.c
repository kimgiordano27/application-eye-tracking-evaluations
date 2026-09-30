/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryDimensions
ENTRY_POINT: 076cbac0
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBoundaryDimensions(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  int in_w9;
  ulong uVar4;
  int in_w10;
  int *piVar5;
  uint in_w11;
  long unaff_x19;
  long *plVar6;
  undefined1 unaff_w21;
  long *unaff_x22;
  
  uVar1 = in_w9 + 1;
  if (uVar1 == in_w11) {
    uVar1 = 1;
  }
  else {
    if (in_w11 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    lVar3 = *(long *)(param_1 + (long)(int)uVar1 * 8 + 0x20);
    if ((lVar3 == 0) || (plVar6 = *(long **)(lVar3 + 0x18), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_076cbb68;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar6,*unaff_x22,0);
LAB_076cbb68:
    uVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    uVar1 = uVar1 & 1;
  }
  if (uVar1 != 0 || in_w10 != 0) {
    FUN_076cbbac();
  }
  *(undefined1 *)(unaff_x19 + 0x4c) = unaff_w21;
  return;
}


