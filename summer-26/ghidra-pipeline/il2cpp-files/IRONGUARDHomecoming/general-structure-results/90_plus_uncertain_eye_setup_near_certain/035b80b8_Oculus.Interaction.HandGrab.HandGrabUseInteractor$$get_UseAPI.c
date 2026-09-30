/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.HandGrabUseInteractor$$get_UseAPI
ENTRY_POINT: 035b80b8
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

undefined8
Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_UseAPI
          (undefined8 *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  int iVar15;
  long unaff_x27;
  long lVar16;
  long in_stack_00000008;
  
  FUN_030f23f0(param_2,param_3,*param_1);
  puVar3 = 
  Method_Oculus_Interaction_UnityCanvas_CanvasRenderTexture_WhenCanvasRectTransformDimensionsChanged__
  ;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  iVar15 = 0;
  do {
    lVar10 = *unaff_x21;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_035b8138;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(unaff_x21,
                          *(long *)
                           Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__,0);
LAB_035b8138:
    plVar6 = (long *)(*(code *)*puVar5)(unaff_x21,puVar5[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength:
    lVar10 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_035b8198;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_035b8198:
    uVar12 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar12 & 1) != 0) {
      lVar10 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_035b81f4;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_035b81f4:
      lVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if (lVar10 == 0) {
        thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_JobWireMesh_Execute_BurstManaged__);
        uVar7 = thunk_FUN_01f117cc();
        uVar9 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_22__
                                  );
        FUN_034b0f60(uVar7,uVar9,0);
        uVar9 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_3__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar7,uVar9);
      }
      uVar7 = FUN_034bc5d4(lVar10,0);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar12 = FUN_03583338();
      if ((uVar12 & 1) != 0) break;
      goto LAB_035b8264;
    }
    if (plVar6 != (long *)0x0) {
      lVar10 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_035b83fc;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar6,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_035b83fc:
      (*(code *)*puVar5)(plVar6,puVar5[1]);
    }
    puVar4 = Method_System_Type_MakePointerType__;
    if (*(int *)(*(long *)Method_System_Type_MakePointerType__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    unaff_x27 = FUN_035b72c8(unaff_x27);
    if (unaff_x27 == 0) {
      if (param_2 != 0) {
        uVar7 = FUN_030f4630(param_2,*(undefined8 *)
                                      Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_2__
                            );
        return uVar7;
      }
      goto LAB_035b8d44;
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iVar15 = iVar15 + 1;
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
  uVar12 = (**(code **)(*unaff_x19 + 0x2a8))();
  if ((uVar12 & 1) == 0)
  goto Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength;
LAB_035b8264:
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar12 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset();
  if ((uVar12 & 1) == 0) {
    if (*(int *)(*(long *)Method_System_Type_MakePointerType__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar16 = FUN_035b768c(uVar7);
    if (iVar15 == 0) goto LAB_035b82c8;
LAB_035b8290:
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(char *)(lVar16 + 0x15) == '\0') goto FUN_035b8350;
  }
  else {
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar16 = *(long *)(in_stack_00000008 + 0x10);
    if (iVar15 != 0) goto LAB_035b8290;
LAB_035b82c8:
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  if (((*(char *)(lVar16 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
     (*(int *)(in_stack_00000008 + 0x18) == iVar15)) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = *(long *)(param_2 + 0x10);
    lVar13 = *(long *)
              Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_19__
    ;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(param_2 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(param_2 + 0x18) = uVar1 + 1;
      plVar8 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
      *plVar8 = lVar10;
      thunk_FUN_01f51358(plVar8,lVar10);
    }
    else {
      FUN_030f2bb4(param_2,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                  );
    }
  }
FUN_035b8350:
  if (in_stack_00000008 == 0) {
    lVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_UnityEngine_UIElements_ColumnLayout_<>c__DisplayClass42_3_<StretchResizeColumns>b__7__
                               );
    *(long *)(lVar10 + 0x10) = lVar16;
    thunk_FUN_01f51358((long *)(lVar10 + 0x10),lVar16);
    *(int *)(lVar10 + 0x18) = iVar15;
    FUN_02b6b2e4();
  }
  goto Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength;
}


