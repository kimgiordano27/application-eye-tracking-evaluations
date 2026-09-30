/*
FUNCTION_NAME: Unity.Services.CloudSave.Internal.Data.QueryDefaultPlayerDataRequest$$get_QueryIndexBody
ENTRY_POINT: 05ecbb6c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_7;telemetry_or_network_hits_8
*/


void Unity_Services_CloudSave_Internal_Data_QueryDefaultPlayerDataRequest__get_QueryIndexBody
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  long lVar3;
  long lVar4;
  undefined8 unaff_x20;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  ulong unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long lVar5;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  do {
    lVar5 = *(long *)(param_1 + 0x18);
    lVar3 = *(long *)(in_x9 + unaff_x25 * 8 + 0x20);
    if (lVar3 == 0) {
      FUN_062859bc(&stack0x00000010,0,0);
    }
    else {
      in_stack_00000018 = *(undefined8 *)(lVar3 + 0x30);
      in_stack_00000010 = *(undefined8 *)(lVar3 + 0x28);
      in_stack_00000028 = *(undefined8 *)(lVar3 + 0x40);
      in_stack_00000020 = *(undefined8 *)(lVar3 + 0x38);
      in_stack_00000030 = *(undefined8 *)(lVar3 + 0x48);
    }
    if (lVar5 == 0)
    goto Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x25) break;
    puVar1 = (undefined8 *)(lVar5 + unaff_x27);
    unaff_x25 = unaff_x25 + 1;
    unaff_x27 = unaff_x27 + 0x28;
    puVar1[4] = in_stack_00000030;
    puVar1[1] = in_stack_00000018;
    *puVar1 = in_stack_00000010;
    puVar1[3] = in_stack_00000028;
    puVar1[2] = in_stack_00000020;
    lVar3 = *unaff_x26;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar3 = *unaff_x26;
    }
    param_1 = *(long *)(lVar3 + 0xb8);
    in_x9 = *(long *)(param_1 + 0x20);
    if (in_x9 == 0)
    goto Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody;
    if ((long)*(int *)(in_x9 + 0x18) <= (long)unaff_x25) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar3 = *unaff_x26;
        param_1 = *(long *)(lVar3 + 0xb8);
      }
      lVar5 = *(long *)(param_1 + 0x30);
      if (lVar5 == 0)
      goto 
      Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody;
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined4 *)(lVar5 + 0x20) = unaff_w23;
        lVar5 = 9;
        *(undefined4 *)(param_1 + 0x38) = unaff_w22;
        goto LAB_05ecbc08;
      }
      break;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      param_1 = *(long *)(*unaff_x26 + 0xb8);
      in_x9 = *(long *)(param_1 + 0x20);
      if (in_x9 == 0)
      goto 
      Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody;
    }
  } while (unaff_x25 < *(uint *)(in_x9 + 0x18));
LAB_05ecbd38:
                    /* WARNING: Subroutine does not return */
  FUN_02e3cccc();
LAB_05ecbc08:
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar3 = *unaff_x26;
  }
  lVar2 = *(long *)(lVar3 + 0xb8);
  lVar4 = *(long *)(lVar2 + 0x30);
  if (lVar4 == 0) {
Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody:
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  if ((long)*(int *)(lVar4 + 0x18) <= (long)(lVar5 - 8U)) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar2 = *(long *)(*unaff_x26 + 0xb8);
    }
    *(undefined8 *)(lVar2 + 0x28) = unaff_x20;
    thunk_FUN_02ee2be8((undefined8 *)(lVar2 + 0x28));
    if ((*(int *)(*unaff_x26 + 0xe4) == 0) &&
       (thunk_FUN_02e9a04c(), *(int *)(*unaff_x26 + 0xe4) == 0)) {
      thunk_FUN_02e9a04c();
    }
    FUN_05ecbd48(unaff_s11,unaff_s10);
    return;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar3 = *unaff_x26;
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
    if (lVar4 == 0)
    goto Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody;
  }
  if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar5 - 8U) goto LAB_05ecbd38;
  *(undefined4 *)(lVar4 + lVar5 * 4) = 0;
  lVar5 = lVar5 + 1;
  goto LAB_05ecbc08;
}


