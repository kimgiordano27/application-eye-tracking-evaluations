/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_MissingMemberHandling
ENTRY_POINT: 032a6878
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling(ulong param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  uint uVar16;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 uStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_04232bd8);
    *(undefined1 *)(unaff_x21 + 0xd34) = 1;
  }
  FUN_03313b6c();
  if (unaff_x20 == 0) {
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar5 = thunk_FUN_01c496e0();
    uVar6 = thunk_FUN_01c273e8(UnityEngine_UIElements_AttachToPanelEvent_<>c_TypeInfo);
    FUN_0323fc78(uVar5,uVar6,0);
    uVar6 = thunk_FUN_01c273e8(Method_System_Collections_Generic_Dictionary<Hash128,_int[]>__ctor__)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar5,uVar6);
  }
  iVar8 = *(int *)(unaff_x20 + 0x18);
  if (0xfffffff < iVar8) {
    uStack000000000000000c = 8;
    uVar5 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
    uVar5 = thunk_FUN_01c49334(uVar5,&stack0x0000000c);
    uVar6 = thunk_FUN_01c273e8(Method_System_Collections_Generic_Dictionary<Hash128,_int[]>_Add__);
    uVar5 = FUN_03131f18(uVar6,uVar5,0);
    thunk_FUN_01c273e8(PTR_DAT_04231770);
    uVar6 = thunk_FUN_01c496e0();
    uVar7 = thunk_FUN_01c273e8(UnityEngine_UIElements_AttachToPanelEvent_<>c_TypeInfo);
    FUN_0323fce4(uVar6,uVar5,uVar7,0);
    uVar5 = thunk_FUN_01c273e8(Method_System_Collections_Generic_Dictionary<Hash128,_int[]>__ctor__)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar6,uVar5);
  }
  if (iVar8 < 1) {
    iVar8 = 0;
  }
  else {
    iVar3 = iVar8 + 2;
    if (-1 < iVar8 + -1) {
      iVar3 = iVar8 + -1;
    }
    iVar8 = (iVar3 >> 2) + 1;
  }
  lVar4 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04232bd8,iVar8);
  *(long *)(unaff_x19 + 0x10) = lVar4;
  uVar10 = *(ulong *)(unaff_x20 + 0x18);
  uVar9 = (uint)uVar10;
  *(uint *)(unaff_x19 + 0x18) = uVar9 << 3;
  if ((int)uVar9 < 4) {
    uVar16 = 0;
    uVar11 = 0;
    uVar13 = uVar9;
  }
  else {
    uVar11 = (uVar9 - 4 >> 2) + 1;
    uVar14 = 0;
    uVar12 = 0;
    uVar10 = uVar10 & 0xffffffff;
    lVar1 = unaff_x20 + 0x23;
    do {
      if ((((uVar10 <= uVar14) || (uVar10 <= uVar14 + 1)) || (uVar10 <= uVar14 + 2)) ||
         (uVar10 <= uVar14 + 3)) goto LAB_032a6a80;
      if (lVar4 == 0) goto LAB_032a6a84;
      if (*(uint *)(lVar4 + 0x18) <= uVar12) goto LAB_032a6a80;
      lVar2 = uVar14 + 4;
      uVar12 = uVar12 + 1;
      *(uint *)(lVar4 + 0x20 + uVar14) =
           CONCAT13(*(undefined1 *)(lVar1 + uVar14),
                    CONCAT12(*(undefined1 *)(lVar1 + uVar14 + -1),
                             *(undefined2 *)(lVar1 + uVar14 + -3)));
      uVar14 = uVar14 + 4;
    } while ((ulong)uVar11 * 4 - lVar2 != 0);
    uVar16 = (uint)lVar2;
    uVar13 = uVar9 - uVar16;
  }
  if (uVar13 == 1) {
    if (lVar4 == 0) {
LAB_032a6a84:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
  else {
    if (uVar13 == 2) {
      if (lVar4 == 0) goto LAB_032a6a84;
    }
    else {
      if (uVar13 != 3) goto LAB_032a6a6c;
      if (uVar9 <= (uint)((long)(int)uVar16 | 2U)) goto LAB_032a6a80;
      if (lVar4 == 0) goto LAB_032a6a84;
      if (*(uint *)(lVar4 + 0x18) <= uVar11) goto LAB_032a6a80;
      *(uint *)(lVar4 + (ulong)uVar11 * 4 + 0x20) =
           (uint)*(byte *)(unaff_x20 + ((long)(int)uVar16 | 2U) + 0x20) << 0x10;
    }
    if ((*(uint *)(lVar4 + 0x18) <= uVar11) || (uVar9 <= (uint)((long)(int)uVar16 | 1U)))
    goto LAB_032a6a80;
    puVar15 = (uint *)(lVar4 + (ulong)uVar11 * 4 + 0x20);
    *puVar15 = *puVar15 | (uint)*(byte *)(unaff_x20 + ((long)(int)uVar16 | 1U) + 0x20) << 8;
  }
  if ((uVar11 < *(uint *)(lVar4 + 0x18)) && (uVar16 < uVar9)) {
    puVar15 = (uint *)(lVar4 + (ulong)uVar11 * 4 + 0x20);
    *puVar15 = *puVar15 | (uint)*(byte *)(unaff_x20 + (int)uVar16 + 0x20);
LAB_032a6a6c:
    *(undefined4 *)(unaff_x19 + 0x1c) = 0;
    return;
  }
LAB_032a6a80:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


