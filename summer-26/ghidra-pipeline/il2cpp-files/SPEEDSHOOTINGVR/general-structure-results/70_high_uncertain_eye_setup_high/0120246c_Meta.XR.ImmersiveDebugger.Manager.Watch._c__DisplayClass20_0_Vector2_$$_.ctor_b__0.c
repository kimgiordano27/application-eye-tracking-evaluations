/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector2>$$<.ctor>b__0
ENTRY_POINT: 0120246c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector2>__<_ctor>b__0
               (long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
                    /* try { // try from 01202470 to 01302477 has its CatchHandler @ 01202b5c */
                    /* try { // try from 01202478 to 0130248b has its CatchHandler @ 01202b58 */
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234c848);
                    /* try { // try from 01202494 to 01302497 has its CatchHandler @ 01202b54 */
    FUN_00fdc2e4(PTR_DAT_0234bc58);
                    /* try { // try from 012024a0 to 013024eb has its CatchHandler @ 01202bcc */
    FUN_00fdc2e4(PTR_DAT_0234c850);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_0103c2a0(param_2);
    }
  }
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    plVar1 = (long *)thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234c848);
    FUN_01dc8fa4(plVar1,0);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_01dc37f8(plVar1,0x28,0);
    if (0 < (int)*(ulong *)(param_1 + 0x18)) {
      uVar4 = 0;
      uVar3 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
      do {
        if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        uVar2 = FUN_01fb5e84(*(undefined8 *)(param_1 + 0x20 + uVar4 * 8),0);
        FUN_01dc3848(plVar1,uVar2,0);
        uVar3 = (ulong)*(uint *)(param_1 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(param_1 + 0x18));
    }
    FUN_01dc37f8(plVar1,0x29,0);
    uVar2 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar2 = FUN_01d5e86c(uVar2,0);
    uVar2 = FUN_01fb5e84(uVar2,0);
    FUN_01dc3848(plVar1,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x012025a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    return;
  }
  uVar2 = **(undefined8 **)(param_2 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar2 = FUN_01d5e86c(uVar2,0);
  uVar2 = FUN_01fb5e84(uVar2,0);
  FUN_01c45a74(*(undefined8 *)PTR_DAT_0234c850,uVar2,0);
  return;
}


