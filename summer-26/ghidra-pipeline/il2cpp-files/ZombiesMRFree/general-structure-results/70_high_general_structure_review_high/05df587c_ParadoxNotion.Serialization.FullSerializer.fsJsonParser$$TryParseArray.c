/*
FUNCTION_NAME: ParadoxNotion.Serialization.FullSerializer.fsJsonParser$$TryParseArray
ENTRY_POINT: 05df587c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined8
ParadoxNotion_Serialization_FullSerializer_fsJsonParser__TryParseArray(ulong param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  
  while( true ) {
    uVar2 = FUN_05df2b48(param_1,param_2);
    unaff_w20 = unaff_w20 + 1;
    if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x05df58a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*unaff_x21 + 0x1d8))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x1e0));
      return uVar3;
    }
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar1 = *unaff_x22;
    }
    lVar4 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
    if (lVar4 == 0) break;
    if (*(int *)(lVar4 + 0x18) <= unaff_w20) {
      return 0;
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar4 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
      if (lVar4 == 0) break;
    }
    unaff_x21 = (long *)FUN_04430018(lVar4,unaff_w20,*unaff_x23);
    if (unaff_x21 == (long *)0x0) break;
    param_1 = (ulong)*(uint *)(unaff_x21 + 2);
    param_2 = unaff_x19 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


