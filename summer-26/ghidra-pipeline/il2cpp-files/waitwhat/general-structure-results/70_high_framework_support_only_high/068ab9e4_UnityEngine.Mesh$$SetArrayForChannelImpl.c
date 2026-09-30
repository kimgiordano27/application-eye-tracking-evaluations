/*
FUNCTION_NAME: UnityEngine.Mesh$$SetArrayForChannelImpl
ENTRY_POINT: 068ab9e4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined4 UnityEngine_Mesh__SetArrayForChannelImpl(ulong param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x24;
  int unaff_w25;
  long lVar10;
  int unaff_w28;
  long in_stack_00000000;
  int *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while( true ) {
    lVar10 = in_stack_00000010;
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_031e5338(*unaff_x20);
    }
    uVar3 = FUN_069d69b8(lVar10,0,0);
    if ((param_1 & 1) == 0) break;
    lVar10 = *(long *)(unaff_x21 + 0x30);
    if (lVar10 == 0) goto LAB_068abcf0;
    thunk_FUN_031c3cac(in_stack_00000018,
                       *(undefined8 *)UnityEngine_EnumDataUtility_<>c__DisplayClass2_0_TypeInfo);
    uVar4 = FUN_06856518(lVar10);
    if ((uVar4 & 1) == 0) break;
    if ((unaff_x22 & 1) == 0) {
      *in_stack_00000008 = unaff_w25;
    }
    if (unaff_x19 == 0) goto LAB_068abcf0;
    lVar10 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_068abcf0;
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000018;
    }
    else {
      FUN_042e4a64();
    }
    if ((uVar3 & 1) != 0) {
      if (in_stack_00000010 == 0) goto LAB_068abcf0;
      uVar7 = *(undefined8 *)(in_stack_00000010 + 0x28);
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar3 = FUN_069d69b8(uVar7,0,0);
      if ((uVar3 & 1) != 0) {
        if (in_stack_00000000 == 0) goto LAB_068abcf0;
        lVar10 = *(long *)(in_stack_00000000 + 0x10);
        lVar8 = *(long *)OVRPlugin_OVRP_1_29_0_TypeInfo;
        *(int *)(in_stack_00000000 + 0x1c) = *(int *)(in_stack_00000000 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_068abcf0;
        uVar1 = *(uint *)(in_stack_00000000 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(in_stack_00000000 + 0x18) = uVar1 + 1;
          *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000010;
        }
        else {
          FUN_042e4a64(in_stack_00000000,in_stack_00000010,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    if (unaff_x24 == 0) goto UnityEngine_Mesh__GetAllocArrayFromChannelImpl;
    if (*(long *)(unaff_x21 + 0x310) == 0) goto LAB_068abcf0;
    FUN_052432d4(*(long *)(unaff_x21 + 0x310),in_stack_00000018,unaff_w25,
                 *(undefined8 *)OVRPlugin_OVRP_1_21_0_TypeInfo);
    unaff_x22 = 1;
LAB_068abb8c:
    unaff_w25 = unaff_w25 + 1;
    if (unaff_w28 == unaff_w25) {
      if (unaff_x24 == 0) goto LAB_068abc44;
      lVar10 = *(long *)(unaff_x21 + 0x308);
      if (lVar10 != 0) {
        iVar2 = *(int *)(lVar10 + 0x18);
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if ((iVar2 < 1) ||
           (FUN_0595236c(*(undefined8 *)(lVar10 + 0x10),0,iVar2,0),
           *(long *)(unaff_x21 + 0x308) != 0)) {
          FUN_042e4c6c();
          plVar5 = (long *)FUN_068b3948();
          if (plVar5 == (long *)0x0) goto LAB_068abc74;
          lVar10 = *plVar5;
          uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar3 == 0) goto LAB_068abc34;
          piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_068abc1c;
        }
      }
      goto LAB_068abcf0;
    }
    lVar10 = *(long *)(unaff_x21 + 0x30);
    uVar7 = FUN_042e47a4();
    if (lVar10 == 0) goto LAB_068abcf0;
    param_1 = FUN_06859118(lVar10,uVar7,&stack0x00000018,&stack0x00000010,0);
  }
  if (unaff_x24 != 0 || (uVar3 & 1) != 0) goto LAB_068abb8c;
LAB_068abc44:
  if (unaff_x19 != 0) goto UnityEngine_Mesh__GetAllocArrayFromChannelImpl;
  goto LAB_068abcf0;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar9 = piVar9 + 4;
    if (uVar3 == 0) break;
LAB_068abc1c:
    if (*(long *)(piVar9 + -2) == *(long *)OVRPlugin_OVRP_1_19_0_TypeInfo) {
      puVar6 = (undefined8 *)(lVar10 + (long)(*piVar9 + 3) * 0x10 + 0x138);
      goto LAB_068abc5c;
    }
  }
LAB_068abc34:
  puVar6 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)OVRPlugin_OVRP_1_19_0_TypeInfo,3);
LAB_068abc5c:
  (*(code *)*puVar6)(plVar5);
LAB_068abc74:
  if (unaff_x19 != 0) {
    if (*(int *)(unaff_x19 + 0x18) < 1) {
      iVar2 = -1;
    }
    else {
      lVar10 = *(long *)(unaff_x21 + 0x310);
      uVar7 = FUN_042e47a4();
      if (lVar10 == 0) goto LAB_068abcf0;
      iVar2 = FUN_0524174c(lVar10,uVar7,*(undefined8 *)OVRPlugin_OVRP_1_28_0_TypeInfo);
    }
    *in_stack_00000008 = iVar2;
UnityEngine_Mesh__GetAllocArrayFromChannelImpl:
    return *(undefined4 *)(unaff_x19 + 0x18);
  }
LAB_068abcf0:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


