/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.HandGrabUseInteractable$$InjectOptionalRelaxedHandGrabPoints
ENTRY_POINT: 035b7f98
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x035b8d48) */
/* WARNING: Removing unreachable block (ram,0x035b8e48) */
/* WARNING: Removing unreachable block (ram,0x035b8c08) */
/* WARNING: Removing unreachable block (ram,0x035b8414) */
/* WARNING: Removing unreachable block (ram,0x035b865c) */
/* WARNING: Removing unreachable block (ram,0x035b8e50) */

undefined8
Oculus_Interaction_HandGrab_HandGrabUseInteractable__InjectOptionalRelaxedHandGrabPoints
          (undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  long *unaff_x19;
  byte unaff_w20;
  long *unaff_x21;
  long *unaff_x23;
  int iVar20;
  long *unaff_x24;
  long unaff_x27;
  long lVar21;
  long in_stack_00000008;
  
  bVar6 = FUN_03584694(param_1,0);
  if ((bVar6 & 1 & unaff_w20) != 0) {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar8 = FUN_035b768c();
    if (lVar8 == 0) goto LAB_035b8d44;
    unaff_w20 = unaff_w20 & *(char *)(lVar8 + 0x15) != '\0';
  }
  puVar2 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
  if (unaff_x21 != (long *)0x0) {
    lVar8 = *unaff_x21;
    uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *unaff_x23) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_035b8038;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238();
LAB_035b8038:
    uVar7 = (*(code *)*puVar9)();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar7 = FUN_0356bc8c(uVar7,0x10,0);
    if ((unaff_w20 & 1) == 0) {
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar17 = FUN_03582560();
      if ((uVar17 & 1) == 0) {
        lVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_21__
                                  );
        FUN_030f23f0(lVar8,uVar7,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_20__
                    );
        lVar10 = *unaff_x21;
        uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) ==
                *(long *)Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__) {
              puVar9 = (undefined8 *)(lVar10 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_035b88c8;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238();
LAB_035b88c8:
        plVar11 = (long *)(*(code *)*puVar9)();
        puVar5 = 
        Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_19__
        ;
        puVar3 = 
        Method_Oculus_Interaction_UnityCanvas_CanvasRenderTexture_WhenCanvasRectTransformDimensionsChanged__
        ;
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar10 = *plVar11;
          uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
                puVar9 = (undefined8 *)(lVar10 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_035b8940;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_035b8940:
          uVar17 = (*(code *)*puVar9)(plVar11,puVar9[1]);
          if ((uVar17 & 1) == 0) {
            if (plVar11 == (long *)0x0) goto joined_r0x035b8d04;
            lVar10 = *plVar11;
            uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar17 == 0) goto LAB_035b8a80;
            piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto LAB_035b8a68;
          }
          lVar10 = *plVar11;
          uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar10 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_035b899c;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,0);
LAB_035b899c:
          lVar10 = (*(code *)*puVar9)(plVar11,puVar9[1]);
          if (lVar10 == 0) {
            thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_JobWireMesh_Execute_BurstManaged__);
            uVar12 = thunk_FUN_01f117cc();
            uVar14 = thunk_FUN_01efb3a4(
                                       Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_22__
                                       );
            FUN_034b0f60(uVar12,uVar14,0);
            uVar14 = thunk_FUN_01efb3a4(
                                       Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_3__
                                       );
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar12,uVar14);
          }
          uVar12 = FUN_034bc5d4(lVar10,0);
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(uVar12,uVar12);
          }
          uVar17 = (**(code **)(*unaff_x19 + 0x2a8))();
          if ((uVar17 & 1) != 0) {
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar15 = *(long *)(lVar8 + 0x10);
            lVar21 = *(long *)puVar5;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
              *plVar13 = lVar10;
              thunk_FUN_01f51358(plVar13,lVar10);
            }
            else {
              FUN_030f2bb4(lVar8,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
          }
        } while( true );
      }
      lVar8 = *unaff_x21;
      uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) ==
              *(long *)Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_035b8744;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238();
LAB_035b8744:
      plVar11 = (long *)(*(code *)*puVar9)();
      puVar3 = 
      Method_Oculus_Interaction_UnityCanvas_CanvasRenderTexture_WhenCanvasRectTransformDimensionsChanged__
      ;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar8 = *plVar11;
        uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_035b87b4;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_035b87b4:
        uVar17 = (*(code *)*puVar9)(plVar11,puVar9[1]);
        if ((uVar17 & 1) == 0) {
          if (plVar11 == (long *)0x0) goto LAB_035b8bfc;
          lVar8 = *plVar11;
          uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar17 == 0) goto LAB_035b88ac;
          piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_035b8894;
        }
        lVar8 = *plVar11;
        uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_035b8810;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,0);
LAB_035b8810:
        lVar8 = (*(code *)*puVar9)(plVar11,puVar9[1]);
        if (lVar8 == 0) {
          thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_JobWireMesh_Execute_BurstManaged__);
          uVar12 = thunk_FUN_01f117cc();
          uVar14 = thunk_FUN_01efb3a4(
                                     Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_22__
                                     );
          FUN_034b0f60(uVar12,uVar14,0);
          uVar14 = thunk_FUN_01efb3a4(
                                     Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_3__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar12,uVar14);
        }
      } while( true );
    }
    lVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_Drawing_CommandBuilder_Builder_Add<CommandBuilder_Builder_TextVertex>__
                               );
    FUN_02b6aa80(lVar10,uVar7,*(undefined8 *)Method_Drawing_CommandBuilder_Builder_Add<int>__);
    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_21__
                              );
    FUN_030f23f0(lVar8,uVar7,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_20__
                );
    puVar5 = Method_UnityEngine_Rendering_CommandBufferPool_<>c_<_cctor>b__4_0__;
    puVar3 = 
    Method_Oculus_Interaction_UnityCanvas_CanvasRenderTexture_WhenCanvasRectTransformDimensionsChanged__
    ;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    iVar20 = 0;
    do {
      lVar15 = *unaff_x21;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) ==
              *(long *)Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__) {
            puVar9 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_035b8138;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01ecb238(unaff_x21,
                            *(long *)
                             Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__,0
                           );
LAB_035b8138:
      plVar11 = (long *)(*(code *)*puVar9)(unaff_x21,puVar9[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength:
      lVar15 = *plVar11;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_035b8198;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_035b8198:
      uVar17 = (*(code *)*puVar9)(plVar11,puVar9[1]);
      if ((uVar17 & 1) != 0) {
        lVar15 = *plVar11;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_035b81f4;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,0);
LAB_035b81f4:
        lVar15 = (*(code *)*puVar9)(plVar11,puVar9[1]);
        if (lVar15 == 0) {
          thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_JobWireMesh_Execute_BurstManaged__);
          uVar12 = thunk_FUN_01f117cc();
          uVar14 = thunk_FUN_01efb3a4(
                                     Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_22__
                                     );
          FUN_034b0f60(uVar12,uVar14,0);
          uVar14 = thunk_FUN_01efb3a4(
                                     Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_3__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar12,uVar14);
        }
        uVar12 = FUN_034bc5d4(lVar15,0);
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        uVar17 = FUN_03583338();
        if ((uVar17 & 1) != 0) goto code_r0x035b8244;
        goto LAB_035b8264;
      }
      if (plVar11 != (long *)0x0) {
        lVar15 = *plVar11;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar9 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_035b83fc;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01ecb238(plVar11,*(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_035b83fc:
        (*(code *)*puVar9)(plVar11,puVar9[1]);
      }
      puVar4 = Method_System_Type_MakePointerType__;
      if (*(int *)(*(long *)Method_System_Type_MakePointerType__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      unaff_x27 = FUN_035b72c8(unaff_x27);
      if (unaff_x27 == 0) goto joined_r0x035b8d04;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar20 = iVar20 + 1;
      unaff_x21 = (long *)FUN_035b7ae0(unaff_x27);
    } while (unaff_x21 != (long *)0x0);
  }
  goto LAB_035b8d44;
code_r0x035b8244:
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar17 = (**(code **)(*unaff_x19 + 0x2a8))();
  if ((uVar17 & 1) == 0)
  goto Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength;
LAB_035b8264:
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar17 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                     (lVar10,uVar12,&stack0x00000008,*(undefined8 *)puVar5);
  if ((uVar17 & 1) == 0) {
    if (*(int *)(*(long *)Method_System_Type_MakePointerType__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar21 = FUN_035b768c(uVar12);
    if (iVar20 != 0) goto LAB_035b8290;
LAB_035b82c8:
    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  else {
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar21 = *(long *)(in_stack_00000008 + 0x10);
    if (iVar20 == 0) goto LAB_035b82c8;
LAB_035b8290:
    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(char *)(lVar21 + 0x15) == '\0') goto FUN_035b8350;
  }
  if (((*(char *)(lVar21 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
     (*(int *)(in_stack_00000008 + 0x18) == iVar20)) {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar16 = *(long *)(lVar8 + 0x10);
    lVar18 = *(long *)
              Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_19__
    ;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
      plVar13 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
      *plVar13 = lVar15;
      thunk_FUN_01f51358(plVar13,lVar15);
    }
    else {
      FUN_030f2bb4(lVar8,lVar15,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
    }
  }
FUN_035b8350:
  if (in_stack_00000008 == 0) {
    lVar15 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_UnityEngine_UIElements_ColumnLayout_<>c__DisplayClass42_3_<StretchResizeColumns>b__7__
                               );
    *(long *)(lVar15 + 0x10) = lVar21;
    thunk_FUN_01f51358((long *)(lVar15 + 0x10),lVar21);
    *(int *)(lVar15 + 0x18) = iVar20;
    FUN_02b6b2e4(lVar10,uVar12,lVar15,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_Columns_<>c_<UpdateVisibleColumns>b__76_0__);
  }
  goto Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar19 = piVar19 + 4;
    if (uVar17 == 0) break;
LAB_035b8894:
    if (*(long *)(piVar19 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_035b8bf0;
    }
  }
LAB_035b88ac:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar11,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_035b8bf0:
  (*(code *)*puVar9)(plVar11,puVar9[1]);
LAB_035b8bfc:
  lVar8 = *unaff_x21;
  uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar17 != 0) {
    piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *unaff_x23) {
        puVar9 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_035b8c58;
      }
      uVar17 = uVar17 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar17 != 0);
  }
  puVar9 = (undefined8 *)FUN_01ecb238();
LAB_035b8c58:
  uVar7 = (*(code *)*puVar9)();
  uVar12 = FUN_01f08890(*(undefined8 *)
                         Method_System_ThrowHelper_ThrowInvalidOperationException_InvalidOperation_NoValue__
                        ,uVar7);
  lVar8 = *unaff_x21;
  uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar17 != 0) {
    piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *unaff_x23) {
        puVar9 = (undefined8 *)(lVar8 + (long)(*piVar19 + 5) * 0x10 + 0x138);
        goto FUN_035b8cd0;
      }
      uVar17 = uVar17 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar17 != 0);
  }
  puVar9 = (undefined8 *)FUN_01ecb238();
FUN_035b8cd0:
  (*(code *)*puVar9)();
  return uVar12;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar19 = piVar19 + 4;
    if (uVar17 == 0) break;
LAB_035b8a68:
    if (*(long *)(piVar19 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar10 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_035b8cf4;
    }
  }
LAB_035b8a80:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar11,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_035b8cf4:
  (*(code *)*puVar9)(plVar11,puVar9[1]);
joined_r0x035b8d04:
  if (lVar8 != 0) {
    uVar12 = FUN_030f4630(lVar8,*(undefined8 *)
                                 Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_2__
                         );
    return uVar12;
  }
LAB_035b8d44:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


