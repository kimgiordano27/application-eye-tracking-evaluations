/*
FUNCTION_NAME: Unity.Netcode.BufferSerializerWriter$$SerializeNetworkSerializable<HalfVector4>
ENTRY_POINT: 03df5988
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_Netcode_BufferSerializerWriter__SerializeNetworkSerializable<HalfVector4>(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x24;
  long in_stack_00000028;
  
  plVar1 = (long *)thunk_FUN_037787d0();
  if (plVar1 == (long *)0x0) {
    FUN_0373b5b8();
  }
  else {
    lVar2 = thunk_FUN_037784fc(**(undefined8 **)(unaff_x20 + 0x38));
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_037787d0(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
      uVar4 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar4,0);
    }
    if (*(uint *)(plVar1 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    plVar1[(long)(int)unaff_w19 + 4] = lVar2;
    thunk_FUN_037aeb94(plVar1 + (long)(int)unaff_w19 + 4,lVar2);
  }
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000028) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


