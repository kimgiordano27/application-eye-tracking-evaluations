/*
FUNCTION_NAME: Unity.Entities.Serialization.SerializeUtilityInterop.AllocAndQueueReadChunkCommands_000014EF$BurstDirectCall$$GetFunctionPointerDiscard
ENTRY_POINT: 030cc2d0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 197
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;foveation_rendering;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;strong_foveation_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_foveated_rendering
*/


long Unity_Entities_Serialization_SerializeUtilityInterop_AllocAndQueueReadChunkCommands_000014EF_BurstDirectCall__GetFunctionPointerDiscard
               (ulong param_1,long param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
               byte param_6,undefined2 *param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,undefined8 param_11,undefined8 param_12,long param_13,
               undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined2 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x24;
  long unaff_x25;
  long *plVar10;
  
  plVar10 = *(long **)(unaff_x25 + 0xe10);
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x24 + 0x726) = 1;
  }
  param_13 = 0;
  if (*(int *)(*plVar10 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar4 = FUN_027d75b4(&param_15,0);
  uVar3 = param_15;
  puVar2 = System_Collections_Generic_Dictionary<ConnectionProtocol,_Type>_TypeInfo;
  puVar1 = System_Collections_Generic_Dictionary<ConnectionProtocol,_int>_TypeInfo;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)
                  UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar5 = FUN_030bcccc(uVar3,param_7);
    return lVar5;
  }
  lVar5 = *(long *)System_Collections_Generic_Dictionary<ConnectionProtocol,_int>_TypeInfo;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar1;
  }
  uVar4 = FUN_020b2864(*(undefined8 *)(lVar5 + 0xb8),&param_13,*(undefined8 *)puVar2);
  if ((uVar4 & 1) == 0) {
    lVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
    FUN_030ccb0c();
    param_13 = lVar5;
  }
  if (param_13 != 0) {
    *(long *)(param_13 + 0x18) = param_2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((long *)(param_13 + 0x18),param_2);
    if (param_13 != 0) {
      *(undefined8 *)(param_13 + 0x20) = param_4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(param_13 + 0x20),param_4);
      if (param_13 != 0) {
        *(undefined8 *)(param_13 + 0x28) = param_15;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(param_13 + 0x28),0);
        if (param_13 != 0) {
          *(byte *)(param_13 + 0x48) = param_6 & 1;
          *(undefined1 *)(param_13 + 0x49) = 0;
          if (param_2 != 0) {
            UnityEngine_Yoga_YogaNode__set_Height(param_2,*(undefined8 *)(param_13 + 0x78),0);
            if ((param_6 & 1) != 0) {
              if (*(int *)(*plVar10 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar4 = OVRManager__SetFoveatedRenderingLevel(&param_15,0);
              uVar3 = param_15;
              lVar5 = param_13;
              puVar1 = 
              System_Collections_Generic_Dictionary<CurvySplineSegment,_ValueTuple<Vector3,_Quaternion>>_TypeInfo
              ;
              if ((uVar4 & 1) != 0) {
                lVar6 = *(long *)
                         System_Collections_Generic_Dictionary<CurvySplineSegment,_ValueTuple<Vector3,_Quaternion>>_TypeInfo
                ;
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar6 = *(long *)puVar1;
                }
                lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                if (lVar8 == 0) {
                  if (*(int *)(lVar6 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar6 = *(long *)puVar1;
                  }
                  uVar9 = **(undefined8 **)(lVar6 + 0xb8);
                  lVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8ac0);
                  FUN_02060754(lVar8,uVar9,
                               *(undefined8 *)
                                System_Collections_Generic_Dictionary<CurvyShapeInfo,_Type>_TypeInfo
                               ,0);
                  plVar10 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                  *plVar10 = lVar8;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar8);
                }
                lVar6 = param_13;
                if (*(int *)(*(long *)PTR_DAT_03cdabc0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_030bc0b0(uVar3,lVar8,lVar6);
                if (lVar5 == 0) goto LAB_030cc600;
                *(undefined8 *)(lVar5 + 0x40) = param_12;
                *(undefined8 *)(lVar5 + 0x38) = param_11;
                *(undefined8 *)(lVar5 + 0x30) = param_10;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar5 + 0x30,0);
              }
            }
            lVar5 = param_13;
            if (*(int *)(*(long *)PTR_DAT_03cc44b8 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_030bd04c(param_3,lVar5);
            lVar5 = param_13;
            if (param_13 != 0) {
              lVar6 = *(long *)(*(long *)PTR_DAT_03cdacd8 + 0x20);
              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_01a46ff8();
              }
              puVar7 = (undefined2 *)
                       thunk_FUN_01a59484(lVar5 + 0x50,
                                          *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x80
                                                   ) + 0x40);
              *param_7 = *puVar7;
              return param_13;
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


