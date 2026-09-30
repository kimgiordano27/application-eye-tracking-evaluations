/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.BuildingBlock$$get_InstanceId
ENTRY_POINT: 02454224
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 135
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


uint Meta_XR_BuildingBlocks_BuildingBlock__get_InstanceId(Il2CppClass *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  Il2CppClass *pIVar4;
  FieldInfo *pFVar5;
  void *pvVar6;
  long unaff_x29;
  
  uVar2 = Box(param_1,*(void **)(unaff_x29 + -0x40));
  *(undefined8 *)(unaff_x29 + -0x80) = uVar2;
  il2cpp_codegen_memcpy
            (*(void **)(unaff_x29 + -0x50),*(void **)(unaff_x29 + -0x58),
             (ulong)*(uint *)(unaff_x29 + -0x34));
  *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x48);
  *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x50);
  lVar3 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x30) + 0x20));
  pIVar4 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init
                     (*(Il2CppRGCTXData **)(lVar3 + 0xc0),*(int *)(unaff_x29 + -0xb4));
  pFVar5 = (FieldInfo *)il2cpp_rgctx_field(pIVar4,*(int *)(unaff_x29 + -0x9c));
  pvVar6 = (void *)il2cpp_codegen_get_instance_field_data_pointer
                             (*(void **)(unaff_x29 + -0xb0),pFVar5);
  il2cpp_codegen_memcpy(*(void **)(unaff_x29 + -0xa8),pvVar6,(ulong)*(uint *)(unaff_x29 + -0x38));
  lVar3 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x30) + 0x20));
  pIVar4 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init
                     (*(Il2CppRGCTXData **)(lVar3 + 0xc0),*(int *)(unaff_x29 + -0x9c));
  uVar2 = Box(pIVar4,*(void **)(unaff_x29 + -0x48));
  *(undefined8 *)(unaff_x29 + -0x88) = uVar2;
  NullCheck(*(void **)(unaff_x29 + -0x78));
  bVar1 = InterfaceFuncInvoker2<bool,Il2CppObject*,Il2CppObject*>::Invoke
                    ((ushort)*(undefined4 *)(unaff_x29 + -0x9c),
                     *(Il2CppClass **)
                      Method_Unity_Collections_NativeArray<AttachmentDescriptor>_Dispose__,
                     *(Il2CppObject **)(unaff_x29 + -0x78),*(Il2CppObject **)(unaff_x29 + -0x80),
                     *(Il2CppObject **)(unaff_x29 + -0x88));
  *(byte *)(unaff_x29 + -0x8c) = bVar1 & 1;
  *(byte *)(unaff_x29 + -9) = *(byte *)(unaff_x29 + -0x8c) & 1;
  *(uint *)(unaff_x29 + -0xdc) = (uint)*(byte *)(unaff_x29 + -9);
  lVar3 = tpidr_el0;
  lVar3 = *(long *)(lVar3 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar3 == 0) {
    return *(uint *)(unaff_x29 + -0xdc) & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


