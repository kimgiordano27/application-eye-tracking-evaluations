/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_participant_added_t_sessiongroup_handle_set
ENTRY_POINT: 08449e4c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_added_t_sessiongroup_handle_set
               (void)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar10;
  undefined8 uVar11;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  
  lVar3 = FUN_083f2c3c();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
                    /* try { // try from 08449e68 to 08549f2f has its CatchHandler @ 08449e68
                       catch() { ... } // from try @ 08449e68 with catch @ 08449e68
                       catch() { ... } // from try @ 08449f64 with catch @ 08449e68
                       catch() { ... } // from try @ 0844a06c with catch @ 08449e68
                       catch() { ... } // from try @ 0844a0a0 with catch @ 08449e68
                       catch() { ... } // from try @ 0844a0dc with catch @ 08449e68
                       catch() { ... } // from try @ 0844a10c with catch @ 08449e68 */
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  plVar10 = *(long **)(unaff_x20 + 0x10);
  uVar4 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_MAX_HTTP_DATA_RESPONSE_SIZE_EXCEEDED_get
                    (*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar3 + 0x10),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar5 = FUN_0842fa3c(*(long *)(unaff_x19 + 0xc),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar6 = FUN_0842fa44(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x20 + 0x18),lVar3,0);
  uVar1 = 10;
  if ((*(uint *)(lVar3 + 0x18) & 0xff) != 0) {
    uVar1 = *(undefined4 *)(lVar3 + 0x1c);
  }
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548(10);
  }
  lVar3 = *plVar10;
  uVar11 = *(undefined8 *)PTR_DAT_091a85e8;
  uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0927ce50) {
        puVar7 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_08449f3c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_03d8f370(plVar10,*(long *)PTR_DAT_0927ce50,0);
LAB_08449f3c:
  lVar3 = (*(code *)*puVar7)(plVar10,uVar11,uVar4,uVar5,uVar6,uVar1,puVar7[1]);
  if (lVar3 != 0) {
    in_stack_00000008 = FUN_0636bf40(lVar3,*(undefined8 *)PTR_DAT_0927ca30);
    uVar8 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9d0);
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_04a5ad9c(unaff_x19 + 2,&stack0x00000008);
    }
    else {
      uVar4 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9c8);
      uVar5 = FUN_050d2b9c(uVar4,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)PTR_DAT_0927ced0);
      uVar6 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927cee0);
      FUN_0626aa00(uVar6,uVar4,uVar5,*(undefined8 *)PTR_DAT_0927ced8);
      puVar2 = PTR_DAT_0927c050;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_03d1023c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_062285f0(unaff_x19 + 2,uVar6,*(undefined8 *)puVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


