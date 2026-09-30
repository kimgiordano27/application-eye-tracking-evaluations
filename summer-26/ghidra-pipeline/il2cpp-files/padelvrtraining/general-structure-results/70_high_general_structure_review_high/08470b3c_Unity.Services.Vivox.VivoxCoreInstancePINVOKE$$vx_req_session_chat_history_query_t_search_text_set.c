/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_chat_history_query_t_search_text_set
ENTRY_POINT: 08470b3c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x08470f38) */
/* WARNING: Removing unreachable block (ram,0x08470f48) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_search_text_set
               (void)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  char cVar18;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar19;
  long *plVar20;
  char cStack0000000000000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  char cStack000000000000003c;
  
  FUN_03d2d2b0();
  FUN_03d2d2b0(PTR_DAT_0927dc68);
  FUN_03d2d2b0(PTR_DAT_0927dcc0);
  FUN_03d2d2b0(PTR_DAT_0927dcc8);
  FUN_03d2d2b0(PTR_DAT_0927dcd0);
  FUN_03d2d2b0(PTR_DAT_0927dcd8);
  FUN_03d2d2b0(PTR_DAT_0927dca0);
  FUN_03d2d2b0(PTR_DAT_0927dce0);
  FUN_03d2d2b0(PTR_DAT_0927dce8);
  FUN_03d2d2b0(PTR_DAT_091b14a0);
  FUN_03d2d2b0(PTR_DAT_091af0f0);
  FUN_03d2d2b0(PTR_DAT_091b14a8);
  *(undefined1 *)(unaff_x19 + 0xf53) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  cStack000000000000003c = '\0';
  FUN_071e78b0(uVar9,&stack0x0000003c,0);
  lVar13 = *(long *)(unaff_x20 + 0x58);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  iVar1 = *(int *)(lVar13 + 0x18);
  *(undefined4 *)(lVar13 + 0x18) = 0;
  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
  puVar3 = (undefined8 *)PTR_DAT_0927dce8;
  puVar4 = (undefined8 *)PTR_DAT_0927dcb0;
  puVar5 = (undefined8 *)PTR_DAT_0927dca0;
  puVar6 = (undefined8 *)PTR_DAT_0927dc90;
  plVar7 = (long *)PTR_DAT_0927dc68;
  plVar8 = (long *)PTR_DAT_091a1650;
  if (0 < iVar1) {
    FUN_0719b698(*(undefined8 *)(lVar13 + 0x10),0,iVar1,0);
    puVar3 = (undefined8 *)PTR_DAT_0927dce8;
    puVar4 = (undefined8 *)PTR_DAT_0927dcb0;
    puVar5 = (undefined8 *)PTR_DAT_0927dca0;
    puVar6 = (undefined8 *)PTR_DAT_0927dc90;
    plVar7 = (long *)PTR_DAT_0927dc68;
    plVar8 = (long *)PTR_DAT_091a1650;
  }
  while( true ) {
    lVar13 = *(long *)(unaff_x20 + 0x48);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(int *)(lVar13 + 0x30) < 1) break;
    lVar13 = FUN_05d2bf14(lVar13,*puVar3);
    if (lVar13 == 0) {
      uVar19 = 0;
      cVar18 = '\0';
    }
    else {
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      _cStack0000000000000008 = 0;
      in_stack_00000010 = 0;
      FUN_05ed1838(&stack0x00000008,*(undefined8 *)(lVar13 + 0x18),*(undefined8 *)PTR_DAT_091af0f0);
      uVar19 = in_stack_00000010;
      cVar18 = cStack0000000000000008;
    }
    plVar20 = *(long **)(unaff_x20 + 0x38);
    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar13 = *plVar20;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *plVar7) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto 
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_display_name_get
          ;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_03d8f370(plVar20,*plVar7,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_display_name_get:
    uVar11 = (*(code *)*puVar10)(plVar20,puVar10[1]);
    if (cVar18 == '\0') break;
    if (*(int *)(*plVar8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar15 = FUN_0715ac7c(uVar19,uVar11,0);
    if ((uVar15 & 1) == 0) break;
    if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar13 = FUN_05d2ca4c(*(long *)(unaff_x20 + 0x48),*(undefined8 *)PTR_DAT_0927dcd8);
    lVar12 = *(long *)(unaff_x20 + 0x58);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar14 = *(long *)(lVar12 + 0x10);
    lVar16 = *(long *)PTR_DAT_0927dcc0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar2 = *(uint *)(lVar12 + 0x18);
    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
      plVar20 = (long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
      *plVar20 = lVar13;
      thunk_FUN_03d1023c(plVar20,lVar13);
    }
    else {
      FUN_05a39734(lVar12,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
      ;
    }
    if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_05d2c850(*(long *)(unaff_x20 + 0x48),lVar13,*puVar5);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_06ad67c8(*(long *)(unaff_x20 + 0x50),*(undefined8 *)(lVar13 + 0x20),*puVar6);
  }
  if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  FUN_05a3a290(&stack0x00000008,*(long *)(unaff_x20 + 0x58),*(undefined8 *)PTR_DAT_0927dcd0);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = _cStack0000000000000008;
  in_stack_00000030 = in_stack_00000018;
  while( true ) {
    uVar15 = FUN_06daab3c(&stack0x00000020,*puVar4);
    if ((uVar15 & 1) == 0) {
      FUN_06daab38(&stack0x00000020,*(undefined8 *)PTR_DAT_0927dca8);
      if (cStack000000000000003c != '\0') {
        thunk_FUN_03d180a8(uVar9,0);
      }
      return;
    }
    if (in_stack_00000030 == 0) break;
    lVar13 = *(long *)(in_stack_00000030 + 0x10);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


