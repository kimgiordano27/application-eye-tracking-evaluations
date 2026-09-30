/*
FUNCTION_NAME: Unity.Mathematics.math$$mul
ENTRY_POINT: 02131260
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Unity_Mathematics_math__mul(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  uint in_w9;
  float *pfVar4;
  long lVar5;
  byte bVar6;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar7;
  float fVar8;
  
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00000D6D_PostfixBurstDelegate_var
  ;
  if (*(uint *)(param_1 + 0x18) <= in_w9) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  plVar7 = *(long **)(param_1 + (long)(int)in_w9 * 8 + 0x20);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar2 = FUN_02145444(plVar7,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)puVar1;
    pfVar4 = *(float **)(lVar3 + 0xb8);
    fVar8 = *pfVar4;
  }
  else {
    bVar6 = *(byte *)(*(long *)puVar1 + 300);
    if ((*(byte *)(*plVar7 + 300) < bVar6) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar6 * 8 + -8) != *(long *)puVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar7);
    }
    fVar8 = (float)FUN_021f7648(plVar7,0);
    lVar3 = *(long *)puVar1;
    pfVar4 = *(float **)(lVar3 + 0xb8);
  }
  lVar5 = -4;
  if (*(ushort *)(unaff_x20 + 4) != 0xffff) {
    lVar5 = (ulong)*(ushort *)(unaff_x20 + 4) << 2;
  }
  if (*(float *)(lVar5 + *(long *)(unaff_x22 + 0x78)) <= fVar8 * pfVar4[1]) {
    *(undefined8 *)(unaff_x21 + 0x10) = 0;
  }
  lVar5 = *(long *)(unaff_x22 + 0x60) + (long)unaff_w19 * 0x30;
  bVar6 = *(byte *)(lVar5 + 1);
  if ((*(float *)(unaff_x20 + 0x1c) < fVar8) || ((bVar6 >> 6 & 1) != 0)) {
    if ((bVar6 >> 6 & 1) == 0) {
      return;
    }
    if (fVar8 * *(float *)(*(long *)(lVar3 + 0xb8) + 4) < *(float *)(unaff_x20 + 0x1c)) {
      return;
    }
    bVar6 = bVar6 & 0xbf;
    *(undefined4 *)(lVar5 + 0x2c) =
         **(undefined4 **)(*(long *)Method_System_IO_FileStream_BeginRead__ + 0xb8);
  }
  else {
    bVar6 = bVar6 | 0x40;
    *(undefined4 *)(lVar5 + 0x28) =
         **(undefined4 **)(*(long *)Method_System_IO_FileStream_BeginRead__ + 0xb8);
  }
  *(byte *)(lVar5 + 1) = bVar6;
  return;
}


