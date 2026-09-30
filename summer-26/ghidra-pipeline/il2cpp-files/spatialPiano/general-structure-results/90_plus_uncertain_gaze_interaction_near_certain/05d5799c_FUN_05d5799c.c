/*
FUNCTION_NAME: FUN_05d5799c
ENTRY_POINT: 05d5799c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 160
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void FUN_05d5799c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long local_438;
  long **local_430;
  long local_428;
  long *local_420;
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 auStack_3f8 [200];
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_260 [304];
  undefined1 auStack_130 [200];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((DAT_06bc391a & 1) == 0) {
    FUN_02f08768(Method_OVRRuntimeController_InputFocusLost__);
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
    FUN_02f08768(Method_System_Resources_NeutralResourcesLanguageAttribute__ctor__);
    FUN_02f08768(
                Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                );
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(Method_OVRRuntimeSettings_HandleSettingsCreated__);
    FUN_02f08768(Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__);
    FUN_02f08768(Method_OVRSceneAnchor_SyncComponent<OVRScenePlane>__);
    FUN_02f08768(Method_OVRAnchor_TryGetComponent<OVRStorable>__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_System_Globalization_DateTimeFormatInfo_GetMonthName__);
    FUN_02f08768(Method_OVRSceneAnchor_SyncComponent<OVRSceneVolume>__);
    FUN_02f08768(Method_OVRSceneAnchor_SyncComponent<OVRSemanticClassification>__);
    FUN_02f08768(Method_OVRSceneAnchor_GetSceneAnchors__);
    DAT_06bc391a = 1;
  }
  local_408._0_8_ = 0;
  local_408._8_8_ = 0;
  local_418._0_8_ = 0;
  local_418._8_8_ = 0;
  local_428 = 0;
  local_420 = (long *)0x0;
  memset(auStack_130,0,200);
  memset(auStack_260,0,0x130);
  if (param_3 != 0) {
    lVar8 = FUN_05d4c208(param_3,*(undefined8 *)
                                  Method_System_Resources_NeutralResourcesLanguageAttribute__ctor__)
    ;
    if (lVar8 != 0) {
      local_408 = FUN_05d6e14c(lVar8,0);
      local_418 = FUN_05d6e320(lVar8,0);
      uVar17 = *(undefined8 *)(param_1 + 0x40);
      uVar9 = FUN_05d4d060(param_1);
      puVar5 = Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__;
      if (param_2 != 0) {
        local_420 = (long *)FUN_03523990(param_2,uVar17,&local_428,uVar9,
                                         *(undefined8 *)Method_OVRSceneAnchor_GetSceneAnchors__,0xa6
                                         ,*(undefined8 *)
                                           Method_OVRSceneAnchor_SyncComponent<OVRScenePlane>__);
        local_430 = &local_420;
        local_438 = 0;
        lVar10 = FUN_05d4c208(param_3,*(undefined8 *)puVar5);
        uVar9 = FUN_05d4c208(param_3,*(undefined8 *)
                                      Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
        uVar17 = FUN_05d4c208(param_3,*(undefined8 *)
                                       Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__);
        FUN_05d577f0(param_1,uVar9,&local_428);
        puVar6 = Method_System_Globalization_DateTimeFormatInfo_GetMonthName__;
        puVar5 = PTR_DAT_067ce608;
        lVar11 = *(long *)(param_1 + 0xf0);
        if (lVar11 != 0) {
          uVar18 = 0;
          do {
            iVar7 = FUN_05de36d0(lVar11,0);
            plVar16 = local_420;
            if (iVar7 < (int)uVar18) {
              auVar19 = FUN_05d6de44(lVar8,0);
              if (plVar16 == (long *)0x0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                goto LAB_05d58a2c;
              }
              lVar11 = *plVar16;
              uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar15 == 0) goto LAB_05d57dc0;
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              goto LAB_05d57da8;
            }
            lVar11 = FUN_05d6e104(lVar8,0);
            if (lVar11 == 0) {
              if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              goto LAB_05d58a2c;
            }
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            if (*(uint *)(lVar11 + 0x18) <= uVar18) {
              if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              goto LAB_05d58a2c;
            }
            if (DAT_06bc2ec1 == '\0') {
              FUN_02f08768(puVar5);
              DAT_06bc2ec1 = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            if (DAT_06bc2ec2 == '\0') {
              FUN_02f08768(puVar5);
              DAT_06bc2ec2 = '\x01';
            }
            uVar3 = *(ushort *)(lVar11 + (long)(int)uVar18 * 0x10 + 0x22);
            iVar7 = (uint)uVar3 << 0x10;
            if (uVar3 != 0) {
              lVar11 = *(long *)puVar5;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
                lVar11 = *(long *)puVar5;
              }
              piVar13 = *(int **)(lVar11 + 0xb8);
              if (iVar7 != *piVar13) {
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                  piVar13 = *(int **)(*(long *)puVar5 + 0xb8);
                }
                if (iVar7 != piVar13[1]) goto LAB_05d57d48;
              }
              plVar16 = local_420;
              lVar11 = FUN_05d6e104(lVar8,0);
              if (lVar11 == 0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                goto LAB_05d58a2c;
              }
              if (*(uint *)(lVar11 + 0x18) <= uVar18) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089d0();
                }
                goto LAB_05d58a2c;
              }
              if (plVar16 == (long *)0x0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                goto LAB_05d58a2c;
              }
              lVar11 = lVar11 + (long)(int)uVar18 * 0x10;
              lVar14 = *plVar16;
              uVar9 = *(undefined8 *)(lVar11 + 0x20);
              uVar1 = *(undefined8 *)(lVar11 + 0x28);
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar15 != 0) {
                piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) ==
                      *(long *)Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__) {
                    puVar12 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_05d57d2c;
                  }
                  uVar15 = uVar15 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar15 != 0);
              }
              puVar12 = (undefined8 *)
                        FUN_02f421d0(plVar16,*(long *)
                                              Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__
                                     ,0);
LAB_05d57d2c:
              (*(code *)*puVar12)(plVar16,uVar9,uVar1,uVar18,2,puVar12[1]);
            }
LAB_05d57d48:
            lVar11 = *(long *)(param_1 + 0xf0);
            uVar18 = uVar18 + 1;
          } while (lVar11 != 0);
        }
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_05d58a2c;
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  goto LAB_05d58a2c;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar13 = piVar13 + 4;
    if (uVar15 == 0) break;
LAB_05d57da8:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__) {
      puVar12 = (undefined8 *)(lVar11 + (long)(*piVar13 + 4) * 0x10 + 0x138);
      goto LAB_05d57de0;
    }
  }
LAB_05d57dc0:
  puVar12 = (undefined8 *)
            FUN_02f421d0(plVar16,*(long *)
                                  Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__,4);
LAB_05d57de0:
  (*(code *)*puVar12)(plVar16,auVar19._0_8_,auVar19._8_8_,1,puVar12[1]);
  if (*(char *)(param_2 + 0x18) == '\0') {
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (DAT_06bc2ec1 == '\0') {
      FUN_02f08768(PTR_DAT_067ce608);
      DAT_06bc2ec1 = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (DAT_06bc2ec2 == '\0') {
      FUN_02f08768(PTR_DAT_067ce608);
      DAT_06bc2ec2 = '\x01';
    }
    uVar18 = (uint)(ushort)local_408._2_2_;
    if (local_408._2_2_ != 0) {
      lVar8 = *(long *)puVar5;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar8 = *(long *)puVar5;
      }
      piVar13 = *(int **)(lVar8 + 0xb8);
      if (uVar18 << 0x10 != *piVar13) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          piVar13 = *(int **)(*(long *)puVar5 + 0xb8);
        }
        if (uVar18 << 0x10 != piVar13[1]) goto LAB_05d581f0;
      }
      plVar16 = local_420;
      if (local_420 == (long *)0x0) {
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_05d58a2c;
      }
      lVar8 = *local_420;
      uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar15 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)
               Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
             ) {
            puVar12 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_05d581dc;
          }
          uVar15 = uVar15 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_02f421d0(local_420,
                             *(long *)
                              Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                             ,0);
LAB_05d581dc:
      (*(code *)*puVar12)(plVar16,local_408,1,puVar12[1]);
    }
LAB_05d581f0:
    if (*(char *)(param_1 + 0x100) != '\0') {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (DAT_06bc2ec1 == '\0') {
        FUN_02f08768(PTR_DAT_067ce608);
        DAT_06bc2ec1 = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (DAT_06bc2ec2 == '\0') {
        FUN_02f08768(PTR_DAT_067ce608);
        DAT_06bc2ec2 = '\x01';
      }
      uVar18 = (uint)(ushort)local_418._2_2_;
      if (local_418._2_2_ != 0) {
        lVar8 = *(long *)puVar5;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar8 = *(long *)puVar5;
        }
        piVar13 = *(int **)(lVar8 + 0xb8);
        if (uVar18 << 0x10 != *piVar13) {
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            piVar13 = *(int **)(*(long *)puVar5 + 0xb8);
          }
          if (uVar18 << 0x10 != piVar13[1]) goto LAB_05d58310;
        }
        plVar16 = local_420;
        if (local_420 == (long *)0x0) {
          if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_05d58a2c;
        }
        lVar8 = *local_420;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar15 != 0) {
          piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)
                 Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
               ) {
              puVar12 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_05d582fc;
            }
            uVar15 = uVar15 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar15 != 0);
        }
        puVar12 = (undefined8 *)
                  FUN_02f421d0(local_420,
                               *(long *)
                                Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                               ,0);
LAB_05d582fc:
        (*(code *)*puVar12)(plVar16,local_418,1,puVar12[1]);
      }
    }
  }
  else {
    lVar11 = FUN_05d6e104(lVar8,0);
    if (lVar11 == 0) {
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_05d58a2c;
    }
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (*(uint *)(lVar11 + 0x18) < 5) {
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      goto LAB_05d58a2c;
    }
    if (DAT_06bc2ec1 == '\0') {
      FUN_02f08768(PTR_DAT_067ce608);
      DAT_06bc2ec1 = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (DAT_06bc2ec2 == '\0') {
      FUN_02f08768(PTR_DAT_067ce608);
      DAT_06bc2ec2 = '\x01';
    }
    iVar7 = (uint)*(ushort *)(lVar11 + 0x62) << 0x10;
    if (*(ushort *)(lVar11 + 0x62) != 0) {
      lVar11 = *(long *)puVar5;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar11 = *(long *)puVar5;
      }
      piVar13 = *(int **)(lVar11 + 0xb8);
      if (iVar7 != *piVar13) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          piVar13 = *(int **)(*(long *)puVar5 + 0xb8);
        }
        if (iVar7 != piVar13[1]) goto LAB_05d58060;
      }
      plVar16 = local_420;
      lVar11 = FUN_05d6e104(lVar8,0);
      if (lVar11 == 0) {
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_05d58a2c;
      }
      if (*(uint *)(lVar11 + 0x18) < 5) {
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        goto LAB_05d58a2c;
      }
      if (plVar16 == (long *)0x0) {
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_05d58a2c;
      }
      lVar14 = *plVar16;
      uVar9 = *(undefined8 *)(lVar11 + 0x60);
      uVar1 = *(undefined8 *)(lVar11 + 0x68);
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__) {
            puVar12 = (undefined8 *)(lVar14 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_05d58044;
          }
          uVar15 = uVar15 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_02f421d0(plVar16,*(long *)
                                      Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__,2
                            );
LAB_05d58044:
      (*(code *)*puVar12)(plVar16,uVar9,uVar1,0,1,puVar12[1]);
    }
LAB_05d58060:
    if (*(char *)(param_1 + 0x100) == '\0') goto LAB_05d58310;
    lVar11 = FUN_05d6e104(lVar8,0);
    if (lVar11 == 0) {
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_05d58a2c;
    }
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (*(uint *)(lVar11 + 0x18) < 6) {
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      goto LAB_05d58a2c;
    }
    if (DAT_06bc2ec1 == '\0') {
      FUN_02f08768(PTR_DAT_067ce608);
      DAT_06bc2ec1 = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (DAT_06bc2ec2 == '\0') {
      FUN_02f08768(PTR_DAT_067ce608);
      DAT_06bc2ec2 = '\x01';
    }
    iVar7 = (uint)*(ushort *)(lVar11 + 0x72) << 0x10;
    if (*(ushort *)(lVar11 + 0x72) != 0) {
      lVar11 = *(long *)puVar5;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar11 = *(long *)puVar5;
      }
      piVar13 = *(int **)(lVar11 + 0xb8);
      if (iVar7 != *piVar13) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          piVar13 = *(int **)(*(long *)puVar5 + 0xb8);
        }
        if (iVar7 != piVar13[1]) goto LAB_05d58310;
      }
      plVar16 = local_420;
      lVar8 = FUN_05d6e104(lVar8,0);
      if (lVar8 == 0) {
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_05d58a2c;
      }
      if (*(uint *)(lVar8 + 0x18) < 6) {
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        goto LAB_05d58a2c;
      }
      if (plVar16 == (long *)0x0) {
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_05d58a2c;
      }
      lVar11 = *plVar16;
      uVar9 = *(undefined8 *)(lVar8 + 0x70);
      uVar1 = *(undefined8 *)(lVar8 + 0x78);
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar15 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__) {
            puVar12 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_05d581b0;
          }
          uVar15 = uVar15 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_02f421d0(plVar16,*(long *)
                                      Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__,2
                            );
LAB_05d581b0:
      (*(code *)*puVar12)(plVar16,uVar9,uVar1,1,1,puVar12[1]);
    }
  }
LAB_05d58310:
  if (local_428 == 0) {
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    lVar8 = *(long *)(local_428 + 0x28);
    if (lVar8 == 0) {
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    else {
      uVar2 = *(undefined4 *)(lVar8 + 0x198);
      uVar9 = *(undefined8 *)(param_1 + 0xd8);
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05db0678(&local_330,uVar9,lVar10,lVar8,uVar17,uVar2,0);
      memcpy(auStack_130,&local_330,200);
      if (lVar10 == 0) {
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      else {
        uStack_328 = *(undefined8 *)(param_1 + 0xc0);
        local_330 = *(undefined8 *)(param_1 + 0xb8);
        uStack_318 = *(undefined8 *)(param_1 + 0xd0);
        uStack_320 = *(undefined8 *)(param_1 + 200);
        uVar9 = *(undefined8 *)(lVar10 + 0x18);
        uVar17 = *(undefined8 *)(lVar10 + 0x20);
        if (*(int *)(*(long *)Method_OVRAnchor_TryGetComponent<OVRStorable>__ + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        memcpy(auStack_3f8,auStack_130,200);
        uStack_458 = uStack_328;
        local_460 = local_330;
        uStack_448 = uStack_318;
        uStack_450 = uStack_320;
        FUN_061276f4(auStack_260,uVar9,uVar17,auStack_3f8,&local_460,0);
        lVar8 = local_428;
        auVar20 = FUN_05cc687c(param_2,auStack_260,0);
        plVar16 = local_420;
        lVar10 = local_428;
        if (lVar8 == 0) {
          if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
        }
        else {
          *(undefined1 (*) [12])(lVar8 + 0x30) = auVar20;
          if (local_428 == 0) {
            if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
          }
          else if (local_420 == (long *)0x0) {
            if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
          }
          else {
            lVar8 = *local_420;
            uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar15 != 0) {
              piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) ==
                    *(long *)
                     Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                   ) {
                  puVar12 = (undefined8 *)(lVar8 + (long)(*piVar13 + 9) * 0x10 + 0x138);
                  goto LAB_05d58458;
                }
                uVar15 = uVar15 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar15 != 0);
            }
            puVar12 = (undefined8 *)
                      FUN_02f421d0(local_420,
                                   *(long *)
                                    Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                                   ,9);
LAB_05d58458:
            (*(code *)*puVar12)(plVar16,lVar10 + 0x30,puVar12[1]);
            plVar16 = local_420;
            if (local_420 == (long *)0x0) {
              if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
            }
            else {
              lVar8 = *local_420;
              uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar15 != 0) {
                piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) ==
                      *(long *)
                       Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                     ) {
                    puVar12 = (undefined8 *)(lVar8 + (long)(*piVar13 + 0xc) * 0x10 + 0x138);
                    goto LAB_05d584c8;
                  }
                  uVar15 = uVar15 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar15 != 0);
              }
              puVar12 = (undefined8 *)
                        FUN_02f421d0(local_420,
                                     *(long *)
                                      Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                                     ,0xc);
LAB_05d584c8:
              (*(code *)*puVar12)(plVar16,1,puVar12[1]);
              plVar16 = local_420;
              lVar8 = *(long *)Method_OVRSceneAnchor_SyncComponent<OVRSemanticClassification>__;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
                lVar8 = *(long *)Method_OVRSceneAnchor_SyncComponent<OVRSemanticClassification>__;
              }
              puVar12 = *(undefined8 **)(lVar8 + 0xb8);
              lVar10 = puVar12[1];
              if (lVar10 == 0) {
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                  puVar12 = *(undefined8 **)
                             (*(long *)
                               Method_OVRSceneAnchor_SyncComponent<OVRSemanticClassification>__ +
                             0xb8);
                }
                uVar9 = *puVar12;
                lVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                             Method_OVRRuntimeController_InputFocusLost__);
                FUN_04237db8(lVar10,uVar9,
                             *(undefined8 *)Method_OVRSceneAnchor_SyncComponent<OVRSceneVolume>__,0)
                ;
                *(long *)(*(long *)(*(long *)
                                     Method_OVRSceneAnchor_SyncComponent<OVRSemanticClassification>__
                                   + 0xb8) + 8) = lVar10;
              }
              if (plVar16 == (long *)0x0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
              }
              else {
                lVar8 = *plVar16;
                lVar11 = *(long *)Method_OVRRuntimeSettings_HandleSettingsCreated__;
                uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar15 != 0) {
                  piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)(lVar11 + 0x20)) {
                      lVar8 = lVar8 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar11 + 0x50)) *
                                      0x10 + 0x138;
                      goto LAB_05d585cc;
                    }
                    uVar15 = uVar15 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar15 != 0);
                }
                lVar8 = FUN_02f421d0(plVar16);
LAB_05d585cc:
                lVar8 = thunk_FUN_02f2742c(*(undefined8 *)(lVar8 + 8),lVar11);
                (**(code **)(lVar8 + 8))(plVar16,lVar10,lVar8);
                plVar16 = *local_430;
                if (plVar16 != (long *)0x0) {
                  lVar8 = *plVar16;
                  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
                  if (uVar15 != 0) {
                    piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_067c91b0) {
                        puVar12 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                        goto LAB_05d5864c;
                      }
                      uVar15 = uVar15 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_02f421d0(plVar16,*(long *)PTR_DAT_067c91b0,0);
LAB_05d5864c:
                  (*(code *)*puVar12)(plVar16,puVar12[1]);
                }
                if (local_438 == 0) {
                  if (*(long *)(lVar4 + 0x28) == local_68) {
                    return;
                  }
                }
                else if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c0();
                }
              }
            }
          }
        }
      }
    }
  }
LAB_05d58a2c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


