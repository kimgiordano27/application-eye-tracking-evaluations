/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetLocalDimmingSupported
ENTRY_POINT: 033f7b20
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033f7dac) */

undefined8
OVRPlugin_OVRP_1_78_0__ovrp_GetLocalDimmingSupported(long param_1,int param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  int in_stack_00000008;
  char cStack000000000000000c;
  
  if ((DAT_044a6bd1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_1718);
    FUN_01d7d918(StringLiteral_6721);
    FUN_01d7d918(StringLiteral_9431);
    FUN_01d7d918(StringLiteral_460);
    DAT_044a6bd1 = 1;
  }
  cStack000000000000000c = 0;
  FUN_033f7a94(param_1);
  puVar2 = StringLiteral_1718;
  if (param_2 < -1) {
    in_stack_00000008 = param_2;
    uVar6 = thunk_FUN_01dd295c(
                              Field_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_m_ActionMap
                              );
    uVar6 = thunk_FUN_01de23e8(uVar6,&stack0x00000008);
    thunk_FUN_01dd295c(StringLiteral_6721);
    FUN_01a94a5c();
    thunk_FUN_01dd295c(StringLiteral_9426);
    uVar8 = FUN_033f7560();
    thunk_FUN_01dd295c(StringLiteral_1122);
    uVar4 = thunk_FUN_01de27b8();
    uVar5 = thunk_FUN_01dd295c(StringLiteral_9427);
    FUN_0328bd40(uVar4,uVar5,uVar6,uVar8,0);
    uVar6 = thunk_FUN_01dd295c(StringLiteral_9432);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar4,uVar6);
  }
  if (*(int *)(*(long *)StringLiteral_1718 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  if ((param_3 != 0) && (iVar1 = *(int *)(param_3 + 0x20), thunk_FUN_01da0934(), 1 < iVar1)) {
    if (*(int *)(*(long *)StringLiteral_460 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar6 = FUN_0216c058(param_3,*(undefined8 *)StringLiteral_9431);
    return uVar6;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  cStack000000000000000c = '\0';
  FUN_033f4894(uVar6,&stack0x0000000c);
  iVar1 = *(int *)(param_1 + 0x10);
  thunk_FUN_01da0934();
  puVar3 = StringLiteral_6721;
  if (iVar1 < 1) {
    if (param_2 == 0) {
      lVar7 = *(long *)StringLiteral_6721;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar7 = *(long *)puVar3;
      }
      uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
    }
    else {
      uVar8 = FUN_033f7f68(param_1);
      if (param_2 == -1) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        if (param_3 == 0) goto LAB_033f7cf0;
      }
      uVar8 = FUN_033f8018(param_1,uVar8,param_2,param_3);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10);
    thunk_FUN_01da0934();
    thunk_FUN_01da0934();
    lVar7 = *(long *)(param_1 + 0x28);
    *(int *)(param_1 + 0x10) = iVar1 + -1;
    thunk_FUN_01da0934();
    if ((lVar7 != 0) && (iVar1 = *(int *)(param_1 + 0x10), thunk_FUN_01da0934(), iVar1 == 0)) {
      lVar7 = *(long *)(param_1 + 0x28);
      thunk_FUN_01da0934();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      FUN_033f7f00(lVar7);
    }
    puVar2 = StringLiteral_6721;
    lVar7 = *(long *)StringLiteral_6721;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar7 = *(long *)puVar2;
    }
    uVar8 = **(undefined8 **)(lVar7 + 0xb8);
  }
LAB_033f7cf0:
  if (cStack000000000000000c != '\0') {
    FUN_01dccd6c(uVar6);
  }
  return uVar8;
}


