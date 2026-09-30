/*
FUNCTION_NAME: SojaExiles.opencloseWindow1.<opening>d__5$$System.IDisposable.Dispose
ENTRY_POINT: 034f4c60
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


undefined8
SojaExiles_opencloseWindow1_<opening>d__5__System_IDisposable_Dispose
          (long param_1,float param_2,float param_3,float param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x23;
  long unaff_x24;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar10;
  
                    /* try { // try from 034f4c60 to 035f4c63 has its CatchHandler @ 034f4ca0 */
  fVar10 = *(float *)(param_1 + 0x8ec);
  param_4 = unaff_s10 - param_4;
  fVar7 = param_4 * param_4;
  if (fVar7 + (unaff_s8 - param_2) * (unaff_s8 - param_2) +
              (unaff_s9 - param_3) * (unaff_s9 - param_3) < fVar10) {
    *unaff_x19 = DAT_084529d0;
    if (*(int *)(unaff_x24 + 0xcd0) == 0) {
      return 0;
    }
    puVar1 = (ulong *)(unaff_x23 + ((ulong)unaff_x19 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)unaff_x19 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    return 0;
  }
  if ((*(long *)(unaff_x20 + 0x88) != 0) &&
     (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x88) + 0x10), lVar4 != 0)) {
    fVar5 = (float)FUN_07a18d2c(lVar4,0);
    if ((*(long *)(unaff_x20 + 0x90) != 0) &&
       (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x90) + 0x10), lVar4 != 0)) {
      fVar8 = fVar7;
      fVar9 = param_4;
      fVar6 = (float)FUN_07a18d2c(lVar4,0);
      if (fVar10 <= (param_4 - fVar9) * (param_4 - fVar9) +
                    (fVar5 - fVar6) * (fVar5 - fVar6) + (fVar7 - fVar8) * (fVar7 - fVar8)) {
        return 1;
      }
      *unaff_x19 = DAT_08457f40;
      if (*(int *)(unaff_x24 + 0xcd0) == 0) {
        return 0;
      }
      puVar1 = (ulong *)(unaff_x23 + ((ulong)unaff_x19 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)unaff_x19 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


