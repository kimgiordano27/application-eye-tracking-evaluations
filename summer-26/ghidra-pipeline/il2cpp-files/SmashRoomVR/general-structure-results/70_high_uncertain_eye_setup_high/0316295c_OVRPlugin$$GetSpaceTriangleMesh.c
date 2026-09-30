/*
FUNCTION_NAME: OVRPlugin$$GetSpaceTriangleMesh
ENTRY_POINT: 0316295c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceTriangleMesh(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  uint *unaff_x20;
  
  uVar4 = (*(code *)*param_1)();
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
LAB_03162998:
    FUN_03161b4c();
    return;
  }
  lVar5 = *(long *)(unaff_x19 + 0x38);
  if (lVar5 != 0) {
    uVar2 = *(uint *)(unaff_x19 + 0x74);
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 <= uVar2) goto LAB_03162a58;
    lVar6 = *(long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
    if (lVar6 != 0) {
      if (*(float *)(lVar6 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
        if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar6 + 0x14)) {
          return;
        }
        uVar3 = uVar1 - 1;
        if ((int)(uVar2 + 1) <= (int)uVar3) {
          uVar3 = uVar2 + 1;
        }
        *unaff_x20 = uVar3;
        if (uVar1 <= uVar3) goto LAB_03162a58;
        uVar4 = (ulong)(int)uVar3;
      }
      else {
        uVar2 = uVar2 - 1 & ((int)(uVar2 - 1) >> 0x1f ^ 0xffffffffU);
        *unaff_x20 = uVar2;
        if (uVar1 <= uVar2) {
LAB_03162a58:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar4 = (ulong)uVar2;
      }
      if (*(long *)(lVar5 + uVar4 * 8 + 0x20) != 0) goto LAB_03162998;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


