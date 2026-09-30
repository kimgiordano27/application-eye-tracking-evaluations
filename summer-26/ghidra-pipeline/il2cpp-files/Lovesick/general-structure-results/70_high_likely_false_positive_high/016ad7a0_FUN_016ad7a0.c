/*
FUNCTION_NAME: FUN_016ad7a0
ENTRY_POINT: 016ad7a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


undefined8 FUN_016ad7a0(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar8;
  long lVar9;
  undefined *puVar7;
  
  if ((DAT_0377860f & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_3326);
    thunk_FUN_00d48444(PTR_DAT_033eace0);
    thunk_FUN_00d48444(Method_IntroCreditSceneManager_SkipButtonUnpressed__);
    DAT_0377860f = 1;
  }
  uVar3 = FUN_0169aa20(*(undefined8 *)(param_1 + 0x28),0);
  if ((uVar3 & 1) != 0) {
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                      );
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar7 = StringLiteral_11004;
    goto LAB_016ada50;
  }
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)0x0) goto LAB_016ad9e4;
  iVar2 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
  if (iVar2 == 1) {
LAB_016ad820:
    if (*(int *)(param_1 + 0x38) == -1) {
      plVar4 = *(long **)(param_1 + 0x28);
      if (plVar4 == (long *)0x0) {
LAB_016ad9e4:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar2 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      if (iVar2 == 8) {
        plVar4 = *(long **)(param_1 + 0x28);
        if (plVar4 != (long *)0x0) {
          lVar8 = *(long *)PTR_DAT_033eace0;
          if ((*(byte *)(lVar8 + 300) <= *(byte *)(*plVar4 + 300)) &&
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar8 + 300) * 8 + -8) == lVar8)
             ) {
            lVar9 = *plVar4;
            if ((*(byte *)(lVar8 + 300) <= *(byte *)(lVar9 + 300)) &&
               (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar8 + 300) * 8 + -8) == lVar8)
               ) {
                    /* WARNING: Could not recover jumptable at 0x016ad9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar5 = (**(code **)(lVar9 + 1000))(plVar4,*(undefined8 *)(lVar9 + 0x3f0));
              return uVar5;
            }
          }
          goto LAB_016ad9e0;
        }
        goto LAB_016ad9e4;
      }
    }
    else {
      plVar4 = *(long **)(param_1 + 0x28);
      if (plVar4 == (long *)0x0) goto LAB_016ad9e4;
      lVar8 = *(long *)StringLiteral_3326;
      if ((*(byte *)(*plVar4 + 300) < *(byte *)(lVar8 + 300)) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar8 + 300) * 8 + -8) != lVar8)) {
LAB_016ad9e0:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      lVar9 = *plVar4;
      if ((*(byte *)(lVar9 + 300) < *(byte *)(lVar8 + 300)) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar8 + 300) * 8 + -8) != lVar8))
      goto LAB_016ad9e0;
      lVar8 = (**(code **)(lVar9 + 0x3d8))(plVar4,*(undefined8 *)(lVar9 + 0x3e0));
      if (lVar8 != 0) {
        uVar1 = *(uint *)(param_1 + 0x38);
LAB_016ad924:
        if ((int)uVar1 < (int)*(uint *)(lVar8 + 0x18)) {
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            return *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          }
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
      }
    }
  }
  else {
    if (iVar2 != 0x10) {
      if (iVar2 != 8) {
        thunk_FUN_00d48444(
                          UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                          );
        uVar5 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar7 = StringLiteral_3915;
        goto LAB_016ada50;
      }
      goto LAB_016ad820;
    }
    plVar4 = *(long **)(param_1 + 0x28);
    if (plVar4 == (long *)0x0) goto LAB_016ad9e4;
    lVar8 = *(long *)Method_IntroCreditSceneManager_SkipButtonUnpressed__;
    if ((*(byte *)(*plVar4 + 300) < *(byte *)(lVar8 + 300)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar8 + 300) * 8 + -8) != lVar8))
    goto LAB_016ad9e0;
    lVar9 = *plVar4;
    if ((*(byte *)(lVar9 + 300) < *(byte *)(lVar8 + 300)) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar8 + 300) * 8 + -8) != lVar8))
    goto LAB_016ad9e0;
    lVar8 = (**(code **)(lVar9 + 0x268))(plVar4,*(undefined8 *)(lVar9 + 0x270));
    if ((lVar8 != 0) && (uVar1 = *(uint *)(param_1 + 0x38), -1 < (int)uVar1)) goto LAB_016ad924;
  }
  thunk_FUN_00d48444(
                    UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                    );
  uVar5 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  puVar7 = Method_System_Collections_Generic_Queue<LocomotionEvent>_Enqueue__;
LAB_016ada50:
  uVar6 = thunk_FUN_00d48444(puVar7);
  FUN_01679968(uVar5,uVar6,0);
  uVar6 = thunk_FUN_00d48444(StringLiteral_9084);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar5,uVar6);
}


