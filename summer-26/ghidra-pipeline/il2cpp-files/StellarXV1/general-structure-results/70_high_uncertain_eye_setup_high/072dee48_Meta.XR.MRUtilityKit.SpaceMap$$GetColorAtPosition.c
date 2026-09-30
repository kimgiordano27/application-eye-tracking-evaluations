/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap$$GetColorAtPosition
ENTRY_POINT: 072dee48
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMap__GetColorAtPosition(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_09285e40);
    FUN_04077588(PTR_DAT_092b92f0);
    FUN_04077588(PTR_DAT_092c40f8);
    FUN_04077588(PTR_DAT_092c40f0);
    *(undefined1 *)(unaff_x21 + 0xb28) = 1;
  }
  lVar4 = thunk_FUN_040b4efc(*unaff_x22);
  FUN_076bca34(lVar4,0);
  puVar3 = PTR_DAT_092c40f8;
  puVar2 = PTR_DAT_092b92f0;
  puVar1 = PTR_DAT_09285e40;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = unaff_x20;
    thunk_FUN_040ec700();
    *(undefined8 *)(lVar4 + 0x18) = param_2;
    thunk_FUN_040ec700((undefined8 *)(lVar4 + 0x18),param_2);
    uVar5 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
    FUN_075d444c(uVar5,lVar4,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_07303384(uVar5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


