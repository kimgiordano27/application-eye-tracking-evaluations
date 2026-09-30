/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$Invoke
ENTRY_POINT: 051aa7b0
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate__Invoke(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar12;
  long *plVar13;
  long unaff_x21;
  undefined4 uStack000000000000002c;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608768);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
  *(undefined1 *)(unaff_x21 + 0x295) = 1;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  *(undefined1 *)(unaff_x19 + 0x169) = 0;
  uVar12 = *(undefined8 *)(unaff_x19 + 0xd0);
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar8 = FUN_05ef739c(uVar12,0,0);
  if ((uVar8 & 1) != 0) {
LAB_051aa95c:
    *(undefined1 *)(unaff_x19 + 0x169) = 1;
    return;
  }
  FUN_051aa978();
  FUN_051aaac0(&stack0x00000040);
  uVar5 = in_stack_00000050;
  uVar4 = uStack000000000000004c;
  uVar3 = in_stack_00000048;
  uVar2 = in_stack_00000040;
  puVar1 = PTR_DAT_066063c8;
  plVar13 = *(long **)(unaff_x19 + 0x180);
  uVar12 = CONCAT44(in_stack_00000058,uStack0000000000000054);
  uStack000000000000002c = uStack000000000000004c;
  uStack0000000000000034 = uVar12;
  if (plVar13 != (long *)0x0) {
    lVar10 = *plVar13;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_066063c8) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_051aa8a0;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)PTR_DAT_066063c8,3);
LAB_051aa8a0:
    uStack0000000000000068 = uVar3;
    in_stack_00000060 = uVar2;
    uStack000000000000006c = uVar4;
    uStack0000000000000070 = uVar5;
    uStack0000000000000074 = uVar12;
    (*(code *)*puVar9)(plVar13,&stack0x00000060,puVar9[1]);
    plVar13 = *(long **)(unaff_x19 + 0x180);
    if (plVar13 != (long *)0x0) {
      lVar10 = *plVar13;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 5) * 0x10 + 0x138);
            goto LAB_051aa91c;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)puVar1,5);
LAB_051aa91c:
      (*(code *)*puVar9)(plVar13,puVar9[1]);
      uVar6 = FUN_051aa470();
      uVar7 = FUN_051aabd4();
      uVar6 = (*(uint *)(unaff_x19 + 0x178) | uVar6) & (uVar7 ^ 0xffffffff);
      *(uint *)(unaff_x19 + 0x178) = uVar6;
      if (uVar7 == 0) {
        return;
      }
      if (uVar6 != 0) {
        return;
      }
      goto LAB_051aa95c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


