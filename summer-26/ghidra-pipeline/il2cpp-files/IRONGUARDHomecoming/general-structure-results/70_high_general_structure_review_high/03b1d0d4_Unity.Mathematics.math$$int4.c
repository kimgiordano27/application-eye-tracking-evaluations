/*
FUNCTION_NAME: Unity.Mathematics.math$$int4
ENTRY_POINT: 03b1d0d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_4;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Unity_Mathematics_math__int4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long lVar11;
  bool bVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  thunk_FUN_01efb3a4(Method_System_IO_FileStatus_EnsureStatInitialized__);
  thunk_FUN_01efb3a4(Method_System_IO_FileStream__ctor__);
  thunk_FUN_01efb3a4(Method_System_IO_FileStream__ctor__);
  thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo_IsSuffix__);
  thunk_FUN_01efb3a4(StringLiteral_11573);
  thunk_FUN_01efb3a4(
                    Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponents<DOTweenAnimation>__);
  thunk_FUN_01efb3a4(
                    Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__
                    );
  thunk_FUN_01efb3a4(
                    Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                    );
  *(undefined1 *)(unaff_x20 + 0x364) = 1;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  lVar11 = *(long *)(unaff_x19 + 0x10);
  if (lVar11 == 0) {
    lVar11 = *(long *)StringLiteral_11573;
  }
  else {
    lVar10 = *(long *)(unaff_x19 + 200);
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x50) != unaff_x19)) {
      uVar7 = FUN_0340eec4(*(undefined8 *)(lVar10 + 0x10),0);
      if ((uVar7 & 1) == 0) {
        if (*(long *)(unaff_x19 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar11 = FUN_0340ebc0(*(undefined8 *)(*(long *)(unaff_x19 + 200) + 0x10),
                              *(undefined8 *)
                               Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                              ,*(undefined8 *)(unaff_x19 + 0x10),0);
      }
      else {
        lVar11 = *(long *)(unaff_x19 + 0x10);
      }
    }
  }
  _in_stack_00000020 = FUN_03b1c868();
  puVar6 = Method_UnityEngine_GameObject_GetComponents<DOTweenAnimation>__;
  puVar5 = Method_System_IO_FileStream__ctor__;
  puVar4 = Method_System_IO_FileStream__ctor__;
  puVar3 = Method_System_IO_FileStatus_EnsureStatInitialized__;
  puVar2 = Method_System_IO_FileInfo_get_Length__;
  puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__;
  if (0 < in_stack_00000020._12_4_) {
    uVar8 = FUN_03405678(lVar11,*(undefined8 *)
                                 Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__
                         ,0);
    FUN_02617978(&stack0x00000008,&stack0x00000020,*(undefined8 *)puVar5);
    bVar12 = true;
    while( true ) {
      uVar7 = FUN_02c7bc78(&stack0x00000008,*(undefined8 *)puVar3);
      if ((uVar7 & 1) == 0) break;
      lVar11 = FUN_02c7bca4(&stack0x00000008,*(undefined8 *)puVar4);
      if (!bVar12) {
        uVar8 = FUN_03405678(uVar8,*(undefined8 *)puVar6,0);
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar9 = FUN_03b5cc20(lVar11,0);
      uVar8 = FUN_03405678(uVar8,uVar9,0);
      bVar12 = false;
    }
    FUN_02c7bc74(&stack0x00000008,*(undefined8 *)puVar2);
    lVar11 = FUN_03405678(uVar8,*(undefined8 *)puVar1,0);
  }
  return lVar11;
}


