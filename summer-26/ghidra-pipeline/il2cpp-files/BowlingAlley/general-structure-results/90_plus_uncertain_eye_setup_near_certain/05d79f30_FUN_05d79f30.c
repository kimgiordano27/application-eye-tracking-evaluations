/*
FUNCTION_NAME: FUN_05d79f30
ENTRY_POINT: 05d79f30
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05d79f30(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  ulong local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  if ((DAT_076d87a9 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072ad8c8);
    DAT_076d87a9 = 1;
  }
  puVar2 = PTR_DAT_072ad8c8;
  lVar7 = 0;
  uVar8 = 0;
  lVar9 = 0x20;
  local_70 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  do {
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar5 == 0) goto OVRPlugin__get_vsyncCount;
    if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_05d7a0d4;
    uVar1 = *(uint *)(lVar5 + lVar7 + 0x20);
    if (-1 < (int)uVar1) {
      if ((*(long *)(param_1 + 0xc0) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 0x38), lVar5 == 0)) {
OVRPlugin__get_vsyncCount:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (((uint)*(ulong *)(lVar5 + 0x18) <= uVar1) ||
         ((*(ulong *)(lVar5 + 0x18) & 0xffffffff) <= uVar8)) {
LAB_05d7a0d4:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      FUN_05cede94(&local_90,lVar5 + (ulong)uVar1 * 0x1c + 0x20,lVar5 + lVar9,0);
      uVar4 = uStack_88;
      if (((param_2 == 0) || (lVar5 = *(long *)(param_2 + 0x38), lVar5 == 0)) ||
         (lVar6 = *(long *)(param_2 + 0x48), lVar6 == 0)) goto OVRPlugin__get_vsyncCount;
      if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_05d7a0d4;
      lVar6 = lVar6 + lVar7 * 4;
      uVar10 = local_90 & 0xffffffff;
      uVar3 = local_90._4_4_;
      local_90 = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      FUN_06bf2b34(uVar10,uVar3,uVar4,*(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x24),
                   *(undefined4 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x2c),&local_90,0);
      uStack_5c = uStack_7c;
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      uStack_68 = uStack_88;
      uStack_64 = uStack_84;
      local_70 = local_90;
      lVar6 = *(long *)(param_2 + 0x38);
      if (lVar6 == 0) goto OVRPlugin__get_vsyncCount;
      if ((*(uint *)(lVar5 + 0x18) <= uVar1) || (*(uint *)(lVar6 + 0x18) <= uVar8))
      goto LAB_05d7a0d4;
      FUN_05cedf04(lVar5 + (ulong)uVar1 * 0x1c + 0x20,&local_70,lVar6 + lVar9,0);
    }
    lVar7 = lVar7 + 4;
    uVar8 = uVar8 + 1;
    lVar9 = lVar9 + 0x1c;
    if (lVar7 == 0x68) {
      return;
    }
  } while( true );
}


