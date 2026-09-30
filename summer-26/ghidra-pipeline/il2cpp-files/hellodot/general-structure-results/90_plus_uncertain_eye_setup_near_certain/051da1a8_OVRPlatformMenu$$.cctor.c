/*
FUNCTION_NAME: OVRPlatformMenu$$.cctor
ENTRY_POINT: 051da1a8
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


void OVRPlatformMenu___cctor(undefined8 *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  uint uVar17;
  ulong uVar18;
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
  
  uVar7 = FUN_02ce7ad4(*param_1,0x13);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar7;
  lVar8 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ca370);
  FUN_05ef6494(lVar8,*(undefined8 *)PTR_DAT_066090c0,0);
  if (lVar8 != 0) {
    lVar8 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar8,0);
    uVar7 = FUN_05ef2cb4();
    if (lVar8 != 0) {
      FUN_05f02644(lVar8,uVar7,0,0);
      if (DAT_06a67148 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
        DAT_06a67148 = '\x01';
      }
      puVar12 = *(undefined4 **)(*(long *)PTR_DAT_065c9850 + 0xb8);
      FUN_05f00f94(*puVar12,puVar12[1],puVar12[2],lVar8,0);
      if (DAT_06a67311 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065caa08);
        DAT_06a67311 = '\x01';
      }
      puVar12 = *(undefined4 **)(*(long *)PTR_DAT_065caa08 + 0xb8);
      FUN_05f01e3c(*puVar12,puVar12[1],puVar12[2],puVar12[3],lVar8,0);
      lVar8 = FUN_05ef2cf0(lVar8,0);
      if (lVar8 != 0) {
        FUN_05ef5fec(lVar8,*(undefined4 *)(unaff_x19 + 0x4c),0);
        lVar8 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_066090b0);
        FUN_03967c6c(lVar8,0x18,*(undefined8 *)PTR_DAT_066090a8);
        *(long *)(unaff_x19 + 0x68) = lVar8;
        if (lVar8 != 0) {
          uVar7 = FUN_039685ec(lVar8,*(undefined8 *)PTR_DAT_066090a0);
          *(undefined8 *)(unaff_x19 + 0x70) = uVar7;
          puVar6 = PTR_DAT_06609098;
          puVar5 = PTR_DAT_06609090;
          puVar4 = PTR_DAT_06604b58;
          uVar18 = 2;
          do {
            lVar8 = *(long *)puVar4;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
              lVar8 = *(long *)puVar4;
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
            if (lVar8 == 0) goto LAB_051da64c;
            if (*(uint *)(lVar8 + 0x18) <= uVar18) {
LAB_051da650:
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c84();
            }
            uVar1 = *(uint *)(lVar8 + uVar18 * 4 + 0x20);
            if ((uVar1 != 0xffffffff) &&
               (uVar17 = (uint)uVar18,
               (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar17 & 0x1f) & 1) != 0)) {
              plVar19 = *(long **)(unaff_x19 + 0x38);
              if (plVar19 == (long *)0x0) goto LAB_051da64c;
              lVar8 = *plVar19;
              uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar14 != 0) {
                piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *unaff_x26) {
                    puVar9 = (undefined8 *)(lVar8 + (long)(*piVar16 + 9) * 0x10 + 0x138);
                    goto OVRPlugin_LogCallback2DelegateType__EndInvoke;
                  }
                  uVar14 = uVar14 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar14 != 0);
              }
              puVar9 = (undefined8 *)FUN_02ce0a7c(plVar19,*unaff_x26,9);
OVRPlugin_LogCallback2DelegateType__EndInvoke:
              (*(code *)*puVar9)(plVar19,uVar1,&stack0x00000050,puVar9[1]);
              uVar14 = FUN_051da660();
              if ((uVar14 & 1) == 0) {
                in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
                in_stack_00000018 = in_stack_00000058;
                uStack0000000000000024 = uStack0000000000000064;
                uStack0000000000000020 = uStack0000000000000060;
                lVar8 = FUN_051da710();
                plVar19 = *(long **)(unaff_x19 + 0x78);
                in_stack_00000078 = lVar8;
                if (plVar19 == (long *)0x0) goto LAB_051da64c;
                if ((lVar8 != 0) &&
                   (lVar10 = thunk_FUN_02cea798(lVar8,*(undefined8 *)(*plVar19 + 0x40)), lVar10 == 0
                   )) {
                  uVar7 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
                  FUN_02ce7b54(uVar7,0);
                }
                if (*(uint *)(plVar19 + 3) <= uVar1) goto LAB_051da650;
                plVar19[(long)(int)uVar1 + 4] = lVar8;
              }
              uStack000000000000000c = uVar1;
              uVar7 = thunk_FUN_02cea4e8(*(undefined8 *)puVar5,(long)&stack0x00000008 + 4);
              uStack0000000000000008 = uVar17;
              uVar11 = thunk_FUN_02cea4e8(*(undefined8 *)puVar5,&stack0x00000008);
              FUN_04db9ab4(*(undefined8 *)PTR_DAT_066090c8,uVar7,uVar11,0);
              if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_051da64c;
              uVar7 = FUN_051da8d0(*(long *)(unaff_x19 + 0x40),uVar1);
              plVar19 = *(long **)(unaff_x19 + 0x38);
              fVar2 = (float)uVar7;
              if (uVar1 != 0) {
                fVar2 = 0.0;
              }
              fVar3 = -(float)uVar7;
              if (uVar18 < 0x13) {
                fVar3 = fVar2;
              }
              if (plVar19 == (long *)0x0) goto LAB_051da64c;
              lVar8 = *plVar19;
              uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar14 != 0) {
                piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *unaff_x26) {
                    puVar9 = (undefined8 *)(lVar8 + (long)(*piVar16 + 9) * 0x10 + 0x138);
                    goto LAB_051da51c;
                  }
                  uVar14 = uVar14 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar14 != 0);
              }
              puVar9 = (undefined8 *)FUN_02ce0a7c(plVar19,*unaff_x26,9);
LAB_051da51c:
              (*(code *)*puVar9)(plVar19,uVar18 & 0xffffffff,&stack0x00000030,puVar9[1]);
              lVar8 = in_stack_00000078;
              if (in_stack_00000078 == 0) goto LAB_051da64c;
              FUN_05ef2cb4(in_stack_00000078,0);
              uVar7 = FUN_051da9b0(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                                   uStack0000000000000030,uStack0000000000000034,in_stack_00000038,
                                   uVar7,fVar3);
              lVar10 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06609088);
              FUN_04f7383c(lVar10,0);
              *(uint *)(lVar10 + 0x10) = uVar1;
              *(uint *)(lVar10 + 0x14) = uVar17;
              *(long *)(lVar10 + 0x18) = lVar8;
              *(undefined8 *)(lVar10 + 0x20) = uVar7;
              lVar8 = *(long *)(unaff_x19 + 0x68);
              if (lVar8 == 0) goto LAB_051da64c;
              lVar13 = *(long *)(lVar8 + 0x10);
              lVar15 = *(long *)puVar6;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_051da64c;
              uVar1 = *(uint *)(lVar8 + 0x18);
              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = lVar10;
              }
              else {
                FUN_039683cc(lVar8,lVar10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 != 0x18);
          FUN_051dac58();
          lVar8 = *(long *)(unaff_x19 + 0x58);
          *(undefined1 *)(unaff_x19 + 0x81) = 1;
          if (lVar8 != 0) {
            (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28))
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


