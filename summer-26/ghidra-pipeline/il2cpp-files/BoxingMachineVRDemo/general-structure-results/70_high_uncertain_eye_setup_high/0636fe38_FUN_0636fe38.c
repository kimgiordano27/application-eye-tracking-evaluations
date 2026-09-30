/*
FUNCTION_NAME: FUN_0636fe38
ENTRY_POINT: 0636fe38
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_14
*/


void FUN_0636fe38(long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined8 local_68;
  
  if ((DAT_06b8c658 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06767c48);
    FUN_02d6084c(OVRPlugin_OVRP_1_49_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_50_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_51_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_06767fc8);
    FUN_02d6084c(OVRPlugin_OVRP_1_52_0_TypeInfo);
    FUN_02d6084c(Method_Unity_VisualScripting_DivisionHandler_<>c_<_ctor>b__0_11__);
    FUN_02d6084c(PTR_DAT_06761100);
    FUN_02d6084c(PTR_DAT_06761098);
    FUN_02d6084c(OVRPlugin_OVRP_1_53_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_067626b8);
    FUN_02d6084c(PTR_DAT_067626c0);
    FUN_02d6084c(PTR_DAT_0675e1b8);
                    /* try { // try from 0636ff08 to 0646ff13 has its CatchHandler @ 063701b4 */
    DAT_06b8c658 = 1;
  }
  plVar15 = (long *)PTR_DAT_0675e1b8;
                    /* try { // try from 0636ff14 to 0647007f has its CatchHandler @ 0636fe00 */
  if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar8 = UnityEngine_Font__add_textureRebuilt(param_3,0,0);
  if ((uVar8 & 1) == 0) {
    if (param_2 == 0) goto LAB_063708ec;
    uVar10 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(*plVar15 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar8 = UnityEngine_Font__add_textureRebuilt(uVar10,0,0);
    if ((uVar8 & 1) != 0) goto LAB_0636ff70;
  }
  else {
    if (param_2 == 0) goto LAB_063708ec;
LAB_0636ff70:
    puVar6 = OVRPlugin_OVRP_1_51_0_TypeInfo;
    puVar5 = OVRPlugin_OVRP_1_50_0_TypeInfo;
    puVar4 = PTR_DAT_06767fc8;
    puVar3 = PTR_DAT_067626c0;
    lVar9 = *(long *)(param_2 + 0xf0);
    if (lVar9 == 0) goto LAB_063708ec;
    iVar1 = *(int *)(lVar9 + 0x18);
    if (0 < iVar1) {
      iVar16 = 0;
      do {
        *(undefined1 *)(param_2 + 0x17c) = 1;
        if (lVar9 == 0) goto LAB_063708ec;
        uVar10 = FUN_03aac1c4(lVar9,iVar16,*(undefined8 *)puVar3);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)puVar4);
        }
        if (DAT_06b80b98 == '\0') {
          FUN_02d6084c(puVar4);
          DAT_06b80b98 = '\x01';
        }
        lVar9 = *(long *)puVar4;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar9 = *(long *)puVar4;
        }
        FUN_033c3938(uVar10,param_2,**(undefined8 **)(lVar9 + 0xb8),*(undefined8 *)puVar6);
        if (*(long *)(param_2 + 0xf0) == 0) goto LAB_063708ec;
        uVar10 = FUN_03aac1c4(*(long *)(param_2 + 0xf0),iVar16,*(undefined8 *)puVar3);
        if (DAT_06b80b99 == '\0') {
          FUN_02d6084c(puVar4);
          DAT_06b80b99 = '\x01';
        }
        lVar9 = *(long *)puVar4;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar9 = *(long *)puVar4;
        }
        FUN_033c3938(uVar10,param_2,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10),
                     *(undefined8 *)puVar5);
        lVar9 = *(long *)(param_2 + 0xf0);
                    /* try { // try from 06370080 to 0647008b has its CatchHandler @ 06370170 */
        iVar16 = iVar16 + 1;
      } while (iVar1 != iVar16);
                    /* try { // try from 0637008c to 064700fb has its CatchHandler @ 0636fe00 */
      plVar15 = (long *)PTR_DAT_0675e1b8;
      if (lVar9 == 0) goto LAB_063708ec;
    }
    iVar1 = *(int *)(lVar9 + 0x18);
    *(undefined4 *)(lVar9 + 0x18) = 0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_05029664(*(undefined8 *)(lVar9 + 0x10),0,iVar1,0);
    }
    if (*(int *)(*plVar15 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar8 = UnityEngine_Font__add_textureRebuilt(param_3,0,0);
    if ((uVar8 & 1) != 0) {
      *(undefined8 *)(param_2 + 0x20) = 0;
                    /* try { // try from 063700fc to 06470107 has its CatchHandler @ 063701b4 */
                    /* try { // try from 06370108 to 0647013f has its CatchHandler @ 0636fe00 */
      thunk_FUN_02dd37b4((undefined8 *)(param_2 + 0x20),0);
      return;
    }
  }
  plVar17 = (long *)(param_2 + 0x20);
  lVar9 = *plVar17;
  if (*(int *)(*plVar15 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar8 = UnityEngine_Font__add_textureRebuilt(lVar9,param_3,0);
  if ((uVar8 & 1) != 0) {
                    /* try { // try from 06370140 to 0647014b has its CatchHandler @ 06370170 */
    if (*(int *)(*plVar15 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
                    /* try { // try from 0637014c to 06470187 has its CatchHandler @ 0636fe00 */
    uVar8 = FUN_0606f530(param_3,0);
    puVar5 = OVRPlugin_OVRP_1_51_0_TypeInfo;
    puVar4 = PTR_DAT_06767fc8;
    puVar3 = PTR_DAT_067626c0;
    if ((uVar8 & 1) != 0) {
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 06370080 with catch @ 06370170
                       catch(type#1 @ 0638da48) { ... } // from try @ 06370140 with catch @ 06370170
                        */
      if (*(float *)(param_2 + 0x10c) * *(float *)(param_2 + 0x10c) +
          *(float *)(param_2 + 0x110) * *(float *)(param_2 + 0x110) <= 0.0) {
        return;
      }
      lVar9 = *(long *)(param_2 + 0xf0);
      if (lVar9 != 0) {
        iVar1 = *(int *)(lVar9 + 0x18);
                    /* try { // try from 06370188 to 0647018b has its CatchHandler @ 0637019c */
        if (iVar1 < 1) {
          return;
        }
                    /* catch() { ... } // from try @ 06370188 with catch @ 0637019c */
                    /* try { // try from 063701a0 to 064701b3 has its CatchHandler @ 0637020c */
        iVar16 = 0;
        do {
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0636ff08 with catch @ 063701b4
                       catch(type#1 @ 0638da48) { ... } // from try @ 063700fc with catch @ 063701b4
                       try { // try from 063701b4 to 064701cb has its CatchHandler @ 0636fe00 */
          uVar10 = FUN_03aac1c4(lVar9,iVar16,*(undefined8 *)puVar3);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    /* try { // try from 063701cc to 064701cf has its CatchHandler @ 063701ec */
                    /* try { // try from 063701d0 to 064701ef has its CatchHandler @ 0636fe00 */
            thunk_FUN_02dbd7b4(*(long *)puVar4);
          }
          if (DAT_06b80b98 == '\0') {
            FUN_02d6084c(puVar4);
            DAT_06b80b98 = '\x01';
          }
          lVar9 = *(long *)puVar4;
                    /* catch() { ... } // from try @ 063701cc with catch @ 063701ec */
                    /* try { // try from 063701f0 to 064701f7 has its CatchHandler @ 0637020c */
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
                    /* try { // try from 063701f8 to 06470203 has its CatchHandler @ 0636fe00 */
            lVar9 = *(long *)puVar4;
          }
                    /* try { // try from 06370204 to 0647020b has its CatchHandler @ 0637020c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 063701a0 with catch @ 0637020c
                       catch(type#2 @ 00000000) { ... } // from try @ 063701f0 with catch @ 0637020c
                       catch(type#2 @ 00000000) { ... } // from try @ 06370204 with catch @ 0637020c
                        */
          FUN_033c3938(uVar10,param_2,**(undefined8 **)(lVar9 + 0xb8),*(undefined8 *)puVar5);
          iVar16 = iVar16 + 1;
          if (iVar1 == iVar16) {
            return;
          }
          lVar9 = *(long *)(param_2 + 0xf0);
        } while (lVar9 != 0);
      }
      goto LAB_063708ec;
    }
  }
  lVar9 = FUN_0636fcc4(*plVar17,param_3);
  if (param_3 == 0) {
LAB_063708ec:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  plVar11 = (long *)FUN_033f3a08(param_3,*(undefined8 *)OVRPlugin_OVRP_1_52_0_TypeInfo);
  if (plVar11 == (long *)0x0) {
    local_68 = 0;
  }
  else {
    bVar7 = *(byte *)(*(long *)PTR_DAT_06767c48 + 0x130);
    if ((*(byte *)(*plVar11 + 0x130) < bVar7) ||
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)PTR_DAT_06767c48))
    {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88();
    }
    local_68 = FUN_06066d44(plVar11,0);
  }
  lVar18 = *plVar17;
  if (*(int *)(*plVar15 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar8 = FUN_0606a004(lVar18,0,0);
  if ((uVar8 & 1) != 0) {
    if (*plVar17 == 0) goto LAB_063708ec;
    lVar18 = FUN_0606a288(*plVar17,0);
    puVar3 = PTR_DAT_06767fc8;
    while( true ) {
      if (*(int *)(*plVar15 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar8 = FUN_0606a004(lVar18,0,0);
      if ((uVar8 & 1) == 0) break;
      if (*(char *)(param_1 + 0x28) == '\0') {
LAB_06370388:
        if (lVar18 == 0) goto LAB_063708ec;
        uVar10 = FUN_06066d44(lVar18,0);
        if (*(int *)(*plVar15 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*plVar15);
        }
        uVar8 = UnityEngine_Font__add_textureRebuilt(local_68,uVar10,0);
        if ((uVar8 & 1) != 0) break;
      }
      else {
        if (*(int *)(*plVar15 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar8 = FUN_0606a004(lVar9,0,0);
        if ((uVar8 & 1) != 0) {
          if (lVar9 == 0) goto LAB_063708ec;
          uVar10 = FUN_0606a288(lVar9,0);
          if (*(int *)(*plVar15 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*plVar15);
          }
          uVar8 = UnityEngine_Font__add_textureRebuilt(uVar10,lVar18,0);
          if ((uVar8 & 1) != 0) break;
        }
        if (*(char *)(param_1 + 0x28) == '\0') goto LAB_06370388;
        if (lVar18 == 0) goto LAB_063708ec;
      }
      uVar10 = FUN_06066d44(lVar18,0);
      if (*(int *)(*plVar15 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*plVar15);
      }
      uVar8 = FUN_0606a004(uVar10,lVar9,0);
      if ((uVar8 & 1) == 0) {
        bVar7 = 0;
      }
      else {
        lVar19 = *plVar17;
        if (*(int *)(*plVar15 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        bVar7 = FUN_0606a004(lVar19,param_3,0);
        bVar7 = bVar7 & 1;
      }
      *(byte *)(param_2 + 0x17c) = bVar7;
      uVar10 = FUN_06066d44(lVar18,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)puVar3);
      }
      if (DAT_06b80b98 == '\0') {
        FUN_02d6084c(puVar3);
        DAT_06b80b98 = '\x01';
      }
      lVar19 = *(long *)puVar3;
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar19 = *(long *)puVar3;
      }
      FUN_033c3938(uVar10,param_2,**(undefined8 **)(lVar19 + 0xb8),
                   *(undefined8 *)OVRPlugin_OVRP_1_51_0_TypeInfo);
      uVar10 = FUN_06066d44(lVar18,0);
      if (DAT_06b80b99 == '\0') {
        FUN_02d6084c(puVar3);
        DAT_06b80b99 = '\x01';
      }
      lVar19 = *(long *)puVar3;
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar19 = *(long *)puVar3;
      }
      FUN_033c3938(uVar10,param_2,*(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x10),
                   *(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo);
      lVar19 = *(long *)(param_2 + 0xf0);
      uVar10 = FUN_06066d44(lVar18,0);
      if (lVar19 == 0) goto LAB_063708ec;
      FUN_03aad8e0(lVar19,uVar10,*(undefined8 *)OVRPlugin_OVRP_1_53_0_TypeInfo);
      if (*(char *)(param_1 + 0x28) != '\0') {
        lVar18 = thunk_FUN_060795f8(lVar18,0);
      }
      if (*(int *)(*plVar15 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar8 = FUN_0606a004(lVar9,0,0);
      if ((uVar8 & 1) != 0) {
        if (lVar9 == 0) goto LAB_063708ec;
        uVar10 = FUN_0606a288(lVar9,0);
        if (*(int *)(*plVar15 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*plVar15);
        }
        uVar8 = UnityEngine_Font__add_textureRebuilt(uVar10,lVar18,0);
        if ((uVar8 & 1) != 0) break;
      }
      if (*(char *)(param_1 + 0x28) == '\0') {
        if (lVar18 == 0) goto LAB_063708ec;
        lVar18 = thunk_FUN_060795f8(lVar18,0);
      }
    }
  }
  lVar18 = *plVar17;
  *plVar17 = param_3;
  thunk_FUN_02dd37b4(plVar17,param_3);
  if (*(int *)(*plVar15 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar8 = FUN_0606a004(param_3,0,0);
  if ((uVar8 & 1) != 0) {
    lVar19 = FUN_0606a288(param_3,0);
    puVar4 = PTR_DAT_06767fc8;
    puVar3 = PTR_DAT_06761100;
    while( true ) {
      if (*(int *)(*plVar15 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar8 = FUN_0606a004(lVar19,0,0);
      if ((uVar8 & 1) == 0) break;
      if (lVar19 == 0) goto LAB_063708ec;
      uVar10 = FUN_06066d44(lVar19,0);
      if (*(int *)(*plVar15 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*plVar15);
      }
      uVar8 = UnityEngine_Font__add_textureRebuilt(uVar10,lVar9,0);
      if ((uVar8 & 1) == 0) {
        *(undefined1 *)(param_2 + 0x17d) = 0;
      }
      else {
        uVar10 = FUN_06066d44(lVar19,0);
        if (*(int *)(*plVar15 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*plVar15);
        }
        bVar7 = FUN_0606a004(uVar10,lVar18,0);
        *(byte *)(param_2 + 0x17d) = bVar7 & 1;
        if ((*(char *)(param_1 + 0x28) != '\0') && ((bVar7 & 1) != 0)) {
          return;
        }
      }
      uVar10 = FUN_06066d44(lVar19,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)puVar4);
      }
      if (DAT_06b80b9a == '\0') {
        FUN_02d6084c(puVar4);
        DAT_06b80b9a = '\x01';
      }
      lVar12 = *(long *)puVar4;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar12 = *(long *)puVar4;
      }
      FUN_033c3938(uVar10,param_2,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),
                   *(undefined8 *)OVRPlugin_OVRP_1_49_0_TypeInfo);
      uVar10 = FUN_06066d44(lVar19,0);
      if (DAT_06b80b98 == '\0') {
        FUN_02d6084c(puVar4);
        DAT_06b80b98 = '\x01';
      }
      lVar12 = *(long *)puVar4;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar12 = *(long *)puVar4;
      }
      FUN_033c3938(uVar10,param_2,**(undefined8 **)(lVar12 + 0xb8),
                   *(undefined8 *)OVRPlugin_OVRP_1_51_0_TypeInfo);
      lVar12 = *(long *)(param_2 + 0xf0);
      uVar10 = FUN_06066d44(lVar19,0);
      if (lVar12 == 0) goto LAB_063708ec;
      lVar13 = *(long *)(lVar12 + 0x10);
      lVar14 = *(long *)puVar3;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_063708ec;
      uVar2 = *(uint *)(lVar12 + 0x18);
      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
        thunk_FUN_02dd37b4();
      }
      else {
        FUN_03aac494(lVar12,uVar10,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
      if (*(char *)(param_1 + 0x28) == '\0') {
        lVar12 = FUN_06066d44(lVar19,0);
        if (lVar12 == 0) goto LAB_063708ec;
        lVar12 = FUN_033f3478(lVar12,*(undefined8 *)
                                      Method_Unity_VisualScripting_DivisionHandler_<>c_<_ctor>b__0_11__
                             );
        if (lVar12 != 0) {
          return;
        }
        if (*(char *)(param_1 + 0x28) != '\0') goto LAB_0637083c;
      }
      else {
LAB_0637083c:
        lVar19 = thunk_FUN_060795f8(lVar19,0);
      }
      if (*(int *)(*plVar15 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar8 = FUN_0606a004(lVar9,0,0);
      if ((uVar8 & 1) != 0) {
        if (lVar9 == 0) goto LAB_063708ec;
        uVar10 = FUN_0606a288(lVar9,0);
        if (*(int *)(*plVar15 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*plVar15);
        }
        uVar8 = UnityEngine_Font__add_textureRebuilt(uVar10,lVar19,0);
        if ((uVar8 & 1) != 0) {
          return;
        }
      }
      if (*(char *)(param_1 + 0x28) == '\0') {
        if (lVar19 == 0) goto LAB_063708ec;
        lVar19 = thunk_FUN_060795f8(lVar19,0);
      }
    }
  }
  return;
}


