/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$IsPositionInSceneVolume
ENTRY_POINT: 0148c858
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__IsPositionInSceneVolume(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long in_x9;
  undefined8 *puVar8;
  undefined8 unaff_x19;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  puVar8 = *(undefined8 **)(in_x9 + 0x538);
  *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x38) = unaff_x19;
  puVar1 = Method_System_Collections_Generic_List<Image>_RemoveAt__;
  plVar3 = (long *)FUN_00da4fb8(*puVar8,2);
  plVar4 = (long *)FUN_00da4fb8(*unaff_x24,2);
  lVar5 = FUN_00da4fb8(*unaff_x23,0x20);
  FUN_016a34e8(lVar5,*(undefined8 *)puVar1,0);
  if (plVar4 == (long *)0x0) goto LAB_0148caa8;
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_0148ca9c:
    uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar7,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = lVar5;
    puVar1 = 
    Method_System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<__Il2CppFullySharedGenericType>_Insert__
    ;
    lVar5 = FUN_00da4fb8(*unaff_x23,0x20);
    FUN_016a34e8(lVar5,*(undefined8 *)puVar1,0);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_0148ca9c;
    if (1 < *(uint *)(plVar4 + 3)) {
      plVar4[5] = lVar5;
      if (plVar3 == (long *)0x0) {
LAB_0148caa8:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar5 = thunk_FUN_00d6225c(plVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_0148ca9c;
      if ((int)plVar3[3] == 0) goto LAB_0148ca98;
      plVar3[4] = (long)plVar4;
      puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmull_s8__;
      plVar4 = (long *)FUN_00da4fb8(*unaff_x24,2);
      lVar5 = FUN_00da4fb8(*unaff_x23,0x20);
      FUN_016a34e8(lVar5,*(undefined8 *)puVar1,0);
      if (plVar4 == (long *)0x0) goto LAB_0148caa8;
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
      goto LAB_0148ca9c;
      if ((int)plVar4[3] != 0) {
        plVar4[4] = lVar5;
        puVar1 = PTR_DAT_033f71d0;
        lVar5 = FUN_00da4fb8(*unaff_x23,0x20);
        FUN_016a34e8(lVar5,*(undefined8 *)puVar1,0);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
        goto LAB_0148ca9c;
        if (1 < *(uint *)(plVar4 + 3)) {
          plVar4[5] = lVar5;
          lVar5 = thunk_FUN_00d6225c(plVar4,*(undefined8 *)(*plVar3 + 0x40));
          if (lVar5 == 0) goto LAB_0148ca9c;
          if (1 < *(uint *)(plVar3 + 3)) {
            plVar3[5] = (long)plVar4;
            *(long **)(*(long *)(*unaff_x22 + 0xb8) + 0x40) = plVar3;
            puVar2 = Method_UnityEngine_Mesh_SetUvsImpl<Vector4>__;
            puVar1 = System_PointerSpec_TypeInfo;
            uVar7 = FUN_00da4fb8(*unaff_x23,8);
            FUN_016a34e8(uVar7,*(undefined8 *)puVar2,0);
            *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48) = uVar7;
            uVar7 = FUN_00da4fb8(*unaff_x23,8);
            FUN_016a34e8(uVar7,*(undefined8 *)puVar1,0);
            *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x50) = uVar7;
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


