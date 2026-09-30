/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Bone>
ENTRY_POINT: 03539118
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Bone>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char in_NG;
  char in_OV;
  long lVar6;
  undefined8 uVar7;
  uint in_w8;
  long *unaff_x21;
  long lVar8;
  long lVar9;
  long unaff_x25;
  uint uVar10;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  puVar5 = PTR_DAT_0727f3c0;
  puVar4 = PTR_DAT_0727f2f8;
  puVar3 = PTR_DAT_0727f2f0;
  puVar2 = PTR_DAT_0727f2e8;
  puVar1 = PTR_DAT_0727f2e0;
  if (in_NG == in_OV) {
    uVar10 = 0;
    do {
      if (in_w8 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      lVar9 = *(long *)(unaff_x25 + (long)(int)uVar10 * 8 + 0x20);
      lVar8 = *unaff_x21;
      lVar6 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727f3c8);
      FUN_03539344();
      if ((lVar9 == 0) ||
         (uVar7 = FUN_050f8a90(lVar9,*(undefined8 *)puVar1,*(undefined8 *)puVar5), lVar6 == 0)) {
LAB_0353926c:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_0353940c(lVar6,uVar7);
      uVar7 = FUN_050f8a90(lVar9,*(undefined8 *)puVar2,*(undefined8 *)puVar5);
      FUN_035394e0(lVar6,uVar7);
      uVar7 = FUN_050f8a90(lVar9,*(undefined8 *)puVar4,*(undefined8 *)puVar5);
      FUN_035395b4(lVar6,uVar7);
      uVar7 = FUN_050f8a90(lVar9,*(undefined8 *)puVar3,*(undefined8 *)puVar5);
      FUN_03539688(lVar6,uVar7);
      if (lVar8 == 0) goto LAB_0353926c;
      FUN_0353975c(lVar8,lVar6);
      in_w8 = *(uint *)(unaff_x25 + 0x18);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)in_w8);
  }
  puVar2 = PTR_DAT_0727f3e0;
  puVar1 = PTR_DAT_0727f3d8;
  uVar7 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ee10);
  FUN_0589e07c(uVar7,in_stack_00000000,*(undefined8 *)puVar1,0);
  FUN_03538a54(in_stack_00000008,uVar7,*(undefined8 *)puVar2);
  return;
}


