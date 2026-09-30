/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetPropertyName
ENTRY_POINT: 05e9fdec
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05ea016c) */

long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetPropertyName
               (undefined8 param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *__ptr;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_a8;
  void **ppvStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  void *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  
  puVar3 = PTR_DAT_07a18138;
  puVar2 = PTR_DAT_07a18130;
  if ((DAT_07edf1fe & 1) == 0) {
    FUN_03642964(PTR_DAT_07a18140);
    FUN_03642964(PTR_DAT_07a18138);
    FUN_03642964(PTR_DAT_07a18130);
    FUN_03642964(PTR_DAT_07a18148);
    FUN_03642964(PTR_DAT_07a18150);
    FUN_03642964(PTR_DAT_07a18158);
    FUN_03642964(PTR_DAT_079f8730);
    DAT_07edf1fe = 1;
  }
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  uStack_6c = 0;
  local_88 = (void *)0x0;
  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_0459e7d4(lVar7,*(undefined8 *)puVar3);
  puVar2 = PTR_DAT_079f8730;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (0 < *(int *)(param_2 + 0x3c)) {
    uVar11 = *(undefined8 *)PTR_DAT_07a18148;
    if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    puVar3 = PTR_DAT_07a18158;
    uVar11 = FUN_05e26f18(uVar11,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)puVar2);
    }
    iVar4 = thunk_FUN_0364eee8(uVar11,0);
    local_78 = 0;
    local_70 = 0;
    uStack_6c = 0;
    local_80 = 0;
    local_68 = 0;
    local_88 = (void *)FUN_05d34780(*(int *)(param_2 + 0x3c) * iVar4,0);
    local_a8 = 0;
    ppvStack_a0 = (void **)0x0;
    local_90 = 0;
    local_98 = 0;
    uVar11 = thunk_FUN_0367fa58(*(undefined8 *)puVar3,&local_a8);
    uVar5 = FUN_05d35708(uVar11,0);
    local_80 = CONCAT44(*(undefined4 *)(param_2 + 0x1c),uVar5);
    uStack_6c = SUB84(local_88,0);
    local_68 = (undefined4)((ulong)local_88 >> 0x20);
    local_78._4_4_ = *(int *)(param_2 + 0x3c);
    uVar11 = FUN_05e26f18(*(undefined8 *)PTR_DAT_07a18148,0);
    local_70 = thunk_FUN_0364eee8(uVar11,0);
    ppvStack_a0 = &local_88;
    local_a8 = 0;
    iVar6 = FUN_05ea0234(param_1,&local_80,param_3);
    puVar3 = PTR_DAT_07a18150;
    puVar2 = PTR_DAT_07a18140;
    if (iVar6 != 0) {
      thunk_FUN_036aa1c8(PTR_DAT_07a18070);
      uVar11 = thunk_FUN_0367fe20();
      uVar12 = thunk_FUN_036aa1c8(PTR_DAT_07a18160);
      FUN_05e9ec0c(uVar11,iVar6,uVar12);
      uVar12 = thunk_FUN_036aa1c8(PTR_DAT_07a18168);
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar11,uVar12);
    }
    if (0 < local_78._4_4_) {
      iVar6 = 0;
      lVar13 = 0;
      do {
        lVar8 = FUN_05e63f00(&local_88,0);
        uVar11 = FUN_05e63fc8(lVar8 + iVar6,0);
        uVar12 = *(undefined8 *)PTR_DAT_07a18148;
        if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar12 = FUN_05e26f18(uVar12,0);
        if (*(int *)(*(long *)PTR_DAT_079f8730 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        plVar9 = (long *)thunk_FUN_0364ec38(uVar11,uVar12,0);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_03643084();
        }
        lVar8 = thunk_FUN_0367ff68();
        uVar11 = FUN_05ea02c4(param_1,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(lVar8 + 4),
                              *(undefined4 *)(param_2 + 0x34),param_3);
        if (lVar7 == 0) {
LAB_05ea015c:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar8 = *(long *)(lVar7 + 0x10);
        lVar10 = *(long *)puVar2;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_05ea015c;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
          thunk_FUN_036b7ad0();
        }
        else {
          FUN_0459f03c(lVar7,uVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        lVar13 = lVar13 + 1;
        iVar6 = iVar6 + iVar4;
      } while (lVar13 < local_78._4_4_);
    }
    __ptr = local_88;
    if (*(int *)(*(long *)PTR_DAT_079f8730 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    free(__ptr);
  }
  return lVar7;
}


