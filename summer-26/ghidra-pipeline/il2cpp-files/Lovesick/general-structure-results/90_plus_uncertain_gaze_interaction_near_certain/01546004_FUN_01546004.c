/*
FUNCTION_NAME: FUN_01546004
ENTRY_POINT: 01546004
PROGRAM: Lovesick-libil2cpp.so
SCORE: 202
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


void FUN_01546004(ulong param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x21;
  long *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_997);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<DecalEntity>__);
    thunk_FUN_00d48444(StringLiteral_13947);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<CharacterZone>_get_Count__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_55_0_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_AddComponent<Haptics>__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_WitResponseClass>__ctor__
                      );
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<int>_ResizeUninitialized__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<MeshId,_MeshInfo>_Remove__);
    thunk_FUN_00d48444(System_Action<LocomotionSystem>_TypeInfo);
    thunk_FUN_00d48444(Method_System_DateTime__ctor__);
    *(undefined1 *)(unaff_x21 + 0xadd) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar7 = FUN_0268b4e0(param_3,0,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_997);
  if ((lVar8 != 0) &&
     (FUN_011c181c(lVar8,param_2,
                   *(undefined8 *)Method_System_Collections_Generic_List<CharacterZone>_get_Count__,
                   0), param_3 != 0)) {
    FUN_0154627c(param_3,lVar8);
    if (*(long *)(param_2 + 0xc0) != 0) {
      FUN_00bcb994(*(long *)(param_2 + 0xc0),param_3,
                   *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<Haptics>__);
      puVar2 = Method_System_Collections_Generic_Dictionary<MeshId,_MeshInfo>_Remove__;
      if (*(long *)(param_2 + 0xd0) != 0) {
        plVar9 = (long *)FUN_010c5ec8(*(long *)(param_2 + 0xd0),
                                      *(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<MeshId,_MeshInfo>_Remove__
                                      ,*(undefined8 *)
                                        Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<DecalEntity>__
                                     );
        puVar6 = Method_System_DateTime__ctor__;
        puVar5 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
        puVar4 = Method_Obi_ObiNativeList<int>_ResizeUninitialized__;
        puVar3 = Method_System_Collections_Generic_Dictionary<string,_WitResponseClass>__ctor__;
        puVar1 = System_Action<LocomotionSystem>_TypeInfo;
        if ((plVar9 != (long *)0x0) && (plVar10 = (long *)plVar9[0x10], plVar10 != (long *)0x0)) {
          (**(code **)(*plVar10 + 0x1c8))
                    (plVar10,*(undefined8 *)(param_3 + 0xd0),*(undefined8 *)(*plVar10 + 0x1d0));
          uVar11 = FUN_01145518(*(undefined8 *)puVar2,*(undefined8 *)puVar4);
          FUN_01541ed8(plVar9,uVar11);
          uVar11 = FUN_01145518(*(undefined8 *)puVar1,*(undefined8 *)puVar3);
          FUN_01541fdc(plVar9,uVar11);
          lVar8 = FUN_01145518(*(undefined8 *)puVar6,*(undefined8 *)puVar3);
          plVar9[0x13] = lVar8;
          (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
          (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200));
          lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
          if (lVar8 != 0) {
            FUN_016f27fc(lVar8,param_3,*(undefined8 *)StringLiteral_13947,0);
            plVar9[0xf] = lVar8;
            if (*(long *)(param_2 + 200) != 0) {
              FUN_0129a054(*(long *)(param_2 + 200),param_3,plVar9,
                           *(undefined8 *)OVRPlugin_OVRP_1_55_0_TypeInfo);
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


