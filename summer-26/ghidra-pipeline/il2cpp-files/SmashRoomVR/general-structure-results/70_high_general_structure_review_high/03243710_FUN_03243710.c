/*
FUNCTION_NAME: FUN_03243710
ENTRY_POINT: 03243710
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03243710(undefined8 param_1,long param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_78;
  
  if ((DAT_03ff47af & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d84458);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d844e8);
    DAT_03ff47af = 1;
  }
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_78 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  lVar3 = FUN_032ec57c(0);
  if (lVar3 == 0) {
    return;
  }
  lVar8 = *(long *)(param_2 + 0xf8);
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar8 = *(long *)(lVar8 + 0x20);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(lVar8,0,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    uVar1 = FUN_032e8fc0(lVar3,*(undefined8 *)(param_2 + 0x1a8),0);
    if ((uVar1 & 0xfffffffe) == 10) {
      if (*(int *)(*(long *)PTR_DAT_03d84458 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_03242d10();
      lVar6 = FUN_0391c27c(param_2,0);
      if (lVar6 == 0) goto LAB_032439fc;
      uVar7 = FUN_039230bc(lVar6,0);
      uVar5 = FUN_02edd6e8(uVar5,uVar7,0);
      iVar2 = FUN_032e8954(lVar3,uVar5,(undefined8 *)(param_2 + 0x1a8),0);
      if (iVar2 != 0) {
        return;
      }
    }
    if (lVar8 != 0) {
      local_90 = FUN_03906004(lVar8,0);
      lVar8 = FUN_03925790(0);
      if (lVar8 != 0) {
        uVar1 = FUN_02ee66dc(lVar8,*(undefined8 *)PTR_DAT_03d844e8,0);
        local_88 = (ulong)(uVar1 & 1);
        FUN_032e93ac(lVar3,*(undefined8 *)(param_2 + 0x1a8),&local_90,0);
        fVar9 = (float)*(undefined8 *)(param_2 + 0x1b0);
        fVar10 = (float)((ulong)*(undefined8 *)(param_2 + 0x1b0) >> 0x20);
        fVar11 = (float)*(undefined8 *)(param_2 + 0x1b8);
        fVar12 = (float)((ulong)*(undefined8 *)(param_2 + 0x1b8) >> 0x20);
        local_a0 = CONCAT44((fVar10 + (float)((ulong)_DAT_00b57b20 >> 0x20)) * fVar12,
                            (fVar9 + (float)_DAT_00b57b20) * fVar11);
        uStack_98 = CONCAT44((fVar10 + (float)((ulong)_UNK_00b57b28 >> 0x20)) * fVar12,
                             (fVar9 + (float)_UNK_00b57b28) * fVar11);
        FUN_032e8de0(lVar3,*(undefined8 *)(param_2 + 0x1a8),&local_a0,0);
        local_78 = *(undefined8 *)(param_2 + 0x1c0);
        FUN_032e9264(lVar3,*(undefined8 *)(param_2 + 0x1a8),&local_78,0);
        FUN_032e8cfc(param_1,lVar3,*(undefined8 *)(param_2 + 0x1a8),0);
        uVar13 = *param_3;
        uVar14 = param_3[1];
        uVar15 = param_3[2];
        uVar16 = param_3[3];
        uVar17 = param_3[4];
        uVar18 = param_3[5];
        uVar19 = param_3[6];
        if (DAT_03fed258 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed258 = '\x01';
        }
        FUN_03910ecc(&local_110,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,0);
        uStack_148 = uStack_108;
        local_150 = local_110;
        uStack_138 = uStack_f8;
        uStack_140 = uStack_100;
        uStack_128 = uStack_e8;
        local_130 = local_f0;
        uStack_118 = uStack_d8;
        uStack_120 = uStack_e0;
        FUN_03214d30(&local_110,&local_150,0);
        uStack_c8 = uStack_108;
        local_d0 = local_110;
        uStack_b8 = uStack_f8;
        local_c0 = uStack_100;
        uStack_a8 = uStack_e8;
        local_b0 = local_f0;
        FUN_032e8e94(lVar3,*(undefined8 *)(param_2 + 0x1a8),1,&local_d0,0);
        return;
      }
    }
  }
LAB_032439fc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


