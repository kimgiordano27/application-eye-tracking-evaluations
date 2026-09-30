/*
FUNCTION_NAME: Unity.Mathematics.math$$mul
ENTRY_POINT: 02131240
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Unity_Mathematics_math__mul(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  float *pfVar5;
  long lVar6;
  byte bVar7;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *plVar8;
  float fVar9;
  
  *(undefined1 *)(unaff_x23 + 0x146) = 1;
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00000D6D_PostfixBurstDelegate_var
  ;
  lVar3 = *(long *)(unaff_x22 + 0x18);
  uVar4 = (uint)*(ushort *)(unaff_x20 + 4);
  if (uVar4 == 0xffff) {
    uVar4 = 0xffffffff;
  }
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar8 = *(long **)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
    if (plVar8 != (long *)0x0) {
      uVar2 = FUN_02145444(plVar8,0);
      if ((uVar2 & 1) == 0) {
        lVar3 = *(long *)puVar1;
        pfVar5 = *(float **)(lVar3 + 0xb8);
        fVar9 = *pfVar5;
      }
      else {
        bVar7 = *(byte *)(*(long *)puVar1 + 300);
        if ((*(byte *)(*plVar8 + 300) < bVar7) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)puVar1)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar8);
        }
        fVar9 = (float)FUN_021f7648(plVar8,0);
        lVar3 = *(long *)puVar1;
        pfVar5 = *(float **)(lVar3 + 0xb8);
      }
      lVar6 = -4;
      if (*(ushort *)(unaff_x20 + 4) != 0xffff) {
        lVar6 = (ulong)*(ushort *)(unaff_x20 + 4) << 2;
      }
      if (*(float *)(lVar6 + *(long *)(unaff_x22 + 0x78)) <= fVar9 * pfVar5[1]) {
        *(undefined8 *)(unaff_x21 + 0x10) = 0;
      }
      lVar6 = *(long *)(unaff_x22 + 0x60) + (long)unaff_w19 * 0x30;
      bVar7 = *(byte *)(lVar6 + 1);
      if ((*(float *)(unaff_x20 + 0x1c) < fVar9) || ((bVar7 >> 6 & 1) != 0)) {
        if ((bVar7 >> 6 & 1) == 0) {
          return;
        }
        if (fVar9 * *(float *)(*(long *)(lVar3 + 0xb8) + 4) < *(float *)(unaff_x20 + 0x1c)) {
          return;
        }
        bVar7 = bVar7 & 0xbf;
        *(undefined4 *)(lVar6 + 0x2c) =
             **(undefined4 **)(*(long *)Method_System_IO_FileStream_BeginRead__ + 0xb8);
      }
      else {
        bVar7 = bVar7 | 0x40;
        *(undefined4 *)(lVar6 + 0x28) =
             **(undefined4 **)(*(long *)Method_System_IO_FileStream_BeginRead__ + 0xb8);
      }
      *(byte *)(lVar6 + 1) = bVar7;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


