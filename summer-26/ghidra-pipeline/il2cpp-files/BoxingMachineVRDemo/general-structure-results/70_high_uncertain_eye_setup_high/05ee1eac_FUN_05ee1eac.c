/*
FUNCTION_NAME: FUN_05ee1eac
ENTRY_POINT: 05ee1eac
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_05ee1eac(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
                    /* try { // try from 05ee1ebc to 05fe1edf has its CatchHandler @ 05ee27f0 */
  if ((DAT_06b83d35 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06760f68);
    FUN_02d6084c(PTR_DAT_06760f70);
                    /* try { // try from 05ee1ef8 to 05fe1f07 has its CatchHandler @ 05ee27b0 */
    FUN_02d6084c(PTR_DAT_06760f78);
    FUN_02d6084c(OVRPlugin_OVRP_1_49_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_50_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_51_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_06767fc8);
    FUN_02d6084c(PTR_DAT_06761100);
    FUN_02d6084c(PTR_DAT_06761098);
                    /* try { // try from 05ee1f48 to 05fe1f53 has its CatchHandler @ 05ee2778 */
    FUN_02d6084c(PTR_DAT_06760f80);
    FUN_02d6084c(OVRPlugin_OVRP_1_53_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_067626b8);
    FUN_02d6084c(PTR_DAT_067626c0);
                    /* try { // try from 05ee1f7c to 05fe1f8b has its CatchHandler @ 05ee27ac */
    FUN_02d6084c(PTR_DAT_0675e1b8);
    DAT_06b83d35 = 1;
  }
  puVar6 = PTR_DAT_06767fc8;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (param_2 == 0) goto LAB_05ee20a0;
  lVar11 = *(long *)(param_2 + 0x50);
  uVar7 = FUN_0636a7fc(param_2,0);
  puVar5 = OVRPlugin_OVRP_1_51_0_TypeInfo;
  puVar2 = PTR_DAT_067626c0;
  if ((uVar7 & 1) != 0) {
    lVar8 = *(long *)(param_2 + 0xf0);
                    /* try { // try from 05ee1fc0 to 05fe1fcb has its CatchHandler @ 05ee2784 */
    if (lVar8 != 0) {
      iVar16 = 0;
      do {
                    /* try { // try from 05ee1fe4 to 05fe1ff3 has its CatchHandler @ 05ee27a8 */
        if (*(int *)(lVar8 + 0x18) <= iVar16) goto LAB_05ee20a4;
        lVar12 = *(long *)(param_1 + 0xd0);
        if (lVar12 != 0) {
          uVar9 = FUN_03aac1c4(lVar8,iVar16,*(undefined8 *)puVar2);
          if (lVar12 == 0) break;
          (**(code **)(lVar12 + 0x18))
                    (*(undefined8 *)(lVar12 + 0x40),uVar9,param_2,*(undefined8 *)(lVar12 + 0x28));
          lVar8 = *(long *)(param_2 + 0xf0);
          if (lVar8 == 0) break;
        }
                    /* try { // try from 05ee2030 to 05fe203b has its CatchHandler @ 05ee2774 */
        uVar9 = FUN_03aac1c4(lVar8,iVar16,*(undefined8 *)puVar2);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)puVar6);
        }
        if (DAT_06b80b98 == '\0') {
                    /* try { // try from 05ee2060 to 05fe206f has its CatchHandler @ 05ee27a4 */
          FUN_02d6084c(puVar6);
          DAT_06b80b98 = '\x01';
        }
        lVar8 = *(long *)puVar6;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar8 = *(long *)puVar6;
        }
        FUN_033c3938(uVar9,param_2,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)puVar5);
        lVar8 = *(long *)(param_2 + 0xf0);
        iVar16 = iVar16 + 1;
      } while (lVar8 != 0);
    }
    goto LAB_05ee20a0;
  }
LAB_05ee20a4:
  puVar2 = PTR_DAT_0675e1b8;
                    /* try { // try from 05ee20ac to 05fe20b7 has its CatchHandler @ 05ee2770 */
  if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar5 = OVRPlugin_OVRP_1_50_0_TypeInfo;
  uVar10 = UnityEngine_Font__add_textureRebuilt(lVar11,0,0);
                    /* try { // try from 05ee20d8 to 05fe20e7 has its CatchHandler @ 05ee27a0 */
  if ((uVar10 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
                    /* try { // try from 05ee20f4 to 05fe2117 has its CatchHandler @ 05ee27ec */
    uVar10 = UnityEngine_Font__add_textureRebuilt(uVar9,0,0);
    if ((uVar10 & 1) != 0) goto LAB_05ee2104;
  }
  else {
LAB_05ee2104:
    puVar4 = PTR_DAT_06760f70;
    puVar3 = PTR_DAT_06760f68;
    if (*(long *)(param_2 + 0xf0) == 0) goto LAB_05ee20a0;
    FUN_03aaceb0(&local_98,*(long *)(param_2 + 0xf0),*(undefined8 *)PTR_DAT_06760f80);
                    /* try { // try from 05ee2130 to 05fe2137 has its CatchHandler @ 05ee2784 */
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
    while (uVar10 = FUN_04a7a4a0(&local_80,*(undefined8 *)puVar4), uVar9 = local_70,
          (uVar10 & 1) != 0) {
      lVar8 = *(long *)(param_1 + 0xb0);
      if (lVar8 != 0) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05ee26ac to 05fe26af has its CatchHandler @ 05ee272c */
          FUN_02d60ae8();
        }
        (**(code **)(lVar8 + 0x18))
                  (*(undefined8 *)(lVar8 + 0x40),local_70,param_2,*(undefined8 *)(lVar8 + 0x28));
      }
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if (DAT_06b80b99 == '\0') {
                    /* try { // try from 05ee21a8 to 05fe21d3 has its CatchHandler @ 05ee277c */
        FUN_02d6084c(puVar6);
        DAT_06b80b99 = '\x01';
      }
      lVar8 = *(long *)puVar6;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar8 = *(long *)puVar6;
      }
                    /* try { // try from 05ee21d4 to 05fe21df has its CatchHandler @ 05ee2728 */
      FUN_033c3938(uVar9,param_2,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10),
                   *(undefined8 *)puVar5);
    }
    FUN_04a7a49c(&local_80,*(undefined8 *)puVar3);
    lVar8 = *(long *)(param_2 + 0xf0);
                    /* try { // try from 05ee21f0 to 05fe2213 has its CatchHandler @ 05ee27e8 */
    if (lVar8 == 0) goto LAB_05ee20a0;
    iVar16 = *(int *)(lVar8 + 0x18);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (0 < iVar16) {
      FUN_05029664(*(undefined8 *)(lVar8 + 0x10),0,iVar16,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
                    /* try { // try from 05ee222c to 05fe2237 has its CatchHandler @ 05ee2778 */
    uVar10 = UnityEngine_Font__add_textureRebuilt(lVar11,0,0);
                    /* try { // try from 05ee223c to 05fe223f has its CatchHandler @ 05ee2734 */
    if ((uVar10 & 1) != 0) {
      *(undefined8 *)(param_2 + 0x20) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(param_2 + 0x20),0);
      return;
                    /* try { // try from 05ee2250 to 05fe2277 has its CatchHandler @ 05ee27fc */
    }
  }
  plVar17 = (long *)(param_2 + 0x20);
  lVar8 = *plVar17;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar10 = UnityEngine_Font__add_textureRebuilt(lVar8,lVar11,0);
  if ((uVar10 & 1) != 0) {
                    /* try { // try from 05ee268c to 05fe268f has its CatchHandler @ 05ee27b0 */
                    /* try { // try from 05ee2690 to 05fe2693 has its CatchHandler @ 05ee27ac */
                    /* try { // try from 05ee2694 to 05fe2697 has its CatchHandler @ 05ee27a8 */
                    /* try { // try from 05ee2698 to 05fe269b has its CatchHandler @ 05ee27a4 */
                    /* try { // try from 05ee269c to 05fe269f has its CatchHandler @ 05ee27a0 */
                    /* try { // try from 05ee26a0 to 05fe26a3 has its CatchHandler @ 05ee27f4 */
                    /* try { // try from 05ee26a4 to 05fe26a7 has its CatchHandler @ 05ee2800 */
                    /* try { // try from 05ee26a8 to 05fe26ab has its CatchHandler @ 05ee27fc */
    return;
  }
  lVar8 = FUN_0636fcc4(*plVar17,lVar11,0);
                    /* try { // try from 05ee2290 to 05fe2297 has its CatchHandler @ 05ee2774 */
  lVar12 = *plVar17;
                    /* try { // try from 05ee229c to 05fe22a3 has its CatchHandler @ 05ee273c */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar2);
  }
                    /* try { // try from 05ee22b4 to 05fe22db has its CatchHandler @ 05ee2800 */
  uVar10 = FUN_0606a004(lVar12,0,0);
  if ((uVar10 & 1) == 0) {
LAB_05ee2424:
                    /* try { // try from 05ee242c to 05fe24ab has its CatchHandler @ 05ee295c */
    *plVar17 = lVar11;
    thunk_FUN_02dd37b4(plVar17,lVar11);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar10 = FUN_0606a004(lVar11,0,0);
    if ((uVar10 & 1) == 0) {
      return;
    }
    if (lVar11 != 0) {
      lVar11 = FUN_0606a288(lVar11,0);
      puVar5 = PTR_DAT_06761100;
      while( true ) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar10 = FUN_0606a004(lVar11,0,0);
        if ((uVar10 & 1) == 0) {
          return;
        }
        if (lVar11 == 0) break;
        uVar9 = FUN_06066d44(lVar11,0);
                    /* try { // try from 05ee24b8 to 05fe24bf has its CatchHandler @ 05ee2944 */
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 05ee24cc to 05fe24d3 has its CatchHandler @ 05ee2940 */
          thunk_FUN_02dbd7b4(*(long *)puVar2);
        }
        uVar10 = FUN_0606a004(uVar9,lVar8,0);
                    /* try { // try from 05ee24e0 to 05fe25ab has its CatchHandler @ 05ee2960 */
        if ((uVar10 & 1) == 0) {
          return;
        }
        uVar9 = FUN_06066d44(lVar11,0);
        lVar12 = *(long *)(param_1 + 0xa8);
        if (lVar12 != 0) {
          if (lVar12 == 0) break;
          (**(code **)(lVar12 + 0x18))
                    (*(undefined8 *)(lVar12 + 0x40),uVar9,param_2,*(undefined8 *)(lVar12 + 0x28));
        }
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (DAT_06b80b9a == '\0') {
          FUN_02d6084c(puVar6);
          DAT_06b80b9a = '\x01';
        }
        lVar12 = *(long *)puVar6;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar12 = *(long *)puVar6;
        }
        FUN_033c3938(uVar9,param_2,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8),
                     *(undefined8 *)OVRPlugin_OVRP_1_49_0_TypeInfo);
        if ((uVar7 & 1) != 0) {
          lVar12 = *(long *)(param_1 + 0xd0);
          if (lVar12 != 0) {
            if (lVar12 == 0) break;
            (**(code **)(lVar12 + 0x18))
                      (*(undefined8 *)(lVar12 + 0x40),uVar9,param_2,*(undefined8 *)(lVar12 + 0x28));
          }
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if (DAT_06b80b98 == '\0') {
                    /* try { // try from 05ee25d0 to 05fe25d7 has its CatchHandler @ 05ee295c */
            FUN_02d6084c(puVar6);
                    /* try { // try from 05ee25d8 to 05fe25db has its CatchHandler @ 05ee2950 */
                    /* try { // try from 05ee25dc to 05fe25df has its CatchHandler @ 05ee294c */
            DAT_06b80b98 = '\x01';
          }
                    /* try { // try from 05ee25e0 to 05fe25e3 has its CatchHandler @ 05ee2948 */
          lVar12 = *(long *)puVar6;
                    /* try { // try from 05ee25e4 to 05fe25f3 has its CatchHandler @ 05ee2960 */
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar12 = *(long *)puVar6;
          }
                    /* try { // try from 05ee25f4 to 05fe25f7 has its CatchHandler @ 05ee27f4 */
                    /* try { // try from 05ee25f8 to 05fe25ff has its CatchHandler @ 05ee27e4 */
                    /* try { // try from 05ee2600 to 05fe2607 has its CatchHandler @ 05ee27e0 */
                    /* try { // try from 05ee2608 to 05fe260f has its CatchHandler @ 05ee27dc */
                    /* try { // try from 05ee2610 to 05fe2617 has its CatchHandler @ 05ee27d8 */
          FUN_033c3938(uVar9,param_2,**(undefined8 **)(lVar12 + 0xb8),
                       *(undefined8 *)OVRPlugin_OVRP_1_51_0_TypeInfo);
        }
        lVar12 = *(long *)(param_2 + 0xf0);
                    /* try { // try from 05ee2618 to 05fe261f has its CatchHandler @ 05ee27d4 */
        if (lVar12 == 0) break;
                    /* try { // try from 05ee2620 to 05fe2627 has its CatchHandler @ 05ee27d0 */
        lVar13 = *(long *)(lVar12 + 0x10);
        lVar15 = *(long *)puVar5;
                    /* try { // try from 05ee2628 to 05fe262f has its CatchHandler @ 05ee27cc */
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                    /* try { // try from 05ee2630 to 05fe2637 has its CatchHandler @ 05ee27c8 */
        if (lVar13 == 0) break;
        uVar1 = *(uint *)(lVar12 + 0x18);
                    /* try { // try from 05ee2638 to 05fe263f has its CatchHandler @ 05ee27c4 */
                    /* try { // try from 05ee2640 to 05fe2647 has its CatchHandler @ 05ee27c0 */
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                    /* try { // try from 05ee2648 to 05fe264f has its CatchHandler @ 05ee27bc */
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                    /* try { // try from 05ee2650 to 05fe2657 has its CatchHandler @ 05ee27b8 */
          puVar14 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
          *puVar14 = uVar9;
                    /* try { // try from 05ee2658 to 05fe265b has its CatchHandler @ 05ee276c */
                    /* try { // try from 05ee265c to 05fe265f has its CatchHandler @ 05ee2768 */
          thunk_FUN_02dd37b4(puVar14,uVar9);
                    /* try { // try from 05ee2660 to 05fe2663 has its CatchHandler @ 05ee2764 */
        }
        else {
                    /* try { // try from 05ee2664 to 05fe2667 has its CatchHandler @ 05ee2760 */
                    /* try { // try from 05ee2668 to 05fe266b has its CatchHandler @ 05ee275c */
                    /* try { // try from 05ee266c to 05fe266f has its CatchHandler @ 05ee2758 */
                    /* try { // try from 05ee2670 to 05fe2673 has its CatchHandler @ 05ee2754 */
                    /* try { // try from 05ee2674 to 05fe2677 has its CatchHandler @ 05ee2750 */
          FUN_03aac494(lVar12,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
                    /* try { // try from 05ee2678 to 05fe267b has its CatchHandler @ 05ee274c */
                    /* try { // try from 05ee267c to 05fe267f has its CatchHandler @ 05ee2748 */
                    /* try { // try from 05ee2680 to 05fe2683 has its CatchHandler @ 05ee2744 */
        lVar11 = thunk_FUN_060795f8(lVar11,0);
                    /* try { // try from 05ee2684 to 05fe2687 has its CatchHandler @ 05ee2740 */
                    /* try { // try from 05ee2688 to 05fe268b has its CatchHandler @ 05ee27b4 */
      }
    }
  }
  else if (*plVar17 != 0) {
    lVar12 = FUN_0606a288(*plVar17,0);
    do {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
                    /* try { // try from 05ee22f4 to 05fe22fb has its CatchHandler @ 05ee2770 */
      uVar10 = FUN_0606a004(lVar12,0,0);
      if ((uVar10 & 1) == 0) goto LAB_05ee2424;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 05ee230c to 05fe230f has its CatchHandler @ 05ee27f4 */
        thunk_FUN_02dbd7b4();
      }
                    /* try { // try from 05ee231c to 05fe232b has its CatchHandler @ 05ee2738 */
      uVar10 = FUN_0606a004(lVar8,0,0);
      if ((uVar10 & 1) != 0) {
        if (lVar8 == 0) break;
        uVar9 = FUN_0606a288(lVar8,0);
                    /* try { // try from 05ee233c to 05fe2343 has its CatchHandler @ 05ee2730 */
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)puVar2);
        }
                    /* try { // try from 05ee2354 to 05fe237b has its CatchHandler @ 05ee27f8 */
        uVar10 = UnityEngine_Font__add_textureRebuilt(uVar9,lVar12,0);
        if ((uVar10 & 1) != 0) goto LAB_05ee2424;
      }
      if (lVar12 == 0) break;
      uVar9 = FUN_06066d44(lVar12,0);
      lVar13 = *(long *)(param_1 + 0xb0);
      if (lVar13 != 0) {
        if (lVar13 == 0) break;
        (**(code **)(lVar13 + 0x18))
                  (*(undefined8 *)(lVar13 + 0x40),uVar9,param_2,*(undefined8 *)(lVar13 + 0x28));
      }
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
                    /* try { // try from 05ee23b4 to 05fe23f3 has its CatchHandler @ 05ee2958 */
      if (DAT_06b80b99 == '\0') {
        FUN_02d6084c(puVar6);
        DAT_06b80b99 = '\x01';
      }
      lVar13 = *(long *)puVar6;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar13 = *(long *)puVar6;
      }
      FUN_033c3938(uVar9,param_2,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x10),
                   *(undefined8 *)puVar5);
      if (*(long *)(param_2 + 0xf0) == 0) break;
      FUN_03aad8e0(*(long *)(param_2 + 0xf0),uVar9,*(undefined8 *)OVRPlugin_OVRP_1_53_0_TypeInfo);
      lVar12 = thunk_FUN_060795f8(lVar12,0);
    } while( true );
  }
LAB_05ee20a0:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


