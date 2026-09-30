/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$set_Culture
ENTRY_POINT: 0671e88c
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


int Newtonsoft_Json_JsonWriter__set_Culture(long param_1,long param_2,int param_3,int param_4)

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
  long *plVar12;
  int iVar13;
  undefined *puVar9;
  
                    /* try { // try from 0671e890 to 0681e897 has its CatchHandler @ 0671ebc4 */
  if ((DAT_0897b8ce & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084a8ce8);
    FUN_03a8a718(PTR_DAT_08486748);
    FUN_03a8a718(PTR_DAT_0849fb10);
    FUN_03a8a718(PTR_DAT_08493180);
    DAT_0897b8ce = 1;
  }
  plVar12 = (long *)(param_1 + 0x28);
  if (*plVar12 == 0) {
    lVar5 = FUN_03a8a804(*(undefined8 *)PTR_DAT_08486748,0x80);
    *plVar12 = lVar5;
    thunk_FUN_03afed3c(plVar12,lVar5);
  }
  puVar9 = PTR_DAT_08493180;
  iVar13 = param_4;
  if (0 < param_4) {
    do {
      plVar6 = *(long **)(param_1 + 0x20);
      iVar4 = iVar13;
      if (plVar6 != (long *)0x0) {
        lVar5 = *plVar6;
        bVar1 = *(byte *)(*(long *)PTR_DAT_0849fb10 + 0x130);
        if ((bVar1 <= *(byte *)(lVar5 + 0x130)) &&
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0849fb10))
        {
          uVar2 = (**(code **)(lVar5 + 0x218))(plVar6,*(undefined8 *)(lVar5 + 0x220));
          iVar4 = iVar13 - (iVar13 != 1 & uVar2);
        }
      }
      plVar6 = *(long **)(param_1 + 0x10);
      iVar4 = iVar4 << (ulong)(*(byte *)(param_1 + 0x44) & 0x1f);
      if (0x7f < iVar4) {
        iVar4 = 0x80;
      }
      if (*(char *)(param_1 + 0x45) == '\0') {
        if (plVar6 == (long *)0x0) goto LAB_0671eb08;
        uVar3 = (**(code **)(*plVar6 + 0x368))
                          (plVar6,*plVar12,0,iVar4,*(undefined8 *)(*plVar6 + 0x370));
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
        uVar3 = FUN_066ff3e4(plVar6,iVar4,0);
        plVar6 = plVar6 + 5;
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
      if (param_3 < 0) {
LAB_0671eb40:
        thunk_FUN_03af1434(PTR_DAT_08491280);
        uVar7 = thunk_FUN_03ac74bc();
        puVar9 = PTR_DAT_084a8cf0;
        goto LAB_0671eb5c;
      }
      if (param_3 + iVar13 < 0) goto Newtonsoft_Json_JsonWriter__WriteEndArray;
      if (param_2 == 0) goto LAB_0671eb08;
      iVar10 = (int)*(ulong *)(param_2 + 0x18);
      if (iVar10 < param_3 + iVar13) goto LAB_0671eb40;
      if ((*(ulong *)(lVar5 + 0x18) & 0xffffffff) == 0) {
        lVar5 = 0;
      }
      else {
        if (iVar4 == 0) goto LAB_0671eb88;
        lVar5 = lVar5 + 0x20;
      }
      lVar11 = 0;
      if (((*(ulong *)(param_2 + 0x18) & 0xffffffff) != 0) && (lVar11 = param_2 + 0x20, iVar10 == 0)
         ) {
LAB_0671eb88:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      plVar6 = *(long **)(param_1 + 0x20);
      if (plVar6 == (long *)0x0) goto LAB_0671eb08;
      iVar4 = (**(code **)(*plVar6 + 0x1d8))
                        (plVar6,lVar5 + (ulong)uVar2,(ulong)uVar3,
                         lVar11 + (ulong)(uint)(param_3 << 1),iVar13,0,
                         *(undefined8 *)(*plVar6 + 0x1e0));
      iVar13 = iVar13 - iVar4;
      param_3 = iVar4 + param_3;
    } while (0 < iVar13);
  }
  return param_4 - iVar13;
}


