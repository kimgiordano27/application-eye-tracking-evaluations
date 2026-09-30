/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureType
ENTRY_POINT: 07a40e90
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureType(void)

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
  short *unaff_x21;
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
  
  do {
    iVar3 = 7;
    do {
      do {
        uVar6 = (unaff_x20 & 0xffffffff) * (unaff_x26 & 0xffffffff);
        uVar7 = (uint)unaff_x20;
        uVar8 = uVar6 >> 0x23;
        unaff_x21 = unaff_x21 + -1;
        *unaff_x21 = (short)unaff_x20 + (short)(uint)(uVar6 >> 0x23) * unaff_w27 + 0x30;
        iVar2 = iVar3 + -1;
        bVar1 = -1 < iVar3;
        unaff_x20 = uVar8;
        iVar3 = iVar2;
      } while (bVar1);
    } while (9 < uVar7);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      iVar2 = iStack0000000000000014;
      iVar3 = in_stack_00000008._4_4_;
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if (iVar3 == 0 && iVar2 == 0) {
LAB_07a40ec4:
        uVar7 = uStack0000000000000010;
        uVar6 = (ulong)uStack0000000000000010;
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        if (uVar7 != 0) {
          iVar3 = -2;
          do {
            do {
              uVar8 = uVar6 / 10;
              uVar7 = (uint)uVar6;
              unaff_x21 = unaff_x21 + -1;
              *unaff_x21 = (short)uVar6 + (short)(uVar6 / 10) * -10 + 0x30;
              iVar2 = iVar3 + -1;
              bVar1 = -1 < iVar3;
              uVar6 = uVar8;
              iVar3 = iVar2;
            } while (bVar1);
          } while (9 < uVar7);
        }
        uVar6 = unaff_x23 - (long)unaff_x21;
        if ((long)uVar6 < 0) {
          uVar6 = uVar6 + 1;
        }
        uVar6 = uVar6 >> 1;
        iVar3 = FUN_07a99510(&stack0x00000008,0);
        *(int *)(unaff_x19 + 4) = (int)uVar6 - iVar3;
        psVar4 = (short *)FUN_07a4cba0();
        psVar5 = psVar4;
        if (-1 < (int)uVar6 + -1) {
          do {
            uVar7 = (int)uVar6 - 1;
            uVar6 = (ulong)uVar7;
            psVar4 = psVar5 + 1;
            *psVar5 = *unaff_x21;
            psVar5 = psVar4;
            unaff_x21 = unaff_x21 + 1;
          } while (0 < (int)uVar7);
        }
        *psVar4 = 0;
        if (*(long *)(unaff_x22 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
    else if (in_stack_00000008._4_4_ == 0 && iStack0000000000000014 == 0) goto LAB_07a40ec4;
    uVar6 = FUN_07a99558(&stack0x00000008,0);
    unaff_x20 = uVar6 & 0xffffffff;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*unaff_x25);
    }
  } while( true );
}


