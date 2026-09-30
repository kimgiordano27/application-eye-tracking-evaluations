/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 035390bc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_BodyJointLocation>(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 unaff_x24;
  long lVar13;
  uint uVar14;
  
  lVar7 = FUN_03536b0c();
  plVar11 = (long *)(unaff_x20 + 0x18);
  *plVar11 = lVar7;
  thunk_FUN_0333a630(plVar11,lVar7);
  lVar7 = thunk_FUN_032a56a0(*unaff_x19);
  FUN_0353927c();
  plVar10 = (long *)(unaff_x20 + 0x20);
  *plVar10 = lVar7;
  thunk_FUN_0333a630(plVar10,lVar7);
  puVar6 = PTR_DAT_0727f3c0;
  puVar5 = PTR_DAT_0727f2f8;
  puVar4 = PTR_DAT_0727f2f0;
  puVar3 = PTR_DAT_0727f2e8;
  puVar2 = PTR_DAT_0727f2e0;
  if (*plVar11 != 0) {
    lVar7 = *(long *)(*plVar11 + 0xa0);
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar1) {
        uVar14 = 0;
        do {
          if (uVar1 <= uVar14) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          lVar13 = *(long *)(lVar7 + (long)(int)uVar14 * 8 + 0x20);
          lVar12 = *plVar10;
          lVar8 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727f3c8);
          FUN_03539344();
          if ((lVar13 == 0) ||
             (uVar9 = FUN_050f8a90(lVar13,*(undefined8 *)puVar2,*(undefined8 *)puVar6), lVar8 == 0))
          goto LAB_0353926c;
          FUN_0353940c(lVar8,uVar9);
          uVar9 = FUN_050f8a90(lVar13,*(undefined8 *)puVar3,*(undefined8 *)puVar6);
          FUN_035394e0(lVar8,uVar9);
          uVar9 = FUN_050f8a90(lVar13,*(undefined8 *)puVar5,*(undefined8 *)puVar6);
          FUN_035395b4(lVar8,uVar9);
          uVar9 = FUN_050f8a90(lVar13,*(undefined8 *)puVar4,*(undefined8 *)puVar6);
          FUN_03539688(lVar8,uVar9);
          if (lVar12 == 0) goto LAB_0353926c;
          FUN_0353975c(lVar12,lVar8);
          uVar1 = *(uint *)(lVar7 + 0x18);
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)uVar1);
      }
      puVar3 = PTR_DAT_0727f3e0;
      puVar2 = PTR_DAT_0727f3d8;
      uVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ee10);
      FUN_0589e07c(uVar9,unaff_x20,*(undefined8 *)puVar2,0);
      FUN_03538a54(unaff_x24,uVar9,*(undefined8 *)puVar3);
      return;
    }
  }
LAB_0353926c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


