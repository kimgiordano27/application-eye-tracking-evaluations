/*
FUNCTION_NAME: FUN_059521c4
ENTRY_POINT: 059521c4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 FUN_059521c4(long param_1)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 local_48;
  
  puVar5 = PTR_DAT_06a0d108;
  if ((DAT_06dc1110 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ffab0);
    FUN_02d965b8(PTR_DAT_06a0d108);
    FUN_02d965b8(PTR_DAT_06a146e0);
    DAT_06dc1110 = 1;
  }
  local_48 = 0;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar6 = FUN_05951cbc(param_1);
  puVar4 = System_Xml_Serialization_XmlSerializerFactory_TypeInfo;
  if ((uVar6 & 1) != 0) {
    if ((DAT_06dc109b & 1) == 0) {
      FUN_02d965b8(System_Xml_Serialization_XmlSerializerFactory_TypeInfo);
      DAT_06dc109b = 1;
    }
    return *(undefined8 *)puVar4;
  }
  lVar7 = FUN_02d966a4(*(undefined8 *)PTR_DAT_06a146e0,4);
  if (lVar7 != 0) {
    uVar12 = *(uint *)(lVar7 + 0x18);
    if ((((uVar12 != 0) &&
         (*(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(param_1 + 4), uVar12 != 1)) &&
        (*(undefined4 *)(lVar7 + 0x24) = *(undefined4 *)(param_1 + 8), 2 < uVar12)) &&
       (*(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)(param_1 + 0xc), uVar12 != 3)) {
      lVar8 = *(long *)puVar5;
      bVar3 = *(byte *)(param_1 + 1);
      *(undefined4 *)(lVar7 + 0x2c) = *(undefined4 *)(param_1 + 0x10);
      local_48 = (ulong)CONCAT14(bVar3,(undefined4)local_48);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar8 = *(long *)puVar5;
      }
      puVar4 = PTR_DAT_069ffab0;
      lVar8 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069ffab0,**(byte **)(lVar8 + 0xb8) + 1);
      uVar12 = 0;
      uVar13 = (uint)bVar3;
      do {
        if ((int)uVar13 < 2) {
          if (*(int *)(lVar7 + 0x18) == 0) break;
          if (*(int *)(lVar7 + 0x20) == 0) {
            uVar6 = (ulong)*(byte *)(param_1 + 3);
            lVar7 = *(long *)puVar5;
            if ((int)(uint)*(byte *)(param_1 + 3) < (int)uVar12)
            goto System_Runtime_Serialization_XmlSerializableWriter__Flush;
            lVar9 = (long)(int)uVar12;
            goto System_Runtime_Serialization_XmlSerializableWriter__WriteBinHex;
          }
        }
        lVar9 = *(long *)puVar5;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar9 = *(long *)puVar5;
        }
        FUN_059524f4(lVar7,(long)&local_48 + 4,*(undefined4 *)(*(long *)(lVar9 + 0xb8) + 0x38),
                     &local_48);
        if (lVar8 == 0) goto LAB_059524f0;
        if (*(uint *)(lVar8 + 0x18) <= uVar12) break;
        lVar9 = (long)(int)uVar12;
        uVar12 = uVar12 + 1;
        *(short *)(lVar8 + lVar9 * 2 + 0x20) = (short)local_48 + 0x30;
        uVar13 = local_48._4_4_;
      } while( true );
    }
LAB_059524ec:
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
LAB_059524f0:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    if (*(uint *)(lVar8 + 0x18) <= (uint)lVar9) goto LAB_059524ec;
    lVar2 = lVar9 + 1;
    uVar6 = (ulong)*(byte *)(param_1 + 3);
    *(undefined2 *)(lVar8 + 0x20 + lVar9 * 2) = 0x30;
    bVar1 = (long)uVar6 <= lVar9;
    lVar9 = lVar2;
    if (bVar1) break;
System_Runtime_Serialization_XmlSerializableWriter__WriteBinHex:
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar7 = *(long *)puVar5;
    }
    if (lVar8 == 0) goto LAB_059524f0;
  }
  uVar12 = (uint)lVar2;
System_Runtime_Serialization_XmlSerializableWriter__Flush:
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar10 = FUN_05951ee0(param_1);
  uVar13 = (uint)((int)uVar6 != 0);
  if ((uVar10 & 1) == 0) {
    lVar7 = FUN_02d966a4(*(undefined8 *)puVar4,uVar12 + uVar13 + 1);
    if (lVar7 == 0) goto LAB_059524f0;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_059524ec;
    *(undefined2 *)(lVar7 + 0x20) = 0x2d;
    uVar13 = 1;
  }
  else {
    lVar7 = FUN_02d966a4(*(undefined8 *)puVar4,uVar12 + uVar13);
    uVar13 = 0;
  }
  if (0 < (int)uVar12) {
    bVar3 = *(byte *)(param_1 + 3);
    uVar6 = (ulong)uVar12;
    do {
      if (bVar3 == uVar6) {
        if (lVar7 == 0) goto LAB_059524f0;
        if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_059524ec;
        lVar9 = (long)(int)uVar13;
        uVar13 = uVar13 + 1;
        *(undefined2 *)(lVar7 + lVar9 * 2 + 0x20) = 0x2e;
      }
      if (lVar8 == 0) goto LAB_059524f0;
      if ((ulong)*(uint *)(lVar8 + 0x18) <= uVar6 - 1) goto LAB_059524ec;
      if (lVar7 == 0) goto LAB_059524f0;
      if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_059524ec;
      lVar9 = (long)(int)uVar13;
      uVar13 = uVar13 + 1;
      *(undefined2 *)(lVar7 + lVar9 * 2 + 0x20) = *(undefined2 *)(lVar8 + 0x1e + uVar6 * 2);
      bVar1 = 1 < uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
  }
  uVar11 = FUN_0536a284(0,lVar7,0);
  return uVar11;
}


