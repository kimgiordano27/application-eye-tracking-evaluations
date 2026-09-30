/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<object,-TextureId>$$TryGetValue
ENTRY_POINT: 02a7b4b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02a7b98c) */

void System_Collections_Generic_Dictionary<object,_TextureId>__TryGetValue
               (long *param_1,undefined8 param_2,long *param_3,uint param_4,long param_5)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if ((DAT_04830fd8 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    DAT_04830fd8 = 1;
  }
  plVar3 = (long *)(**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  lVar8 = *(long *)puVar1;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar8);
    lVar8 = *(long *)puVar1;
  }
  if (plVar3 != (long *)0x0) {
    if (*(byte *)(lVar8 + 0x130) <= *(byte *)(*plVar3 + 0x130)) {
      if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8) {
        plVar3 = (long *)0x0;
      }
      goto LAB_02a7b584;
    }
  }
  plVar3 = (long *)0x0;
LAB_02a7b584:
  uVar4 = FUN_04076e80(plVar3,param_2,0);
  lVar8 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
  }
  plVar3 = (long *)thunk_FUN_01f116d0(uVar4,lVar8);
  if ((param_1[8] != 0) &&
     (uVar2 = FUN_02b6b4d8(param_1[8],param_3,
                           *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x78)),
     plVar3 != (long *)0x0)) {
    lVar8 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_02a7b654;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar3,lVar8,1);
LAB_02a7b654:
    (*(code *)*puVar5)(plVar3,param_3,param_4 & 1,uVar2 & 1,puVar5[1]);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if ((param_1[8] != 0) &&
       (FUN_02b6b2e4(param_1[8],param_3,plVar3,
                     *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x88)),
       param_3 != (long *)0x0)) {
      lVar8 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x58);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      lVar9 = *param_3;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_02a7b700;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(param_3,lVar8,1);
LAB_02a7b700:
      plVar6 = (long *)(*(code *)*puVar5)(param_3,puVar5[1]);
      if (plVar6 != (long *)0x0) {
        lVar8 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x98);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01ecaf44(lVar8);
        }
        lVar9 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_02a7b77c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar8,0);
LAB_02a7b77c:
        plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
        puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar8 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_02a7b7e4;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_02a7b7e4:
          uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
          if ((uVar10 & 1) == 0) goto LAB_02a7b904;
          lVar8 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xa8);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01ecaf44(lVar8);
          }
          lVar9 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar8) {
                puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_02a7b85c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar8,0);
LAB_02a7b85c:
          uVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
          lVar8 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01ecaf44(lVar8);
          }
          lVar9 = *plVar3;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar8) {
                puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_02a7b8d4;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar3,lVar8,0);
LAB_02a7b8d4:
          uVar7 = (*(code *)*puVar5)(plVar3,puVar5[1]);
          System_Collections_Generic_Dictionary<object,_TextureId>__TryGetValue
                    (param_1,uVar7,uVar4,0,
                     *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x60));
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_02a7b904:
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar8 = *plVar6;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_02a7b960;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02a7b960:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
}


