/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.HandGrabUseInteractor$$set_WhenHandGrabEnded
ENTRY_POINT: 035b8200
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035b8414) */
/* WARNING: Removing unreachable block (ram,0x035b865c) */
/* WARNING: Removing unreachable block (ram,0x035b8d48) */

undefined8 Oculus_Interaction_HandGrab_HandGrabUseInteractor__set_WhenHandGrabEnded(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long *unaff_x26;
  long lVar10;
  long in_stack_00000000;
  long in_stack_00000008;
  
code_r0x035b8200:
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_JobWireMesh_Execute_BurstManaged__);
    uVar4 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_22__
                              );
    FUN_034b0f60(uVar4,uVar8,0);
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_3__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar8);
  }
  uVar4 = FUN_034bc5d4(param_1,0);
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_03583338();
  if ((uVar5 & 1) != 0) {
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar5 = (**(code **)(*unaff_x19 + 0x2a8))();
    if ((uVar5 & 1) == 0)
    goto Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength;
  }
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar5 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset();
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)Method_System_Type_MakePointerType__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar10 = FUN_035b768c(uVar4);
    if (unaff_w24 == 0) goto LAB_035b82c8;
LAB_035b8290:
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(char *)(lVar10 + 0x15) != '\0') goto LAB_035b82cc;
  }
  else {
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = *(long *)(in_stack_00000008 + 0x10);
    if (unaff_w24 != 0) goto LAB_035b8290;
LAB_035b82c8:
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_035b82cc:
    if (((*(char *)(lVar10 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
       (*(int *)(in_stack_00000008 + 0x18) == unaff_w24)) {
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *(long *)(unaff_x23 + 0x10);
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
        plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        *plVar7 = param_1;
        thunk_FUN_01f51358(plVar7,param_1);
      }
      else {
        FUN_030f2bb4();
      }
    }
  }
  if (in_stack_00000008 == 0) {
    lVar6 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_UIElements_ColumnLayout_<>c__DisplayClass42_3_<StretchResizeColumns>b__7__
                              );
    *(long *)(lVar6 + 0x10) = lVar10;
    thunk_FUN_01f51358((long *)(lVar6 + 0x10),lVar10);
    *(int *)(lVar6 + 0x18) = unaff_w24;
    FUN_02b6b2e4();
  }
Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength:
  do {
    lVar10 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x20) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_035b8198;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(unaff_x21,*unaff_x20,0);
LAB_035b8198:
    uVar5 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
    if ((uVar5 & 1) != 0) break;
    if (unaff_x21 != (long *)0x0) {
      lVar10 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_035b83fc;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(unaff_x21,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_035b83fc:
      (*(code *)*puVar3)(unaff_x21,puVar3[1]);
    }
    puVar2 = Method_System_Type_MakePointerType__;
    if (*(int *)(*(long *)Method_System_Type_MakePointerType__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    in_stack_00000000 = FUN_035b72c8(in_stack_00000000);
    if (in_stack_00000000 == 0) {
      if (unaff_x23 != 0) {
        uVar4 = FUN_030f4630();
        return uVar4;
      }
LAB_035b8d44:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    unaff_w24 = unaff_w24 + 1;
    plVar7 = (long *)FUN_035b7ae0(in_stack_00000000);
    if (plVar7 == (long *)0x0) goto LAB_035b8d44;
    lVar10 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_035b8138;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__
                          ,0);
LAB_035b8138:
    unaff_x21 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  } while( true );
  lVar10 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x26) {
        puVar3 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_035b81f4;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(unaff_x21,*unaff_x26,0);
LAB_035b81f4:
  param_1 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
  goto code_r0x035b8200;
}


