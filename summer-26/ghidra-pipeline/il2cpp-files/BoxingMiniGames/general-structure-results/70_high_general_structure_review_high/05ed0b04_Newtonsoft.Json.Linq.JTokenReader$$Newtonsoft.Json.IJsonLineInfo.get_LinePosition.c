/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JTokenReader$$Newtonsoft.Json.IJsonLineInfo.get_LinePosition
ENTRY_POINT: 05ed0b04
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_Linq_JTokenReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *in_x9;
  long lVar11;
  long unaff_x19;
  long *plVar12;
  long unaff_x21;
  long unaff_x22;
  
  lVar5 = SUB168(SEXT816(unaff_x22) * SEXT816((long)(param_1 & 0xffffffffffff | 0xa3d7000000000000))
                 ,8) + unaff_x22;
                    /* try { // try from 05ed0b20 to 05fd0b2b has its CatchHandler @ 05ed0b68 */
  FUN_0459e84c(param_2,(int)((ulong)lVar5 >> 8) - (int)(lVar5 >> 0x3f),*in_x9);
  plVar12 = (long *)(unaff_x19 + 0x60);
  *plVar12 = unaff_x21;
  thunk_FUN_036b7ad0(plVar12);
  puVar3 = PTR_DAT_07a19908;
  puVar2 = PTR_DAT_07a198f8;
                    /* try { // try from 05ed0b38 to 05fd0b57 has its CatchHandler @ 05ed0b6c */
  while( true ) {
    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
    FUN_05e5ae34(lVar5,0);
                    /* try { // try from 05ed0b5c to 05fd0b5f has its CatchHandler @ 05ed0b80 */
    plVar6 = *(long **)(unaff_x19 + 0x30);
                    /* try { // try from 05ed0b60 to 05fd0b63 has its CatchHandler @ 05ed0b78 */
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
                    /* try { // try from 05ed0b64 to 05fd0b67 has its CatchHandler @ 05ed0b7c */
                    /* catch() { ... } // from try @ 05ed0b20 with catch @ 05ed0b68 */
                    /* catch() { ... } // from try @ 05ed0b38 with catch @ 05ed0b6c */
    uVar7 = (**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200));
                    /* catch() { ... } // from try @ 05ed0a70 with catch @ 05ed0b70 */
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
                    /* catch() { ... } // from try @ 05ed0a80 with catch @ 05ed0b74 */
    uVar9 = *(undefined8 *)(unaff_x19 + 0x70);
                    /* catch() { ... } // from try @ 05ed0b60 with catch @ 05ed0b78 */
    *(undefined8 *)(lVar5 + 0x10) = uVar7;
    *(undefined8 *)(lVar5 + 0x18) = uVar9;
                    /* catch() { ... } // from try @ 05ed0a5c with catch @ 05ed0b7c
                       catch() { ... } // from try @ 05ed0b64 with catch @ 05ed0b7c */
                    /* catch() { ... } // from try @ 05ed0ac8 with catch @ 05ed0b80
                       catch() { ... } // from try @ 05ed0b5c with catch @ 05ed0b80 */
    lVar8 = FUN_05ed0d88();
    if (lVar8 == 0) {
      return;
    }
    FUN_05ed0e80();
                    /* try { // try from 05ed0b9c to 05fd0bab has its CatchHandler @ 05ed0dcc */
    lVar10 = *(long *)(unaff_x19 + 0x70);
    iVar4 = *(int *)(lVar8 + 0x34);
    plVar6 = *(long **)(unaff_x19 + 0x30);
    *(int *)(lVar5 + 0x20) = iVar4;
                    /* try { // try from 05ed0bb0 to 05fd0bbb has its CatchHandler @ 05ed0dc4 */
    *(long *)(unaff_x19 + 0x70) = lVar10 + iVar4;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    iVar4 = (**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200));
    lVar8 = *plVar12;
    *(int *)(lVar5 + 0x24) = iVar4 - *(int *)(lVar5 + 0x10);
    if (lVar8 == 0) break;
    lVar10 = *(long *)(lVar8 + 0x10);
    lVar11 = *(long *)puVar2;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar10 == 0) break;
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
      plVar6 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
      *plVar6 = lVar5;
      thunk_FUN_036b7ad0(plVar6,lVar5);
    }
    else {
      FUN_0459f03c(lVar8,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


