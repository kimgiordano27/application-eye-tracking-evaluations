/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureType
ENTRY_POINT: 01bba7fc
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureType(long param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  ulong uVar5;
  undefined8 *unaff_x25;
  long lVar6;
  long lVar7;
  
  thunk_FUN_0159f088(*(undefined8 *)(param_1 + 0x878));
  thunk_FUN_0159f088(PTR_DAT_06da8dc0);
  thunk_FUN_0159f088(PTR_DAT_06dd9ff0);
  thunk_FUN_0159f088(PTR_DAT_06ddc2c0);
  thunk_FUN_0159f088(PTR_DAT_06e03188);
  *(undefined1 *)(unaff_x24 + 0xcba) = 1;
  uVar2 = FUN_0160edfc(*unaff_x25,0x13);
  FUN_02df8d44(uVar2,*unaff_x19,0);
  **(undefined8 **)(*unaff_x20 + 0xb8) = uVar2;
  thunk_FUN_01656ef8(*(undefined8 *)(*unaff_x20 + 0xb8),uVar2);
  uVar2 = FUN_0160edfc(*unaff_x21,0x10);
  FUN_02df8d44(uVar2,*unaff_x23,0);
  puVar3 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 8);
  *puVar3 = uVar2;
  thunk_FUN_01656ef8(puVar3,uVar2);
  uVar2 = FUN_0160edfc(*unaff_x22,0x11e);
  puVar3 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
  *puVar3 = uVar2;
  thunk_FUN_01656ef8(puVar3,uVar2);
  uVar2 = FUN_0160edfc(*unaff_x21,0x11e);
  puVar3 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
  *puVar3 = uVar2;
  thunk_FUN_01656ef8(puVar3,uVar2);
  uVar5 = 0;
  iVar4 = 0x3000;
  do {
    lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
    uVar1 = FUN_01bbab78(iVar4);
    if (lVar6 == 0) goto LAB_01bbab70;
    if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_01bbab74;
    *(undefined2 *)(lVar6 + uVar5 * 2 + 0x20) = uVar1;
    lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
    if (lVar6 == 0) goto LAB_01bbab70;
    if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_01bbab74;
    lVar6 = lVar6 + uVar5;
    uVar5 = uVar5 + 1;
    iVar4 = iVar4 + 0x100;
    *(undefined1 *)(lVar6 + 0x20) = 8;
  } while (uVar5 != 0x90);
  lVar6 = 0;
  iVar4 = 0xc800;
  do {
    lVar7 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
    uVar1 = FUN_01bbab78(iVar4);
    if (lVar7 == 0) goto LAB_01bbab70;
    if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar6 + 0x90U) goto LAB_01bbab74;
    *(undefined2 *)(lVar7 + lVar6 * 2 + 0x140) = uVar1;
    lVar7 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
    if (lVar7 == 0) goto LAB_01bbab70;
    if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar6 + 0x90U) goto LAB_01bbab74;
    lVar7 = lVar7 + lVar6;
    lVar6 = lVar6 + 1;
    iVar4 = iVar4 + 0x80;
    *(undefined1 *)(lVar7 + 0xb0) = 9;
  } while (lVar6 != 0x70);
  lVar6 = 0;
  iVar4 = 0;
  do {
    lVar7 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
    uVar1 = FUN_01bbab78(iVar4);
    if (lVar7 == 0) goto LAB_01bbab70;
    if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar6 + 0x100U) goto LAB_01bbab74;
    *(undefined2 *)(lVar7 + lVar6 * 2 + 0x220) = uVar1;
    lVar7 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
    if (lVar7 == 0) goto LAB_01bbab70;
    if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar6 + 0x100U) goto LAB_01bbab74;
    lVar7 = lVar7 + lVar6;
    lVar6 = lVar6 + 1;
    iVar4 = iVar4 + 0x200;
    *(undefined1 *)(lVar7 + 0x120) = 7;
  } while (lVar6 != 0x18);
  lVar6 = 0;
  iVar4 = 0xc000;
  do {
    lVar7 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
    uVar1 = FUN_01bbab78(iVar4);
    if (lVar7 == 0) goto LAB_01bbab70;
    if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar6 + 0x118U) goto LAB_01bbab74;
    *(undefined2 *)(lVar7 + lVar6 * 2 + 0x250) = uVar1;
    lVar7 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
    if (lVar7 == 0) goto LAB_01bbab70;
    if ((ulong)*(uint *)(lVar7 + 0x18) <= lVar6 + 0x118U) goto LAB_01bbab74;
    lVar7 = lVar7 + lVar6;
    lVar6 = lVar6 + 1;
    iVar4 = iVar4 + 0x100;
    *(undefined1 *)(lVar7 + 0x138) = 8;
  } while (lVar6 != 6);
  uVar2 = FUN_0160edfc(*unaff_x22,0x1e);
  puVar3 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x20);
  *puVar3 = uVar2;
  thunk_FUN_01656ef8(puVar3,uVar2);
  uVar2 = FUN_0160edfc(*unaff_x21,0x1e);
  puVar3 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x28);
  *puVar3 = uVar2;
  thunk_FUN_01656ef8(puVar3,uVar2);
  iVar4 = 0;
  uVar5 = 0;
  while( true ) {
    lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x20);
    uVar1 = FUN_01bbab78(iVar4);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar5) {
LAB_01bbab74:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    *(undefined2 *)(lVar6 + uVar5 * 2 + 0x20) = uVar1;
    lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x28);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_01bbab74;
    lVar6 = lVar6 + uVar5;
    uVar5 = uVar5 + 1;
    iVar4 = iVar4 + 0x800;
    *(undefined1 *)(lVar6 + 0x20) = 5;
    if (uVar5 == 0x1e) {
      return;
    }
  }
LAB_01bbab70:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


