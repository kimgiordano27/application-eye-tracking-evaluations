/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_added_t$$Dispose
ENTRY_POINT: 085e5d78
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_vx_evt_session_added_t__Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR_DAT_09332068;
  if ((DAT_0989df3b & 1) == 0) {
    FUN_04077588(PTR_DAT_09332068);
    FUN_04077588(PTR_DAT_093320c0);
    DAT_0989df3b = 1;
  }
  lVar3 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
  auVar6 = FUN_076bca34(lVar3,0);
  puVar1 = PTR_DAT_093320c0;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)PTR_DAT_093320c0;
    thunk_FUN_040ec700();
    *(undefined8 *)(lVar3 + 0x18) = param_2;
    uVar4 = thunk_FUN_040ec700((undefined8 *)(lVar3 + 0x18),param_2);
    if (param_3 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)(param_3 + 0x10) == '\0';
    }
    uVar5 = *(undefined8 *)puVar1;
    auVar6._8_8_ = uVar5;
    auVar6._0_8_ = uVar4;
    *(bool *)(lVar3 + 0x20) = bVar2;
    if (param_1 != 0) {
      FUN_085e5548(param_1,uVar5,lVar3,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830(auVar6._0_8_,auVar6._8_8_);
}


