/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$get_Length
ENTRY_POINT: 036dafb8
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_Vector4s>__get_Length(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  thunk_FUN_0159f088(*(undefined8 *)(param_1 + 0x350));
  thunk_FUN_0159f088(PTR_DAT_06d8b668);
  thunk_FUN_0159f088(PTR_DAT_06db0ff8);
  *(undefined1 *)(unaff_x22 + 0x92e) = 1;
  puVar3 = PTR_DAT_06e57350;
  if ((unaff_x20 != 0) && (unaff_x21 != 0)) {
    uVar4 = FUN_036f062c();
    if ((uVar4 & 1) == 0) {
      plVar5 = (long *)FUN_0160edfc(*(undefined8 *)puVar3,1);
      plVar9 = *(long **)(unaff_x20 + 0xc0);
      if ((plVar9 == (long *)0x0) ||
         (lVar6 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170)),
         plVar5 == (long *)0x0)) goto LAB_036db118;
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_015d0480(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
      goto LAB_036db120;
      iVar1 = (int)plVar5[3];
      puVar2 = (undefined8 *)PTR_DAT_06db0ff8;
    }
    else {
      uVar4 = FUN_036dc96c();
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      plVar5 = (long *)FUN_0160edfc(*(undefined8 *)puVar3,1);
      plVar9 = *(long **)(unaff_x20 + 0xc0);
      if ((plVar9 == (long *)0x0) ||
         (lVar6 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170)),
         plVar5 == (long *)0x0)) goto LAB_036db118;
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_015d0480(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_036db120:
        uVar8 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar8,0);
      }
      iVar1 = (int)plVar5[3];
      puVar2 = (undefined8 *)PTR_DAT_06d8b668;
    }
    if (iVar1 != 0) {
      plVar5[4] = lVar6;
      thunk_FUN_01656ef8(plVar5 + 4,lVar6);
      uVar8 = FUN_04748adc(*puVar2,plVar5,0);
      *(undefined8 *)(unaff_x19 + 0x40) = uVar8;
      thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40),uVar8);
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
LAB_036db118:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


