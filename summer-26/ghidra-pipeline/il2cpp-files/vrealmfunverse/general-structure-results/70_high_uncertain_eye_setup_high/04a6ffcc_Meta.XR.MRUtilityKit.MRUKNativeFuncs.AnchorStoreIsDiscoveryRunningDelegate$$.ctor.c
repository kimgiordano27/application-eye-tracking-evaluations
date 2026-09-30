/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreIsDiscoveryRunningDelegate$$.ctor
ENTRY_POINT: 04a6ffcc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreIsDiscoveryRunningDelegate___ctor(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  undefined8 unaff_x20;
  int unaff_w21;
  long lVar8;
  
  FUN_04a6fc0c();
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar2 = *(uint *)(unaff_x19 + 0x24);
    lVar8 = *(long *)(unaff_x19 + 0x18);
    uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
    *(uint *)(unaff_x19 + 0x24) = uVar2 + 1;
    if (lVar8 != 0) {
      iVar4 = 0;
      iVar5 = (int)uVar6;
      if (iVar5 != 0) {
        iVar4 = unaff_w21 / iVar5;
      }
      uVar3 = unaff_w21 - iVar4 * iVar5;
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        piVar1 = (int *)(lVar8 + 0x20 + (long)(int)uVar2 * 0x10);
        *(undefined8 *)(piVar1 + 2) = unaff_x20;
        lVar7 = *(long *)(unaff_x19 + 0x10);
        *piVar1 = unaff_w21;
        if (lVar7 == 0) goto LAB_04a700f4;
        if ((uVar3 < *(uint *)(lVar7 + 0x18)) && (uVar2 < *(uint *)(lVar8 + 0x18))) {
          lVar7 = lVar7 + (ulong)uVar3 * 4;
          *(int *)(lVar8 + 0x20 + (long)(int)uVar2 * 0x10 + 4) = *(int *)(lVar7 + 0x20) + -1;
          *(uint *)(lVar7 + 0x20) = uVar2 + 1;
          *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
          *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
          return 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
  }
LAB_04a700f4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


