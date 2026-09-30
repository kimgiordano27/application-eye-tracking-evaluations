/*
FUNCTION_NAME: OVRPlugin$$SetColorScaleAndOffset
ENTRY_POINT: 0574ddd4
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SetColorScaleAndOffset(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  long lVar8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000040;
  long in_stack_00000048;
  
  FUN_02f07e70();
  FUN_02f07e70(PTR_DAT_06d02048);
  FUN_02f07e70(PTR_DAT_06d09860);
  *(undefined1 *)(unaff_x20 + 0xa20) = 1;
  in_stack_00000040 = &stack0x00000048;
  lVar8 = *(long *)(unaff_x19 + 0x38);
  if (*(int *)(unaff_x19 + 0x10) == 1) goto LAB_0574dff0;
  if (*(int *)(unaff_x19 + 0x10) != 0) {
    return 0;
  }
  plVar7 = *(long **)(unaff_x19 + 0x28);
  *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06d581b0) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0574de78;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_02eea86c(plVar7,*(long *)PTR_DAT_06d581b0,0);
LAB_0574de78:
  uVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
  *(undefined8 *)(in_stack_00000048 + 0x50) = uVar3;
  thunk_FUN_02f411dc();
  *(undefined4 *)(in_stack_00000048 + 0x10) = 0xfffffffd;
  do {
    plVar7 = *(long **)(in_stack_00000048 + 0x50);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06d02048) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0574df14;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c(plVar7,*(long *)PTR_DAT_06d02048,0);
LAB_0574df14:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      FUN_0574e178();
      *(undefined8 *)(in_stack_00000048 + 0x50) = 0;
      thunk_FUN_02f411dc((undefined8 *)(in_stack_00000048 + 0x50),0);
      return 0;
    }
    plVar7 = *(long **)(in_stack_00000048 + 0x50);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06d3b610) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0574df88;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c(plVar7,*(long *)PTR_DAT_06d3b610,0);
LAB_0574df88:
    uVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    *(undefined8 *)(in_stack_00000048 + 0x58) = uVar3;
    thunk_FUN_02f411dc();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar4 = *(long *)(lVar8 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_03f844bc(&stack0x00000008,lVar4,*(undefined8 *)PTR_DAT_06d09860);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    *(undefined8 *)(in_stack_00000048 + 0x70) = in_stack_00000018;
    *(undefined8 *)(in_stack_00000048 + 0x68) = in_stack_00000010;
    *(undefined8 *)(in_stack_00000048 + 0x60) = in_stack_00000008;
    thunk_FUN_02f411dc(in_stack_00000048 + 0x60,0);
    unaff_x19 = in_stack_00000048;
LAB_0574dff0:
    *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffc;
    puVar1 = PTR_DAT_06d09828;
    while (uVar5 = FUN_04de7cdc(unaff_x19 + 0x60,*(undefined8 *)puVar1), (uVar5 & 1) != 0) {
      lVar4 = FUN_0574d694(*(undefined8 *)(in_stack_00000048 + 0x58),
                           *(undefined8 *)(in_stack_00000048 + 0x40),
                           *(undefined4 *)(in_stack_00000048 + 0x70));
      unaff_x19 = in_stack_00000048;
      if (lVar4 != 0) {
        *(long *)(in_stack_00000048 + 0x18) = lVar4;
        thunk_FUN_02f411dc((long *)(in_stack_00000048 + 0x18));
        *(undefined4 *)(in_stack_00000048 + 0x10) = 1;
        return 1;
      }
    }
    FUN_0574e128();
    *(undefined8 *)(in_stack_00000048 + 0x60) = 0;
    *(undefined8 *)(in_stack_00000048 + 0x58) = 0;
    *(undefined8 *)(in_stack_00000048 + 0x70) = 0;
    *(undefined8 *)(in_stack_00000048 + 0x68) = 0;
    thunk_FUN_02f411dc((undefined8 *)(in_stack_00000048 + 0x58),0);
  } while( true );
}


