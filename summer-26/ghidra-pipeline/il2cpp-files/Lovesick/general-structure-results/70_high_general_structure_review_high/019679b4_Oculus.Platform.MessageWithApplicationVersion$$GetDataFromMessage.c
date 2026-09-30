/*
FUNCTION_NAME: Oculus.Platform.MessageWithApplicationVersion$$GetDataFromMessage
ENTRY_POINT: 019679b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_3
*/


void Oculus_Platform_MessageWithApplicationVersion__GetDataFromMessage(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(Method_OVRScene_ValidateRequestString__);
  thunk_FUN_00d48444(PTR_DAT_033f1008);
  thunk_FUN_00d48444(
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WitUnityRequest_<>c__DisplayClass19_0_<<HandleSend>b__0>d>__
                    );
  thunk_FUN_00d48444(PTR_DAT_033f3c20);
  thunk_FUN_00d48444(Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector2>b__16_0__);
  *(undefined1 *)(unaff_x20 + 0x2ac) = 1;
  puVar6 = StringLiteral_4611;
  puVar5 = Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector2>b__16_0__;
  puVar4 = Method_OVRScene_ValidateRequestString__;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonWriter_<<InternalWriteEndAsync>g__AwaitEnd_11_2>d>__
  ;
  puVar2 = Method_UnityEngine_UIElements_UIR_LinkedPoolItem<BestFitAllocator_Block>__ctor__;
  puVar1 = PTR_DAT_033f3c20;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000020 = 0;
  if (*(char *)(unaff_x19 + 0x40) == '\0') {
    return;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_01323390(*(long *)(unaff_x19 + 0x20),&stack0x00000008,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector2>b__16_0__);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar7 = FUN_012b894c(&stack0x00000020,*(undefined8 *)puVar3), (uVar7 & 1) != 0) {
      plVar8 = (long *)FUN_00bf85ac(&stack0x00000020,*(undefined8 *)puVar4);
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_011c181c(lVar9);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar12 = *plVar8;
      lVar11 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar11) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 8) * 0x10 + 0x138);
            goto LAB_01967b08;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar8,lVar11,8);
LAB_01967b08:
      (*(code *)*puVar10)(plVar8,lVar9,puVar10[1]);
    }
    FUN_012b8948(&stack0x00000020,*(undefined8 *)puVar6);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_01323390(*(long *)(unaff_x19 + 0x30),&stack0x00000008,*(undefined8 *)puVar5);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      do {
        uVar7 = FUN_012b894c(&stack0x00000020,*(undefined8 *)puVar3);
        if ((uVar7 & 1) == 0) {
          FUN_012b8948(&stack0x00000020,*(undefined8 *)puVar6);
          *(undefined8 *)(unaff_x19 + 0x38) = 0;
          return;
        }
        plVar8 = (long *)FUN_00bf85ac(&stack0x00000020,*(undefined8 *)puVar4);
        lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_011c181c(lVar9);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *plVar8;
        lVar11 = *(long *)puVar1;
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar11) {
              puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 8) * 0x10 + 0x138);
              goto LAB_01967be4;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar8,lVar11,8);
LAB_01967be4:
        (*(code *)*puVar10)(plVar8,lVar9,puVar10[1]);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


