/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_state_session_t_session_handle_get
ENTRY_POINT: 081832e4
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_state_session_t_session_handle_get(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  int *unaff_x19;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x26;
  long *plVar14;
  undefined8 in_stack_00000008;
  
  plVar14 = *(long **)(unaff_x26 + 0x5d8);
  if (*unaff_x19 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 10);
    lVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e902e8);
    FUN_06a4d5c4(lVar4,*(undefined8 *)PTR_DAT_08e902d0);
    uVar12 = *(undefined8 *)PTR_DAT_08f056e8;
    if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar12 = FUN_0710fcf0(uVar12,0);
    puVar2 = PTR_DAT_08f056d0;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_06a4e380(lVar4,*(undefined8 *)PTR_DAT_08f05738,uVar12,*(undefined8 *)PTR_DAT_08f056d0);
    puVar3 = PTR_DAT_08f056d8;
    uVar12 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08f056d8,0);
    FUN_06a4e380(lVar4,*(undefined8 *)PTR_DAT_08f05708,uVar12,*(undefined8 *)puVar2);
    uVar12 = FUN_0710fcf0(*(undefined8 *)puVar3,0);
    FUN_06a4e380(lVar4,*(undefined8 *)PTR_DAT_08f05710,uVar12,*(undefined8 *)puVar2);
    uVar12 = FUN_0710fcf0(*(undefined8 *)puVar3,0);
    FUN_06a4e380(lVar4,*(undefined8 *)PTR_DAT_08f05730,uVar12,*(undefined8 *)puVar2);
    uVar12 = FUN_0710fcf0(*(undefined8 *)puVar3,0);
    FUN_06a4e380(lVar4,*(undefined8 *)PTR_DAT_08f05720,uVar12,*(undefined8 *)puVar2);
    uVar12 = FUN_0710fcf0(*(undefined8 *)puVar3,0);
    FUN_06a4e380(lVar4,*(undefined8 *)PTR_DAT_08f05718,uVar12,*(undefined8 *)puVar2);
    *(long *)(unaff_x19 + 0xe) = lVar4;
    thunk_FUN_03d233cc(unaff_x19 + 0xe,lVar4);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar10 = *(undefined8 *)(unaff_x19 + 8);
    uVar12 = FUN_0817aec0(lVar9,0);
    lVar4 = FUN_081558b8(uVar10,uVar12,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    plVar11 = *(long **)(lVar9 + 0x10);
    uVar12 = FUN_0817a71c(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar4 + 0x10),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar10 = FUN_0817a730(*(long *)(unaff_x19 + 0xc),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar5 = FUN_0817a744(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar9 + 0x18),lVar4,0);
    uVar1 = 10;
    if ((*(uint *)(lVar4 + 0x18) & 0xff) != 0) {
      uVar1 = *(undefined4 *)(lVar4 + 0x1c);
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30(10);
    }
    lVar4 = *plVar11;
    uVar13 = *(undefined8 *)PTR_DAT_08e79190;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f056e0) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_08183554;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08f056e0,0);
LAB_08183554:
    lVar4 = (*(code *)*puVar6)(plVar11,uVar13,uVar12,uVar10,uVar5,uVar1,puVar6[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = FUN_05c0b91c(lVar4,*(undefined8 *)PTR_DAT_08f05220);
    uVar7 = FUN_05ac7d38(&stack0x00000008,*(undefined8 *)PTR_DAT_08f051f0);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_03d233cc(unaff_x19 + 0x10,0);
      if (*(int *)(*plVar14 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      System_Array__InternalArray__ICollection_CopyTo<SceneEventMetric>
                (unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  uVar12 = FUN_05ac7d7c(&stack0x00000008,*(undefined8 *)PTR_DAT_08f051e8);
  uVar10 = FUN_047aa6c0(uVar12,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)PTR_DAT_08f056f0);
  uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f05700);
  FUN_05a39d64(uVar5,uVar12,uVar10,*(undefined8 *)PTR_DAT_08f056f8);
  puVar2 = PTR_DAT_08f056c8;
  *unaff_x19 = -2;
  unaff_x19[0xe] = 0;
  unaff_x19[0xf] = 0;
  thunk_FUN_03d233cc(unaff_x19 + 0xe,0);
  if (*(int *)(*plVar14 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_063c7630(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
  return;
}


