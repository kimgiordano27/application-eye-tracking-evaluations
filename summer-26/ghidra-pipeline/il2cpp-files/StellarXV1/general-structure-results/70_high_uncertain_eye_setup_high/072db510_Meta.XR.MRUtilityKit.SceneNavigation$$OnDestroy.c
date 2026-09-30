/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$OnDestroy
ENTRY_POINT: 072db510
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneNavigation__OnDestroy(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x80);
  uVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0928b3d0);
  FUN_0678a1dc();
  if (lVar4 != 0) {
    FUN_0678cdc4(lVar4,uVar3,*(undefined8 *)PTR_DAT_0928b3e0);
    puVar1 = PTR_DAT_092c2a00;
    if (*(long *)(unaff_x20 + 0x38) != 0) {
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
      uVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c2a00);
      FUN_0678a1dc();
      puVar2 = PTR_DAT_092c2b28;
      if (lVar4 != 0) {
        FUN_0678cdc4(lVar4,uVar3,*(undefined8 *)PTR_DAT_092c2b28);
        if (*(long *)(unaff_x20 + 0x38) != 0) {
          lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x30);
          uVar3 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
          FUN_0678a1dc();
          if (lVar4 != 0) {
            FUN_0678cdc4(lVar4,uVar3,*(undefined8 *)puVar2);
            if (*(long *)(unaff_x20 + 0x38) != 0) {
              lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
              uVar3 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
              FUN_0678a1dc();
              if (lVar4 != 0) {
                FUN_0678cdc4(lVar4,uVar3,*(undefined8 *)puVar2);
                if (*(long *)(unaff_x20 + 0x38) != 0) {
                  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x40);
                  uVar3 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
                  FUN_0678a1dc();
                  if (lVar4 != 0) {
                    FUN_0678cdc4(lVar4,uVar3,*(undefined8 *)puVar2);
                    if ((*(long *)(unaff_x20 + 0x30) != 0) && (*(long *)(unaff_x19 + 0x90) != 0)) {
                      FUN_06c76b60(*(long *)(unaff_x19 + 0x90),
                                   *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x10),
                                   &stack0x00000008,*(undefined8 *)PTR_DAT_092c3eb0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


