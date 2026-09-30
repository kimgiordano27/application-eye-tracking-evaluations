/*
FUNCTION_NAME: Unity.Mathematics.uint3x2$$op_UnaryPlus
ENTRY_POINT: 058db194
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Mathematics_uint3x2__op_UnaryPlus(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  int unaff_w24;
  int iVar14;
  long *plVar15;
  undefined8 *unaff_x26;
  long lVar16;
  undefined8 uStack0000000000000000;
  ulong in_stack_00000008;
  
  do {
    puVar3 = PTR_DAT_0675e1b8;
    if (*(int *)(param_1 + 0x18) <= unaff_w24) {
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = UnityEngine_Font__add_textureRebuilt();
      if ((uVar7 & 1) == 0) {
        uVar6 = *(undefined8 *)(unaff_x19 + 0x20);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar7 = UnityEngine_Font__add_textureRebuilt(uVar6,0,0);
        if ((uVar7 & 1) == 0) goto LAB_058db380;
      }
      lVar8 = *(long *)(unaff_x19 + 0xf0);
      if (lVar8 != 0) {
        iVar14 = 0;
        goto LAB_058db28c;
      }
      break;
    }
    uVar6 = FUN_03aac1c4(param_1,unaff_w24,*unaff_x26);
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
    param_1 = *(long *)(unaff_x19 + 0xf0);
    unaff_w24 = unaff_w24 + 1;
  } while (param_1 != 0);
LAB_058db308:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
LAB_058db28c:
  iVar1 = *(int *)(lVar8 + 0x18);
  if (iVar14 < iVar1) {
    uVar6 = FUN_03aac1c4(lVar8,iVar14,*unaff_x26);
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
    FUN_033c3938(uVar6);
    lVar8 = *(long *)(unaff_x19 + 0xf0);
    iVar14 = iVar14 + 1;
    if (lVar8 == 0) goto LAB_058db308;
    goto LAB_058db28c;
  }
  *(undefined4 *)(lVar8 + 0x18) = 0;
  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
  if (0 < iVar1) {
    FUN_05029664(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar7 = UnityEngine_Font__add_textureRebuilt();
  if ((uVar7 & 1) != 0) {
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x20),0);
    return;
  }
LAB_058db380:
  plVar15 = (long *)(unaff_x19 + 0x20);
  lVar8 = *plVar15;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar7 = UnityEngine_Font__add_textureRebuilt(lVar8);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar7 = FUN_0606f530();
    if ((uVar7 & 1) != 0) {
      return;
    }
  }
  lVar8 = FUN_0636fcc4(*plVar15);
  if (lVar8 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0606a288(lVar8,0);
  }
  if (unaff_x23 == 0) goto LAB_058db308;
  plVar9 = (long *)FUN_033f3a08();
  if (plVar9 == (long *)0x0) {
    uStack0000000000000000 = 0;
  }
  else {
    bVar5 = *(byte *)(*(long *)PTR_DAT_06767c48 + 0x130);
    if ((*(byte *)(*plVar9 + 0x130) < bVar5) ||
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)PTR_DAT_06767c48)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88();
    }
    uStack0000000000000000 = FUN_06066c74(plVar9,0);
  }
  lVar8 = *plVar15;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar7 = FUN_0606a004(lVar8,0,0);
  if ((uVar7 & 1) != 0) {
    if (*plVar15 == 0) goto LAB_058db308;
    lVar8 = FUN_0606a288(*plVar15,0);
    while( true ) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = FUN_0606a004(lVar8,0,0);
      if ((uVar7 & 1) == 0) break;
      if (*(char *)(unaff_x20 + 0x28) != '\0') {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar7 = UnityEngine_Font__add_textureRebuilt(lVar8,uVar6,0);
        if ((uVar7 & 1) == 0) {
          if (*(char *)(unaff_x20 + 0x28) == '\0') goto LAB_058db4f4;
          goto LAB_058db518;
        }
        break;
      }
LAB_058db4f4:
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = UnityEngine_Font__add_textureRebuilt(lVar8,uStack0000000000000000,0);
      if ((uVar7 & 1) != 0) break;
LAB_058db518:
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = FUN_0606a004(lVar8,uVar6,0);
      if ((uVar7 & 1) == 0) {
        bVar5 = 0;
      }
      else {
        lVar16 = *plVar15;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        bVar5 = FUN_0606a004(lVar16);
        bVar5 = bVar5 & 1;
      }
      *(byte *)(unaff_x19 + 0x17c) = bVar5;
      if (lVar8 == 0) goto LAB_058db308;
      uVar10 = FUN_06066d44(lVar8,0);
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
      FUN_033c3938(uVar10);
      lVar16 = *(long *)(unaff_x19 + 0xf0);
      uVar10 = FUN_06066d44(lVar8,0);
      if (lVar16 == 0) goto LAB_058db308;
      FUN_03aad8e0(lVar16,uVar10,*(undefined8 *)OVRPlugin_OVRP_1_53_0_TypeInfo);
      if (*(char *)(unaff_x20 + 0x28) != '\0') {
        lVar8 = thunk_FUN_060795f8(lVar8,0);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = UnityEngine_Font__add_textureRebuilt(lVar8,uVar6,0);
      if ((uVar7 & 1) != 0) break;
      if (*(char *)(unaff_x20 + 0x28) == '\0') {
        if (lVar8 == 0) goto LAB_058db308;
        lVar8 = thunk_FUN_060795f8(lVar8,0);
      }
    }
  }
  lVar8 = *plVar15;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar7 = FUN_0606f530(lVar8,0);
  uVar10 = 0;
  if ((uVar7 & 1) != 0) {
    if (*plVar15 == 0) goto LAB_058db308;
    uVar10 = FUN_0606a288(*plVar15,0);
  }
  *plVar15 = unaff_x23;
  thunk_FUN_02dd37b4(plVar15);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar7 = FUN_0606a004();
  if ((uVar7 & 1) == 0) {
    return;
  }
  lVar8 = FUN_0606a288();
  puVar4 = PTR_DAT_06761100;
  do {
    do {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = FUN_0606a004(lVar8,0,0);
      if ((uVar7 & 1) == 0) {
        return;
      }
      uVar7 = FUN_058daf80();
      if ((uVar7 & 1) != 0) {
        return;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = UnityEngine_Font__add_textureRebuilt(lVar8,uVar6,0);
      if ((uVar7 & 1) == 0) {
        *(undefined1 *)(unaff_x19 + 0x17d) = 0;
      }
      else {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        bVar5 = FUN_0606a004(lVar8,uVar10,0);
        *(byte *)(unaff_x19 + 0x17d) = bVar5 & 1;
        if ((*(char *)(unaff_x20 + 0x28) != '\0') && ((bVar5 & 1) != 0)) {
          return;
        }
      }
      if (lVar8 == 0) goto LAB_058db308;
      uVar11 = FUN_06066d44(lVar8,0);
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
      FUN_033c3938(uVar11);
      if ((in_stack_00000008 & 0x100000000) != 0) {
        uVar11 = FUN_06066d44(lVar8,0);
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
        FUN_033c3938(uVar11);
      }
      lVar16 = *(long *)(unaff_x19 + 0xf0);
      uVar11 = FUN_06066d44(lVar8,0);
      if (lVar16 == 0) goto LAB_058db308;
      lVar12 = *(long *)(lVar16 + 0x10);
      lVar13 = *(long *)puVar4;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_058db308;
      uVar2 = *(uint *)(lVar16 + 0x18);
      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar16 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
        thunk_FUN_02dd37b4();
      }
      else {
        FUN_03aac494(lVar16,uVar11,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
      if (*(char *)(unaff_x20 + 0x28) == '\0') {
        lVar16 = FUN_0335b1b8(lVar8,*(undefined8 *)OVRPlugin_OVRP_1_48_0_TypeInfo);
        if (lVar16 != 0) {
          return;
        }
        if (*(char *)(unaff_x20 + 0x28) != '\0') goto LAB_058db90c;
      }
      else {
LAB_058db90c:
        lVar8 = thunk_FUN_060795f8(lVar8,0);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = UnityEngine_Font__add_textureRebuilt(lVar8,uVar6,0);
      if ((uVar7 & 1) != 0) {
        return;
      }
    } while (*(char *)(unaff_x20 + 0x28) != '\0');
    if (lVar8 == 0) goto LAB_058db308;
    lVar8 = thunk_FUN_060795f8(lVar8,0);
  } while( true );
}


