/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteTypeProperty
ENTRY_POINT: 05611380
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteTypeProperty
               (long param_1,undefined8 param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  short sVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  uint uStack000000000000000c;
  undefined *puVar7;
  
  if ((bRam00000000071c2d0c & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d18930);
    bRam00000000071c2d0c = 1;
  }
  uStack000000000000000c = *param_5;
  iVar10 = 10;
  if (param_3 != -1) {
    iVar10 = param_3;
  }
  uVar9 = iVar10 - 2U >> 1;
  if ((7 < (uVar9 | iVar10 << 0x1f)) || ((1 << (ulong)(uVar9 & 0x1f) & 0x99U) == 0)) {
    thunk_FUN_02f239f0(PTR_DAT_06d02080);
    uVar5 = thunk_FUN_02ef1808();
    uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d4e4a0);
    uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d47838);
    FUN_05558580(uVar5,uVar6,uVar8,0);
    goto LAB_0561166c;
  }
  if (((int)uStack000000000000000c < 0) ||
     (uVar9 = (uint)param_2, (int)uVar9 <= (int)uStack000000000000000c)) {
    thunk_FUN_02f239f0(PTR_DAT_06d0e378);
    uVar5 = thunk_FUN_02ef1808();
    uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d36e20);
    FUN_0555fe30(uVar5,uVar6,0);
    goto LAB_0561166c;
  }
  if (((param_4 & 0x3000) == 0) &&
     (FUN_056116cc(param_1,param_2,&stack0x0000000c), uStack000000000000000c == uVar9)) {
    thunk_FUN_02f239f0(PTR_DAT_06d028d8);
    uVar5 = thunk_FUN_02ef1808();
                    /* catch() { ... } // from try @ 0561159c with catch @ 056115e8
                       catch() { ... } // from try @ 056115d4 with catch @ 056115e8 */
                    /* try { // try from 056115ec to 057115ef has its CatchHandler @ 05611668 */
                    /* try { // try from 056115f0 to 0571160f has its CatchHandler @ 05611378 */
    puVar7 = PTR_DAT_06d52228;
    goto LAB_056115f4;
  }
  if (uVar9 <= uStack000000000000000c) goto LAB_05611540;
  sVar2 = *(short *)(param_1 + (long)(int)uStack000000000000000c * 2);
  if (sVar2 == 0x2b) {
                    /* try { // try from 05611458 to 0571145f has its CatchHandler @ 056115f4 */
    uStack000000000000000c = uStack000000000000000c + 1;
                    /* try { // try from 05611460 to 0571149b has its CatchHandler @ 05611378 */
LAB_0561146c:
    bVar3 = false;
    lVar11 = 1;
LAB_05611470:
    if (((param_3 == 0x10) || (param_3 == -1)) &&
       (uVar1 = uStack000000000000000c + 1, (int)uVar1 < (int)uVar9)) {
      if (uVar9 <= uStack000000000000000c) {
LAB_05611540:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
                    /* try { // try from 0561149c to 057114a7 has its CatchHandler @ 05611584 */
      if (*(short *)(param_1 + (long)(int)uStack000000000000000c * 2) == 0x30) {
        if (uVar9 <= uVar1) goto LAB_05611540;
                    /* try { // try from 056114a8 to 0571159b has its CatchHandler @ 05611378 */
        if ((*(ushort *)(param_1 + (long)(int)uVar1 * 2) | 0x20) == 0x78) {
          uStack000000000000000c = uStack000000000000000c + 2;
          iVar10 = 0x10;
        }
      }
    }
    uVar1 = uStack000000000000000c;
    lVar4 = FUN_05611798(iVar10,param_1,param_2,&stack0x0000000c,param_4 >> 9 & 1);
    if (uStack000000000000000c == uVar1) {
      thunk_FUN_02f239f0(PTR_DAT_06d028d8);
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 0561149c with catch @ 05611584
                        */
      uVar5 = thunk_FUN_02ef1808();
      puVar7 = PTR_DAT_06d52220;
    }
    else {
      if (((param_4 >> 0xc & 1) == 0) || ((int)uVar9 <= (int)uStack000000000000000c)) {
        *param_5 = uStack000000000000000c;
        if (((param_4 >> 9 & 1) != 0) || ((iVar10 != 10 || (bVar3 || lVar4 != -0x8000000000000000)))
           ) {
          if (iVar10 != 10) {
            lVar11 = 1;
          }
          return lVar4 * lVar11;
        }
        thunk_FUN_02f239f0(PTR_DAT_06d36e08);
        uVar5 = thunk_FUN_02ef1808();
        puVar7 = PTR_DAT_06d4e458;
                    /* try { // try from 056115d4 to 057115e3 has its CatchHandler @ 056115e8 */
        goto LAB_0561165c;
      }
                    /* try { // try from 0561159c to 057115b3 has its CatchHandler @ 056115e8 */
      thunk_FUN_02f239f0(PTR_DAT_06d028d8);
      uVar5 = thunk_FUN_02ef1808();
      puVar7 = PTR_DAT_06d51e48;
                    /* try { // try from 056115b4 to 057115d3 has its CatchHandler @ 05611378 */
    }
LAB_056115f4:
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05611458 with catch @ 056115f4
                        */
    uVar6 = thunk_FUN_02f239f0(puVar7);
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05611444 with catch @ 056115f8
                        */
    FUN_055ea92c(uVar5,uVar6,0);
  }
  else {
    if (sVar2 != 0x2d) goto LAB_0561146c;
    if (iVar10 != 10) {
      thunk_FUN_02f239f0(PTR_DAT_06d02080);
      uVar5 = thunk_FUN_02ef1808();
      uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d52230);
      FUN_0555e840(uVar5,uVar6,0);
      goto LAB_0561166c;
    }
    if ((param_4 >> 9 & 1) == 0) {
                    /* try { // try from 05611444 to 05711457 has its CatchHandler @ 056115f8 */
      uStack000000000000000c = uStack000000000000000c + 1;
      lVar11 = -1;
      bVar3 = true;
      goto LAB_05611470;
    }
    thunk_FUN_02f239f0(PTR_DAT_06d36e08);
    uVar5 = thunk_FUN_02ef1808();
    puVar7 = PTR_DAT_06d52238;
LAB_0561165c:
    uVar6 = thunk_FUN_02f239f0(puVar7);
    FUN_05610eb0(uVar5,uVar6);
  }
LAB_0561166c:
  uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d52240);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar5,uVar6);
}


