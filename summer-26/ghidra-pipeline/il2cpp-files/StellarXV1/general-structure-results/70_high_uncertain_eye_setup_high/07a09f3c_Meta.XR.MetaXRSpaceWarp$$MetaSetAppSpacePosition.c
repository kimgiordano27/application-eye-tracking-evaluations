/*
FUNCTION_NAME: Meta.XR.MetaXRSpaceWarp$$MetaSetAppSpacePosition
ENTRY_POINT: 07a09f3c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MetaXRSpaceWarp__MetaSetAppSpacePosition(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x23;
  
  lVar1 = *unaff_x23;
  lVar4 = *(long *)(unaff_x19 + 0x28);
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar1 = *unaff_x23;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0xb8);
  lVar5 = puVar3[2];
  if (lVar5 == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar3 = *(undefined8 **)(*unaff_x23 + 0xb8);
    }
    uVar6 = *puVar3;
    lVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092efaa0);
    FUN_06cb998c(lVar5,uVar6,*(undefined8 *)PTR_DAT_092efac0,0);
    plVar2 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
    *plVar2 = lVar5;
    thunk_FUN_040ec700(plVar2,lVar5);
  }
  if (lVar4 != 0) {
    uVar6 = FUN_051d7d74(lVar4,lVar5,*(undefined8 *)PTR_DAT_092efaa8);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar6;
    thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x30),uVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


