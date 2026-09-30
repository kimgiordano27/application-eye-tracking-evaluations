/*
FUNCTION_NAME: FUN_05d4d370
ENTRY_POINT: 05d4d370
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d4d8c8) */
/* WARNING: Removing unreachable block (ram,0x05d4d8d8) */

void FUN_05d4d370(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  long local_2c8;
  long *local_2c0;
  undefined1 auStack_2b8 [304];
  undefined1 auStack_188 [304];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((DAT_06bc38bb & 1) == 0) {
    FUN_02f08768(Method_System_Runtime_InteropServices_OSPlatform__ctor__);
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
    FUN_02f08768(Method_System_Resources_NeutralResourcesLanguageAttribute__ctor__);
    FUN_02f08768(
                Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                );
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(Method_System_Threading_OSSpecificSynchronizationContext_InvocationEntry__);
    FUN_02f08768(Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__);
    FUN_02f08768(Method_System_Threading_OSSpecificSynchronizationContext_Send__);
    FUN_02f08768(Method_OVRAnchor_GetComponent<OVRDynamicObject>__);
    FUN_02f08768(Method_OVRAnchor_GetComponent<OVRLocatable>__);
    FUN_02f08768(Method_System_Data_NewDiffgramGen_GenerateColumn__);
    FUN_02f08768(Method_OVRAnchor_GetComponent<OVRMarkerPayload>__);
    DAT_06bc38bb = 1;
  }
  local_2c8 = 0;
  local_2c0 = (long *)0x0;
  memset(auStack_188,0,0x130);
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = FUN_05d4d060(param_1);
  if (param_2 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    local_2c0 = (long *)FUN_03523990(param_2,uVar12,&local_2c8,uVar5,
                                     *(undefined8 *)
                                      Method_OVRAnchor_GetComponent<OVRMarkerPayload>__,0x52,
                                     *(undefined8 *)
                                      Method_System_Threading_OSSpecificSynchronizationContext_Send__
                                    );
    if (param_3 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    else {
      lVar6 = FUN_05d4c208(param_3,*(undefined8 *)
                                    Method_System_Resources_NeutralResourcesLanguageAttribute__ctor__
                          );
      uVar5 = FUN_05d4c208(param_3,*(undefined8 *)
                                    Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
      lVar7 = FUN_05d4c208(param_3,*(undefined8 *)
                                    Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
      uVar12 = FUN_05d4c208(param_3,*(undefined8 *)
                                     Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__);
      if (local_2c8 == 0) {
        if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      else {
        *(undefined8 *)(local_2c8 + 0x10) = *(undefined8 *)(param_1 + 0xe0);
        TMPro_TMP_Text__get_minHeight(auStack_2b8,param_1,uVar5,lVar7,uVar12);
        memcpy(auStack_188,auStack_2b8,0x130);
        lVar9 = local_2c8;
        auVar14 = FUN_05cc687c(param_2,auStack_188,0);
        plVar4 = local_2c0;
        lVar3 = local_2c8;
        if (lVar9 == 0) {
          if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
        }
        else {
          *(undefined1 (*) [12])(lVar9 + 0x18) = auVar14;
          if (local_2c8 == 0) {
            if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
          }
          else if (local_2c0 == (long *)0x0) {
            if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
          }
          else {
            lVar9 = *local_2c0;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) ==
                    *(long *)
                     Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                   ) {
                  puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 9) * 0x10 + 0x138);
                  goto LAB_05d4d5dc;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar8 = (undefined8 *)
                     FUN_02f421d0(local_2c0,
                                  *(long *)
                                   Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                                  ,9);
LAB_05d4d5dc:
            (*(code *)*puVar8)(plVar4,lVar3 + 0x18,puVar8[1]);
            plVar4 = local_2c0;
            if (lVar7 == 0) {
              if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
            }
            else if (lVar6 == 0) {
              if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
            }
            else {
              auVar13 = FUN_05d6dd30(lVar6,0);
              puVar2 = Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__;
              if (plVar4 == (long *)0x0) {
                if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
              }
              else {
                lVar7 = *plVar4;
                uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar10 != 0) {
                  piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) ==
                        *(long *)Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__) {
                      puVar8 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                      goto LAB_05d4d664;
                    }
                    uVar10 = uVar10 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 != 0);
                }
                puVar8 = (undefined8 *)
                         FUN_02f421d0(plVar4,*(long *)
                                              Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__
                                      ,0);
LAB_05d4d664:
                (*(code *)*puVar8)(plVar4,auVar13._0_8_,auVar13._8_8_,0,2,puVar8[1]);
                plVar4 = local_2c0;
                auVar13 = FUN_05d6de44(lVar6,0);
                if (plVar4 == (long *)0x0) {
                  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8();
                  }
                }
                else {
                  lVar6 = *plVar4;
                  uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                        puVar8 = (undefined8 *)(lVar6 + (long)(*piVar11 + 4) * 0x10 + 0x138);
                        goto LAB_05d4d6ec;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)puVar2,4);
LAB_05d4d6ec:
                  (*(code *)*puVar8)(plVar4,auVar13._0_8_,auVar13._8_8_,1,puVar8[1]);
                  plVar4 = local_2c0;
                  puVar2 = Method_OVRAnchor_GetComponent<OVRLocatable>__;
                  lVar6 = *(long *)Method_OVRAnchor_GetComponent<OVRLocatable>__;
                  if (*(int *)(lVar6 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                    lVar6 = *(long *)puVar2;
                  }
                  puVar8 = *(undefined8 **)(lVar6 + 0xb8);
                  lVar7 = puVar8[1];
                  if (lVar7 == 0) {
                    if (*(int *)(lVar6 + 0xe4) == 0) {
                      thunk_FUN_02f6670c();
                      puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
                    }
                    uVar5 = *puVar8;
                    lVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                                Method_System_Runtime_InteropServices_OSPlatform__ctor__
                                              );
                    FUN_04237db8(lVar7,uVar5,
                                 *(undefined8 *)Method_OVRAnchor_GetComponent<OVRDynamicObject>__,0)
                    ;
                    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar7;
                  }
                  if (plVar4 == (long *)0x0) {
                    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f089c8();
                    }
                  }
                  else {
                    lVar6 = *plVar4;
                    lVar9 = *(long *)
                             Method_System_Threading_OSSpecificSynchronizationContext_InvocationEntry__
                    ;
                    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    if (uVar10 != 0) {
                      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar11 + -2) == *(long *)(lVar9 + 0x20)) {
                          lVar6 = lVar6 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar9 + 0x50)) *
                                          0x10 + 0x138;
                          goto LAB_05d4d7e0;
                        }
                        uVar10 = uVar10 - 1;
                        piVar11 = piVar11 + 4;
                      } while (uVar10 != 0);
                    }
                    lVar6 = FUN_02f421d0(plVar4);
LAB_05d4d7e0:
                    lVar6 = thunk_FUN_02f2742c(*(undefined8 *)(lVar6 + 8),lVar9);
                    (**(code **)(lVar6 + 8))(plVar4,lVar7,lVar6);
                    plVar4 = local_2c0;
                    if (local_2c0 != (long *)0x0) {
                      lVar6 = *local_2c0;
                      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
                      if (uVar10 != 0) {
                        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_067c91b0) {
                            puVar8 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
                            goto LAB_05d4d864;
                          }
                          uVar10 = uVar10 - 1;
                          piVar11 = piVar11 + 4;
                        } while (uVar10 != 0);
                      }
                      puVar8 = (undefined8 *)FUN_02f421d0(local_2c0,*(long *)PTR_DAT_067c91b0,0);
LAB_05d4d864:
                      (*(code *)*puVar8)(plVar4,puVar8[1]);
                    }
                    if (*(long *)(lVar1 + 0x28) == local_58) {
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


