/*
FUNCTION_NAME: FUN_05e5c058
ENTRY_POINT: 05e5c058
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05e5c058(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  if ((DAT_066dc61f & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_138__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_140__);
    DAT_066dc61f = 1;
  }
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__810_140__;
  lVar6 = *(long *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x110) == '\0') {
    if (lVar6 == 0) goto LAB_05e5c1b0;
    plVar7 = (long *)(lVar6 + 0x20);
  }
  else {
    if (lVar6 == 0) goto LAB_05e5c1b0;
    plVar7 = (long *)(lVar6 + 0x28);
  }
  lVar6 = *plVar7;
  if (lVar6 != 0) {
    iVar1 = *(int *)(param_1 + 0xe8);
    iVar2 = *(int *)(lVar6 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05c45700(iVar1 < iVar2 + -1,0);
    uVar5 = *(undefined8 *)puVar3;
    iVar1 = *(int *)(param_1 + 0xe8) + 1;
    *(int *)(param_1 + 0xe8) = iVar1;
    uVar4 = FUN_038abdcc(lVar6,iVar1,uVar5);
    puVar8 = (undefined8 *)(param_1 + 0xb8);
    *puVar8 = 0;
    thunk_FUN_02bb0e9c(puVar8,0);
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 != 0) {
      uVar9 = *(undefined8 *)(lVar6 + 0x108);
      uVar5 = FUN_05e7351c(lVar6,0);
      FUN_05e5c2f0(puVar8,uVar4 & 0xffffffff,uVar4 >> 0x20,uVar9,param_1 + 0xc0,param_1 + 0xd0,
                   param_1 + 0xe0,uVar5);
      lVar6 = *(long *)(param_1 + 0xb8);
      if (lVar6 != 0) {
        *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(lVar6 + 0x1c);
        if (*(long *)(param_1 + 0x18) != 0) {
          FUN_05e777a8(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),lVar6,0);
          *(undefined4 *)(param_1 + 0xec) = 0;
          *(undefined4 *)(param_1 + 0xf0) = 0;
          return;
        }
      }
    }
  }
LAB_05e5c1b0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


