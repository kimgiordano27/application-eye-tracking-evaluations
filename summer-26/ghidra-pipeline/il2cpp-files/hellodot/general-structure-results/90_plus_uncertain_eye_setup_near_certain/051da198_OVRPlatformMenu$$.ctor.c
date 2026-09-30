/*
FUNCTION_NAME: OVRPlatformMenu$$.ctor
ENTRY_POINT: 051da198
PROGRAM: hellodot-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_17;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlatformMenu___ctor(code *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long unaff_x19;
  uint uVar18;
  long *plVar19;
  long *unaff_x26;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long in_stack_00000078;
  
  uVar7 = (*param_1)();
  if ((uVar7 & 1) == 0) {
    return;
  }
  uVar8 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_066090b8,0x13);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar8;
  lVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ca370);
  FUN_05ef6494(lVar9,*(undefined8 *)PTR_DAT_066090c0,0);
  if (lVar9 != 0) {
    lVar9 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar9,0);
    uVar8 = FUN_05ef2cb4();
    if (lVar9 != 0) {
      FUN_05f02644(lVar9,uVar8,0,0);
      if (DAT_06a67148 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
        DAT_06a67148 = '\x01';
      }
      puVar13 = *(undefined4 **)(*(long *)PTR_DAT_065c9850 + 0xb8);
      FUN_05f00f94(*puVar13,puVar13[1],puVar13[2],lVar9,0);
      if (DAT_06a67311 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065caa08);
        DAT_06a67311 = '\x01';
      }
      puVar13 = *(undefined4 **)(*(long *)PTR_DAT_065caa08 + 0xb8);
      FUN_05f01e3c(*puVar13,puVar13[1],puVar13[2],puVar13[3],lVar9,0);
      lVar9 = FUN_05ef2cf0(lVar9,0);
      if (lVar9 != 0) {
        FUN_05ef5fec(lVar9,*(undefined4 *)(unaff_x19 + 0x4c),0);
        lVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_066090b0);
        FUN_03967c6c(lVar9,0x18,*(undefined8 *)PTR_DAT_066090a8);
        *(long *)(unaff_x19 + 0x68) = lVar9;
        if (lVar9 != 0) {
          uVar8 = FUN_039685ec(lVar9,*(undefined8 *)PTR_DAT_066090a0);
          *(undefined8 *)(unaff_x19 + 0x70) = uVar8;
          puVar6 = PTR_DAT_06609098;
          puVar5 = PTR_DAT_06609090;
          puVar4 = PTR_DAT_06604b58;
          uVar7 = 2;
          do {
            lVar9 = *(long *)puVar4;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
              lVar9 = *(long *)puVar4;
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
            if (lVar9 == 0) goto LAB_051da64c;
            if (*(uint *)(lVar9 + 0x18) <= uVar7) {
LAB_051da650:
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c84();
            }
            uVar1 = *(uint *)(lVar9 + uVar7 * 4 + 0x20);
            if ((uVar1 != 0xffffffff) &&
               (uVar18 = (uint)uVar7,
               (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar18 & 0x1f) & 1) != 0)) {
              plVar19 = *(long **)(unaff_x19 + 0x38);
              if (plVar19 == (long *)0x0) goto LAB_051da64c;
              lVar9 = *plVar19;
              uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar15 != 0) {
                piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *unaff_x26) {
                    puVar10 = (undefined8 *)(lVar9 + (long)(*piVar17 + 9) * 0x10 + 0x138);
                    goto OVRPlugin_LogCallback2DelegateType__EndInvoke;
                  }
                  uVar15 = uVar15 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar15 != 0);
              }
              puVar10 = (undefined8 *)FUN_02ce0a7c(plVar19,*unaff_x26,9);
OVRPlugin_LogCallback2DelegateType__EndInvoke:
              (*(code *)*puVar10)(plVar19,uVar1,&stack0x00000050,puVar10[1]);
              uVar15 = FUN_051da660();
              if ((uVar15 & 1) == 0) {
                in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
                in_stack_00000018 = in_stack_00000058;
                uStack0000000000000024 = uStack0000000000000064;
                uStack0000000000000020 = uStack0000000000000060;
                lVar9 = FUN_051da710();
                plVar19 = *(long **)(unaff_x19 + 0x78);
                in_stack_00000078 = lVar9;
                if (plVar19 == (long *)0x0) goto LAB_051da64c;
                if ((lVar9 != 0) &&
                   (lVar11 = thunk_FUN_02cea798(lVar9,*(undefined8 *)(*plVar19 + 0x40)), lVar11 == 0
                   )) {
                  uVar8 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
                  FUN_02ce7b54(uVar8,0);
                }
                if (*(uint *)(plVar19 + 3) <= uVar1) goto LAB_051da650;
                plVar19[(long)(int)uVar1 + 4] = lVar9;
              }
              uStack000000000000000c = uVar1;
              uVar8 = thunk_FUN_02cea4e8(*(undefined8 *)puVar5,(long)&stack0x00000008 + 4);
              uStack0000000000000008 = uVar18;
              uVar12 = thunk_FUN_02cea4e8(*(undefined8 *)puVar5,&stack0x00000008);
              FUN_04db9ab4(*(undefined8 *)PTR_DAT_066090c8,uVar8,uVar12,0);
              if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_051da64c;
              uVar8 = FUN_051da8d0(*(long *)(unaff_x19 + 0x40),uVar1);
              plVar19 = *(long **)(unaff_x19 + 0x38);
              fVar2 = (float)uVar8;
              if (uVar1 != 0) {
                fVar2 = 0.0;
              }
              fVar3 = -(float)uVar8;
              if (uVar7 < 0x13) {
                fVar3 = fVar2;
              }
              if (plVar19 == (long *)0x0) goto LAB_051da64c;
              lVar9 = *plVar19;
              uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar15 != 0) {
                piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *unaff_x26) {
                    puVar10 = (undefined8 *)(lVar9 + (long)(*piVar17 + 9) * 0x10 + 0x138);
                    goto LAB_051da51c;
                  }
                  uVar15 = uVar15 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar15 != 0);
              }
              puVar10 = (undefined8 *)FUN_02ce0a7c(plVar19,*unaff_x26,9);
LAB_051da51c:
              (*(code *)*puVar10)(plVar19,uVar7 & 0xffffffff,&stack0x00000030,puVar10[1]);
              lVar9 = in_stack_00000078;
              if (in_stack_00000078 == 0) goto LAB_051da64c;
              FUN_05ef2cb4(in_stack_00000078,0);
              uVar8 = FUN_051da9b0(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                                   uStack0000000000000030,uStack0000000000000034,in_stack_00000038,
                                   uVar8,fVar3);
              lVar11 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06609088);
              FUN_04f7383c(lVar11,0);
              *(uint *)(lVar11 + 0x10) = uVar1;
              *(uint *)(lVar11 + 0x14) = uVar18;
              *(long *)(lVar11 + 0x18) = lVar9;
              *(undefined8 *)(lVar11 + 0x20) = uVar8;
              lVar9 = *(long *)(unaff_x19 + 0x68);
              if (lVar9 == 0) goto LAB_051da64c;
              lVar14 = *(long *)(lVar9 + 0x10);
              lVar16 = *(long *)puVar6;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_051da64c;
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                *(long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = lVar11;
              }
              else {
                FUN_039683cc(lVar9,lVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 != 0x18);
          FUN_051dac58();
          lVar9 = *(long *)(unaff_x19 + 0x58);
          *(undefined1 *)(unaff_x19 + 0x81) = 1;
          if (lVar9 != 0) {
            (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28))
            ;
            return;
          }
        }
      }
    }
  }
LAB_051da64c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


