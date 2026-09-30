/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$get_AnchorUpdatedEvent
ENTRY_POINT: 072c7b88
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__get_AnchorUpdatedEvent
               (long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_0988fa26 & 1) == 0) {
    FUN_04077588(PTR_DAT_092c2b68);
    FUN_04077588(PTR_DAT_092c36b8);
    FUN_04077588(PTR_DAT_092c36c0);
    FUN_04077588(PTR_DAT_092c2bc0);
    DAT_0988fa26 = 1;
  }
  if (*param_2 == 0) {
    lVar2 = *(long *)PTR_DAT_092c2b68;
    lVar1 = *(long *)(lVar2 + 0x38);
    if (lVar1 == 0) {
      FUN_040b1b28(lVar2);
      lVar1 = *(long *)(lVar2 + 0x38);
    }
    lVar1 = *(long *)(lVar1 + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_040b1acc();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar1 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_040b1acc();
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    lVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c2bc0);
    FUN_073436a0(lVar1,uVar3,0);
    *param_2 = lVar1;
    thunk_FUN_040ec700(param_2,lVar1);
  }
  if (*param_3 == 0) {
    lVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c36c0);
    FUN_072c7cfc();
    *param_3 = lVar1;
    thunk_FUN_040ec700(param_3,lVar1);
  }
  if ((char)param_1[5] != '\0') {
    lVar1 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(lVar1 + 0x18) != 0) {
      FUN_0678cfe4(*(long *)(lVar1 + 0x18),*param_2,*(undefined8 *)PTR_DAT_092c36b8);
      return;
    }
  }
  return;
}


