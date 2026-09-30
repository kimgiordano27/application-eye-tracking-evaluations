/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Vector4s>
ENTRY_POINT: 02dda25c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_Vector4s>(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long *plVar5;
  long unaff_x24;
  long unaff_x25;
  undefined8 *puVar6;
  long unaff_x26;
  undefined8 *puVar7;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined8 *puVar8;
  undefined8 *unaff_x29;
  
  puVar8 = *(undefined8 **)(unaff_x28 + 0x7c8);
  puVar7 = *(undefined8 **)(unaff_x26 + 2000);
  puVar6 = *(undefined8 **)(unaff_x25 + 0x710);
  plVar5 = *(long **)(unaff_x23 + 0x4d0);
  if ((*(byte *)(unaff_x24 + 0xa69) & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631a140);
    FUN_02b3c81c(PTR_DAT_0631b710);
    FUN_02b3c81c(PTR_DAT_06312db8);
    FUN_02b3c81c(PTR_DAT_0631b4d0);
    FUN_02b3c81c(PTR_DAT_0631b7c0);
    FUN_02b3c81c(PTR_DAT_0631b7d8);
    FUN_02b3c81c(PTR_DAT_0631b7d0);
    FUN_02b3c81c(PTR_DAT_0631b7c8);
    FUN_02b3c81c(PTR_DAT_0631b7e0);
    FUN_02b3c81c(PTR_DAT_0631b7b8);
    FUN_02b3c81c(PTR_DAT_0631b7b0);
    *(undefined1 *)(unaff_x24 + 0xa69) = 1;
  }
  uVar1 = thunk_FUN_02b79644(*unaff_x22);
  FUN_03fbd788(uVar1,param_1,*unaff_x20,0);
  FUN_02dd61e0(uVar1);
  uVar1 = thunk_FUN_02b79644(*unaff_x22);
  FUN_03fbd788(uVar1,param_1,*unaff_x21,0);
  FUN_02dd6380(uVar1);
  uVar1 = thunk_FUN_02b79644(*unaff_x22);
  FUN_03fbd788(uVar1,param_1,*unaff_x29,0);
  FUN_02dd6520(uVar1);
  uVar1 = thunk_FUN_02b79644(*unaff_x27);
  FUN_04cf4310(uVar1,param_1,*puVar8,0);
  FUN_02dcd974(uVar1);
  uVar1 = thunk_FUN_02b79644(*unaff_x27);
  FUN_04cf4310(uVar1,param_1,*puVar7,0);
  FUN_02dd66ac(uVar1);
  uVar1 = thunk_FUN_02b79644(*puVar6);
  FUN_04380420(uVar1,param_1,*(undefined8 *)PTR_DAT_0631b7e0,0);
  FUN_02dd6838(uVar1);
  uVar4 = *(undefined8 *)(*(long *)(*plVar5 + 0xb8) + 8);
  uVar1 = thunk_FUN_02b79644(*unaff_x22);
  FUN_03fbd788(uVar1,param_1,*(undefined8 *)PTR_DAT_0631b7d8,0);
  lVar2 = FUN_04dc11c8(uVar4,uVar1,0);
  if (lVar2 == 0) {
    lVar3 = 0;
    plVar5 = (long *)(*(long *)(*plVar5 + 0xb8) + 8);
    *plVar5 = 0;
  }
  else {
    uVar1 = *unaff_x22;
    lVar3 = thunk_FUN_02b79548(lVar2,uVar1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(lVar2,uVar1);
    }
    uVar1 = *unaff_x22;
    plVar5 = (long *)(*(long *)(*plVar5 + 0xb8) + 8);
    *plVar5 = lVar3;
    lVar3 = thunk_FUN_02b79548(lVar2,uVar1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(lVar2,uVar1);
    }
  }
  thunk_FUN_02bb0e9c(plVar5,lVar3);
  return;
}


