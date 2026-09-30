/*
FUNCTION_NAME: UnityEngine.UIElements.StyleRotate$$Equals
ENTRY_POINT: 041385ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04138838) */
/* WARNING: Removing unreachable block (ram,0x0413899c) */

void UnityEngine_UIElements_StyleRotate__Equals(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x3c8));
  thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Any<int>__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__);
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalAdd__);
  thunk_FUN_01efb3a4(Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__);
  *(undefined1 *)(unaff_x21 + 0x80d) = 1;
  if (*(long *)(unaff_x19 + 0x470) != 0) {
    uVar5 = FUN_030bac7c(*(long *)(unaff_x19 + 0x470),unaff_w20,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__);
    if ((uVar5 & 1) != 0) {
      return;
    }
    plVar6 = *(long **)(unaff_x19 + 0x448);
    if (plVar6 != (long *)0x0) {
      iVar4 = (**(code **)(*plVar6 + 0x1f8))(plVar6,unaff_w20,*(undefined8 *)(*plVar6 + 0x200));
      plVar6 = *(long **)(unaff_x19 + 0x448);
      if (plVar6 != (long *)0x0) {
        uVar7 = (**(code **)(*plVar6 + 0x208))(plVar6,unaff_w20,*(undefined8 *)(*plVar6 + 0x210));
        plVar6 = (long *)FUN_04133c3c();
        if (plVar6 != (long *)0x0) {
          lVar10 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar5 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) ==
                  *(long *)Method_System_Linq_Enumerable_Any<ISerializationDepender>__) {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_041386bc;
              }
              uVar5 = uVar5 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar5 != 0);
          }
          puVar8 = (undefined8 *)
                   FUN_01ecb238(plVar6,*(long *)
                                        Method_System_Linq_Enumerable_Any<ISerializationDepender>__,
                                0);
LAB_041386bc:
          plVar6 = (long *)(*(code *)*puVar8)(plVar6,puVar8[1]);
          puVar3 = Method_System_Linq_Enumerable_Any<int>__;
          puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar10 = *plVar6;
            uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar5 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0413872c;
                }
                uVar5 = uVar5 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar5 != 0);
            }
            puVar8 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_0413872c:
            uVar5 = (*(code *)*puVar8)(plVar6,puVar8[1]);
            if ((uVar5 & 1) == 0) {
              if (plVar6 == (long *)0x0) goto LAB_0413882c;
              lVar10 = *plVar6;
              uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar5 == 0) goto LAB_04138804;
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              goto LAB_041387ec;
            }
            lVar10 = *plVar6;
            uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar5 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                  puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto FUN_04138788;
                }
                uVar5 = uVar5 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar5 != 0);
            }
            puVar8 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
FUN_04138788:
            plVar9 = (long *)(*(code *)*puVar8)(plVar6,puVar8[1]);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(int *)((long)plVar9 + 0x24) == iVar4) {
              (**(code **)(*plVar9 + 0x1b8))(plVar9,1,*(undefined8 *)(*plVar9 + 0x1c0));
            }
          } while( true );
        }
      }
    }
  }
  goto LAB_04138994;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar13 = piVar13 + 4;
    if (uVar5 == 0) break;
LAB_041387ec:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_04138820;
    }
  }
LAB_04138804:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_04138820:
  (*(code *)*puVar8)(plVar6,puVar8[1]);
LAB_0413882c:
  puVar2 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
  lVar10 = *(long *)(unaff_x19 + 0x468);
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar10 + 0x10);
    lVar12 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar11 != 0) {
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        *(int *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = iVar4;
      }
      else {
        FUN_030ba904(lVar10,iVar4,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70)
                    );
      }
      lVar10 = *(long *)(unaff_x19 + 0x470);
      if (lVar10 != 0) {
        lVar11 = *(long *)(lVar10 + 0x10);
        lVar12 = *(long *)puVar2;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar11 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = unaff_w20;
          }
          else {
            FUN_030ba904(lVar10,unaff_w20,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          lVar10 = *(long *)(unaff_x19 + 0x478);
          if (lVar10 != 0) {
            lVar11 = *(long *)(lVar10 + 0x10);
            lVar12 = *(long *)
                      Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalAdd__;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar11 != 0) {
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                puVar8 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                *puVar8 = uVar7;
                thunk_FUN_01f51358(puVar8,uVar7);
                return;
              }
              FUN_030f2bb4(lVar10,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              return;
            }
          }
        }
      }
    }
  }
LAB_04138994:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


