/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_chat_history_query_t_search_text_get
ENTRY_POINT: 08470bd4
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

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_search_text_get
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
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  char cVar17;
  long unaff_x20;
  undefined8 uVar18;
  long *plVar19;
  undefined8 uStack0000000000000000;
  char cStack0000000000000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  char cStack000000000000003c;
  
  uStack0000000000000000 = *(undefined8 *)(unaff_x20 + 0x40);
  cStack000000000000003c = '\0';
  FUN_071e78b0(uStack0000000000000000,&stack0x0000003c,0);
  lVar12 = *(long *)(unaff_x20 + 0x58);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  iVar1 = *(int *)(lVar12 + 0x18);
  *(undefined4 *)(lVar12 + 0x18) = 0;
  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
  puVar3 = (undefined8 *)PTR_DAT_0927dce8;
  puVar4 = (undefined8 *)PTR_DAT_0927dcb0;
  puVar5 = (undefined8 *)PTR_DAT_0927dca0;
  puVar6 = (undefined8 *)PTR_DAT_0927dc90;
  plVar7 = (long *)PTR_DAT_0927dc68;
  plVar8 = (long *)PTR_DAT_091a1650;
  if (0 < iVar1) {
    FUN_0719b698(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
    puVar3 = (undefined8 *)PTR_DAT_0927dce8;
    puVar4 = (undefined8 *)PTR_DAT_0927dcb0;
    puVar5 = (undefined8 *)PTR_DAT_0927dca0;
    puVar6 = (undefined8 *)PTR_DAT_0927dc90;
    plVar7 = (long *)PTR_DAT_0927dc68;
    plVar8 = (long *)PTR_DAT_091a1650;
  }
  while( true ) {
    lVar12 = *(long *)(unaff_x20 + 0x48);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(int *)(lVar12 + 0x30) < 1) break;
    lVar12 = FUN_05d2bf14(lVar12,*puVar3);
    if (lVar12 == 0) {
      uVar18 = 0;
      cVar17 = '\0';
    }
    else {
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      _cStack0000000000000008 = 0;
      in_stack_00000010 = 0;
      FUN_05ed1838(&stack0x00000008,*(undefined8 *)(lVar12 + 0x18),*(undefined8 *)PTR_DAT_091af0f0);
      uVar18 = in_stack_00000010;
      cVar17 = cStack0000000000000008;
    }
    plVar19 = *(long **)(unaff_x20 + 0x38);
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar12 = *plVar19;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *plVar7) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto 
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_display_name_get
          ;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_03d8f370(plVar19,*plVar7,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_display_name_get:
    uVar10 = (*(code *)*puVar9)(plVar19,puVar9[1]);
    if (cVar17 == '\0') break;
    if (*(int *)(*plVar8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar14 = FUN_0715ac7c(uVar18,uVar10,0);
    if ((uVar14 & 1) == 0) break;
    if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar12 = FUN_05d2ca4c(*(long *)(unaff_x20 + 0x48),*(undefined8 *)PTR_DAT_0927dcd8);
    lVar11 = *(long *)(unaff_x20 + 0x58);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar13 = *(long *)(lVar11 + 0x10);
    lVar15 = *(long *)PTR_DAT_0927dcc0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar2 = *(uint *)(lVar11 + 0x18);
    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
      plVar19 = (long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
      *plVar19 = lVar12;
      thunk_FUN_03d1023c(plVar19,lVar12);
    }
    else {
      FUN_05a39734(lVar11,lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
      ;
    }
    if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_05d2c850(*(long *)(unaff_x20 + 0x48),lVar12,*puVar5);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_06ad67c8(*(long *)(unaff_x20 + 0x50),*(undefined8 *)(lVar12 + 0x20),*puVar6);
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
    uVar14 = FUN_06daab3c(&stack0x00000020,*puVar4);
    if ((uVar14 & 1) == 0) {
      FUN_06daab38(&stack0x00000020,*(undefined8 *)PTR_DAT_0927dca8);
      if (cStack000000000000003c != '\0') {
        thunk_FUN_03d180a8(uStack0000000000000000,0);
      }
      return;
    }
    if (in_stack_00000030 == 0) break;
    lVar12 = *(long *)(in_stack_00000030 + 0x10);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    (**(code **)(lVar12 + 0x18))(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


