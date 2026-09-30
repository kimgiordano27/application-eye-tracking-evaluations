/*
FUNCTION_NAME: FUN_010f6388
ENTRY_POINT: 010f6388
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_3;strong_file_logging_hits_3
*/


undefined8 FUN_010f6388(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar11 = *(long *)(param_3 + 0x38);
  if (lVar11 == 0) {
    thunk_FUN_00d48444(StringLiteral_8008);
    thunk_FUN_00d48444(PTR_DAT_033ee520);
    thunk_FUN_00d48444(StringLiteral_7128);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<PokeInteractable,_PokeInteractor_SurfaceHitCache_HitInfo>_ContainsKey__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
                      );
    thunk_FUN_00d48444(Method_System_String_Format__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorAdded__
                      );
    lVar11 = *(long *)(param_3 + 0x38);
    if (lVar11 == 0) {
      FUN_00d59478(param_3);
      lVar11 = *(long *)(param_3 + 0x38);
    }
  }
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  puVar10 = *(undefined8 **)(lVar11 + 8);
  local_78 = param_2;
  (*(code *)puVar10[2])(*puVar10,puVar10,0,&local_78,&local_68);
  uVar9 = local_68;
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
  ;
  lVar11 = *(long *)
            Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
  ;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar11 = *(long *)puVar1;
  }
  if (**(long **)(lVar11 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar11 = **(long **)(lVar11 + 0xb8) + 0x1d0;
  FUN_0125ad74(lVar11,*(undefined8 *)StringLiteral_8008);
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<PokeInteractable,_PokeInteractor_SurfaceHitCache_HitInfo>_ContainsKey__
  ;
  iVar5 = FUN_0125a588(lVar11,*(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<PokeInteractable,_PokeInteractor_SurfaceHitCache_HitInfo>_ContainsKey__
                      );
  puVar4 = StringLiteral_7128;
  puVar3 = Method_System_String_Format__;
  puVar2 = 
  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorAdded__;
  if (0 < iVar5) {
    iVar5 = 0;
    do {
      lVar7 = FUN_0125a590(lVar11,iVar5,*(undefined8 *)puVar4);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      auVar12 = (**(code **)(lVar7 + 0x18))
                          (*(undefined8 *)(lVar7 + 0x40),param_1,uVar9,*(undefined8 *)(lVar7 + 0x28)
                          );
      lVar7 = *(long *)(*(long *)puVar3 + 0x20);
      local_88 = auVar12;
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      pcVar8 = (char *)thunk_FUN_00d32ed4(local_88,*(undefined8 *)(lVar7 + 0x80));
      if (*pcVar8 != '\0') {
        FUN_01347408(local_88,&local_68,*(undefined8 *)puVar2);
        return local_68;
      }
      iVar5 = iVar5 + 1;
      iVar6 = FUN_0125a588(lVar11,*(undefined8 *)puVar1);
    } while (iVar5 < iVar6);
  }
  FUN_0125ad80(lVar11,*(undefined8 *)PTR_DAT_033ee520);
  puVar10 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 8);
  local_78 = param_2;
  (*(code *)puVar10[2])(*puVar10,puVar10,0,&local_78,&local_70);
  uVar9 = (**(code **)(*param_1 + 0x288))(param_1,local_70,*(undefined8 *)(*param_1 + 0x290));
  return uVar9;
}


