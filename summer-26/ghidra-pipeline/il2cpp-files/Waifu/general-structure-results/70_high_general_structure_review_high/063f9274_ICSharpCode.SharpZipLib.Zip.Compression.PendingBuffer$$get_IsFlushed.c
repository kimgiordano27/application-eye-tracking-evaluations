/*
FUNCTION_NAME: ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer$$get_IsFlushed
ENTRY_POINT: 063f9274
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void ICSharpCode_SharpZipLib_Zip_Compression_PendingBuffer__get_IsFlushed(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  float fVar7;
  
  fVar7 = (float)FUN_07cb4e50();
  if ((*(float *)(unaff_x19 + 0x28) != fVar7) &&
     (((uint)ABS(fVar7) < 0x7f800001 || ((uint)ABS(*(float *)(unaff_x19 + 0x28)) < 0x7f800001)))) {
    *(float *)(unaff_x19 + 0x28) = fVar7;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    fVar7 = (float)FUN_07cb4f78(*(long *)(unaff_x19 + 0x30),0);
    if ((*(float *)(unaff_x19 + 0x2c) != fVar7) &&
       (((uint)ABS(fVar7) < 0x7f800001 || ((uint)ABS(*(float *)(unaff_x19 + 0x2c)) < 0x7f800001))))
    {
      lVar4 = *(long *)(unaff_x19 + 0x38);
      *(float *)(unaff_x19 + 0x2c) = fVar7;
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      }
    }
    if (*(char *)(unaff_x19 + 0x15) == '\0') {
      lVar4 = *(long *)(unaff_x19 + 0x30);
      if (lVar4 == 0) goto LAB_063f94cc;
      if (DAT_086f3fd0 == (code *)0x0) {
        DAT_086f3fd0 = (code *)FUN_033d1b68(
                                           "UnityEngine.Networking.UnityWebRequest::get_downloadedBytes()"
                                           );
      }
      lVar4 = (*DAT_086f3fd0)(lVar4);
      if (lVar4 != 0) {
        lVar4 = *(long *)(unaff_x19 + 0x40);
        *(undefined1 *)(unaff_x19 + 0x15) = 1;
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        }
      }
    }
    if (*(char *)(unaff_x19 + 0x16) == '\0') {
      if (*(long *)(unaff_x19 + 0x30) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x18);
      }
      plVar2 = (long *)FUN_0339898c(uVar1,DAT_083cd440);
      if (plVar2 != (long *)0x0) {
        lVar4 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_083cd440) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_063f9474;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cd440,0);
LAB_063f9474:
        uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar5 & 1) != 0) {
          lVar4 = *(long *)(unaff_x19 + 0x48);
          *(undefined1 *)(unaff_x19 + 0x16) = 1;
          if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x063f94bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar4 + 0x18))
                      (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(unaff_x19 + 0x30),
                       **(undefined8 **)(DAT_083d16d8 + 0xb8),*(undefined8 *)(lVar4 + 0x28));
            return;
          }
        }
      }
    }
    return;
  }
LAB_063f94cc:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


