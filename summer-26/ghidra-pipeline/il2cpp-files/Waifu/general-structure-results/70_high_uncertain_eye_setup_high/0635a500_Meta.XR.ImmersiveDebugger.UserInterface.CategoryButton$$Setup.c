/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.CategoryButton$$Setup
ENTRY_POINT: 0635a500
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__Setup(long param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  byte bStack0000000000000028;
  undefined4 uStack0000000000000029;
  undefined3 uStack000000000000002d;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  if ((DAT_086de8d5 & 1) == 0) {
    FUN_0335b6c8(&DAT_083eb788,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb840,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb888,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb800,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eb8c8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0840f130,1);
    DataMemoryBarrier(2,3);
    DAT_086de8d5 = 1;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    iVar11 = FUN_0638b2d4(*(long *)(param_1 + 0x70),0);
    if (iVar11 < 1) {
      return;
    }
    lVar12 = *(long *)(param_1 + 0x58);
    if ((((lVar12 != 0) && (lVar14 = *(long *)(param_1 + 0x20), lVar14 != 0)) &&
        (lVar15 = *(long *)(param_1 + 0x78), lVar15 != 0)) &&
       ((lVar16 = *(long *)(param_1 + 0x80), lVar16 != 0 &&
        (lVar13 = *(long *)(param_1 + 0x88), lVar13 != 0)))) {
      uVar1 = *(undefined8 *)(lVar12 + 0x10);
      uVar6 = *(undefined8 *)(lVar12 + 0x18);
      uVar2 = *(undefined8 *)(lVar14 + 0x10);
      uVar7 = *(undefined8 *)(lVar14 + 0x18);
      uVar3 = *(undefined8 *)(lVar15 + 0x10);
      uVar8 = *(undefined8 *)(lVar15 + 0x18);
      uVar4 = *(undefined8 *)(lVar16 + 0x10);
      uVar9 = *(undefined8 *)(lVar16 + 0x18);
      uVar5 = *(undefined8 *)(lVar13 + 0x10);
      uVar10 = *(undefined8 *)(lVar13 + 0x18);
      if (*(long *)(param_1 + 0x10) != 0) {
        lVar12 = FUN_06317a64(*(long *)(param_1 + 0x10),0);
        if ((*(long *)(param_1 + 0x70) != 0) && (*(long *)(param_1 + 0x10) != 0)) {
          uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10);
          lVar14 = FUN_06317a64(*(long *)(param_1 + 0x10),0);
          if (lVar14 != 0) {
            bStack0000000000000028 = param_2 & 1;
            uStack0000000000000029 = 0;
            uStack000000000000002d = 0;
            in_stack_00000030 = uVar1;
            in_stack_00000038 = uVar6;
            in_stack_00000040 = uVar2;
            in_stack_00000048 = uVar7;
            in_stack_00000050 = uVar3;
            in_stack_00000058 = uVar8;
            in_stack_00000060 = uVar4;
            in_stack_00000068 = uVar9;
            in_stack_00000070 = uVar5;
            in_stack_00000078 = uVar10;
            auVar18 = FUN_040065c0(&stack0x00000028,uVar17,*(undefined8 *)(lVar14 + 0xd0),
                                   *(undefined8 *)(lVar14 + 0xd8),DAT_0840f130);
            if (lVar12 != 0) {
              *(undefined1 (*) [16])(lVar12 + 0xd0) = auVar18;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


