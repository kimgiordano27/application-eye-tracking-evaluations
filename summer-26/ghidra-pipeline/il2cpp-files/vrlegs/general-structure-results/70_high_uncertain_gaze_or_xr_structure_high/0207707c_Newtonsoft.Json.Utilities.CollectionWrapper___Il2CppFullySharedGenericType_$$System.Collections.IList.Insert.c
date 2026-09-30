/*
FUNCTION_NAME: Newtonsoft.Json.Utilities.CollectionWrapper<__Il2CppFullySharedGenericType>$$System.Collections.IList.Insert
ENTRY_POINT: 0207707c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02077118) */

void Newtonsoft_Json_Utilities_CollectionWrapper<__Il2CppFullySharedGenericType>__System_Collections_IList_Insert
               (void)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  int unaff_w21;
  undefined8 unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  long unaff_x25;
  undefined8 in_stack_00000008;
  
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0207711c with catch @ 0207712c
                        */
    FUN_01ab6c3c();
  }
  uVar1 = unaff_w21 + -2 + unaff_w23;
  if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 02076f00 with catch @ 02077130
                        */
    FUN_01ab6c44();
  }
  if (*(uint *)(lVar2 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 02076eec with catch @ 02077134
                        */
    FUN_01ab6c44();
  }
  *(undefined8 *)(lVar2 + unaff_x25 * 8 + 0x20) =
       *(undefined8 *)(lVar2 + (long)(int)uVar1 * 8 + 0x20);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 02076e34 with catch @ 02077138
                        */
    FUN_01ab6c3c();
  }
  if (uVar1 < *(uint *)(lVar2 + 0x18)) {
    *(undefined8 *)(lVar2 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 02076f18 with catch @ 0207713c
                        */
  FUN_01ab6c44();
}


