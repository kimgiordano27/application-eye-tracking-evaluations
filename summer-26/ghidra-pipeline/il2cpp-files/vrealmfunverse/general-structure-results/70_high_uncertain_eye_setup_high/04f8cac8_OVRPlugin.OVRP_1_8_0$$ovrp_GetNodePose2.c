/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetNodePose2
ENTRY_POINT: 04f8cac8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetNodePose2
               (undefined1 param_1 [16],ulong param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined8 *puVar1;
  char cVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  while( true ) {
    uVar9 = (undefined4)param_2;
    uVar8 = FUN_05c9c2ec(param_5,0);
    if (unaff_x24 == 0) break;
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x20) {
LAB_04f8cc98:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar7 = unaff_x24 + unaff_x27;
    *(undefined4 *)(lVar7 + 0x1c0) = uVar8;
    *(undefined4 *)(lVar7 + 0x1c4) = uVar9;
    *(undefined4 *)(lVar7 + 0x1c8) = param_3;
    *(undefined4 *)(lVar7 + 0x1cc) = param_4;
    uVar5 = FUN_05c89340(unaff_x23,0);
    FUN_04ef8cd4(&stack0x00000020,uVar5,0,0);
    uStack0000000000000054 = CONCAT44(in_stack_00000038,uStack0000000000000034);
    uStack0000000000000048 = uStack0000000000000028;
    in_stack_00000040 = in_stack_00000020;
    uStack000000000000004c = uStack000000000000002c;
    uStack0000000000000050 = uStack0000000000000030;
    uVar5 = FUN_05c89340();
    FUN_04f0d2c4(&stack0x00000000 + 4,uVar5,&stack0x00000040,0);
    uStack0000000000000054 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
    param_2 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    uStack0000000000000048 = in_stack_00000000._12_4_;
    in_stack_00000040 = in_stack_00000000._4_8_;
    uStack000000000000004c = uStack0000000000000010;
    uStack0000000000000050 = uStack0000000000000014;
    if ((*(long *)(unaff_x19 + 0x48) == 0) ||
       (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38), lVar7 == 0)) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x20) goto LAB_04f8cc98;
    puVar1 = (undefined8 *)(lVar7 + unaff_x28);
    *(undefined4 *)(puVar1 + 3) = uStack000000000000001c;
    puVar1[2] = CONCAT44(uStack0000000000000018,uStack0000000000000014);
    puVar1[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
    *puVar1 = in_stack_00000000._4_8_;
    while( true ) {
      unaff_x27 = unaff_x27 + 0x10;
      unaff_x20 = unaff_x20 + 1;
      unaff_x28 = unaff_x28 + 0x1c;
      if (unaff_x27 == 0) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_04f8cc94;
      unaff_x23 = FUN_037a6268(*(long *)(unaff_x19 + 0x60),unaff_x20 & 0xffffffff,*unaff_x25);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*unaff_x26);
      }
      uVar4 = FUN_05c8e378(unaff_x23,0,0);
      lVar7 = *(long *)(unaff_x19 + 0x48);
      if ((uVar4 & 1) == 0) break;
      if (lVar7 == 0) goto LAB_04f8cc94;
      lVar7 = *(long *)(lVar7 + 0x48);
      if (*(char *)(unaff_x22 + 0xd9a) == '\0') {
        FUN_02b3c81c(unaff_x21);
        *(undefined1 *)(unaff_x22 + 0xd9a) = 1;
      }
      if (lVar7 == 0) goto LAB_04f8cc94;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x20) goto LAB_04f8cc98;
      uVar5 = **(undefined8 **)(*unaff_x21 + 0xb8);
      *(undefined8 *)(lVar7 + unaff_x27 + 0x1c8) = (*(undefined8 **)(*unaff_x21 + 0xb8))[1];
      *(undefined8 *)(lVar7 + unaff_x27 + 0x1c0) = uVar5;
      puVar3 = PTR_DAT_06312438;
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_04f8cc94;
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
      if (*(char *)(unaff_x29 + 0xd97) == '\0') {
        FUN_02b3c81c(PTR_DAT_06312438);
        cVar2 = *(char *)(unaff_x22 + 0xd9a);
        puVar6 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
        uVar8 = *puVar6;
        uVar10 = puVar6[1];
        param_3 = puVar6[2];
        *(undefined1 *)(unaff_x29 + 0xd97) = 1;
        unaff_x26 = (long *)PTR_DAT_06312520;
        if (cVar2 == '\0') {
          FUN_02b3c81c(unaff_x21);
          *(undefined1 *)(unaff_x22 + 0xd9a) = 1;
          unaff_x26 = (long *)PTR_DAT_06312520;
        }
      }
      else {
        puVar6 = *(undefined4 **)(*(long *)PTR_DAT_06312438 + 0xb8);
        uVar8 = *puVar6;
        uVar10 = puVar6[1];
        param_3 = puVar6[2];
      }
      param_2 = (ulong)uVar10;
      param_4 = **(undefined4 **)(*unaff_x21 + 0xb8);
      in_stack_00000020 = 0;
      uStack0000000000000028 = 0;
      uStack000000000000002c = 0;
      in_stack_00000038 = 0;
      uStack0000000000000030 = 0;
      uStack0000000000000034 = 0;
      FUN_05c99d80(uVar8,&stack0x00000020,0);
      if (lVar7 == 0) goto LAB_04f8cc94;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x20) goto LAB_04f8cc98;
      puVar1 = (undefined8 *)(lVar7 + unaff_x28);
      *(undefined4 *)(puVar1 + 3) = in_stack_00000038;
      puVar1[2] = CONCAT44(uStack0000000000000034,uStack0000000000000030);
      puVar1[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *puVar1 = in_stack_00000020;
    }
    if ((lVar7 == 0) || (unaff_x23 == 0)) break;
    unaff_x24 = *(long *)(lVar7 + 0x48);
    param_5 = FUN_05c89340(unaff_x23,0);
    if (param_5 == 0) break;
  }
LAB_04f8cc94:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


