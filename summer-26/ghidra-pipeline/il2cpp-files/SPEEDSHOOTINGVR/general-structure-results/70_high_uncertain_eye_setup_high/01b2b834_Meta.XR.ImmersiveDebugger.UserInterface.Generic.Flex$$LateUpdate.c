/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$LateUpdate
ENTRY_POINT: 01b2b834
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__LateUpdate(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  
  lVar5 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244();
  }
  if (*unaff_x22 != lVar5) {
    in_stack_00000008 = *unaff_x21;
    lVar5 = FUN_00e5db00(*(undefined8 *)(unaff_x20 + 0x20));
    uVar8 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 8),&stack0x00000008);
    plVar9 = (long *)thunk_FUN_0105d828(uVar8,0);
    FUN_00e5db80();
    uVar8 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    uVar10 = thunk_FUN_010303a8(PTR_DAT_0234d9e0);
    uVar8 = FUN_01c42574(uVar10,uVar8,0);
    thunk_FUN_010303a8(PTR_DAT_0234bcd0);
    uVar10 = thunk_FUN_010400dc();
    uVar11 = thunk_FUN_010303a8(PTR_DAT_0234d120);
    FUN_01c5e198(uVar10,uVar8,uVar11,0);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar10);
  }
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244(lVar5);
  }
  if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc8d0();
  }
  puVar6 = (undefined4 *)thunk_FUN_01040230();
  uVar1 = *puVar6;
  uVar2 = puVar6[1];
  in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,*(undefined4 *)unaff_x21);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244();
  }
  thunk_FUN_0103fd0c(**(undefined8 **)(lVar5 + 0xc0),&stack0x00000008);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uStack0000000000000004 = uVar1;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244(lVar5);
  }
  thunk_FUN_0103fd0c(**(undefined8 **)(lVar5 + 0xc0),&stack0x00000004);
  puVar3 = PTR_DAT_0234d9d8;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar5 = *unaff_x19;
  uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0234d9d8) {
        puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_01b2b958;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)FUN_0103c348();
LAB_01b2b958:
  iVar4 = (*(code *)*puVar7)();
  if (iVar4 == 0) {
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,*(undefined4 *)((long)unaff_x21 + 4));
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10),&stack0x00000008);
    lVar5 = *(long *)(unaff_x20 + 0x20);
    uStack0000000000000004 = uVar2;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0103c244(lVar5);
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10),&stack0x00000004);
    lVar5 = *unaff_x19;
    uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_01b2ba18;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_0103c348();
LAB_01b2ba18:
    (*(code *)*puVar7)();
  }
  return;
}


