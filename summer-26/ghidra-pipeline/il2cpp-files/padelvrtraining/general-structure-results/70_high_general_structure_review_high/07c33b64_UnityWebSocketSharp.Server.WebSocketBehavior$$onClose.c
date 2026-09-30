/*
FUNCTION_NAME: UnityWebSocketSharp.Server.WebSocketBehavior$$onClose
ENTRY_POINT: 07c33b64
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void UnityWebSocketSharp_Server_WebSocketBehavior__onClose(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined8 uVar8;
  long *unaff_x23;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined6 uStack0000000000000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  
  do {
    uVar3 = *(uint *)(unaff_x20 + 0x8c);
    if ((int)unaff_x19[10] <= (int)uVar3) {
LAB_07c33b8c:
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_0708de18(unaff_x19 + 2,0);
      return;
    }
    plVar7 = *(long **)(unaff_x20 + 0x10);
    iVar5 = FUN_05d209c8(unaff_x20 + 0x38,*(undefined8 *)PTR_DAT_091ff4f0);
    uVar2 = *(uint *)(unaff_x20 + 0x44);
    lVar9 = *(long *)PTR_DAT_091ff4e8;
    uVar1 = uVar2 & 0x7fffffff;
    uVar4 = iVar5 - *(int *)(unaff_x20 + 0x8c);
    if ((uVar1 < uVar3) || (uVar1 - uVar3 < uVar4)) {
      FUN_0719919c(0);
    }
    uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
    iVar5 = *(int *)(unaff_x20 + 0x40);
    in_stack_00000048 = 0;
    if ((*(byte *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    in_stack_00000040 = uVar8;
    thunk_FUN_03d1023c(&stack0x00000040,uVar8);
    in_stack_00000048 = CONCAT44(uVar2 & 0x80000000 | uVar4,iVar5 + uVar3);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    auVar10 = (**(code **)(*plVar7 + 0x2f8))
                        (plVar7,in_stack_00000040,in_stack_00000048,*(undefined8 *)(unaff_x19 + 0xc)
                         ,*(undefined8 *)(*plVar7 + 0x300));
    _uStack0000000000000038 = 0;
    lVar9 = *(long *)PTR_DAT_091ff508;
    if ((*(byte *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    in_stack_00000030 = auVar10._0_8_;
    thunk_FUN_03d1023c(&stack0x00000030,auVar10._0_8_);
    uVar8 = in_stack_00000030;
    uVar6 = _uStack0000000000000038 >> 0x30;
    uStack0000000000000038 = auVar10._8_6_;
    _uStack0000000000000038 = CONCAT26((short)uVar6,uStack0000000000000038) & 0xff00ffffffffffff;
    uVar6 = _uStack0000000000000038;
    in_stack_00000040 = 0;
    in_stack_00000048 = 0;
    if ((*(byte *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    in_stack_00000048 = uVar6;
    in_stack_00000040 = uVar8;
    thunk_FUN_03d1023c(&stack0x00000040,0);
    uVar6 = in_stack_00000048;
    uVar8 = in_stack_00000040;
    if ((*(byte *)(*(long *)(*(long *)PTR_DAT_091ff4d0 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    in_stack_00000040 = uVar8;
    in_stack_00000048 = uVar6;
    thunk_FUN_03d1023c(&stack0x00000040,0);
    in_stack_00000010 = in_stack_00000040;
    in_stack_00000018 = in_stack_00000048;
    lVar9 = *(long *)(*(long *)PTR_DAT_091ff4e0 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03d8f26c();
    }
    uVar6 = FUN_0650f094(&stack0x00000010,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x10));
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(ulong *)(unaff_x19 + 0x12) = in_stack_00000018;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000010;
      thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_04e5485c(unaff_x19 + 2,&stack0x00000010);
      return;
    }
    lVar9 = *(long *)(*(long *)PTR_DAT_091ff4d8 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03d8f26c();
    }
    iVar5 = FUN_0650f1b0(&stack0x00000010,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x20));
    if (iVar5 < 1) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      UnityWebSocketSharp_Server_HttpRequestEventArgs__get_User();
      goto LAB_07c33b8c;
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    *(int *)(unaff_x20 + 0x8c) = *(int *)(unaff_x20 + 0x8c) + iVar5;
  } while( true );
}


