/*
FUNCTION_NAME: Unity.Entities.WorldUnmanaged$$Create
ENTRY_POINT: 030c2b44
PROGRAM: vrlegs-libil2cpp.so
SCORE: 94
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_foveation_hits_1;functionality_foveated_rendering
*/


long Unity_Entities_WorldUnmanaged__Create(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined2 *puVar8;
  undefined2 *unaff_x19;
  undefined4 unaff_w20;
  byte unaff_w21;
  long unaff_x22;
  long lVar9;
  long *unaff_x23;
  undefined8 uVar10;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  thunk_FUN_01a58e78();
  uVar5 = FUN_030bd38c();
  if ((uVar5 & 1) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = FUN_036d97ac(0);
  }
  if (unaff_x22 != 0) {
    *(undefined4 *)(unaff_x22 + 0x18) = uVar4;
    if (in_stack_00000020 != 0) {
      *(byte *)(in_stack_00000020 + 0x48) = unaff_w21 & 1;
      if ((unaff_w21 & 1) != 0) {
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar5 = OVRManager__SetFoveatedRenderingLevel(&stack0x00000028,0);
        uVar3 = in_stack_00000028;
        lVar1 = in_stack_00000020;
        puVar2 = 
        System_Collections_Concurrent_ConcurrentDictionary<Type,_SerializationEvents>_TypeInfo;
        if ((uVar5 & 1) != 0) {
          lVar6 = *(long *)
                   System_Collections_Concurrent_ConcurrentDictionary<Type,_SerializationEvents>_TypeInfo
          ;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar6 = *(long *)puVar2;
          }
          lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
          if (lVar9 == 0) {
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar6 = *(long *)puVar2;
            }
            uVar10 = **(undefined8 **)(lVar6 + 0xb8);
            lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8ac0);
            FUN_02060754(lVar9,uVar10,
                         *(undefined8 *)
                          System_Collections_Concurrent_ConcurrentDictionary<Type,_object>_TypeInfo,
                         0);
            plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
            *plVar7 = lVar9;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7,lVar9);
          }
          lVar6 = in_stack_00000020;
          if (*(int *)(*(long *)PTR_DAT_03cdabc0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_030bc0b0(&stack0x00000008,uVar3,lVar9,lVar6);
          if (lVar1 == 0) goto LAB_030c2cf8;
          *(undefined8 *)(lVar1 + 0x40) = in_stack_00000018;
          *(undefined8 *)(lVar1 + 0x38) = in_stack_00000010;
          *(undefined8 *)(lVar1 + 0x30) = in_stack_00000008;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar1 + 0x30,0);
        }
      }
      lVar1 = in_stack_00000020;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_030bd04c(unaff_w20,lVar1);
      if (in_stack_00000020 != 0) {
        lVar1 = in_stack_00000020 + 0x50;
        lVar6 = *(long *)(*(long *)UnityEngine_UIElements_BaseField<Bounds>_TypeInfo + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01a46ff8();
        }
        puVar8 = (undefined2 *)
                 thunk_FUN_01a59484(lVar1,*(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x80
                                                   ) + 0x40);
        *unaff_x19 = *puVar8;
        return in_stack_00000020;
      }
    }
  }
LAB_030c2cf8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


