/*
FUNCTION_NAME: ICSharpCode.SharpZipLib.Zip.Compression.Deflater$$Flush
ENTRY_POINT: 063f921c
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void ICSharpCode_SharpZipLib_Zip_Compression_Deflater__Flush(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  float fVar7;
  
  FUN_0335b6c8(&DAT_083cd440,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d16d8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d2b78,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0xd12) = 1;
  if (*(char *)((long)unaff_x19 + 0x14) == '\0') {
    if (*(int *)(DAT_083d2b78 + 0xe0) == 0) {
      FUN_033b9870();
    }
    piVar5 = *(int **)(DAT_083d2b78 + 0xb8);
    if (0 < *piVar5) {
      if (*(int *)(DAT_083d2b78 + 0xe0) == 0) {
        FUN_033b9870();
        piVar5 = *(int **)(DAT_083d2b78 + 0xb8);
      }
      if (*piVar5 <= piVar5[1]) {
        return;
      }
    }
    if (*(int *)(DAT_083d2b78 + 0xe0) == 0) {
      FUN_033b9870();
    }
    *(int *)(*(long *)(DAT_083d2b78 + 0xb8) + 4) = *(int *)(*(long *)(DAT_083d2b78 + 0xb8) + 4) + 1;
                    /* WARNING: Could not recover jumptable at 0x063f93b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x1a8))();
    return;
  }
  if (unaff_x19[6] != 0) {
    fVar7 = (float)FUN_07cb4e50(unaff_x19[6],0);
    if ((*(float *)(unaff_x19 + 5) != fVar7) &&
       (((uint)ABS(fVar7) < 0x7f800001 || ((uint)ABS(*(float *)(unaff_x19 + 5)) < 0x7f800001)))) {
      *(float *)(unaff_x19 + 5) = fVar7;
    }
    if (unaff_x19[6] == 0) {
LAB_063f94cc:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    fVar7 = (float)FUN_07cb4f78(unaff_x19[6],0);
    if ((*(float *)((long)unaff_x19 + 0x2c) != fVar7) &&
       (((uint)ABS(fVar7) < 0x7f800001 ||
        ((uint)ABS(*(float *)((long)unaff_x19 + 0x2c)) < 0x7f800001)))) {
      lVar4 = unaff_x19[7];
      *(float *)((long)unaff_x19 + 0x2c) = fVar7;
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      }
    }
    if (*(char *)((long)unaff_x19 + 0x15) == '\0') {
      lVar4 = unaff_x19[6];
      if (lVar4 == 0) goto LAB_063f94cc;
      if (DAT_086f3fd0 == (code *)0x0) {
        DAT_086f3fd0 = (code *)FUN_033d1b68(
                                           "UnityEngine.Networking.UnityWebRequest::get_downloadedBytes()"
                                           );
      }
      lVar4 = (*DAT_086f3fd0)(lVar4);
      if (lVar4 != 0) {
        lVar4 = unaff_x19[8];
        *(undefined1 *)((long)unaff_x19 + 0x15) = 1;
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        }
      }
    }
    if (*(char *)((long)unaff_x19 + 0x16) == '\0') {
      if (unaff_x19[6] == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(unaff_x19[6] + 0x18);
      }
      plVar2 = (long *)FUN_0339898c(uVar1,DAT_083cd440);
      if (plVar2 != (long *)0x0) {
        lVar4 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_083cd440) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_063f9474;
            }
            uVar6 = uVar6 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cd440,0);
LAB_063f9474:
        uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar6 & 1) != 0) {
          lVar4 = unaff_x19[9];
          *(undefined1 *)((long)unaff_x19 + 0x16) = 1;
          if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x063f94bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar4 + 0x18))
                      (*(undefined8 *)(lVar4 + 0x40),unaff_x19[6],
                       **(undefined8 **)(DAT_083d16d8 + 0xb8),*(undefined8 *)(lVar4 + 0x28));
            return;
          }
        }
      }
    }
  }
  return;
}


