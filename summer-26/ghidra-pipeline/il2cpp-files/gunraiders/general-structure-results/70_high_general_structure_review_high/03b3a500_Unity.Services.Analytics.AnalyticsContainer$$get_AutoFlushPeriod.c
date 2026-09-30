/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsContainer$$get_AutoFlushPeriod
ENTRY_POINT: 03b3a500
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


uint Unity_Services_Analytics_AnalyticsContainer__get_AutoFlushPeriod
               (long param_1,undefined4 param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint in_w9;
  uint in_w10;
  long unaff_x19;
  long unaff_x22;
  ushort *unaff_x23;
  float unaff_s8;
  
  if (in_w10 < in_w9) {
    *(float *)(param_1 + (long)(int)in_w10 * 0x20 + 0x34) = unaff_s8;
    if ((uint)(int)(short)*unaff_x23 < in_w9) {
      *(undefined4 *)(param_1 + (long)(int)(short)*unaff_x23 * 0x20 + 0x38) =
           *(undefined4 *)(unaff_x22 + 0x18);
      if ((uint)(int)(short)*unaff_x23 < in_w9) {
        *(undefined4 *)(param_1 + (long)(int)(short)*unaff_x23 * 0x20 + 0x3c) =
             *(undefined4 *)(unaff_x22 + 0x1c);
        if ((uint)(int)*(short *)(unaff_x22 + 6) < in_w9) {
          *(undefined4 *)(param_1 + (long)(int)*(short *)(unaff_x22 + 6) * 0x20 + 0x30) =
               *(undefined4 *)(unaff_x22 + 0x10);
          if ((uint)(int)*(short *)(unaff_x22 + 6) < in_w9) {
            *(undefined4 *)(param_1 + (long)(int)*(short *)(unaff_x22 + 6) * 0x20 + 0x34) = param_2;
            if ((uint)(int)*(short *)(unaff_x22 + 6) < in_w9) {
              *(undefined4 *)(param_1 + (long)(int)*(short *)(unaff_x22 + 6) * 0x20 + 0x38) =
                   *(undefined4 *)(unaff_x22 + 0x18);
              if ((uint)(int)*(short *)(unaff_x22 + 6) < in_w9) {
                *(float *)(param_1 + (long)(int)*(short *)(unaff_x22 + 6) * 0x20 + 0x3c) =
                     *(float *)(unaff_x22 + 0x1c) + unaff_s8;
                uVar2 = (uint)(short)*unaff_x23;
                if (uVar2 < in_w9) {
                  if (param_3 < 1.0) {
                    param_1 = param_1 + (long)(int)uVar2 * 0x20;
                    *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 1;
                    uVar2 = (uint)*unaff_x23;
                  }
                  else {
                    uVar1 = FUN_03b3a3b8(param_1 + (long)(int)uVar2 * 0x20 + 0x20);
                    uVar2 = (uint)(short)uVar1;
                    if ((uVar1 >> 0xf & 1) == 0) {
                      lVar3 = *(long *)(unaff_x19 + 0x10);
                      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d4a4();
                      }
                      if (*(uint *)(lVar3 + 0x18) <= (uVar1 & 0xffff)) goto LAB_03b3a784;
                      lVar3 = lVar3 + ((ulong)uVar2 & 0xffff) * 0x20;
                      *(ushort *)(lVar3 + 0x2a) = *(ushort *)(lVar3 + 0x2a) | 1;
                    }
                  }
                  return uVar2;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03b3a784:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


