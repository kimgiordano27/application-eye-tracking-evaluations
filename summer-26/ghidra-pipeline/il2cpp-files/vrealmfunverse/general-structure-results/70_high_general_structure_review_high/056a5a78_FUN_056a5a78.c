/*
FUNCTION_NAME: FUN_056a5a78
ENTRY_POINT: 056a5a78
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_056a5a78(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_0631c5b8;
  if ((DAT_066d1f38 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(PTR_DAT_0631c5b8);
    FUN_02b3c81c(
                Method_Unity_Burst_FunctionPointer<SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416_PostfixBurstDelegate>_get_Value__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_FunctionPointer<SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422_PostfixBurstDelegate>_get_Value__
                );
    DAT_066d1f38 = 1;
  }
  plVar2 = (long *)thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_04c149dc(plVar2,0);
  lVar9 = *(long *)(param_1 + 0xe8);
  if (lVar9 == 0) goto LAB_056a5da4;
  if ((*(char *)(lVar9 + 0x30) == '\0') || (*(char *)(lVar9 + 0x32) != '\0')) {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_056a5da4;
    lVar9 = FUN_055cb57c(*(long *)(param_1 + 0x40),0);
  }
  else {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_056a5da4;
    uVar6 = FUN_055cc42c(*(long *)(param_1 + 0x40),0);
    uVar3 = FUN_056a2d5c(param_1);
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_056a5da4;
    uVar4 = FUN_055cb57c(*(long *)(param_1 + 0x40),0);
    lVar9 = FUN_04c0af6c(*(undefined8 *)
                          Method_Unity_Burst_FunctionPointer<SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000416_PostfixBurstDelegate>_get_Value__
                         ,uVar6,uVar3,uVar4,0);
  }
  if (*(char *)(param_1 + 200) == '\0') {
    plVar5 = *(long **)(param_1 + 0xe8);
    if (plVar5 == (long *)0x0) goto LAB_056a5da4;
    uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
    uVar7 = FUN_04d9b510(uVar6,0,0);
    if ((uVar7 & 1) == 0) goto LAB_056a5be0;
    plVar5 = *(long **)(param_1 + 0xe8);
    if (plVar5 == (long *)0x0) goto LAB_056a5da4;
    uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
    uVar7 = FUN_04d9b66c(uVar6,*(undefined8 *)(param_1 + 0xc0),0);
    if ((uVar7 & 1) == 0) goto LAB_056a5be0;
    plVar5 = *(long **)(param_1 + 0xe8);
    if (plVar5 == (long *)0x0) goto LAB_056a5da4;
    uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
  }
  else {
LAB_056a5be0:
    uVar6 = *(undefined8 *)(param_1 + 0xc0);
  }
  *(undefined8 *)(param_1 + 0xd0) = uVar6;
  thunk_FUN_02bb0e9c();
  plVar5 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,4);
  if (plVar5 == (long *)0x0) goto LAB_056a5da4;
  lVar10 = *(long *)(param_1 + 0xa8);
  if ((lVar10 != 0) &&
     (lVar8 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0)) {
LAB_056a5dac:
    uVar6 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar6,0);
  }
  if ((int)plVar5[3] != 0) {
    plVar5[4] = lVar10;
    thunk_FUN_02bb0e9c(plVar5 + 4,lVar10);
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
    goto LAB_056a5dac;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
      plVar5[5] = lVar9;
      thunk_FUN_02bb0e9c(plVar5 + 5,lVar9);
      puVar1 = PTR_DAT_06312310;
      if (*(long *)(param_1 + 0xd0) != 0) {
        local_34 = *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x10);
        lVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_34);
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
        goto LAB_056a5dac;
        if (*(uint *)(plVar5 + 3) < 3) goto LAB_056a5da8;
        plVar5[6] = lVar9;
        thunk_FUN_02bb0e9c(plVar5 + 6,lVar9);
        if (*(long *)(param_1 + 0xd0) != 0) {
          local_38 = *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x14);
          lVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(puVar1 + 0x48),&local_38);
          if ((lVar9 != 0) &&
             (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
          goto LAB_056a5dac;
          if ((*(uint *)(plVar5 + 3) & 0xfffffffc) == 0) goto LAB_056a5da8;
          plVar5[7] = lVar9;
          thunk_FUN_02bb0e9c(plVar5 + 7,lVar9);
          if (plVar2 != (long *)0x0) {
            FUN_04c1819c(plVar2,*(undefined8 *)
                                 Method_Unity_Burst_FunctionPointer<SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000422_PostfixBurstDelegate>_get_Value__
                         ,plVar5,0);
            uVar6 = FUN_056a5190(param_1);
            FUN_04c1633c(plVar2,uVar6,0);
            uVar6 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
            plVar2 = (long *)FUN_04c24d1c(0);
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 0x248))(plVar2,uVar6,*(undefined8 *)(*plVar2 + 0x250));
              return;
            }
          }
        }
      }
LAB_056a5da4:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
LAB_056a5da8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


