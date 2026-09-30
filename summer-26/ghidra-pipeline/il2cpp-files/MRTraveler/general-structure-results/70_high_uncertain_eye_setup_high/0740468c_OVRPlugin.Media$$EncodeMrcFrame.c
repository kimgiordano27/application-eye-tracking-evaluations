/*
FUNCTION_NAME: OVRPlugin.Media$$EncodeMrcFrame
ENTRY_POINT: 0740468c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_Media__EncodeMrcFrame(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *unaff_x19;
  long *plVar9;
  long unaff_x21;
  undefined8 uVar10;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 uStack0000000000000074;
  
  *(undefined1 *)(unaff_x21 + 0x9cf) = 1;
  lVar4 = FUN_06807d00();
  if (lVar4 != 0) {
    cVar1 = *(char *)(lVar4 + 0x2c);
    if (cVar1 == '\0') {
      if (*(int *)(*(long *)PTR_DAT_08e78410 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_085e99cc(&stack0x00000040,0);
      uStack0000000000000034 = uStack0000000000000054;
      in_stack_00000020 = in_stack_00000040;
      uStack0000000000000030 = uStack0000000000000050;
      uStack0000000000000028 = uStack0000000000000048;
      uStack000000000000002c = uStack000000000000004c;
LAB_074047a8:
      unaff_x19[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *unaff_x19 = in_stack_00000020;
      *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      return cVar1 != '\0';
    }
    lVar5 = FUN_06807d00();
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x38) != 0)) {
      plVar9 = *(long **)(*(long *)(lVar5 + 0x38) + 0x10);
      uStack0000000000000014 = *(undefined8 *)(lVar4 + 0x24);
      uVar10 = *(undefined8 *)(lVar4 + 0x10);
      uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x1c) >> 0x20);
      uVar3 = uStack0000000000000050;
      uStack0000000000000048 = (undefined4)*(undefined8 *)(lVar4 + 0x18);
      uVar2 = uStack0000000000000048;
      uStack000000000000004c = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x18) >> 0x20);
      in_stack_00000040 = uVar10;
      uStack0000000000000054 = uStack0000000000000014;
      if (plVar9 != (long *)0x0) {
        uStack000000000000000c = uStack000000000000004c;
        lVar4 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08eb23f0) {
              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_07404778;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08eb23f0,1);
LAB_07404778:
        in_stack_00000068 = uVar2;
        uStack0000000000000074 = uStack0000000000000014;
        uStack000000000000006c = uStack000000000000000c;
        in_stack_00000070 = uVar3;
        in_stack_00000060 = uVar10;
        (*(code *)*puVar6)(&stack0x00000020,plVar9,&stack0x00000060,puVar6[1]);
        goto LAB_074047a8;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


