/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$GetFirstLayerFromLayerMask
ENTRY_POINT: 072db4cc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneNavigation__GetFirstLayerFromLayerMask(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined8 in_stack_00000008;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_092c3960);
  *(undefined1 *)(unaff_x21 + 0xaef) = 1;
  in_stack_00000008 = 0;
  if (unaff_x20 == 0) goto LAB_072db6ac;
  iVar3 = FUN_05ebb914();
  if (iVar3 == 1) {
    if (*(long *)(unaff_x20 + 0x38) == 0) goto LAB_072db6ac;
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x80);
    uVar4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0928b3d0);
    FUN_0678a1dc();
    if (lVar5 == 0) goto LAB_072db6ac;
    FUN_0678cdc4(lVar5,uVar4,*(undefined8 *)PTR_DAT_0928b3e0);
  }
  puVar1 = PTR_DAT_092c2a00;
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
    uVar4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c2a00);
    FUN_0678a1dc();
    puVar2 = PTR_DAT_092c2b28;
    if (lVar5 != 0) {
      FUN_0678cdc4(lVar5,uVar4,*(undefined8 *)PTR_DAT_092c2b28);
      if (*(long *)(unaff_x20 + 0x38) != 0) {
        lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x30);
        uVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
        FUN_0678a1dc();
        if (lVar5 != 0) {
          FUN_0678cdc4(lVar5,uVar4,*(undefined8 *)puVar2);
          if (*(long *)(unaff_x20 + 0x38) != 0) {
            lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
            uVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
            FUN_0678a1dc();
            if (lVar5 != 0) {
              FUN_0678cdc4(lVar5,uVar4,*(undefined8 *)puVar2);
              if (*(long *)(unaff_x20 + 0x38) != 0) {
                lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x40);
                uVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
                FUN_0678a1dc();
                if (lVar5 != 0) {
                  FUN_0678cdc4(lVar5,uVar4,*(undefined8 *)puVar2);
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
LAB_072db6ac:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


