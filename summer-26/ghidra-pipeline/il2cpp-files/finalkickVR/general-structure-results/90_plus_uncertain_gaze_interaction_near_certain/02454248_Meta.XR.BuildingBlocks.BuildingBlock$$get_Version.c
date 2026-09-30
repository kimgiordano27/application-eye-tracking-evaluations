/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.BuildingBlock$$get_Version
ENTRY_POINT: 02454248
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


uint Meta_XR_BuildingBlocks_BuildingBlock__get_Version(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  Il2CppClass *pIVar3;
  FieldInfo *pFVar4;
  void *pvVar5;
  undefined8 uVar6;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0xa8) = param_1;
  *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x50);
  lVar2 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x30) + 0x20));
  pIVar3 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init
                     (*(Il2CppRGCTXData **)(lVar2 + 0xc0),*(int *)(unaff_x29 + -0xb4));
  pFVar4 = (FieldInfo *)il2cpp_rgctx_field(pIVar3,*(int *)(unaff_x29 + -0x9c));
  pvVar5 = (void *)il2cpp_codegen_get_instance_field_data_pointer
                             (*(void **)(unaff_x29 + -0xb0),pFVar4);
  il2cpp_codegen_memcpy(*(void **)(unaff_x29 + -0xa8),pvVar5,(ulong)*(uint *)(unaff_x29 + -0x38));
  lVar2 = InitializedTypeInfo(*(Il2CppClass **)(*(long *)(unaff_x29 + -0x30) + 0x20));
  pIVar3 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init
                     (*(Il2CppRGCTXData **)(lVar2 + 0xc0),*(int *)(unaff_x29 + -0x9c));
  uVar6 = Box(pIVar3,*(void **)(unaff_x29 + -0x48));
  *(undefined8 *)(unaff_x29 + -0x88) = uVar6;
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
  lVar2 = tpidr_el0;
  lVar2 = *(long *)(lVar2 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar2 == 0) {
    return *(uint *)(unaff_x29 + -0xdc) & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


