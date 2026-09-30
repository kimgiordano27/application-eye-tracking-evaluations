/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_edit_message_t$$Dispose
ENTRY_POINT: 081c0ec8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_vx_evt_session_edit_message_t__Dispose(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  int *unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000008;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x860));
  FUN_03c8f898(PTR_DAT_08e707a8);
  FUN_03c8f898(PTR_DAT_08f07978);
  FUN_03c8f898(PTR_DAT_08f07980);
  FUN_03c8f898(PTR_DAT_08f07988);
  FUN_03c8f898(PTR_DAT_08f07990);
  FUN_03c8f898(PTR_DAT_08f076d0);
  FUN_03c8f898(PTR_DAT_08f076d8);
  FUN_03c8f898(PTR_DAT_08f07708);
  FUN_03c8f898(PTR_DAT_08e695f0);
  FUN_03c8f898(PTR_DAT_08f05708);
  FUN_03c8f898(PTR_DAT_08e82db8);
  FUN_03c8f898(PTR_DAT_08f07998);
  FUN_03c8f898(PTR_DAT_08f05710);
  FUN_03c8f898(PTR_DAT_08f05718);
  FUN_03c8f898(PTR_DAT_08f079a0);
  FUN_03c8f898(PTR_DAT_08f05720);
  FUN_03c8f898(PTR_DAT_08f05738);
  *(undefined1 *)(unaff_x20 + 0x2ee) = 1;
  puVar3 = PTR_DAT_08f07938;
  in_stack_00000008 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 10);
    lVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e902e8);
    FUN_06a4d5c4(lVar5,*(undefined8 *)PTR_DAT_08e902d0);
    uVar12 = *(undefined8 *)PTR_DAT_08f07978;
    if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar12 = FUN_0710fcf0(uVar12,0);
    puVar2 = PTR_DAT_08f056d0;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_06a4e380(lVar5,*(undefined8 *)PTR_DAT_08f05738,uVar12,*(undefined8 *)PTR_DAT_08f056d0);
    puVar4 = PTR_DAT_08f07968;
    uVar12 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08f07968,0);
    FUN_06a4e380(lVar5,*(undefined8 *)PTR_DAT_08f05708,uVar12,*(undefined8 *)puVar2);
    uVar12 = FUN_0710fcf0(*(undefined8 *)puVar4,0);
    FUN_06a4e380(lVar5,*(undefined8 *)PTR_DAT_08f07998,uVar12,*(undefined8 *)puVar2);
    uVar12 = FUN_0710fcf0(*(undefined8 *)puVar4,0);
    FUN_06a4e380(lVar5,*(undefined8 *)PTR_DAT_08f05710,uVar12,*(undefined8 *)puVar2);
    uVar12 = FUN_0710fcf0(*(undefined8 *)puVar4,0);
    FUN_06a4e380(lVar5,*(undefined8 *)PTR_DAT_08f05720,uVar12,*(undefined8 *)puVar2);
    uVar12 = FUN_0710fcf0(*(undefined8 *)puVar4,0);
    FUN_06a4e380(lVar5,*(undefined8 *)PTR_DAT_08f05718,uVar12,*(undefined8 *)puVar2);
    uVar12 = FUN_0710fcf0(*(undefined8 *)puVar4,0);
    FUN_06a4e380(lVar5,*(undefined8 *)PTR_DAT_08f079a0,uVar12,*(undefined8 *)puVar2);
    *(long *)(unaff_x19 + 0xe) = lVar5;
    thunk_FUN_03d233cc(unaff_x19 + 0xe,lVar5);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar10 = *(undefined8 *)(unaff_x19 + 8);
    uVar12 = FUN_081c0c40(lVar9);
    lVar5 = FUN_081b6fe4(uVar10,uVar12);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    plVar11 = *(long **)(lVar9 + 0x10);
    uVar12 = FUN_06f683f8(*(undefined8 *)(lVar5 + 0x10),
                          *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x30),0);
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar10 = FUN_081c0460(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar9 + 0x18),lVar5);
    uVar1 = 10;
    if ((*(uint *)(lVar5 + 0x18) & 0xff) != 0) {
      uVar1 = *(undefined4 *)(lVar5 + 0x1c);
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30(10);
    }
    lVar5 = *plVar11;
    uVar13 = *(undefined8 *)PTR_DAT_08e82db8;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f07970) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_081c1228;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08f07970,0);
LAB_081c1228:
    lVar5 = (*(code *)*puVar6)(plVar11,uVar13,uVar12,0,uVar10,uVar1,puVar6[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = FUN_05c0b91c(lVar5,*(undefined8 *)PTR_DAT_08f07708);
    uVar7 = FUN_05ac7d38(&stack0x00000008,*(undefined8 *)PTR_DAT_08f076d8);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_03d233cc(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0417e14c(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  uVar12 = FUN_05ac7d7c(&stack0x00000008,*(undefined8 *)PTR_DAT_08f076d0);
  uVar10 = FUN_047abf84(uVar12,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)PTR_DAT_08f07980);
  uVar13 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f07990);
  FUN_05a3a244(uVar13,uVar12,uVar10,*(undefined8 *)PTR_DAT_08f07988);
  puVar2 = PTR_DAT_08f07960;
  *unaff_x19 = -2;
  unaff_x19[0xe] = 0;
  unaff_x19[0xf] = 0;
  thunk_FUN_03d233cc(unaff_x19 + 0xe,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_063c7630(unaff_x19 + 2,uVar13,*(undefined8 *)puVar2);
  return;
}


