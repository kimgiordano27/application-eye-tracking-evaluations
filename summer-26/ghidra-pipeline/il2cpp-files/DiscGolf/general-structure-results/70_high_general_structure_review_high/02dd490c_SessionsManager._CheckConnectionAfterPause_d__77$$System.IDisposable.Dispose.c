/*
FUNCTION_NAME: SessionsManager.<CheckConnectionAfterPause>d__77$$System.IDisposable.Dispose
ENTRY_POINT: 02dd490c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 SessionsManager_<CheckConnectionAfterPause>d__77__System_IDisposable_Dispose(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar3;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  
  FUN_02ddb390();
  lVar3 = *(long *)(unaff_x19 + 0x48);
  lVar1 = *(long *)(unaff_x19 + 0x50);
  FUN_02ddb5ec();
  if ((((in_stack_00000008 == lVar3) && (in_stack_00000010 == lVar1)) &&
      (in_stack_00000018 == lVar1)) &&
     ((in_stack_00000018 == in_stack_00000010 || (in_stack_00000020 == 0)))) {
    lVar3 = *(long *)(unaff_x19 + 0x78);
    if (lVar3 == 0) {
      *(undefined8 *)(unaff_x19 + 0x78) = 8;
      uVar2 = thunk_FUN_02e0bc54(0x40,0);
      *(undefined8 *)(unaff_x19 + 0x70) = uVar2;
    }
    else if (*(long *)(unaff_x19 + 0x68) - *(long *)(unaff_x19 + 0x40) == lVar3) {
      uVar2 = thunk_FUN_02e0bc54(lVar3 << 4,0);
      thunk_FUN_02e112fc(FUN_02ddbab0);
      thunk_FUN_02e0bc5c(*(undefined8 *)(unaff_x19 + 0x70));
      thunk_FUN_02e0bc0c(uVar2,*(long *)(unaff_x19 + 0x78) << 3);
      *(undefined8 *)(unaff_x19 + 0x70) = uVar2;
      *(long *)(unaff_x19 + 0x78) = lVar3 << 1;
    }
    lVar3 = *(long *)(unaff_x19 + 0x68) - *(long *)(unaff_x19 + 0x40);
    FUN_02ddbad0();
    FUN_02ddb83c();
    *(undefined8 *)(*(long *)(unaff_x19 + 0x70) + lVar3 * 8) = unaff_x20;
    thunk_FUN_02e0bc0c(*(long *)(unaff_x19 + 0x70) + lVar3 * 8);
  }
  else {
    unaff_x20 = *(undefined8 *)
                 (*(long *)(unaff_x19 + 0x70) + *(long *)(in_stack_00000020 + 0x18) * 8);
  }
  FUN_02dc0124(unaff_x19 + 0x80);
  return unaff_x20;
}


