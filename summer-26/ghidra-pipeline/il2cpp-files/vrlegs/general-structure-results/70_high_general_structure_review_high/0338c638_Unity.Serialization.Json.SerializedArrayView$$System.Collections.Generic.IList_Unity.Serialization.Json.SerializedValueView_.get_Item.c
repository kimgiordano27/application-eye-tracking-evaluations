/*
FUNCTION_NAME: Unity.Serialization.Json.SerializedArrayView$$System.Collections.Generic.IList<Unity.Serialization.Json.SerializedValueView>.get_Item
ENTRY_POINT: 0338c638
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Unity_Serialization_Json_SerializedArrayView__System_Collections_Generic_IList<Unity_Serialization_Json_SerializedValueView>_get_Item
               (ulong param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long lVar5;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(Mono_CSharp_IExpressionCleanup_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(FluffyUnderware_Curvy_Generator_IExternalInput_TypeInfo);
    *(undefined1 *)(unaff_x19 + 0xdc) = 1;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    if (*(char *)(*(long *)(unaff_x20 + 0x30) + 0x14) == '\0') {
      return;
    }
    lVar5 = *(long *)(unaff_x20 + 0x38);
    plVar1 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
    if (*(long *)(unaff_x20 + 0x28) != 0) {
      in_stack_00000008._4_4_ = *(undefined4 *)(*(long *)(unaff_x20 + 0x28) + 0x18);
      lVar2 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,(long)&stack0x00000008 + 4);
      if (plVar1 != (long *)0x0) {
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
          uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar4,0);
        }
        if ((int)plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar1[4] = lVar2;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1 + 4,lVar2);
        if (lVar5 != 0) {
          FUN_03389ee0(lVar5,*(undefined8 *)FluffyUnderware_Curvy_Generator_IExternalInput_TypeInfo,
                       plVar1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


