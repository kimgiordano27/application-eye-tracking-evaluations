/*
FUNCTION_NAME: System.Collections.Generic.EqualityComparer<RenderState>$$get_Default
ENTRY_POINT: 02c62690
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02c629ac) */
/* WARNING: Removing unreachable block (ram,0x02c6288c) */
/* WARNING: Removing unreachable block (ram,0x02c629b4) */

void System_Collections_Generic_EqualityComparer<RenderState>__get_Default(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 *puVar6;
  byte in_w8;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long lVar12;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  long in_stack_00000020;
  long in_stack_00000038;
  
code_r0x02c62690:
  if ((in_w8 & 1) == 0) {
    param_1 = FUN_01ecaf44();
  }
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar12 = **(long **)(param_1 + 0xb8);
  uVar3 = (**(code **)(*unaff_x23 + 0x1a8))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x1b0));
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar3,uVar3);
  }
  uVar3 = FUN_03a136cc(lVar12,uVar3,
                       *(undefined8 *)
                        Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_CheckExactArgumentCount__
                       ,0);
  do {
    uVar4 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Linq_Enumerable_Min__);
    FUN_040a5fcc(uVar4,uVar3,0);
    if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar12 = *(long *)(in_stack_00000038 + 0x10);
    lVar9 = *unaff_x28;
    *(int *)(in_stack_00000038 + 0x1c) = *(int *)(in_stack_00000038 + 0x1c) + 1;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(in_stack_00000038 + 0x18);
    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(in_stack_00000038 + 0x18) = uVar2 + 1;
      puVar7 = (undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
      *puVar7 = uVar4;
      thunk_FUN_01f51358(puVar7,uVar4);
    }
    else {
      FUN_030f2bb4(in_stack_00000038,uVar4,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    lVar12 = in_stack_00000020;
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*unaff_x23 + 0x1a8))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x1b0));
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar5 = (long *)FUN_0359d458();
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar5 + 0x40) != *(long *)(*unaff_x26 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    puVar6 = (undefined4 *)thunk_FUN_01f11920();
    uVar1 = *puVar6;
    lVar9 = *(long *)(lVar12 + 0x10);
    lVar10 = *unaff_x27;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(lVar12 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
    }
    else {
      FUN_030ba904(lVar12,uVar1,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    lVar12 = *unaff_x22;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x29) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02c625cc;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_02c625cc:
    uVar8 = (*(code *)*puVar7)();
    if ((uVar8 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_02c62880;
      lVar12 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar8 == 0) goto LAB_02c62858;
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      goto LAB_02c62840;
    }
    lVar12 = *unaff_x22;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)Method_System_Linq_Enumerable_Sum__) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02c62630;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_02c62630:
    unaff_x23 = (long *)(*(code *)*puVar7)();
    lVar12 = FUN_022cd6f8(unaff_x23,*(undefined8 *)Method_System_Linq_Enumerable_Min__);
    if (lVar12 == 0) break;
    uVar3 = *(undefined8 *)(lVar12 + 0x18);
  } while( true );
  lVar12 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01ecaf44();
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  param_1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
  in_w8 = *(byte *)(param_1 + 0x135);
  goto code_r0x02c62690;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
LAB_02c62840:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_02c62874;
    }
  }
LAB_02c62858:
  puVar7 = (undefined8 *)FUN_01ecb238();
LAB_02c62874:
  (*(code *)*puVar7)();
LAB_02c62880:
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = FUN_030f4630(in_stack_00000038,
                       *(undefined8 *)Method_Unity_VisualScripting_EqualityComparison_Equal__);
  *(undefined8 *)(in_stack_00000008 + 0x60) = uVar3;
  thunk_FUN_01f51358();
  if (in_stack_00000020 != 0) {
    uVar3 = FUN_030bc2e0(in_stack_00000020,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Item__
                        );
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30))
              (in_stack_00000008,uVar3);
    FUN_025ecba8(&stack0x00000010,
                 *(undefined8 *)
                  Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_CheckCase__);
    FUN_025ecba8(&stack0x00000028,
                 *(undefined8 *)Method_Unity_VisualScripting_EqualityComparison_NotEqual__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


