/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$RegisterRoomRemovedCallback
ENTRY_POINT: 02a1909c
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUK__RegisterRoomRemovedCallback(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long extraout_x1;
  long lVar9;
  int iVar10;
  long unaff_x20;
  undefined4 uVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  lVar9 = *(long *)(unaff_x20 + 0x20);
  *(undefined4 *)(unaff_x20 + 0x10) = 0xffffffff;
  if (lVar9 != 0) {
    FUN_02a17b2c(lVar9);
    puVar1 = PTR_DAT_06ddea60;
    if (extraout_x1 == *(long *)(lVar9 + 0x68)) {
      uVar11 = *(undefined4 *)(lVar9 + 0x18);
      lVar9 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06df64a8);
      if (lVar9 != 0) {
        FUN_051de42c(uVar11,lVar9,0);
        *(long *)(unaff_x20 + 0x18) = lVar9;
        thunk_FUN_01656ef8((long *)(unaff_x20 + 0x18),lVar9);
        *(undefined4 *)(unaff_x20 + 0x10) = 1;
        return 1;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_048662d8(*(undefined8 *)puVar1,0);
      puVar5 = PTR_DAT_06e5f848;
      puVar4 = PTR_DAT_06df41d8;
      puVar3 = PTR_DAT_06de6460;
      puVar2 = PTR_DAT_06ddd2b8;
      puVar1 = PTR_DAT_06d9fd78;
      if (*(long *)(lVar9 + 0x58) != 0) {
        FUN_043c2e98(&stack0x00000008,*(long *)(lVar9 + 0x58),*(undefined8 *)PTR_DAT_06e262c0);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        while (uVar8 = FUN_03e1bcc4(&stack0x00000020,*(undefined8 *)puVar3),
              lVar6 = in_stack_00000030, (uVar8 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar8 = FUN_051d2ac0(lVar6,0,0);
          if ((uVar8 & 1) != 0) {
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            FUN_028eb134(lVar6,1,0);
          }
        }
        FUN_03e1bcc0(&stack0x00000020,*(undefined8 *)puVar5);
        lVar9 = *(long *)(lVar9 + 0x58);
        if (lVar9 != 0) {
          iVar7 = *(int *)(lVar9 + 0x18);
          *(undefined4 *)(lVar9 + 0x18) = 0;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (0 < iVar7) {
            FUN_031dd574(*(undefined8 *)(lVar9 + 0x10),0,iVar7,0);
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          iVar7 = FUN_04ef5214(0);
          if (0 < iVar7) {
            iVar10 = 0;
            do {
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              uVar11 = FUN_04ef523c(iVar10,0);
              FUN_04ef59f4(uVar11,0);
              iVar10 = iVar10 + 1;
            } while (iVar7 != iVar10);
          }
          FUN_02a18cc4();
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          FUN_04ef55d0(*(undefined8 *)puVar4,0);
          return 0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


