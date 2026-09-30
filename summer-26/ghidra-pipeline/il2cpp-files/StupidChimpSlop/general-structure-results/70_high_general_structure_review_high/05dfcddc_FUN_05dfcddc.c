/*
FUNCTION_NAME: FUN_05dfcddc
ENTRY_POINT: 05dfcddc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_05dfcddc(float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 float param_5,float param_6,float param_7,long param_8,uint param_9,uint param_10,
                 long param_11,undefined8 param_12)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  ulong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  ulong uStack_f8;
  undefined8 local_f0 [2];
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  long local_58;
  
  if ((DAT_06a5868b & 1) == 0) {
    FUN_02d4dc40(Method_UnityEngine_UIElements_StyleSheet_AddValueToArray<ScalableImage>__);
    FUN_02d4dc40(Method_System_Net_WebClient_UploadDataInternal__);
    FUN_02d4dc40(Method_System_Net_WebHeaderCollection_AddWithoutValidate__);
    FUN_02d4dc40(Method_System_Net_WebClient_UploadValues__);
    FUN_02d4dc40(Method_System_Net_WebConnectionStream_BeginRead__);
    FUN_02d4dc40(Method_System_Net_WebHeaderCollection_CheckBadChars__);
    FUN_02d4dc40(Method_System_Net_WebHeaderCollection_GetAsString__);
    FUN_02d4dc40(UnityEngine_XR_OpenXR_Features_Mock_MockRuntime_TypeInfo);
    DAT_06a5868b = 1;
  }
  puVar2 = Method_System_Net_WebConnectionStream_BeginRead__;
  local_58 = 0;
  local_f0[0] = 0;
  if (*(long *)(param_8 + 0x40) != 0) {
    FUN_04823290(*(long *)(param_8 + 0x40),param_11,param_10 & 1,
                 *(undefined8 *)Method_System_Net_WebConnectionStream_BeginRead__);
    if (*(long *)(param_8 + 0x58) != 0) {
      FUN_04823290(*(long *)(param_8 + 0x58),param_11,param_9 & 1,*(undefined8 *)puVar2);
      if (*(long *)(param_8 + 0x50) != 0) {
        FUN_0486f5c0(param_1,*(long *)(param_8 + 0x50),param_11,
                     *(undefined8 *)Method_System_Net_WebClient_UploadValues__);
        fVar10 = 0.0;
        if ((param_9 & 1) == 0) {
          if (*(long *)(param_8 + 0x48) == 0) goto LAB_05dfd110;
          uVar4 = FUN_0483dd8c(*(long *)(param_8 + 0x48),param_12,&local_58,
                               *(undefined8 *)Method_System_Net_WebClient_UploadDataInternal__);
          puVar3 = Method_System_Net_WebHeaderCollection_AddWithoutValidate__;
          puVar2 = UnityEngine_XR_OpenXR_Features_Mock_MockRuntime_TypeInfo;
          if ((uVar4 & 1) != 0) {
            if (local_58 == 0) goto LAB_05dfd110;
            iVar1 = *(int *)(local_58 + 0x20);
            if (1 < iVar1) {
              plVar8 = *(long **)(local_58 + 0x10);
              if (plVar8 == (long *)0x0) goto LAB_05dfd110;
              iVar9 = 0;
              do {
                lVar6 = *plVar8;
                uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar4 != 0) {
                  piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                      puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                      goto LAB_05dfcfc4;
                    }
                    uVar4 = uVar4 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar4 != 0);
                }
                puVar5 = (undefined8 *)FUN_02d87540(plVar8,*(long *)puVar2,0);
LAB_05dfcfc4:
                lVar6 = (*(code *)*puVar5)(plVar8,iVar9,puVar5[1]);
                if (lVar6 != param_11) {
                  if (*(long *)(param_8 + 0x50) == 0) goto LAB_05dfd110;
                  fVar10 = (float)FUN_0486f554(*(long *)(param_8 + 0x50),lVar6,*(undefined8 *)puVar3
                                              );
                  if (fVar10 < param_1) {
                    return;
                  }
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 != iVar1);
            }
          }
          fVar10 = 0.0;
          if (param_1 < 1.0) {
            if (*(long *)(param_8 + 0x28) == 0) goto LAB_05dfd110;
            fVar10 = *(float *)(*(long *)(param_8 + 0x28) + 0x14);
          }
        }
        fVar12 = *(float *)(param_8 + 0x10);
        lVar6 = *(long *)(param_8 + 0x18);
        fVar10 = fVar10 + fVar12 * param_1;
        if (fVar10 <= fVar12) {
          fVar12 = fVar10;
        }
        uStack_f8 = (ulong)(uint)in_stack_00000008;
        local_120 = CONCAT44(param_2,param_9) & 0xffffffff00000001;
        fVar11 = 0.0;
        if (0.0 <= fVar10) {
          fVar11 = fVar12;
        }
        uStack_118 = CONCAT44(param_4,param_3);
        local_110 = CONCAT44(param_6 + fStack0000000000000004 * fVar11,
                             param_5 + fStack0000000000000000 * fVar11);
        uStack_108 = CONCAT44(1.0 - param_1,param_7 + in_stack_00000008 * fVar11);
        local_f0[0] = param_12;
        thunk_FUN_02dc1ef0(local_f0,param_12);
        if (lVar6 != 0) {
          uStack_d8 = uStack_118;
          local_e0 = local_120;
          uStack_c8 = uStack_108;
          uStack_d0 = local_110;
          uStack_b8 = uStack_f8;
          local_c0 = _fStack0000000000000000;
          local_b0 = local_f0[0];
          FUN_045f73f8(lVar6,&local_e0,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_StyleSheet_AddValueToArray<ScalableImage>__);
          return;
        }
      }
    }
  }
LAB_05dfd110:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


