/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$ToArray
ENTRY_POINT: 063a4b38
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__ToArray
               (long *param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  long *unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  do {
    lVar3 = *param_1;
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
    }
    lVar4 = *unaff_x25;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_063a4b9c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00(unaff_x25,lVar3,0);
LAB_063a4b9c:
    in_stack_00000000._4_4_ = (*(code *)*puVar1)(unaff_x25,unaff_w24,puVar1[1]);
    uStack0000000000000008 = param_3;
    uStack000000000000000c = param_4;
    lVar3 = thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28)
                               ,(long)&stack0x00000000 + 4);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0)) {
      uVar2 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar2,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    unaff_x22[(long)(int)unaff_w19 + 4] = lVar3;
    thunk_FUN_040ec700(unaff_x26 + (long)(int)unaff_w19 * 8,lVar3);
    unaff_w24 = unaff_w24 + 1;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_w24 == unaff_w23) {
                    /* catch() { ... } // from try @ 063a4d78 with catch @ 063a4c2c
                       catch() { ... } // from try @ 063a4db4 with catch @ 063a4c2c
                       catch() { ... } // from try @ 063a4df0 with catch @ 063a4c2c
                       catch() { ... } // from try @ 063a4e1c with catch @ 063a4c2c
                       catch() { ... } // from try @ 063a4e90 with catch @ 063a4c2c */
      return;
    }
    unaff_x25 = *(long **)(unaff_x21 + 0x10);
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    param_1 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  } while( true );
}


