/*
FUNCTION_NAME: Unity.Entities.Serialization.SerializeUtilityInterop.AllocAndQueueReadChunkCommands_000014EF$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 030cc2bc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 216
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;foveation_rendering;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;strong_foveation_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_foveated_rendering;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Unity_Entities_Serialization_SerializeUtilityInterop_AllocAndQueueReadChunkCommands_000014EF_PostfixBurstDelegate__Invoke
               (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,byte param_5,
               undefined2 *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,undefined8 param_11,long param_12,undefined8 param_13,
               undefined8 param_14)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined2 *puVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar1 = PTR_DAT_03cc9e10;
  if ((DAT_0412b726 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd8ac0);
    FUN_01ab69ac(System_Collections_Generic_Dictionary<ConnectionProtocol,_int>_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cdabc0);
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    FUN_01ab69ac(PTR_DAT_03cc44b8);
    FUN_01ab69ac(System_Collections_Generic_Dictionary<ConnectionProtocol,_Type>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_Dictionary<CurvyShapeInfo,_Type>_TypeInfo);
    FUN_01ab69ac(
                System_Collections_Generic_Dictionary<CurvySplineSegment,_ValueTuple<Vector3,_Quaternion>>_TypeInfo
                );
    FUN_01ab69ac(PTR_DAT_03cdacd8);
    DAT_0412b726 = 1;
  }
  param_12 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_027d75b4(&param_14,0);
  uVar4 = param_14;
  puVar3 = System_Collections_Generic_Dictionary<ConnectionProtocol,_Type>_TypeInfo;
  puVar2 = System_Collections_Generic_Dictionary<ConnectionProtocol,_int>_TypeInfo;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)
                  UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar6 = FUN_030bcccc(uVar4,param_6);
    return lVar6;
  }
  lVar6 = *(long *)System_Collections_Generic_Dictionary<ConnectionProtocol,_int>_TypeInfo;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *(long *)puVar2;
  }
  uVar5 = FUN_020b2864(*(undefined8 *)(lVar6 + 0xb8),&param_12,*(undefined8 *)puVar3);
  if ((uVar5 & 1) == 0) {
    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
    FUN_030ccb0c();
    param_12 = lVar6;
  }
  if (param_12 != 0) {
    *(long *)(param_12 + 0x18) = param_1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((long *)(param_12 + 0x18),param_1);
    if (param_12 != 0) {
      *(undefined8 *)(param_12 + 0x20) = param_3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(param_12 + 0x20),param_3);
      if (param_12 != 0) {
        *(undefined8 *)(param_12 + 0x28) = param_14;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(param_12 + 0x28),0);
        if (param_12 != 0) {
          *(byte *)(param_12 + 0x48) = param_5 & 1;
          *(undefined1 *)(param_12 + 0x49) = 0;
          if (param_1 != 0) {
            UnityEngine_Yoga_YogaNode__set_Height(param_1,*(undefined8 *)(param_12 + 0x78),0);
            if ((param_5 & 1) != 0) {
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar5 = OVRManager__SetFoveatedRenderingLevel(&param_14,0);
              uVar4 = param_14;
              lVar6 = param_12;
              puVar1 = 
              System_Collections_Generic_Dictionary<CurvySplineSegment,_ValueTuple<Vector3,_Quaternion>>_TypeInfo
              ;
              if ((uVar5 & 1) != 0) {
                lVar7 = *(long *)
                         System_Collections_Generic_Dictionary<CurvySplineSegment,_ValueTuple<Vector3,_Quaternion>>_TypeInfo
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
                                System_Collections_Generic_Dictionary<CurvyShapeInfo,_Type>_TypeInfo
                               ,0);
                  plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                  *plVar8 = lVar10;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar10);
                }
                lVar7 = param_12;
                if (*(int *)(*(long *)PTR_DAT_03cdabc0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_030bc0b0(uVar4,lVar10,lVar7);
                if (lVar6 == 0) goto LAB_030cc600;
                *(undefined8 *)(lVar6 + 0x40) = param_11;
                *(undefined8 *)(lVar6 + 0x38) = param_10;
                *(undefined8 *)(lVar6 + 0x30) = param_9;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar6 + 0x30,0);
              }
            }
            lVar6 = param_12;
            if (*(int *)(*(long *)PTR_DAT_03cc44b8 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_030bd04c(param_2,lVar6);
            lVar6 = param_12;
            if (param_12 != 0) {
              lVar7 = *(long *)(*(long *)PTR_DAT_03cdacd8 + 0x20);
              if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_01a46ff8();
              }
              puVar9 = (undefined2 *)
                       thunk_FUN_01a59484(lVar6 + 0x50,
                                          *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x80
                                                   ) + 0x40);
              *param_6 = *puVar9;
              return param_12;
            }
          }
        }
      }
    }
  }
LAB_030cc600:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


