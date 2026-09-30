/*
FUNCTION_NAME: FUN_03613b50
ENTRY_POINT: 03613b50
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_14;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03613b50(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  
  if ((DAT_03ff718e & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d99fa8);
    DAT_03ff718e = 1;
  }
  lVar12 = *(long *)(param_1 + 0x20);
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  puVar8 = *(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  uVar19 = *(undefined4 *)puVar8;
  uVar18 = *(undefined4 *)((long)puVar8 + 4);
  uVar2 = *puVar8;
  uVar17 = *(undefined4 *)(puVar8 + 1);
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  puVar7 = PTR_DAT_03d99fa8;
  puVar6 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
  if (lVar12 != 0) {
    puVar10 = *(undefined4 **)
               (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
               0xb8);
    lVar9 = *(long *)(lVar12 + 0x10);
    uVar16 = *puVar10;
    uVar15 = puVar10[1];
    uVar14 = puVar10[2];
    uVar13 = puVar10[3];
    lVar11 = *(long *)PTR_DAT_03d99fa8;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
        uVar4 = DAT_00b92018;
        uVar3 = _UNK_00b57398;
        uVar2 = _DAT_00b57390;
        lVar9 = lVar9 + (long)(int)uVar1 * 0x34;
        *(undefined4 *)(lVar9 + 0x20) = uVar19;
        *(undefined4 *)(lVar9 + 0x24) = uVar18;
        *(undefined4 *)(lVar9 + 0x28) = uVar17;
        *(undefined4 *)(lVar9 + 0x44) = uVar16;
        *(undefined4 *)(lVar9 + 0x48) = uVar15;
        *(undefined8 *)(lVar9 + 0x34) = uVar3;
        *(undefined8 *)(lVar9 + 0x2c) = uVar2;
        *(undefined8 *)(lVar9 + 0x3c) = uVar4;
        *(undefined4 *)(lVar9 + 0x4c) = uVar14;
        *(undefined4 *)(lVar9 + 0x50) = uVar13;
        lVar12 = *(long *)(param_1 + 0x20);
      }
      else {
        uStack_7c = (undefined4)_UNK_00b57398;
        uStack_78 = (undefined4)((ulong)_UNK_00b57398 >> 0x20);
        uStack_84 = (undefined4)_DAT_00b57390;
        uStack_80 = (undefined4)((ulong)_DAT_00b57390 >> 0x20);
        local_74 = (undefined4)DAT_00b92018;
        uStack_70 = (undefined4)((ulong)DAT_00b92018 >> 0x20);
        local_90 = uVar2;
        uStack_88 = uVar17;
        local_6c = uVar16;
        uStack_68 = uVar15;
        local_64 = uVar14;
        uStack_60 = uVar13;
        FUN_02aefbf4(lVar12,&local_90,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        lVar12 = *(long *)(param_1 + 0x20);
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__)
          ;
          DAT_03fed256 = '\x01';
        }
      }
      if (lVar12 != 0) {
        lVar11 = *(long *)puVar7;
        puVar10 = *(undefined4 **)(*(long *)puVar6 + 0xb8);
        lVar9 = *(long *)(lVar12 + 0x10);
        uVar13 = *puVar10;
        uVar19 = puVar10[1];
        uVar18 = puVar10[2];
        uVar17 = puVar10[3];
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar9 != 0) {
          uVar1 = *(uint *)(lVar12 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar1 + 1;
            uVar5 = _UNK_00b56748;
            uVar4 = _DAT_00b56740;
            uVar3 = _UNK_00b56588;
            uVar2 = _DAT_00b56580;
            lVar9 = lVar9 + (long)(int)uVar1 * 0x34;
            *(undefined4 *)(lVar9 + 0x40) = 0xc0000000;
            *(undefined4 *)(lVar9 + 0x44) = uVar13;
            *(undefined4 *)(lVar9 + 0x48) = uVar19;
            *(undefined8 *)(lVar9 + 0x28) = uVar3;
            *(undefined8 *)(lVar9 + 0x20) = uVar2;
            *(undefined8 *)(lVar9 + 0x38) = uVar5;
            *(undefined8 *)(lVar9 + 0x30) = uVar4;
            *(undefined4 *)(lVar9 + 0x4c) = uVar18;
            *(undefined4 *)(lVar9 + 0x50) = uVar17;
          }
          else {
            uStack_88 = (undefined4)_UNK_00b56588;
            uStack_84 = (undefined4)((ulong)_UNK_00b56588 >> 0x20);
            local_90 = _DAT_00b56580;
            uStack_78 = (undefined4)_UNK_00b56748;
            local_74 = (undefined4)((ulong)_UNK_00b56748 >> 0x20);
            uStack_80 = (undefined4)_DAT_00b56740;
            uStack_7c = (undefined4)((ulong)_DAT_00b56740 >> 0x20);
            uStack_70 = 0xc0000000;
            local_6c = uVar13;
            uStack_68 = uVar19;
            local_64 = uVar18;
            uStack_60 = uVar17;
            FUN_02aefbf4(lVar12,&local_90,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


