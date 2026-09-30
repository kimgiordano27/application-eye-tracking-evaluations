/*
FUNCTION_NAME: FUN_083e9534
ENTRY_POINT: 083e9534
PROGRAM: m3ar-libil2cpp.so
SCORE: 99
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_5;strong_foveation_hits_4;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8 FUN_083e9534(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  
  if ((DAT_0955221e & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f95a10);
    FUN_0403162c(PTR_DAT_08ffe600);
    FUN_0403162c(PTR_DAT_08ffe608);
    FUN_0403162c(PTR_DAT_08ffe610);
    FUN_0403162c(PTR_DAT_08ffe618);
    DAT_0955221e = 1;
  }
  puVar3 = PTR_DAT_08ffe618;
  puVar2 = PTR_DAT_08ffe610;
  puVar1 = PTR_DAT_08f95a10;
  iVar9 = 0;
  while( true ) {
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0408f364(lVar7);
      lVar7 = *(long *)puVar3;
    }
    puVar8 = *(undefined8 **)(lVar7 + 0xb8);
    lVar5 = puVar8[1];
    if (lVar5 == 0) goto Unity_XR_Oculus_Utils__SetFoveationLevel;
    if (*(int *)(lVar5 + 0x18) <= iVar9) break;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0408f364(lVar7);
      lVar5 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      if (lVar5 == 0) goto Unity_XR_Oculus_Utils__SetFoveationLevel;
    }
    FUN_0599b738(&local_58,lVar5,iVar9,*(undefined8 *)puVar2);
    uVar4 = local_58;
    lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
    uVar6 = FUN_083e96bc(local_58,uStack_50,local_48 & 1);
    if (lVar7 == 0) goto Unity_XR_Oculus_Utils__SetFoveationLevel;
    FUN_06fefd78(lVar7,uVar4,uVar6,*(undefined8 *)puVar1);
    iVar9 = iVar9 + 1;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0408f364(lVar7);
    puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    lVar5 = puVar8[1];
    if (lVar5 == 0) {
Unity_XR_Oculus_Utils__SetFoveationLevel:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
  }
  iVar9 = *(int *)(lVar5 + 0x18);
  *(undefined4 *)(lVar5 + 0x18) = 0;
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  if (0 < iVar9) {
    FUN_075082e0(*(undefined8 *)(lVar5 + 0x10),0,iVar9,0);
    puVar8 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
  }
  return *puVar8;
}


