/*
FUNCTION_NAME: OVRPlugin.OVRP_1_34_0$$ovrp_EnqueueSubmitLayer2
ENTRY_POINT: 07a68e2c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_34_0__ovrp_EnqueueSubmitLayer2(float param_1)

{
  ulong uVar1;
  uint in_w8;
  uint uVar2;
  long in_x9;
  long lVar3;
  long in_x10;
  long in_x11;
  long in_x12;
  long unaff_x19;
  undefined8 uVar4;
  float fVar5;
  
  while (uVar2 = in_w8, fVar5 = param_1, in_x9 = in_x9 + 1, in_x10 != in_x9) {
    if (in_x11 == in_x9) goto LAB_07a68ec8;
    param_1 = *(float *)(in_x12 + in_x9 * 4);
    in_w8 = (uint)in_x9;
    if (param_1 <= fVar5) {
      param_1 = fVar5;
      in_w8 = uVar2;
    }
  }
  if (uVar2 != 0xffffffff) {
    lVar3 = *(long *)(unaff_x19 + 0x28);
    if (lVar3 == 0) {
LAB_07a68ecc:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if ((int)uVar2 < (int)*(uint *)(lVar3 + 0x18)) {
      if (*(uint *)(lVar3 + 0x18) <= uVar2) {
LAB_07a68ec8:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      uVar4 = *(undefined8 *)(lVar3 + (long)(int)uVar2 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar1 = FUN_089ca704(uVar4,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          FUN_089988a8(*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_092887f0,uVar4,0);
          return;
        }
        goto LAB_07a68ecc;
      }
    }
  }
  return;
}


