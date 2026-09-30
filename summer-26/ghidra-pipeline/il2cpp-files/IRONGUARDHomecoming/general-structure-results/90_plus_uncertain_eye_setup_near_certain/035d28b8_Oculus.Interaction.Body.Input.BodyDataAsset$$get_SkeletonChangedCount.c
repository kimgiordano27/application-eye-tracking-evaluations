/*
FUNCTION_NAME: Oculus.Interaction.Body.Input.BodyDataAsset$$get_SkeletonChangedCount
ENTRY_POINT: 035d28b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035d2ab4) */

void Oculus_Interaction_Body_Input_BodyDataAsset__get_SkeletonChangedCount(void)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  int iVar7;
  long unaff_x21;
  long *plVar8;
  uint unaff_w23;
  int unaff_w24;
  undefined8 uVar9;
  long *unaff_x25;
  int unaff_w27;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000018;
  
  if (unaff_w24 < 0) {
    plVar8 = *(long **)(unaff_x19 + 0x10);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_035d2c50;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar8,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_035d2c50:
      (*(code *)*puVar4)(plVar8,puVar4[1]);
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990();
  }
  if (unaff_w27 != 0xb) {
    if (unaff_w27 == 10) goto LAB_035d2a4c;
    if (unaff_w27 != 0) {
      return;
    }
  }
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  thunk_FUN_01f51358(unaff_x19 + 0x10,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  in_stack_00000018._4_1_ = '\0';
  FUN_035ce230(uVar9,(long)&stack0x00000018 + 4);
  uVar3 = FUN_035d1d44();
  if ((uVar3 & 1) == 0) {
    iVar7 = 0xd;
  }
  else {
    if (*(int *)(*(long *)
                  Method_System_Dynamic_Utils_ContractUtils_RequiresNotNullItems<CatchBlock>__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_035cd7fc(unaff_x19 + 8);
    unaff_w23 = 0;
    iVar7 = 10;
  }
  if (!bVar1 && in_stack_00000018._4_1_ != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar9);
  }
  if (iVar7 != 0xd) {
    if (iVar7 == 10) goto LAB_035d2a4c;
    if (iVar7 != 0) {
      return;
    }
  }
  if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  auVar10 = FUN_0277b12c(*(long *)(unaff_x19 + 10),0,
                         *(undefined8 *)
                          Method_System_Linq_Enumerable_ToList<MarkToMarkAdjustmentRecord>__);
  uVar3 = FUN_02a65cec();
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar10;
    thunk_FUN_01f51358(unaff_x19 + 0x18,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_021248d0(unaff_x19 + 2);
    return;
  }
  unaff_w23 = FUN_02a65d38();
LAB_035d2a4c:
  *unaff_x19 = 0xfffffffe;
  puVar2 = Method_System_Collections_Generic_Stack<ValueTuple<bool,_GradientFill>>__ctor__;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_026f4d88(unaff_x19 + 2,unaff_w23 & 1,*(undefined8 *)puVar2);
  return;
}


