/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.HandGrabUseInteractor$$set_Hand
ENTRY_POINT: 035b80a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x035b8414) */
/* WARNING: Removing unreachable block (ram,0x035b865c) */
/* WARNING: Removing unreachable block (ram,0x035b8d48) */

undefined8 Oculus_Interaction_HandGrab_HandGrabUseInteractor__set_Hand(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  undefined4 unaff_w24;
  int iVar16;
  long unaff_x27;
  long lVar17;
  long in_stack_00000008;
  
  lVar5 = thunk_FUN_01f117cc();
  FUN_030f23f0(lVar5,unaff_w24,
               *(undefined8 *)
                Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_20__
              );
  puVar3 = 
  Method_Oculus_Interaction_UnityCanvas_CanvasRenderTexture_WhenCanvasRectTransformDimensionsChanged__
  ;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  iVar16 = 0;
  do {
    lVar11 = *unaff_x21;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_035b8138;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(unaff_x21,
                          *(long *)
                           Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__,0);
LAB_035b8138:
    plVar7 = (long *)(*(code *)*puVar6)(unaff_x21,puVar6[1]);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength:
    lVar11 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_035b8198;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_035b8198:
    uVar13 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar13 & 1) != 0) {
      lVar11 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_035b81f4;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_035b81f4:
      lVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar11 == 0) {
        thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_JobWireMesh_Execute_BurstManaged__);
        uVar8 = thunk_FUN_01f117cc();
        uVar10 = thunk_FUN_01efb3a4(
                                   Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_22__
                                   );
        FUN_034b0f60(uVar8,uVar10,0);
        uVar10 = thunk_FUN_01efb3a4(
                                   Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_3__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar8,uVar10);
      }
      uVar8 = FUN_034bc5d4(lVar11,0);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = FUN_03583338();
      if ((uVar13 & 1) != 0) break;
      goto LAB_035b8264;
    }
    if (plVar7 != (long *)0x0) {
      lVar11 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_035b83fc;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_035b83fc:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
    }
    puVar4 = Method_System_Type_MakePointerType__;
    if (*(int *)(*(long *)Method_System_Type_MakePointerType__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    unaff_x27 = FUN_035b72c8(unaff_x27);
    if (unaff_x27 == 0) {
      if (lVar5 != 0) {
        uVar8 = FUN_030f4630(lVar5,*(undefined8 *)
                                    Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_2__
                            );
        return uVar8;
      }
      goto LAB_035b8d44;
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iVar16 = iVar16 + 1;
    unaff_x21 = (long *)FUN_035b7ae0(unaff_x27);
    if (unaff_x21 == (long *)0x0) {
LAB_035b8d44:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  } while( true );
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar13 = (**(code **)(*unaff_x19 + 0x2a8))();
  if ((uVar13 & 1) == 0)
  goto Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength;
LAB_035b8264:
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar13 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset();
  if ((uVar13 & 1) == 0) {
    if (*(int *)(*(long *)Method_System_Type_MakePointerType__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar17 = FUN_035b768c(uVar8);
    if (iVar16 == 0) goto LAB_035b82c8;
LAB_035b8290:
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(char *)(lVar17 + 0x15) == '\0') goto FUN_035b8350;
  }
  else {
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar17 = *(long *)(in_stack_00000008 + 0x10);
    if (iVar16 != 0) goto LAB_035b8290;
LAB_035b82c8:
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  if (((*(char *)(lVar17 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
     (*(int *)(in_stack_00000008 + 0x18) == iVar16)) {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar12 = *(long *)(lVar5 + 0x10);
    lVar14 = *(long *)
              Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_19__
    ;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      plVar9 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
      *plVar9 = lVar11;
      thunk_FUN_01f51358(plVar9,lVar11);
    }
    else {
      FUN_030f2bb4(lVar5,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
  }
FUN_035b8350:
  if (in_stack_00000008 == 0) {
    lVar11 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_UnityEngine_UIElements_ColumnLayout_<>c__DisplayClass42_3_<StretchResizeColumns>b__7__
                               );
    *(long *)(lVar11 + 0x10) = lVar17;
    thunk_FUN_01f51358((long *)(lVar11 + 0x10),lVar17);
    *(int *)(lVar11 + 0x18) = iVar16;
    FUN_02b6b2e4();
  }
  goto Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength;
}


