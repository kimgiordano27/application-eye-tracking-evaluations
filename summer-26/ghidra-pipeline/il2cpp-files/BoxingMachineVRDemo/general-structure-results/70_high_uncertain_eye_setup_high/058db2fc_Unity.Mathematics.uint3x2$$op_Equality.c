/*
FUNCTION_NAME: Unity.Mathematics.uint3x2$$op_Equality
ENTRY_POINT: 058db2fc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Mathematics_uint3x2__op_Equality(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  int unaff_w24;
  long *plVar13;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined1 unaff_w28;
  long lVar14;
  long *unaff_x29;
  undefined8 uStack0000000000000000;
  ulong in_stack_00000008;
  
  while( true ) {
    lVar6 = *(long *)(unaff_x19 + 0xf0);
    unaff_w24 = unaff_w24 + 1;
    if (lVar6 == 0) break;
    iVar1 = *(int *)(lVar6 + 0x18);
    if (iVar1 <= unaff_w24) {
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_05029664(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
      }
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = UnityEngine_Font__add_textureRebuilt();
      if ((uVar7 & 1) != 0) {
        *(undefined8 *)(unaff_x19 + 0x20) = 0;
        thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x20),0);
        return;
      }
      plVar13 = (long *)(unaff_x19 + 0x20);
      lVar6 = *plVar13;
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = UnityEngine_Font__add_textureRebuilt(lVar6);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar7 = FUN_0606f530();
        if ((uVar7 & 1) != 0) {
          return;
        }
      }
      lVar6 = FUN_0636fcc4(*plVar13);
      if (lVar6 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0606a288(lVar6,0);
      }
      if (unaff_x23 != 0) {
        plVar8 = (long *)FUN_033f3a08();
        if (plVar8 == (long *)0x0) {
          uStack0000000000000000 = 0;
        }
        else {
          bVar4 = *(byte *)(*(long *)PTR_DAT_06767c48 + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar4 * 8 + -8) !=
              *(long *)PTR_DAT_06767c48)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60e88();
          }
          uStack0000000000000000 = FUN_06066c74(plVar8,0);
        }
        lVar6 = *plVar13;
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar7 = FUN_0606a004(lVar6,0,0);
        if ((uVar7 & 1) == 0) goto LAB_058db664;
        if (*plVar13 != 0) {
          lVar6 = FUN_0606a288(*plVar13,0);
          goto LAB_058db49c;
        }
      }
      break;
    }
    uVar5 = FUN_03aac1c4(lVar6,unaff_w24,*unaff_x26);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*unaff_x21);
    }
    if (*(char *)(unaff_x27 + 0xb99) == '\0') {
      FUN_02d6084c();
      *(undefined1 *)(unaff_x27 + 0xb99) = unaff_w28;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_033c3938(uVar5);
  }
LAB_058db308:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
LAB_058db49c:
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar7 = FUN_0606a004(lVar6,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(char *)(unaff_x20 + 0x28) == '\0') {
LAB_058db4f4:
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = UnityEngine_Font__add_textureRebuilt(lVar6,uStack0000000000000000,0);
      if ((uVar7 & 1) != 0) goto LAB_058db664;
    }
    else {
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = UnityEngine_Font__add_textureRebuilt(lVar6,uVar5,0);
      if ((uVar7 & 1) != 0) goto LAB_058db664;
      if (*(char *)(unaff_x20 + 0x28) == '\0') goto LAB_058db4f4;
    }
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar7 = FUN_0606a004(lVar6,uVar5,0);
    if ((uVar7 & 1) == 0) {
      bVar4 = 0;
    }
    else {
      lVar14 = *plVar13;
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      bVar4 = FUN_0606a004(lVar14);
      bVar4 = bVar4 & 1;
    }
    *(byte *)(unaff_x19 + 0x17c) = bVar4;
    if (lVar6 == 0) goto LAB_058db308;
    uVar9 = FUN_06066d44(lVar6,0);
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
    FUN_033c3938(uVar9);
    lVar14 = *(long *)(unaff_x19 + 0xf0);
    uVar9 = FUN_06066d44(lVar6,0);
    if (lVar14 == 0) goto LAB_058db308;
    FUN_03aad8e0(lVar14,uVar9,*(undefined8 *)OVRPlugin_OVRP_1_53_0_TypeInfo);
    if (*(char *)(unaff_x20 + 0x28) != '\0') {
      lVar6 = thunk_FUN_060795f8(lVar6,0);
    }
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar7 = UnityEngine_Font__add_textureRebuilt(lVar6,uVar5,0);
    if ((uVar7 & 1) != 0) goto LAB_058db664;
    if (*(char *)(unaff_x20 + 0x28) == '\0') {
      if (lVar6 == 0) goto LAB_058db308;
      lVar6 = thunk_FUN_060795f8(lVar6,0);
    }
    goto LAB_058db49c;
  }
LAB_058db664:
  lVar6 = *plVar13;
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar7 = FUN_0606f530(lVar6,0);
  uVar9 = 0;
  if ((uVar7 & 1) != 0) {
    if (*plVar13 == 0) goto LAB_058db308;
    uVar9 = FUN_0606a288(*plVar13,0);
  }
  *plVar13 = unaff_x23;
  thunk_FUN_02dd37b4(plVar13);
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar7 = FUN_0606a004();
  if ((uVar7 & 1) != 0) {
    lVar6 = FUN_0606a288();
    puVar3 = PTR_DAT_06761100;
    while( true ) {
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = FUN_0606a004(lVar6,0,0);
      if (((uVar7 & 1) == 0) || (uVar7 = FUN_058daf80(), (uVar7 & 1) != 0)) break;
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = UnityEngine_Font__add_textureRebuilt(lVar6,uVar5,0);
      if ((uVar7 & 1) == 0) {
        *(undefined1 *)(unaff_x19 + 0x17d) = 0;
      }
      else {
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        bVar4 = FUN_0606a004(lVar6,uVar9,0);
        *(byte *)(unaff_x19 + 0x17d) = bVar4 & 1;
        if ((*(char *)(unaff_x20 + 0x28) != '\0') && ((bVar4 & 1) != 0)) {
          return;
        }
      }
      if (lVar6 == 0) goto LAB_058db308;
      uVar10 = FUN_06066d44(lVar6,0);
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
      FUN_033c3938(uVar10);
      if ((in_stack_00000008 & 0x100000000) != 0) {
        uVar10 = FUN_06066d44(lVar6,0);
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
        FUN_033c3938(uVar10);
      }
      lVar14 = *(long *)(unaff_x19 + 0xf0);
      uVar10 = FUN_06066d44(lVar6,0);
      if (lVar14 == 0) goto LAB_058db308;
      lVar11 = *(long *)(lVar14 + 0x10);
      lVar12 = *(long *)puVar3;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_058db308;
      uVar2 = *(uint *)(lVar14 + 0x18);
      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar14 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
        thunk_FUN_02dd37b4();
      }
      else {
        FUN_03aac494(lVar14,uVar10,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
      if (*(char *)(unaff_x20 + 0x28) == '\0') {
        lVar14 = FUN_0335b1b8(lVar6,*(undefined8 *)OVRPlugin_OVRP_1_48_0_TypeInfo);
        if (lVar14 != 0) {
          return;
        }
        if (*(char *)(unaff_x20 + 0x28) != '\0') goto LAB_058db90c;
      }
      else {
LAB_058db90c:
        lVar6 = thunk_FUN_060795f8(lVar6,0);
      }
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = UnityEngine_Font__add_textureRebuilt(lVar6,uVar5,0);
      if ((uVar7 & 1) != 0) {
        return;
      }
      if (*(char *)(unaff_x20 + 0x28) == '\0') {
        if (lVar6 == 0) goto LAB_058db308;
        lVar6 = thunk_FUN_060795f8(lVar6,0);
      }
    }
  }
  return;
}


