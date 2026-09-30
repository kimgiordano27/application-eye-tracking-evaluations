/*
FUNCTION_NAME: FUN_014dcd58
ENTRY_POINT: 014dcd58
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


long FUN_014dcd58(undefined4 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if ((DAT_03776f37 & 1) == 0) {
    thunk_FUN_00d48444(Oculus_Interaction_Input_UsageButtonMapping_TypeInfo);
    thunk_FUN_00d48444(Method_Oculus_Platform_Request<AssetFileDeleteResult>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<EdgeLookup,_float>_Add__);
    thunk_FUN_00d48444(System_Runtime_Serialization_OnSerializedAttribute_var);
    thunk_FUN_00d48444(StringLiteral_1902);
    thunk_FUN_00d48444(Method_CashRegister_DrawerCollisionEntered__);
    thunk_FUN_00d48444(PTR_DAT_033eb8b8);
    DAT_03776f37 = 1;
  }
  switch(param_1) {
  default:
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033eb8b8);
    puVar1 = (undefined8 *)Oculus_Interaction_Input_UsageButtonMapping_TypeInfo;
    break;
  case 1:
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033eb8b8);
    puVar1 = (undefined8 *)Method_Oculus_Platform_Request<AssetFileDeleteResult>__ctor__;
    break;
  case 2:
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033eb8b8);
    puVar1 = (undefined8 *)Method_System_Collections_Generic_Dictionary<EdgeLookup,_float>_Add__;
    break;
  case 3:
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033eb8b8);
    puVar1 = (undefined8 *)System_Runtime_Serialization_OnSerializedAttribute_var;
    break;
  case 4:
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033eb8b8);
    puVar1 = (undefined8 *)StringLiteral_1902;
    break;
  case 5:
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033eb8b8);
    puVar1 = (undefined8 *)Method_CashRegister_DrawerCollisionEntered__;
  }
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_014dd204(lVar2,0,*puVar1);
  return lVar2;
}


