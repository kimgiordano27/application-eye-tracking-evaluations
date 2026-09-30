/*
FUNCTION_NAME: FoveationFeature$$get_supportsFoveationEyeTracked
ENTRY_POINT: 073c553c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 147
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_9;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FoveationFeature__get_supportsFoveationEyeTracked(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000060;
  
  do {
    if (param_1 != (long *)0x0) {
      lVar7 = *unaff_x21;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
                    /* try { // try from 073c5550 to 074c5557 has its CatchHandler @ 073c5a08 */
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x23) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_073c558c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
                    /* try { // try from 073c5570 to 074c5577 has its CatchHandler @ 073c5a24 */
      puVar4 = (undefined8 *)FUN_0377596c(unaff_x21,*unaff_x23,0);
LAB_073c558c:
      lVar7 = (*(code *)*puVar4)(unaff_x21,puVar4[1]);
      if (lVar7 == unaff_x20) {
        uVar5 = FUN_060b76a8(*(undefined8 *)Unity_Netcode_NotServerException_TypeInfo);
                    /* try { // try from 073c55bc to 074c55c7 has its CatchHandler @ 073c5a94 */
        uVar5 = System_Convert__ToInt32
                          (uVar5,*(undefined8 *)Unity_Netcode_NotOwnerRpcTarget_TypeInfo,0);
                    /* try { // try from 073c55d4 to 074c55df has its CatchHandler @ 073c5a74 */
        if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_0755df88(uVar5);
        puVar4 = (undefined8 *)&stack0x00000050;
        puVar9 = (undefined8 *)System_Linq_Expressions_Interpreter_NewArrayInitInstruction_TypeInfo;
        goto LAB_073c5778;
      }
    }
    uVar10 = FUN_05d64e98(&stack0x00000050,*unaff_x22);
    if ((uVar10 & 1) == 0) break;
    param_1 = (long *)thunk_FUN_037787d0(in_stack_00000060,*unaff_x23);
    unaff_x21 = param_1;
  } while( true );
  FUN_05d64e94(&stack0x00000050,
               *(undefined8 *)System_Linq_Expressions_Interpreter_NewArrayInitInstruction_TypeInfo);
  if (unaff_x19[0x13] == 0) goto LAB_073c585c;
  iVar3 = FUN_0520175c(unaff_x19[0x13],
                       *(undefined8 *)
                        System_Linq_Expressions_Interpreter_NotEqualInstruction_TypeInfo);
  if (0 < iVar3) {
    plVar6 = (long *)unaff_x19[0x13];
    if (plVar6 == (long *)0x0) goto LAB_073c585c;
    (**(code **)(*plVar6 + 0x1c8))(plVar6,unaff_x19[0x1e],*(undefined8 *)(*plVar6 + 0x1d0));
    if (unaff_x19[0x1e] == 0) goto LAB_073c585c;
    FUN_049cf910(unaff_x19[0x1e],*(undefined8 *)System_Data_NoNullAllowedException_TypeInfo);
    puVar2 = UnityEngine_Rendering_Universal_Internal_NormalReconstruction_TypeInfo;
    puVar1 = System_Linq_Expressions_Interpreter_NewArrayInstruction_TypeInfo;
    in_stack_00000038 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000000;
    in_stack_00000040 = in_stack_00000010;
    while (uVar10 = FUN_05d64e98(&stack0x00000030,*(undefined8 *)puVar1), (uVar10 & 1) != 0) {
      plVar6 = (long *)thunk_FUN_037787d0(in_stack_00000040,*(undefined8 *)puVar2);
      if (plVar6 != (long *)0x0) {
        lVar8 = *plVar6;
        lVar7 = *(long *)puVar2;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar7) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_073c5700;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)FUN_0377596c(plVar6,lVar7,0);
LAB_073c5700:
        lVar7 = (*(code *)*puVar4)(plVar6,puVar4[1]);
        if (lVar7 == unaff_x20) {
          uVar5 = FUN_060b76a8(*(undefined8 *)Unity_Netcode_NotServerException_TypeInfo);
          uVar5 = System_Convert__ToInt32
                            (uVar5,*(undefined8 *)Unity_Netcode_NotOwnerRpcTarget_TypeInfo,0);
          if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          FUN_0755df88(uVar5);
          puVar4 = &stack0x00000030;
          puVar9 = (undefined8 *)System_Linq_Expressions_NewArrayInitExpression_TypeInfo;
LAB_073c5778:
          FUN_05d64e94(puVar4,*puVar9);
          return;
        }
      }
    }
    FUN_05d64e94(&stack0x00000030,
                 *(undefined8 *)System_Linq_Expressions_NewArrayInitExpression_TypeInfo);
  }
  if ((long *)unaff_x19[0x14] != (long *)0x0) {
    uVar10 = (**(code **)(*(long *)unaff_x19[0x14] + 0x1a8))();
    if ((uVar10 & 1) == 0) {
      return;
    }
    if (unaff_x19[0x1c] != 0) {
      FUN_045b9744();
      if (unaff_x19[0x26] != 0) {
        _in_stack_00000018 =
             FUN_0480eb20(unaff_x19[0x26],&stack0x00000028,
                          *(undefined8 *)Unity_Netcode_NotListeningException_TypeInfo);
        if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        *(long **)(in_stack_00000028 + 0x10) = unaff_x19;
        thunk_FUN_037aeb94();
        if (in_stack_00000028 != 0) {
          *(long *)(in_stack_00000028 + 0x18) = unaff_x20;
          thunk_FUN_037aeb94();
          (**(code **)(*unaff_x19 + 0x288))();
          FUN_04fafd58(&stack0x00000018,*(undefined8 *)Unity_Netcode_NotMeRpcTarget_TypeInfo);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
    }
  }
LAB_073c585c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


