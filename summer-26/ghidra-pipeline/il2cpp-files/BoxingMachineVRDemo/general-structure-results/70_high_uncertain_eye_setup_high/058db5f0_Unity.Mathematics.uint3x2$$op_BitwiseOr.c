/*
FUNCTION_NAME: Unity.Mathematics.uint3x2$$op_BitwiseOr
ENTRY_POINT: 058db5f0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Mathematics_uint3x2__op_BitwiseOr(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  long *unaff_x25;
  long lVar9;
  long unaff_x26;
  long unaff_x27;
  long lVar10;
  long unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  ulong in_stack_00000008;
  
  do {
    FUN_03aad8e0(unaff_x28,param_1,*(undefined8 *)OVRPlugin_OVRP_1_53_0_TypeInfo);
    if (*(char *)(unaff_x20 + 0x28) != '\0') {
      unaff_x27 = thunk_FUN_060795f8(unaff_x27,0);
    }
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar5 = UnityEngine_Font__add_textureRebuilt(unaff_x27);
    if ((uVar5 & 1) != 0) {
LAB_058db664:
      lVar10 = *unaff_x25;
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_0606f530(lVar10,0);
      uVar4 = 0;
      if ((uVar5 & 1) != 0) {
        if (*unaff_x25 == 0) break;
        uVar4 = FUN_0606a288(*unaff_x25,0);
      }
      *unaff_x25 = unaff_x23;
      thunk_FUN_02dd37b4();
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = FUN_0606a004();
      if ((uVar5 & 1) == 0) {
        return;
      }
      lVar10 = FUN_0606a288();
      puVar2 = PTR_DAT_06761100;
      goto LAB_058db6f8;
    }
    if (*(char *)(unaff_x20 + 0x28) == '\0') {
      if (unaff_x27 == 0) break;
      unaff_x27 = thunk_FUN_060795f8(unaff_x27,0);
    }
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar5 = FUN_0606a004(unaff_x27,0,0);
    if ((uVar5 & 1) == 0) goto LAB_058db664;
    if (*(char *)(unaff_x20 + 0x28) == '\0') {
LAB_058db4f4:
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = UnityEngine_Font__add_textureRebuilt(unaff_x27,in_stack_00000000,0);
      if ((uVar5 & 1) != 0) goto LAB_058db664;
    }
    else {
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = UnityEngine_Font__add_textureRebuilt(unaff_x27);
      if ((uVar5 & 1) != 0) goto LAB_058db664;
      if (*(char *)(unaff_x20 + 0x28) == '\0') goto LAB_058db4f4;
    }
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar5 = FUN_0606a004(unaff_x27);
    if ((uVar5 & 1) == 0) {
      bVar3 = 0;
    }
    else {
      lVar10 = *unaff_x25;
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      bVar3 = FUN_0606a004(lVar10);
      bVar3 = bVar3 & 1;
    }
    *(byte *)(unaff_x19 + 0x17c) = bVar3;
    if (unaff_x27 == 0) break;
    uVar4 = FUN_06066d44(unaff_x27,0);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*unaff_x21);
    }
    if (*(char *)(unaff_x26 + 0xb99) == '\0') {
      FUN_02d6084c();
      *(undefined1 *)(unaff_x26 + 0xb99) = 1;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_033c3938(uVar4);
    unaff_x28 = *(long *)(unaff_x19 + 0xf0);
    param_1 = FUN_06066d44(unaff_x27,0);
  } while (unaff_x28 != 0);
LAB_058db308:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
LAB_058db6f8:
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_0606a004(lVar10,0,0);
  if (((uVar5 & 1) == 0) || (uVar5 = FUN_058daf80(), (uVar5 & 1) != 0)) {
    return;
  }
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = UnityEngine_Font__add_textureRebuilt(lVar10);
  if ((uVar5 & 1) == 0) {
    *(undefined1 *)(unaff_x19 + 0x17d) = 0;
  }
  else {
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    bVar3 = FUN_0606a004(lVar10,uVar4,0);
    *(byte *)(unaff_x19 + 0x17d) = bVar3 & 1;
    if ((*(char *)(unaff_x20 + 0x28) != '\0') && ((bVar3 & 1) != 0)) {
      return;
    }
  }
  if (lVar10 == 0) goto LAB_058db308;
  uVar6 = FUN_06066d44(lVar10,0);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*unaff_x21);
  }
  if (DAT_06b80b9a == '\0') {
    FUN_02d6084c();
    DAT_06b80b9a = '\x01';
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_033c3938(uVar6);
  if ((in_stack_00000008 & 0x100000000) != 0) {
    uVar6 = FUN_06066d44(lVar10,0);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*unaff_x21);
    }
    if (DAT_06b80b98 == '\0') {
      FUN_02d6084c();
      DAT_06b80b98 = '\x01';
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_033c3938(uVar6);
  }
  lVar9 = *(long *)(unaff_x19 + 0xf0);
  uVar6 = FUN_06066d44(lVar10,0);
  if (lVar9 == 0) goto LAB_058db308;
  lVar7 = *(long *)(lVar9 + 0x10);
  lVar8 = *(long *)puVar2;
  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
  if (lVar7 == 0) goto LAB_058db308;
  uVar1 = *(uint *)(lVar9 + 0x18);
  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
    *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
    thunk_FUN_02dd37b4();
  }
  else {
    FUN_03aac494(lVar9,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
  }
  if (*(char *)(unaff_x20 + 0x28) == '\0') {
    lVar9 = FUN_0335b1b8(lVar10,*(undefined8 *)OVRPlugin_OVRP_1_48_0_TypeInfo);
    if (lVar9 != 0) {
      return;
    }
    if (*(char *)(unaff_x20 + 0x28) != '\0') goto LAB_058db90c;
  }
  else {
LAB_058db90c:
    lVar10 = thunk_FUN_060795f8(lVar10,0);
  }
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = UnityEngine_Font__add_textureRebuilt(lVar10);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (*(char *)(unaff_x20 + 0x28) == '\0') {
    if (lVar10 == 0) goto LAB_058db308;
    lVar10 = thunk_FUN_060795f8(lVar10,0);
  }
  goto LAB_058db6f8;
}


