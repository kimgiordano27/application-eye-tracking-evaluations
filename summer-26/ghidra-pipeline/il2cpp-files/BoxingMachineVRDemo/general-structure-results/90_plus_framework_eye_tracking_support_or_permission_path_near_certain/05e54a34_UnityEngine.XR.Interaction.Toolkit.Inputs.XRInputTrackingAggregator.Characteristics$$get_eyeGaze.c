/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator.Characteristics$$get_eyeGaze
ENTRY_POINT: 05e54a34
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 109
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_9;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator_Characteristics__get_eyeGaze
               (void)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *unaff_x19;
  undefined8 uVar13;
  bool bVar14;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lStack0000000000000048;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long *in_stack_00000100;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  long *in_stack_00000120;
  
  FUN_02d6084c();
  FUN_02d6084c(PTR_DAT_0676d590);
  FUN_02d6084c(PTR_DAT_0676d588);
  FUN_02d6084c(Method_System_Collections_ArrayList_CopyTo__);
  FUN_02d6084c(Method_System_Collections_ArrayList_CopyTo__);
  FUN_02d6084c(PTR_DAT_0675e638);
  *(undefined1 *)(unaff_x23 + 0x74e) = 1;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = (long *)0x0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  uVar6 = thunk_FUN_02d9d534(*unaff_x22);
  FUN_048914a8(uVar6,*unaff_x19);
  puVar3 = PTR_DAT_06767c90;
  **(undefined8 **)(*(long *)PTR_DAT_06767c90 + 0xb8) = uVar6;
  thunk_FUN_02dd37b4(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar6);
  uVar6 = thunk_FUN_02d9d534(*unaff_x21);
  FUN_03aabc60(uVar6,*unaff_x20);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
  *puVar7 = uVar6;
  thunk_FUN_02dd37b4(puVar7,uVar6);
  lVar11 = *(long *)(*(long *)puVar3 + 0xb8);
  if (*(long *)(lVar11 + 0x10) == 0) {
    uVar6 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_ArrayList_CopyTo__);
    FUN_05e50fe8();
    puVar3 = PTR_DAT_06767c90;
    puVar7 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_06767c90 + 0xb8) + 0x10);
    *puVar7 = uVar6;
    thunk_FUN_02dd37b4(puVar7,uVar6);
    lVar11 = *(long *)(*(long *)puVar3 + 0xb8);
  }
  puVar3 = Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<SharedInstanceHandle>__;
  lVar11 = *(long *)(lVar11 + 0x18);
  if (lVar11 != 0) {
    iVar2 = *(int *)(lVar11 + 0x18);
    *(undefined4 *)(lVar11 + 0x18) = 0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (0 < iVar2) {
      FUN_05029664(*(undefined8 *)(lVar11 + 0x10),0,iVar2,0);
    }
    puVar4 = Method_System_Collections_ArrayList_CopyTo__;
    uVar6 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_05015c2c(uVar6,0);
    puVar3 = PTR_DAT_06767c90;
    uVar13 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_06767c90 + 0xb8) + 0x18);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)puVar4);
    }
    FUN_05e698d0(uVar6,uVar13,0,0);
    lVar11 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
    if (lVar11 != 0) {
      FUN_03aaceb0(&stack0x00000110,lVar11,*(undefined8 *)PTR_DAT_0677fd30);
      in_stack_000000f8 = in_stack_00000118;
      in_stack_000000f0 = in_stack_00000110;
      in_stack_00000100 = in_stack_00000120;
      puVar7 = (undefined8 *)PTR_DAT_0677fd10;
      do {
        do {
          uVar8 = FUN_04a7a4a0(&stack0x000000f0,*puVar7);
          plVar5 = in_stack_00000100;
          if ((uVar8 & 1) == 0) {
            FUN_04a7a49c(&stack0x000000f0,*(undefined8 *)PTR_DAT_0677fd08);
            return;
          }
          uVar6 = *(undefined8 *)Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<float>__;
          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar6 = FUN_05015c2c(uVar6,0);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8(uVar6,uVar6);
          }
          lVar11 = (**(code **)(*plVar5 + 0x218))(plVar5,uVar6,0,*(undefined8 *)(*plVar5 + 0x220));
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
        } while ((int)*(ulong *)(lVar11 + 0x18) < 1);
        uVar8 = 0;
        uVar12 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
        do {
          if (uVar12 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          plVar19 = *(long **)(lVar11 + 0x20 + uVar8 * 8);
          if (plVar19 == (long *)0x0) {
LAB_05e54ce0:
            bVar14 = true;
LAB_05e54ce4:
            plVar9 = (long *)(**(code **)(*plVar5 + 0x2f8))(plVar5,*(undefined8 *)(*plVar5 + 0x300))
            ;
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            lStack0000000000000048 =
                 (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
            if (!bVar14) {
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              goto LAB_05e54d48;
            }
            bVar14 = false;
LAB_05e54d5c:
            lVar10 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
            if (bVar14) goto LAB_05e54d74;
            lVar15 = *(long *)PTR_DAT_0675e638;
            lVar16 = lVar15;
            lVar17 = lVar15;
            lVar18 = lVar15;
            if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
          }
          else {
            if (*plVar19 !=
                *(long *)
                 Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<SmallIntegerArray>__) {
              plVar19 = (long *)0x0;
              goto LAB_05e54ce0;
            }
            uVar12 = FUN_04e8cf70(plVar19[2],0);
            if ((uVar12 & 1) != 0) {
              bVar14 = false;
              goto LAB_05e54ce4;
            }
            lStack0000000000000048 = plVar19[2];
LAB_05e54d48:
            uVar12 = FUN_04e8cf70(plVar19[3],0);
            if ((uVar12 & 1) != 0) {
              bVar14 = true;
              goto LAB_05e54d5c;
            }
            lVar10 = plVar19[3];
LAB_05e54d74:
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            uVar12 = FUN_04e8cf70(plVar19[4],0);
            plVar1 = (long *)PTR_DAT_0675e638;
            plVar9 = (long *)PTR_DAT_0675e638;
            if ((uVar12 & 1) == 0) {
              plVar9 = plVar19 + 4;
            }
            lVar15 = *plVar9;
            uVar12 = FUN_04e8cf70(plVar19[5],0);
            plVar9 = plVar1;
            if ((uVar12 & 1) == 0) {
              plVar9 = plVar19 + 5;
            }
            lVar16 = *plVar9;
            uVar12 = FUN_04e8cf70(plVar19[6],0);
            plVar9 = plVar1;
            if ((uVar12 & 1) == 0) {
              plVar9 = plVar19 + 6;
            }
            lVar18 = *plVar9;
            uVar12 = FUN_04e8cf70(plVar19[7],0);
            if ((uVar12 & 1) == 0) {
              plVar1 = plVar19 + 7;
            }
            lVar17 = *plVar1;
          }
          uVar6 = (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
          if (*(int *)(*(long *)PTR_DAT_06767840 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer__StabilizeOptimalRotation
                    (&stack0x000000a0,lStack0000000000000048,lVar10,uVar6,lVar15,lVar16,lVar18,
                     lVar17);
          if (**(long **)(*(long *)PTR_DAT_06767c90 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar12 = FUN_04892298(**(long **)(*(long *)PTR_DAT_06767c90 + 0xb8),in_stack_000000b0,
                                *(undefined8 *)Method_System_Collections_ArrayList_Adapter__);
          uVar6 = in_stack_000000b0;
          if ((uVar12 & 1) != 0) {
            uVar13 = thunk_FUN_02dc61f4(Method_System_Collections_ArrayList_Insert__);
            uVar6 = FUN_04e83184(uVar13,uVar6,0);
            thunk_FUN_02dc61f4(PTR_DAT_06763b78);
            uVar13 = thunk_FUN_02d9d534();
            FUN_04f7d8e0(uVar13,uVar6,0);
            uVar6 = thunk_FUN_02dc61f4(Method_System_Collections_ArrayList_InsertRange__);
                    /* WARNING: Subroutine does not return */
            FUN_02d609b4(uVar13,uVar6);
          }
          lVar10 = **(long **)(*(long *)PTR_DAT_06767c90 + 0xb8);
          memcpy(&stack0x00000050,&stack0x000000a0,0x50);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar13 = *(undefined8 *)Method_System_Collections_ArrayList__ctor__;
          memcpy(&stack0x00000110,&stack0x00000050,0x50);
          FUN_04891f44(lVar10,uVar6,&stack0x00000110,uVar13);
          uVar8 = uVar8 + 1;
          uVar12 = (ulong)*(uint *)(lVar11 + 0x18);
          puVar7 = (undefined8 *)PTR_DAT_0677fd10;
        } while ((long)uVar8 < (long)(int)*(uint *)(lVar11 + 0x18));
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


