/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_GetRenderModelPaths
ENTRY_POINT: 036a29b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_68_0__ovrp_GetRenderModelPaths
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long lVar4;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined4 uVar5;
  
  while (unaff_x21 != 0) {
    lVar4 = *(long *)(param_1 + 0x38);
    lVar3 = FUN_04070398(unaff_x21,0);
    if ((lVar3 == 0) || (uVar5 = FUN_0407d66c(lVar3,0), lVar4 == 0)) break;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar4 = lVar4 + unaff_x23;
    *(undefined4 *)(lVar4 + 0x20) = uVar5;
    *(undefined4 *)(lVar4 + 0x24) = param_3;
    *(undefined4 *)(lVar4 + 0x28) = param_4;
    *(undefined4 *)(lVar4 + 0x2c) = param_5;
    do {
      unaff_x20 = unaff_x20 + 1;
      unaff_x23 = unaff_x23 + 0x10;
      if (unaff_x20 == 0x18) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_036a2a18;
      unaff_x21 = FUN_030f28e4(*(long *)(unaff_x19 + 0x58),unaff_x20 & 0xffffffff,*unaff_x24);
      if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_036a2a18;
      uVar1 = FUN_030f28e4(*(long *)(unaff_x19 + 0x58),unaff_x20 & 0xffffffff,*unaff_x24);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*unaff_x25);
      }
      uVar2 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                        (uVar1,0,0);
    } while ((uVar2 & 1) != 0);
    param_1 = *(long *)(unaff_x19 + 0x48);
    if (param_1 == 0) break;
  }
LAB_036a2a18:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


