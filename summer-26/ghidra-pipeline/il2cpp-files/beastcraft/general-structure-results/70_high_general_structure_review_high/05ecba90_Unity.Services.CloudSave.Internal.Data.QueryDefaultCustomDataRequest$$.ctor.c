/*
FUNCTION_NAME: Unity.Services.CloudSave.Internal.Data.QueryDefaultCustomDataRequest$$.ctor
ENTRY_POINT: 05ecba90
PROGRAM: beastcraft-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_9;telemetry_or_network_hits_10
*/


void Unity_Services_CloudSave_Internal_Data_QueryDefaultCustomDataRequest___ctor(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 unaff_x20;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  ulong uVar5;
  long *unaff_x26;
  long lVar6;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  thunk_FUN_02ee2be8();
  uVar5 = 1;
  lVar6 = 0x28;
  while( true ) {
    lVar2 = *unaff_x26;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar2 = *unaff_x26;
    }
    lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
    if (lVar3 == 0)
    goto Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody;
    if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar5) {
      uVar5 = 0;
      lVar6 = 0x20;
      goto LAB_05ecbb1c;
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar3 = *(long *)(*(long *)(*unaff_x26 + 0xb8) + 0x20);
      if (lVar3 == 0)
      goto 
      Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar5) break;
    *(undefined8 *)(lVar3 + lVar6) = 0;
    thunk_FUN_02ee2be8(lVar3 + lVar6,0);
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 8;
  }
LAB_05ecbd38:
                    /* WARNING: Subroutine does not return */
  FUN_02e3cccc();
LAB_05ecbb1c:
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar2 = *unaff_x26;
  }
  lVar3 = *(long *)(lVar2 + 0xb8);
  lVar4 = *(long *)(lVar3 + 0x20);
  if (lVar4 == 0)
  goto Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody;
  if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar5) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar2 = *unaff_x26;
      lVar3 = *(long *)(lVar2 + 0xb8);
    }
    lVar6 = *(long *)(lVar3 + 0x30);
    if (lVar6 == 0)
    goto Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody;
    if (*(int *)(lVar6 + 0x18) != 0) {
      *(undefined4 *)(lVar6 + 0x20) = unaff_w23;
      lVar6 = 9;
      *(undefined4 *)(lVar3 + 0x38) = unaff_w22;
      goto LAB_05ecbc08;
    }
    goto LAB_05ecbd38;
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar3 = *(long *)(*unaff_x26 + 0xb8);
    lVar4 = *(long *)(lVar3 + 0x20);
    if (lVar4 == 0)
    goto Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody;
  }
  if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_05ecbd38;
  lVar3 = *(long *)(lVar3 + 0x18);
  lVar2 = *(long *)(lVar4 + uVar5 * 8 + 0x20);
  if (lVar2 == 0) {
    FUN_062859bc(&stack0x00000010,0,0);
  }
  else {
    in_stack_00000018 = *(undefined8 *)(lVar2 + 0x30);
    in_stack_00000010 = *(undefined8 *)(lVar2 + 0x28);
    in_stack_00000028 = *(undefined8 *)(lVar2 + 0x40);
    in_stack_00000020 = *(undefined8 *)(lVar2 + 0x38);
    in_stack_00000030 = *(undefined8 *)(lVar2 + 0x48);
  }
  if (lVar3 == 0)
  goto Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody;
  if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_05ecbd38;
  puVar1 = (undefined8 *)(lVar3 + lVar6);
  uVar5 = uVar5 + 1;
  lVar6 = lVar6 + 0x28;
  puVar1[4] = in_stack_00000030;
  puVar1[1] = in_stack_00000018;
  *puVar1 = in_stack_00000010;
  puVar1[3] = in_stack_00000028;
  puVar1[2] = in_stack_00000020;
  lVar2 = *unaff_x26;
  goto LAB_05ecbb1c;
LAB_05ecbc08:
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar2 = *unaff_x26;
  }
  lVar3 = *(long *)(lVar2 + 0xb8);
  lVar4 = *(long *)(lVar3 + 0x30);
  if (lVar4 == 0) {
Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody:
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  if ((long)*(int *)(lVar4 + 0x18) <= (long)(lVar6 - 8U)) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar3 = *(long *)(*unaff_x26 + 0xb8);
    }
    *(undefined8 *)(lVar3 + 0x28) = unaff_x20;
    thunk_FUN_02ee2be8((undefined8 *)(lVar3 + 0x28));
    if ((*(int *)(*unaff_x26 + 0xe4) == 0) &&
       (thunk_FUN_02e9a04c(), *(int *)(*unaff_x26 + 0xe4) == 0)) {
      thunk_FUN_02e9a04c();
    }
    FUN_05ecbd48(unaff_s11,unaff_s10);
    return;
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar2 = *unaff_x26;
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
    if (lVar4 == 0)
    goto Unity_Services_CloudSave_Internal_Data_QueryProtectedPlayerDataRequest__get_QueryIndexBody;
  }
  if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar6 - 8U) goto LAB_05ecbd38;
  *(undefined4 *)(lVar4 + lVar6 * 4) = 0;
  lVar6 = lVar6 + 1;
  goto LAB_05ecbc08;
}


