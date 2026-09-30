/*
FUNCTION_NAME: FUN_05f969a8
ENTRY_POINT: 05f969a8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_05f969a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_158 [112];
  undefined1 local_e8 [16];
  long local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [112];
  
  puVar1 = Method_RootMotion_FinalIK_FBBIKHeadEffector_OnPostUpdate__;
  if ((DAT_06b84513 & 1) == 0) {
    FUN_02d6084c(Method_RootMotion_Demos_FXCollisionBlood_OnCollisionImpulse__);
    FUN_02d6084c(Method_System_Xml_Schema_FacetsChecker_ConstructRestriction__);
    FUN_02d6084c(Method_RootMotion_FinalIK_FBBIKHeadEffector_OnPostUpdate__);
    FUN_02d6084c(PTR_DAT_0675e660);
    FUN_02d6084c(Method_System_Reflection_Emit_FieldBuilder_SetValue__);
    FUN_02d6084c(Method_RootMotion_FinalIK_FBBIKHeadEffector_OnStoreDefaultLocalState__);
    FUN_02d6084c(Method_System_Reflection_FieldInfo_GetFieldFromHandle__);
    FUN_02d6084c(Method_System_Reflection_FieldInfo_GetFieldFromHandle__);
    DAT_06b84513 = 1;
  }
  lVar2 = *(long *)puVar1;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    uVar3 = FUN_049075e8(**(long **)(lVar2 + 0xb8),param_1,param_2,&local_d8,
                         *(undefined8 *)Method_System_Reflection_Emit_FieldBuilder_SetValue__);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_060223e8(*(undefined8 *)Method_System_Reflection_FieldInfo_GetFieldFromHandle__,0);
      return;
    }
    FUN_05e27e88(auStack_c0,0);
    memcpy(auStack_158,auStack_c0,0x70);
    uVar3 = local_d0;
    uVar5 = *(undefined8 *)Method_RootMotion_FinalIK_FBBIKHeadEffector_OnStoreDefaultLocalState__;
    memcpy(auStack_c0,auStack_158,0x70);
    local_e8 = FUN_034929a0(auStack_c0,param_3,param_4,param_5,uVar3 & 0xffffffff,uVar5);
    lVar2 = local_d8;
    if (local_d8 != 0) {
      FUN_03df88f0(local_d8,local_e8,
                   *(undefined8 *)Method_System_Xml_Schema_FacetsChecker_ConstructRestriction__);
      FUN_03df8b7c(lVar2,*(undefined8 *)
                          Method_RootMotion_Demos_FXCollisionBlood_OnCollisionImpulse__);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar4 = *(long *)puVar1;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar4 != 0) {
        FUN_03375db0(lVar4,lVar2,
                     *(undefined8 *)Method_System_Reflection_FieldInfo_GetFieldFromHandle__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


