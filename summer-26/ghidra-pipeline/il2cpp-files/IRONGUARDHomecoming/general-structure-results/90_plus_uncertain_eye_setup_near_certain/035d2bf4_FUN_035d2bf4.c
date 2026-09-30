/*
FUNCTION_NAME: FUN_035d2bf4
ENTRY_POINT: 035d2bf4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035d2ab4) */

void FUN_035d2bf4(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  int iVar6;
  long unaff_x21;
  long *plVar7;
  uint unaff_w23;
  undefined8 uVar8;
  long *unaff_x25;
  int unaff_w27;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000018;
  
  plVar7 = *(long **)(unaff_x19 + 0x10);
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_035d2c50;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_035d2c50:
    (*(code *)*puVar2)(plVar7,puVar2[1]);
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
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  in_stack_00000018._4_1_ = '\0';
  FUN_035ce230(uVar8,(long)&stack0x00000018 + 4);
  uVar4 = FUN_035d1d44();
  if ((uVar4 & 1) == 0) {
    iVar6 = 0xd;
  }
  else {
    if (*(int *)(*(long *)
                  Method_System_Dynamic_Utils_ContractUtils_RequiresNotNullItems<CatchBlock>__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_035cd7fc(unaff_x19 + 8);
    unaff_w23 = 0;
    iVar6 = 10;
  }
  if (in_stack_00000018._4_1_ != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar8);
  }
  if (iVar6 != 0xd) {
    if (iVar6 == 10) goto LAB_035d2a4c;
    if (iVar6 != 0) {
      return;
    }
  }
  if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  auVar9 = FUN_0277b12c(*(long *)(unaff_x19 + 10),0,
                        *(undefined8 *)
                         Method_System_Linq_Enumerable_ToList<MarkToMarkAdjustmentRecord>__);
  uVar4 = FUN_02a65cec();
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar9;
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
  puVar1 = Method_System_Collections_Generic_Stack<ValueTuple<bool,_GradientFill>>__ctor__;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_026f4d88(unaff_x19 + 2,unaff_w23 & 1,*(undefined8 *)puVar1);
  return;
}


