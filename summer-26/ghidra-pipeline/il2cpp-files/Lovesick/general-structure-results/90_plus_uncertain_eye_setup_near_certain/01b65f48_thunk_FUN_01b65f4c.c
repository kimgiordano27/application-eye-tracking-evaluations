/*
FUNCTION_NAME: thunk_FUN_01b65f4c
ENTRY_POINT: 01b65f48
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] thunk_FUN_01b65f4c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  puVar1 = Method_Sirenix_Serialization_FormatterLocator_<>c_<_cctor>b__9_0__;
  if ((DAT_0377e46b & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Data_DataRelationCollection_DataTableRelationCollection_EnsureDataSet__
                      );
    thunk_FUN_00d48444(StringLiteral_1793);
    thunk_FUN_00d48444(StringLiteral_4718);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_1F38DEB3F70291588D06D3830D0D4241CE0570C9F4EE8B00F606C4753EB016E2
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_81__);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_FormatterLocator_<>c_<_cctor>b__9_0__);
    thunk_FUN_00d48444(Method_CashRegister_RegisterCollisionExit__);
    DAT_0377e46b = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = StringLiteral_4718;
  if (lVar3 != 0) {
    FUN_017b46ec(lVar3,0);
    auVar6 = FUN_017689e8(0);
    *(undefined1 (*) [16])(lVar3 + 0x10) = auVar6;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = Method_System_Data_DataRelationCollection_DataTableRelationCollection_EnsureDataSet__;
    if (lVar4 != 0) {
      FUN_02652094(lVar4,0);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar5 != 0) {
        FUN_011c181c(lVar5,lVar3,
                     *(undefined8 *)
                      Field_<PrivateImplementationDetails>_1F38DEB3F70291588D06D3830D0D4241CE0570C9F4EE8B00F606C4753EB016E2
                     ,0);
        FUN_02651c74(lVar4,lVar5,0);
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar2 = StringLiteral_1793;
        puVar1 = Method_CashRegister_RegisterCollisionExit__;
        if (lVar5 != 0) {
          FUN_011c181c(lVar5,lVar3,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_81__,0);
          FUN_02651dd4(lVar4,lVar5,0);
          auVar6 = FUN_0112c934(*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18),
                                *(undefined8 *)puVar2);
          FUN_0265233c(*(undefined8 *)puVar1,lVar4,0);
          return auVar6;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


