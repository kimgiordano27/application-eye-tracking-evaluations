/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_add_session_t_base__set
ENTRY_POINT: 0845dc8c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_base__set
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  
  FUN_0844648c(param_1,0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  FUN_084464a0(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x20 + 0x18));
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548(10);
  }
  lVar6 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0927ce50) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0845dd40;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_03d8f370();
LAB_0845dd40:
  lVar6 = (*(code *)*puVar2)();
  if (lVar6 != 0) {
    in_stack_00000008 = FUN_0636bf40(lVar6,*(undefined8 *)PTR_DAT_0927ca30);
    uVar7 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9d0);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_04a596c0(unaff_x19 + 2,&stack0x00000008);
    }
    else {
      uVar3 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9c8);
      uVar4 = FUN_050d2b9c(uVar3,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)PTR_DAT_0927d1a0);
      uVar5 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927d1b0);
      FUN_0626aa00(uVar5,uVar3,uVar4,*(undefined8 *)PTR_DAT_0927d1a8);
      puVar1 = PTR_DAT_0927d190;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_03d1023c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_062285f0(unaff_x19 + 2,uVar5,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


