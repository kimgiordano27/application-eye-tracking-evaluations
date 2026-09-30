/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Vector4f>
ENTRY_POINT: 02dda214
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


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_Vector4f>(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  
  puVar9 = PTR_DAT_0631b7d0;
  puVar8 = PTR_DAT_0631b7c8;
  puVar7 = PTR_DAT_0631b7c0;
  puVar6 = PTR_DAT_0631b7b8;
  puVar5 = PTR_DAT_0631b7b0;
  puVar4 = PTR_DAT_0631b710;
  puVar3 = PTR_DAT_0631b4d0;
  puVar2 = PTR_DAT_0631a140;
  puVar1 = PTR_DAT_06312db8;
  if ((DAT_066c2a69 & 1) == 0) {
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
    DAT_066c2a69 = 1;
  }
  uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_03fbd788(uVar10,param_1,*(undefined8 *)puVar5,0);
  FUN_02dd61e0(uVar10);
  uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_03fbd788(uVar10,param_1,*(undefined8 *)puVar6,0);
  FUN_02dd6380(uVar10);
  uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_03fbd788(uVar10,param_1,*(undefined8 *)puVar7,0);
  FUN_02dd6520(uVar10);
  uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_04cf4310(uVar10,param_1,*(undefined8 *)puVar8,0);
  FUN_02dcd974(uVar10);
  uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_04cf4310(uVar10,param_1,*(undefined8 *)puVar9,0);
  FUN_02dd66ac(uVar10);
  uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_04380420(uVar10,param_1,*(undefined8 *)PTR_DAT_0631b7e0,0);
  FUN_02dd6838(uVar10);
  uVar13 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
  uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_03fbd788(uVar10,param_1,*(undefined8 *)PTR_DAT_0631b7d8,0);
  lVar11 = FUN_04dc11c8(uVar13,uVar10,0);
  if (lVar11 == 0) {
    lVar12 = 0;
    plVar14 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar14 = 0;
  }
  else {
    uVar10 = *(undefined8 *)puVar2;
    lVar12 = thunk_FUN_02b79548(lVar11,uVar10);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(lVar11,uVar10);
    }
    uVar10 = *(undefined8 *)puVar2;
    plVar14 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar14 = lVar12;
    lVar12 = thunk_FUN_02b79548(lVar11,uVar10);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(lVar11,uVar10);
    }
  }
  thunk_FUN_02bb0e9c(plVar14,lVar12);
  return;
}


