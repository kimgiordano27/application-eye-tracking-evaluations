/*
FUNCTION_NAME: FUN_05e59cd8
ENTRY_POINT: 05e59cd8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_05e59cd8(long param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_066dc613 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_123__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_124__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_125__);
    DAT_066dc613 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_04d9e084(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
    }
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) {
      lVar6 = *(long *)(param_1 + 0x28);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 != 0) {
        iVar1 = *(int *)(lVar6 + 0x1c);
        *(long *)(param_1 + 0x18) = lVar5;
        *(undefined4 *)(lVar6 + 0x18) = 0;
        *(int *)(lVar6 + 0x1c) = iVar1 + 1;
        thunk_FUN_02bb0e9c();
        FUN_05e59e98(param_1,param_2);
        if (DAT_066dc62c == '\0') {
          FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_126__);
          DAT_066dc62c = '\x01';
        }
        if (0 < *(int *)(param_1 + 0x38)) {
          lVar5 = *(long *)(param_1 + 0x18);
          if (lVar5 == 0) goto LAB_05e59e94;
          lVar6 = *(long *)(lVar5 + 0x10);
          uVar4 = *(undefined8 *)(param_1 + 0x38);
          lVar7 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_126__;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar6 == 0) goto LAB_05e59e94;
          uVar3 = *(uint *)(lVar5 + 0x18);
          if (uVar3 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar6 + (long)(int)uVar3 * 8 + 0x20) = uVar4;
          }
          else {
            FUN_038ac0c0(lVar5,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          *(undefined8 *)(param_1 + 0x38) = 0;
        }
        cVar2 = *(char *)(param_1 + 0x48);
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c45700(cVar2 == '\0',0);
        if (*(long *)(param_1 + 0x40) != 0) {
          FUN_05c45700(*(int *)(*(long *)(param_1 + 0x40) + 0x18) == 0,0);
          FUN_05c45700(~*(uint *)(param_1 + 0x10) >> 0x1f,0);
          return;
        }
      }
    }
  }
LAB_05e59e94:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


