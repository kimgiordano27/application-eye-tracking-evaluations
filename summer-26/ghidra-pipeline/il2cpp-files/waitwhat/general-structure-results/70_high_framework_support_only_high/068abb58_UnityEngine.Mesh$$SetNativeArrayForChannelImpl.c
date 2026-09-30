/*
FUNCTION_NAME: UnityEngine.Mesh$$SetNativeArrayForChannelImpl
ENTRY_POINT: 068abb58
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_19;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x068aba50) */

undefined4 UnityEngine_Mesh__SetNativeArrayForChannelImpl(long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x24;
  int unaff_w25;
  int unaff_w28;
  long in_stack_00000000;
  undefined4 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x068abb58:
  FUN_042e4a64(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
LAB_068abb64:
  while (unaff_x24 != 0) {
    if (*(long *)(unaff_x21 + 0x310) == 0) goto LAB_068abcf0;
    FUN_052432d4(*(long *)(unaff_x21 + 0x310),in_stack_00000018,unaff_w25,
                 *(undefined8 *)OVRPlugin_OVRP_1_21_0_TypeInfo);
    while( true ) {
      unaff_w25 = unaff_w25 + 1;
      if (unaff_w28 == unaff_w25) {
        if (unaff_x24 == 0) goto LAB_068abc44;
        lVar5 = *(long *)(unaff_x21 + 0x308);
        if (lVar5 == 0) goto LAB_068abcf0;
        iVar1 = *(int *)(lVar5 + 0x18);
        *(undefined4 *)(lVar5 + 0x18) = 0;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if ((0 < iVar1) &&
           (FUN_0595236c(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0), *(long *)(unaff_x21 + 0x308) == 0
           )) goto LAB_068abcf0;
        FUN_042e4c6c();
        plVar6 = (long *)FUN_068b3948();
        if (plVar6 == (long *)0x0) goto LAB_068abc74;
        lVar5 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar10 == 0) goto LAB_068abc34;
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_068abc1c;
      }
      lVar5 = *(long *)(unaff_x21 + 0x30);
      uVar8 = FUN_042e47a4();
      if (lVar5 == 0) goto LAB_068abcf0;
      uVar10 = FUN_06859118(lVar5,uVar8,&stack0x00000018,&stack0x00000010,0);
      lVar5 = in_stack_00000010;
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_031e5338(*unaff_x20);
      }
      uVar4 = FUN_069d69b8(lVar5,0,0);
      if ((uVar10 & 1) != 0) break;
LAB_068abaa8:
      if (unaff_x24 == 0 && (uVar4 & 1) == 0) {
LAB_068abc44:
        if (unaff_x19 == 0) goto LAB_068abcf0;
        goto UnityEngine_Mesh__GetAllocArrayFromChannelImpl;
      }
    }
    lVar5 = *(long *)(unaff_x21 + 0x30);
    if (lVar5 == 0) goto LAB_068abcf0;
    thunk_FUN_031c3cac(in_stack_00000018,
                       *(undefined8 *)UnityEngine_EnumDataUtility_<>c__DisplayClass2_0_TypeInfo);
    uVar10 = FUN_06856518(lVar5);
    if ((uVar10 & 1) == 0) goto LAB_068abaa8;
    if (unaff_x19 == 0) goto LAB_068abcf0;
    lVar5 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_068abcf0;
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if (*(uint *)(lVar5 + 0x18) <= uVar2) goto UnityEngine_Mesh__SetArrayForChannelImpl_Injected;
    *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
    *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = in_stack_00000018;
    if ((uVar4 & 1) != 0) goto LAB_068abad4;
  }
  goto UnityEngine_Mesh__GetAllocArrayFromChannelImpl;
UnityEngine_Mesh__SetArrayForChannelImpl_Injected:
  FUN_042e4a64();
  if ((uVar4 & 1) == 0) goto LAB_068abb64;
LAB_068abad4:
  if (in_stack_00000010 == 0) goto LAB_068abcf0;
  uVar8 = *(undefined8 *)(in_stack_00000010 + 0x28);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar10 = FUN_069d69b8(uVar8,0,0);
  if ((uVar10 & 1) == 0) goto LAB_068abb64;
  if (in_stack_00000000 == 0) goto LAB_068abcf0;
  lVar5 = *(long *)(in_stack_00000000 + 0x10);
  lVar9 = *(long *)OVRPlugin_OVRP_1_29_0_TypeInfo;
  *(int *)(in_stack_00000000 + 0x1c) = *(int *)(in_stack_00000000 + 0x1c) + 1;
  if (lVar5 == 0) goto LAB_068abcf0;
  uVar2 = *(uint *)(in_stack_00000000 + 0x18);
  if (uVar2 < *(uint *)(lVar5 + 0x18)) {
    *(uint *)(in_stack_00000000 + 0x18) = uVar2 + 1;
    *(long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = in_stack_00000010;
    goto LAB_068abb64;
  }
  param_1 = *(long *)(lVar9 + 0x20);
  param_2 = in_stack_00000000;
  param_3 = in_stack_00000010;
  goto code_r0x068abb58;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_068abc1c:
    if (*(long *)(piVar11 + -2) == *(long *)OVRPlugin_OVRP_1_19_0_TypeInfo) {
      puVar7 = (undefined8 *)(lVar5 + (long)(*piVar11 + 3) * 0x10 + 0x138);
      goto LAB_068abc5c;
    }
  }
LAB_068abc34:
  puVar7 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)OVRPlugin_OVRP_1_19_0_TypeInfo,3);
LAB_068abc5c:
  (*(code *)*puVar7)(plVar6);
LAB_068abc74:
  if (unaff_x19 != 0) {
    if (*(int *)(unaff_x19 + 0x18) < 1) {
      uVar3 = 0xffffffff;
    }
    else {
      lVar5 = *(long *)(unaff_x21 + 0x310);
      uVar8 = FUN_042e47a4();
      if (lVar5 == 0) goto LAB_068abcf0;
      uVar3 = FUN_0524174c(lVar5,uVar8,*(undefined8 *)OVRPlugin_OVRP_1_28_0_TypeInfo);
    }
    *in_stack_00000008 = uVar3;
UnityEngine_Mesh__GetAllocArrayFromChannelImpl:
    return *(undefined4 *)(unaff_x19 + 0x18);
  }
LAB_068abcf0:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


