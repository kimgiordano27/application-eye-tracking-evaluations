/*
FUNCTION_NAME: FUN_0308f19c
ENTRY_POINT: 0308f19c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_1;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


void FUN_0308f19c(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_40 [16];
  
  if ((DAT_0412b528 & 1) == 0) {
    FUN_01ab69ac(
                Unity_Entities_Baking_BakeDependencies_UpdateDependencies_000001D8_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(Unity_Entities_BlobAssetOwner___codegen__Release_00000057_PostfixBurstDelegate_var)
    ;
    DAT_0412b528 = 1;
  }
  uVar1 = FUN_03096f08(param_2);
  if ((uVar1 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    if (((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) || (param_3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_40 = FUN_01f7f7e8(param_3,*(undefined4 *)(*(long *)(param_2 + 0x18) + 0x20),
                            *(undefined8 *)
                             Unity_Entities_Baking_BakeDependencies_UpdateDependencies_000001D8_PostfixBurstDelegate_var
                           );
    if (local_40._8_4_ != param_4) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
      uVar3 = thunk_FUN_01a89e68();
      uVar2 = thunk_FUN_01a6ca08(System_Xml_Serialization_XmlSchemaProviderAttribute_var);
      FUN_027a794c(uVar3,uVar2,0);
      uVar2 = thunk_FUN_01a6ca08(
                                Unity_Physics_Systems_BroadphaseSystem___codegen__OnDestroy_00000B7D_PostfixBurstDelegate_var
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar3,uVar2);
    }
    *param_1 = 0;
    param_1[1] = 0;
    uVar3 = *(undefined8 *)
             Unity_Entities_BlobAssetOwner___codegen__Release_00000057_PostfixBurstDelegate_var;
    param_1[2] = 0;
    FUN_02241190(param_1,local_40,uVar3);
  }
  return;
}


