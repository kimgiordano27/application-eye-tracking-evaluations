/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$DeserializeMember<Vector3>
ENTRY_POINT: 03ada050
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsBaseConverter__DeserializeMember<Vector3>(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  void *__src;
  long in_x9;
  void *unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  long *unaff_x23;
  long lVar3;
  undefined8 uVar4;
  long unaff_x26;
  long unaff_x29;
  
  FUN_056f1adc();
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_06d37b60 + 0x130);
  if ((bVar1 <= *(byte *)(*unaff_x23 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06d37b60))
  {
    lVar3 = unaff_x23[7];
    uVar4 = **(undefined8 **)(unaff_x20 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_06d01eb0 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar4 = FUN_056109c0(uVar4,0);
    if (*(int *)(*(long *)PTR_DAT_06d06338 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)PTR_DAT_06d06338);
    }
    uVar2 = FUN_055b5920(0);
    if (*(int *)(*(long *)PTR_DAT_06d02200 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02200);
    }
    uVar4 = FUN_05567b5c(lVar3,uVar4,uVar2,0);
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02eea768(lVar3);
    }
    __src = (void *)FUN_02f07fb8(uVar4,lVar3,param_1 - in_x9);
    memcpy(unaff_x19,__src,unaff_x21);
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f08440();
}


