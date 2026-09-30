/*
FUNCTION_NAME: FUN_025a3d50
ENTRY_POINT: 025a3d50
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_025a3d50(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovnd_u64__;
  if ((DAT_03782ff7 & 1) == 0) {
    thunk_FUN_00d48444(
                      UnityEngine_InputSystem_Utilities_ReadOnlyArray<HIDSupport_HIDPageUsage>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<InternedString>_Dispose__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount__
                      );
    thunk_FUN_00d48444(StringLiteral_7975);
    thunk_FUN_00d48444(StringLiteral_199);
    thunk_FUN_00d48444(Method_OVRAnchor_TryGetComponent<OVRRoomLayout>__);
    thunk_FUN_00d48444(StringLiteral_1996);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Where<Transform>__);
    thunk_FUN_00d48444(StringLiteral_3347);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ObiColliderHandle>_RemoveAt__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovnd_u64__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<byte>__ctor__);
    thunk_FUN_00d48444(STMTextInfo_TypeInfo);
    DAT_03782ff7 = 1;
  }
  uVar6 = _DAT_02959bf0;
  *(undefined8 *)(param_1 + 0x1a8) = _UNK_02959bf8;
  *(undefined8 *)(param_1 + 0x1a0) = uVar6;
  *(undefined4 *)(param_1 + 0x1b0) = 0x3ba3d70a;
  uVar4 = FUN_0268cec8(0xffffffff,0);
  *(undefined4 *)(param_1 + 0x1b4) = uVar4;
  *(undefined4 *)(param_1 + 0x1b8) = 1;
  *(undefined2 *)(param_1 + 0x1bc) = 0x101;
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = Method_System_Collections_Generic_List<byte>__ctor__;
  if (lVar5 != 0) {
    FUN_025eebfc(lVar5,0);
    *(long *)(param_1 + 0x1c0) = lVar5;
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = Method_System_Collections_Generic_List_Enumerator<InternedString>_Dispose__;
    if (lVar5 != 0) {
      FUN_025eec44(lVar5,0);
      *(long *)(param_1 + 0x1c8) = lVar5;
      local_50 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      local_80 = 0;
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar3 = StringLiteral_1996;
      puVar2 = Method_System_Collections_Generic_List<ObiColliderHandle>_RemoveAt__;
      puVar1 = 
      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount__
      ;
      if (lVar5 != 0) {
        uStack_b8 = uStack_78;
        local_c0 = local_80;
        uStack_a8 = uStack_68;
        uStack_b0 = local_70;
        uStack_98 = uStack_58;
        local_a0 = uStack_60;
        local_90 = local_50;
        FUN_01250954(lVar5,&local_c0,1,0,0,
                     *(undefined8 *)
                      UnityEngine_InputSystem_Utilities_ReadOnlyArray<HIDSupport_HIDPageUsage>_TypeInfo
                    );
        *(long *)(param_1 + 0x1d0) = lVar5;
        *(undefined1 *)(param_1 + 500) = 1;
        uVar6 = FUN_00da4fb8(*(undefined8 *)puVar2,0x19);
        *(undefined8 *)(param_1 + 0x208) = uVar6;
        uVar6 = FUN_00da4fb8(*(undefined8 *)puVar1,0x19);
        *(undefined8 *)(param_1 + 0x210) = uVar6;
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        puVar1 = StringLiteral_3347;
        if (lVar5 != 0) {
          FUN_01320e50(lVar5,*(undefined8 *)StringLiteral_7975);
          *(long *)(param_1 + 0x218) = lVar5;
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          puVar1 = Method_System_Linq_Enumerable_Where<Transform>__;
          if (lVar5 != 0) {
            FUN_01320e50(lVar5,*(undefined8 *)Method_OVRAnchor_TryGetComponent<OVRRoomLayout>__);
            *(long *)(param_1 + 0x220) = lVar5;
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            puVar1 = STMTextInfo_TypeInfo;
            if (lVar5 != 0) {
              FUN_01320e50(lVar5,*(undefined8 *)StringLiteral_199);
              *(long *)(param_1 + 0x228) = lVar5;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_025962b8(param_1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


