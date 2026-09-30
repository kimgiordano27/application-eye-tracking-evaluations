/*
FUNCTION_NAME: FUN_00e548b4
ENTRY_POINT: 00e548b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2
*/


void FUN_00e548b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = Method_System_IO_TextWriter_<>c_<WriteAsync>b__56_0__;
  if ((DAT_03774da2 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_IO_TextWriter_<>c_<WriteAsync>b__56_0__);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<byte>_set_Item__);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_DCBEA4AF8FCA3574A40E0078B6F6F21226FA3AA4D9B1062ACDF0409F822D7375
                      );
    thunk_FUN_00d48444(StringLiteral_869);
    thunk_FUN_00d48444(Unity_XR_Oculus_InputFocus_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet_Enumerator<OVRAnchor>_Dispose__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_X86_Fma_fmadd_pd__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<RaycastHit>_Dispose__);
    DAT_03774da2 = 1;
  }
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = Method_Unity_Burst_Intrinsics_X86_Fma_fmadd_pd__;
  if (lVar5 != 0) {
    FUN_011c181c(lVar5,param_1,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<RaycastHit>_Dispose__,0);
    FUN_0289d310(lVar5,0);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar4 = StringLiteral_869;
    puVar3 = 
    Field_<PrivateImplementationDetails>_DCBEA4AF8FCA3574A40E0078B6F6F21226FA3AA4D9B1062ACDF0409F822D7375
    ;
    puVar2 = Method_Obi_ObiNativeList<byte>_set_Item__;
    puVar1 = Unity_XR_Oculus_InputFocus_TypeInfo;
    if (lVar5 != 0) {
      FUN_01320e50(lVar5,*(undefined8 *)
                          Method_System_Collections_Generic_HashSet_Enumerator<OVRAnchor>_Dispose__)
      ;
      FUN_0289ce9c(lVar5,0);
      FUN_01323390(lVar5,&local_60,*(undefined8 *)puVar1);
      while (uVar6 = FUN_012b894c(&local_60,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
        auVar7 = FUN_00ac3170(&local_60,*(undefined8 *)puVar4);
        FUN_00e54ab4(param_1,auVar7._0_8_,auVar7._8_8_);
      }
      FUN_012b8948(&local_60,*(undefined8 *)puVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


