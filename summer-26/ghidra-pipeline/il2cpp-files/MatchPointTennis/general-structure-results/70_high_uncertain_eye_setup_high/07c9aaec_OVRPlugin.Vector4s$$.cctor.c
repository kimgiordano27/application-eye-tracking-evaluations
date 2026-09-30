/*
FUNCTION_NAME: OVRPlugin.Vector4s$$.cctor
ENTRY_POINT: 07c9aaec
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector4s___cctor(undefined1 param_1 [16])

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  ulong uVar5;
  undefined8 uVar6;
  ulong in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  ulong uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  uStack0000000000000034 = param_1._8_8_;
  uVar6 = param_1._0_8_;
  while( true ) {
    uVar3 = uStack0000000000000008;
    uStack0000000000000030 = (undefined4)((ulong)uVar6 >> 0x20);
    uStack0000000000000028 = uStack0000000000000008;
    uStack000000000000002c = uStack000000000000000c;
    uStack0000000000000020 = in_stack_00000000;
    lVar4 = *(long *)(unaff_x19 + 0x38);
    if (lVar4 == 0) break;
    if ((*(uint *)(unaff_x27 + 0x18) <= (uint)unaff_x26) || (*(uint *)(lVar4 + 0x18) <= unaff_x22))
    {
LAB_07c9ab64:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    FUN_07c05f20(unaff_x27 + unaff_x26 * unaff_x25 + 0x20,&stack0x00000020,lVar4 + unaff_x24,0);
    do {
      unaff_x21 = unaff_x21 + 4;
      unaff_x22 = unaff_x22 + 1;
      unaff_x24 = unaff_x24 + 0x1c;
      if (unaff_x21 == 0x68) {
        return;
      }
      lVar4 = *unaff_x23;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar4 = *unaff_x23;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
      if (lVar4 == 0) goto LAB_07c9ab60;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x22) goto LAB_07c9ab64;
      uVar1 = *(uint *)(lVar4 + unaff_x21 + 0x20);
      unaff_x26 = (ulong)uVar1;
    } while ((int)uVar1 < 0);
    if ((*(long *)(unaff_x20 + 0xc0) == 0) ||
       (lVar4 = *(long *)(*(long *)(unaff_x20 + 0xc0) + 0x38), lVar4 == 0)) break;
    if (((uint)*(ulong *)(lVar4 + 0x18) <= uVar1) ||
       ((*(ulong *)(lVar4 + 0x18) & 0xffffffff) <= unaff_x22)) goto LAB_07c9ab64;
    OVRAnchor_TrackerConfiguration__Equals(lVar4 + unaff_x26 * unaff_x25 + 0x20,lVar4 + unaff_x24,0)
    ;
    if (((unaff_x19 == 0) || (unaff_x27 = *(long *)(unaff_x19 + 0x38), unaff_x27 == 0)) ||
       (lVar4 = *(long *)(unaff_x19 + 0x48), lVar4 == 0)) break;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x22) goto LAB_07c9ab64;
    lVar4 = lVar4 + unaff_x21 * 4;
    uVar5 = in_stack_00000000 & 0xffffffff;
    uVar2 = in_stack_00000000._4_4_;
    in_stack_00000000 = 0;
    uStack0000000000000008 = 0;
    uStack000000000000000c = 0;
    FUN_09537b20(uVar5,uVar2,uVar3,*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),
                 *(undefined4 *)(lVar4 + 0x28),*(undefined4 *)(lVar4 + 0x2c));
    uStack0000000000000034 = 0;
    uVar6 = 0;
  }
LAB_07c9ab60:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


