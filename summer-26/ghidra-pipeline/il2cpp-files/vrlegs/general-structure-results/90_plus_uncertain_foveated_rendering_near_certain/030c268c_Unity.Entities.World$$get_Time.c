/*
FUNCTION_NAME: Unity.Entities.World$$get_Time
ENTRY_POINT: 030c268c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 159
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;foveation_rendering;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;strong_foveation_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_foveated_rendering
*/


long Unity_Entities_World__get_Time(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined2 *puVar9;
  undefined2 *unaff_x19;
  undefined4 unaff_w20;
  byte unaff_w21;
  undefined8 unaff_x22;
  long lVar10;
  long unaff_x23;
  undefined8 uVar11;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_01ab69ac();
  FUN_01ab69ac(PTR_DAT_03cc4b20);
  FUN_01ab69ac(System_Collections_Concurrent_ConcurrentDictionary<string,_string>_TypeInfo);
  FUN_01ab69ac(
              System_Collections_Concurrent_ConcurrentDictionary<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo
              );
  FUN_01ab69ac(PTR_DAT_03cdacd8);
  FUN_01ab69ac(System_Collections_Concurrent_ConcurrentDictionary<Type,_IPropertyBag>_TypeInfo);
  *(undefined1 *)(unaff_x23 + 0x6c4) = 1;
  in_stack_00000020 = 0;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar4 = FUN_027d75b4(&stack0x00000028,0);
  uVar6 = in_stack_00000028;
  puVar2 = System_Collections_Concurrent_ConcurrentDictionary<string,_object>_TypeInfo;
  puVar1 = 
  System_Collections_Concurrent_ConcurrentDictionary<ValueTuple<string,_int,_int>,_bool>_TypeInfo;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)
                  UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar5 = FUN_030bcccc(uVar6);
    return lVar5;
  }
  lVar5 = *(long *)
           System_Collections_Concurrent_ConcurrentDictionary<ValueTuple<string,_int,_int>,_bool>_TypeInfo
  ;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar1;
  }
  puVar3 = System_Collections_Concurrent_ConcurrentDictionary<Type,_IPropertyBag>_TypeInfo;
  uVar4 = FUN_020b2864(*(undefined8 *)(lVar5 + 0xb8),&stack0x00000020,*(undefined8 *)puVar2);
  if ((uVar4 & 1) == 0) {
    lVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
    FUN_027b3d9c(lVar5,0);
    in_stack_00000020 = lVar5;
  }
  lVar5 = in_stack_00000020;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_030c66b8();
  lVar7 = in_stack_00000020;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    if (*(int *)(*(long *)PTR_DAT_03cc4b20 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if ((lVar7 != 0) && (*(undefined8 *)(lVar7 + 0x18) = unaff_x22, in_stack_00000020 != 0)) {
      *(undefined8 *)(in_stack_00000020 + 0x28) = in_stack_00000028;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(in_stack_00000020 + 0x28),0);
      if (in_stack_00000020 != 0) {
        *(byte *)(in_stack_00000020 + 0x48) = unaff_w21 & 1;
        if ((unaff_w21 & 1) != 0) {
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar4 = OVRManager__SetFoveatedRenderingLevel(&stack0x00000028,0);
          uVar6 = in_stack_00000028;
          lVar5 = in_stack_00000020;
          puVar1 = 
          System_Collections_Concurrent_ConcurrentDictionary<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo
          ;
          if ((uVar4 & 1) != 0) {
            lVar7 = *(long *)
                     System_Collections_Concurrent_ConcurrentDictionary<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo
            ;
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar7 = *(long *)puVar1;
            }
            lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
            if (lVar10 == 0) {
              if (*(int *)(lVar7 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar7 = *(long *)puVar1;
              }
              uVar11 = **(undefined8 **)(lVar7 + 0xb8);
              lVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8ac0);
              FUN_02060754(lVar10,uVar11,
                           *(undefined8 *)
                            System_Collections_Concurrent_ConcurrentDictionary<string,_string>_TypeInfo
                           ,0);
              plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
              *plVar8 = lVar10;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar10);
            }
            lVar7 = in_stack_00000020;
            if (*(int *)(*(long *)PTR_DAT_03cdabc0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_030bc0b0(&stack0x00000008,uVar6,lVar10,lVar7);
            if (lVar5 == 0) goto LAB_030c296c;
            *(undefined8 *)(lVar5 + 0x40) = in_stack_00000018;
            *(undefined8 *)(lVar5 + 0x38) = in_stack_00000010;
            *(undefined8 *)(lVar5 + 0x30) = in_stack_00000008;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar5 + 0x30,0);
          }
        }
        lVar5 = in_stack_00000020;
        if (*(int *)(*(long *)PTR_DAT_03cc44b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_030bd04c(unaff_w20,lVar5);
        lVar5 = in_stack_00000020;
        if (in_stack_00000020 != 0) {
          lVar7 = *(long *)(*(long *)PTR_DAT_03cdacd8 + 0x20);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01a46ff8();
          }
          puVar9 = (undefined2 *)
                   thunk_FUN_01a59484(lVar5 + 0x50,
                                      *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x80) +
                                      0x40);
          *unaff_x19 = *puVar9;
          return in_stack_00000020;
        }
      }
    }
  }
LAB_030c296c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


