/*
FUNCTION_NAME: Firebase.FutureString$$.ctor
ENTRY_POINT: 037350bc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_file_logging_hits_5;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 *
Firebase_FutureString___ctor
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5)

{
  undefined *puVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  int in_w8;
  long unaff_x19;
  
  puVar1 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
  if (in_ZR || in_NG != in_OV) {
    if (in_w8 != 0) {
      if (in_w8 != 1) goto LAB_0373525c;
      param_1 = (undefined8 *)((long)param_1 + unaff_x19);
    }
LAB_03735110:
    if ((param_4 >> 7 & 1) == 0) {
      return param_1;
    }
    return (undefined8 *)*param_1;
  }
  if (in_w8 < 4) {
    if (in_w8 == 3) {
      if (param_5 == 0) {
        fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                "libunwind: %s - %s\n","getEncodedP",
                "DW_EH_PE_datarel is invalid with a datarelBase of 0");
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      param_1 = (undefined8 *)((long)param_1 + param_5);
      goto LAB_03735110;
    }
    if (in_w8 == 2) {
      fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
              "libunwind: %s - %s\n","getEncodedP","DW_EH_PE_textrel pointer encoding not supported"
             );
      fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    if (in_w8 == 4) {
      fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
              "libunwind: %s - %s\n","getEncodedP","DW_EH_PE_funcrel pointer encoding not supported"
             );
      fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (in_w8 == 5) {
      fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
              "libunwind: %s - %s\n","getEncodedP","DW_EH_PE_aligned pointer encoding not supported"
             );
      fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
LAB_0373525c:
  fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
          "libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


