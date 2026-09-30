/*
FUNCTION_NAME: Unity.Netcode.BufferSerializerWriter$$SerializeValue<HalfVector3>
ENTRY_POINT: 03df5d40
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_Netcode_BufferSerializerWriter__SerializeValue<HalfVector3>
               (long param_1,undefined8 param_2,uint param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long unaff_x24;
  long lStack0000000000000038;
  
  lStack0000000000000038 = param_1;
  if (*(long *)(param_5 + 0x38) == 0) {
    FUN_0373b518(PTR_DAT_07d882c0);
    if (*(long *)(unaff_x20 + 0x38) == 0) {
      FUN_037756d4();
    }
  }
  uVar1 = FUN_0625b654(param_2,0);
  if (param_3 < uVar1) {
    plVar2 = (long *)thunk_FUN_037787d0(param_2,*(undefined8 *)PTR_DAT_07d882c0);
    if (plVar2 == (long *)0x0) {
      FUN_0373b5b8(param_2,param_3,param_4);
    }
    else {
      lVar3 = thunk_FUN_037784fc(**(undefined8 **)(unaff_x20 + 0x38));
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_037787d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar6,0);
      }
      if (*(uint *)(plVar2 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      plVar2[(long)(int)param_3 + 4] = lVar3;
      thunk_FUN_037aeb94(plVar2 + (long)(int)param_3 + 4,lVar3);
    }
    if (*(long *)(unaff_x24 + 0x28) == lStack0000000000000038) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  thunk_FUN_037a15ac(PTR_DAT_07d8eed0);
  uVar6 = thunk_FUN_037788cc();
  uVar5 = thunk_FUN_037a15ac(PTR_DAT_07d868a0);
  FUN_061a99e4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar6);
}


