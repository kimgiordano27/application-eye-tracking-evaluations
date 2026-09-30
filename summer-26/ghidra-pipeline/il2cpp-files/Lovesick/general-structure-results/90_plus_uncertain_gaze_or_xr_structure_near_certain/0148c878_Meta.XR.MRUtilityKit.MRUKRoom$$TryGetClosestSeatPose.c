/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSeatPose
ENTRY_POINT: 0148c878
PROGRAM: Lovesick-libil2cpp.so
SCORE: 164
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_3;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKRoom__TryGetClosestSeatPose(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  plVar3 = (long *)FUN_00da4fb8(*unaff_x24,2);
  lVar4 = FUN_00da4fb8(*unaff_x23,0x20);
  FUN_016a34e8(lVar4,*unaff_x21,0);
  if (plVar3 == (long *)0x0) goto LAB_0148caa8;
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_0148ca9c:
    uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    puVar1 = 
    Method_System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<__Il2CppFullySharedGenericType>_Insert__
    ;
    lVar4 = FUN_00da4fb8(*unaff_x23,0x20);
    FUN_016a34e8(lVar4,*(undefined8 *)puVar1,0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_0148ca9c;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      if (param_1 == (long *)0x0) {
LAB_0148caa8:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar4 = thunk_FUN_00d6225c(plVar3,*(undefined8 *)(*param_1 + 0x40));
      if (lVar4 == 0) goto LAB_0148ca9c;
      if ((int)param_1[3] == 0) goto LAB_0148ca98;
      param_1[4] = (long)plVar3;
      puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_s8__;
      plVar3 = (long *)FUN_00da4fb8(*unaff_x24,2);
      lVar4 = FUN_00da4fb8(*unaff_x23,0x20);
      FUN_016a34e8(lVar4,*(undefined8 *)puVar1,0);
      if (plVar3 == (long *)0x0) goto LAB_0148caa8;
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_0148ca9c;
      if ((int)plVar3[3] != 0) {
        plVar3[4] = lVar4;
        puVar1 = PTR_DAT_033f71d0;
        lVar4 = FUN_00da4fb8(*unaff_x23,0x20);
        FUN_016a34e8(lVar4,*(undefined8 *)puVar1,0);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_0148ca9c;
        if (1 < *(uint *)(plVar3 + 3)) {
          plVar3[5] = lVar4;
          lVar4 = thunk_FUN_00d6225c(plVar3,*(undefined8 *)(*param_1 + 0x40));
          if (lVar4 == 0) goto LAB_0148ca9c;
          if (1 < *(uint *)(param_1 + 3)) {
            param_1[5] = (long)plVar3;
            *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x40) = param_1;
            puVar2 = Method_UnityEngine_Mesh_SetUvsImpl<Vector4>__;
            puVar1 = System_PointerSpec_TypeInfo;
            uVar6 = FUN_00da4fb8(*unaff_x23,8);
            FUN_016a34e8(uVar6,*(undefined8 *)puVar2,0);
            *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48) = uVar6;
            uVar6 = FUN_00da4fb8(*unaff_x23,8);
            FUN_016a34e8(uVar6,*(undefined8 *)puVar1,0);
            *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x50) = uVar6;
            return;
          }
        }
      }
    }
  }
LAB_0148ca98:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


