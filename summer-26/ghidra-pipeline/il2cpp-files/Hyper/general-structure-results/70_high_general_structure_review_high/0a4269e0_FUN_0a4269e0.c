/*
FUNCTION_NAME: FUN_0a4269e0
ENTRY_POINT: 0a4269e0
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void FUN_0a4269e0(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 local_50 [16];
  int local_34;
  
  puVar4 = PTR_DAT_0ac40268;
  if ((DAT_0b34357e & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac0a4a0);
    FUN_04947ee4(PTR_DAT_0acf1988);
    FUN_04947ee4(PTR_DAT_0acf1990);
    FUN_04947ee4(PTR_DAT_0acf1998);
    FUN_04947ee4(PTR_DAT_0acf19a0);
    FUN_04947ee4(PTR_DAT_0acf19a8);
    FUN_04947ee4(PTR_DAT_0ac40268);
    FUN_04947ee4(PTR_DAT_0acf19b0);
    FUN_04947ee4(PTR_DAT_0acf19b8);
    DAT_0b34357e = 1;
  }
  lVar5 = *(long *)puVar4;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar5 = *(long *)puVar4;
  }
  puVar3 = PTR_DAT_0ac0a4a0;
  iVar1 = param_2 + -1;
  local_34 = iVar1;
  if (-1 < iVar1) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 == 0) {
LAB_0a426c50:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar5 = *(long *)puVar4;
    if (iVar1 < *(int *)(lVar9 + 0x18)) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      local_50 = FUN_06ddcdf8(lVar9,iVar1,*(undefined8 *)PTR_DAT_0acf1998);
      uVar7 = local_50._8_8_;
      if (0 < local_50._12_4_) {
        iVar2 = local_50._12_4_ + -1;
        local_50._12_4_ = iVar2;
        if (iVar2 == 0) {
          if ((uVar7 & 1) == 0) {
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_0a426c50;
            FUN_08732d1c(*(long *)(param_1 + 0x18),local_50._0_8_,*(undefined8 *)PTR_DAT_0acf1988);
          }
          local_50._0_8_ = 0;
          thunk_FUN_049ee3d8(local_50,0);
          local_50._8_8_ = local_50._8_8_ & 0xffffffffffffff00;
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_0a426c50;
          FUN_0762e744(*(long *)(param_1 + 0x20),param_2,*(undefined8 *)PTR_DAT_0acf19a8);
        }
        lVar5 = *(long *)(param_1 + 0x10);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        if (lVar5 != 0) {
          Unity_Collections_NativeArray<byte>__Dispose
                    (lVar5,iVar1,local_50._0_8_,local_50._8_8_,*(undefined8 *)PTR_DAT_0acf19a0);
          return;
        }
        goto LAB_0a426c50;
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar6 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x48),&local_34);
      uVar8 = *(undefined8 *)PTR_DAT_0acf19b8;
      goto WebSocketSharp_Net_HttpConnection__Close;
    }
  }
  puVar4 = PTR_DAT_0acf19b0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar6 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x48),&local_34);
  uVar8 = *(undefined8 *)puVar4;
WebSocketSharp_Net_HttpConnection__Close:
  uVar6 = FUN_08bc9f74(uVar8,uVar6,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c(*(long *)puVar3);
  }
  FUN_0a137afc(uVar6,0);
  return;
}


