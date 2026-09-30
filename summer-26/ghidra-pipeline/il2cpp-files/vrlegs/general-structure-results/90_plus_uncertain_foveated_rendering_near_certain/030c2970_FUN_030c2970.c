/*
FUNCTION_NAME: FUN_030c2970
ENTRY_POINT: 030c2970
PROGRAM: vrlegs-libil2cpp.so
SCORE: 174
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;foveation_rendering;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_6;strong_foveation_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_foveated_rendering;functionality_gaze_interaction_hits_6
*/


long FUN_030c2970(undefined8 param_1,undefined4 param_2,undefined8 param_3,byte param_4,
                 undefined2 *param_5)

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
  long lVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_48;
  
  puVar2 = PTR_DAT_03cc9e10;
  local_58 = param_3;
  uStack_48 = param_1;
  if ((DAT_0412b6ae & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd8ac0);
    FUN_01ab69ac(UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cdabc0);
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    FUN_01ab69ac(System_Comparison<VisualElementFocusRing_FocusRingRecord>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc44b8);
    FUN_01ab69ac(System_Collections_Concurrent_ConcurrentDictionary<Type,_IQcParser>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc4b20);
    FUN_01ab69ac(System_Collections_Concurrent_ConcurrentDictionary<Type,_object>_TypeInfo);
    FUN_01ab69ac(
                System_Collections_Concurrent_ConcurrentDictionary<Type,_SerializationEvents>_TypeInfo
                );
    FUN_01ab69ac(UnityEngine_UIElements_BaseField<Bounds>_TypeInfo);
    DAT_0412b6ae = 1;
  }
  local_60 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_027d75b4(&local_58,0);
  uVar4 = local_58;
  puVar3 = System_Collections_Concurrent_ConcurrentDictionary<Type,_IQcParser>_TypeInfo;
  puVar1 = System_Comparison<VisualElementFocusRing_FocusRingRecord>_TypeInfo;
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)
                  UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar7 = FUN_030bcccc(uVar4,param_5);
    return lVar7;
  }
  lVar7 = *(long *)System_Comparison<VisualElementFocusRing_FocusRingRecord>_TypeInfo;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar1;
  }
  uVar6 = FUN_020b2864(*(undefined8 *)(lVar7 + 0xb8),&local_60,*(undefined8 *)puVar3);
  if ((uVar6 & 1) == 0) {
    lVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
    FUN_027b3d9c(lVar7,0);
    local_60 = lVar7;
  }
  lVar7 = local_60;
  if (local_60 != 0) {
    *(undefined4 *)(local_60 + 0x20) = 0;
    if (*(int *)(*(long *)PTR_DAT_03cc4b20 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    dVar13 = (double)FUN_027849c4(&uStack_48,0);
    *(float *)(lVar7 + 0x1c) = (float)dVar13;
    if (local_60 != 0) {
      *(undefined8 *)(local_60 + 0x28) = local_58;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(local_60 + 0x28),0);
      lVar7 = local_60;
      puVar1 = PTR_DAT_03cc44b8;
      if (*(int *)(*(long *)PTR_DAT_03cc44b8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_030bd38c();
      if ((uVar6 & 1) == 0) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = FUN_036d97ac(0);
      }
      if ((lVar7 != 0) && (*(undefined4 *)(lVar7 + 0x18) = uVar5, local_60 != 0)) {
        *(byte *)(local_60 + 0x48) = param_4 & 1;
        if ((param_4 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar6 = OVRManager__SetFoveatedRenderingLevel(&local_58,0);
          uVar4 = local_58;
          lVar7 = local_60;
          puVar2 = 
          System_Collections_Concurrent_ConcurrentDictionary<Type,_SerializationEvents>_TypeInfo;
          if ((uVar6 & 1) != 0) {
            lVar8 = *(long *)
                     System_Collections_Concurrent_ConcurrentDictionary<Type,_SerializationEvents>_TypeInfo
            ;
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
              FUN_02060754(lVar11,uVar12,
                           *(undefined8 *)
                            System_Collections_Concurrent_ConcurrentDictionary<Type,_object>_TypeInfo
                           ,0);
              plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
              *plVar9 = lVar11;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,lVar11);
            }
            lVar8 = local_60;
            if (*(int *)(*(long *)PTR_DAT_03cdabc0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_030bc0b0(&local_78,uVar4,lVar11,lVar8);
            if (lVar7 == 0) goto LAB_030c2cf8;
            *(undefined8 *)(lVar7 + 0x40) = local_68;
            *(undefined8 *)(lVar7 + 0x38) = uStack_70;
            *(undefined8 *)(lVar7 + 0x30) = local_78;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar7 + 0x30,0);
          }
        }
        lVar7 = local_60;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_030bd04c(param_2,lVar7);
        if (local_60 != 0) {
          lVar7 = local_60 + 0x50;
          lVar8 = *(long *)(*(long *)UnityEngine_UIElements_BaseField<Bounds>_TypeInfo + 0x20);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01a46ff8();
          }
          puVar10 = (undefined2 *)
                    thunk_FUN_01a59484(lVar7,*(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) +
                                                      0x80) + 0x40);
          *param_5 = *puVar10;
          return local_60;
        }
      }
    }
  }
LAB_030c2cf8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


