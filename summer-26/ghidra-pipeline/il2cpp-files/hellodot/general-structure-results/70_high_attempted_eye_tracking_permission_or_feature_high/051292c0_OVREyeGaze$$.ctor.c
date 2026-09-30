/*
FUNCTION_NAME: OVREyeGaze$$.ctor
ENTRY_POINT: 051292c0
PROGRAM: hellodot-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze___ctor(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  *(long *)(unaff_x21 + 0x74) = param_2._8_8_;
  *(long *)(unaff_x21 + 0x6c) = param_2._0_8_;
  plVar5 = *(long **)(unaff_x19 + 0x30);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_0512931c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c(plVar5,*unaff_x22,1);
LAB_0512931c:
    lVar2 = (*(code *)*puVar1)(plVar5,puVar1[1]);
    in_stack_000000c8 = in_stack_000000e8;
    in_stack_000000c0 = in_stack_000000e0;
    *(undefined8 *)(unaff_x21 + 0x54) = *(undefined8 *)(unaff_x21 + 0x74);
    *(undefined8 *)(unaff_x21 + 0x4c) = *(undefined8 *)(unaff_x21 + 0x6c);
    if (lVar2 != 0) {
      FUN_05f02698(&stack0x00000080,lVar2,0);
      uStack0000000000000054 = *(undefined8 *)(unaff_x21 + 0x54);
      in_stack_00000048 = (undefined4)in_stack_000000c8;
      in_stack_00000040 = in_stack_000000c0;
      uStack000000000000004c = (undefined4)*(undefined8 *)(unaff_x21 + 0x4c);
      in_stack_00000050 = (undefined4)((ulong)*(undefined8 *)(unaff_x21 + 0x4c) >> 0x20);
      FUN_05169894(&stack0x00000060,&stack0x00000040);
      *(undefined8 *)(unaff_x21 + 0x14) = uStack0000000000000074;
      *(ulong *)(unaff_x21 + 0xc) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
      uVar7 = *(undefined8 *)(unaff_x21 + 0x14);
      uVar6 = *(undefined8 *)(unaff_x21 + 0xc);
      *(ulong *)(unaff_x19 + 0x68) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
      *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000060;
      *(undefined8 *)(unaff_x19 + 0x74) = uVar7;
      *(undefined8 *)(unaff_x19 + 0x6c) = uVar6;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


