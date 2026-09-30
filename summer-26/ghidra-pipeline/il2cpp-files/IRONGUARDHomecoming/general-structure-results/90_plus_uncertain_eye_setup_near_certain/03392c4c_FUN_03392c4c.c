/*
FUNCTION_NAME: FUN_03392c4c
ENTRY_POINT: 03392c4c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;functionality_eye_api_context_without_clear_sink_hits_11
*/


/* WARNING: Removing unreachable block (ram,0x033932f8) */
/* WARNING: Removing unreachable block (ram,0x03393398) */
/* WARNING: Removing unreachable block (ram,0x0339338c) */
/* WARNING: Removing unreachable block (ram,0x03392efc) */

void FUN_03392c4c(long param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  uint uVar13;
  
  puVar2 = Method_Unity_Jobs_IJobExtensions_EarlyJobInit<CommandBuilder_StreamSplitter>__;
  if ((DAT_0483222f & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<ScrollRect>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_Unity_Jobs_IJobExtensions_EarlyJobInit<DecalCreateDrawCallSystem_DrawCallJob>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Jobs_IJobExtensions_EarlyJobInit<NativeStream_ConstructJob>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_Unity_Jobs_IJobExtensions_EarlyJobInit<CommandBuilder_StreamSplitter>__
                      );
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Namespace__);
    thunk_FUN_01efb3a4(
                      Method_Unity_Jobs_IJobExtensions_EarlyJobInit<NativeStream_ConstructJobList>__
                      );
    DAT_0483222f = 1;
  }
  plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_033ae20c(plVar5,0);
  puVar4 = Method_Unity_Jobs_IJobExtensions_EarlyJobInit<NativeStream_ConstructJob>__;
  puVar3 = Method_Unity_Jobs_IJobExtensions_EarlyJobInit<DecalCreateDrawCallSystem_DrawCallJob>__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if ((param_2 != 0) && (uVar8 = *(uint *)(param_2 + 0x18), 0 < (int)uVar8)) {
    bVar1 = false;
    uVar13 = 0;
LAB_03392d34:
    if (uVar8 <= uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar12 = *(long **)(param_2 + (long)(int)uVar13 * 8 + 0x20);
    if (plVar12 != (long *)0x0) {
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03392d94;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar3,0);
LAB_03392d94:
      lVar9 = (*(code *)*puVar6)(plVar12,puVar6[1]);
      if (lVar9 != 0) {
        plVar12 = (long *)FUN_033c9c10(lVar9,0);
        do {
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar9 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03392e04;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar2,0);
LAB_03392e04:
          uVar10 = (*(code *)*puVar6)(plVar12,puVar6[1]);
          if ((uVar10 & 1) == 0) goto LAB_03392e80;
          lVar9 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03392e60;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar4,0);
LAB_03392e60:
          uVar7 = (*(code *)*puVar6)(plVar12,puVar6[1]);
          bVar1 = true;
          FUN_033935a4(plVar5,uVar7);
        } while( true );
      }
    }
    goto LAB_03393380;
  }
  bVar1 = false;
LAB_03392f5c:
  uVar10 = FUN_033c9034(0);
  if ((uVar10 & 1) != 0) {
    lVar9 = FUN_033c9094(0);
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x20) != 0)) {
      plVar12 = (long *)FUN_033c9c10(*(long *)(lVar9 + 0x20),0);
      puVar3 = Method_Unity_Jobs_IJobExtensions_EarlyJobInit<NativeStream_ConstructJob>__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      do {
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03392fec;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar2,0);
LAB_03392fec:
        uVar10 = (*(code *)*puVar6)(plVar12,puVar6[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar12 == (long *)0x0) goto LAB_033930dc;
          lVar9 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_033930b0;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_03393098;
        }
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03393048;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar3,0);
LAB_03393048:
        uVar7 = (*(code *)*puVar6)(plVar12,puVar6[1]);
        bVar1 = true;
        FUN_033935a4(plVar5,uVar7);
      } while( true );
    }
    goto LAB_03393380;
  }
  goto LAB_033930dc;
LAB_03392e80:
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03392ee4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar12,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03392ee4:
    (*(code *)*puVar6)(plVar12,puVar6[1]);
  }
  uVar8 = *(uint *)(param_2 + 0x18);
  uVar13 = uVar13 + 1;
  if ((int)uVar8 <= (int)uVar13) goto LAB_03392f5c;
  goto LAB_03392d34;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_033932ac:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_033932e0;
    }
  }
LAB_033932c4:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar12,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_033932e0:
  (*(code *)*puVar6)(plVar12,puVar6[1]);
LAB_033932ec:
  if (!bVar1) {
    return;
  }
  if (param_1 == 0) goto LAB_03393380;
  goto LAB_03393304;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_03393098:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_033930cc;
    }
  }
LAB_033930b0:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar12,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_033930cc:
  (*(code *)*puVar6)(plVar12,puVar6[1]);
LAB_033930dc:
  if (param_1 == 0) {
    if (!bVar1) {
      return;
    }
  }
  else {
    uVar10 = FUN_0340eec4(*(undefined8 *)(param_1 + 0x40),0);
    if ((uVar10 & 1) == 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_03393380;
      FUN_02b6b2d0(*(long *)(param_1 + 0x18),
                   *(undefined8 *)
                    Method_Unity_Jobs_IJobExtensions_EarlyJobInit<NativeStream_ConstructJobList>__,
                   *(undefined8 *)(param_1 + 0x40),
                   *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<ScrollRect>__);
    }
    plVar12 = *(long **)(param_1 + 0x30);
    if (plVar12 == (long *)0x0) {
      if (!bVar1) {
        return;
      }
LAB_03393304:
      if (plVar5 != (long *)0x0) {
        lVar9 = *(long *)(param_1 + 0x18);
        uVar7 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        if (lVar9 != 0) {
          FUN_02b6b2d0(lVar9,*(undefined8 *)
                              Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Namespace__
                       ,uVar7,*(undefined8 *)
                               Method_UnityEngine_GameObject_GetComponent<ScrollRect>__);
          return;
        }
      }
    }
    else {
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)
               Method_Unity_Jobs_IJobExtensions_EarlyJobInit<DecalCreateDrawCallSystem_DrawCallJob>__
             ) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03393184;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar12,*(long *)
                                     Method_Unity_Jobs_IJobExtensions_EarlyJobInit<DecalCreateDrawCallSystem_DrawCallJob>__
                            ,0);
LAB_03393184:
      lVar9 = (*(code *)*puVar6)(plVar12,puVar6[1]);
      if (lVar9 != 0) {
        plVar12 = (long *)FUN_033c9c10(lVar9,0);
        puVar3 = Method_Unity_Jobs_IJobExtensions_EarlyJobInit<NativeStream_ConstructJob>__;
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        do {
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar9 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03393204;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar2,0);
LAB_03393204:
          uVar10 = (*(code *)*puVar6)(plVar12,puVar6[1]);
          if ((uVar10 & 1) == 0) {
            if (plVar12 == (long *)0x0) goto LAB_033932ec;
            lVar9 = *plVar12;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 == 0) goto LAB_033932c4;
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_033932ac;
          }
          lVar9 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03393260;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar3,0);
LAB_03393260:
          uVar7 = (*(code *)*puVar6)(plVar12,puVar6[1]);
          bVar1 = true;
          FUN_033935a4(plVar5,uVar7);
        } while( true );
      }
    }
  }
LAB_03393380:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


