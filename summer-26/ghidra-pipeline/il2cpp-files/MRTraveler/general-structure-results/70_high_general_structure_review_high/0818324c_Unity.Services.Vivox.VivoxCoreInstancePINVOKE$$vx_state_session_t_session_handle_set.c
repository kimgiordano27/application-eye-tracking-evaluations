/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_session_t_session_handle_set
ENTRY_POINT: 0818324c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_session_t_session_handle_set(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  int *unaff_x19;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000008;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08f051e8);
  FUN_03c8f898(PTR_DAT_08f051f0);
  FUN_03c8f898(PTR_DAT_08f05220);
  FUN_03c8f898(PTR_DAT_08e695f0);
  FUN_03c8f898(PTR_DAT_08e79190);
  FUN_03c8f898(PTR_DAT_08f05708);
  FUN_03c8f898(PTR_DAT_08f05710);
  FUN_03c8f898(PTR_DAT_08f05718);
  FUN_03c8f898(PTR_DAT_08f05720);
  FUN_03c8f898(PTR_DAT_08f05730);
  FUN_03c8f898(PTR_DAT_08f05738);
  *(undefined1 *)(unaff_x20 + 0xa2) = 1;
  puVar2 = PTR_DAT_08f055d8;
  in_stack_00000008 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar10 = *(long *)(unaff_x19 + 10);
    lVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e902e8);
    FUN_06a4d5c4(lVar5,*(undefined8 *)PTR_DAT_08e902d0);
    uVar13 = *(undefined8 *)PTR_DAT_08f056e8;
    if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar13 = FUN_0710fcf0(uVar13,0);
    puVar3 = PTR_DAT_08f056d0;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_06a4e380(lVar5,*(undefined8 *)PTR_DAT_08f05738,uVar13,*(undefined8 *)PTR_DAT_08f056d0);
    puVar4 = PTR_DAT_08f056d8;
    uVar13 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08f056d8,0);
    FUN_06a4e380(lVar5,*(undefined8 *)PTR_DAT_08f05708,uVar13,*(undefined8 *)puVar3);
    uVar13 = FUN_0710fcf0(*(undefined8 *)puVar4,0);
    FUN_06a4e380(lVar5,*(undefined8 *)PTR_DAT_08f05710,uVar13,*(undefined8 *)puVar3);
    uVar13 = FUN_0710fcf0(*(undefined8 *)puVar4,0);
    FUN_06a4e380(lVar5,*(undefined8 *)PTR_DAT_08f05730,uVar13,*(undefined8 *)puVar3);
    uVar13 = FUN_0710fcf0(*(undefined8 *)puVar4,0);
    FUN_06a4e380(lVar5,*(undefined8 *)PTR_DAT_08f05720,uVar13,*(undefined8 *)puVar3);
    uVar13 = FUN_0710fcf0(*(undefined8 *)puVar4,0);
    FUN_06a4e380(lVar5,*(undefined8 *)PTR_DAT_08f05718,uVar13,*(undefined8 *)puVar3);
    *(long *)(unaff_x19 + 0xe) = lVar5;
    thunk_FUN_03d233cc(unaff_x19 + 0xe,lVar5);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar11 = *(undefined8 *)(unaff_x19 + 8);
    uVar13 = FUN_0817aec0(lVar10,0);
    lVar5 = FUN_081558b8(uVar11,uVar13,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    plVar12 = *(long **)(lVar10 + 0x10);
    uVar13 = FUN_0817a71c(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar5 + 0x10),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar11 = FUN_0817a730(*(long *)(unaff_x19 + 0xc),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar6 = FUN_0817a744(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar10 + 0x18),lVar5,0);
    uVar1 = 10;
    if ((*(uint *)(lVar5 + 0x18) & 0xff) != 0) {
      uVar1 = *(undefined4 *)(lVar5 + 0x1c);
    }
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30(10);
    }
    lVar5 = *plVar12;
    uVar14 = *(undefined8 *)PTR_DAT_08e79190;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f056e0) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_08183554;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)PTR_DAT_08f056e0,0);
LAB_08183554:
    lVar5 = (*(code *)*puVar7)(plVar12,uVar14,uVar13,uVar11,uVar6,uVar1,puVar7[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = FUN_05c0b91c(lVar5,*(undefined8 *)PTR_DAT_08f05220);
    uVar8 = FUN_05ac7d38(&stack0x00000008,*(undefined8 *)PTR_DAT_08f051f0);
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_03d233cc(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      System_Array__InternalArray__ICollection_CopyTo<SceneEventMetric>
                (unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  uVar13 = FUN_05ac7d7c(&stack0x00000008,*(undefined8 *)PTR_DAT_08f051e8);
  uVar11 = FUN_047aa6c0(uVar13,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)PTR_DAT_08f056f0);
  uVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f05700);
  FUN_05a39d64(uVar6,uVar13,uVar11,*(undefined8 *)PTR_DAT_08f056f8);
  puVar3 = PTR_DAT_08f056c8;
  *unaff_x19 = -2;
  unaff_x19[0xe] = 0;
  unaff_x19[0xf] = 0;
  thunk_FUN_03d233cc(unaff_x19 + 0xe,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_063c7630(unaff_x19 + 2,uVar6,*(undefined8 *)puVar3);
  return;
}


