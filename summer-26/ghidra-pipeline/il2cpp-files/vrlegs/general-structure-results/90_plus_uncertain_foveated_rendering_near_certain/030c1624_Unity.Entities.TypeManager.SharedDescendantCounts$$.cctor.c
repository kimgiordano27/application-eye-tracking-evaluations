/*
FUNCTION_NAME: Unity.Entities.TypeManager.SharedDescendantCounts$$.cctor
ENTRY_POINT: 030c1624
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


long Unity_Entities_TypeManager_SharedDescendantCounts___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined2 *puVar9;
  undefined2 *unaff_x19;
  undefined4 unaff_w20;
  byte unaff_w21;
  long *unaff_x22;
  long lVar10;
  long *unaff_x23;
  undefined8 uVar11;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000028;
  
  puVar2 = System_Comparison<TimelineClip>_TypeInfo;
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *unaff_x22;
  }
  puVar1 = PTR_DAT_03cc44b8;
  uVar6 = FUN_020b2864(*(undefined8 *)(lVar5 + 0xb8),&stack0x00000018,*(undefined8 *)puVar2);
  if ((uVar6 & 1) == 0) {
    lVar5 = thunk_FUN_01a89e68(*unaff_x22);
    FUN_027b3d9c(lVar5,0);
    in_stack_00000018 = lVar5;
  }
  lVar5 = in_stack_00000018;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_030bd38c();
  if ((uVar6 & 1) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = FUN_036d97ac(0);
  }
  if ((lVar5 != 0) && (*(undefined4 *)(lVar5 + 0x18) = uVar4, in_stack_00000018 != 0)) {
    *(undefined8 *)(in_stack_00000018 + 0x48) = in_stack_00000028;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(in_stack_00000018 + 0x48),0);
    if (in_stack_00000018 != 0) {
      *(byte *)(in_stack_00000018 + 0x68) = unaff_w21 & 1;
      if ((unaff_w21 & 1) != 0) {
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar6 = OVRManager__SetFoveatedRenderingLevel(&stack0x00000028,0);
        uVar3 = in_stack_00000028;
        lVar5 = in_stack_00000018;
        puVar2 = System_Comparison<Vector2>_TypeInfo;
        if ((uVar6 & 1) != 0) {
          lVar7 = *(long *)System_Comparison<Vector2>_TypeInfo;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar7 = *(long *)puVar2;
          }
          lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
          if (lVar10 == 0) {
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar7 = *(long *)puVar2;
            }
            uVar11 = **(undefined8 **)(lVar7 + 0xb8);
            lVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8ac0);
            FUN_02060754(lVar10,uVar11,*(undefined8 *)System_Comparison<Type>_TypeInfo,0);
            plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
            *plVar8 = lVar10;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar10);
          }
          lVar7 = in_stack_00000018;
          if (*(int *)(*(long *)PTR_DAT_03cdabc0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_030bc0b0(uVar3,lVar10,lVar7);
          if (lVar5 == 0) goto LAB_030c1854;
          *(undefined8 *)(lVar5 + 0x60) = in_stack_00000010;
          *(undefined8 *)(lVar5 + 0x58) = in_stack_00000008;
          *(undefined8 *)(lVar5 + 0x50) = in_stack_00000000;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar5 + 0x50,0);
        }
      }
      lVar5 = in_stack_00000018;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_030bd04c(unaff_w20,lVar5);
      lVar5 = in_stack_00000018;
      if (in_stack_00000018 != 0) {
        lVar7 = *(long *)(*(long *)PTR_DAT_03cdacd8 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01a46ff8();
        }
        puVar9 = (undefined2 *)
                 thunk_FUN_01a59484(lVar5 + 0x20,
                                    *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x80) +
                                    0x40);
        *unaff_x19 = *puVar9;
        return in_stack_00000018;
      }
    }
  }
LAB_030c1854:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


