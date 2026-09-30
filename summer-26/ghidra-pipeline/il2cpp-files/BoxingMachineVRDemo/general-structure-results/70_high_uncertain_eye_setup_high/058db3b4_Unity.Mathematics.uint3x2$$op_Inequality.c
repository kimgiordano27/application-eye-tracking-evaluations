/*
FUNCTION_NAME: Unity.Mathematics.uint3x2$$op_Inequality
ENTRY_POINT: 058db3b4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Mathematics_uint3x2__op_Inequality(void)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int in_w8;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  long *unaff_x25;
  long lVar12;
  long *unaff_x29;
  undefined8 uStack0000000000000000;
  ulong in_stack_00000008;
  
  if (in_w8 == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_0606f530();
  if ((uVar4 & 1) == 0) {
    lVar5 = FUN_0636fcc4(*unaff_x25);
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_0606a288(lVar5,0);
    }
    if (unaff_x23 == 0) {
LAB_058db308:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    plVar7 = (long *)FUN_033f3a08();
    if (plVar7 == (long *)0x0) {
      uStack0000000000000000 = 0;
    }
    else {
      bVar3 = *(byte *)(*(long *)PTR_DAT_06767c48 + 0x130);
      if ((*(byte *)(*plVar7 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_06767c48))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88();
      }
      uStack0000000000000000 = FUN_06066c74(plVar7,0);
    }
    lVar5 = *unaff_x25;
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_0606a004(lVar5,0,0);
    if ((uVar4 & 1) != 0) {
      if (*unaff_x25 == 0) goto LAB_058db308;
      lVar5 = FUN_0606a288(*unaff_x25,0);
      while( true ) {
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_0606a004(lVar5,0,0);
        if ((uVar4 & 1) == 0) break;
        if (*(char *)(unaff_x20 + 0x28) == '\0') {
LAB_058db4f4:
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar4 = UnityEngine_Font__add_textureRebuilt(lVar5,uStack0000000000000000,0);
          if ((uVar4 & 1) != 0) break;
        }
        else {
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar4 = UnityEngine_Font__add_textureRebuilt(lVar5,uVar6,0);
          if ((uVar4 & 1) != 0) break;
          if (*(char *)(unaff_x20 + 0x28) == '\0') goto LAB_058db4f4;
        }
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_0606a004(lVar5,uVar6,0);
        if ((uVar4 & 1) == 0) {
          bVar3 = 0;
        }
        else {
          lVar12 = *unaff_x25;
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          bVar3 = FUN_0606a004(lVar12);
          bVar3 = bVar3 & 1;
        }
        *(byte *)(unaff_x19 + 0x17c) = bVar3;
        if (lVar5 == 0) goto LAB_058db308;
        uVar8 = FUN_06066d44(lVar5,0);
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
        FUN_033c3938(uVar8);
        lVar12 = *(long *)(unaff_x19 + 0xf0);
        uVar8 = FUN_06066d44(lVar5,0);
        if (lVar12 == 0) goto LAB_058db308;
        FUN_03aad8e0(lVar12,uVar8,*(undefined8 *)OVRPlugin_OVRP_1_53_0_TypeInfo);
        if (*(char *)(unaff_x20 + 0x28) != '\0') {
          lVar5 = thunk_FUN_060795f8(lVar5,0);
        }
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = UnityEngine_Font__add_textureRebuilt(lVar5,uVar6,0);
        if ((uVar4 & 1) != 0) break;
        if (*(char *)(unaff_x20 + 0x28) == '\0') {
          if (lVar5 == 0) goto LAB_058db308;
          lVar5 = thunk_FUN_060795f8(lVar5,0);
        }
      }
    }
    lVar5 = *unaff_x25;
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_0606f530(lVar5,0);
    uVar8 = 0;
    if ((uVar4 & 1) != 0) {
      if (*unaff_x25 == 0) goto LAB_058db308;
      uVar8 = FUN_0606a288(*unaff_x25,0);
    }
    *unaff_x25 = unaff_x23;
    thunk_FUN_02dd37b4();
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_0606a004();
    if ((uVar4 & 1) != 0) {
      lVar5 = FUN_0606a288();
      puVar2 = PTR_DAT_06761100;
      while( true ) {
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_0606a004(lVar5,0,0);
        if (((uVar4 & 1) == 0) || (uVar4 = FUN_058daf80(), (uVar4 & 1) != 0)) break;
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = UnityEngine_Font__add_textureRebuilt(lVar5,uVar6,0);
        if ((uVar4 & 1) == 0) {
          *(undefined1 *)(unaff_x19 + 0x17d) = 0;
        }
        else {
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          bVar3 = FUN_0606a004(lVar5,uVar8,0);
          *(byte *)(unaff_x19 + 0x17d) = bVar3 & 1;
          if ((*(char *)(unaff_x20 + 0x28) != '\0') && ((bVar3 & 1) != 0)) {
            return;
          }
        }
        if (lVar5 == 0) goto LAB_058db308;
        uVar9 = FUN_06066d44(lVar5,0);
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
        FUN_033c3938(uVar9);
        if ((in_stack_00000008 & 0x100000000) != 0) {
          uVar9 = FUN_06066d44(lVar5,0);
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
          FUN_033c3938(uVar9);
        }
        lVar12 = *(long *)(unaff_x19 + 0xf0);
        uVar9 = FUN_06066d44(lVar5,0);
        if (lVar12 == 0) goto LAB_058db308;
        lVar10 = *(long *)(lVar12 + 0x10);
        lVar11 = *(long *)puVar2;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_058db308;
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
          thunk_FUN_02dd37b4();
        }
        else {
          FUN_03aac494(lVar12,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        if (*(char *)(unaff_x20 + 0x28) == '\0') {
          lVar12 = FUN_0335b1b8(lVar5,*(undefined8 *)OVRPlugin_OVRP_1_48_0_TypeInfo);
          if (lVar12 != 0) {
            return;
          }
          if (*(char *)(unaff_x20 + 0x28) != '\0') goto LAB_058db90c;
        }
        else {
LAB_058db90c:
          lVar5 = thunk_FUN_060795f8(lVar5,0);
        }
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = UnityEngine_Font__add_textureRebuilt(lVar5,uVar6,0);
        if ((uVar4 & 1) != 0) {
          return;
        }
        if (*(char *)(unaff_x20 + 0x28) == '\0') {
          if (lVar5 == 0) goto LAB_058db308;
          lVar5 = thunk_FUN_060795f8(lVar5,0);
        }
      }
    }
  }
  return;
}


