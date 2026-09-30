/*
FUNCTION_NAME: FUN_02795260
ENTRY_POINT: 02795260
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void FUN_02795260(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = System_IO_FileStreamAsyncResult_TypeInfo;
  if ((DAT_037886d0 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Texture2D_LoadRawTextureData__);
    thunk_FUN_00d48444(StringLiteral_12202);
    thunk_FUN_00d48444(System_IO_FileStreamAsyncResult_TypeInfo);
    thunk_FUN_00d48444(Method_OVRTask_FromRequest<OVRResult<Guid,_OVRColocationSession_Result>>__);
    DAT_037886d0 = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar2 = StringLiteral_12202;
  puVar1 = Method_OVRTask_FromRequest<OVRResult<Guid,_OVRColocationSession_Result>>__;
  if (lVar3 != 0) {
    FUN_027953c8(lVar3,0);
    **(long **)(*(long *)puVar1 + 0xb8) = lVar3;
    uVar4 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar3 != 0) {
      FUN_01298e34(lVar3,uVar4,*(undefined8 *)Method_UnityEngine_Texture2D_LoadRawTextureData__);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


