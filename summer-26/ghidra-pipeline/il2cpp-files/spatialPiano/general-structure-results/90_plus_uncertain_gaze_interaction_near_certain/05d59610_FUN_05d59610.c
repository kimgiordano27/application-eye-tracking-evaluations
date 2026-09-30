/*
FUNCTION_NAME: FUN_05d59610
ENTRY_POINT: 05d59610
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 198
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d59e54) */
/* WARNING: Removing unreachable block (ram,0x05d59e64) */

void FUN_05d59610(long param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  long local_2f8;
  long *local_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 auStack_2c8 [304];
  undefined1 auStack_198 [304];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_06bc3923 & 1) == 0) {
    FUN_02f08768(Method_OVRSceneManager_OVRManager_SceneCaptureComplete__);
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
    FUN_02f08768(Method_System_Resources_NeutralResourcesLanguageAttribute__ctor__);
    FUN_02f08768(
                Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                );
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(Method_OVRSceneManager_OnTrackingSpaceChanged__);
    FUN_02f08768(Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__);
    FUN_02f08768(Method_OVRSceneManager_UpdateAllSceneAnchors__);
    FUN_02f08768(Method_System_Globalization_DateTimeFormatInfo_GetMonthName__);
    FUN_02f08768(Method_OVRSemanticLabels_GetClassifications__);
    FUN_02f08768(Method_OVRSemanticLabels_IOVRAnchorComponent<OVRSemanticLabels>_SetEnabledAsync__);
    FUN_02f08768(Method_OVRSemanticLabels_get_Labels__);
    DAT_06bc3923 = 1;
  }
  local_2d8._0_8_ = 0;
  local_2d8._8_8_ = 0;
  local_2e8._0_8_ = 0;
  local_2e8._8_8_ = 0;
  local_2f8 = 0;
  local_2f0 = (long *)0x0;
  memset(auStack_198,0,0x130);
  if ((param_3 != 0) &&
     (lVar7 = FUN_05d4c208(param_3,*(undefined8 *)
                                    Method_System_Resources_NeutralResourcesLanguageAttribute__ctor__
                          ), lVar7 != 0)) {
    local_2d8 = FUN_05d6e14c(lVar7,0);
    local_2e8 = FUN_05d6e320(lVar7,0);
    uVar14 = *(undefined8 *)(param_1 + 0x40);
    uVar8 = FUN_05d4d060(param_1);
    puVar5 = Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__;
    if (param_2 != 0) {
      local_2f0 = (long *)FUN_03523990(param_2,uVar14,&local_2f8,uVar8,
                                       *(undefined8 *)Method_OVRSemanticLabels_get_Labels__,0x72,
                                       *(undefined8 *)Method_OVRSceneManager_UpdateAllSceneAnchors__
                                      );
      uVar8 = FUN_05d4c208(param_3,*(undefined8 *)puVar5);
      uVar14 = FUN_05d4c208(param_3,*(undefined8 *)
                                     Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
      uVar9 = FUN_05d4c208(param_3,*(undefined8 *)
                                    Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__);
      FUN_05d593f0(param_1,uVar14,&local_2f8);
      lVar11 = local_2f8;
      auVar16 = TMPro_TMP_MaterialManager__GetFallbackMaterial(lVar7,0);
      plVar6 = local_2f0;
      if (lVar11 == 0) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_05d5a008;
      }
      *(undefined1 (*) [16])(lVar11 + 0x24) = auVar16;
      auVar16 = FUN_05d6dd30(lVar7,0);
      puVar5 = Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__;
      if (plVar6 == (long *)0x0) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_05d5a008;
      }
      lVar11 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_05d59888;
          }
          uVar13 = uVar13 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_02f421d0(plVar6,*(long *)
                                     Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__,0)
      ;
LAB_05d59888:
      (*(code *)*puVar10)(plVar6,auVar16._0_8_,auVar16._8_8_,0,2,puVar10[1]);
      plVar6 = local_2f0;
      auVar16 = FUN_05d6de44(lVar7,0);
      if (plVar6 == (long *)0x0) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_05d5a008;
      }
      lVar7 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar13 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
            puVar10 = (undefined8 *)(lVar7 + (long)(*piVar12 + 4) * 0x10 + 0x138);
            goto LAB_05d59910;
          }
          uVar13 = uVar13 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_02f421d0(plVar6,*(long *)puVar5,4);
LAB_05d59910:
      (*(code *)*puVar10)(plVar6,auVar16._0_8_,auVar16._8_8_,1,puVar10[1]);
      if (local_2f8 == 0) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_05d5a008;
      }
      FUN_05d58f2c(auStack_2c8,param_1,uVar8,*(undefined8 *)(local_2f8 + 0x38),uVar9);
      memcpy(auStack_198,auStack_2c8,0x130);
      lVar7 = local_2f8;
      auVar17 = FUN_05cc687c(param_2,auStack_198,0);
      plVar6 = local_2f0;
      lVar11 = local_2f8;
      if (lVar7 == 0) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_05d5a008;
      }
      *(undefined1 (*) [12])(lVar7 + 0x40) = auVar17;
      puVar5 = 
      Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__;
      if (local_2f8 == 0) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_05d5a008;
      }
      if (local_2f0 == (long *)0x0) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_05d5a008;
      }
      lVar7 = *local_2f0;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar13 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)
               Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
             ) {
            puVar10 = (undefined8 *)(lVar7 + (long)(*piVar12 + 9) * 0x10 + 0x138);
            goto LAB_05d599e0;
          }
          uVar13 = uVar13 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_02f421d0(local_2f0,
                             *(long *)
                              Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                             ,9);
LAB_05d599e0:
      (*(code *)*puVar10)(plVar6,lVar11 + 0x40,puVar10[1]);
      puVar4 = Method_System_Globalization_DateTimeFormatInfo_GetMonthName__;
      if (*(int *)(*(long *)Method_System_Globalization_DateTimeFormatInfo_GetMonthName__ + 0xe4) ==
          0) {
        thunk_FUN_02f6670c();
      }
      if (DAT_06bc2ec1 == '\0') {
        FUN_02f08768(PTR_DAT_067ce608);
        DAT_06bc2ec1 = '\x01';
      }
      puVar3 = PTR_DAT_067ce608;
      if (*(int *)(*(long *)PTR_DAT_067ce608 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (DAT_06bc2ec2 == '\0') {
        FUN_02f08768(PTR_DAT_067ce608);
        DAT_06bc2ec2 = '\x01';
      }
      uVar2 = (uint)(ushort)local_2d8._2_2_;
      if (local_2d8._2_2_ != 0) {
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar7 = *(long *)puVar3;
        }
        piVar12 = *(int **)(lVar7 + 0xb8);
        if (uVar2 << 0x10 != *piVar12) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            piVar12 = *(int **)(*(long *)puVar3 + 0xb8);
          }
          if (uVar2 << 0x10 != piVar12[1]) goto LAB_05d59b18;
        }
        plVar6 = local_2f0;
        if (local_2f0 == (long *)0x0) {
          if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_05d5a008;
        }
        lVar7 = *local_2f0;
        uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar13 != 0) {
          piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
              puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05d59b04;
            }
            uVar13 = uVar13 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_02f421d0(local_2f0,*(long *)puVar5,0);
LAB_05d59b04:
        (*(code *)*puVar10)(plVar6,local_2d8,1,puVar10[1]);
      }
LAB_05d59b18:
      if (local_2f8 == 0) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_05d5a008;
      }
      if (*(char *)(local_2f8 + 0x20) != '\0') {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (DAT_06bc2ec1 == '\0') {
          FUN_02f08768(PTR_DAT_067ce608);
          DAT_06bc2ec1 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (DAT_06bc2ec2 == '\0') {
          FUN_02f08768(PTR_DAT_067ce608);
          DAT_06bc2ec2 = '\x01';
        }
        uVar2 = (uint)(ushort)local_2e8._2_2_;
        if (local_2e8._2_2_ != 0) {
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar7 = *(long *)puVar3;
          }
          piVar12 = *(int **)(lVar7 + 0xb8);
          if (uVar2 << 0x10 != *piVar12) {
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
              piVar12 = *(int **)(*(long *)puVar3 + 0xb8);
            }
            if (uVar2 << 0x10 != piVar12[1]) goto LAB_05d59c38;
          }
          plVar6 = local_2f0;
          if (local_2f0 == (long *)0x0) {
            if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            goto LAB_05d5a008;
          }
          lVar7 = *local_2f0;
          uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar13 != 0) {
            piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
                puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_05d59c24;
              }
              uVar13 = uVar13 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_02f421d0(local_2f0,*(long *)puVar5,0);
LAB_05d59c24:
          (*(code *)*puVar10)(plVar6,local_2e8,1,puVar10[1]);
        }
      }
LAB_05d59c38:
      plVar6 = local_2f0;
      if (local_2f0 == (long *)0x0) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      else {
        lVar7 = *local_2f0;
        uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar13 != 0) {
          piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
              puVar10 = (undefined8 *)(lVar7 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
              goto LAB_05d59c90;
            }
            uVar13 = uVar13 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_02f421d0(local_2f0,*(long *)puVar5,0xc);
LAB_05d59c90:
        (*(code *)*puVar10)(plVar6,1,puVar10[1]);
        plVar6 = local_2f0;
        puVar5 = Method_OVRSemanticLabels_IOVRAnchorComponent<OVRSemanticLabels>_SetEnabledAsync__;
        lVar7 = *(long *)
                 Method_OVRSemanticLabels_IOVRAnchorComponent<OVRSemanticLabels>_SetEnabledAsync__;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar7 = *(long *)puVar5;
        }
        puVar10 = *(undefined8 **)(lVar7 + 0xb8);
        lVar11 = puVar10[1];
        if (lVar11 == 0) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
          }
          uVar8 = *puVar10;
          lVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                       Method_OVRSceneManager_OVRManager_SceneCaptureComplete__);
          FUN_04237db8(lVar11,uVar8,*(undefined8 *)Method_OVRSemanticLabels_GetClassifications__,0);
          *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8) = lVar11;
        }
        if (plVar6 == (long *)0x0) {
          if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
        }
        else {
          lVar7 = *plVar6;
          lVar15 = *(long *)Method_OVRSceneManager_OnTrackingSpaceChanged__;
          uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar13 != 0) {
            piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)(lVar15 + 0x20)) {
                lVar7 = lVar7 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_05d59d7c;
              }
              uVar13 = uVar13 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar13 != 0);
          }
          lVar7 = FUN_02f421d0(plVar6);
LAB_05d59d7c:
          lVar7 = thunk_FUN_02f2742c(*(undefined8 *)(lVar7 + 8),lVar15);
          (**(code **)(lVar7 + 8))(plVar6,lVar11,lVar7);
          plVar6 = local_2f0;
          if (local_2f0 != (long *)0x0) {
            lVar7 = *local_2f0;
            uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar13 != 0) {
              piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_067c91b0) {
                  puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_05d59e00;
                }
                uVar13 = uVar13 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar13 != 0);
            }
            puVar10 = (undefined8 *)FUN_02f421d0(local_2f0,*(long *)PTR_DAT_067c91b0,0);
LAB_05d59e00:
            (*(code *)*puVar10)(plVar6,puVar10[1]);
          }
          if (*(long *)(lVar1 + 0x28) == local_68) {
            return;
          }
        }
      }
      goto LAB_05d5a008;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_05d5a008:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


