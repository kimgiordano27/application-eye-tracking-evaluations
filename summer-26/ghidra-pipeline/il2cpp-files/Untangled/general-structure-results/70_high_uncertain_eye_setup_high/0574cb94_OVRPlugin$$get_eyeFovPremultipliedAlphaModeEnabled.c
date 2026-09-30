/*
FUNCTION_NAME: OVRPlugin$$get_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 0574cb94
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__get_eyeFovPremultipliedAlphaModeEnabled
          (undefined8 param_1,long *param_2,long param_3,long *param_4,undefined8 *param_5)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  byte extraout_var;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long unaff_x23;
  undefined1 uStack0000000000000008;
  byte bStack000000000000000c;
  byte bStack0000000000000010;
  undefined1 uStack0000000000000014;
  undefined1 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  
  if ((*(byte *)(unaff_x23 + 0xa18) & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d04020);
    FUN_02f07e70(PTR_DAT_06d37b60);
    *(undefined1 *)(unaff_x23 + 0xa18) = 1;
  }
  puVar2 = PTR_DAT_06d37b60;
  if (param_4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06d37b60 + 0x130);
    if ((bVar1 <= *(byte *)(*param_4 + 0x130)) &&
       (*(long *)(*(long *)(*param_4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06d37b60))
    {
      param_4 = (long *)param_4[7];
    }
  }
  if (param_3 == 0) goto LAB_0574cec4;
  iVar3 = *(int *)(param_3 + 0x18);
  if (0x23 < iVar3) {
    if (iVar3 < 0x40) {
      if ((iVar3 != 0x2a) && (iVar3 != 0x3f)) goto switchD_0574ccd4_caseD_e;
    }
    else if ((8 < iVar3 - 0x41U) || ((1 << (ulong)(iVar3 - 0x41U & 0x1f) & 0x111U) == 0))
    goto switchD_0574ccd4_caseD_e;
    goto switchD_0574ccd4_caseD_c;
  }
  if (0x15 < iVar3) {
    if (iVar3 != 0x1a) {
      if (iVar3 != 0x23) goto switchD_0574ccd4_caseD_e;
      if (param_2 == (long *)0x0) goto LAB_0574cec4;
      uVar6 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
      iVar3 = FUN_0574a038(uVar6,param_2[7],param_4);
      uStack0000000000000018 = iVar3 != 0;
      uVar6 = *(undefined8 *)PTR_DAT_06d04020;
      puVar7 = (undefined8 *)&stack0x00000018;
      goto LAB_0574ce94;
    }
    goto switchD_0574ccd4_caseD_c;
  }
  switch(iVar3) {
  case 0xc:
    goto switchD_0574ccd4_caseD_c;
  case 0xd:
    if (param_2 == (long *)0x0) goto LAB_0574cec4;
    uVar6 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
    iVar3 = FUN_0574a038(uVar6,param_2[7],param_4);
    uStack000000000000001c = iVar3 == 0;
    uVar6 = *(undefined8 *)PTR_DAT_06d04020;
    puVar7 = (undefined8 *)((long)&stack0x00000018 + 4);
    break;
  case 0xe:
  case 0x11:
  case 0x12:
  case 0x13:
    goto switchD_0574ccd4_caseD_e;
  case 0xf:
    if (param_2 == (long *)0x0) goto LAB_0574cec4;
    uVar6 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
    iVar3 = FUN_0574a038(uVar6,param_2[7],param_4);
    uStack0000000000000014 = 0 < iVar3;
    uVar6 = *(undefined8 *)PTR_DAT_06d04020;
    puVar7 = (undefined8 *)((long)&stack0x00000010 + 4);
    break;
  case 0x10:
    if (param_2 == (long *)0x0) goto LAB_0574cec4;
    uVar6 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
    FUN_0574a038(uVar6,param_2[7],param_4);
    bStack0000000000000010 = (byte)~extraout_var >> 7;
    uVar6 = *(undefined8 *)PTR_DAT_06d04020;
    puVar7 = (undefined8 *)&stack0x00000010;
    break;
  case 0x14:
    if (param_2 == (long *)0x0) goto LAB_0574cec4;
    uVar6 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
    uVar5 = FUN_0574a038(uVar6,param_2[7],param_4);
    bStack000000000000000c = (byte)(uVar5 >> 0x1f) & 1;
    puVar7 = (undefined8 *)((long)&stack0x00000008 + 4);
    uVar6 = *(undefined8 *)PTR_DAT_06d04020;
    break;
  case 0x15:
    if (param_2 == (long *)0x0) goto LAB_0574cec4;
    uVar6 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
    iVar3 = FUN_0574a038(uVar6,param_2[7],param_4);
    uStack0000000000000008 = iVar3 < 1;
    uVar6 = *(undefined8 *)PTR_DAT_06d04020;
    puVar7 = (undefined8 *)&stack0x00000008;
    break;
  default:
    if (iVar3 != 0) goto switchD_0574ccd4_caseD_e;
    goto switchD_0574ccd4_caseD_c;
  }
LAB_0574ce94:
  uVar6 = thunk_FUN_02ef1438(uVar6,puVar7);
  *param_5 = uVar6;
LAB_0574cea8:
  thunk_FUN_02f411dc(param_5,uVar6);
  return 1;
switchD_0574ccd4_caseD_c:
  if (param_2 == (long *)0x0) {
LAB_0574cec4:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar5 = FUN_0574aba8(iVar3,param_2[7],param_4,param_5);
  if ((uVar5 & 1) == 0) {
switchD_0574ccd4_caseD_e:
    *param_5 = 0;
    thunk_FUN_02f411dc(param_5,0);
    return 0;
  }
  uVar8 = *param_5;
  uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
  uVar4 = FUN_05749808(0,uVar8);
  FUN_05747788(uVar6,uVar8,uVar4);
  *param_5 = uVar6;
  goto LAB_0574cea8;
}


