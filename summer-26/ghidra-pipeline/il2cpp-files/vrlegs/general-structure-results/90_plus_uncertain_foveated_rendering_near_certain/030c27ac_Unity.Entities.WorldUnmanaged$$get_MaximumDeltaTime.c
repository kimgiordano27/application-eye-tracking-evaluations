/*
FUNCTION_NAME: Unity.Entities.WorldUnmanaged$$get_MaximumDeltaTime
ENTRY_POINT: 030c27ac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 94
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_foveation_hits_1;functionality_foveated_rendering
*/


long Unity_Entities_WorldUnmanaged__get_MaximumDeltaTime(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined2 *puVar7;
  undefined2 *unaff_x19;
  undefined4 unaff_w20;
  byte unaff_w21;
  undefined8 unaff_x22;
  long lVar8;
  long unaff_x23;
  undefined8 uVar9;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (unaff_x23 != 0) {
    *(undefined8 *)(unaff_x23 + 0x18) = unaff_x22;
    if (in_stack_00000020 != 0) {
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
          uVar3 = in_stack_00000028;
          lVar2 = in_stack_00000020;
          puVar1 = 
          System_Collections_Concurrent_ConcurrentDictionary<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo
          ;
          if ((uVar4 & 1) != 0) {
            lVar5 = *(long *)
                     System_Collections_Concurrent_ConcurrentDictionary<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo
            ;
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar5 = *(long *)puVar1;
            }
            lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
            if (lVar8 == 0) {
              if (*(int *)(lVar5 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar5 = *(long *)puVar1;
              }
              uVar9 = **(undefined8 **)(lVar5 + 0xb8);
              lVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8ac0);
              FUN_02060754(lVar8,uVar9,
                           *(undefined8 *)
                            System_Collections_Concurrent_ConcurrentDictionary<string,_string>_TypeInfo
                           ,0);
              plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
              *plVar6 = lVar8;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,lVar8);
            }
            lVar5 = in_stack_00000020;
            if (*(int *)(*(long *)PTR_DAT_03cdabc0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_030bc0b0(&stack0x00000008,uVar3,lVar8,lVar5);
            if (lVar2 == 0) goto LAB_030c296c;
            *(undefined8 *)(lVar2 + 0x40) = in_stack_00000018;
            *(undefined8 *)(lVar2 + 0x38) = in_stack_00000010;
            *(undefined8 *)(lVar2 + 0x30) = in_stack_00000008;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar2 + 0x30,0);
          }
        }
        lVar2 = in_stack_00000020;
        if (*(int *)(*(long *)PTR_DAT_03cc44b8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_030bd04c(unaff_w20,lVar2);
        lVar2 = in_stack_00000020;
        if (in_stack_00000020 != 0) {
          lVar5 = *(long *)(*(long *)PTR_DAT_03cdacd8 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01a46ff8();
          }
          puVar7 = (undefined2 *)
                   thunk_FUN_01a59484(lVar2 + 0x50,
                                      *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x80) +
                                      0x40);
          *unaff_x19 = *puVar7;
          return in_stack_00000020;
        }
      }
    }
  }
LAB_030c296c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


