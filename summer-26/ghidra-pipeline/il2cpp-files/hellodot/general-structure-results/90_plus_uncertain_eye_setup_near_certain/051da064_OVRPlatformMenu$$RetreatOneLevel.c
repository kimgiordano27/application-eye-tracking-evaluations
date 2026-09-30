/*
FUNCTION_NAME: OVRPlatformMenu$$RetreatOneLevel
ENTRY_POINT: 051da064
PROGRAM: hellodot-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_18;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlatformMenu__RetreatOneLevel(long param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  long *plVar21;
  uint uVar22;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  ulong in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  ulong in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  long in_stack_00000078;
  
  if ((DAT_06a71597 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06609088);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca370);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06609090);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06604b58);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d65c0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06609098);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066090a0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066090a8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066090b0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066090b8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066090c0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066090c8);
    DAT_06a71597 = 1;
  }
  puVar4 = PTR_DAT_065d65c0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  in_stack_00000078 = 0;
  _uStack0000000000000030 = 0;
  _uStack0000000000000038 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  plVar21 = *(long **)(param_1 + 0x38);
  if (plVar21 != (long *)0x0) {
    lVar13 = *plVar21;
    uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar17 != 0) {
      piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_065d65c0) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar20 + 0x11) * 0x10 + 0x138);
          goto LAB_051da190;
        }
        uVar17 = uVar17 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar17 != 0);
    }
    puVar8 = (undefined8 *)FUN_02ce0a7c(plVar21,*(long *)PTR_DAT_065d65c0,0x11);
LAB_051da190:
    uVar17 = (*(code *)*puVar8)(plVar21,puVar8[1]);
    if ((uVar17 & 1) == 0) {
      return;
    }
    uVar9 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_066090b8,0x13);
    *(undefined8 *)(param_1 + 0x78) = uVar9;
    lVar13 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ca370);
    FUN_05ef6494(lVar13,*(undefined8 *)PTR_DAT_066090c0,0);
    if (lVar13 != 0) {
      lVar13 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar13,0);
      uVar9 = FUN_05ef2cb4(param_1,0);
      if (lVar13 != 0) {
        FUN_05f02644(lVar13,uVar9,0,0);
        if (DAT_06a67148 == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
          DAT_06a67148 = '\x01';
        }
        puVar14 = *(undefined4 **)(*(long *)PTR_DAT_065c9850 + 0xb8);
        FUN_05f00f94(*puVar14,puVar14[1],puVar14[2],lVar13,0);
        if (DAT_06a67311 == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065caa08);
          DAT_06a67311 = '\x01';
        }
        puVar14 = *(undefined4 **)(*(long *)PTR_DAT_065caa08 + 0xb8);
        FUN_05f01e3c(*puVar14,puVar14[1],puVar14[2],puVar14[3],lVar13,0);
        lVar10 = FUN_05ef2cf0(lVar13,0);
        if (lVar10 != 0) {
          FUN_05ef5fec(lVar10,*(undefined4 *)(param_1 + 0x4c),0);
          lVar10 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_066090b0);
          FUN_03967c6c(lVar10,0x18,*(undefined8 *)PTR_DAT_066090a8);
          *(long *)(param_1 + 0x68) = lVar10;
          if (lVar10 != 0) {
            uVar9 = FUN_039685ec(lVar10,*(undefined8 *)PTR_DAT_066090a0);
            *(undefined8 *)(param_1 + 0x70) = uVar9;
            puVar7 = PTR_DAT_06609098;
            puVar6 = PTR_DAT_06609090;
            puVar5 = PTR_DAT_06604b58;
            uVar17 = 2;
            do {
              lVar10 = *(long *)puVar5;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
                lVar10 = *(long *)puVar5;
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
              if (lVar10 == 0) goto LAB_051da64c;
              if (*(uint *)(lVar10 + 0x18) <= uVar17) {
LAB_051da650:
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c84();
              }
              uVar1 = *(uint *)(lVar10 + uVar17 * 4 + 0x20);
              if ((uVar1 != 0xffffffff) &&
                 (uVar22 = (uint)uVar17,
                 (*(uint *)(param_1 + 0x50) >> (ulong)(uVar22 & 0x1f) & 1) != 0)) {
                plVar21 = *(long **)(param_1 + 0x38);
                if (plVar21 == (long *)0x0) goto LAB_051da64c;
                lVar15 = *plVar21;
                lVar10 = *(long *)puVar4;
                uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar18 != 0) {
                  piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == lVar10) {
                      puVar8 = (undefined8 *)(lVar15 + (long)(*piVar20 + 9) * 0x10 + 0x138);
                      goto OVRPlugin_LogCallback2DelegateType__EndInvoke;
                    }
                    uVar18 = uVar18 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar18 != 0);
                }
                puVar8 = (undefined8 *)FUN_02ce0a7c(plVar21,lVar10,9);
OVRPlugin_LogCallback2DelegateType__EndInvoke:
                (*(code *)*puVar8)(plVar21,uVar1,&stack0x00000050,puVar8[1]);
                uVar18 = FUN_051da660(param_1,uVar1,&stack0x00000078);
                if ((uVar18 & 1) == 0) {
                  uStack0000000000000024 = CONCAT44(in_stack_00000068,uStack0000000000000064);
                  uStack0000000000000018 = in_stack_00000058;
                  in_stack_00000010 = in_stack_00000050;
                  uStack000000000000001c = uStack000000000000005c;
                  uStack0000000000000020 = in_stack_00000060;
                  lVar10 = FUN_051da710(param_1,uVar1,lVar13,&stack0x00000010);
                  plVar21 = *(long **)(param_1 + 0x78);
                  in_stack_00000078 = lVar10;
                  if (plVar21 == (long *)0x0) goto LAB_051da64c;
                  if ((lVar10 != 0) &&
                     (lVar15 = thunk_FUN_02cea798(lVar10,*(undefined8 *)(*plVar21 + 0x40)),
                     lVar15 == 0)) {
                    uVar9 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
                    FUN_02ce7b54(uVar9,0);
                  }
                  if (*(uint *)(plVar21 + 3) <= uVar1) goto LAB_051da650;
                  plVar21[(long)(int)uVar1 + 4] = lVar10;
                }
                uStack000000000000000c = uVar1;
                uVar9 = thunk_FUN_02cea4e8(*(undefined8 *)puVar6,(long)&stack0x00000008 + 4);
                uStack0000000000000008 = uVar22;
                uVar11 = thunk_FUN_02cea4e8(*(undefined8 *)puVar6,&stack0x00000008);
                uVar9 = FUN_04db9ab4(*(undefined8 *)PTR_DAT_066090c8,uVar9,uVar11,0);
                if (*(long *)(param_1 + 0x40) == 0) goto LAB_051da64c;
                uVar11 = FUN_051da8d0(*(long *)(param_1 + 0x40),uVar1);
                plVar21 = *(long **)(param_1 + 0x38);
                fVar2 = (float)uVar11;
                if (uVar1 != 0) {
                  fVar2 = 0.0;
                }
                fVar3 = -(float)uVar11;
                if (uVar17 < 0x13) {
                  fVar3 = fVar2;
                }
                if (plVar21 == (long *)0x0) goto LAB_051da64c;
                lVar15 = *plVar21;
                lVar10 = *(long *)puVar4;
                uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar18 != 0) {
                  piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == lVar10) {
                      puVar8 = (undefined8 *)(lVar15 + (long)(*piVar20 + 9) * 0x10 + 0x138);
                      goto LAB_051da51c;
                    }
                    uVar18 = uVar18 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar18 != 0);
                }
                puVar8 = (undefined8 *)FUN_02ce0a7c(plVar21,lVar10,9);
LAB_051da51c:
                (*(code *)*puVar8)(plVar21,uVar17 & 0xffffffff,&stack0x00000030,puVar8[1]);
                lVar10 = in_stack_00000078;
                if (in_stack_00000078 == 0) goto LAB_051da64c;
                uVar12 = FUN_05ef2cb4(in_stack_00000078,0);
                uVar9 = FUN_051da9b0(in_stack_00000050 & 0xffffffff,in_stack_00000050._4_4_,
                                     in_stack_00000058,uStack0000000000000030,uStack0000000000000034
                                     ,uStack0000000000000038,uVar11,fVar3,param_1,uVar9,uVar12);
                lVar15 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06609088);
                FUN_04f7383c(lVar15,0);
                *(uint *)(lVar15 + 0x10) = uVar1;
                *(uint *)(lVar15 + 0x14) = uVar22;
                *(long *)(lVar15 + 0x18) = lVar10;
                *(undefined8 *)(lVar15 + 0x20) = uVar9;
                lVar10 = *(long *)(param_1 + 0x68);
                if (lVar10 == 0) goto LAB_051da64c;
                lVar16 = *(long *)(lVar10 + 0x10);
                lVar19 = *(long *)puVar7;
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                if (lVar16 == 0) goto LAB_051da64c;
                uVar1 = *(uint *)(lVar10 + 0x18);
                if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                  *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                  *(long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = lVar15;
                }
                else {
                  FUN_039683cc(lVar10,lVar15,
                               *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                }
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 != 0x18);
            FUN_051dac58(param_1);
            lVar13 = *(long *)(param_1 + 0x58);
            *(undefined1 *)(param_1 + 0x81) = 1;
            if (lVar13 != 0) {
              (**(code **)(lVar13 + 0x18))
                        (*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
              return;
            }
          }
        }
      }
    }
  }
LAB_051da64c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


