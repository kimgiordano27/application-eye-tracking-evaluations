/*
FUNCTION_NAME: FUN_038a6dd0
ENTRY_POINT: 038a6dd0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_12;telemetry_or_network_hits_2
*/


void FUN_038a6dd0(long *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar5 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<Collider,_IXRInteractable>_get_Current__;
  puVar4 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<Collider,_IXRInteractable>_MoveNext__;
  puVar3 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<Collider,_IXRInteractable>_Dispose__;
  puVar2 = Method_System_Collections_Generic_Dictionary<string,_TypeSpec>__ctor__;
  puVar1 = PTR_DAT_03cd79f8;
  if ((DAT_04138347 & 1) == 0) {
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary_Enumerator<Collider,_IXRInteractable>_MoveNext__
                );
    FUN_01ab69ac(
                Method_Unity_Collections_NativeArray_Enumerator<SmoothRigidBodiesGraphicalMotion_RigidBodySmoothingWorldIndex>_Dispose__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_List_Enumerator<StylePropertyAnimationSystem_Values>_get_Current__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary_Enumerator<Collider,_IXRInteractable>_Dispose__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Collider,_IXRInteractable>_Dispose__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_List_Enumerator<SVGDocument_PostponedClip>_Dispose__
                );
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<string,_TypeSpec>__ctor__);
    FUN_01ab69ac(PTR_DAT_03cd79f8);
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary_Enumerator<Collider,_IXRInteractable>_get_Current__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Collider,_IXRInteractable>_MoveNext__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Collider,_IXRInteractable>_get_Current__
                );
    DAT_04138347 = 1;
  }
  puVar6 = 
  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Collider,_IXRInteractable>_MoveNext__
  ;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  FUN_038a53fc(param_1);
  (**(code **)(*param_1 + 0x228))(param_1,param_2,*(undefined8 *)(*param_1 + 0x230));
  (**(code **)(*param_1 + 0x408))(param_1,param_3,*(undefined8 *)(*param_1 + 0x410));
  (**(code **)(*param_1 + 0x3b8))(param_1,param_4,*(undefined8 *)(*param_1 + 0x3c0));
  uVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
  FUN_038a5220();
  (**(code **)(*param_1 + 0x358))(param_1,uVar7,*(undefined8 *)(*param_1 + 0x360));
  uVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
  FUN_038762a4(uVar7,0);
  (**(code **)(*param_1 + 0x378))(param_1,uVar7,*(undefined8 *)(*param_1 + 0x380));
  param_1[0xc] = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0xc,0);
  lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar5);
  FUN_03802c50(lVar8,param_1,0);
  param_1[0x16] = lVar8;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x16,lVar8);
  lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_038d9834(lVar8,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar7 = FUN_037fe934(*(undefined8 *)puVar6,0);
  puVar1 = 
  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Collider,_IXRInteractable>_get_Current__
  ;
  if (lVar8 != 0) {
    FUN_038d9508(lVar8,uVar7,0);
    FUN_038d5b78(lVar8,*(undefined8 *)puVar1,0);
    FUN_038d94c8(lVar8,param_3 != 1,0);
    FUN_038e0480(lVar8,0x80000000,0);
    param_1[0x15] = lVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x15,lVar8);
    lVar8 = (**(code **)(*param_1 + 0x398))(param_1,*(undefined8 *)(*param_1 + 0x3a0));
    puVar4 = 
    Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Collider,_IXRInteractable>_Dispose__
    ;
    puVar3 = 
    Method_System_Collections_Generic_List_Enumerator<StylePropertyAnimationSystem_Values>_get_Current__
    ;
    puVar2 = 
    Method_Unity_Collections_NativeArray_Enumerator<SmoothRigidBodiesGraphicalMotion_RigidBodySmoothingWorldIndex>_Dispose__
    ;
    puVar1 = Method_System_Collections_Generic_List_Enumerator<SVGDocument_PostponedClip>_Dispose__;
    if (lVar8 != 0) {
      FUN_038da8dc(lVar8,param_1,0);
      uVar7 = (**(code **)(*param_1 + 0x398))(param_1,*(undefined8 *)(*param_1 + 0x3a0));
      uVar9 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
      FUN_037fca70(uVar9,uVar7,0,0);
      uVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
      FUN_03898fa0(uVar7,uVar9,0);
      (**(code **)(*param_1 + 0x288))(param_1,uVar7,*(undefined8 *)(*param_1 + 0x290));
      uVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
      FUN_038ebadc(uVar7,0);
      (**(code **)(*param_1 + 1000))(param_1,uVar7,*(undefined8 *)(*param_1 + 0x3f0));
      FUN_038a6a74(param_1);
      uVar7 = (**(code **)(*param_1 + 0x398))(param_1,*(undefined8 *)(*param_1 + 0x3a0));
      lVar8 = param_1[0x13];
      if (lVar8 != 0) {
        (**(code **)(lVar8 + 0x18))
                  (*(undefined8 *)(lVar8 + 0x40),uVar7,0,*(undefined8 *)(lVar8 + 0x28));
      }
      uVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
      FUN_037cbd48(uVar7,0);
                    /* WARNING: Could not recover jumptable at 0x038a718c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x478))(param_1,uVar7,*(undefined8 *)(*param_1 + 0x480));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


