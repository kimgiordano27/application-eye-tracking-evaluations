/*
FUNCTION_NAME: System.Runtime.Serialization.FormatterConverter$$ToInt32
ENTRY_POINT: 03380930
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 120
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03380efc) */

uint System_Runtime_Serialization_FormatterConverter__ToInt32(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  int *piVar17;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long lVar18;
  undefined8 unaff_x23;
  undefined8 uVar19;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000030;
  
code_r0x03380930:
  lVar9 = thunk_FUN_01f117cc(*(undefined8 *)Method_UnityEngine_GameObject_TryGetComponent<Canvas>__)
  ;
  FUN_0337f95c();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(undefined8 *)(lVar9 + 0x10) = unaff_x23;
  thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x10),unaff_x23);
  *(long *)(lVar9 + 0x18) = (long)unaff_x22;
  thunk_FUN_01f51358((long *)(lVar9 + 0x18),unaff_x22);
  if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(lVar9 + 0x20) = unaff_x24[3];
  *(char *)(lVar9 + 0x28) = (char)unaff_x24[5];
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar10 = FUN_02b6b4d8(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(unaff_x20 + 0x20),
                        *(undefined8 *)
                         Method_UnityEngine_GameObject_GetComponent<DebugUIHandlerPersistentCanvas>__
                       );
  if ((uVar10 & 1) == 0) {
    lVar18 = *(long *)(unaff_x19 + 0x40);
    uVar19 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar11 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_UnityEngine_GameObject_GetComponent<IPointerEnterHandler>__)
    ;
    FUN_030f2380(uVar11,*(undefined8 *)Method_UnityEngine_GameObject_GetComponent<IAudioSystem>__);
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_02b6b2e4(lVar18,uVar19,uVar11,
                 *(undefined8 *)Method_UnityEngine_GameObject_GetComponentsInChildren<Renderer>__);
  }
  if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar18 = FUN_02b6b264(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(unaff_x20 + 0x20),*unaff_x26);
  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar14 = *(long *)(lVar18 + 0x10);
  lVar16 = *unaff_x25;
  *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = *(uint *)(lVar18 + 0x18);
  if (uVar2 < *(uint *)(lVar14 + 0x18)) {
    *(uint *)(lVar18 + 0x18) = uVar2 + 1;
    plVar15 = (long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
    *plVar15 = lVar9;
    thunk_FUN_01f51358(plVar15,lVar9);
  }
  else {
    FUN_030f2bb4(lVar18,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
  }
  do {
    uVar10 = FUN_02c7ab6c(&stack0x00000020,*unaff_x28);
    unaff_x20 = in_stack_00000030;
    if ((uVar10 & 1) == 0) {
      FUN_02c7ab68(&stack0x00000020,
                   *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<WitDictation>__);
      puVar8 = Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalCameraData>__;
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        uVar11 = FUN_02b6b184(*(long *)(unaff_x19 + 0x40),
                              *(undefined8 *)
                               Method_UnityEngine_GameObject_GetComponent<MeshFilter>__);
        lVar9 = *(long *)puVar8;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar9);
          lVar9 = *(long *)puVar8;
        }
        lVar18 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
        if (lVar18 == 0) {
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar9);
            lVar9 = *(long *)puVar8;
          }
          uVar19 = **(undefined8 **)(lVar9 + 0xb8);
          lVar18 = thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__
                                     );
          FUN_02e6c0a0(lVar18,uVar19,
                       *(undefined8 *)
                        Method_UnityEngine_GameObject_TryGetComponent<ShouldHideHandOnGrab>__,0);
          plVar15 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
          *plVar15 = lVar18;
          thunk_FUN_01f51358(plVar15,lVar18);
        }
        plVar15 = (long *)FUN_0230b6f4(uVar11,lVar18,
                                       *(undefined8 *)
                                        Method_UnityEngine_GameObject_GetComponentsInParent<Canvas>__
                                      );
        if (plVar15 != (long *)0x0) {
          lVar9 = *plVar15;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_03380bcc;
          piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          break;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = FUN_0337ff40();
    if (lVar9 == 0) {
      FUN_02c7ab68(&stack0x00000020,
                   *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<WitDictation>__);
      in_stack_00000000._4_4_ = 0;
      goto LAB_03380df0;
    }
    unaff_x22 = *(long **)(lVar9 + 0x10);
    unaff_x23 = *(undefined8 *)(lVar9 + 0x18);
    uVar10 = FUN_034a66c0(unaff_x22,0,0);
    if ((uVar10 & 1) == 0) {
      uVar11 = *unaff_x27;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03579868(uVar11,0);
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar11,uVar11);
      }
      lVar9 = (**(code **)(*unaff_x22 + 0x208))
                        (unaff_x22,uVar11,0,*(undefined8 *)(*unaff_x22 + 0x210));
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(lVar9 + 0x18) != 0) goto code_r0x033808dc;
      uVar11 = FUN_03406290(*(undefined8 *)
                             Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalLightData>__
                            ,unaff_x22,0);
      FUN_033a19f0(uVar11,0);
    }
    else {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar11 = FUN_03405678(*(undefined8 *)
                             Method_UnityEngine_GameObject_GetComponentsInChildren<MeshFilter>__,
                            *(undefined8 *)(unaff_x20 + 0x10),0);
      FUN_033a19f0(uVar11,0);
    }
    in_stack_00000000._4_4_ = 0;
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar17 = piVar17 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_UnityEngine_GameObject_TryGetComponent<AudioPhysics>__) {
      puVar12 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03380c04;
    }
  }
LAB_03380bcc:
  puVar12 = (undefined8 *)
            FUN_01ecb238(plVar15,*(long *)
                                  Method_UnityEngine_GameObject_TryGetComponent<AudioPhysics>__,0);
LAB_03380c04:
  plVar15 = (long *)(*(code *)*puVar12)(plVar15,puVar12[1]);
  puVar7 = Method_UnityEngine_GameObject_TryGetComponent<TagSet>__;
  puVar6 = Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerColor>__;
  puVar5 = Method_UnityEngine_GameObject_TryGetComponent<Camera>__;
  puVar4 = Method_UnityEngine_GameObject_GetComponentsInChildren<MeshRenderer>__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *plVar15;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
          puVar12 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03380c8c;
        }
        uVar10 = uVar10 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar10 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar3,0);
LAB_03380c8c:
    uVar10 = (*(code *)*puVar12)(plVar15,puVar12[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar15 == (long *)0x0) goto LAB_03380df0;
      lVar9 = *plVar15;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_03380dc0;
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      goto LAB_03380da8;
    }
    lVar9 = *plVar15;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
          puVar12 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03380ce8;
        }
        uVar10 = uVar10 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar10 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar5,0);
LAB_03380ce8:
    lVar9 = (*(code *)*puVar12)(plVar15,puVar12[1]);
    lVar18 = *(long *)puVar8;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar18);
      lVar18 = *(long *)puVar8;
    }
    lVar14 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x10);
    if (lVar14 == 0) {
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar18);
        lVar18 = *(long *)puVar8;
      }
      uVar11 = **(undefined8 **)(lVar18 + 0xb8);
      lVar14 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
      FUN_02a487e4(lVar14,uVar11,*(undefined8 *)puVar7,0);
      plVar13 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x10);
      *plVar13 = lVar14;
      thunk_FUN_01f51358(plVar13,lVar14);
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_030f459c(lVar9,lVar14,*(undefined8 *)puVar6);
  } while( true );
code_r0x033808dc:
  unaff_x24 = (long *)FUN_022f69fc(lVar9,*(undefined8 *)
                                          Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                                  );
  if (unaff_x24 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_GameObject_GetComponentsInChildren<OVRPlayerController>__
                     + 0x130);
    if (bVar1 <= *(byte *)(*unaff_x24 + 0x130)) {
      if (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_UnityEngine_GameObject_GetComponentsInChildren<OVRPlayerController>__) {
        unaff_x24 = (long *)0x0;
      }
      goto code_r0x03380930;
    }
  }
  unaff_x24 = (long *)0x0;
  goto code_r0x03380930;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar17 = piVar17 + 4;
    if (uVar10 == 0) break;
LAB_03380da8:
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar12 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03380ddc;
    }
  }
LAB_03380dc0:
  puVar12 = (undefined8 *)
            FUN_01ecb238(plVar15,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_03380ddc:
  (*(code *)*puVar12)(plVar15,puVar12[1]);
LAB_03380df0:
  return in_stack_00000000._4_4_ & 1;
}


