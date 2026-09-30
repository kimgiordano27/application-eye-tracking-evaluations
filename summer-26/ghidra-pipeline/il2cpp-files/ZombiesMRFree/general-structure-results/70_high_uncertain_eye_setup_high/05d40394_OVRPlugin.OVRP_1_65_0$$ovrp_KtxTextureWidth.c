/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureWidth
ENTRY_POINT: 05d40394
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxTextureWidth(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  undefined4 unaff_w23;
  uint uVar4;
  long unaff_x24;
  undefined8 uVar5;
  
  while (lVar3 = *param_1, lVar3 != 0) {
    uVar4 = (uint)unaff_x24;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_05d40434:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    if ((*(long *)(unaff_x19 + 0xc0) == 0) ||
       (lVar2 = *(long *)(*(long *)(unaff_x19 + 0xc0) + 0x48), lVar2 == 0)) break;
    uVar1 = *(uint *)(lVar3 + unaff_x24 * 4 + 0x20);
    if (*(uint *)(lVar2 + 0x18) <= uVar1) goto LAB_05d40434;
    lVar3 = *(long *)(unaff_x19 + 0x140);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_05d40434;
    lVar2 = lVar2 + (long)(int)uVar1 * 0x10;
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    lVar3 = lVar3 + unaff_x24 * 0x10;
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    lVar3 = *(long *)(unaff_x19 + 0xd0);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_05d40434;
    *(undefined4 *)(lVar3 + unaff_x24 * 4 + 0x20) = unaff_w23;
    unaff_w22 = unaff_w22 + 1;
    if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)unaff_w22) {
      return;
    }
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w22) goto LAB_05d40434;
    lVar3 = *unaff_x21;
    unaff_x24 = (long)*(int *)(unaff_x20 + (long)(int)unaff_w22 * 4 + 0x20);
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar3 = *unaff_x21;
    }
    param_1 = *(long **)(lVar3 + 0xb8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


