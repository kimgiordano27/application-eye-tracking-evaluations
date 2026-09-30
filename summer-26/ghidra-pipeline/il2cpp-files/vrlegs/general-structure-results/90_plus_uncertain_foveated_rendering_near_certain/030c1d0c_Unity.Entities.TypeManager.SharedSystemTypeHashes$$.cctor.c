/*
FUNCTION_NAME: Unity.Entities.TypeManager.SharedSystemTypeHashes$$.cctor
ENTRY_POINT: 030c1d0c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 177
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;foveation_rendering;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_4;strong_foveation_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_foveated_rendering;functionality_gaze_interaction_hits_4
*/


long Unity_Entities_TypeManager_SharedSystemTypeHashes___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined2 *puVar9;
  undefined2 *unaff_x19;
  undefined4 unaff_w20;
  byte unaff_w21;
  undefined4 unaff_w22;
  long lVar10;
  long unaff_x23;
  undefined8 uVar11;
  long *unaff_x24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000028;
  
  FUN_01ab69ac(PTR_DAT_03cc44b8);
  FUN_01ab69ac(System_Comparison<OVRRaycaster_RaycastHit>_TypeInfo);
  FUN_01ab69ac(System_Comparison<TimeNotificationBehaviour_NotificationEntry>_TypeInfo);
  FUN_01ab69ac(System_Comparison<TimeZoneInfo_AdjustmentRule>_TypeInfo);
  FUN_01ab69ac(PTR_DAT_03cdacd8);
  *(undefined1 *)(unaff_x23 + 0x6a3) = 1;
  in_stack_00000018 = 0;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_027d75b4(&stack0x00000028,0);
  uVar3 = in_stack_00000028;
  puVar2 = System_Comparison<OVRRaycaster_RaycastHit>_TypeInfo;
  puVar1 = System_Comparison<VisualElementAsset>_TypeInfo;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)
                  UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar6 = FUN_030bcccc(uVar3);
    return lVar6;
  }
  lVar6 = *(long *)System_Comparison<VisualElementAsset>_TypeInfo;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *(long *)puVar1;
  }
  uVar5 = FUN_020b2864(*(undefined8 *)(lVar6 + 0xb8),&stack0x00000018,*(undefined8 *)puVar2);
  if ((uVar5 & 1) == 0) {
    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
    FUN_027b3d9c(lVar6,0);
    in_stack_00000018 = lVar6;
  }
  if (in_stack_00000018 != 0) {
    *(undefined4 *)(in_stack_00000018 + 0x1c) = unaff_w22;
    *(undefined8 *)(in_stack_00000018 + 0x20) = in_stack_00000028;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(in_stack_00000018 + 0x20),0);
    lVar6 = in_stack_00000018;
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
    if ((lVar6 != 0) && (*(undefined4 *)(lVar6 + 0x18) = uVar4, in_stack_00000018 != 0)) {
      *(byte *)(in_stack_00000018 + 0x40) = unaff_w21 & 1;
      if ((unaff_w21 & 1) != 0) {
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar5 = OVRManager__SetFoveatedRenderingLevel(&stack0x00000028,0);
        uVar3 = in_stack_00000028;
        lVar6 = in_stack_00000018;
        puVar2 = System_Comparison<TimeZoneInfo_AdjustmentRule>_TypeInfo;
        if ((uVar5 & 1) != 0) {
          lVar7 = *(long *)System_Comparison<TimeZoneInfo_AdjustmentRule>_TypeInfo;
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
            FUN_02060754(lVar10,uVar11,
                         *(undefined8 *)
                          System_Comparison<TimeNotificationBehaviour_NotificationEntry>_TypeInfo,0)
            ;
            plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
            *plVar8 = lVar10;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar10);
          }
          lVar7 = in_stack_00000018;
          if (*(int *)(*(long *)PTR_DAT_03cdabc0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_030bc0b0(uVar3,lVar10,lVar7);
          if (lVar6 == 0) goto Unity_Entities_TypeManager_<>c__<InitializeAspects>b__194_0;
          *(undefined8 *)(lVar6 + 0x38) = in_stack_00000010;
          *(undefined8 *)(lVar6 + 0x30) = in_stack_00000008;
          *(undefined8 *)(lVar6 + 0x28) = in_stack_00000000;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar6 + 0x28,0);
        }
      }
      lVar6 = in_stack_00000018;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_030bd04c(unaff_w20,lVar6);
      lVar6 = in_stack_00000018;
      if (in_stack_00000018 != 0) {
        lVar7 = *(long *)(*(long *)PTR_DAT_03cdacd8 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01a46ff8();
        }
        puVar9 = (undefined2 *)
                 thunk_FUN_01a59484(lVar6 + 0x48,
                                    *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x80) +
                                    0x40);
        *unaff_x19 = *puVar9;
        return in_stack_00000018;
      }
    }
  }
Unity_Entities_TypeManager_<>c__<InitializeAspects>b__194_0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


