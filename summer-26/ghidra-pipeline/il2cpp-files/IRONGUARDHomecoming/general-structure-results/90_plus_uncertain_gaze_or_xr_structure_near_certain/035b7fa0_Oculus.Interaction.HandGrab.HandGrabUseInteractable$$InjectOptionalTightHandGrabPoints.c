/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.HandGrabUseInteractable$$InjectOptionalTightHandGrabPoints
ENTRY_POINT: 035b7fa0
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
Oculus_Interaction_HandGrab_HandGrabUseInteractable__InjectOptionalTightHandGrabPoints(byte param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  long *unaff_x19;
  byte unaff_w20;
  long *unaff_x21;
  long *unaff_x23;
  int iVar19;
  long *unaff_x24;
  long unaff_x27;
  long lVar20;
  long in_stack_00000008;
  
  if ((param_1 & 1 & unaff_w20) != 0) {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar7 = FUN_035b768c();
    if (lVar7 == 0) goto LAB_035b8d44;
    unaff_w20 = unaff_w20 & *(char *)(lVar7 + 0x15) != '\0';
  }
  puVar2 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
  if (unaff_x21 != (long *)0x0) {
    lVar7 = *unaff_x21;
    uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x23) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_035b8038;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238();
LAB_035b8038:
    uVar6 = (*(code *)*puVar8)();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar6 = FUN_0356bc8c(uVar6,0x10,0);
    if ((unaff_w20 & 1) == 0) {
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar16 = FUN_03582560();
      if ((uVar16 & 1) == 0) {
        lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_21__
                                  );
        FUN_030f23f0(lVar7,uVar6,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_20__
                    );
        lVar9 = *unaff_x21;
        uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) ==
                *(long *)Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_035b88c8;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238();
LAB_035b88c8:
        plVar10 = (long *)(*(code *)*puVar8)();
        puVar5 = 
        Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_19__
        ;
        puVar3 = 
        Method_Oculus_Interaction_UnityCanvas_CanvasRenderTexture_WhenCanvasRectTransformDimensionsChanged__
        ;
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar9 = *plVar10;
          uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                puVar8 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_035b8940;
              }
              uVar16 = uVar16 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar16 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_035b8940:
          uVar16 = (*(code *)*puVar8)(plVar10,puVar8[1]);
          if ((uVar16 & 1) == 0) {
            if (plVar10 == (long *)0x0) goto joined_r0x035b8d04;
            lVar9 = *plVar10;
            uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar16 == 0) goto LAB_035b8a80;
            piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_035b8a68;
          }
          lVar9 = *plVar10;
          uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_035b899c;
              }
              uVar16 = uVar16 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar16 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_035b899c:
          lVar9 = (*(code *)*puVar8)(plVar10,puVar8[1]);
          if (lVar9 == 0) {
            thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_JobWireMesh_Execute_BurstManaged__);
            uVar11 = thunk_FUN_01f117cc();
            uVar13 = thunk_FUN_01efb3a4(
                                       Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_22__
                                       );
            FUN_034b0f60(uVar11,uVar13,0);
            uVar13 = thunk_FUN_01efb3a4(
                                       Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_3__
                                       );
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar11,uVar13);
          }
          uVar11 = FUN_034bc5d4(lVar9,0);
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(uVar11,uVar11);
          }
          uVar16 = (**(code **)(*unaff_x19 + 0x2a8))();
          if ((uVar16 & 1) != 0) {
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar14 = *(long *)(lVar7 + 0x10);
            lVar20 = *(long *)puVar5;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
              *plVar12 = lVar9;
              thunk_FUN_01f51358(plVar12,lVar9);
            }
            else {
              FUN_030f2bb4(lVar7,lVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            }
          }
        } while( true );
      }
      lVar7 = *unaff_x21;
      uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) ==
              *(long *)Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__) {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_035b8744;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238();
LAB_035b8744:
      plVar10 = (long *)(*(code *)*puVar8)();
      puVar3 = 
      Method_Oculus_Interaction_UnityCanvas_CanvasRenderTexture_WhenCanvasRectTransformDimensionsChanged__
      ;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar7 = *plVar10;
        uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar7 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_035b87b4;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_035b87b4:
        uVar16 = (*(code *)*puVar8)(plVar10,puVar8[1]);
        if ((uVar16 & 1) == 0) {
          if (plVar10 == (long *)0x0) goto LAB_035b8bfc;
          lVar7 = *plVar10;
          uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar16 == 0) goto LAB_035b88ac;
          piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_035b8894;
        }
        lVar7 = *plVar10;
        uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar7 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_035b8810;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_035b8810:
        lVar7 = (*(code *)*puVar8)(plVar10,puVar8[1]);
        if (lVar7 == 0) {
          thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_JobWireMesh_Execute_BurstManaged__);
          uVar11 = thunk_FUN_01f117cc();
          uVar13 = thunk_FUN_01efb3a4(
                                     Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_22__
                                     );
          FUN_034b0f60(uVar11,uVar13,0);
          uVar13 = thunk_FUN_01efb3a4(
                                     Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_3__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar11,uVar13);
        }
      } while( true );
    }
    lVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Drawing_CommandBuilder_Builder_Add<CommandBuilder_Builder_TextVertex>__
                              );
    FUN_02b6aa80(lVar9,uVar6,*(undefined8 *)Method_Drawing_CommandBuilder_Builder_Add<int>__);
    lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_21__
                              );
    FUN_030f23f0(lVar7,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_20__
                );
    puVar5 = Method_UnityEngine_Rendering_CommandBufferPool_<>c_<_cctor>b__4_0__;
    puVar3 = 
    Method_Oculus_Interaction_UnityCanvas_CanvasRenderTexture_WhenCanvasRectTransformDimensionsChanged__
    ;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    iVar19 = 0;
    do {
      lVar14 = *unaff_x21;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) ==
              *(long *)Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__) {
            puVar8 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_035b8138;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(unaff_x21,
                            *(long *)
                             Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__,0
                           );
LAB_035b8138:
      plVar10 = (long *)(*(code *)*puVar8)(unaff_x21,puVar8[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength:
      lVar14 = *plVar10;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_035b8198;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_035b8198:
      uVar16 = (*(code *)*puVar8)(plVar10,puVar8[1]);
      if ((uVar16 & 1) != 0) {
        lVar14 = *plVar10;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_035b81f4;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_035b81f4:
        lVar14 = (*(code *)*puVar8)(plVar10,puVar8[1]);
        if (lVar14 == 0) {
          thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_JobWireMesh_Execute_BurstManaged__);
          uVar11 = thunk_FUN_01f117cc();
          uVar13 = thunk_FUN_01efb3a4(
                                     Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_22__
                                     );
          FUN_034b0f60(uVar11,uVar13,0);
          uVar13 = thunk_FUN_01efb3a4(
                                     Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_3__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar11,uVar13);
        }
        uVar11 = FUN_034bc5d4(lVar14,0);
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        uVar16 = FUN_03583338();
        if ((uVar16 & 1) != 0) goto code_r0x035b8244;
        goto LAB_035b8264;
      }
      if (plVar10 != (long *)0x0) {
        lVar14 = *plVar10;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar8 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_035b83fc;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01ecb238(plVar10,*(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_035b83fc:
        (*(code *)*puVar8)(plVar10,puVar8[1]);
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
      iVar19 = iVar19 + 1;
      unaff_x21 = (long *)FUN_035b7ae0(unaff_x27);
    } while (unaff_x21 != (long *)0x0);
  }
  goto LAB_035b8d44;
code_r0x035b8244:
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar16 = (**(code **)(*unaff_x19 + 0x2a8))();
  if ((uVar16 & 1) == 0)
  goto Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength;
LAB_035b8264:
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar16 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                     (lVar9,uVar11,&stack0x00000008,*(undefined8 *)puVar5);
  if ((uVar16 & 1) == 0) {
    if (*(int *)(*(long *)Method_System_Type_MakePointerType__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar20 = FUN_035b768c(uVar11);
    if (iVar19 != 0) goto LAB_035b8290;
LAB_035b82c8:
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  else {
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar20 = *(long *)(in_stack_00000008 + 0x10);
    if (iVar19 == 0) goto LAB_035b82c8;
LAB_035b8290:
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(char *)(lVar20 + 0x15) == '\0') goto FUN_035b8350;
  }
  if (((*(char *)(lVar20 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
     (*(int *)(in_stack_00000008 + 0x18) == iVar19)) {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar15 = *(long *)(lVar7 + 0x10);
    lVar17 = *(long *)
              Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_19__
    ;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      plVar12 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
      *plVar12 = lVar14;
      thunk_FUN_01f51358(plVar12,lVar14);
    }
    else {
      FUN_030f2bb4(lVar7,lVar14,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
    }
  }
FUN_035b8350:
  if (in_stack_00000008 == 0) {
    lVar14 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_UnityEngine_UIElements_ColumnLayout_<>c__DisplayClass42_3_<StretchResizeColumns>b__7__
                               );
    *(long *)(lVar14 + 0x10) = lVar20;
    thunk_FUN_01f51358((long *)(lVar14 + 0x10),lVar20);
    *(int *)(lVar14 + 0x18) = iVar19;
    FUN_02b6b2e4(lVar9,uVar11,lVar14,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_Columns_<>c_<UpdateVisibleColumns>b__76_0__);
  }
  goto Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_035b8894:
    if (*(long *)(piVar18 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar7 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_035b8bf0;
    }
  }
LAB_035b88ac:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar10,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_035b8bf0:
  (*(code *)*puVar8)(plVar10,puVar8[1]);
LAB_035b8bfc:
  lVar7 = *unaff_x21;
  uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar16 != 0) {
    piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *unaff_x23) {
        puVar8 = (undefined8 *)(lVar7 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_035b8c58;
      }
      uVar16 = uVar16 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar16 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238();
LAB_035b8c58:
  uVar6 = (*(code *)*puVar8)();
  uVar11 = FUN_01f08890(*(undefined8 *)
                         Method_System_ThrowHelper_ThrowInvalidOperationException_InvalidOperation_NoValue__
                        ,uVar6);
  lVar7 = *unaff_x21;
  uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar16 != 0) {
    piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *unaff_x23) {
        puVar8 = (undefined8 *)(lVar7 + (long)(*piVar18 + 5) * 0x10 + 0x138);
        goto FUN_035b8cd0;
      }
      uVar16 = uVar16 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar16 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238();
FUN_035b8cd0:
  (*(code *)*puVar8)();
  return uVar11;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_035b8a68:
    if (*(long *)(piVar18 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_035b8cf4;
    }
  }
LAB_035b8a80:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar10,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_035b8cf4:
  (*(code *)*puVar8)(plVar10,puVar8[1]);
joined_r0x035b8d04:
  if (lVar7 != 0) {
    uVar11 = FUN_030f4630(lVar7,*(undefined8 *)
                                 Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_2__
                         );
    return uVar11;
  }
LAB_035b8d44:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


