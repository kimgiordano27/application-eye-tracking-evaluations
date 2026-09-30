/*
FUNCTION_NAME: FUN_030cc2ac
ENTRY_POINT: 030cc2ac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 165
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;foveation_rendering;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;strong_foveation_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_foveated_rendering
*/


long FUN_030cc2ac(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,byte param_5
                 ,undefined2 *param_6)

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
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_03cc9e10;
  local_48 = param_4;
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
  local_58 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_027d75b4(&local_48,0);
  uVar4 = local_48;
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
  uVar5 = FUN_020b2864(*(undefined8 *)(lVar6 + 0xb8),&local_58,*(undefined8 *)puVar3);
  if ((uVar5 & 1) == 0) {
    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
    FUN_030ccb0c();
    local_58 = lVar6;
  }
  if (local_58 != 0) {
    *(long *)(local_58 + 0x18) = param_1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((long *)(local_58 + 0x18),param_1);
    if (local_58 != 0) {
      *(undefined8 *)(local_58 + 0x20) = param_3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(local_58 + 0x20),param_3);
      if (local_58 != 0) {
        *(undefined8 *)(local_58 + 0x28) = local_48;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(local_58 + 0x28),0);
        if (local_58 != 0) {
          *(byte *)(local_58 + 0x48) = param_5 & 1;
          *(undefined1 *)(local_58 + 0x49) = 0;
          if (param_1 != 0) {
            UnityEngine_Yoga_YogaNode__set_Height(param_1,*(undefined8 *)(local_58 + 0x78),0);
            if ((param_5 & 1) != 0) {
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar5 = OVRManager__SetFoveatedRenderingLevel(&local_48,0);
              uVar4 = local_48;
              lVar6 = local_58;
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
                lVar7 = local_58;
                if (*(int *)(*(long *)PTR_DAT_03cdabc0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_030bc0b0(&local_70,uVar4,lVar10,lVar7);
                if (lVar6 == 0) goto LAB_030cc600;
                *(undefined8 *)(lVar6 + 0x40) = local_60;
                *(undefined8 *)(lVar6 + 0x38) = uStack_68;
                *(undefined8 *)(lVar6 + 0x30) = local_70;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar6 + 0x30,0);
              }
            }
            lVar6 = local_58;
            if (*(int *)(*(long *)PTR_DAT_03cc44b8 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_030bd04c(param_2,lVar6);
            lVar6 = local_58;
            if (local_58 != 0) {
              lVar7 = *(long *)(*(long *)PTR_DAT_03cdacd8 + 0x20);
              if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_01a46ff8();
              }
              puVar9 = (undefined2 *)
                       thunk_FUN_01a59484(lVar6 + 0x50,
                                          *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x80
                                                   ) + 0x40);
              *param_6 = *puVar9;
              return local_58;
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


