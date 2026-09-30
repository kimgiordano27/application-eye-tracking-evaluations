/*
FUNCTION_NAME: FUN_05a9ac64
ENTRY_POINT: 05a9ac64
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_15;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_15;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05a9ac64(long param_1,ulong param_2,int param_3,long param_4,ulong *param_5,uint *param_6,
                 uint param_7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  float local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  long local_58;
  
  if ((DAT_066d420f & 1) == 0) {
    FUN_02b3c81c(
                Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<Finger>__
                );
    FUN_02b3c81c(PTR_DAT_06320570);
    DAT_066d420f = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_78 = 0;
  local_80 = 0;
  uStack_7c = 0;
  local_58 = 0;
  local_98 = 0.0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  iVar2 = FUN_05a85fb4(param_4,0);
  if (iVar2 == 0) {
    return;
  }
  uVar4 = FUN_05a85fb4(param_4,0);
  uVar3 = FUN_05a81c84(uVar4,0);
  lVar6 = *(long *)(param_1 + 0x38);
  if (lVar6 == 0) goto LAB_05a9b1e4;
  if (*(uint *)(lVar6 + 0x18) <= uVar3)
  goto UnityEngine_XR_OpenXR_Features_SpaceWarpFeature__MetaSetAppSpacePosition;
  lVar9 = (long)(int)uVar3;
  lVar6 = *(long *)(lVar6 + lVar9 * 8 + 0x20);
  if (lVar6 != 0) {
    FUN_05a9b1ec(lVar6,*(undefined4 *)(param_4 + 0x3c));
    uVar5 = FUN_05a85e10(param_4,&local_90,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x20);
    if (lVar6 == 0) goto LAB_05a9b1e4;
    if (*(uint *)(lVar6 + 0x18) <= uVar3)
    goto UnityEngine_XR_OpenXR_Features_SpaceWarpFeature__MetaSetAppSpacePosition;
    lVar6 = *(long *)(lVar6 + lVar9 * 8 + 0x20);
    if ((lVar6 == 0) || (lVar6 = FUN_05c8c8e0(lVar6,0), lVar6 == 0)) goto LAB_05a9b1e4;
    FUN_05c9b4fc(local_90 & 0xffffffff,local_90._4_4_,uStack_88,lVar6,0);
    lVar6 = *(long *)(param_1 + 0x20);
    if (lVar6 == 0) goto LAB_05a9b1e4;
    if (*(uint *)(lVar6 + 0x18) <= uVar3)
    goto UnityEngine_XR_OpenXR_Features_SpaceWarpFeature__MetaSetAppSpacePosition;
    lVar6 = *(long *)(lVar6 + lVar9 * 8 + 0x20);
    if ((lVar6 == 0) || (lVar6 = FUN_05c8c8e0(lVar6,0), lVar6 == 0)) goto LAB_05a9b1e4;
    uVar12 = uStack_7c;
    uVar14 = local_80;
    FUN_05c9c3b0(uStack_84,local_80,uStack_7c,local_78,lVar6,0);
    if (((param_2 & 1) != 0) &&
       (iVar2 = FUN_05a85fb4(param_4,0), puVar1 = PTR_DAT_06320570, iVar2 != 1)) {
      lVar6 = *(long *)PTR_DAT_06320570;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar6 = *(long *)puVar1;
      }
      lVar7 = *(long *)(param_1 + 0x20);
      if (lVar7 == 0) goto LAB_05a9b1e4;
      if (*(uint *)(lVar7 + 0x18) <= *param_6)
      goto UnityEngine_XR_OpenXR_Features_SpaceWarpFeature__MetaSetAppSpacePosition;
      lVar7 = *(long *)(lVar7 + (long)(int)*param_6 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_05a9b1e4;
      lVar10 = **(long **)(lVar6 + 0xb8);
      lVar6 = FUN_05c8c8e0(lVar7,0);
      if ((lVar6 == 0) || (uVar11 = FUN_05c9bf94(lVar6,0), lVar10 == 0)) goto LAB_05a9b1e4;
      if (*(int *)(lVar10 + 0x18) == 0)
      goto UnityEngine_XR_OpenXR_Features_SpaceWarpFeature__MetaSetAppSpacePosition;
      *(undefined4 *)(lVar10 + 0x20) = uVar11;
      *(undefined4 *)(lVar10 + 0x24) = uVar14;
      *(undefined4 *)(lVar10 + 0x28) = uVar12;
      lVar6 = *(long *)(param_1 + 0x20);
      if (lVar6 == 0) goto LAB_05a9b1e4;
      if (*(uint *)(lVar6 + 0x18) <= uVar3)
      goto UnityEngine_XR_OpenXR_Features_SpaceWarpFeature__MetaSetAppSpacePosition;
      lVar6 = *(long *)(lVar6 + lVar9 * 8 + 0x20);
      if (lVar6 == 0) goto LAB_05a9b1e4;
      lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
      lVar6 = FUN_05c8c8e0(lVar6,0);
      if ((lVar6 == 0) || (uVar11 = FUN_05c9bf94(lVar6,0), lVar7 == 0)) goto LAB_05a9b1e4;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0)
      goto UnityEngine_XR_OpenXR_Features_SpaceWarpFeature__MetaSetAppSpacePosition;
      *(undefined4 *)(lVar7 + 0x2c) = uVar11;
      *(undefined4 *)(lVar7 + 0x30) = uVar14;
      *(undefined4 *)(lVar7 + 0x34) = uVar12;
      lVar6 = *(long *)(param_1 + 0x30);
      if (lVar6 == 0) goto LAB_05a9b1e4;
      if (*(uint *)(lVar6 + 0x18) <= uVar3)
      goto UnityEngine_XR_OpenXR_Features_SpaceWarpFeature__MetaSetAppSpacePosition;
      lVar6 = *(long *)(lVar6 + lVar9 * 8 + 0x20);
      if (lVar6 == 0) goto LAB_05a9b1e4;
      FUN_05c54a7c(lVar6,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
    }
    if ((param_7 & 1) != 0) {
      param_5[1] = CONCAT44(uStack_84,uStack_88);
      *param_5 = local_90;
      *(ulong *)((long)param_5 + 0x14) = CONCAT44(local_78,uStack_7c);
      *(ulong *)((long)param_5 + 0xc) = CONCAT44(local_80,uStack_84);
      *param_6 = uVar3;
    }
    if (param_3 == 2) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 != 0) {
      if (*(uint *)(lVar6 + 0x18) <= uVar3) {
UnityEngine_XR_OpenXR_Features_SpaceWarpFeature__MetaSetAppSpacePosition:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar6 = *(long *)(lVar6 + lVar9 * 8 + 0x20);
      if (lVar6 != 0) {
        uVar5 = FUN_031d911c(lVar6,&local_58,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<Finger>__
                            );
        if ((uVar5 & 1) == 0) {
          return;
        }
        lVar6 = *(long *)(param_1 + 0x28);
        if (lVar6 != 0) {
          if (*(uint *)(lVar6 + 0x18) <= uVar3)
          goto UnityEngine_XR_OpenXR_Features_SpaceWarpFeature__MetaSetAppSpacePosition;
          lVar6 = *(long *)(lVar6 + lVar9 * 8 + 0x20);
          if (lVar6 != 0) {
            lVar6 = FUN_05c8c8e0(lVar6,0);
            if (DAT_066c1d97 == '\0') {
              FUN_02b3c81c(PTR_DAT_06312438);
              DAT_066c1d97 = '\x01';
            }
            if (lVar6 != 0) {
              puVar8 = *(undefined4 **)(*(long *)PTR_DAT_06312438 + 0xb8);
              FUN_05c9b4fc(*puVar8,puVar8[1],puVar8[2],lVar6,0);
              lVar6 = *(long *)(param_1 + 0x28);
              if (lVar6 != 0) {
                if (*(uint *)(lVar6 + 0x18) <= uVar3)
                goto UnityEngine_XR_OpenXR_Features_SpaceWarpFeature__MetaSetAppSpacePosition;
                lVar6 = *(long *)(lVar6 + lVar9 * 8 + 0x20);
                if (lVar6 != 0) {
                  lVar6 = FUN_05c8c8e0(lVar6,0);
                  if (DAT_066c1d9a == '\0') {
                    FUN_02b3c81c(PTR_DAT_06312cd8);
                    DAT_066c1d9a = '\x01';
                  }
                  if (lVar6 != 0) {
                    puVar8 = *(undefined4 **)(*(long *)PTR_DAT_06312cd8 + 0xb8);
                    fVar16 = (float)puVar8[2];
                    fVar15 = (float)puVar8[1];
                    FUN_05c9c3b0(*puVar8,fVar15,fVar16,puVar8[3],lVar6,0);
                    puVar1 = PTR_DAT_06320570;
                    lVar6 = *(long *)PTR_DAT_06320570;
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                      lVar6 = *(long *)puVar1;
                    }
                    lVar7 = *(long *)(param_1 + 0x28);
                    if (lVar7 != 0) {
                      if (*(uint *)(lVar7 + 0x18) <= uVar3)
                      goto UnityEngine_XR_OpenXR_Features_SpaceWarpFeature__MetaSetAppSpacePosition;
                      lVar9 = *(long *)(lVar7 + lVar9 * 8 + 0x20);
                      if (lVar9 != 0) {
                        lVar7 = **(long **)(lVar6 + 0xb8);
                        lVar6 = FUN_05c8c8e0(lVar9,0);
                        if ((lVar6 != 0) && (uVar12 = FUN_05c9bf94(lVar6,0), lVar7 != 0)) {
                          if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0)
                          goto 
                          UnityEngine_XR_OpenXR_Features_SpaceWarpFeature__MetaSetAppSpacePosition;
                          *(float *)(lVar7 + 0x30) = fVar15;
                          *(float *)(lVar7 + 0x34) = fVar16;
                          *(undefined4 *)(lVar7 + 0x20) = uVar12;
                          *(float *)(lVar7 + 0x24) = fVar15;
                          *(float *)(lVar7 + 0x28) = fVar16;
                          *(undefined4 *)(lVar7 + 0x2c) = uVar12;
                          if (param_3 == 1) {
                            uVar5 = FUN_05a86070(param_4,&local_b0,0);
                            if ((uVar5 & 1) != 0) {
                              lVar6 = *(long *)puVar1;
                              if (*(int *)(lVar6 + 0xe4) == 0) {
                                thunk_FUN_02b9ad44();
                                lVar6 = *(long *)puVar1;
                              }
                              lVar6 = **(long **)(lVar6 + 0xb8);
                              if (lVar6 == 0) goto LAB_05a9b1e4;
                              if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0)
                              goto 
                              UnityEngine_XR_OpenXR_Features_SpaceWarpFeature__MetaSetAppSpacePosition
                              ;
                              fVar17 = *(float *)(lVar6 + 0x34);
                              uVar4 = *(undefined8 *)(lVar6 + 0x2c);
                              fVar13 = (float)FUN_02c52da8(&local_b0,0);
                              fVar16 = fVar16 * DAT_010322e4;
                              *(ulong *)(lVar6 + 0x2c) =
                                   CONCAT44((float)((ulong)uVar4 >> 0x20) + fVar15 * 0.05,
                                            (float)uVar4 + fVar13 * 0.05);
                              *(float *)(lVar6 + 0x34) = fVar17 + fVar16;
                            }
                          }
                          else if ((param_3 == 0) &&
                                  (uVar5 = FUN_05a85ff8(param_4,&local_a0,0), (uVar5 & 1) != 0)) {
                            lVar6 = *(long *)puVar1;
                            if (*(int *)(lVar6 + 0xe4) == 0) {
                              thunk_FUN_02b9ad44();
                              lVar6 = *(long *)puVar1;
                            }
                            lVar6 = **(long **)(lVar6 + 0xb8);
                            if (lVar6 == 0) goto LAB_05a9b1e4;
                            if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0)
                            goto 
                            UnityEngine_XR_OpenXR_Features_SpaceWarpFeature__MetaSetAppSpacePosition
                            ;
                            *(ulong *)(lVar6 + 0x2c) =
                                 CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x2c) >> 0x20) +
                                          (float)((ulong)local_a0 >> 0x20),
                                          (float)*(undefined8 *)(lVar6 + 0x2c) + (float)local_a0);
                            *(float *)(lVar6 + 0x34) = *(float *)(lVar6 + 0x34) + local_98;
                          }
                          lVar6 = local_58;
                          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                            thunk_FUN_02b9ad44();
                          }
                          if (lVar6 != 0) {
                            FUN_05c54a7c(lVar6,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_05a9b1e4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


