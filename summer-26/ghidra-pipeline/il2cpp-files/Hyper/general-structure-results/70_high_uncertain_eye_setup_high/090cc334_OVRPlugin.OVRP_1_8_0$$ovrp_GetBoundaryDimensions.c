/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryDimensions
ENTRY_POINT: 090cc334
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryDimensions(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint in_w9;
  uint in_w10;
  uint uVar2;
  long in_x11;
  long in_x12;
  uint in_w13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  long *plVar3;
  
  while ((uint)in_x12 < in_w13) {
    if (param_3 == 0) {
LAB_090cc3b4:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(uint *)(param_3 + 0x18) <= (uint)in_x11) break;
    uVar2 = (uint)in_x11 + 1;
    *(undefined4 *)(param_3 + in_x11 * 4 + 0x20) = *(undefined4 *)(unaff_x20 + in_x12 * 4 + 0x20);
    if (in_w10 == uVar2) {
      do {
        if (unaff_x21 == 0) goto LAB_090cc3b4;
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_x22)
        goto OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryVisible;
        *(long *)(unaff_x21 + unaff_x22 * 8 + 0x20) = param_3;
        thunk_FUN_049ee3d8(unaff_x24 + unaff_x22 * 8);
        unaff_x22 = unaff_x22 + 1;
        if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)unaff_x22) {
          return;
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_x22)
        goto OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryVisible;
        plVar3 = (long *)(unaff_x19 + unaff_x22 * 8 + 0x20);
        lVar1 = *plVar3;
        if (lVar1 == 0) goto LAB_090cc3b4;
        param_3 = FUN_04947fd0(*unaff_x23,*(undefined4 *)(lVar1 + 0x18));
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_x22)
        goto OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryVisible;
        param_1 = *plVar3;
        if (param_1 == 0) goto LAB_090cc3b4;
        in_w9 = *(uint *)(param_1 + 0x18);
      } while ((int)in_w9 < 1);
      in_w10 = in_w9 & ((int)in_w9 >> 0x1f ^ 0xffffffffU);
      uVar2 = 0;
    }
    if (in_w9 == uVar2) break;
    if (unaff_x20 == 0) goto LAB_090cc3b4;
    in_x11 = (long)(int)uVar2;
    in_w13 = *(uint *)(unaff_x20 + 0x18);
    in_x12 = (long)*(int *)(param_1 + in_x11 * 4 + 0x20);
  }
OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryVisible:
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


