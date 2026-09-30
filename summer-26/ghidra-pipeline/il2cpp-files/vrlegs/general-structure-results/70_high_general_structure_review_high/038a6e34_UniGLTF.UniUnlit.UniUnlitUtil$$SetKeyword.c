/*
FUNCTION_NAME: UniGLTF.UniUnlit.UniUnlitUtil$$SetKeyword
ENTRY_POINT: 038a6e34
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_8;telemetry_or_network_hits_2
*/


void UniGLTF_UniUnlit_UniUnlitUtil__SetKeyword(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x19;
  int unaff_w20;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  FUN_01ab69ac();
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
  *(undefined1 *)(unaff_x26 + 0x347) = 1;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Collider,_IXRInteractable>_MoveNext__
  ;
  unaff_x19[0x19] = 0;
  *(undefined4 *)(unaff_x19 + 0x1a) = 0;
  *(undefined1 *)(unaff_x19 + 0x2b) = 0;
  FUN_038a53fc();
  (**(code **)(*unaff_x19 + 0x228))();
  (**(code **)(*unaff_x19 + 0x408))();
  (**(code **)(*unaff_x19 + 0x3b8))();
  thunk_FUN_01a89e68(*unaff_x28);
  FUN_038a5220();
  (**(code **)(*unaff_x19 + 0x358))();
  uVar5 = thunk_FUN_01a89e68(*unaff_x27);
  FUN_038762a4(uVar5,0);
  (**(code **)(*unaff_x19 + 0x378))();
  unaff_x19[0xc] = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xc,0);
  lVar6 = thunk_FUN_01a89e68(*unaff_x25);
  FUN_03802c50();
  unaff_x19[0x16] = lVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x16,lVar6);
  lVar6 = thunk_FUN_01a89e68(*unaff_x24);
  FUN_038d9834(lVar6,0);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_037fe934(*(undefined8 *)puVar1,0);
  puVar1 = 
  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Collider,_IXRInteractable>_get_Current__
  ;
  if (lVar6 != 0) {
    FUN_038d9508(lVar6,uVar5,0);
    FUN_038d5b78(lVar6,*(undefined8 *)puVar1,0);
    FUN_038d94c8(lVar6,unaff_w20 != 1,0);
    FUN_038e0480(lVar6,0x80000000,0);
    unaff_x19[0x15] = lVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x15,lVar6);
    lVar6 = (**(code **)(*unaff_x19 + 0x398))();
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
    if (lVar6 != 0) {
      FUN_038da8dc();
      uVar5 = (**(code **)(*unaff_x19 + 0x398))();
      uVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
      FUN_037fca70(uVar7,uVar5,0,0);
      uVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
      FUN_03898fa0(uVar5,uVar7,0);
      (**(code **)(*unaff_x19 + 0x288))();
      uVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
      FUN_038ebadc(uVar5,0);
      (**(code **)(*unaff_x19 + 1000))();
      FUN_038a6a74();
      uVar5 = (**(code **)(*unaff_x19 + 0x398))();
      lVar6 = unaff_x19[0x13];
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x18))
                  (*(undefined8 *)(lVar6 + 0x40),uVar5,0,*(undefined8 *)(lVar6 + 0x28));
      }
      uVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
      FUN_037cbd48(uVar5,0);
                    /* WARNING: Could not recover jumptable at 0x038a718c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 0x478))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


