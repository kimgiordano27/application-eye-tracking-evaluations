/*
FUNCTION_NAME: Meta.WitAi.WitRequest.PreSendRequestDelegate$$Invoke
ENTRY_POINT: 03292a98
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_8
*/


int Meta_WitAi_WitRequest_PreSendRequestDelegate__Invoke(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar6;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  do {
    uStack0000000000000048 = in_stack_00000028;
    uStack0000000000000040 = in_stack_00000020;
    uStack0000000000000050 = in_stack_00000030;
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) == 0) {
      iVar3 = *(int *)(unaff_x19 + 0x18);
Meta_WitAi_WitRequest_PreSendRequestDelegate__EndInvoke:
      uVar6 = (uint)unaff_x22;
      if ((int)uVar6 < iVar3) {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_03292b90;
        lVar5 = lVar4 + (long)(int)uVar6 * (long)(int)unaff_x23;
        uVar8 = *(undefined8 *)(lVar5 + 0x28);
        uVar7 = *(undefined8 *)(lVar5 + 0x20);
        if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_03292b90;
        lVar4 = lVar4 + (int)unaff_w21 * unaff_x23;
        unaff_w21 = unaff_w21 + 1;
        *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar5 + 0x30);
        *(undefined8 *)(lVar4 + 0x28) = uVar8;
        *(undefined8 *)(lVar4 + 0x20) = uVar7;
        thunk_FUN_01f51358(lVar4 + 0x20,0);
        iVar3 = *(int *)(unaff_x19 + 0x18);
        uVar6 = uVar6 + 1;
      }
      if (iVar3 <= (int)uVar6) {
        FUN_0358d1e4(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar3 - unaff_w21,0);
        iVar3 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar3 - unaff_w21;
      }
      unaff_x24 = (long)(int)uVar6 * (long)(int)unaff_x23 + 0x20;
      unaff_x22 = (long)(int)uVar6;
    }
    else {
      iVar3 = *(int *)(unaff_x19 + 0x18);
      unaff_x22 = unaff_x22 + 1;
      unaff_x24 = unaff_x24 + 0x18;
      if (iVar3 <= unaff_x22) goto Meta_WitAi_WitRequest_PreSendRequestDelegate__EndInvoke;
    }
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x22) {
LAB_03292b90:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    puVar1 = (undefined8 *)(lVar4 + unaff_x24);
    in_stack_00000030 = puVar1[2];
    in_stack_00000028 = puVar1[1];
    in_stack_00000020 = *puVar1;
  } while (unaff_x20 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


