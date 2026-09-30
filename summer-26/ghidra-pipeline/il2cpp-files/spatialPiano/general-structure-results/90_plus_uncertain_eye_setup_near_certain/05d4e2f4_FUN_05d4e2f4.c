/*
FUNCTION_NAME: FUN_05d4e2f4
ENTRY_POINT: 05d4e2f4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d4e900) */
/* WARNING: Removing unreachable block (ram,0x05d4e910) */

void FUN_05d4e2f4(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 local_418;
  long **pplStack_410;
  long local_408;
  long *local_400;
  undefined1 auStack_3f8 [200];
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_260 [304];
  undefined1 auStack_130 [200];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_06bc38c0 & 1) == 0) {
    FUN_02f08768(Method_OVRAnchor_TryGetComponent<OVRTriangleMesh>__);
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
    FUN_02f08768(Method_System_Resources_NeutralResourcesLanguageAttribute__ctor__);
    FUN_02f08768(
                Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                );
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(Method_OVRAnchor_CreateSpatialAnchorAsync__);
    FUN_02f08768(Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__);
    FUN_02f08768(Method_OVRAnchor_EraseAsync__);
    FUN_02f08768(Method_OVRAnchor_TryGetComponent<OVRStorable>__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_OVRAnchor_FetchAnchors__);
    FUN_02f08768(Method_OVRAnchor_FetchAnchorsAsync__);
    FUN_02f08768(Method_System_Data_NewDiffgramGen_GenerateColumn__);
    FUN_02f08768(Method_OVRAnchor_FetchAnchorsAsync__);
    FUN_02f08768(Method_OVRAnchor_GetSupportedComponents__);
    DAT_06bc38c0 = 1;
  }
  local_408 = 0;
  local_400 = (long *)0x0;
  memset(auStack_130,0,200);
  memset(auStack_260,0,0x130);
  if (param_2 == 0) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    local_400 = (long *)FUN_03523990(param_2,*(undefined8 *)Method_OVRAnchor_FetchAnchorsAsync__,
                                     &local_408,*(undefined8 *)(param_1 + 0xe0),
                                     *(undefined8 *)Method_OVRAnchor_GetSupportedComponents__,0x3e,
                                     *(undefined8 *)Method_OVRAnchor_EraseAsync__);
    pplStack_410 = &local_400;
    local_418 = 0;
    if (param_3 == 0) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    else {
      lVar5 = FUN_05d4c208(param_3,*(undefined8 *)
                                    Method_System_Resources_NeutralResourcesLanguageAttribute__ctor__
                          );
      lVar6 = FUN_05d4c208(param_3,*(undefined8 *)
                                    Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
      lVar7 = FUN_05d4c208(param_3,*(undefined8 *)
                                    Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
      uVar8 = FUN_05d4c208(param_3,*(undefined8 *)
                                    Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__);
      plVar4 = local_400;
      if (lVar7 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      else if (lVar5 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      else {
        auVar14 = FUN_05d6dd30(lVar5,0);
        puVar3 = Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__;
        if (plVar4 == (long *)0x0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
        }
        else {
          lVar10 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) ==
                  *(long *)Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__) {
                puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_05d4e550;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_02f421d0(plVar4,*(long *)
                                        Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__
                                ,0);
LAB_05d4e550:
          (*(code *)*puVar9)(plVar4,auVar14._0_8_,auVar14._8_8_,0,2,puVar9[1]);
          plVar4 = local_400;
          auVar14 = FUN_05d6de44(lVar5,0);
          if (plVar4 == (long *)0x0) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
          }
          else {
            lVar5 = *plVar4;
            uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                  puVar9 = (undefined8 *)(lVar5 + (long)(*piVar12 + 4) * 0x10 + 0x138);
                  goto LAB_05d4e5d8;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar9 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)puVar3,4);
LAB_05d4e5d8:
            (*(code *)*puVar9)(plVar4,auVar14._0_8_,auVar14._8_8_,1,puVar9[1]);
            uVar1 = *(undefined4 *)(lVar7 + 0x198);
            uVar13 = *(undefined8 *)(param_1 + 0xd8);
            if (*(int *)(*(long *)
                          Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                        + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_05db0678(&local_330,uVar13,lVar6,lVar7,uVar8,uVar1,0);
            memcpy(auStack_130,&local_330,200);
            if (lVar6 == 0) {
              if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
            }
            else {
              uStack_328 = *(undefined8 *)(param_1 + 0xc0);
              local_330 = *(undefined8 *)(param_1 + 0xb8);
              uStack_318 = *(undefined8 *)(param_1 + 0xd0);
              uStack_320 = *(undefined8 *)(param_1 + 200);
              uVar8 = *(undefined8 *)(lVar6 + 0x18);
              uVar13 = *(undefined8 *)(lVar6 + 0x20);
              if (*(int *)(*(long *)Method_OVRAnchor_TryGetComponent<OVRStorable>__ + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              memcpy(auStack_3f8,auStack_130,200);
              uStack_438 = uStack_328;
              local_440 = local_330;
              uStack_428 = uStack_318;
              uStack_430 = uStack_320;
              FUN_061276f4(auStack_260,uVar8,uVar13,auStack_3f8,&local_440,0);
              lVar5 = local_408;
              auVar15 = FUN_05cc687c(param_2,auStack_260,0);
              plVar4 = local_400;
              lVar6 = local_408;
              if (lVar5 == 0) {
                if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
              }
              else {
                *(undefined1 (*) [12])(lVar5 + 0x10) = auVar15;
                if (local_408 == 0) {
                  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8();
                  }
                }
                else if (local_400 == (long *)0x0) {
                  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8();
                  }
                }
                else {
                  lVar5 = *local_400;
                  uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar11 != 0) {
                    piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) ==
                          *(long *)
                           Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                         ) {
                        puVar9 = (undefined8 *)(lVar5 + (long)(*piVar12 + 9) * 0x10 + 0x138);
                        goto LAB_05d4e728;
                      }
                      uVar11 = uVar11 - 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar11 != 0);
                  }
                  puVar9 = (undefined8 *)
                           FUN_02f421d0(local_400,
                                        *(long *)
                                         Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                                        ,9);
LAB_05d4e728:
                  (*(code *)*puVar9)(plVar4,lVar6 + 0x10,puVar9[1]);
                  plVar4 = local_400;
                  puVar3 = Method_OVRAnchor_FetchAnchorsAsync__;
                  lVar5 = *(long *)Method_OVRAnchor_FetchAnchorsAsync__;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                    lVar5 = *(long *)puVar3;
                  }
                  puVar9 = *(undefined8 **)(lVar5 + 0xb8);
                  lVar6 = puVar9[1];
                  if (lVar6 == 0) {
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_02f6670c();
                      puVar9 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
                    }
                    uVar8 = *puVar9;
                    lVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                                Method_OVRAnchor_TryGetComponent<OVRTriangleMesh>__)
                    ;
                    FUN_04237db8(lVar6,uVar8,*(undefined8 *)Method_OVRAnchor_FetchAnchors__,0);
                    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar6;
                  }
                  if (plVar4 == (long *)0x0) {
                    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f089c8();
                    }
                  }
                  else {
                    lVar5 = *plVar4;
                    lVar7 = *(long *)Method_OVRAnchor_CreateSpatialAnchorAsync__;
                    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar11 != 0) {
                      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar12 + -2) == *(long *)(lVar7 + 0x20)) {
                          lVar5 = lVar5 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar7 + 0x50)) *
                                          0x10 + 0x138;
                          goto LAB_05d4e814;
                        }
                        uVar11 = uVar11 - 1;
                        piVar12 = piVar12 + 4;
                      } while (uVar11 != 0);
                    }
                    lVar5 = FUN_02f421d0(plVar4);
LAB_05d4e814:
                    lVar5 = thunk_FUN_02f2742c(*(undefined8 *)(lVar5 + 8),lVar7);
                    (**(code **)(lVar5 + 8))(plVar4,lVar6,lVar5);
                    plVar4 = local_400;
                    if (local_400 != (long *)0x0) {
                      lVar5 = *local_400;
                      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
                      if (uVar11 != 0) {
                        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_067c91b0) {
                            puVar9 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
                            goto LAB_05d4e898;
                          }
                          uVar11 = uVar11 - 1;
                          piVar12 = piVar12 + 4;
                        } while (uVar11 != 0);
                      }
                      puVar9 = (undefined8 *)FUN_02f421d0(local_400,*(long *)PTR_DAT_067c91b0,0);
LAB_05d4e898:
                      (*(code *)*puVar9)(plVar4,puVar9[1]);
                    }
                    if (*(long *)(lVar2 + 0x28) == local_68) {
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
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


