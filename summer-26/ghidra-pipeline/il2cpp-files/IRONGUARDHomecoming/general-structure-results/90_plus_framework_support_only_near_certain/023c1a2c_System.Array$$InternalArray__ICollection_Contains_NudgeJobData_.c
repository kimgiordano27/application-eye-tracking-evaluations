/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<NudgeJobData>
ENTRY_POINT: 023c1a2c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 162
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x023c2228) */

long System_Array__InternalArray__ICollection_Contains<NudgeJobData>(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  int in_w9;
  int *piVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  long *unaff_x27;
  long *unaff_x28;
  long *in_stack_00000010;
  long *in_stack_00000018;
  
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  if (in_w9 == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar5 = (long *)FUN_03579868(uVar13,0);
  if (plVar5 == (long *)0x0) goto LAB_023c2230;
  uVar6 = (**(code **)(*plVar5 + 0x3c8))(plVar5,*(undefined8 *)(*plVar5 + 0x3d0));
  if ((uVar6 & 1) == 0) {
LAB_023c1c24:
    uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar5 = (long *)FUN_03579868(uVar13,0);
    if (plVar5 == (long *)0x0) goto LAB_023c2230;
    uVar6 = (**(code **)(*plVar5 + 0x3c8))(plVar5,*(undefined8 *)(*plVar5 + 0x3d0));
    lVar7 = *unaff_x27;
    if ((uVar6 & 1) != 0) {
      uVar13 = *(undefined8 *)(lVar7 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar5 = (long *)FUN_03579868(uVar13,0);
      if (plVar5 == (long *)0x0) goto LAB_023c2230;
      plVar5 = (long *)(**(code **)(*plVar5 + 0x458))(plVar5,*(undefined8 *)(*plVar5 + 0x460));
      uVar13 = FUN_03579868(*(undefined8 *)
                             Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponent__,0);
      if (plVar5 == (long *)0x0) goto LAB_023c2230;
      uVar6 = (**(code **)(*plVar5 + 0x2a8))(plVar5,uVar13,*(undefined8 *)(*plVar5 + 0x2b0));
      lVar7 = *unaff_x27;
      if ((uVar6 & 1) != 0) {
        uVar13 = *(undefined8 *)(lVar7 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar5 = (long *)FUN_03579868(uVar13,0);
        if (plVar5 == (long *)0x0) goto LAB_023c2230;
        uVar13 = (**(code **)(*plVar5 + 0x478))(plVar5,*(undefined8 *)(*plVar5 + 0x480));
        lVar7 = FUN_02308ab0(uVar13,*(undefined8 *)
                                     Method_UnityEngine_Component_TryGetComponent<SphereCollider>__)
        ;
        plVar12 = *(long **)(unaff_x19 + 0x38);
        plVar5 = (long *)FUN_01f08890(*(undefined8 *)
                                       Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                      ,2);
        if (lVar7 == 0) goto LAB_023c2230;
        if (*(int *)(lVar7 + 0x18) == 0) goto LAB_023c22ec;
        if (plVar5 == (long *)0x0) goto LAB_023c2230;
        lVar8 = *(long *)(lVar7 + 0x20);
        if ((lVar8 != 0) &&
           (lVar4 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0)) {
LAB_023c22f0:
          uVar13 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar13,0);
        }
        if ((int)plVar5[3] == 0) {
LAB_023c22ec:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar5[4] = lVar8;
        thunk_FUN_01f51358(plVar5 + 4,lVar8);
        if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_023c22ec;
        lVar7 = *(long *)(lVar7 + 0x28);
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
        goto LAB_023c22f0;
        if (*(uint *)(plVar5 + 3) < 2) goto LAB_023c22ec;
        plVar9 = plVar5 + 5;
        *plVar9 = lVar7;
        goto LAB_023c195c;
      }
    }
    if ((*(byte *)(*(long *)(lVar7 + 0x28) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    lVar7 = thunk_FUN_01f117cc();
    (*(code *)**(undefined8 **)(*unaff_x27 + 0x30))();
    uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar13 = FUN_03579868(uVar13,0);
    plVar5 = (long *)FUN_040c95e4(uVar13,0);
    if (plVar5 != (long *)0x0) {
      lVar8 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_023c1e4c;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_01ecb238(plVar5,*(long *)
                                     Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__,0);
LAB_023c1e4c:
      plVar5 = (long *)(*(code *)*puVar10)(plVar5,puVar10[1]);
      puVar3 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar8 = *plVar5;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_023c1ec0;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_023c1ec0:
        uVar6 = (*(code *)*puVar10)(plVar5,puVar10[1]);
        if ((uVar6 & 1) == 0) {
          if (plVar5 == (long *)0x0) {
            return lVar7;
          }
          lVar8 = *plVar5;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar6 == 0) goto LAB_023c21fc;
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_023c21e4;
        }
        lVar8 = *plVar5;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)
                 Method_Meta_WitAi_ComponentExtensions_HasCustomAttributes<ObsoleteAttribute>__) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_023c1f24;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_01ecb238(plVar5,*(long *)
                                       Method_Meta_WitAi_ComponentExtensions_HasCustomAttributes<ObsoleteAttribute>__
                               ,0);
LAB_023c1f24:
        plVar12 = (long *)(*(code *)*puVar10)(plVar5,puVar10[1]);
        if (plVar12 == (long *)0x0) {
LAB_023c2234:
          thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
          uVar13 = thunk_FUN_01f117cc();
          FUN_0356ad6c(uVar13,0);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar13,unaff_x20);
        }
        lVar8 = *plVar12;
        bVar1 = *(byte *)(*(long *)Method_UnityEngine_Component_TryGetComponent<SplineContainer>__ +
                         0x130);
        if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Method_UnityEngine_Component_TryGetComponent<SplineContainer>__)) {
          bVar1 = *(byte *)(*(long *)
                             Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentInParent__
                           + 0x130);
          if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentInParent__))
          goto LAB_023c2234;
          in_stack_00000018 = plVar12;
          thunk_FUN_01f51358(&stack0x00000018);
          in_stack_00000010 = in_stack_00000018;
          plVar12 = (long *)thunk_FUN_01f113fc(*(undefined8 *)
                                                Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponents__
                                               ,&stack0x00000010);
        }
        else {
          in_stack_00000018 = (long *)0x0;
          FUN_040c5b80(&stack0x00000018,plVar12,0);
          in_stack_00000010 = in_stack_00000018;
          plVar12 = (long *)thunk_FUN_01f113fc(*(undefined8 *)
                                                Method_UnityEngine_Component_TryGetComponent<Text>__
                                               ,&stack0x00000010);
        }
        plVar14 = *(long **)(unaff_x19 + 0x10);
        plVar9 = (long *)FUN_01f08890(*(undefined8 *)
                                       Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                      ,2);
        uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar8 = FUN_03579868(uVar13,0);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if ((lVar8 != 0) &&
           (lVar4 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar4 == 0)) {
          uVar13 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar13,0);
        }
        if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar9[4] = lVar8;
        thunk_FUN_01f51358(plVar9 + 4,lVar8);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar8 = *plVar12;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)Method_UnityEngine_Component_TryGetComponent<PixelPerfectCamera>__) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_023c2098;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_01ecb238(plVar12,*(long *)
                                        Method_UnityEngine_Component_TryGetComponent<PixelPerfectCamera>__
                               ,2);
LAB_023c2098:
        lVar8 = (*(code *)*puVar10)(plVar12,puVar10[1]);
        if ((lVar8 != 0) &&
           (lVar4 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar4 == 0)) {
          uVar13 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar13,0);
        }
        if (*(uint *)(plVar9 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar9[5] = lVar8;
        thunk_FUN_01f51358(plVar9 + 5,lVar8);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar8 = (**(code **)(*plVar14 + 0x408))(plVar14,plVar9,*(undefined8 *)(*plVar14 + 0x410));
        plVar9 = (long *)FUN_01f08890(*(undefined8 *)puVar3,2);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar4 = thunk_FUN_01f116d0(plVar12,*(undefined8 *)(*plVar9 + 0x40));
        if (lVar4 == 0) {
          uVar13 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar13,0);
        }
        if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar9[4] = (long)plVar12;
        thunk_FUN_01f51358(plVar9 + 4,plVar12);
        if ((lVar7 != 0) &&
           (lVar4 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar4 == 0)) {
          uVar13 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar13,0);
        }
        if (*(uint *)(plVar9 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar9[5] = lVar7;
        thunk_FUN_01f51358(plVar9 + 5,lVar7);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_034b2bf4(lVar8);
      } while( true );
    }
  }
  else {
    uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar5 = (long *)FUN_03579868(uVar13,0);
    if (plVar5 == (long *)0x0) goto LAB_023c2230;
    plVar5 = (long *)(**(code **)(*plVar5 + 0x458))(plVar5,*(undefined8 *)(*plVar5 + 0x460));
    uVar13 = FUN_03579868(*(undefined8 *)
                           Method_UnityEngine_Component_TryGetComponent<UniversalAdditionalLightData>__
                          ,0);
    if (plVar5 == (long *)0x0) goto LAB_023c2230;
    uVar6 = (**(code **)(*plVar5 + 0x2a8))(plVar5,uVar13,*(undefined8 *)(*plVar5 + 0x2b0));
    if ((uVar6 & 1) == 0) goto LAB_023c1c24;
    plVar12 = *(long **)(unaff_x19 + 0x30);
    plVar5 = (long *)FUN_01f08890(*(undefined8 *)
                                   Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                  ,3);
    uVar13 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*unaff_x28);
    }
    lVar7 = FUN_03579868(uVar13,0);
    if (plVar5 == (long *)0x0) goto LAB_023c2230;
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
    goto LAB_023c22f0;
    if ((int)plVar5[3] == 0) goto LAB_023c22ec;
    plVar5[4] = lVar7;
    thunk_FUN_01f51358(plVar5 + 4,lVar7);
    plVar9 = (long *)FUN_03579868(*(undefined8 *)(*unaff_x27 + 0x18),0);
    if (plVar9 == (long *)0x0) goto LAB_023c2230;
    uVar13 = (**(code **)(*plVar9 + 0x478))(plVar9,*(undefined8 *)(*plVar9 + 0x480));
    lVar7 = FUN_022f69fc(uVar13,*(undefined8 *)
                                 Method_UnityEngine_Component_TryGetComponent<Skybox>__);
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
    goto LAB_023c22f0;
    if (*(uint *)(plVar5 + 3) < 2) goto LAB_023c22ec;
    plVar5[5] = lVar7;
    thunk_FUN_01f51358(plVar5 + 5,lVar7);
    plVar9 = (long *)FUN_03579868(*(undefined8 *)(*unaff_x27 + 0x18),0);
    if (plVar9 == (long *)0x0) goto LAB_023c2230;
    uVar13 = (**(code **)(*plVar9 + 0x478))(plVar9,*(undefined8 *)(*plVar9 + 0x480));
    lVar7 = FUN_022f4c44(uVar13,1,*(undefined8 *)
                                   Method_UnityEngine_Component_TryGetComponent<ShadowCasterGroup2D>__
                        );
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
    goto LAB_023c22f0;
    if (*(uint *)(plVar5 + 3) < 3) goto LAB_023c22ec;
    plVar9 = plVar5 + 6;
    *plVar9 = lVar7;
LAB_023c195c:
    thunk_FUN_01f51358(plVar9,lVar7);
    if (plVar12 != (long *)0x0) {
      lVar7 = (**(code **)(*plVar12 + 0x408))(plVar12,plVar5,*(undefined8 *)(*plVar12 + 0x410));
      FUN_01f08890(*(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__,
                   0);
      if (lVar7 != 0) {
        lVar7 = FUN_034b2bf4(lVar7);
        lVar8 = *(long *)(*unaff_x27 + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01ecaf44(lVar8);
        }
        if (lVar7 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = thunk_FUN_01f116d0(lVar7,lVar8);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(lVar7,lVar8);
          }
        }
        return lVar4;
      }
    }
  }
LAB_023c2230:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar11 = piVar11 + 4;
    if (uVar6 == 0) break;
LAB_023c21e4:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_023c2218;
    }
  }
LAB_023c21fc:
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar5,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_023c2218:
  (*(code *)*puVar10)(plVar5,puVar10[1]);
  return lVar7;
}


