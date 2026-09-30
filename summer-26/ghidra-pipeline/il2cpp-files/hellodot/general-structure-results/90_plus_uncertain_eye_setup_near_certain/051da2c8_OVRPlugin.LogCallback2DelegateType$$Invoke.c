/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$Invoke
ENTRY_POINT: 051da2c8
PROGRAM: hellodot-libil2cpp.so
SCORE: 118
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_14;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_LogCallback2DelegateType__Invoke(void)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  uint uVar16;
  ulong uVar17;
  long *plVar18;
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
  
  lVar7 = thunk_FUN_02cea894();
  FUN_03967c6c(lVar7,0x18,*(undefined8 *)PTR_DAT_066090a8);
  *(long *)(unaff_x19 + 0x68) = lVar7;
  if (lVar7 != 0) {
    uVar8 = FUN_039685ec(lVar7,*(undefined8 *)PTR_DAT_066090a0);
    *(undefined8 *)(unaff_x19 + 0x70) = uVar8;
    puVar6 = PTR_DAT_06609098;
    puVar5 = PTR_DAT_06609090;
    puVar4 = PTR_DAT_06604b58;
    uVar17 = 2;
    do {
      lVar7 = *(long *)puVar4;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar7 = *(long *)puVar4;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar7 == 0) goto LAB_051da64c;
      if (*(uint *)(lVar7 + 0x18) <= uVar17) {
LAB_051da650:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      uVar1 = *(uint *)(lVar7 + uVar17 * 4 + 0x20);
      if ((uVar1 != 0xffffffff) &&
         (uVar16 = (uint)uVar17, (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar16 & 0x1f) & 1) != 0))
      {
        plVar18 = *(long **)(unaff_x19 + 0x38);
        if (plVar18 == (long *)0x0) goto LAB_051da64c;
        lVar7 = *plVar18;
        uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *unaff_x26) {
              puVar9 = (undefined8 *)(lVar7 + (long)(*piVar15 + 9) * 0x10 + 0x138);
              goto OVRPlugin_LogCallback2DelegateType__EndInvoke;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_02ce0a7c(plVar18,*unaff_x26,9);
OVRPlugin_LogCallback2DelegateType__EndInvoke:
        (*(code *)*puVar9)(plVar18,uVar1,&stack0x00000050,puVar9[1]);
        uVar13 = FUN_051da660();
        if ((uVar13 & 1) == 0) {
          in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
          in_stack_00000018 = in_stack_00000058;
          uStack0000000000000024 = uStack0000000000000064;
          uStack0000000000000020 = uStack0000000000000060;
          lVar7 = FUN_051da710();
          plVar18 = *(long **)(unaff_x19 + 0x78);
          in_stack_00000078 = lVar7;
          if (plVar18 == (long *)0x0) goto LAB_051da64c;
          if ((lVar7 != 0) &&
             (lVar10 = thunk_FUN_02cea798(lVar7,*(undefined8 *)(*plVar18 + 0x40)), lVar10 == 0)) {
            uVar8 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
            FUN_02ce7b54(uVar8,0);
          }
          if (*(uint *)(plVar18 + 3) <= uVar1) goto LAB_051da650;
          plVar18[(long)(int)uVar1 + 4] = lVar7;
        }
        uStack000000000000000c = uVar1;
        uVar8 = thunk_FUN_02cea4e8(*(undefined8 *)puVar5,(long)&stack0x00000008 + 4);
        uStack0000000000000008 = uVar16;
        uVar11 = thunk_FUN_02cea4e8(*(undefined8 *)puVar5,&stack0x00000008);
        FUN_04db9ab4(*(undefined8 *)PTR_DAT_066090c8,uVar8,uVar11,0);
        if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_051da64c;
        uVar8 = FUN_051da8d0(*(long *)(unaff_x19 + 0x40),uVar1);
        plVar18 = *(long **)(unaff_x19 + 0x38);
        fVar2 = (float)uVar8;
        if (uVar1 != 0) {
          fVar2 = 0.0;
        }
        fVar3 = -(float)uVar8;
        if (uVar17 < 0x13) {
          fVar3 = fVar2;
        }
        if (plVar18 == (long *)0x0) goto LAB_051da64c;
        lVar7 = *plVar18;
        uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *unaff_x26) {
              puVar9 = (undefined8 *)(lVar7 + (long)(*piVar15 + 9) * 0x10 + 0x138);
              goto LAB_051da51c;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_02ce0a7c(plVar18,*unaff_x26,9);
LAB_051da51c:
        (*(code *)*puVar9)(plVar18,uVar17 & 0xffffffff,&stack0x00000030,puVar9[1]);
        lVar7 = in_stack_00000078;
        if (in_stack_00000078 == 0) goto LAB_051da64c;
        FUN_05ef2cb4(in_stack_00000078,0);
        uVar8 = FUN_051da9b0(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                             uStack0000000000000030,uStack0000000000000034,in_stack_00000038,uVar8,
                             fVar3);
        lVar10 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06609088);
        FUN_04f7383c(lVar10,0);
        *(uint *)(lVar10 + 0x10) = uVar1;
        *(uint *)(lVar10 + 0x14) = uVar16;
        *(long *)(lVar10 + 0x18) = lVar7;
        *(undefined8 *)(lVar10 + 0x20) = uVar8;
        lVar7 = *(long *)(unaff_x19 + 0x68);
        if (lVar7 == 0) goto LAB_051da64c;
        lVar12 = *(long *)(lVar7 + 0x10);
        lVar14 = *(long *)puVar6;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar12 == 0) goto LAB_051da64c;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = lVar10;
        }
        else {
          FUN_039683cc(lVar7,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != 0x18);
    FUN_051dac58();
    lVar7 = *(long *)(unaff_x19 + 0x58);
    *(undefined1 *)(unaff_x19 + 0x81) = 1;
    if (lVar7 != 0) {
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
      return;
    }
  }
LAB_051da64c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


