/*
FUNCTION_NAME: FUN_030c1514
ENTRY_POINT: 030c1514
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


long FUN_030c1514(undefined4 param_1,undefined8 param_2,byte param_3,undefined2 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined2 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_03cc9e10;
  local_48 = param_2;
  if ((DAT_0412b698 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd8ac0);
    FUN_01ab69ac(UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cdabc0);
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    FUN_01ab69ac(System_Comparison<TimeZoneInfo>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc44b8);
    FUN_01ab69ac(System_Comparison<TimelineClip>_TypeInfo);
    FUN_01ab69ac(System_Comparison<Type>_TypeInfo);
    FUN_01ab69ac(System_Comparison<Vector2>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cdacd8);
    DAT_0412b698 = 1;
  }
  local_58 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar7 = FUN_027d75b4(&local_48,0);
  uVar5 = local_48;
  puVar4 = System_Comparison<TimelineClip>_TypeInfo;
  puVar3 = System_Comparison<TimeZoneInfo>_TypeInfo;
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)
                  UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar8 = FUN_030bcccc(uVar5,param_4);
    return lVar8;
  }
  lVar8 = *(long *)System_Comparison<TimeZoneInfo>_TypeInfo;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar8 = *(long *)puVar3;
  }
  puVar1 = PTR_DAT_03cc44b8;
  uVar7 = FUN_020b2864(*(undefined8 *)(lVar8 + 0xb8),&local_58,*(undefined8 *)puVar4);
  if ((uVar7 & 1) == 0) {
    lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
    FUN_027b3d9c(lVar8,0);
    local_58 = lVar8;
  }
  lVar8 = local_58;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar7 = FUN_030bd38c();
  if ((uVar7 & 1) == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = FUN_036d97ac(0);
  }
  if ((lVar8 != 0) && (*(undefined4 *)(lVar8 + 0x18) = uVar6, local_58 != 0)) {
    *(undefined8 *)(local_58 + 0x48) = local_48;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(local_58 + 0x48),0);
    if (local_58 != 0) {
      *(byte *)(local_58 + 0x68) = param_3 & 1;
      if ((param_3 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = OVRManager__SetFoveatedRenderingLevel(&local_48,0);
        uVar5 = local_48;
        lVar8 = local_58;
        puVar2 = System_Comparison<Vector2>_TypeInfo;
        if ((uVar7 & 1) != 0) {
          lVar9 = *(long *)System_Comparison<Vector2>_TypeInfo;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar9 = *(long *)puVar2;
          }
          lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
          if (lVar12 == 0) {
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar9 = *(long *)puVar2;
            }
            uVar13 = **(undefined8 **)(lVar9 + 0xb8);
            lVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8ac0);
            FUN_02060754(lVar12,uVar13,*(undefined8 *)System_Comparison<Type>_TypeInfo,0);
            plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
            *plVar10 = lVar12;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar12);
          }
          lVar9 = local_58;
          if (*(int *)(*(long *)PTR_DAT_03cdabc0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_030bc0b0(&local_70,uVar5,lVar12,lVar9);
          if (lVar8 == 0) goto LAB_030c1854;
          *(undefined8 *)(lVar8 + 0x60) = local_60;
          *(undefined8 *)(lVar8 + 0x58) = uStack_68;
          *(undefined8 *)(lVar8 + 0x50) = local_70;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar8 + 0x50,0);
        }
      }
      lVar8 = local_58;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_030bd04c(param_1,lVar8);
      lVar8 = local_58;
      if (local_58 != 0) {
        lVar9 = *(long *)(*(long *)PTR_DAT_03cdacd8 + 0x20);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01a46ff8();
        }
        puVar11 = (undefined2 *)
                  thunk_FUN_01a59484(lVar8 + 0x20,
                                     *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0x80) +
                                     0x40);
        *param_4 = *puVar11;
        return local_58;
      }
    }
  }
LAB_030c1854:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


