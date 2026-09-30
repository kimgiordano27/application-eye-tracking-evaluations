/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaSetFoveationEyeTracked
ENTRY_POINT: 0339011c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 138
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;validity_or_gating_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


uint Meta_XR_MetaXREyeTrackedFoveationFeature__MetaSetFoveationEyeTracked(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  undefined4 unaff_w24;
  ulong unaff_x25;
  ulong uVar6;
  uint unaff_w26;
  short *unaff_x27;
  short *psVar7;
  long unaff_x28;
  long unaff_x29;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  psVar7 = unaff_x27 + 10;
  psVar4 = psVar7;
  if ((int)unaff_x25 != 0) {
    iVar5 = -2;
    do {
      do {
        uVar3 = (uint)unaff_x25;
        uVar6 = (unaff_x25 & 0xffffffff) / 10;
        psVar4 = psVar4 + -1;
        *psVar4 = (short)unaff_x25 + (short)((unaff_x25 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar5 + -1;
        bVar1 = -1 < iVar5;
        unaff_x25 = uVar6;
        iVar5 = iVar2;
      } while (bVar1);
    } while (9 < uVar3);
  }
  uVar6 = (long)psVar7 - (long)psVar4;
  if ((long)uVar6 < 0) {
    uVar6 = uVar6 + 1;
  }
  uVar6 = uVar6 >> 1;
  *(int *)(unaff_x29 + -0x9c) = (int)uVar6;
  psVar7 = unaff_x27;
  if (-1 < (int)uVar6 + -1) {
    do {
      uVar3 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar3;
      unaff_x27 = psVar7 + 1;
      *psVar7 = *psVar4;
      psVar4 = psVar4 + 1;
      psVar7 = unaff_x27;
    } while (0 < (int)uVar3);
  }
  *unaff_x27 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_8 = 0;
  uStack_10 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  FUN_0329cecc(unaff_x29 + -0xd0,&uStack_40,0x20,0);
  if ((unaff_w26 & 0xffff) == 0) {
    if (*(int *)(*(long *)StringLiteral_4737 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_03396838(unaff_x29 + -0xd0,unaff_x29 + -0xa0);
  }
  else {
    if (*(int *)(*(long *)StringLiteral_4737 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033962d8(unaff_x29 + -0xd0,unaff_x29 + -0xa0,unaff_w26,unaff_w24,
                 *(undefined8 *)(unaff_x29 + -0xd8),0);
  }
  uVar3 = FUN_0329cfd4(unaff_x29 + -0xd0);
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3 & 1;
}


