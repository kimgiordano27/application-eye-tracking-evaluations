/*
FUNCTION_NAME: Unity.Entities.WorldUnmanaged$$get_SequenceNumber
ENTRY_POINT: 030c2614
PROGRAM: vrlegs-libil2cpp.so
SCORE: 157
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;foveation_rendering;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;strong_foveation_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_foveated_rendering
*/


long Unity_Entities_WorldUnmanaged__get_SequenceNumber
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,byte param_4,
               undefined2 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined2 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 uStack0000000000000028;
  
  puVar1 = PTR_DAT_03cc9e10;
  uStack0000000000000028 = param_3;
  if ((DAT_0412b6c4 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd8ac0);
    FUN_01ab69ac(UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cdabc0);
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    FUN_01ab69ac(
                System_Collections_Concurrent_ConcurrentDictionary<ValueTuple<string,_int,_int>,_bool>_TypeInfo
                );
    FUN_01ab69ac(PTR_DAT_03cc44b8);
    FUN_01ab69ac(System_Collections_Concurrent_ConcurrentDictionary<string,_object>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc4b20);
    FUN_01ab69ac(System_Collections_Concurrent_ConcurrentDictionary<string,_string>_TypeInfo);
    FUN_01ab69ac(
                System_Collections_Concurrent_ConcurrentDictionary<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo
                );
    FUN_01ab69ac(PTR_DAT_03cdacd8);
    FUN_01ab69ac(System_Collections_Concurrent_ConcurrentDictionary<Type,_IPropertyBag>_TypeInfo);
    DAT_0412b6c4 = 1;
  }
  in_stack_00000020 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_027d75b4(&stack0x00000028,0);
  uVar7 = uStack0000000000000028;
  puVar3 = System_Collections_Concurrent_ConcurrentDictionary<string,_object>_TypeInfo;
  puVar2 = 
  System_Collections_Concurrent_ConcurrentDictionary<ValueTuple<string,_int,_int>,_bool>_TypeInfo;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)
                  UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar6 = FUN_030bcccc(uVar7,param_5);
    return lVar6;
  }
  lVar6 = *(long *)
           System_Collections_Concurrent_ConcurrentDictionary<ValueTuple<string,_int,_int>,_bool>_TypeInfo
  ;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *(long *)puVar2;
  }
  puVar4 = System_Collections_Concurrent_ConcurrentDictionary<Type,_IPropertyBag>_TypeInfo;
  uVar5 = FUN_020b2864(*(undefined8 *)(lVar6 + 0xb8),&stack0x00000020,*(undefined8 *)puVar3);
  if ((uVar5 & 1) == 0) {
    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
    FUN_027b3d9c(lVar6,0);
    in_stack_00000020 = lVar6;
  }
  lVar6 = in_stack_00000020;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar7 = FUN_030c66b8();
  lVar8 = in_stack_00000020;
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x20) = uVar7;
    if (*(int *)(*(long *)PTR_DAT_03cc4b20 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if ((lVar8 != 0) && (*(undefined8 *)(lVar8 + 0x18) = param_1, in_stack_00000020 != 0)) {
      *(undefined8 *)(in_stack_00000020 + 0x28) = uStack0000000000000028;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(in_stack_00000020 + 0x28),0);
      if (in_stack_00000020 != 0) {
        *(byte *)(in_stack_00000020 + 0x48) = param_4 & 1;
        if ((param_4 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar5 = OVRManager__SetFoveatedRenderingLevel(&stack0x00000028,0);
          uVar7 = uStack0000000000000028;
          lVar6 = in_stack_00000020;
          puVar1 = 
          System_Collections_Concurrent_ConcurrentDictionary<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo
          ;
          if ((uVar5 & 1) != 0) {
            lVar8 = *(long *)
                     System_Collections_Concurrent_ConcurrentDictionary<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo
            ;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar8 = *(long *)puVar1;
            }
            lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
            if (lVar11 == 0) {
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar8 = *(long *)puVar1;
              }
              uVar12 = **(undefined8 **)(lVar8 + 0xb8);
              lVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8ac0);
              FUN_02060754(lVar11,uVar12,
                           *(undefined8 *)
                            System_Collections_Concurrent_ConcurrentDictionary<string,_string>_TypeInfo
                           ,0);
              plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
              *plVar9 = lVar11;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,lVar11);
            }
            lVar8 = in_stack_00000020;
            if (*(int *)(*(long *)PTR_DAT_03cdabc0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_030bc0b0(&stack0x00000008,uVar7,lVar11,lVar8);
            if (lVar6 == 0) goto LAB_030c296c;
            *(undefined8 *)(lVar6 + 0x40) = in_stack_00000018;
            *(undefined8 *)(lVar6 + 0x38) = in_stack_00000010;
            *(undefined8 *)(lVar6 + 0x30) = in_stack_00000008;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar6 + 0x30,0);
          }
        }
        lVar6 = in_stack_00000020;
        if (*(int *)(*(long *)PTR_DAT_03cc44b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_030bd04c(param_2,lVar6);
        lVar6 = in_stack_00000020;
        if (in_stack_00000020 != 0) {
          lVar8 = *(long *)(*(long *)PTR_DAT_03cdacd8 + 0x20);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01a46ff8();
          }
          puVar10 = (undefined2 *)
                    thunk_FUN_01a59484(lVar6 + 0x50,
                                       *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0x80) +
                                       0x40);
          *param_5 = *puVar10;
          return in_stack_00000020;
        }
      }
    }
  }
LAB_030c296c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


