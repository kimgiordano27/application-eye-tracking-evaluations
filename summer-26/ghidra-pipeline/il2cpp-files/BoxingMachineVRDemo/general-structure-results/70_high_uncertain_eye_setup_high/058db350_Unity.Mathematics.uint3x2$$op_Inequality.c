/*
FUNCTION_NAME: Unity.Mathematics.uint3x2$$op_Inequality
ENTRY_POINT: 058db350
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Mathematics_uint3x2__op_Inequality(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *unaff_x29;
  undefined8 uStack0000000000000000;
  ulong in_stack_00000008;
  
  if ((param_1 & 1) != 0) {
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x20),0);
    return;
  }
  plVar12 = (long *)(unaff_x19 + 0x20);
  lVar11 = *plVar12;
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = UnityEngine_Font__add_textureRebuilt(lVar11);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_0606f530();
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
  lVar11 = FUN_0636fcc4(*plVar12);
  if (lVar11 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_0606a288(lVar11,0);
  }
  if (unaff_x23 == 0) {
LAB_058db308:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  plVar6 = (long *)FUN_033f3a08();
  if (plVar6 == (long *)0x0) {
    uStack0000000000000000 = 0;
  }
  else {
    bVar3 = *(byte *)(*(long *)PTR_DAT_06767c48 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_06767c48)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88();
    }
    uStack0000000000000000 = FUN_06066c74(plVar6,0);
  }
  lVar11 = *plVar12;
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_0606a004(lVar11,0,0);
  if ((uVar4 & 1) != 0) {
    if (*plVar12 == 0) goto LAB_058db308;
    lVar11 = FUN_0606a288(*plVar12,0);
    while( true ) {
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar4 = FUN_0606a004(lVar11,0,0);
      if ((uVar4 & 1) == 0) break;
      if (*(char *)(unaff_x20 + 0x28) == '\0') {
LAB_058db4f4:
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = UnityEngine_Font__add_textureRebuilt(lVar11,uStack0000000000000000,0);
        if ((uVar4 & 1) != 0) break;
      }
      else {
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = UnityEngine_Font__add_textureRebuilt(lVar11,uVar5,0);
        if ((uVar4 & 1) != 0) break;
        if (*(char *)(unaff_x20 + 0x28) == '\0') goto LAB_058db4f4;
      }
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar4 = FUN_0606a004(lVar11,uVar5,0);
      if ((uVar4 & 1) == 0) {
        bVar3 = 0;
      }
      else {
        lVar13 = *plVar12;
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        bVar3 = FUN_0606a004(lVar13);
        bVar3 = bVar3 & 1;
      }
      *(byte *)(unaff_x19 + 0x17c) = bVar3;
      if (lVar11 == 0) goto LAB_058db308;
      uVar7 = FUN_06066d44(lVar11,0);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*unaff_x21);
      }
      if (DAT_06b80b99 == '\0') {
        FUN_02d6084c();
        DAT_06b80b99 = '\x01';
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_033c3938(uVar7);
      lVar13 = *(long *)(unaff_x19 + 0xf0);
      uVar7 = FUN_06066d44(lVar11,0);
      if (lVar13 == 0) goto LAB_058db308;
      FUN_03aad8e0(lVar13,uVar7,*(undefined8 *)OVRPlugin_OVRP_1_53_0_TypeInfo);
      if (*(char *)(unaff_x20 + 0x28) != '\0') {
        lVar11 = thunk_FUN_060795f8(lVar11,0);
      }
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar4 = UnityEngine_Font__add_textureRebuilt(lVar11,uVar5,0);
      if ((uVar4 & 1) != 0) break;
      if (*(char *)(unaff_x20 + 0x28) == '\0') {
        if (lVar11 == 0) goto LAB_058db308;
        lVar11 = thunk_FUN_060795f8(lVar11,0);
      }
    }
  }
  lVar11 = *plVar12;
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_0606f530(lVar11,0);
  uVar7 = 0;
  if ((uVar4 & 1) != 0) {
    if (*plVar12 == 0) goto LAB_058db308;
    uVar7 = FUN_0606a288(*plVar12,0);
  }
  *plVar12 = unaff_x23;
  thunk_FUN_02dd37b4(plVar12);
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_0606a004();
  if ((uVar4 & 1) != 0) {
    lVar11 = FUN_0606a288();
    puVar2 = PTR_DAT_06761100;
    while( true ) {
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar4 = FUN_0606a004(lVar11,0,0);
      if (((uVar4 & 1) == 0) || (uVar4 = FUN_058daf80(), (uVar4 & 1) != 0)) break;
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar4 = UnityEngine_Font__add_textureRebuilt(lVar11,uVar5,0);
      if ((uVar4 & 1) == 0) {
        *(undefined1 *)(unaff_x19 + 0x17d) = 0;
      }
      else {
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        bVar3 = FUN_0606a004(lVar11,uVar7,0);
        *(byte *)(unaff_x19 + 0x17d) = bVar3 & 1;
        if ((*(char *)(unaff_x20 + 0x28) != '\0') && ((bVar3 & 1) != 0)) {
          return;
        }
      }
      if (lVar11 == 0) goto LAB_058db308;
      uVar8 = FUN_06066d44(lVar11,0);
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
      FUN_033c3938(uVar8);
      if ((in_stack_00000008 & 0x100000000) != 0) {
        uVar8 = FUN_06066d44(lVar11,0);
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
        FUN_033c3938(uVar8);
      }
      lVar13 = *(long *)(unaff_x19 + 0xf0);
      uVar8 = FUN_06066d44(lVar11,0);
      if (lVar13 == 0) goto LAB_058db308;
      lVar9 = *(long *)(lVar13 + 0x10);
      lVar10 = *(long *)puVar2;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_058db308;
      uVar1 = *(uint *)(lVar13 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
        thunk_FUN_02dd37b4();
      }
      else {
        FUN_03aac494(lVar13,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70)
                    );
      }
      if (*(char *)(unaff_x20 + 0x28) == '\0') {
        lVar13 = FUN_0335b1b8(lVar11,*(undefined8 *)OVRPlugin_OVRP_1_48_0_TypeInfo);
        if (lVar13 != 0) {
          return;
        }
        if (*(char *)(unaff_x20 + 0x28) != '\0') goto LAB_058db90c;
      }
      else {
LAB_058db90c:
        lVar11 = thunk_FUN_060795f8(lVar11,0);
      }
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar4 = UnityEngine_Font__add_textureRebuilt(lVar11,uVar5,0);
      if ((uVar4 & 1) != 0) {
        return;
      }
      if (*(char *)(unaff_x20 + 0x28) == '\0') {
        if (lVar11 == 0) goto LAB_058db308;
        lVar11 = thunk_FUN_060795f8(lVar11,0);
      }
    }
  }
  return;
}


