/*
FUNCTION_NAME: OVRPlugin$$set_cpuLevel
ENTRY_POINT: 05d79fd0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__set_cpuLevel(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  ulong uVar6;
  ulong in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  while ((uVar3 = in_stack_00000008, param_1 != 0 && (lVar4 = *(long *)(param_1 + 0x38), lVar4 != 0)
         )) {
    if (((uint)*(ulong *)(lVar4 + 0x18) <= (uint)unaff_x26) ||
       ((*(ulong *)(lVar4 + 0x18) & 0xffffffff) <= unaff_x22)) {
LAB_05d7a0d4:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    FUN_05cede94(lVar4 + unaff_x26 * unaff_x25 + 0x20,lVar4 + unaff_x24,0);
    if (((unaff_x19 == 0) || (lVar4 = *(long *)(unaff_x19 + 0x38), lVar4 == 0)) ||
       (lVar5 = *(long *)(unaff_x19 + 0x48), lVar5 == 0)) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x22) goto LAB_05d7a0d4;
    lVar5 = lVar5 + unaff_x21 * 4;
    uVar6 = in_stack_00000000 & 0xffffffff;
    uVar2 = in_stack_00000000._4_4_;
    in_stack_00000000 = 0;
    in_stack_00000008 = 0;
    FUN_06bf2b34(uVar6,uVar2,uVar3,*(undefined4 *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x24),
                 *(undefined4 *)(lVar5 + 0x28),*(undefined4 *)(lVar5 + 0x2c));
    uStack0000000000000034 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000028 = 0;
    uStack000000000000002c = 0;
    in_stack_00000020 = 0;
    lVar5 = *(long *)(unaff_x19 + 0x38);
    if (lVar5 == 0) break;
    if ((*(uint *)(lVar4 + 0x18) <= (uint)unaff_x26) || (*(uint *)(lVar5 + 0x18) <= unaff_x22))
    goto LAB_05d7a0d4;
    FUN_05cedf04(lVar4 + unaff_x26 * unaff_x25 + 0x20,&stack0x00000020,lVar5 + unaff_x24,0);
    do {
      unaff_x21 = unaff_x21 + 4;
      unaff_x22 = unaff_x22 + 1;
      unaff_x24 = unaff_x24 + 0x1c;
      if (unaff_x21 == 0x68) {
        return;
      }
      lVar4 = *unaff_x23;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar4 = *unaff_x23;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
      if (lVar4 == 0) goto OVRPlugin__get_vsyncCount;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x22) goto LAB_05d7a0d4;
      uVar1 = *(uint *)(lVar4 + unaff_x21 + 0x20);
      unaff_x26 = (ulong)uVar1;
    } while ((int)uVar1 < 0);
    param_1 = *(long *)(unaff_x20 + 0xc0);
  }
OVRPlugin__get_vsyncCount:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


