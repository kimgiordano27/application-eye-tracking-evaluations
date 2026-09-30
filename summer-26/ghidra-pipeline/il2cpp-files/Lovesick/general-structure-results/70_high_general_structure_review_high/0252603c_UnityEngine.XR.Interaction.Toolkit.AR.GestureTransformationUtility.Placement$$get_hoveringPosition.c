/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility.Placement$$get_hoveringPosition
ENTRY_POINT: 0252603c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_Placement__get_hoveringPosition
               (void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x23;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined8 uStack000000000000008c;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  FUN_025403f4();
  uVar15 = unaff_x21[3];
  uVar14 = unaff_x21[2];
  plVar13 = (long *)unaff_x21[5];
  uVar11 = unaff_x21[4];
  uVar17 = unaff_x21[1];
  uVar16 = *unaff_x21;
  unaff_x19[3] = uVar15;
  unaff_x19[2] = uVar14;
  unaff_x19[5] = plVar13;
  unaff_x19[4] = uVar11;
  unaff_x19[1] = uVar17;
  *unaff_x19 = uVar16;
  puVar4 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<string>__ctor__;
  FUN_02546e50();
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *(long *)puVar4;
  }
  lVar8 = **(long **)(lVar8 + 0xb8);
  if (lVar8 != 0) {
    lVar12 = *(long *)Method_System_Collections_Generic_List<SuperTextMesh>__ctor__;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 200));
    if ((uVar9 & 1) == 0) {
      *(undefined4 *)(lVar8 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar8 + 0x18);
      *(undefined4 *)(lVar8 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_0179519c(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
      }
    }
    lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    if (lVar8 != 0) {
      lVar12 = *(long *)
                Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
      ;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 200));
      if ((uVar9 & 1) == 0) {
        *(undefined4 *)(lVar8 + 0x18) = 0;
      }
      else {
        iVar1 = *(int *)(lVar8 + 0x18);
        *(undefined4 *)(lVar8 + 0x18) = 0;
        if (0 < iVar1) {
          FUN_0179519c(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
        }
      }
      puVar7 = StringLiteral_4747;
      puVar6 = StringLiteral_3541;
      puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlalh_lane_s16__;
      puVar3 = UnityEngine_UIElements_UIR_Allocator2D_TypeInfo;
      puVar2 = System_Collections_Generic_IList<JsonSchemaModel>_TypeInfo;
      if (*(long *)(unaff_x23 + 0x40) != 0) {
        FUN_01323390(*(long *)(unaff_x23 + 0x40),&stack0x000004d0,*(undefined8 *)StringLiteral_983);
        while (uVar9 = FUN_012b894c(&stack0x00000550,*(undefined8 *)puVar6), (uVar9 & 1) != 0) {
          FUN_00cbb534(&stack0x000004d0,&stack0x00000550,*(undefined8 *)puVar3);
          lVar8 = *(long *)(*(long *)puVar2 + 0x20);
          if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
            lVar8 = FUN_00d5941c();
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
          if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
            lVar8 = FUN_00d5941c();
          }
          pcVar10 = (char *)thunk_FUN_00d32ed4(&stack0x0000054c,*(undefined8 *)(lVar8 + 0x80));
          if (*pcVar10 != '\0') {
            FUN_00cbb824(&stack0x0000054c,
                         *(undefined8 *)Method_System_IO_Compression_DeflateStream_Write__);
            uVar11 = FUN_017a7f78(&stack0x000004d0,0);
            FUN_01600424(*(undefined8 *)Method_System_Nullable<Data_VolumeBoundsData>_get_HasValue__
                         ,uVar11,*(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                         ,0);
          }
          lVar8 = *(long *)puVar4;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar8 = *(long *)puVar4;
          }
          if (**(long **)(lVar8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if ((plVar13 != (long *)0x0) &&
             (*plVar13 != *(long *)SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar13);
          }
          FUN_00bc0bd0(**(long **)(lVar8 + 0xb8),plVar13,*(undefined8 *)puVar5);
          lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_00ac20f0(lVar8,uVar15 & 0xffffffff,*(undefined8 *)puVar7);
        }
        FUN_012b8948(&stack0x00000550,*(undefined8 *)StringLiteral_10519);
        if (*(long *)(unaff_x23 + 0x18) != 0) {
          FUN_02549144(*(long *)(unaff_x23 + 0x18),&stack0x00000598,&stack0x00000590,0);
          lVar8 = *(long *)puVar4;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar8 = *(long *)puVar4;
          }
          lVar12 = *(long *)(unaff_x23 + 0x38);
          uVar11 = **(undefined8 **)(lVar8 + 0xb8);
          uVar14 = (*(undefined8 **)(lVar8 + 0xb8))[1];
          memcpy(&stack0x000004d0,&stack0x00000640,0x70);
          memcpy(&stack0x00000268,&stack0x000005f0,0x44);
          memcpy(&stack0x00000220,&stack0x000005a0,0x44);
          if (lVar12 != 0) {
            in_stack_00000070 = in_stack_00000058;
            uStack000000000000008c = in_stack_00000040;
            in_stack_000000b0 = in_stack_00000050;
            in_stack_000000a8 = in_stack_00000048;
            memcpy(&stack0x000000b8,&stack0x000004d0,0x70);
            in_stack_00000130 = in_stack_00000060;
            in_stack_00000138 = 0;
            in_stack_00000148 = in_stack_00000038;
            in_stack_00000140 = in_stack_00000030;
            memcpy(&stack0x00000150,&stack0x00000268,0x44);
            memcpy(&stack0x00000194,&stack0x00000220,0x44);
            in_stack_000001e8 = in_stack_00000020;
            in_stack_000001d8 = uVar11;
            in_stack_000001e0 = uVar14;
            (**(code **)(lVar12 + 0x18))
                      (*(undefined8 *)(lVar12 + 0x40),&stack0x00000070,
                       *(undefined8 *)(lVar12 + 0x28));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


