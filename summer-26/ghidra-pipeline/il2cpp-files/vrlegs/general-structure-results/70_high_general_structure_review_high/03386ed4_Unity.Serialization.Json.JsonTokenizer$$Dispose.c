/*
FUNCTION_NAME: Unity.Serialization.Json.JsonTokenizer$$Dispose
ENTRY_POINT: 03386ed4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void Unity_Serialization_Json_JsonTokenizer__Dispose(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *puVar3;
  undefined8 *unaff_x27;
  
  FUN_03391b54();
  if (unaff_x21 != 0) {
    *(undefined8 *)(unaff_x21 + 0x28) = param_1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x21 + 0x28),param_1);
    lVar2 = *unaff_x20;
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) == 0) {
LAB_03386fe4:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar2 = *(long *)(lVar2 + 0x20);
      uVar1 = thunk_FUN_01a89e68(*unaff_x27);
      FUN_03391b54();
      if (lVar2 != 0) {
        puVar3 = (undefined8 *)(lVar2 + 0x30);
        *puVar3 = uVar1;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar3,uVar1);
        lVar2 = *unaff_x20;
        if (lVar2 != 0) {
          if (*(int *)(lVar2 + 0x18) == 0) goto LAB_03386fe4;
          lVar2 = *(long *)(lVar2 + 0x20);
          uVar1 = thunk_FUN_01a89e68(*(undefined8 *)
                                      Unity_Services_Authentication_PlayerAccounts_IDateTimeWrapper_TypeInfo
                                    );
          FUN_03391c60();
          if (lVar2 != 0) {
            puVar3 = (undefined8 *)(lVar2 + 0x20);
            *puVar3 = uVar1;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar3,uVar1);
            lVar2 = *unaff_x20;
            if (lVar2 != 0) {
              if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_03386fe4;
              lVar2 = *(long *)(lVar2 + 0x28);
              uVar1 = thunk_FUN_01a89e68(*(undefined8 *)
                                          FluffyUnderware_DevTools_IDTSingleton_TypeInfo);
              FUN_033919d4();
              if (lVar2 != 0) {
                puVar3 = (undefined8 *)(lVar2 + 0x20);
                *puVar3 = uVar1;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar3,uVar1);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


