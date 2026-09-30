/*
FUNCTION_NAME: FUN_065dce3c
ENTRY_POINT: 065dce3c
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_5;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_065dce3c(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined8 uStack_58;
  
  if ((DAT_071cec45 & 1) == 0) {
    FUN_02f07e70(System_IO_FileNotFoundException_TypeInfo);
    FUN_02f07e70(System_IO_FileStream_TypeInfo);
    FUN_02f07e70(System_IO_FileStreamAsyncResult_TypeInfo);
    FUN_02f07e70(System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo);
    FUN_02f07e70(System_IO_Enumeration_FileSystemName_TypeInfo);
    FUN_02f07e70(System_Diagnostics_FileVersionInfo_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d03010);
    FUN_02f07e70(System_Net_FileWebRequest_TypeInfo);
    DAT_071cec45 = 1;
  }
  puVar3 = System_IO_FileStream_TypeInfo;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  lVar11 = *(long *)(param_1 + 0x158);
  plVar1 = (long *)(param_1 + 0x158);
  if (lVar11 == 0) {
LAB_065dcf08:
    puVar2 = System_Net_FileWebRequest_TypeInfo;
    if (*(long *)(param_1 + 0x150) == 0) goto LAB_065dd0b4;
    uVar7 = FUN_04cfe588(*(long *)(param_1 + 0x150),*(undefined8 *)puVar3);
    lVar11 = FUN_02f07f14(*(undefined8 *)puVar2,uVar7);
    *plVar1 = lVar11;
    thunk_FUN_02f411dc(plVar1,lVar11);
  }
  else {
    if (*(long *)(param_1 + 0x150) == 0) goto LAB_065dd0b4;
    iVar6 = FUN_04cfe588(*(long *)(param_1 + 0x150),*(undefined8 *)System_IO_FileStream_TypeInfo);
    if (*(int *)(lVar11 + 0x18) < iVar6) goto LAB_065dcf08;
  }
  puVar5 = System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo;
  puVar4 = System_IO_FileStreamAsyncResult_TypeInfo;
  puVar2 = PTR_DAT_06d03010;
  if (*(long *)(param_1 + 0x150) != 0) {
    FUN_04cfed38(&local_b0,*(long *)(param_1 + 0x150),
                 *(undefined8 *)System_IO_FileNotFoundException_TypeInfo);
    uStack_78 = uStack_a8;
    local_80 = local_b0;
    uStack_68 = uStack_98;
    local_70 = uStack_a0;
    uStack_58 = uStack_88;
    local_60 = local_90;
    iVar6 = 0;
    while (uVar9 = FUN_04ed4b48(&local_80,*(undefined8 *)puVar5), (uVar9 & 1) != 0) {
      FUN_065dd124(uStack_68 & 0xffffffff,uStack_68._4_4_,local_60 & 0xffffffff,param_1,iVar6);
      iVar6 = iVar6 + 1;
    }
    FUN_04ed4c80(&local_80,*(undefined8 *)puVar4);
    if (*(long *)(param_1 + 0x150) != 0) {
      iVar6 = FUN_04cfe588(*(long *)(param_1 + 0x150),*(undefined8 *)puVar3);
      if (iVar6 < *(int *)(param_1 + 0x16c)) {
        lVar12 = (long)iVar6;
        lVar11 = (long)iVar6 * 0x84 + 0x20;
        do {
          lVar10 = *plVar1;
          if (lVar10 == 0) goto LAB_065dd0b4;
          if (*(uint *)(lVar10 + 0x18) <= (uint)lVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          FUN_0672f30c(0xbf800000,lVar10 + lVar11,0);
          lVar12 = lVar12 + 1;
          lVar11 = lVar11 + 0x84;
        } while (lVar12 < *(int *)(param_1 + 0x16c));
      }
      if (*(long *)(param_1 + 0x150) != 0) {
        lVar11 = *(long *)(param_1 + 0x128);
        uVar13 = *(undefined8 *)(param_1 + 0x158);
        uVar8 = FUN_04cfe588(*(long *)(param_1 + 0x150),*(undefined8 *)puVar3);
        uVar7 = *(undefined4 *)(param_1 + 0x16c);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)puVar2);
        }
        uVar7 = Newtonsoft_Json_Serialization_JsonProperty__get_DeclaringType(uVar8,uVar7,0);
        if (lVar11 != 0) {
          FUN_06727900(lVar11,uVar13,uVar7,0);
          if (*(long *)(param_1 + 0x150) != 0) {
            uVar7 = FUN_04cfe588(*(long *)(param_1 + 0x150),*(undefined8 *)puVar3);
            *(undefined4 *)(param_1 + 0x16c) = uVar7;
            return;
          }
        }
      }
    }
  }
LAB_065dd0b4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


