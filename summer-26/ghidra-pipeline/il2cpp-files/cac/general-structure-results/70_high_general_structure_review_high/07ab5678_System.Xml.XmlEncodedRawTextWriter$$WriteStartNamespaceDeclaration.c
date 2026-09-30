/*
FUNCTION_NAME: System.Xml.XmlEncodedRawTextWriter$$WriteStartNamespaceDeclaration
ENTRY_POINT: 07ab5678
PROGRAM: cac-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x07ab5988) */

void System_Xml_XmlEncodedRawTextWriter__WriteStartNamespaceDeclaration
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar6;
  long in_x9;
  int *piVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  long unaff_x21;
  int iVar10;
  undefined1 auVar11 [16];
  long *in_stack_00000018;
  int in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  undefined4 *in_stack_00000068;
  
  if (in_x9 == param_1) {
                    /* try { // try from 07ab5684 to 07bb5687 has its CatchHandler @ 07ab58fc */
    FUN_07ab05dc(param_2,*(undefined8 *)(unaff_x21 + 0x48));
  }
  if (*(long *)(in_stack_00000068 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  FUN_0751ce3c(*(long *)(in_stack_00000068 + 0x10),*(undefined8 *)(unaff_x21 + 0x48),0);
                    /* try { // try from 07ab56a0 to 07bb56ab has its CatchHandler @ 07ab5914 */
  if (*(long *)(in_stack_00000068 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
                    /* try { // try from 07ab56ac to 07bb56bb has its CatchHandler @ 07ab5910 */
  uVar8 = *(undefined8 *)(in_stack_00000068 + 0xc);
  auVar11 = FUN_0751cc70(*(long *)(in_stack_00000068 + 0x10),0);
  plVar1 = *(long **)(unaff_x21 + 0x10);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c(0,auVar11._8_8_,auVar11._0_8_);
  }
                    /* try { // try from 07ab56c4 to 07bb56d3 has its CatchHandler @ 07ab5930 */
  lVar2 = (**(code **)(*plVar1 + 0x198))
                    (plVar1,uVar8,auVar11._0_8_,*(undefined8 *)(*plVar1 + 0x1a0));
  if (lVar2 == 0) {
                    /* try { // try from 07ab59f0 to 07bb59ff has its CatchHandler @ 07ab5a0c */
    thunk_FUN_03f786f8(PTR_DAT_09111b70);
    uVar8 = thunk_FUN_03f4e68c();
                    /* catch() { ... } // from try @ 07ab599c with catch @ 07ab5a00 */
                    /* catch() { ... } // from try @ 07ab5984 with catch @ 07ab5a04 */
                    /* catch() { ... } // from try @ 07ab5980 with catch @ 07ab5a08 */
                    /* catch() { ... } // from try @ 07ab594c with catch @ 07ab5a0c
                       catch() { ... } // from try @ 07ab59f0 with catch @ 07ab5a0c */
    uVar5 = thunk_FUN_03f786f8(PTR_DAT_09154ed0);
                    /* try { // try from 07ab5a14 to 07bb5a17 has its CatchHandler @ 07ab5a68 */
                    /* try { // try from 07ab5a18 to 07bb5a43 has its CatchHandler @ 07ab54f0 */
                    /* catch() { ... } // from try @ 07ab5610 with catch @ 07ab5a1c */
    Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer(uVar8,uVar5,0)
    ;
                    /* catch() { ... } // from try @ 07ab5808 with catch @ 07ab5a20 */
                    /* catch() { ... } // from try @ 07ab55d4 with catch @ 07ab5a24 */
    uVar5 = thunk_FUN_03f786f8(PTR_DAT_09154ec8);
                    /* WARNING: Subroutine does not return */
    FUN_03f134f0(uVar8,uVar5);
  }
  _in_stack_00000040 = FUN_061b94a8(lVar2,0,*(undefined8 *)PTR_DAT_0913dd78);
  uVar3 = FUN_06e052ec(&stack0x00000040,*(undefined8 *)PTR_DAT_0913dd70);
  if ((uVar3 & 1) == 0) {
    in_stack_00000058._4_4_ = 0;
    *in_stack_00000068 = 0;
    *(undefined1 (*) [16])(in_stack_00000068 + 0x14) = _in_stack_00000040;
    thunk_FUN_03f86000(in_stack_00000068 + 0x14,0);
    puVar9 = in_stack_00000068;
    if (*(int *)(*(long *)PTR_DAT_09146608 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)PTR_DAT_09146608,extraout_x1_00,in_stack_00000068);
    }
    FUN_042a283c(puVar9 + 2,&stack0x00000040,in_stack_00000068,*(undefined8 *)PTR_DAT_09154eb8);
LAB_07ab5848:
    lVar2 = 0;
    iVar10 = 10;
  }
  else {
                    /* try { // try from 07ab571c to 07bb5723 has its CatchHandler @ 07ab590c */
    uVar8 = FUN_06e05334(&stack0x00000040,*(undefined8 *)PTR_DAT_0913dd68);
    *(undefined8 *)(in_stack_00000068 + 0x12) = uVar8;
    thunk_FUN_03f86000();
    auVar11._8_8_ = in_stack_00000038;
    auVar11._0_8_ = in_stack_00000030;
    lVar2 = *(long *)(in_stack_00000068 + 0x12);
    if (lVar2 == 0) {
                    /* try { // try from 07ab599c to 07bb59df has its CatchHandler @ 07ab5a00 */
      thunk_FUN_03f786f8(PTR_DAT_09111b70);
      uVar8 = thunk_FUN_03f4e68c();
      uVar5 = thunk_FUN_03f786f8(PTR_DAT_09154ec0);
      Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                (uVar8,uVar5,0);
      uVar5 = thunk_FUN_03f786f8(PTR_DAT_09154ec8);
                    /* WARNING: Subroutine does not return */
      FUN_03f134f0(uVar8,uVar5);
    }
    if ((*(long *)(lVar2 + 0x38) != 0) &&
       (_in_stack_00000030 = auVar11, (*(byte *)(in_stack_00000068 + 0xe) & 1) == 0)) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
                    /* try { // try from 07ab5750 to 07bb5753 has its CatchHandler @ 07ab591c */
                    /* try { // try from 07ab5754 to 07bb57ab has its CatchHandler @ 07ab54f0 */
      lVar2 = FUN_07ab3f20(*(long *)(lVar2 + 0x38),*(undefined8 *)(unaff_x21 + 0x40));
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      _in_stack_00000030 = FUN_0752d038(lVar2,0,0);
      uVar3 = FUN_073d0c5c(&stack0x00000030,0);
      if ((uVar3 & 1) == 0) {
        in_stack_00000058._4_4_ = 1;
        *in_stack_00000068 = 1;
        *(undefined1 (*) [16])(in_stack_00000068 + 0x18) = _in_stack_00000030;
        thunk_FUN_03f86000(in_stack_00000068 + 0x18,0);
        puVar9 = in_stack_00000068;
        if (*(int *)(*(long *)PTR_DAT_09146608 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_09146608,extraout_x1,in_stack_00000068);
        }
        FUN_042c441c(puVar9 + 2,&stack0x00000030,in_stack_00000068,*(undefined8 *)PTR_DAT_09154eb0);
        goto LAB_07ab5848;
      }
      FUN_073d0c74(&stack0x00000030,0);
      lVar2 = *(long *)(in_stack_00000068 + 0x12);
    }
    iVar10 = 0x10;
  }
  if ((in_stack_00000058._4_4_ < 0) &&
     (plVar1 = *(long **)(*in_stack_00000018 + 0x40), plVar1 != (long *)0x0)) {
    lVar6 = *plVar1;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0910bb38) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07ab58c4;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f4b594(plVar1,*(long *)PTR_DAT_0910bb38,0);
LAB_07ab58c4:
    (*(code *)*puVar4)(plVar1,puVar4[1]);
  }
  if (iVar10 == 0x10) {
    lVar6 = *(long *)PTR_DAT_09146608;
    puVar9 = in_stack_00000068 + 2;
    *in_stack_00000068 = 0xfffffffe;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    FUN_0637c43c(puVar9,lVar2,*(undefined8 *)PTR_DAT_09146680);
  }
  else if (iVar10 == 0) {
    uVar8 = *(undefined8 *)(&stack0x00000020 + (long)(in_stack_00000028 + -1) * 8);
    puVar9 = in_stack_00000068 + 2;
    *in_stack_00000068 = 0xfffffffe;
    lVar2 = thunk_FUN_03f786f8(PTR_DAT_09146608);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar5 = thunk_FUN_03f786f8(PTR_DAT_09146688);
    FUN_0637c688(puVar9,uVar8,uVar5);
  }
  return;
}


