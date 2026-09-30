/*
FUNCTION_NAME: FUN_04138a64
ENTRY_POINT: 04138a64
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x04138d24) */
/* WARNING: Removing unreachable block (ram,0x04138da4) */

void FUN_04138a64(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  
  if ((DAT_0484080e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Any<ISerializationDepender>__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Any<int>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<int>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_0457b540);
    DAT_0484080e = 1;
  }
  if (*(long *)(param_1 + 0x470) != 0) {
    uVar4 = FUN_030bac7c(*(long *)(param_1 + 0x470),param_2,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__);
    if ((uVar4 & 1) == 0) {
      return;
    }
    plVar5 = *(long **)(param_1 + 0x448);
    if (plVar5 != (long *)0x0) {
      iVar3 = (**(code **)(*plVar5 + 0x1f8))(plVar5,param_2,*(undefined8 *)(*plVar5 + 0x200));
      plVar5 = *(long **)(param_1 + 0x448);
      if (plVar5 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar5 + 0x208))(plVar5,param_2,*(undefined8 *)(*plVar5 + 0x210));
        plVar5 = (long *)FUN_04133c3c(param_1);
        if (plVar5 != (long *)0x0) {
          lVar9 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)Method_System_Linq_Enumerable_Any<ISerializationDepender>__) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_04138ba8;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_01ecb238(plVar5,*(long *)
                                        Method_System_Linq_Enumerable_Any<ISerializationDepender>__,
                                0);
LAB_04138ba8:
          plVar5 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
          puVar2 = Method_System_Linq_Enumerable_Any<int>__;
          puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar9 = *plVar5;
            uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar4 != 0) {
              piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_04138c18;
                }
                uVar4 = uVar4 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar4 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_04138c18:
            uVar4 = (*(code *)*puVar7)(plVar5,puVar7[1]);
            if ((uVar4 & 1) == 0) {
              if (plVar5 == (long *)0x0) goto LAB_04138d18;
              lVar9 = *plVar5;
              uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar4 == 0) goto LAB_04138cf0;
              piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_04138cd8;
            }
            lVar9 = *plVar5;
            uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar4 != 0) {
              piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_04138c74;
                }
                uVar4 = uVar4 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar4 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_04138c74:
            plVar8 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(int *)((long)plVar8 + 0x24) == iVar3) {
              (**(code **)(*plVar8 + 0x1b8))(plVar8,0,*(undefined8 *)(*plVar8 + 0x1c0));
            }
          } while( true );
        }
      }
    }
  }
  goto LAB_04138d9c;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar10 = piVar10 + 4;
    if (uVar4 == 0) break;
LAB_04138cd8:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_04138d0c;
    }
  }
LAB_04138cf0:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_04138d0c:
  (*(code *)*puVar7)(plVar5,puVar7[1]);
LAB_04138d18:
  puVar1 = Method_Unity_Collections_NativeArray<int>_Dispose__;
  if (*(long *)(param_1 + 0x468) != 0) {
    FUN_030bbd24(*(long *)(param_1 + 0x468),iVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<int>_Dispose__);
    if (*(long *)(param_1 + 0x470) != 0) {
      FUN_030bbd24(*(long *)(param_1 + 0x470),param_2,*(undefined8 *)puVar1);
      if (*(long *)(param_1 + 0x478) != 0) {
        FUN_030f4000(*(long *)(param_1 + 0x478),uVar6,*(undefined8 *)PTR_DAT_0457b540);
        return;
      }
    }
  }
LAB_04138d9c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


