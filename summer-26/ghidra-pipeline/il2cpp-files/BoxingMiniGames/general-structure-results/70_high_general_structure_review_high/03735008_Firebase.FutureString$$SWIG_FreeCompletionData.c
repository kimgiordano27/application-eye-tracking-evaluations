/*
FUNCTION_NAME: Firebase.FutureString$$SWIG_FreeCompletionData
ENTRY_POINT: 03735008
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_file_logging_hits_6;telemetry_or_network_hits_8;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Type propagation algorithm not settling */

byte * Firebase_FutureString__SWIG_FreeCompletionData
                 (undefined8 param_1,long *param_2,byte *param_3,uint param_4,long param_5)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong in_x10;
  ulong uVar6;
  byte *pbVar7;
  byte *unaff_x19;
  
  puVar3 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
  uVar5 = 0;
  pbVar4 = unaff_x19;
  pbVar7 = unaff_x19;
  do {
    if (pbVar7 == param_3) {
      fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
              "libunwind: %s - %s\n","getSLEB128","truncated sleb128 expression");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
    bVar1 = *pbVar7;
    pbVar4 = pbVar4 + 1;
    uVar6 = in_x10 & 0x3f;
    in_x10 = in_x10 + 7;
    uVar5 = ((ulong)bVar1 & 0x7f) << uVar6 | uVar5;
    pbVar7 = pbVar7 + 1;
  } while ((char)bVar1 < '\0');
  *param_2 = (long)pbVar4;
  puVar3 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
  uVar6 = -1L << (in_x10 & 0x3f);
  if (0x38 < (int)in_x10 - 7U || bVar1 < 0x40) {
    uVar6 = 0;
  }
  pbVar4 = (byte *)(uVar5 | uVar6);
  uVar2 = (param_4 & 0xff) >> 4 & 7;
  if (1 < uVar2) {
    if (uVar2 < 4) {
      if (uVar2 == 3) {
        if (param_5 == 0) {
          fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                  "libunwind: %s - %s\n","getEncodedP",
                  "DW_EH_PE_datarel is invalid with a datarelBase of 0");
          fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pbVar4 = pbVar4 + param_5;
        goto LAB_03735110;
      }
      if (uVar2 == 2) {
        fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                "libunwind: %s - %s\n","getEncodedP",
                "DW_EH_PE_textrel pointer encoding not supported");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (uVar2 == 4) {
        fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                "libunwind: %s - %s\n","getEncodedP",
                "DW_EH_PE_funcrel pointer encoding not supported");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (uVar2 == 5) {
        fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                "libunwind: %s - %s\n","getEncodedP",
                "DW_EH_PE_aligned pointer encoding not supported");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
LAB_0373525c:
    fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
            "libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
    fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar2 != 0) {
    if (uVar2 != 1) goto LAB_0373525c;
    pbVar4 = pbVar4 + (long)unaff_x19;
  }
LAB_03735110:
  if ((param_4 >> 7 & 1) == 0) {
    return pbVar4;
  }
  return *(byte **)pbVar4;
}


