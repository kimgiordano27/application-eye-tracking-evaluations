/*
FUNCTION_NAME: FUN_01462e74
ENTRY_POINT: 01462e74
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_01462e74(long param_1,undefined4 param_2,long *param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 local_44;
  
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__;
  local_44 = param_2;
  if ((DAT_03776aab & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__);
    thunk_FUN_00d48444(StringLiteral_12806);
    thunk_FUN_00d48444(System_Action<InputDevice>_TypeInfo);
    thunk_FUN_00d48444(Method_Obi_ObiConstraints<ObiSkinConstraintsBatch>__ctor__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_MoveNext__
                      );
    DAT_03776aab = 1;
  }
  lVar5 = FUN_00da4fb8(*(undefined8 *)puVar3,0);
  puVar2 = StringLiteral_302;
  puVar1 = Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_MoveNext__;
  switch(param_2) {
  case 0:
    if (param_3 == (long *)0x0) goto LAB_01463284;
    lVar5 = UnityEngine_UIElements_KeyboardNavigationManipulator__OnNavigationMove(param_3,0);
    break;
  default:
    uVar6 = FUN_0176eb1c(&local_44,0);
    uVar6 = FUN_015f5b28(*(undefined8 *)puVar1,uVar6,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    FUN_026610e4(uVar6,0);
    break;
  case 2:
    if (param_3 == (long *)0x0) goto LAB_01463284;
    lVar5 = FUN_0266bc28(param_3,0);
    break;
  case 3:
    if (param_3 == (long *)0x0) goto LAB_01463284;
    lVar5 = FUN_0266bcd4(param_3,0);
    break;
  case 4:
    if (param_3 == (long *)0x0) goto LAB_01463284;
    lVar5 = FUN_0266bd80(param_3,0);
    break;
  case 5:
    if (param_3 == (long *)0x0) goto LAB_01463284;
    lVar5 = FUN_0266be2c(param_3,0);
    break;
  case 6:
    if (param_3 == (long *)0x0) goto LAB_01463284;
    lVar5 = FUN_0266bed8(param_3,0);
    break;
  case 7:
    if (param_3 == (long *)0x0) goto LAB_01463284;
    lVar5 = FUN_0266bf84(param_3,0);
    break;
  case 8:
    if (param_3 == (long *)0x0) goto LAB_01463284;
    lVar5 = FUN_0266c030(param_3,0);
  }
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x18) != 0) {
      return lVar5;
    }
    if (3 < param_4) {
      plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
      puVar1 = Method_Obi_ObiConstraints<ObiSkinConstraintsBatch>__ctor__;
      if (plVar7 == (long *)0x0) goto LAB_01463284;
      if ((*(long *)Method_Obi_ObiConstraints<ObiSkinConstraintsBatch>__ctor__ != 0) &&
         (lVar5 = thunk_FUN_00d6225c(*(long *)
                                      Method_Obi_ObiConstraints<ObiSkinConstraintsBatch>__ctor__,
                                     *(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0))
      goto LAB_01463288;
      if ((int)plVar7[3] == 0) goto LAB_01463280;
      plVar7[4] = *(long *)puVar1;
      if (param_3 == (long *)0x0) {
        lVar5 = 0;
      }
      else {
        lVar5 = (**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
        if ((lVar5 != 0) &&
           (lVar8 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
        goto LAB_01463288;
      }
      puVar1 = System_Action<InputDevice>_TypeInfo;
      uVar9 = *(uint *)(plVar7 + 3);
      if (uVar9 < 2) goto LAB_01463280;
      plVar7[5] = lVar5;
      lVar5 = *(long *)puVar1;
      if (lVar5 != 0) {
        lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar7 + 0x40));
        if (lVar5 == 0) goto LAB_01463288;
        uVar9 = *(uint *)(plVar7 + 3);
      }
      if (uVar9 < 3) goto LAB_01463280;
      plVar7[6] = *(long *)puVar1;
      lVar5 = FUN_0176eb1c(&local_44,0);
      if ((lVar5 != 0) &&
         (lVar8 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
LAB_01463288:
        uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar6,0);
      }
      puVar1 = StringLiteral_12806;
      uVar9 = *(uint *)(plVar7 + 3);
      if (uVar9 < 4) goto LAB_01463280;
      plVar7[7] = lVar5;
      lVar5 = *(long *)puVar1;
      if (lVar5 != 0) {
        lVar5 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar7 + 0x40));
        if (lVar5 == 0) goto LAB_01463288;
        uVar9 = *(uint *)(plVar7 + 3);
      }
      puVar2 = Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
      if (uVar9 < 5) goto LAB_01463280;
      plVar7[8] = *(long *)puVar1;
      uVar6 = FUN_01600844(plVar7,0);
      lVar8 = *(long *)puVar2;
      lVar5 = *(long *)(lVar8 + 0x38);
      if (lVar5 == 0) {
        FUN_00d59478(lVar8);
        lVar5 = *(long *)(lVar8 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      FUN_013f38b0(uVar6,**(undefined8 **)(lVar5 + 0xb8),0);
    }
    if (param_3 != (long *)0x0) {
      uVar4 = FUN_02665480(param_3,0);
      lVar5 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar4);
      if (lVar5 != 0) {
        uVar9 = *(uint *)(lVar5 + 0x18);
        if ((long)((ulong)uVar9 << 0x20) < 1) {
          return lVar5;
        }
        uVar10 = 0;
        while (uVar10 < uVar9) {
          *(undefined8 *)(lVar5 + 0x20 + uVar10 * 8) = *(undefined8 *)(param_1 + 0x10);
          uVar10 = uVar10 + 1;
          if ((long)(int)uVar9 <= (long)uVar10) {
            return lVar5;
          }
        }
LAB_01463280:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
    }
  }
LAB_01463284:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


