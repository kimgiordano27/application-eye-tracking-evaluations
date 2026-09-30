/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.HandGrabUseInteractor$$StartUsing
ENTRY_POINT: 035b83e4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Oculus_Interaction_HandGrab_HandGrabUseInteractor__StartUsing(long *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long *unaff_x26;
  long unaff_x27;
  int unaff_w28;
  long lVar11;
  long in_stack_00000000;
  long in_stack_00000008;
  
code_r0x035b83e4:
  puVar4 = (undefined8 *)FUN_01ecb238(param_1,param_2,0);
  param_1 = unaff_x21;
  do {
    (*(code *)*puVar4)(param_1,puVar4[1]);
    do {
      puVar2 = Method_System_Type_MakePointerType__;
      if (unaff_x27 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01eed990(unaff_x27);
      }
      if ((unaff_w28 != 0x2d) && (unaff_w28 != 0)) {
        return unaff_x19;
      }
      if (*(int *)(*(long *)Method_System_Type_MakePointerType__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      in_stack_00000000 = FUN_035b72c8(in_stack_00000000);
      if (in_stack_00000000 == 0) {
        if (unaff_x23 != 0) {
          plVar5 = (long *)FUN_030f4630();
          return plVar5;
        }
LAB_035b8d44:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      unaff_w24 = unaff_w24 + 1;
      plVar5 = (long *)FUN_035b7ae0(in_stack_00000000);
      if (plVar5 == (long *)0x0) goto LAB_035b8d44;
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_035b8138;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__
                            ,0);
LAB_035b8138:
      param_1 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength:
      lVar7 = *param_1;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x20) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_035b8198;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(param_1,*unaff_x20,0);
LAB_035b8198:
      uVar9 = (*(code *)*puVar4)(param_1,puVar4[1]);
      if ((uVar9 & 1) != 0) {
        lVar7 = *param_1;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x26) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_035b81f4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238(param_1,*unaff_x26,0);
LAB_035b81f4:
        lVar7 = (*(code *)*puVar4)(param_1,puVar4[1]);
        if (lVar7 == 0) {
          thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_JobWireMesh_Execute_BurstManaged__);
          uVar3 = thunk_FUN_01f117cc();
          uVar6 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_22__
                                    );
          FUN_034b0f60(uVar3,uVar6,0);
          uVar6 = thunk_FUN_01efb3a4(
                                    Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_3__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar3,uVar6);
        }
        uVar3 = FUN_034bc5d4(lVar7,0);
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        uVar9 = FUN_03583338();
        if ((uVar9 & 1) != 0) goto code_r0x035b8244;
        goto LAB_035b8264;
      }
      unaff_x27 = 0;
      unaff_w28 = 0x2d;
    } while (param_1 == (long *)0x0);
    lVar7 = *param_1;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    param_2 = *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    unaff_x21 = param_1;
    if (uVar9 == 0) goto code_r0x035b83e4;
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    while (*(long *)(piVar10 + -2) != param_2) {
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
      if (uVar9 == 0) goto code_r0x035b83e4;
    }
    puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
  } while( true );
code_r0x035b8244:
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar9 = (**(code **)(*unaff_x19 + 0x2a8))();
  if ((uVar9 & 1) == 0) goto Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength;
LAB_035b8264:
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar9 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset();
  if ((uVar9 & 1) == 0) {
    if (*(int *)(*(long *)Method_System_Type_MakePointerType__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar11 = FUN_035b768c(uVar3);
    if (unaff_w24 == 0) goto LAB_035b82c8;
LAB_035b8290:
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(char *)(lVar11 + 0x15) == '\0') goto FUN_035b8350;
  }
  else {
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = *(long *)(in_stack_00000008 + 0x10);
    if (unaff_w24 != 0) goto LAB_035b8290;
LAB_035b82c8:
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  if (((*(char *)(lVar11 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
     (*(int *)(in_stack_00000008 + 0x18) == unaff_w24)) {
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *(long *)(unaff_x23 + 0x10);
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
      *plVar5 = lVar7;
      thunk_FUN_01f51358(plVar5,lVar7);
    }
    else {
      FUN_030f2bb4();
    }
  }
FUN_035b8350:
  if (in_stack_00000008 == 0) {
    lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_UIElements_ColumnLayout_<>c__DisplayClass42_3_<StretchResizeColumns>b__7__
                              );
    *(long *)(lVar7 + 0x10) = lVar11;
    thunk_FUN_01f51358((long *)(lVar7 + 0x10),lVar11);
    *(int *)(lVar7 + 0x18) = unaff_w24;
    FUN_02b6b2e4();
  }
  goto Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength;
}


