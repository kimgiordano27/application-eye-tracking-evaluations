/*
FUNCTION_NAME: FUN_021311fc
ENTRY_POINT: 021311fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_3;telemetry_or_network_hits_2
*/


void FUN_021311fc(long param_1,long param_2,int param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  float *pfVar5;
  long lVar6;
  byte bVar7;
  long *plVar8;
  float fVar9;
  
  if ((DAT_03781146 & 1) == 0) {
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00000D6D_PostfixBurstDelegate_var
                      );
    thunk_FUN_00d48444(Method_System_IO_FileStream_BeginRead__);
    DAT_03781146 = 1;
  }
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00000D6D_PostfixBurstDelegate_var
  ;
  lVar3 = *(long *)(param_1 + 0x18);
  uVar4 = (uint)*(ushort *)(param_2 + 4);
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
      if (*(ushort *)(param_2 + 4) != 0xffff) {
        lVar6 = (ulong)*(ushort *)(param_2 + 4) << 2;
      }
      if (*(float *)(lVar6 + *(long *)(param_1 + 0x78)) <= fVar9 * pfVar5[1]) {
        *(undefined8 *)(param_4 + 0x10) = 0;
      }
      lVar6 = *(long *)(param_1 + 0x60) + (long)param_3 * 0x30;
      bVar7 = *(byte *)(lVar6 + 1);
      if ((*(float *)(param_2 + 0x1c) < fVar9) || ((bVar7 >> 6 & 1) != 0)) {
        if ((bVar7 >> 6 & 1) == 0) {
          return;
        }
        if (fVar9 * *(float *)(*(long *)(lVar3 + 0xb8) + 4) < *(float *)(param_2 + 0x1c)) {
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


