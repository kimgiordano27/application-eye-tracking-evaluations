/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$Push
ENTRY_POINT: 0671e8c0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


int Newtonsoft_Json_JsonWriter__Push(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar10;
  long lVar11;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *plVar12;
  int iVar13;
  undefined *puVar9;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_0849fb10);
  FUN_03a8a718(PTR_DAT_08493180);
  *(undefined1 *)(unaff_x23 + 0x8ce) = 1;
  plVar12 = (long *)(unaff_x22 + 0x28);
  if (*plVar12 == 0) {
    lVar5 = FUN_03a8a804(*(undefined8 *)PTR_DAT_08486748,0x80);
    *plVar12 = lVar5;
    thunk_FUN_03afed3c(plVar12,lVar5);
  }
  puVar9 = PTR_DAT_08493180;
  iVar13 = unaff_w19;
  if (0 < unaff_w19) {
                    /* try { // try from 0671e928 to 0681e94f has its CatchHandler @ 0671ec0c */
    do {
      plVar6 = *(long **)(unaff_x22 + 0x20);
      iVar4 = iVar13;
      if (plVar6 != (long *)0x0) {
        lVar5 = *plVar6;
        bVar1 = *(byte *)(*(long *)PTR_DAT_0849fb10 + 0x130);
        if ((bVar1 <= *(byte *)(lVar5 + 0x130)) &&
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0849fb10))
        {
          uVar2 = (**(code **)(lVar5 + 0x218))(plVar6,*(undefined8 *)(lVar5 + 0x220));
                    /* try { // try from 0671e98c to 0681e9b7 has its CatchHandler @ 0671ebfc */
          iVar4 = iVar13 - (iVar13 != 1 & uVar2);
        }
      }
      plVar6 = *(long **)(unaff_x22 + 0x10);
      iVar4 = iVar4 << (ulong)(*(byte *)(unaff_x22 + 0x44) & 0x1f);
      if (0x7f < iVar4) {
        iVar4 = 0x80;
      }
      if (*(char *)(unaff_x22 + 0x45) == '\0') {
        if (plVar6 == (long *)0x0) goto LAB_0671eb08;
                    /* try { // try from 0671ea0c to 0681ea13 has its CatchHandler @ 0671ebe0 */
                    /* try { // try from 0671ea24 to 0681ea2b has its CatchHandler @ 0671ebdc */
        uVar3 = (**(code **)(*plVar6 + 0x368))
                          (plVar6,*plVar12,0,iVar4,*(undefined8 *)(*plVar6 + 0x370));
                    /* try { // try from 0671ea2c to 0681eb5b has its CatchHandler @ 0671e434 */
        uVar2 = 0;
        plVar6 = plVar12;
      }
      else {
        if (plVar6 == (long *)0x0) goto LAB_0671eb08;
        bVar1 = *(byte *)(*(long *)puVar9 + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar9))
        goto LAB_0671eb08;
        uVar2 = *(uint *)((long)plVar6 + 0x34);
                    /* try { // try from 0671e9ec to 0681e9fb has its CatchHandler @ 0671ec48 */
        uVar3 = FUN_066ff3e4(plVar6,iVar4,0);
        plVar6 = plVar6 + 5;
                    /* try { // try from 0671ea00 to 0681ea0b has its CatchHandler @ 0671ebe4 */
      }
      if (uVar3 == 0) break;
      if ((int)(uVar3 | uVar2) < 0) {
Newtonsoft_Json_JsonWriter__WriteEndConstructor:
        thunk_FUN_03af1434(PTR_DAT_08491280);
        uVar7 = thunk_FUN_03ac74bc();
        puVar9 = PTR_DAT_0849fac8;
LAB_0671eb5c:
        uVar8 = thunk_FUN_03af1434(puVar9);
        FUN_066b7618(uVar7,uVar8,0);
        uVar8 = thunk_FUN_03af1434(PTR_DAT_084a8ce8);
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar7,uVar8);
      }
      if ((ulong)uVar3 + (ulong)uVar2 >> 0x1f != 0) {
Newtonsoft_Json_JsonWriter__WriteEndArray:
        uVar7 = FUN_03a8a9d0();
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar7,*(undefined8 *)PTR_DAT_084a8ce8);
      }
      lVar5 = *plVar6;
      if (lVar5 == 0) {
LAB_0671eb08:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      iVar4 = (int)*(ulong *)(lVar5 + 0x18);
      if (iVar4 < (int)(uVar3 + uVar2)) goto Newtonsoft_Json_JsonWriter__WriteEndConstructor;
      if (unaff_w20 < 0) {
LAB_0671eb40:
        thunk_FUN_03af1434(PTR_DAT_08491280);
        uVar7 = thunk_FUN_03ac74bc();
        puVar9 = PTR_DAT_084a8cf0;
        goto LAB_0671eb5c;
      }
      if (unaff_w20 + iVar13 < 0) goto Newtonsoft_Json_JsonWriter__WriteEndArray;
      if (unaff_x21 == 0) goto LAB_0671eb08;
      iVar10 = (int)*(ulong *)(unaff_x21 + 0x18);
      if (iVar10 < unaff_w20 + iVar13) goto LAB_0671eb40;
      if ((*(ulong *)(lVar5 + 0x18) & 0xffffffff) == 0) {
        lVar5 = 0;
      }
      else {
        if (iVar4 == 0) goto LAB_0671eb88;
        lVar5 = lVar5 + 0x20;
      }
      lVar11 = 0;
      if (((*(ulong *)(unaff_x21 + 0x18) & 0xffffffff) != 0) &&
         (lVar11 = unaff_x21 + 0x20, iVar10 == 0)) {
LAB_0671eb88:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      plVar6 = *(long **)(unaff_x22 + 0x20);
      if (plVar6 == (long *)0x0) goto LAB_0671eb08;
      iVar4 = (**(code **)(*plVar6 + 0x1d8))
                        (plVar6,lVar5 + (ulong)uVar2,(ulong)uVar3,
                         lVar11 + (ulong)(uint)(unaff_w20 << 1),iVar13,0,
                         *(undefined8 *)(*plVar6 + 0x1e0));
      iVar13 = iVar13 - iVar4;
      unaff_w20 = iVar4 + unaff_w20;
    } while (0 < iVar13);
  }
  return unaff_w19 - iVar13;
}


