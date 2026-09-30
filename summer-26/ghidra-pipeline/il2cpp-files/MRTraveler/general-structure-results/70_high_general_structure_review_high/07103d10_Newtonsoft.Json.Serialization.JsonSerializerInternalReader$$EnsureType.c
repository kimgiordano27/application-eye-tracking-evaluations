/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureType
ENTRY_POINT: 07103d10
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureType(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int in_w8;
  ulong in_x9;
  int in_w10;
  uint uVar6;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar7;
  ulong uVar8;
  short *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  ulong unaff_x26;
  int unaff_w27;
  undefined8 in_stack_00000008;
  uint uStack0000000000000010;
  int iStack0000000000000014;
  long in_stack_00000018;
  
  do {
    unaff_x21 = unaff_x21 + -1;
    *unaff_x21 = (short)in_w8;
    iVar3 = in_w10 + -1;
    if ((in_w10 < 0) && ((uint)in_x9 < 10)) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        iVar2 = iStack0000000000000014;
        iVar3 = in_stack_00000008._4_4_;
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if (iVar3 == 0 && iVar2 == 0) {
LAB_07103d28:
          uVar6 = uStack0000000000000010;
          uVar7 = (ulong)uStack0000000000000010;
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          if (uVar6 != 0) {
            iVar3 = -2;
            do {
              do {
                uVar8 = uVar7 / 10;
                uVar6 = (uint)uVar7;
                unaff_x21 = unaff_x21 + -1;
                *unaff_x21 = (short)uVar7 + (short)(uVar7 / 10) * -10 + 0x30;
                iVar2 = iVar3 + -1;
                bVar1 = -1 < iVar3;
                uVar7 = uVar8;
                iVar3 = iVar2;
              } while (bVar1);
            } while (9 < uVar6);
          }
          uVar7 = unaff_x23 - (long)unaff_x21;
          if ((long)uVar7 < 0) {
            uVar7 = uVar7 + 1;
          }
          uVar7 = uVar7 >> 1;
          iVar3 = FUN_0715df10(&stack0x00000008,0);
          *(int *)(unaff_x19 + 4) = (int)uVar7 - iVar3;
          psVar4 = (short *)FUN_0710f9e0();
          psVar5 = psVar4;
          if (-1 < (int)uVar7 + -1) {
            do {
              uVar6 = (int)uVar7 - 1;
              uVar7 = (ulong)uVar6;
              psVar4 = psVar5 + 1;
              *psVar5 = *unaff_x21;
              psVar5 = psVar4;
              unaff_x21 = unaff_x21 + 1;
            } while (0 < (int)uVar6);
          }
          *psVar4 = 0;
          if (*(long *)(unaff_x22 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
      else if (in_stack_00000008._4_4_ == 0 && iStack0000000000000014 == 0) goto LAB_07103d28;
      uVar7 = FUN_0715df58(&stack0x00000008,0);
      unaff_x20 = uVar7 & 0xffffffff;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*unaff_x25);
      }
      iVar3 = 7;
    }
    uVar7 = (unaff_x20 & 0xffffffff) * (unaff_x26 & 0xffffffff);
    in_x9 = unaff_x20 & 0xffffffff;
    in_w8 = (int)unaff_x20 + (uint)(uVar7 >> 0x23) * unaff_w27 + 0x30;
    unaff_x20 = uVar7 >> 0x23;
    in_w10 = iVar3;
  } while( true );
}


