/*
FUNCTION_NAME: FUN_00ee22b0
ENTRY_POINT: 00ee22b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_00ee22b0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_n_s32__;
                    /* try { // try from 00ee22d4 to 00fe231b has its CatchHandler @ 00ee21ec */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee2294 with catch @ 00ee22d8
                        */
  if ((DAT_03775330 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_n_s32__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData_SerializableAssetItem>_Dispose__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentsInChildren<ObiUpdater>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRGLTFAccessor_GLTFBuffer>_get_Item__
                      );
    thunk_FUN_00d48444(Method_System_Xml_XmlUrlResolver_GetEntity__);
    thunk_FUN_00d48444(System_Action<ARMeshesChangedEventArgs>_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vdup_lane_u32__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<float[],_int,_float>_Invoke__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<object,_bool>_get_Item__);
    thunk_FUN_00d48444(StringLiteral_13830);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    thunk_FUN_00d48444(Method_FullSerializer_Internal_fsOption<fsVersionedType>_get_HasValue__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_Vector4>_TryGetValue__);
    DAT_03775330 = 1;
  }
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  lVar10 = FUN_010c3404(param_1,*(undefined8 *)puVar2);
  puVar4 = Method_FullSerializer_Internal_fsOption<fsVersionedType>_get_HasValue__;
  puVar3 = Method_System_Collections_Generic_List<OVRGLTFAccessor_GLTFBuffer>_get_Item__;
  puVar2 = Method_System_Collections_Generic_Dictionary<object,_bool>_get_Item__;
  if (lVar10 != 0) {
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (0 < (int)uVar1) {
      uVar14 = 0;
      do {
        if (uVar1 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar12 = *(long *)(lVar10 + (long)(int)uVar14 * 8 + 0x20);
        if (lVar12 == 0) goto LAB_00ee25c4;
        lVar13 = *(long *)(lVar12 + 0x108);
        lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if ((lVar12 == 0) || (FUN_013df2bc(lVar12,param_1,*(undefined8 *)puVar3,0), lVar13 == 0))
        goto LAB_00ee25c4;
        FUN_013df780(lVar13,lVar12,*(undefined8 *)puVar4);
        uVar1 = *(uint *)(lVar10 + 0x18);
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)uVar1);
    }
    puVar9 = StringLiteral_13830;
    puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__;
    puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vdup_lane_u32__;
    puVar6 = Method_System_Xml_XmlUrlResolver_GetEntity__;
    puVar5 = Method_UnityEngine_Component_GetComponentsInChildren<ObiUpdater>__;
    puVar4 = Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
    puVar3 = 
    Method_System_Collections_Generic_List_Enumerator<ProbeVolumePerSceneData_SerializableAssetItem>_Dispose__
    ;
    puVar2 = System_Action<ARMeshesChangedEventArgs>_TypeInfo;
    if (*(long *)(param_1 + 200) != 0) {
      FUN_01323390(*(long *)(param_1 + 200),&local_98,
                   *(undefined8 *)Method_UnityEngine_Events_UnityEvent<float[],_int,_float>_Invoke__
                  );
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      while (uVar11 = FUN_012b894c(&local_80,*(undefined8 *)puVar2), (uVar11 & 1) != 0) {
        lVar10 = FUN_00ac92f0(&local_80,*(undefined8 *)puVar7);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *(long *)(lVar10 + 0xf8);
        lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar8);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_026c8404(lVar10,param_1,*(undefined8 *)puVar3,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_026c84dc(lVar12,lVar10,0);
      }
      FUN_012b8948(&local_80,*(undefined8 *)puVar6);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_03774e19 == '\0') {
        thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
        DAT_03774e19 = '\x01';
      }
      lVar10 = *(long *)puVar4;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *(long *)puVar4;
      }
      if ((**(long **)(lVar10 + 0xb8) != 0) &&
         (lVar10 = *(long *)(**(long **)(lVar10 + 0xb8) + 0xf0), lVar10 != 0)) {
        lVar12 = *(long *)(lVar10 + 0x30);
        lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar9);
        if ((lVar10 != 0) && (FUN_013df3d0(lVar10,param_1,*(undefined8 *)puVar5,0), lVar12 != 0)) {
          FUN_013dfdd8(lVar12,lVar10,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_Vector4>_TryGetValue__);
          return;
        }
      }
    }
  }
LAB_00ee25c4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


