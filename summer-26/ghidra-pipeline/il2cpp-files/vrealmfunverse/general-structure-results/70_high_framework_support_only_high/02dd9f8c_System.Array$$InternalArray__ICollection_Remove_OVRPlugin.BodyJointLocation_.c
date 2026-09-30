/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 02dd9f8c
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


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_BodyJointLocation>
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long unaff_x21;
  undefined8 *puVar12;
  long unaff_x22;
  undefined8 *puVar13;
  long unaff_x29;
  undefined8 *puVar14;
  
  puVar5 = PTR_DAT_0631b7d0;
  puVar4 = PTR_DAT_0631b7c8;
  puVar3 = PTR_DAT_0631b710;
  puVar2 = PTR_DAT_0631b4d0;
  puVar1 = PTR_DAT_06312db8;
  puVar13 = *(undefined8 **)(unaff_x22 + 0x140);
  puVar9 = *(undefined8 **)(unaff_x20 + 0x7b0);
  puVar12 = *(undefined8 **)(unaff_x21 + 0x7b8);
  puVar14 = *(undefined8 **)(unaff_x29 + 0x7c0);
  if ((DAT_066c2a68 & 1) == 0) {
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
    DAT_066c2a68 = 1;
  }
  uVar6 = thunk_FUN_02b79644(*puVar13);
  FUN_03fbd788(uVar6,param_1,*puVar9,0);
  FUN_02dd6110(uVar6);
  uVar6 = thunk_FUN_02b79644(*puVar13);
  FUN_03fbd788(uVar6,param_1,*puVar12,0);
  FUN_02dd62b0(uVar6);
  uVar6 = thunk_FUN_02b79644(*puVar13);
  FUN_03fbd788(uVar6,param_1,*puVar14,0);
  FUN_02dd6450(uVar6);
  uVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_04cf4310(uVar6,param_1,*(undefined8 *)puVar4,0);
  FUN_02dcd83c(uVar6);
  uVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_04cf4310(uVar6,param_1,*(undefined8 *)puVar5,0);
  FUN_02dd65f0(uVar6);
  uVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_04380420(uVar6,param_1,*(undefined8 *)PTR_DAT_0631b7e0,0);
  FUN_02dd6768(uVar6);
  uVar10 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  uVar6 = thunk_FUN_02b79644(*puVar13);
  FUN_03fbd788(uVar6,param_1,*(undefined8 *)PTR_DAT_0631b7d8,0);
  lVar7 = FUN_04dc0fdc(uVar10,uVar6,0);
  if (lVar7 == 0) {
    lVar8 = 0;
    plVar11 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar11 = 0;
  }
  else {
    uVar6 = *puVar13;
    lVar8 = thunk_FUN_02b79548(lVar7,uVar6);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(lVar7,uVar6);
    }
    uVar6 = *puVar13;
    plVar11 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar11 = lVar8;
    lVar8 = thunk_FUN_02b79548(lVar7,uVar6);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(lVar7,uVar6);
    }
  }
  thunk_FUN_02bb0e9c(plVar11,lVar8);
  return;
}


