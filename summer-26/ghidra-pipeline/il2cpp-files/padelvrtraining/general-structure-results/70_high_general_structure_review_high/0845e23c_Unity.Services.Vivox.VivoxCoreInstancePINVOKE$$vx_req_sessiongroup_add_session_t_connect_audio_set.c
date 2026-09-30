/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_add_session_t_connect_audio_set
ENTRY_POINT: 0845e23c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_connect_audio_set
               (undefined8 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int in_w9;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  
  uVar10 = *param_1;
  if (in_w9 == 0) {
    thunk_FUN_03db619c();
  }
  FUN_07186ef4(uVar10,0);
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  FUN_06b6dddc();
  FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_50776_0927c930,0);
  FUN_06b6dddc();
  puVar2 = PTR_StringLiteral_49645_0927c4e8;
  FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_49645_0927c4e8,0);
  FUN_06b6dddc();
  FUN_07186ef4(*(undefined8 *)puVar2,0);
  FUN_06b6dddc();
  FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_49647_0927d1d8,0);
  FUN_06b6dddc();
  FUN_07186ef4(*(undefined8 *)puVar2,0);
  FUN_06b6dddc();
  FUN_07186ef4(*(undefined8 *)puVar2,0);
  FUN_06b6dddc();
  FUN_07186ef4(*(undefined8 *)puVar2,0);
  FUN_06b6dddc();
  *(long *)(unaff_x19 + 0xe) = unaff_x21;
  thunk_FUN_03d1023c();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 8);
  uVar10 = FUN_0844be1c();
  lVar3 = FUN_083f2c3c(uVar8,uVar10,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  plVar9 = *(long **)(unaff_x20 + 0x10);
  uVar10 = FUN_08446d84(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar3 + 0x10),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar8 = FUN_08446d98(*(long *)(unaff_x19 + 0xc),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar4 = FUN_08446dac(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x20 + 0x18),lVar3,0);
  uVar1 = 10;
  if ((*(uint *)(lVar3 + 0x18) & 0xff) != 0) {
    uVar1 = *(undefined4 *)(lVar3 + 0x1c);
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548(10);
  }
  lVar3 = *plVar9;
  uVar11 = *(undefined8 *)PTR_DAT_091a5a20;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0927ce50) {
        puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0845e4bc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)PTR_DAT_0927ce50,0);
LAB_0845e4bc:
  lVar3 = (*(code *)*puVar5)(plVar9,uVar11,uVar10,uVar8,uVar4,uVar1,puVar5[1]);
  if (lVar3 != 0) {
    in_stack_00000008 = FUN_0636bf40(lVar3,*(undefined8 *)PTR_DAT_0927ca30);
    uVar6 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9d0);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_04a598d4(unaff_x19 + 2,&stack0x00000008);
    }
    else {
      uVar10 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9c8);
      uVar8 = FUN_050d2b9c(uVar10,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)PTR_DAT_0927d1e0);
      uVar4 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927d1f0);
      FUN_0626aa00(uVar4,uVar10,uVar8,*(undefined8 *)PTR_DAT_0927d1e8);
      puVar2 = PTR_DAT_0927ba78;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_03d1023c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_062285f0(unaff_x19 + 2,uVar4,*(undefined8 *)puVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


