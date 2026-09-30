/*
FUNCTION_NAME: Unity.Entities.WorldUnmanaged$$get_ExecutingSystem
ENTRY_POINT: 030c3120
PROGRAM: vrlegs-libil2cpp.so
SCORE: 153
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;foveation_rendering;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;strong_foveation_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_foveated_rendering
*/


long Unity_Entities_WorldUnmanaged__get_ExecutingSystem(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined2 *puVar8;
  undefined2 *unaff_x19;
  undefined4 unaff_w20;
  byte unaff_w21;
  undefined8 unaff_x22;
  long lVar9;
  undefined8 uVar10;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar4 = FUN_027d75b4(&stack0x00000028,0);
  uVar3 = in_stack_00000028;
  puVar2 = System_Collections_Concurrent_ConcurrentQueue<Dictionary<string,_object>>_TypeInfo;
  puVar1 = 
  System_Collections_Concurrent_ConcurrentDictionary<ServicePointManager_SPKey,_ServicePoint>_TypeInfo
  ;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)
                  UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar5 = FUN_030bcccc(uVar3);
    return lVar5;
  }
  lVar5 = *(long *)
           System_Collections_Concurrent_ConcurrentDictionary<ServicePointManager_SPKey,_ServicePoint>_TypeInfo
  ;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar1;
  }
  uVar4 = FUN_020b2864(*(undefined8 *)(lVar5 + 0xb8),&stack0x00000020,*(undefined8 *)puVar2);
  if ((uVar4 & 1) == 0) {
    lVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
    FUN_027b3d9c(lVar5,0);
    in_stack_00000020 = lVar5;
  }
  if (in_stack_00000020 != 0) {
    *(undefined8 *)(in_stack_00000020 + 0x18) = unaff_x22;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(in_stack_00000020 + 0x18));
    if (in_stack_00000020 != 0) {
      *(undefined8 *)(in_stack_00000020 + 0x20) = in_stack_00000028;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(in_stack_00000020 + 0x20),0);
      if (in_stack_00000020 != 0) {
        *(byte *)(in_stack_00000020 + 0x40) = unaff_w21 & 1;
        if ((unaff_w21 & 1) != 0) {
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar4 = OVRManager__SetFoveatedRenderingLevel(&stack0x00000028,0);
          uVar3 = in_stack_00000028;
          lVar5 = in_stack_00000020;
          puVar1 = System_Collections_Concurrent_ConcurrentQueue<FrameBuffer>_TypeInfo;
          if ((uVar4 & 1) != 0) {
            lVar6 = *(long *)System_Collections_Concurrent_ConcurrentQueue<FrameBuffer>_TypeInfo;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar6 = *(long *)puVar1;
            }
            lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
            if (lVar9 == 0) {
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar6 = *(long *)puVar1;
              }
              uVar10 = **(undefined8 **)(lVar6 + 0xb8);
              lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8ac0);
              FUN_02060754(lVar9,uVar10,
                           *(undefined8 *)
                            System_Collections_Concurrent_ConcurrentQueue<ValueTuple<Action,_Func<bool>>>_TypeInfo
                           ,0);
              plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
              *plVar7 = lVar9;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7,lVar9);
            }
            lVar6 = in_stack_00000020;
            if (*(int *)(*(long *)PTR_DAT_03cdabc0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_030bc0b0(&stack0x00000008,uVar3,lVar9,lVar6);
            if (lVar5 == 0) goto LAB_030c3374;
            *(undefined8 *)(lVar5 + 0x38) = in_stack_00000018;
            *(undefined8 *)(lVar5 + 0x30) = in_stack_00000010;
            *(undefined8 *)(lVar5 + 0x28) = in_stack_00000008;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar5 + 0x28,0);
          }
        }
        lVar5 = in_stack_00000020;
        if (*(int *)(*(long *)PTR_DAT_03cc44b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_030bd04c(unaff_w20,lVar5);
        if (in_stack_00000020 != 0) {
          lVar5 = in_stack_00000020 + 0x48;
          lVar6 = *(long *)(*(long *)UnityEngine_UIElements_BaseField<Bounds>_TypeInfo + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01a46ff8();
          }
          puVar8 = (undefined2 *)
                   thunk_FUN_01a59484(lVar5,*(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) +
                                                     0x80) + 0x40);
          *unaff_x19 = *puVar8;
          return in_stack_00000020;
        }
      }
    }
  }
LAB_030c3374:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


