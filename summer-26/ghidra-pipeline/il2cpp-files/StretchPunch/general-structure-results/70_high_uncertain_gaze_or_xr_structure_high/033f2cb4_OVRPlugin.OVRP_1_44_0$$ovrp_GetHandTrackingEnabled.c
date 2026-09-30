/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetHandTrackingEnabled
ENTRY_POINT: 033f2cb4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin_OVRP_1_44_0__ovrp_GetHandTrackingEnabled(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  
  uVar2 = _DAT_00bb0cd0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    *(undefined8 *)(param_1 + 0x28) = _UNK_00bb0cd8;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    uVar2 = _DAT_00bb1d40;
    if (uVar1 != 1) {
      *(undefined8 *)(param_1 + 0x38) = _UNK_00bb1d48;
      *(undefined8 *)(param_1 + 0x30) = uVar2;
      uVar2 = _DAT_00bb1ee0;
      if (2 < uVar1) {
        *(undefined8 *)(param_1 + 0x48) = _UNK_00bb1ee8;
        *(undefined8 *)(param_1 + 0x40) = uVar2;
        uVar2 = _DAT_00bb0450;
        if (uVar1 != 3) {
          *(undefined8 *)(param_1 + 0x58) = _UNK_00bb0458;
          *(undefined8 *)(param_1 + 0x50) = uVar2;
          uVar2 = _DAT_00bb1f90;
          if (4 < uVar1) {
            *(undefined8 *)(param_1 + 0x68) = _UNK_00bb1f98;
            *(undefined8 *)(param_1 + 0x60) = uVar2;
            uVar2 = _DAT_00bb1430;
            if (uVar1 != 5) {
              *(undefined8 *)(param_1 + 0x78) = _UNK_00bb1438;
              *(undefined8 *)(param_1 + 0x70) = uVar2;
              uVar2 = _DAT_00bb02e0;
              if (6 < uVar1) {
                *(undefined8 *)(param_1 + 0x88) = _UNK_00bb02e8;
                *(undefined8 *)(param_1 + 0x80) = uVar2;
                uVar2 = _DAT_00bb0170;
                if (uVar1 != 7) {
                  *(undefined8 *)(param_1 + 0x98) = _UNK_00bb0178;
                  *(undefined8 *)(param_1 + 0x90) = uVar2;
                  *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18) = param_1;
                  thunk_FUN_01e10808();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


