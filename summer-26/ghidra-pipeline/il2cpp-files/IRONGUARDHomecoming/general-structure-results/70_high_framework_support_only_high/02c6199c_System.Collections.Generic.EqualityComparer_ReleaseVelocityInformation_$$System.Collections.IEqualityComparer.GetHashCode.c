/*
FUNCTION_NAME: System.Collections.Generic.EqualityComparer<ReleaseVelocityInformation>$$System.Collections.IEqualityComparer.GetHashCode
ENTRY_POINT: 02c6199c
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

void System_Collections_Generic_EqualityComparer<ReleaseVelocityInformation>__System_Collections_IEqualityComparer_GetHashCode
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong in_x9;
  long lVar9;
  long lVar10;
  int *in_x10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  undefined8 uVar12;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  long in_stack_00000020;
  long in_stack_00000038;
  
code_r0x02c6199c:
  if (!(bool)in_ZR) goto LAB_02c61988;
LAB_02c619a0:
  puVar3 = (undefined8 *)FUN_01ecb238();
  do {
    plVar4 = (long *)(*(code *)*puVar3)();
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02c61908 with catch @ 02c619c8
                       try { // try from 02c619c8 to 02d619ef has its CatchHandler @ 02c618b0 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02c61950 with catch @ 02c619d4
                        */
    lVar5 = FUN_022cd6f8(plVar4,*(undefined8 *)Method_System_Linq_Enumerable_Min__);
    if (lVar5 == 0) {
                    /* try { // try from 02c619f0 to 02d61a07 has its CatchHandler @ 02c61a88 */
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
                    /* try { // try from 02c61a0c to 02d61a0f has its CatchHandler @ 02c61a78 */
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
                    /* try { // try from 02c61a1c to 02d61a33 has its CatchHandler @ 02c61a7c */
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = **(long **)(lVar5 + 0xb8);
                    /* try { // try from 02c61a34 to 02d61a4f has its CatchHandler @ 02c61a80 */
      uVar12 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar12,uVar12);
      }
                    /* try { // try from 02c61a50 to 02d61a63 has its CatchHandler @ 02c618b0 */
      uVar12 = FUN_03a136cc(lVar5,uVar12,
                            *(undefined8 *)
                             Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_CheckExactArgumentCount__
                            ,0);
    }
    else {
      uVar12 = *(undefined8 *)(lVar5 + 0x18);
    }
                    /* try { // try from 02c61a64 to 02d61a73 has its CatchHandler @ 02c61a88 */
    uVar6 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Linq_Enumerable_Min__);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02c61a0c with catch @ 02c61a78
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02c61a1c with catch @ 02c61a7c
                        */
    FUN_040a5fcc(uVar6,uVar12,0);
    if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(in_stack_00000038 + 0x10);
    lVar9 = *unaff_x28;
    *(int *)(in_stack_00000038 + 0x1c) = *(int *)(in_stack_00000038 + 0x1c) + 1;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(in_stack_00000038 + 0x18);
    if (uVar2 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(in_stack_00000038 + 0x18) = uVar2 + 1;
      puVar3 = (undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
      *puVar3 = uVar6;
      thunk_FUN_01f51358(puVar3,uVar6);
    }
    else {
      FUN_030f2bb4(in_stack_00000038,uVar6,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    lVar5 = in_stack_00000020;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)FUN_0359d458();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar4 + 0x40) != *(long *)(*unaff_x26 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    puVar7 = (undefined4 *)thunk_FUN_01f11920();
    uVar1 = *puVar7;
    lVar9 = *(long *)(lVar5 + 0x10);
    lVar10 = *unaff_x27;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(lVar5 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
    }
    else {
      FUN_030ba904(lVar5,uVar1,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    lVar5 = *unaff_x22;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x29) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02c61958;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02c61958:
    uVar8 = (*(code *)*puVar3)();
    if ((uVar8 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_02c61c0c;
      lVar5 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 == 0) goto LAB_02c61be4;
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    param_1 = *unaff_x22;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    param_3 = *(long *)Method_System_Linq_Enumerable_Sum__;
    if (in_x9 == 0) goto LAB_02c619a0;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_02c61988:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x02c6199c;
    }
    puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_02c61c00;
    }
  }
LAB_02c61be4:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02c61c00:
  (*(code *)*puVar3)();
LAB_02c61c0c:
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar12 = FUN_030f4630(in_stack_00000038,
                        *(undefined8 *)Method_Unity_VisualScripting_EqualityComparison_Equal__);
  *(undefined8 *)(in_stack_00000008 + 0x60) = uVar12;
  thunk_FUN_01f51358();
  if (in_stack_00000020 != 0) {
    uVar12 = FUN_030bc2e0(in_stack_00000020,
                          *(undefined8 *)
                           Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Item__
                         );
    FUN_02c613ac(in_stack_00000008,uVar12);
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


