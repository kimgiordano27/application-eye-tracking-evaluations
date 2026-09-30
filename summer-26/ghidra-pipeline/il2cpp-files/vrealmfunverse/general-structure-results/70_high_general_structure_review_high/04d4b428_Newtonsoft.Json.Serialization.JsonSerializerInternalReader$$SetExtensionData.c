/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetExtensionData
ENTRY_POINT: 04d4b428
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetExtensionData(void)

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
  long *unaff_x23;
  int iVar12;
  undefined *puVar9;
  
  lVar5 = FUN_02b3c908();
  *unaff_x23 = lVar5;
  thunk_FUN_02bb0e9c();
  puVar9 = PTR_DAT_063200b0;
  iVar12 = unaff_w19;
  if (0 < unaff_w19) {
    do {
      plVar6 = *(long **)(unaff_x22 + 0x20);
      iVar4 = iVar12;
      if (plVar6 != (long *)0x0) {
        lVar5 = *plVar6;
        bVar1 = *(byte *)(*(long *)PTR_DAT_0632a148 + 0x130);
        if ((bVar1 <= *(byte *)(lVar5 + 0x130)) &&
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0632a148))
        {
          uVar2 = (**(code **)(lVar5 + 0x218))(plVar6,*(undefined8 *)(lVar5 + 0x220));
          iVar4 = iVar12 - (iVar12 != 1 & uVar2);
        }
      }
      plVar6 = *(long **)(unaff_x22 + 0x10);
      iVar4 = iVar4 << (ulong)(*(byte *)(unaff_x22 + 0x44) & 0x1f);
      if (0x7f < iVar4) {
        iVar4 = 0x80;
      }
      if (*(char *)(unaff_x22 + 0x45) == '\0') {
        if (plVar6 == (long *)0x0) goto LAB_04d4b630;
        uVar3 = (**(code **)(*plVar6 + 0x338))
                          (plVar6,*unaff_x23,0,iVar4,*(undefined8 *)(*plVar6 + 0x340));
        uVar2 = 0;
        plVar6 = unaff_x23;
      }
      else {
        if (plVar6 == (long *)0x0) goto LAB_04d4b630;
        bVar1 = *(byte *)(*(long *)puVar9 + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar9))
        goto LAB_04d4b630;
        uVar2 = *(uint *)((long)plVar6 + 0x34);
        uVar3 = FUN_04d34ec0(plVar6,iVar4,0);
        plVar6 = plVar6 + 5;
      }
      if (uVar3 == 0) break;
      if ((int)(uVar3 | uVar2) < 0) {
LAB_04d4b648:
        thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
        uVar7 = thunk_FUN_02b79644();
        puVar9 = PTR_DAT_0632a090;
LAB_04d4b684:
        uVar8 = thunk_FUN_02ba3594(puVar9);
        FUN_04cf60a0(uVar7,uVar8,0);
        uVar8 = thunk_FUN_02ba3594(PTR_DAT_06332798);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar7,uVar8);
      }
      if ((ulong)uVar3 + (ulong)uVar2 >> 0x1f != 0) {
LAB_04d4b634:
        uVar7 = FUN_02b3cad4();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar7,*(undefined8 *)PTR_DAT_06332798);
      }
      lVar5 = *plVar6;
      if (lVar5 == 0) {
LAB_04d4b630:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      iVar4 = (int)*(ulong *)(lVar5 + 0x18);
      if (iVar4 < (int)(uVar3 + uVar2)) goto LAB_04d4b648;
      if (unaff_w20 < 0) {
LAB_04d4b668:
        thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
        uVar7 = thunk_FUN_02b79644();
        puVar9 = PTR_DAT_063327a0;
        goto LAB_04d4b684;
      }
      if (unaff_w20 + iVar12 < 0) goto LAB_04d4b634;
      if (unaff_x21 == 0) goto LAB_04d4b630;
      iVar10 = (int)*(ulong *)(unaff_x21 + 0x18);
      if (iVar10 < unaff_w20 + iVar12) goto LAB_04d4b668;
      if ((*(ulong *)(lVar5 + 0x18) & 0xffffffff) == 0) {
        lVar5 = 0;
      }
      else {
        if (iVar4 == 0) goto LAB_04d4b6b0;
        lVar5 = lVar5 + 0x20;
      }
      lVar11 = 0;
      if (((*(ulong *)(unaff_x21 + 0x18) & 0xffffffff) != 0) &&
         (lVar11 = unaff_x21 + 0x20, iVar10 == 0)) {
LAB_04d4b6b0:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      plVar6 = *(long **)(unaff_x22 + 0x20);
      if (plVar6 == (long *)0x0) goto LAB_04d4b630;
      iVar4 = (**(code **)(*plVar6 + 0x1d8))
                        (plVar6,lVar5 + (ulong)uVar2,(ulong)uVar3,
                         lVar11 + (ulong)(uint)(unaff_w20 << 1),iVar12,0,
                         *(undefined8 *)(*plVar6 + 0x1e0));
      iVar12 = iVar12 - iVar4;
      unaff_w20 = iVar4 + unaff_w20;
    } while (0 < iVar12);
  }
  return unaff_w19 - iVar12;
}


