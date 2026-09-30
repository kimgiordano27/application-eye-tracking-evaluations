/*
FUNCTION_NAME: System.Runtime.Serialization.FormatterConverter$$ToInt64
ENTRY_POINT: 033809c8
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

uint System_Runtime_Serialization_FormatterConverter__ToInt64
               (undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  int *piVar17;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar18;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000030;
  
code_r0x033809c8:
  FUN_030f2380(param_2,*param_1);
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_02b6b2e4(unaff_x22,unaff_x23,unaff_x24,
               *(undefined8 *)Method_UnityEngine_GameObject_GetComponentsInChildren<Renderer>__);
LAB_033809f0:
  if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar11 = FUN_02b6b264(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(unaff_x20 + 0x20),*unaff_x26);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar14 = *(long *)(lVar11 + 0x10);
  lVar16 = *unaff_x25;
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = *(uint *)(lVar11 + 0x18);
  if (uVar2 < *(uint *)(lVar14 + 0x18)) {
    *(uint *)(lVar11 + 0x18) = uVar2 + 1;
    plVar15 = (long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
    *plVar15 = unaff_x21;
    thunk_FUN_01f51358(plVar15,unaff_x21);
  }
  else {
    FUN_030f2bb4(lVar11,unaff_x21,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70)
                );
  }
  do {
    uVar9 = FUN_02c7ab6c(&stack0x00000020,*unaff_x28);
    unaff_x20 = in_stack_00000030;
    if ((uVar9 & 1) == 0) {
      FUN_02c7ab68(&stack0x00000020,
                   *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<WitDictation>__);
      puVar8 = Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalCameraData>__;
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        uVar12 = FUN_02b6b184(*(long *)(unaff_x19 + 0x40),
                              *(undefined8 *)
                               Method_UnityEngine_GameObject_GetComponent<MeshFilter>__);
        lVar11 = *(long *)puVar8;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar11);
          lVar11 = *(long *)puVar8;
        }
        lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
        if (lVar14 == 0) {
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar11);
            lVar11 = *(long *)puVar8;
          }
          uVar18 = **(undefined8 **)(lVar11 + 0xb8);
          lVar14 = thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__
                                     );
          FUN_02e6c0a0(lVar14,uVar18,
                       *(undefined8 *)
                        Method_UnityEngine_GameObject_TryGetComponent<ShouldHideHandOnGrab>__,0);
          plVar15 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
          *plVar15 = lVar14;
          thunk_FUN_01f51358(plVar15,lVar14);
        }
        plVar15 = (long *)FUN_0230b6f4(uVar12,lVar14,
                                       *(undefined8 *)
                                        Method_UnityEngine_GameObject_GetComponentsInParent<Canvas>__
                                      );
        if (plVar15 != (long *)0x0) {
          lVar11 = *plVar15;
          uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar9 == 0) goto LAB_03380bcc;
          piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          break;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = FUN_0337ff40();
    if (lVar11 == 0) {
      FUN_02c7ab68(&stack0x00000020,
                   *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<WitDictation>__);
      in_stack_00000000._4_4_ = 0;
      goto LAB_03380df0;
    }
    plVar15 = *(long **)(lVar11 + 0x10);
    uVar12 = *(undefined8 *)(lVar11 + 0x18);
    uVar9 = FUN_034a66c0(plVar15,0,0);
    if ((uVar9 & 1) == 0) {
      uVar18 = *unaff_x27;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar18 = FUN_03579868(uVar18,0);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar18,uVar18);
      }
      lVar11 = (**(code **)(*plVar15 + 0x208))(plVar15,uVar18,0,*(undefined8 *)(*plVar15 + 0x210));
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(lVar11 + 0x18) != 0) goto code_r0x033808dc;
      uVar12 = FUN_03406290(*(undefined8 *)
                             Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalLightData>__
                            ,plVar15,0);
      FUN_033a19f0(uVar12,0);
    }
    else {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar12 = FUN_03405678(*(undefined8 *)
                             Method_UnityEngine_GameObject_GetComponentsInChildren<MeshFilter>__,
                            *(undefined8 *)(unaff_x20 + 0x10),0);
      FUN_033a19f0(uVar12,0);
    }
    in_stack_00000000._4_4_ = 0;
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar17 = piVar17 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_UnityEngine_GameObject_TryGetComponent<AudioPhysics>__) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03380c04;
    }
  }
LAB_03380bcc:
  puVar13 = (undefined8 *)
            FUN_01ecb238(plVar15,*(long *)
                                  Method_UnityEngine_GameObject_TryGetComponent<AudioPhysics>__,0);
LAB_03380c04:
  plVar15 = (long *)(*(code *)*puVar13)(plVar15,puVar13[1]);
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
    lVar11 = *plVar15;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03380c8c;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar9 != 0);
    }
    puVar13 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar3,0);
LAB_03380c8c:
    uVar9 = (*(code *)*puVar13)(plVar15,puVar13[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar15 == (long *)0x0) goto LAB_03380df0;
      lVar11 = *plVar15;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 == 0) goto LAB_03380dc0;
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      goto LAB_03380da8;
    }
    lVar11 = *plVar15;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03380ce8;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar9 != 0);
    }
    puVar13 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar5,0);
LAB_03380ce8:
    lVar11 = (*(code *)*puVar13)(plVar15,puVar13[1]);
    lVar14 = *(long *)puVar8;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar14);
      lVar14 = *(long *)puVar8;
    }
    lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
    if (lVar16 == 0) {
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar14);
        lVar14 = *(long *)puVar8;
      }
      uVar12 = **(undefined8 **)(lVar14 + 0xb8);
      lVar16 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
      FUN_02a487e4(lVar16,uVar12,*(undefined8 *)puVar7,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x10);
      *plVar10 = lVar16;
      thunk_FUN_01f51358(plVar10,lVar16);
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_030f459c(lVar11,lVar16,*(undefined8 *)puVar6);
  } while( true );
code_r0x033808dc:
  plVar10 = (long *)FUN_022f69fc(lVar11,*(undefined8 *)
                                         Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                                );
  if (plVar10 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_GameObject_GetComponentsInChildren<OVRPlayerController>__
                     + 0x130);
    if (bVar1 <= *(byte *)(*plVar10 + 0x130)) {
      if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_UnityEngine_GameObject_GetComponentsInChildren<OVRPlayerController>__) {
        plVar10 = (long *)0x0;
      }
      goto System_Runtime_Serialization_FormatterConverter__ToInt32;
    }
  }
  plVar10 = (long *)0x0;
System_Runtime_Serialization_FormatterConverter__ToInt32:
  unaff_x21 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_GameObject_TryGetComponent<Canvas>__);
  FUN_0337f95c();
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(undefined8 *)(unaff_x21 + 0x10) = uVar12;
  thunk_FUN_01f51358((undefined8 *)(unaff_x21 + 0x10),uVar12);
  *(long *)(unaff_x21 + 0x18) = (long)plVar15;
  thunk_FUN_01f51358((long *)(unaff_x21 + 0x18),plVar15);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(unaff_x21 + 0x20) = plVar10[3];
  *(char *)(unaff_x21 + 0x28) = (char)plVar10[5];
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar9 = FUN_02b6b4d8(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(unaff_x20 + 0x20),
                       *(undefined8 *)
                        Method_UnityEngine_GameObject_GetComponent<DebugUIHandlerPersistentCanvas>__
                      );
  if ((uVar9 & 1) == 0) goto code_r0x033809a4;
  goto LAB_033809f0;
code_r0x033809a4:
  unaff_x22 = *(long *)(unaff_x19 + 0x40);
  unaff_x23 = *(undefined8 *)(unaff_x20 + 0x20);
  param_2 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_GameObject_GetComponent<IPointerEnterHandler>__);
  param_1 = (undefined8 *)Method_UnityEngine_GameObject_GetComponent<IAudioSystem>__;
  unaff_x24 = param_2;
  goto code_r0x033809c8;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar17 = piVar17 + 4;
    if (uVar9 == 0) break;
LAB_03380da8:
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03380ddc;
    }
  }
LAB_03380dc0:
  puVar13 = (undefined8 *)
            FUN_01ecb238(plVar15,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_03380ddc:
  (*(code *)*puVar13)(plVar15,puVar13[1]);
LAB_03380df0:
  return in_stack_00000000._4_4_ & 1;
}


