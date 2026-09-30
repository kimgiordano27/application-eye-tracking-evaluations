/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.HandGrabUseInteractor$$get_WristToGrabPoseOffset
ENTRY_POINT: 035b816c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035b8414) */
/* WARNING: Removing unreachable block (ram,0x035b865c) */
/* WARNING: Removing unreachable block (ram,0x035b8d48) */

undefined8
Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_WristToGrabPoseOffset
          (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong in_x9;
  int *piVar10;
  int *in_x10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long *unaff_x26;
  long lVar11;
  long in_stack_00000000;
  long in_stack_00000008;
  
  do {
    if ((bool)in_ZR) {
      puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_035b8198;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar3 = (undefined8 *)FUN_01ecb238(unaff_x21,param_3,0);
LAB_035b8198:
                    /* try { // try from 035b8198 to 036b819f has its CatchHandler @ 035b826c */
        uVar4 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
        if ((uVar4 & 1) == 0) {
          if (unaff_x21 != (long *)0x0) {
            lVar8 = *unaff_x21;
            uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar4 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) ==
                    *(long *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                  puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_035b83fc;
                }
                uVar4 = uVar4 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar4 != 0);
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
              uVar5 = FUN_030f4630();
              return uVar5;
            }
LAB_035b8d44:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          unaff_w24 = unaff_w24 + 1;
          plVar6 = (long *)FUN_035b7ae0(in_stack_00000000);
          if (plVar6 == (long *)0x0) goto LAB_035b8d44;
          lVar8 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__) {
                puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_035b8138;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)
                   FUN_01ecb238(plVar6,*(long *)
                                        Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__
                                ,0);
LAB_035b8138:
          unaff_x21 = (long *)(*(code *)*puVar3)(plVar6,puVar3[1]);
          if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
        }
        else {
          lVar8 = *unaff_x21;
          uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar4 != 0) {
                    /* try { // try from 035b81bc to 036b81bf has its CatchHandler @ 035b8268 */
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
                    /* try { // try from 035b81c0 to 036b81cf has its CatchHandler @ 035b827c */
              if (*(long *)(piVar10 + -2) == *unaff_x26) {
                puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_035b81f4;
              }
              uVar4 = uVar4 - 1;
                    /* try { // try from 035b81d0 to 036b81db has its CatchHandler @ 035b8278 */
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined8 *)FUN_01ecb238(unaff_x21,*unaff_x26,0);
LAB_035b81f4:
          lVar8 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
          if (lVar8 == 0) {
            thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_JobWireMesh_Execute_BurstManaged__);
            uVar5 = thunk_FUN_01f117cc();
            uVar7 = thunk_FUN_01efb3a4(
                                      Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_22__
                                      );
            FUN_034b0f60(uVar5,uVar7,0);
            uVar7 = thunk_FUN_01efb3a4(
                                      Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_3__
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar5,uVar7);
          }
          uVar5 = FUN_034bc5d4(lVar8,0);
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c();
          }
          uVar4 = FUN_03583338();
          if ((uVar4 & 1) != 0) {
            if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar4 = (**(code **)(*unaff_x19 + 0x2a8))();
            if ((uVar4 & 1) == 0)
            goto Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength;
          }
          if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar4 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset();
          if ((uVar4 & 1) == 0) {
            if (*(int *)(*(long *)Method_System_Type_MakePointerType__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            lVar11 = FUN_035b768c(uVar5);
            if (unaff_w24 == 0) goto LAB_035b82c8;
LAB_035b8290:
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(char *)(lVar11 + 0x15) != '\0') goto LAB_035b82cc;
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
LAB_035b82cc:
            if (((*(char *)(lVar11 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
               (*(int *)(in_stack_00000008 + 0x18) == unaff_w24)) {
              if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar9 = *(long *)(unaff_x23 + 0x10);
              *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar1 = *(uint *)(unaff_x23 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
                plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                *plVar6 = lVar8;
                thunk_FUN_01f51358(plVar6,lVar8);
              }
              else {
                FUN_030f2bb4();
              }
            }
          }
          if (in_stack_00000008 == 0) {
            lVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_UnityEngine_UIElements_ColumnLayout_<>c__DisplayClass42_3_<StretchResizeColumns>b__7__
                                      );
            *(long *)(lVar8 + 0x10) = lVar11;
            thunk_FUN_01f51358((long *)(lVar8 + 0x10),lVar11);
            *(int *)(lVar8 + 0x18) = unaff_w24;
            FUN_02b6b2e4();
          }
        }
Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength:
        param_1 = *unaff_x21;
        param_3 = *unaff_x20;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
}


