/*
FUNCTION_NAME: FUN_02298368
ENTRY_POINT: 02298368
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_14;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0229866c) */

void FUN_02298368(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long in_x6;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)(in_x6 + 0x38);
  if (lVar6 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    lVar6 = *(long *)(in_x6 + 0x38);
    if (lVar6 == 0) {
      FUN_01ecafa0(in_x6);
      lVar6 = *(long *)(in_x6 + 0x38);
    }
  }
  lVar6 = (long)&local_50 - ((ulong)*(uint *)(*(long *)(lVar6 + 0x28) + 0xfc) + 0xf & 0x1fffffff0);
  if (param_1 != 0) {
    FUN_040766fc(param_1,0);
    plVar3 = (long *)thunk_FUN_01ecaf38(param_1,0);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
      FUN_03666690(param_3,0);
      uVar10 = **(undefined8 **)(in_x6 + 0x38);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      plVar3 = (long *)FUN_03579868(uVar10,0);
      if ((plVar3 != (long *)0x0) &&
         ((**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0)),
         param_2 != (long *)0x0)) {
        lVar5 = *(long *)(*(long *)(in_x6 + 0x38) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44(lVar5);
        }
        lVar7 = *param_2;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar5) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_022984d4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238(param_2,lVar5,0);
LAB_022984d4:
        plVar3 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar5 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0229853c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar2,0);
LAB_0229853c:
          uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if ((uVar8 & 1) == 0) goto LAB_022985d0;
          lVar5 = *(long *)(*(long *)(in_x6 + 0x38) + 0x18);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44(lVar5);
          }
          lVar7 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                lVar5 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
                goto LAB_022985b0;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          lVar5 = FUN_01ecb238(plVar3,lVar5,0);
LAB_022985b0:
          lVar5 = *(long *)(lVar5 + 8);
          local_50 = lVar6;
          (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar3,&local_50,lVar6);
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_022985d0:
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0229862c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0229862c:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


