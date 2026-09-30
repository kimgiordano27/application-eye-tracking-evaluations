/*
FUNCTION_NAME: System.Collections.Generic.List<DrawingData.RenderedMeshWithType>$$FindIndex
ENTRY_POINT: 030bdf70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x030be398) */
/* WARNING: Removing unreachable block (ram,0x030be3dc) */

void System_Collections_Generic_List<DrawingData_RenderedMeshWithType>__FindIndex
               (ulong param_1,long *param_2,uint param_3,long *param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    *(undefined1 *)(unaff_x23 + 0xc3f) = 1;
  }
  if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(6,0);
  }
  if (*(uint *)(param_2 + 3) < param_3) {
    FUN_0358b9a4(0);
  }
  lVar7 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  plVar5 = (long *)thunk_FUN_01f116d0(param_4,lVar7);
  if (plVar5 == (long *)0x0) {
    if ((int)param_3 < (int)param_2[3]) {
      if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar8 = *param_4;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_030be20c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(param_4,lVar7,0);
LAB_030be20c:
      plVar5 = (long *)(*(code *)*puVar6)(param_4,puVar6[1]);
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar7 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_030be274;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_030be274:
        uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar10 & 1) == 0) goto LAB_030be320;
        lVar7 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x140);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        lVar8 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar7) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_030be2ec;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar7,0);
LAB_030be2ec:
        uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        FUN_030bdd24(param_2,param_3,uVar4,
                     *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x158));
        param_3 = param_3 + 1;
      } while( true );
    }
    FUN_030beb94(param_2,param_4,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x40)
                );
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_030be0cc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar7,0);
LAB_030be0cc:
    iVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (0 < iVar3) {
      FUN_030bd62c(param_2,(int)param_2[3] + iVar3,
                   *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x78));
      iVar1 = (int)param_2[3] - param_3;
      if (iVar1 != 0 && (int)param_3 <= (int)param_2[3]) {
        FUN_0358d498(param_2[2],param_3,param_2[2],iVar3 + param_3,iVar1,0);
      }
      if (param_2 == plVar5) {
        FUN_0358d498(param_2[2],0,param_2[2],param_3,param_3,0);
        FUN_0358d498(param_2[2],iVar3 + param_3,param_2[2],param_3 << 1,(int)param_2[3] - param_3,0)
        ;
      }
      else {
        lVar8 = param_2[2];
        lVar7 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44(lVar7);
        }
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar7) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
              goto 
              System_Collections_Generic_List<DrawingData_RenderedMeshWithType>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
              ;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar7,5);

        System_Collections_Generic_List<DrawingData_RenderedMeshWithType>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
        :
        (*(code *)*puVar6)(plVar5,lVar8,param_3,puVar6[1]);
      }
      *(int *)(param_2 + 3) = (int)param_2[3] + iVar3;
    }
  }
LAB_030be3b4:
  *(int *)((long)param_2 + 0x1c) = *(int *)((long)param_2 + 0x1c) + 1;
  return;
LAB_030be320:
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_030be380;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_030be380:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  goto LAB_030be3b4;
}


