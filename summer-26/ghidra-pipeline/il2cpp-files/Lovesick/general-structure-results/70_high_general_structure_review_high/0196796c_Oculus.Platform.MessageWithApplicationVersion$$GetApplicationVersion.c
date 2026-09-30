/*
FUNCTION_NAME: Oculus.Platform.MessageWithApplicationVersion$$GetApplicationVersion
ENTRY_POINT: 0196796c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_4
*/


void Oculus_Platform_MessageWithApplicationVersion__GetApplicationVersion(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
                    /* try { // try from 01967970 to 01a67973 has its CatchHandler @ 01967bfc */
                    /* try { // try from 01967980 to 01a67987 has its CatchHandler @ 01967c04 */
                    /* try { // try from 01967990 to 01a6799b has its CatchHandler @ 01967c00 */
  if ((DAT_0377a2ac & 1) == 0) {
                    /* try { // try from 0196799c to 01a67bcf has its CatchHandler @ 019671c8 */
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_UIR_LinkedPoolItem<BestFitAllocator_Block>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_4611);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonWriter_<<InternalWriteEndAsync>g__AwaitEnd_11_2>d>__
                      );
    thunk_FUN_00d48444(Method_OVRScene_ValidateRequestString__);
    thunk_FUN_00d48444(PTR_DAT_033f1008);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WitUnityRequest_<>c__DisplayClass19_0_<<HandleSend>b__0>d>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f3c20);
    thunk_FUN_00d48444(Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector2>b__16_0__);
    DAT_0377a2ac = 1;
  }
  puVar8 = StringLiteral_4611;
  puVar7 = Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector2>b__16_0__;
  puVar6 = Method_OVRScene_ValidateRequestString__;
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WitUnityRequest_<>c__DisplayClass19_0_<<HandleSend>b__0>d>__
  ;
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonWriter_<<InternalWriteEndAsync>g__AwaitEnd_11_2>d>__
  ;
  puVar3 = Method_UnityEngine_UIElements_UIR_LinkedPoolItem<BestFitAllocator_Block>__ctor__;
  puVar2 = PTR_DAT_033f3c20;
  puVar1 = PTR_DAT_033f1008;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000020 = 0;
  if (*(char *)(param_1 + 0x40) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_01323390(*(long *)(param_1 + 0x20),&stack0x00000008,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector2>b__16_0__);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar9 = FUN_012b894c(&stack0x00000020,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
      plVar10 = (long *)FUN_00bf85ac(&stack0x00000020,*(undefined8 *)puVar6);
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_011c181c(lVar11,param_1,*(undefined8 *)puVar1,0);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar14 = *plVar10;
      lVar13 = *(long *)puVar2;
      uVar9 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar9 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar12 = (undefined8 *)(lVar14 + (long)(*piVar15 + 8) * 0x10 + 0x138);
            goto LAB_01967b08;
          }
          uVar9 = uVar9 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar9 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar10,lVar13,8);
LAB_01967b08:
      (*(code *)*puVar12)(plVar10,lVar11,puVar12[1]);
    }
    FUN_012b8948(&stack0x00000020,*(undefined8 *)puVar8);
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_01323390(*(long *)(param_1 + 0x30),&stack0x00000008,*(undefined8 *)puVar7);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      do {
        uVar9 = FUN_012b894c(&stack0x00000020,*(undefined8 *)puVar4);
        if ((uVar9 & 1) == 0) {
          FUN_012b8948(&stack0x00000020,*(undefined8 *)puVar8);
          *(undefined8 *)(param_1 + 0x38) = 0;
          return;
        }
        plVar10 = (long *)FUN_00bf85ac(&stack0x00000020,*(undefined8 *)puVar6);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_011c181c(lVar11,param_1,*(undefined8 *)puVar5,0);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar14 = *plVar10;
        lVar13 = *(long *)puVar2;
        uVar9 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar9 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar13) {
              puVar12 = (undefined8 *)(lVar14 + (long)(*piVar15 + 8) * 0x10 + 0x138);
              goto LAB_01967be4;
            }
            uVar9 = uVar9 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar9 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(plVar10,lVar13,8);
LAB_01967be4:
        (*(code *)*puVar12)(plVar10,lVar11,puVar12[1]);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


