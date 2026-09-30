/*
FUNCTION_NAME: FUN_027140ec
ENTRY_POINT: 027140ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 170
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


undefined8 FUN_027140ec(long param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  ulong local_40;
  undefined8 local_38;
  
  puVar1 = UnityEngine_RectOffset_var;
  if ((DAT_0378823d & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(UnityEngine_XR_ARSubsystems_Feature_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_RectOffset_var);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(PTR_DAT_033ec798);
    thunk_FUN_00d48444(Method_OVRPlugin_PinnedArray<Guid>__ctor__);
    thunk_FUN_00d48444(MetaXRAcousticGeometry_ColliderGatherer_TypeInfo);
    DAT_0378823d = 1;
  }
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_026fdba4(param_1,param_2,&local_50,0);
  uVar5 = local_38;
  uVar3 = local_40;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)UnityEngine_XR_ARSubsystems_Feature_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_02714360(uVar5,uVar3 & 0xffffffff,param_3,9,0x1045,0x400,0x400,2,1);
    return uVar5;
  }
  plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
  puVar1 = MetaXRAcousticGeometry_ColliderGatherer_TypeInfo;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((*(long *)MetaXRAcousticGeometry_ColliderGatherer_TypeInfo != 0) &&
     (lVar7 = thunk_FUN_00d6225c(*(long *)MetaXRAcousticGeometry_ColliderGatherer_TypeInfo,
                                 *(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_02714350:
    uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,0);
  }
  uVar8 = *(uint *)(plVar6 + 3);
  if (uVar8 != 0) {
    plVar6[4] = *(long *)puVar1;
    if (param_1 != 0) {
      lVar7 = thunk_FUN_00d6225c(param_1,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar7 == 0) goto LAB_02714350;
      uVar8 = *(uint *)(plVar6 + 3);
    }
    puVar1 = PTR_DAT_033ec798;
    if (1 < uVar8) {
      plVar6[5] = param_1;
      lVar7 = *(long *)puVar1;
      if (lVar7 != 0) {
        lVar7 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar7 == 0) goto LAB_02714350;
        uVar8 = *(uint *)(plVar6 + 3);
      }
      if (2 < uVar8) {
        plVar6[6] = *(long *)puVar1;
        if (param_2 != 0) {
          lVar7 = thunk_FUN_00d6225c(param_2,*(undefined8 *)(*plVar6 + 0x40));
          if (lVar7 == 0) goto LAB_02714350;
          uVar8 = *(uint *)(plVar6 + 3);
        }
        puVar1 = Method_OVRPlugin_PinnedArray<Guid>__ctor__;
        if (3 < uVar8) {
          plVar6[7] = param_2;
          lVar7 = *(long *)puVar1;
          if (lVar7 != 0) {
            lVar7 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40));
            if (lVar7 == 0) goto LAB_02714350;
            uVar8 = *(uint *)(plVar6 + 3);
          }
          puVar2 = StringLiteral_302;
          if (4 < uVar8) {
            plVar6[8] = *(long *)puVar1;
            uVar5 = FUN_01600844(plVar6,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar2);
            }
            FUN_02660dac(uVar5,0);
            return 0;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


