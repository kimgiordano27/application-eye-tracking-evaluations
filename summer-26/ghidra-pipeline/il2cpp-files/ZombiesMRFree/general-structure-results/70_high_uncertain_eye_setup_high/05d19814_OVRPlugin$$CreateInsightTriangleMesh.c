/*
FUNCTION_NAME: OVRPlugin$$CreateInsightTriangleMesh
ENTRY_POINT: 05d19814
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreateInsightTriangleMesh(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0x628));
  FUN_02fe925c(PTR_DAT_06f98e20);
  *(undefined1 *)(unaff_x21 + 0x8a2) = 1;
  puVar2 = PTR_DAT_06fb8628;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  if (unaff_x20 != (long *)0x0) {
    lVar8 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06fb8628) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_05d198a4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_02feb5b8();
LAB_05d198a4:
    lVar8 = (*(code *)*puVar7)();
    uVar5 = in_stack_00000038;
    uVar3 = uStack0000000000000034;
    puVar1 = PTR_DAT_06f98e20;
    if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0)) {
      uStack0000000000000034 = uStack0000000000000010._4_4_;
      uVar4 = uStack0000000000000034;
      in_stack_00000038 = uStack0000000000000010._8_4_;
      uVar6 = in_stack_00000038;
      uStack0000000000000034 = uVar3;
      in_stack_00000038 = uVar5;
      if ((*(char *)(lVar8 + 0x10) == '\0') || (*(long *)(lVar8 + 0x18) == 0)) {
        if (*(int *)(*(long *)PTR_DAT_06f98e20 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        FUN_06902bf8(0);
        in_stack_00000028 = uStack0000000000000008;
        in_stack_00000020 = in_stack_00000000;
        uStack000000000000002c = uStack000000000000000c;
        in_stack_00000030 = uStack0000000000000010;
        lVar8 = *unaff_x20;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        uStack0000000000000034 = uVar4;
        in_stack_00000038 = uVar6;
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
              goto LAB_05d19990;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_02feb5b8();
LAB_05d19990:
        (*(code *)*puVar7)();
        in_stack_00000048 = uStack0000000000000008;
        in_stack_00000040 = in_stack_00000000;
        uStack000000000000004c = uStack000000000000000c;
        in_stack_00000050 = uStack0000000000000010;
        uStack0000000000000054 = uVar4;
        in_stack_00000058 = uVar6;
        FUN_05cc3624(&stack0x00000040,&stack0x00000020,0);
        lVar8 = *unaff_x20;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
              goto LAB_05d19a10;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_02feb5b8();
LAB_05d19a10:
        lVar8 = (*(code *)*puVar7)();
        if (lVar8 == 0) goto LAB_05d19ab4;
        puVar7 = &stack0x00000020;
      }
      else {
        lVar8 = *unaff_x20;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
              goto LAB_05d19a3c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_02feb5b8();
LAB_05d19a3c:
        lVar8 = (*(code *)*puVar7)();
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*(long *)puVar1);
        }
        FUN_06902bf8(0);
        in_stack_00000048 = uStack0000000000000008;
        in_stack_00000040 = in_stack_00000000;
        uStack000000000000004c = uStack000000000000000c;
        in_stack_00000050 = uStack0000000000000010;
        uStack0000000000000054 = uVar4;
        in_stack_00000058 = uVar6;
        if (lVar8 == 0) goto LAB_05d19ab4;
        puVar7 = &stack0x00000040;
      }
      FUN_05d185ac(lVar8,puVar7);
      *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
      unaff_x19[1] = _uStack0000000000000008;
      *unaff_x19 = in_stack_00000000;
      return;
    }
  }
LAB_05d19ab4:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


