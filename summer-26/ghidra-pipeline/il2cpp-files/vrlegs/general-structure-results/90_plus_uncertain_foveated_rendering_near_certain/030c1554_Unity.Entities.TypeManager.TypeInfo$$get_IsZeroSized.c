/*
FUNCTION_NAME: Unity.Entities.TypeManager.TypeInfo$$get_IsZeroSized
ENTRY_POINT: 030c1554
PROGRAM: vrlegs-libil2cpp.so
SCORE: 165
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;foveation_rendering;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_5;strong_foveation_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_foveated_rendering
*/


long Unity_Entities_TypeManager_TypeInfo__get_IsZeroSized(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined2 *puVar10;
  undefined2 *unaff_x19;
  undefined4 unaff_w20;
  byte unaff_w21;
  long unaff_x22;
  long lVar11;
  long *unaff_x23;
  undefined8 uVar12;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000028;
  
  FUN_01ab69ac();
  FUN_01ab69ac(UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>_TypeInfo);
  FUN_01ab69ac(PTR_DAT_03cdabc0);
  FUN_01ab69ac(PTR_DAT_03cc9e10);
  FUN_01ab69ac(System_Comparison<TimeZoneInfo>_TypeInfo);
  FUN_01ab69ac(PTR_DAT_03cc44b8);
  FUN_01ab69ac(System_Comparison<TimelineClip>_TypeInfo);
  FUN_01ab69ac(System_Comparison<Type>_TypeInfo);
  FUN_01ab69ac(System_Comparison<Vector2>_TypeInfo);
  FUN_01ab69ac(PTR_DAT_03cdacd8);
  *(undefined1 *)(unaff_x22 + 0x698) = 1;
  in_stack_00000018 = 0;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_027d75b4(&stack0x00000028,0);
  uVar4 = in_stack_00000028;
  puVar3 = System_Comparison<TimelineClip>_TypeInfo;
  puVar2 = System_Comparison<TimeZoneInfo>_TypeInfo;
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)
                  UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar7 = FUN_030bcccc(uVar4);
    return lVar7;
  }
  lVar7 = *(long *)System_Comparison<TimeZoneInfo>_TypeInfo;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_03cc44b8;
  uVar6 = FUN_020b2864(*(undefined8 *)(lVar7 + 0xb8),&stack0x00000018,*(undefined8 *)puVar3);
  if ((uVar6 & 1) == 0) {
    lVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
    FUN_027b3d9c(lVar7,0);
    in_stack_00000018 = lVar7;
  }
  lVar7 = in_stack_00000018;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_030bd38c();
  if ((uVar6 & 1) == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = FUN_036d97ac(0);
  }
  if ((lVar7 != 0) && (*(undefined4 *)(lVar7 + 0x18) = uVar5, in_stack_00000018 != 0)) {
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
        uVar4 = in_stack_00000028;
        lVar7 = in_stack_00000018;
        puVar2 = System_Comparison<Vector2>_TypeInfo;
        if ((uVar6 & 1) != 0) {
          lVar8 = *(long *)System_Comparison<Vector2>_TypeInfo;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar8 = *(long *)puVar2;
          }
          lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
          if (lVar11 == 0) {
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar8 = *(long *)puVar2;
            }
            uVar12 = **(undefined8 **)(lVar8 + 0xb8);
            lVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8ac0);
            FUN_02060754(lVar11,uVar12,*(undefined8 *)System_Comparison<Type>_TypeInfo,0);
            plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
            *plVar9 = lVar11;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,lVar11);
          }
          lVar8 = in_stack_00000018;
          if (*(int *)(*(long *)PTR_DAT_03cdabc0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_030bc0b0(uVar4,lVar11,lVar8);
          if (lVar7 == 0) goto LAB_030c1854;
          *(undefined8 *)(lVar7 + 0x60) = in_stack_00000010;
          *(undefined8 *)(lVar7 + 0x58) = in_stack_00000008;
          *(undefined8 *)(lVar7 + 0x50) = in_stack_00000000;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar7 + 0x50,0);
        }
      }
      lVar7 = in_stack_00000018;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_030bd04c(unaff_w20,lVar7);
      lVar7 = in_stack_00000018;
      if (in_stack_00000018 != 0) {
        lVar8 = *(long *)(*(long *)PTR_DAT_03cdacd8 + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01a46ff8();
        }
        puVar10 = (undefined2 *)
                  thunk_FUN_01a59484(lVar7 + 0x20,
                                     *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0x80) +
                                     0x40);
        *unaff_x19 = *puVar10;
        return in_stack_00000018;
      }
    }
  }
LAB_030c1854:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


