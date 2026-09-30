/*
FUNCTION_NAME: FUN_03716d40
ENTRY_POINT: 03716d40
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_03716d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_03cbf708;
  if ((DAT_04135283 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbf708);
    FUN_01ab69ac(PTR_DAT_03d0e0b0);
    FUN_01ab69ac(Method_Unity_Entities_ComponentLookup<PhysicsMass>_set_Item__);
    FUN_01ab69ac(Method_Unity_Entities_ComponentLookup<PostTransformMatrix>_DidChange__);
    DAT_04135283 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar2 = FUN_03712620();
  puVar1 = PTR_DAT_03d0e0b0;
  if (param_9 != 0) {
    uVar3 = FUN_03716250(param_9);
    uVar3 = FUN_025b1328(uVar3,*(undefined8 *)puVar1,0);
    puVar1 = Method_Unity_Entities_ComponentLookup<PostTransformMatrix>_DidChange__;
    if (lVar2 != 0) {
      uVar3 = FUN_037162b4(lVar2,uVar3);
      lVar2 = FUN_03712620();
      uVar4 = FUN_03716250(param_9);
      uVar4 = FUN_025b1328(uVar4,*(undefined8 *)puVar1,0);
      puVar1 = Method_Unity_Entities_ComponentLookup<PhysicsMass>_set_Item__;
      if (lVar2 != 0) {
        uVar4 = FUN_037162b4(lVar2,uVar4);
        lVar2 = FUN_03712620();
        uVar5 = FUN_03716250(param_9);
        uVar5 = FUN_025b1328(uVar5,*(undefined8 *)puVar1,0);
        if (lVar2 != 0) {
          uVar5 = FUN_037162b4(lVar2,uVar5);
          FUN_03716524(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,uVar3
                       ,uVar4,uVar5,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


