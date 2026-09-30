/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.QueryFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 05ede5ac
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


int Newtonsoft_Json_Linq_JsonPath_QueryFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int in_w8;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  long *plVar13;
  
  if (in_w8 < unaff_w22) {
                    /* try { // try from 05ede5b4 to 05fde5c3 has its CatchHandler @ 05ede5c4 */
                    /* catch() { ... } // from try @ 05ede534 with catch @ 05ede5c4
                       catch() { ... } // from try @ 05ede5b4 with catch @ 05ede5c4 */
    uVar6 = FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4d38,unaff_w22);
                    /* try { // try from 05ede5c8 to 05fde5cb has its CatchHandler @ 05ede5d4 */
                    /* try { // try from 05ede5cc to 05fde5d7 has its CatchHandler @ 05edd934 */
    *unaff_x24 = uVar6;
                    /* catch() { ... } // from try @ 05ede50c with catch @ 05ede5d4
                       catch() { ... } // from try @ 05ede5c8 with catch @ 05ede5d4 */
    thunk_FUN_036b7ad0();
    unaff_x23 = *unaff_x24;
  }
  plVar13 = *(long **)(unaff_x20 + 0x10);
  if (plVar13 != (long *)0x0) {
    lVar8 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07a18b68) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_05ede63c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0367cd30(plVar13,*(long *)PTR_DAT_07a18b68,1);
LAB_05ede63c:
    iVar5 = (*(code *)*puVar7)(plVar13,unaff_x23,0,unaff_w22,puVar7[1]);
    if (unaff_w21 < 0) {
      unaff_w21 = unaff_w21 + 1;
    }
    if (0 < iVar5) {
      lVar8 = *(long *)(unaff_x20 + 0x18);
      if (lVar8 == 0) goto LAB_05ede6f4;
      uVar9 = unaff_w21 >> 1;
      uVar3 = *(uint *)(lVar8 + 0x18);
      uVar12 = 0;
      do {
        if ((uVar3 <= uVar12) || (uVar2 = uVar12 + 1, uVar3 <= uVar2)) {
LAB_05ede6f0:
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        if (unaff_x19 == 0) goto LAB_05ede6f4;
        if (*(uint *)(unaff_x19 + 0x18) <= uVar9) goto LAB_05ede6f0;
        lVar4 = (long)(int)uVar12;
        lVar1 = (long)(int)uVar9;
        uVar12 = uVar12 + 2;
        uVar9 = uVar9 + 1;
        *(float *)(unaff_x19 + lVar1 * 4 + 0x20) =
             *(float *)(lVar8 + 0x20 + lVar4 * 4) * *(float *)(unaff_x20 + 0x20) +
             *(float *)(lVar8 + 0x20 + (long)(int)uVar2 * 4) * *(float *)(unaff_x20 + 0x24);
      } while ((int)uVar12 < iVar5);
    }
    if (iVar5 < 0) {
      iVar5 = iVar5 + 1;
    }
    return iVar5 >> 1;
  }
LAB_05ede6f4:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


