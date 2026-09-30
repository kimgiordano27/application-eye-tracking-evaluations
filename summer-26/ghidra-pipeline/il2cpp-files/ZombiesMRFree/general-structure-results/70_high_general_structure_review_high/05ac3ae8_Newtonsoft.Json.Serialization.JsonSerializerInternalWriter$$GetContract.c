/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetContract
ENTRY_POINT: 05ac3ae8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContract(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint unaff_w19;
  long unaff_x20;
  
  iVar4 = FUN_05b07bb4();
  if ((int)(iVar4 - unaff_w19) < *(int *)(unaff_x20 + 0x18)) {
    thunk_FUN_03037804(PTR_DAT_06f6d8e8);
    uVar6 = thunk_FUN_0301080c();
    uVar7 = thunk_FUN_03037804(PTR_DAT_06f98f50);
    FUN_05a64d00(uVar6,uVar7,0);
    uVar7 = thunk_FUN_03037804(PTR_DAT_06fac8c0);
                    /* WARNING: Subroutine does not return */
    FUN_02fe93c0(uVar6,uVar7);
  }
  lVar5 = thunk_FUN_03010710();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe9884();
  }
                    /* try { // try from 05ac3b18 to 05bc3bbb has its CatchHandler @ 05ac3df0 */
  iVar4 = *(int *)(unaff_x20 + 0x18);
  if (0 < iVar4) {
    lVar8 = *(long *)(unaff_x20 + 0x10);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar2 = *(uint *)(lVar8 + 0x18);
    uVar10 = 0;
    lVar11 = (ulong)unaff_w19 << 0x20;
    do {
      uVar3 = (uint)(uVar10 >> 5) & 0x7ffffff;
      if ((uVar2 <= uVar3) || ((ulong)*(uint *)(lVar5 + 0x18) <= unaff_w19 + uVar10)) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar1 = lVar11 >> 0x20;
      lVar11 = lVar11 + 0x100000000;
      uVar9 = (uint)uVar10;
      uVar10 = uVar10 + 1;
      *(byte *)(lVar5 + lVar1 + 0x20) =
           (byte)(*(uint *)(lVar8 + (ulong)uVar3 * 4 + 0x20) >> (ulong)(uVar9 & 0x1f)) & 1;
    } while ((long)uVar10 < (long)iVar4);
  }
  return;
}


