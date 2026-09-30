/*
FUNCTION_NAME: MotelSkyboxController$$OnDestroy
ENTRY_POINT: 00ee22e0
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


void MotelSkyboxController__OnDestroy(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x21;
  long lVar11;
  uint uVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x21 + 0x330) = 1;
  }
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000020 = 0;
  lVar8 = FUN_010c3404();
  puVar3 = Method_FullSerializer_Internal_fsOption<fsVersionedType>_get_HasValue__;
  puVar2 = Method_System_Collections_Generic_Dictionary<object,_bool>_get_Item__;
  if (lVar8 != 0) {
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar1) {
      uVar12 = 0;
      do {
        if (uVar1 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar10 = *(long *)(lVar8 + (long)(int)uVar12 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_00ee25c4;
        lVar11 = *(long *)(lVar10 + 0x108);
        lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if ((lVar10 == 0) || (FUN_013df2bc(), lVar11 == 0)) goto LAB_00ee25c4;
        FUN_013df780(lVar11,lVar10,*(undefined8 *)puVar3);
        uVar1 = *(uint *)(lVar8 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar1);
    }
    puVar7 = StringLiteral_13830;
    puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__;
    puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vdup_lane_u32__;
    puVar4 = Method_System_Xml_XmlUrlResolver_GetEntity__;
    puVar3 = Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
    puVar2 = System_Action<ARMeshesChangedEventArgs>_TypeInfo;
    if (*(long *)(unaff_x19 + 200) != 0) {
      FUN_01323390(*(long *)(unaff_x19 + 200),&stack0x00000008,
                   *(undefined8 *)Method_UnityEngine_Events_UnityEvent<float[],_int,_float>_Invoke__
                  );
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      while (uVar9 = FUN_012b894c(&stack0x00000020,*(undefined8 *)puVar2), (uVar9 & 1) != 0) {
        lVar8 = FUN_00ac92f0(&stack0x00000020,*(undefined8 *)puVar5);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar10 = *(long *)(lVar8 + 0xf8);
        lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_026c8404(lVar8);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_026c84dc(lVar10,lVar8,0);
      }
      FUN_012b8948(&stack0x00000020,*(undefined8 *)puVar4);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_03774e19 == '\0') {
        thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
        DAT_03774e19 = '\x01';
      }
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar8 = *(long *)puVar3;
      }
      if ((**(long **)(lVar8 + 0xb8) != 0) &&
         (lVar8 = *(long *)(**(long **)(lVar8 + 0xb8) + 0xf0), lVar8 != 0)) {
        lVar10 = *(long *)(lVar8 + 0x30);
        lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
        if ((lVar8 != 0) && (FUN_013df3d0(), lVar10 != 0)) {
          FUN_013dfdd8(lVar10,lVar8,
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


