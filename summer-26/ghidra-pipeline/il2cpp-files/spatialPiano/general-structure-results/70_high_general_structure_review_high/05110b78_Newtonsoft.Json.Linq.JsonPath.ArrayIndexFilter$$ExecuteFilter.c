/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ArrayIndexFilter$$ExecuteFilter
ENTRY_POINT: 05110b78
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_3
*/


long Newtonsoft_Json_Linq_JsonPath_ArrayIndexFilter__ExecuteFilter(void)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined4 unaff_w19;
  long *unaff_x20;
  long lVar15;
  long *plVar16;
  long *unaff_x25;
  uint uVar17;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_0510d834();
                    /* try { // try from 05110b7c to 05210b83 has its CatchHandler @ 05110bd8 */
                    /* try { // try from 05110b84 to 05210bbb has its CatchHandler @ 05110774 */
                    /* catch() { ... } // from try @ 0511098c with catch @ 05110b88 */
                    /* catch() { ... } // from try @ 0511095c with catch @ 05110b8c */
                    /* catch() { ... } // from try @ 05110acc with catch @ 05110b90 */
  uVar11 = 4;
                    /* catch() { ... } // from try @ 05110ac8 with catch @ 05110b94 */
                    /* catch() { ... } // from try @ 05110928 with catch @ 05110b98 */
  if (in_stack_00000018._4_1_ != '\0') {
    uVar11 = 5;
  }
                    /* catch() { ... } // from try @ 051108c4 with catch @ 05110b9c */
  lVar7 = (**(code **)(*unaff_x20 + 0x8a8))(4);
  puVar6 = System_Runtime_Serialization_XmlObjectSerializerReadContext_var;
  puVar5 = System_Runtime_Serialization_XmlObjectSerializerContext_var;
  puVar4 = System_Xml_Serialization_XmlIncludeAttribute_var;
  if (lVar7 != 0) {
    uVar2 = *(uint *)(lVar7 + 0x18);
    if ((int)uVar2 < 1) {
      lVar7 = 0;
    }
    else {
                    /* try { // try from 05110bbc to 05210bbf has its CatchHandler @ 05110bc4 */
                    /* catch() { ... } // from try @ 05110bbc with catch @ 05110bc4 */
                    /* try { // try from 05110bc8 to 05210bcf has its CatchHandler @ 05110bd8 */
                    /* try { // try from 05110bd0 to 05210bdb has its CatchHandler @ 05110774 */
      uVar17 = 0;
      lVar15 = 0;
      do {
                    /* catch() { ... } // from try @ 05110b7c with catch @ 05110bd8
                       catch() { ... } // from try @ 05110bc8 with catch @ 05110bd8 */
        if (uVar2 <= uVar17) goto LAB_05110da8;
        plVar16 = *(long **)(lVar7 + (long)(int)uVar17 * 8 + 0x20);
        if (plVar16 == (long *)0x0) goto LAB_05110da4;
        lVar12 = *plVar16;
        bVar3 = *(byte *)(*unaff_x25 + 0x130);
        if ((*(byte *)(lVar12 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar3 * 8 + -8) != *unaff_x25)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar16);
        }
        uVar8 = (**(code **)(lVar12 + 0x1b8))(plVar16,*(undefined8 *)(lVar12 + 0x1c0));
        uVar9 = FUN_04f6d990(uVar8,in_stack_00000010,uVar11,0);
        if ((uVar9 & 1) != 0) {
          if (lVar15 == 0) {
            lVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
            FUN_03abf17c(lVar15,2,*(undefined8 *)puVar5);
            if (lVar15 == 0) goto LAB_05110da4;
          }
          lVar12 = *(long *)(lVar15 + 0x10);
          lVar14 = *(long *)puVar4;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_05110da4;
          uVar2 = *(uint *)(lVar15 + 0x18);
          if (uVar2 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar2 + 1;
            *(long **)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = plVar16;
          }
          else {
            FUN_03abf904(lVar15,plVar16,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar2 = *(uint *)(lVar7 + 0x18);
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < (int)uVar2);
      if (lVar15 == 0) {
        lVar7 = 0;
      }
      else {
        lVar15 = FUN_03ac12f8(lVar15,*(undefined8 *)System_Xml_XmlNode_var);
        if (lVar15 == 0) goto LAB_05110da4;
        if ((int)*(ulong *)(lVar15 + 0x18) < 1) {
          lVar7 = 0;
        }
        else {
          lVar7 = 0;
          uVar9 = 0;
          uVar13 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
          do {
            if (uVar13 <= uVar9) {
LAB_05110da8:
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            lVar12 = *(long *)(lVar15 + 0x20 + uVar9 * 8);
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar13 = FUN_0510db1c(lVar12,unaff_w19,in_stack_00000010,0,in_stack_00000008);
            if ((uVar13 & 1) != 0) {
              if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              bVar1 = lVar7 != 0;
              lVar7 = lVar12;
              if (bVar1) {
                uVar8 = thunk_FUN_02f6ef30(PTR_DAT_067d9b28);
                uVar8 = FUN_05116b30(uVar8,0);
                thunk_FUN_02f6ef30(PTR_DAT_067d94b0);
                uVar10 = thunk_FUN_02f45270();
                FUN_050147b4(uVar10,uVar8,0);
                uVar8 = thunk_FUN_02f6ef30(
                                          System_Runtime_Serialization_XmlObjectSerializerWriteContext_var
                                          );
                    /* WARNING: Subroutine does not return */
                FUN_02f0888c(uVar10,uVar8);
              }
            }
            uVar13 = (ulong)*(uint *)(lVar15 + 0x18);
            uVar9 = uVar9 + 1;
          } while ((long)uVar9 < (long)(int)*(uint *)(lVar15 + 0x18));
        }
      }
    }
    return lVar7;
  }
LAB_05110da4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


