/*
FUNCTION_NAME: FUN_06d21418
ENTRY_POINT: 06d21418
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void FUN_06d21418(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_076e9952 & 1) == 0) {
    thunk_FUN_032e1da0(Method_ReadyPlayerMe_Core_GltFastAvatarImporter_Fail__);
    thunk_FUN_032e1da0(PTR_DAT_072850c8);
    thunk_FUN_032e1da0(Method_GLTFast_GltfImportBase_Reinterpret<float>__);
    thunk_FUN_032e1da0(Method_MikeNspired_UnityXRHandPoser_GrabAnywhereOnPole_<Start>b__10_0__);
    thunk_FUN_032e1da0(Method_UnityEngine_GameObject_GetComponents<Collider>__);
    DAT_076e9952 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x3f8);
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar5 + 0x68);
    if (lVar8 == 0) {
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072850c8);
      FUN_055c629c(lVar8,param_1,*(undefined8 *)Method_GLTFast_GltfImportBase_Reinterpret<float>__,0
                  );
      uVar3 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_ReadyPlayerMe_Core_GltFastAvatarImporter_Fail__);
      FUN_0501f060(uVar3,param_1,
                   *(undefined8 *)
                    Method_MikeNspired_UnityXRHandPoser_GrabAnywhereOnPole_<Start>b__10_0__,0);
      if (lVar8 == 0) goto LAB_06d215f4;
      uVar7 = 0;
      uVar6 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar5 + 0x70);
      uVar7 = *(undefined8 *)(lVar5 + 0x78);
      uVar6 = *(undefined8 *)(lVar5 + 0x80);
    }
    puVar1 = Method_UnityEngine_GameObject_GetComponents<Collider>__;
    uVar4 = (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28))
    ;
    UnityEngine_Networking_UnityWebRequest__get_disposeDownloadHandlerOnDispose(param_1,uVar4);
    lVar5 = *(long *)puVar1;
    lVar8 = *(long *)(param_1 + 0x3d0);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar1;
    }
    uVar2 = FUN_06be4708(*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x70),0);
    if (lVar8 != 0) {
      FUN_06db1be8(lVar8,uVar2,uVar3,0);
      lVar5 = *(long *)(param_1 + 0x3d0);
      uVar2 = FUN_06be4708(*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x78),0);
      if (lVar5 != 0) {
        FUN_06db1be8(lVar5,uVar2,uVar7,0);
        lVar5 = *(long *)(param_1 + 0x3d0);
        uVar2 = FUN_06be4708(*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x80),0);
        if (lVar5 != 0) {
          FUN_06db1be8(lVar5,uVar2,uVar6,0);
          FUN_06d21358(param_1,0);
          *(undefined8 *)(param_1 + 0x3e0) = 0;
          thunk_FUN_0333a630(param_1 + 0x3e0,0);
          FUN_06d21950(param_1);
          return;
        }
      }
    }
  }
LAB_06d215f4:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


