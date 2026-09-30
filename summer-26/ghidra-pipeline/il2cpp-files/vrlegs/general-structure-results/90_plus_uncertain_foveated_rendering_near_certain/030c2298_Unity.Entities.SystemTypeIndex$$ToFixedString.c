/*
FUNCTION_NAME: Unity.Entities.SystemTypeIndex$$ToFixedString
ENTRY_POINT: 030c2298
PROGRAM: vrlegs-libil2cpp.so
SCORE: 181
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;foveation_rendering;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_6;strong_foveation_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_foveated_rendering;functionality_gaze_interaction_hits_6
*/


long Unity_Entities_SystemTypeIndex__ToFixedString
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,byte param_4,
               undefined2 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined2 *puVar8;
  long unaff_x22;
  long lVar9;
  long unaff_x23;
  long *plVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  plVar10 = *(long **)(unaff_x23 + 0xe10);
  if ((*(byte *)(unaff_x22 + 0x6b9) & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd8ac0);
    FUN_01ab69ac(UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cdabc0);
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    FUN_01ab69ac(System_Comparison<TrackedDeviceRaycaster_RaycastHitData>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc44b8);
    FUN_01ab69ac(System_Collections_Concurrent_ConcurrentDictionary<int,_string>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc4b20);
    FUN_01ab69ac(
                System_Collections_Concurrent_ConcurrentDictionary<MemberHolder,_MemberInfo[]>_TypeInfo
                );
    FUN_01ab69ac(System_Collections_Concurrent_ConcurrentDictionary<string,_CommandData>_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_BaseField<Bounds>_TypeInfo);
    *(undefined1 *)(unaff_x22 + 0x6b9) = 1;
  }
  in_stack_00000020 = 0;
  if (*(int *)(*plVar10 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_027d75b4(&stack0x00000028,0);
  uVar3 = in_stack_00000028;
  puVar2 = System_Collections_Concurrent_ConcurrentDictionary<int,_string>_TypeInfo;
  puVar1 = System_Comparison<TrackedDeviceRaycaster_RaycastHitData>_TypeInfo;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)
                  UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar6 = FUN_030bcccc(uVar3,param_5);
    return lVar6;
  }
  lVar6 = *(long *)System_Comparison<TrackedDeviceRaycaster_RaycastHitData>_TypeInfo;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *(long *)puVar1;
  }
  uVar5 = FUN_020b2864(*(undefined8 *)(lVar6 + 0xb8),&stack0x00000020,*(undefined8 *)puVar2);
  if ((uVar5 & 1) == 0) {
    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
    FUN_027b3d9c(lVar6,0);
    in_stack_00000020 = lVar6;
  }
  lVar6 = in_stack_00000020;
  if (in_stack_00000020 != 0) {
    *(undefined4 *)(in_stack_00000020 + 0x1c) = 0;
    if (*(int *)(*(long *)PTR_DAT_03cc4b20 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    dVar12 = (double)FUN_027849c4(&stack0x00000038,0);
    lVar7 = in_stack_00000020;
    *(float *)(lVar6 + 0x18) = (float)dVar12;
    puVar1 = PTR_DAT_03cc44b8;
    if (*(int *)(*(long *)PTR_DAT_03cc44b8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_030bd38c();
    if ((uVar5 & 1) == 0) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = FUN_036d97ac(0);
    }
    if ((lVar7 != 0) && (*(undefined4 *)(lVar7 + 0x20) = uVar4, in_stack_00000020 != 0)) {
      *(undefined8 *)(in_stack_00000020 + 0x28) = in_stack_00000028;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(in_stack_00000020 + 0x28),0);
      if (in_stack_00000020 != 0) {
        *(byte *)(in_stack_00000020 + 0x48) = param_4 & 1;
        if ((param_4 & 1) != 0) {
          if (*(int *)(*plVar10 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar5 = OVRManager__SetFoveatedRenderingLevel(&stack0x00000028,0);
          uVar3 = in_stack_00000028;
          lVar6 = in_stack_00000020;
          puVar2 = System_Collections_Concurrent_ConcurrentDictionary<string,_CommandData>_TypeInfo;
          if ((uVar5 & 1) != 0) {
            lVar7 = *(long *)
                     System_Collections_Concurrent_ConcurrentDictionary<string,_CommandData>_TypeInfo
            ;
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar7 = *(long *)puVar2;
            }
            lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
            if (lVar9 == 0) {
              if (*(int *)(lVar7 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar7 = *(long *)puVar2;
              }
              uVar11 = **(undefined8 **)(lVar7 + 0xb8);
              lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8ac0);
              FUN_02060754(lVar9,uVar11,
                           *(undefined8 *)
                            System_Collections_Concurrent_ConcurrentDictionary<MemberHolder,_MemberInfo[]>_TypeInfo
                           ,0);
              plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
              *plVar10 = lVar9;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar9);
            }
            lVar7 = in_stack_00000020;
            if (*(int *)(*(long *)PTR_DAT_03cdabc0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_030bc0b0(&stack0x00000008,uVar3,lVar9,lVar7);
            if (lVar6 == 0) goto LAB_030c25fc;
            *(undefined8 *)(lVar6 + 0x40) = in_stack_00000018;
            *(undefined8 *)(lVar6 + 0x38) = in_stack_00000010;
            *(undefined8 *)(lVar6 + 0x30) = in_stack_00000008;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar6 + 0x30,0);
          }
        }
        lVar6 = in_stack_00000020;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_030bd04c(param_2,lVar6);
        if (in_stack_00000020 != 0) {
          lVar6 = in_stack_00000020 + 0x50;
          lVar7 = *(long *)(*(long *)UnityEngine_UIElements_BaseField<Bounds>_TypeInfo + 0x20);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01a46ff8();
          }
          puVar8 = (undefined2 *)
                   thunk_FUN_01a59484(lVar6,*(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) +
                                                     0x80) + 0x40);
          *param_5 = *puVar8;
          return in_stack_00000020;
        }
      }
    }
  }
LAB_030c25fc:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


