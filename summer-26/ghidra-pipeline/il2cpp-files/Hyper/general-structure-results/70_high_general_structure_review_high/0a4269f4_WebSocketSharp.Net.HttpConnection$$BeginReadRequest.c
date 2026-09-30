/*
FUNCTION_NAME: WebSocketSharp.Net.HttpConnection$$BeginReadRequest
ENTRY_POINT: 0a4269f4
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void WebSocketSharp_Net_HttpConnection__BeginReadRequest(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack0000000000000000;
  ulong uStack0000000000000008;
  int iStack000000000000001c;
  
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
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar5 = *(long *)puVar4;
  }
  puVar3 = PTR_DAT_0ac0a4a0;
  iVar1 = param_2 + -1;
  iStack000000000000001c = iVar1;
  if (-1 < iVar1) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 == 0) {
LAB_0a426c50:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar5 = *(long *)puVar4;
    if (iVar1 < *(int *)(lVar8 + 0x18)) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      auVar9 = FUN_06ddcdf8(lVar8,iVar1,*(undefined8 *)PTR_DAT_0acf1998);
      uStack0000000000000000 = auVar9._0_8_;
      if (0 < auVar9._12_4_) {
        iVar2 = auVar9._12_4_ + -1;
        uStack0000000000000008 = CONCAT44(iVar2,auVar9._8_4_);
        if (iVar2 == 0) {
          if ((auVar9._8_8_ & 1) == 0) {
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_0a426c50;
            FUN_08732d1c(*(long *)(param_1 + 0x18),uStack0000000000000000,
                         *(undefined8 *)PTR_DAT_0acf1988);
          }
          uStack0000000000000000 = 0;
          thunk_FUN_049ee3d8();
          uStack0000000000000008 = uStack0000000000000008 & 0xffffffffffffff00;
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_0a426c50;
          FUN_0762e744(*(long *)(param_1 + 0x20),param_2,*(undefined8 *)PTR_DAT_0acf19a8);
        }
        lVar5 = *(long *)(param_1 + 0x10);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        if (lVar5 != 0) {
          Unity_Collections_NativeArray<byte>__Dispose
                    (lVar5,iVar1,uStack0000000000000000,uStack0000000000000008,
                     *(undefined8 *)PTR_DAT_0acf19a0);
          return;
        }
        goto LAB_0a426c50;
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar6 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x48),&stack0x0000001c);
      uVar7 = *(undefined8 *)PTR_DAT_0acf19b8;
      goto WebSocketSharp_Net_HttpConnection__Close;
    }
  }
  puVar4 = PTR_DAT_0acf19b0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar6 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x48),&stack0x0000001c);
  uVar7 = *(undefined8 *)puVar4;
WebSocketSharp_Net_HttpConnection__Close:
  uVar6 = FUN_08bc9f74(uVar7,uVar6,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c(*(long *)puVar3);
  }
  FUN_0a137afc(uVar6,0);
  return;
}


