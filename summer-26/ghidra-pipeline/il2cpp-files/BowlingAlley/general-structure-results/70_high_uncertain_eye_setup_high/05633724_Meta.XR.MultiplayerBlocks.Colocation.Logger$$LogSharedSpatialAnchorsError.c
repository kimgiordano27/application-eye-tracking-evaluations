/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Logger$$LogSharedSpatialAnchorsError
ENTRY_POINT: 05633724
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MultiplayerBlocks_Colocation_Logger__LogSharedSpatialAnchorsError(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar7;
  int unaff_w21;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  FUN_05633324();
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x24);
    lVar8 = *(long *)(unaff_x19 + 0x18);
    iVar2 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
    *(uint *)(unaff_x19 + 0x24) = uVar1 + 1;
    if (lVar8 != 0) {
      iVar4 = 0;
      if (iVar2 != 0) {
        iVar4 = unaff_w21 / iVar2;
      }
      uVar3 = unaff_w21 - iVar4 * iVar2;
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(int *)(lVar8 + (long)(int)uVar1 * 0x28 + 0x20) = unaff_w21;
        uVar11 = unaff_x20[1];
        uVar10 = *unaff_x20;
        uVar9 = unaff_x20[2];
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          lVar7 = (long)(int)uVar1;
          lVar5 = lVar8 + lVar7 * 0x28;
          *(undefined8 *)(lVar5 + 0x40) = unaff_x20[3];
          *(undefined8 *)(lVar5 + 0x38) = uVar9;
          *(undefined8 *)(lVar5 + 0x30) = uVar11;
          *(undefined8 *)(lVar5 + 0x28) = uVar10;
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            thunk_FUN_0333a630(lVar8 + lVar7 * 0x28 + 0x40,0);
            lVar5 = *(long *)(unaff_x19 + 0x10);
            if (lVar5 == 0) goto LAB_05633884;
            if ((uVar3 < *(uint *)(lVar5 + 0x18)) && (uVar1 < *(uint *)(lVar8 + 0x18))) {
              piVar6 = (int *)(lVar5 + (long)(int)uVar3 * 4 + 0x20);
              *(int *)(lVar8 + lVar7 * 0x28 + 0x24) = *piVar6 + -1;
              *piVar6 = uVar1 + 1;
              *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
              *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
              return 1;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
  }
LAB_05633884:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


