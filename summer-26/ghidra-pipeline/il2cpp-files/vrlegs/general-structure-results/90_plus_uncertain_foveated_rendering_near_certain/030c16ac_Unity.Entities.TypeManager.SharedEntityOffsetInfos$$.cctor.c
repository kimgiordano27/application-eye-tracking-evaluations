/*
FUNCTION_NAME: Unity.Entities.TypeManager.SharedEntityOffsetInfos$$.cctor
ENTRY_POINT: 030c16ac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 157
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;foveation_rendering;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_foveation_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_foveated_rendering
*/


long Unity_Entities_TypeManager_SharedEntityOffsetInfos___cctor(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined2 *puVar6;
  undefined2 *unaff_x19;
  undefined4 unaff_w20;
  byte unaff_w21;
  long lVar7;
  long *unaff_x23;
  undefined8 uVar8;
  long *unaff_x24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000028;
  
  if (in_stack_00000018 != 0) {
    *(undefined8 *)(in_stack_00000018 + 0x48) = in_stack_00000028;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(in_stack_00000018 + 0x48),0);
    if (in_stack_00000018 != 0) {
      *(byte *)(in_stack_00000018 + 0x68) = unaff_w21 & 1;
      if ((unaff_w21 & 1) != 0) {
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar3 = OVRManager__SetFoveatedRenderingLevel(&stack0x00000028,0);
        uVar2 = in_stack_00000028;
        puVar1 = System_Comparison<Vector2>_TypeInfo;
        if ((uVar3 & 1) != 0) {
          lVar4 = *(long *)System_Comparison<Vector2>_TypeInfo;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar4 = *(long *)puVar1;
          }
          lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
          if (lVar7 == 0) {
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar4 = *(long *)puVar1;
            }
            uVar8 = **(undefined8 **)(lVar4 + 0xb8);
            lVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8ac0);
            FUN_02060754(lVar7,uVar8,*(undefined8 *)System_Comparison<Type>_TypeInfo,0);
            plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
            *plVar5 = lVar7;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,lVar7);
          }
          if (*(int *)(*(long *)PTR_DAT_03cdabc0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_030bc0b0(uVar2,lVar7,in_stack_00000018);
          if (in_stack_00000018 == 0) goto LAB_030c1854;
          *(undefined8 *)(in_stack_00000018 + 0x60) = in_stack_00000010;
          *(undefined8 *)(in_stack_00000018 + 0x58) = in_stack_00000008;
          *(undefined8 *)(in_stack_00000018 + 0x50) = in_stack_00000000;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (in_stack_00000018 + 0x50,0);
        }
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_030bd04c(unaff_w20,in_stack_00000018);
      if (in_stack_00000018 != 0) {
        lVar4 = *(long *)(*(long *)PTR_DAT_03cdacd8 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01a46ff8();
        }
        puVar6 = (undefined2 *)
                 thunk_FUN_01a59484(in_stack_00000018 + 0x20,
                                    *(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x80) +
                                    0x40);
        *unaff_x19 = *puVar6;
        return in_stack_00000018;
      }
    }
  }
LAB_030c1854:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


