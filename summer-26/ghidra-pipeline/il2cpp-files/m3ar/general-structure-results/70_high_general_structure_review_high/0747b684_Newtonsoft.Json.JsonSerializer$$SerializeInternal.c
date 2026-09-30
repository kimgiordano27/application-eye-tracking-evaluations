/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$SerializeInternal
ENTRY_POINT: 0747b684
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_JsonSerializer__SerializeInternal(long param_1,long param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_24;
  
  if ((DAT_09546aa8 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f656c8);
    FUN_0403162c(PTR_DAT_08fa11b0);
    DAT_09546aa8 = 1;
  }
  if (param_2 != 0) {
    if (0 < *(int *)(param_2 + 0x10)) {
      iVar2 = 0;
      do {
        uVar1 = FUN_07363804(param_2,iVar2,0);
        if (0x7f < uVar1) {
          param_2 = FUN_0747b854(param_1,param_2,param_3);
          if (param_2 == 0) goto LAB_0747b7e0;
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_2 + 0x10));
    }
    uVar3 = FUN_07367cf4(param_2,*(undefined8 *)PTR_DAT_08fa11b0,5,0);
    if ((uVar3 & 1) == 0) {
      return param_2;
    }
    if (*(int *)(*(long *)PTR_DAT_08f656c8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar4 = FUN_07475db8(0);
    lVar5 = FUN_0736dc10(param_2,uVar4,0);
    if (lVar5 != 0) {
      uVar4 = FUN_0736da40(lVar5,4,0);
      if (*(long *)(param_1 + 0x18) != 0) {
        lVar6 = FUN_0747c25c(*(long *)(param_1 + 0x18),uVar4,param_3);
        uVar4 = FUN_0747b450(param_1,lVar6,param_3);
        iVar2 = FUN_07366684(lVar5,uVar4,5,0);
        if (iVar2 == 0) {
          return lVar6;
        }
        local_24 = param_3;
        uVar4 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x48),&local_24);
        uVar7 = thunk_FUN_04097b88(PTR_DAT_08fa11d0);
        uVar4 = FUN_0735fe18(uVar7,uVar4,0);
        thunk_FUN_04097b88(PTR_DAT_08f66298);
        uVar7 = thunk_FUN_0406deb8();
        FUN_0744a62c(uVar7,uVar4,0);
        uVar4 = thunk_FUN_04097b88(PTR_DAT_08fa11d8);
                    /* WARNING: Subroutine does not return */
        FUN_04031750(uVar7,uVar4);
      }
    }
  }
LAB_0747b7e0:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


