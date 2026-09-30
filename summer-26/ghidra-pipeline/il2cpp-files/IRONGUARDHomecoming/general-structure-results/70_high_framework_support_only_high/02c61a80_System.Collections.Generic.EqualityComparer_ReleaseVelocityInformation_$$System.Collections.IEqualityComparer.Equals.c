/*
FUNCTION_NAME: System.Collections.Generic.EqualityComparer<ReleaseVelocityInformation>$$System.Collections.IEqualityComparer.Equals
ENTRY_POINT: 02c61a80
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


/* WARNING: Removing unreachable block (ram,0x02c61d28) */
/* WARNING: Removing unreachable block (ram,0x02c61c18) */
/* WARNING: Removing unreachable block (ram,0x02c61d30) */

void System_Collections_Generic_EqualityComparer<ReleaseVelocityInformation>__System_Collections_IEqualityComparer_Equals
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  long in_stack_00000020;
  long in_stack_00000038;
  
  do {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02c61a34 with catch @ 02c61a80
                        */
    FUN_040a5fcc(param_1,param_2,param_3);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02c619f0 with catch @ 02c61a88
                       catch(type#1 @ 042b3198) { ... } // from try @ 02c61a64 with catch @ 02c61a88
                        */
    if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
                    /* try { // try from 02c61a90 to 02d61a93 has its CatchHandler @ 02c61b4c */
    lVar6 = *(long *)(in_stack_00000038 + 0x10);
                    /* try { // try from 02c61a94 to 02d61aab has its CatchHandler @ 02c618b0 */
    lVar9 = *unaff_x28;
    *(int *)(in_stack_00000038 + 0x1c) = *(int *)(in_stack_00000038 + 0x1c) + 1;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(in_stack_00000038 + 0x18);
                    /* try { // try from 02c61aac to 02d61ac3 has its CatchHandler @ 02c61b3c */
    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(in_stack_00000038 + 0x18) = uVar2 + 1;
      puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
      *puVar7 = unaff_x24;
                    /* try { // try from 02c61ac4 to 02d61b2b has its CatchHandler @ 02c618b0 */
      thunk_FUN_01f51358(puVar7,unaff_x24);
    }
    else {
      FUN_030f2bb4(in_stack_00000038,unaff_x24,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    lVar6 = in_stack_00000020;
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*unaff_x23 + 0x1a8))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x1b0));
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)FUN_0359d458();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
                    /* try { // try from 02c61b2c to 02d61b3b has its CatchHandler @ 02c61b3c */
                    /* catch() { ... } // from try @ 02c61aac with catch @ 02c61b3c
                       catch() { ... } // from try @ 02c61b2c with catch @ 02c61b3c */
                    /* try { // try from 02c61b40 to 02d61b43 has its CatchHandler @ 02c61b4c */
    if (*(long *)(*plVar4 + 0x40) != *(long *)(*unaff_x26 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
                    /* try { // try from 02c61b44 to 02d61b4f has its CatchHandler @ 02c618b0 */
    puVar5 = (undefined4 *)thunk_FUN_01f11920();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02c61a90 with catch @ 02c61b4c
                       catch(type#2 @ 00000000) { ... } // from try @ 02c61b40 with catch @ 02c61b4c
                        */
    uVar1 = *puVar5;
    lVar9 = *(long *)(lVar6 + 0x10);
    lVar10 = *unaff_x27;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(lVar6 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
    }
    else {
      FUN_030ba904(lVar6,uVar1,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    lVar6 = *unaff_x22;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x29) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02c61958;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_02c61958:
    uVar8 = (*(code *)*puVar7)();
    if ((uVar8 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_02c61c0c;
      lVar6 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_02c61be4;
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *unaff_x22;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)Method_System_Linq_Enumerable_Sum__) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02c619bc;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_02c619bc:
    unaff_x23 = (long *)(*(code *)*puVar7)();
    lVar6 = FUN_022cd6f8(unaff_x23,*(undefined8 *)Method_System_Linq_Enumerable_Min__);
    if (lVar6 == 0) {
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = **(long **)(lVar6 + 0xb8);
      uVar3 = (**(code **)(*unaff_x23 + 0x1a8))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x1b0));
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar3,uVar3);
      }
      param_2 = FUN_03a136cc(lVar6,uVar3,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_CheckExactArgumentCount__
                             ,0);
    }
    else {
      param_2 = *(undefined8 *)(lVar6 + 0x18);
    }
    param_1 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Linq_Enumerable_Min__);
    param_3 = 0;
    unaff_x24 = param_1;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_02c61c00;
    }
  }
LAB_02c61be4:
  puVar7 = (undefined8 *)FUN_01ecb238();
LAB_02c61c00:
  (*(code *)*puVar7)();
LAB_02c61c0c:
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
    FUN_02c613ac(in_stack_00000008,uVar3);
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


