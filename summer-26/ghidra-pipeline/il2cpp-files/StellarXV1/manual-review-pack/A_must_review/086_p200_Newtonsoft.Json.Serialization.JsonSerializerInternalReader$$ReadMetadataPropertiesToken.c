/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataPropertiesToken
ENTRY_POINT: 0767c370
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataPropertiesToken
               (short *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  ulong uVar6;
  uint uVar7;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar8;
  short *psVar9;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  ulong unaff_x26;
  short unaff_w27;
  undefined8 in_stack_00000008;
  uint uStack0000000000000010;
  int iStack0000000000000014;
  long in_stack_00000018;
  
  while( true ) {
    iVar3 = 7;
    do {
      do {
        psVar9 = param_1;
        uVar6 = (unaff_x20 & 0xffffffff) * (unaff_x26 & 0xffffffff);
        uVar7 = (uint)unaff_x20;
        uVar8 = uVar6 >> 0x23;
        *psVar9 = (short)unaff_x20 + (short)(uint)(uVar6 >> 0x23) * unaff_w27 + 0x30;
        iVar2 = iVar3 + -1;
        bVar1 = -1 < iVar3;
        param_1 = psVar9 + -1;
        unaff_x20 = uVar8;
        iVar3 = iVar2;
      } while (bVar1);
    } while (9 < uVar7);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (in_stack_00000008._4_4_ == 0 && iStack0000000000000014 == 0) break;
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar6 = FUN_076d5d38(&stack0x00000008,0);
    unaff_x20 = uVar6 & 0xffffffff;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x25);
    }
    param_1 = psVar9 + -1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar7 = uStack0000000000000010;
  uVar6 = (ulong)uStack0000000000000010;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (uVar7 != 0) {
    psVar5 = psVar9 + -1;
    iVar3 = -2;
    do {
      do {
        psVar9 = psVar5;
        uVar8 = uVar6 / 10;
        uVar7 = (uint)uVar6;
        *psVar9 = (short)uVar6 + (short)(uVar6 / 10) * -10 + 0x30;
        iVar2 = iVar3 + -1;
        bVar1 = -1 < iVar3;
        psVar5 = psVar9 + -1;
        uVar6 = uVar8;
        iVar3 = iVar2;
      } while (bVar1);
    } while (9 < uVar7);
  }
  uVar6 = unaff_x23 - (long)psVar9;
  if ((long)uVar6 < 0) {
    uVar6 = uVar6 + 1;
  }
  uVar6 = uVar6 >> 1;
  iVar3 = FUN_076d5cf0(&stack0x00000008,0);
  *(int *)(unaff_x19 + 4) = (int)uVar6 - iVar3;
  psVar4 = (short *)FUN_07688678();
  psVar5 = psVar4;
  if (-1 < (int)uVar6 + -1) {
    do {
      uVar7 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar7;
      psVar4 = psVar5 + 1;
      *psVar5 = *psVar9;
      psVar5 = psVar4;
      psVar9 = psVar9 + 1;
    } while (uVar7 != 0);
  }
  *psVar4 = 0;
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000018) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


