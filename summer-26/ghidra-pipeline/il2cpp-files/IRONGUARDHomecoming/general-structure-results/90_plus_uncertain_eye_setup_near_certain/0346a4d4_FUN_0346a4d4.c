/*
FUNCTION_NAME: FUN_0346a4d4
ENTRY_POINT: 0346a4d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0346a99c) */
/* WARNING: Removing unreachable block (ram,0x0346a9a8) */

void FUN_0346a4d4(long param_1,ulong param_2,undefined8 param_3,uint param_4,uint param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  
  if ((DAT_048329c6 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UI_SetPropertyUtility_SetStruct<ColorBlock>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UI_SetPropertyUtility_SetStruct<Image_FillMethod>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_048329c6 = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar12 = *(long **)(param_1 + 0x10);
  if ((param_2 & 1) == 0) {
    if (plVar12 != (long *)0x0) {
      plVar12 = (long *)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
      puVar5 = Method_UnityEngine_UI_SetPropertyUtility_SetStruct<Image_FillMethod>__;
      puVar4 = Method_UnityEngine_UI_SetPropertyUtility_SetStruct<ColorBlock>__;
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar9 = *plVar12;
        lVar8 = *(long *)puVar3;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0346a7e8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar12,lVar8,0);
LAB_0346a7e8:
        uVar10 = (*(code *)*puVar6)(plVar12,puVar6[1]);
        if ((uVar10 & 1) == 0) {
          plVar12 = (long *)thunk_FUN_01f116d0(plVar12,*(undefined8 *)puVar2);
          if (plVar12 == (long *)0x0) {
            return;
          }
          lVar8 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 == 0) goto LAB_0346a93c;
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_0346a924;
        }
        lVar9 = *plVar12;
        lVar8 = *(long *)puVar3;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_0346a848;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar12,lVar8,1);
LAB_0346a848:
        plVar7 = (long *)(*(code *)*puVar6)(plVar12,puVar6[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc();
        }
        plVar7 = (long *)plVar7[3];
        if (plVar7 != (long *)0x0) {
          lVar8 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_0346a8d8;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar5,0);
LAB_0346a8d8:
          (*(code *)*puVar6)(plVar7,param_3,param_4 & 1,param_5 & 1,puVar6[1]);
        }
      } while( true );
    }
  }
  else if (plVar12 != (long *)0x0) {
    plVar12 = (long *)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
    puVar5 = Method_UnityEngine_UI_SetPropertyUtility_SetStruct<Image_FillMethod>__;
    puVar4 = Method_UnityEngine_UI_SetPropertyUtility_SetStruct<ColorBlock>__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar9 = *plVar12;
      lVar8 = *(long *)puVar3;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0346a5d8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar12,lVar8,0);
LAB_0346a5d8:
      uVar10 = (*(code *)*puVar6)(plVar12,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_01f116d0(plVar12,*(undefined8 *)puVar2);
        if (plVar12 == (long *)0x0) {
          return;
        }
        lVar8 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 == 0) goto LAB_0346a734;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_0346a71c;
      }
      lVar9 = *plVar12;
      lVar8 = *(long *)puVar3;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_0346a638;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar12,lVar8,1);
LAB_0346a638:
      plVar7 = (long *)(*(code *)*puVar6)(plVar12,puVar6[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
      if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      plVar7 = (long *)plVar7[3];
      if (plVar7 != (long *)0x0) {
        lVar8 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_0346a6cc;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar5,1);
LAB_0346a6cc:
        (*(code *)*puVar6)(plVar7,param_3,param_4 & 1,param_5 & 1,puVar6[1]);
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0346a71c:
    if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0346a750;
    }
  }
LAB_0346a734:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar2,0);
LAB_0346a750:
  (*(code *)*puVar6)(plVar12,puVar6[1]);
  return;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0346a924:
    if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0346a958;
    }
  }
LAB_0346a93c:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar2,0);
LAB_0346a958:
  (*(code *)*puVar6)(plVar12,puVar6[1]);
  return;
}


