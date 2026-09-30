/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.HandGrabUseInteractor$$InteractableSelected
ENTRY_POINT: 035b8384
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035b8414) */
/* WARNING: Removing unreachable block (ram,0x035b865c) */
/* WARNING: Removing unreachable block (ram,0x035b8d48) */

undefined8 Oculus_Interaction_HandGrab_HandGrabUseInteractor__InteractableSelected(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
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
  long lVar11;
  long in_stack_00000000;
  long in_stack_00000008;
  
  do {
    FUN_02b6b2e4();
Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength:
    do {
      lVar7 = *unaff_x21;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x20) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_035b8198;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(unaff_x21,*unaff_x20,0);
LAB_035b8198:
      uVar9 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
      if ((uVar9 & 1) == 0) {
        if (unaff_x21 != (long *)0x0) {
          lVar7 = *unaff_x21;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_035b83fc;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
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
        }
        else {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          unaff_w24 = unaff_w24 + 1;
          plVar5 = (long *)FUN_035b7ae0(in_stack_00000000);
          if (plVar5 != (long *)0x0) {
            lVar7 = *plVar5;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) ==
                    *(long *)Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__)
                {
                  puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_035b8138;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar3 = (undefined8 *)
                     FUN_01ecb238(plVar5,*(long *)
                                          Method_Oculus_Interaction_UnityCanvas_CanvasCylinder_<Start>b__28_0__
                                  ,0);
LAB_035b8138:
            unaff_x21 = (long *)(*(code *)*puVar3)(plVar5,puVar3[1]);
            if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            goto Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *unaff_x21;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_035b81f4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(unaff_x21,*unaff_x26,0);
LAB_035b81f4:
      lVar7 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
      if (lVar7 == 0) {
        thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_JobWireMesh_Execute_BurstManaged__);
        uVar4 = thunk_FUN_01f117cc();
        uVar6 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_22__
                                  );
        FUN_034b0f60(uVar4,uVar6,0);
        uVar6 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_3__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar4,uVar6);
      }
      uVar4 = FUN_034bc5d4(lVar7,0);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar9 = FUN_03583338();
      if ((uVar9 & 1) != 0) {
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar9 = (**(code **)(*unaff_x19 + 0x2a8))();
        if ((uVar9 & 1) == 0)
        goto Oculus_Interaction_HandGrab_HandGrabUseInteractor__get_FingersStrength;
      }
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar9 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset();
      if ((uVar9 & 1) == 0) {
        if (*(int *)(*(long *)Method_System_Type_MakePointerType__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar11 = FUN_035b768c(uVar4);
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
      }
    } while (in_stack_00000008 != 0);
    lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_UIElements_ColumnLayout_<>c__DisplayClass42_3_<StretchResizeColumns>b__7__
                              );
    *(long *)(lVar7 + 0x10) = lVar11;
    thunk_FUN_01f51358((long *)(lVar7 + 0x10),lVar11);
    *(int *)(lVar7 + 0x18) = unaff_w24;
  } while( true );
}


