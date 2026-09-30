/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$IsSpecified
ENTRY_POINT: 0686566c
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__IsSpecified(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  bool bVar6;
  long *unaff_x19;
  long unaff_x20;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
                    /* try { // try from 0686566c to 0696567b has its CatchHandler @ 06865930 */
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
                    /* try { // try from 06865684 to 06965693 has its CatchHandler @ 06865924 */
  FUN_0335b6c8(&DAT_083d16e0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_084303c8,1);
  DataMemoryBarrier(2,3);
                    /* try { // try from 068656a0 to 069656a7 has its CatchHandler @ 0686592c */
  FUN_0335b6c8(&DAT_08431160,1);
                    /* try { // try from 068656b0 to 069656b3 has its CatchHandler @ 06865650 */
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0xe84) = 1;
  if (*(int *)(DAT_083cb2f0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar2 = FUN_06865848();
  lVar3 = FUN_06864e0c();
  if ((lVar3 != 0) && (lVar7 = *(long *)(lVar3 + 0x10), lVar7 != 0)) {
    lVar3 = *(long *)(lVar3 + 0x18);
    iVar1 = *(int *)(lVar7 + 0x18);
    plVar4 = (long *)FUN_03398a84(DAT_083d16e0);
    FUN_0667dab4(plVar4,0);
    uVar8 = iVar1 - 1;
    uVar9 = uVar2;
    if (-1 < (int)uVar8) {
      bVar6 = true;
      do {
        if (uVar8 == 0) {
                    /* try { // try from 06865730 to 0696573f has its CatchHandler @ 0686591c */
          if (*(uint *)(lVar7 + 0x18) == 0) goto LAB_06865840;
          if (*(long *)(lVar7 + 0x20) == 0) break;
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_06865840;
                    /* try { // try from 06865748 to 06965757 has its CatchHandler @ 06865910 */
        uVar10 = *(ulong *)(lVar7 + (ulong)uVar8 * 8 + 0x20);
        if ((uVar10 & (uVar9 ^ 0xffffffffffffffff)) == 0) {
          if (!bVar6) {
            if (plVar4 == (long *)0x0) goto LAB_06865844;
                    /* try { // try from 06865764 to 0696576b has its CatchHandler @ 06865918 */
            FUN_06680150(plVar4,0,DAT_084303c8,0);
          }
                    /* try { // try from 06865774 to 06965777 has its CatchHandler @ 06865650 */
          if (lVar3 == 0) goto LAB_06865844;
                    /* try { // try from 06865778 to 0696581f has its CatchHandler @ 068652c0 */
          if (*(uint *)(lVar3 + 0x18) <= uVar8) goto LAB_06865840;
          if (plVar4 == (long *)0x0) goto LAB_06865844;
          uVar9 = uVar9 - uVar10;
          FUN_06680150(plVar4,0,*(undefined8 *)(lVar3 + (ulong)uVar8 * 8 + 0x20),0);
          bVar6 = false;
        }
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    if (uVar9 == 0) {
      if (uVar2 == 0) {
        uVar5 = DAT_08431160;
        if (*(long *)(lVar7 + 0x18) != 0) {
          if ((int)*(long *)(lVar7 + 0x18) == 0) {
LAB_06865840:
                    /* WARNING: Subroutine does not return */
            FUN_033d1d44();
          }
          if (*(long *)(lVar7 + 0x20) == 0) {
            if (lVar3 == 0) goto LAB_06865844;
            if (*(int *)(lVar3 + 0x18) == 0) goto LAB_06865840;
                    /* try { // try from 06865820 to 0696583b has its CatchHandler @ 0686590c */
            uVar5 = *(undefined8 *)(lVar3 + 0x20);
          }
        }
        return uVar5;
      }
      if (plVar4 != (long *)0x0) {
        lVar3 = *plVar4;
        goto LAB_068657d4;
      }
    }
    else if (unaff_x19 != (long *)0x0) {
      lVar3 = *unaff_x19;
LAB_068657d4:
                    /* WARNING: Could not recover jumptable at 0x068657f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(lVar3 + 0x168))();
      return uVar5;
    }
  }
LAB_06865844:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


