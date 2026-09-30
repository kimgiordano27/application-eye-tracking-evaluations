/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__657_25
ENTRY_POINT: 076ebf98
PROGRAM: m3ar-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin_<>c__<_cctor>b__657_25(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *puVar4;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  FUN_0403162c(*(undefined8 *)(param_1 + 0x5f0));
  FUN_0403162c(PTR_DAT_08fabd18);
  FUN_0403162c(PTR_DAT_08f70528);
  *(undefined1 *)(unaff_x20 + 0x318) = 1;
  uVar1 = FUN_076ebb34();
  if ((uVar1 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_08f70528 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_08596c00(&stack0x00000040,0);
    unaff_x19[1] = CONCAT44(uStack000000000000004c,uStack0000000000000048);
    *unaff_x19 = in_stack_00000040;
    *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000054;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    return (ulong)(uVar1 & 1);
  }
  lVar2 = System_Collections_Generic_Dictionary<int,_Pose>__Add();
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x58) != 0)) {
    puVar4 = *(undefined8 **)(*(long *)(lVar2 + 0x58) + 0x18);
    lVar2 = System_Collections_Generic_Dictionary<int,_Pose>__Add();
    if (lVar2 != 0) {
      if (puVar4 != (undefined8 *)0x0) {
        uVar3 = FUN_0892aa34(*puVar4);
        return uVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


