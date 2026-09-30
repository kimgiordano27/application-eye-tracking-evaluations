/*
FUNCTION_NAME: FUN_0380f8d4
ENTRY_POINT: 0380f8d4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_0380f8d4(int *param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong local_38;
  
  if ((DAT_04137d34 & 1) == 0) {
    FUN_01ab69ac(
                Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<TypeSpec,_TypeInfo_StructInfo>_TryGetValue__
                );
    DAT_04137d34 = 1;
  }
  puVar1 = 
  Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var;
  if (*(long *)(param_1 + 4) != 0) {
    local_38 = CONCAT44(local_38._4_4_,0xfffffffe);
    FUN_01b5f01c(*(long *)(param_1 + 4),&local_38,
                 *(undefined8 *)
                  Unity_Physics_Systems_CreateJacobiansSystem___codegen__OnUpdate_00000B8D_PostfixBurstDelegate_var
                );
    iVar2 = *param_1;
    if (1 < iVar2) {
      iVar3 = 1;
      do {
        if (*(long *)(param_1 + 4) == 0) goto LAB_0380f9c4;
        local_38 = CONCAT44(local_38._4_4_,0xffffffff);
        FUN_01b5f01c(*(long *)(param_1 + 4),&local_38,*(undefined8 *)puVar1);
        iVar2 = *param_1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (*(long *)(param_1 + 2) != 0) {
      local_38 = param_2 & 0xffff | (param_3 & 0xffff) << 0x10 | (ulong)(iVar2 * 0x20 - 1) << 0x20;
      FUN_01b5f01c(*(long *)(param_1 + 2),&local_38,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<TypeSpec,_TypeInfo_StructInfo>_TryGetValue__
                  );
      return;
    }
  }
LAB_0380f9c4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


