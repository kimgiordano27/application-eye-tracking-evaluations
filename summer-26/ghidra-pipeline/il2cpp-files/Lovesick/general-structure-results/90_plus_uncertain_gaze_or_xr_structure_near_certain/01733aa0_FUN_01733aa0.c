/*
FUNCTION_NAME: FUN_01733aa0
ENTRY_POINT: 01733aa0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01733c68) */

long FUN_01733aa0(int param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_38;
  char local_28 [4];
  int local_24;
  
  if ((DAT_03778b02 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(StringLiteral_5709);
    DAT_03778b02 = 1;
  }
  puVar1 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
  local_38 = 0;
  local_28[0] = '\0';
  if (param_1 < 1) {
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar5 = thunk_FUN_00d48444(Method_System_Collections_Stack__ctor__);
    uVar6 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_91__);
    FUN_016efd4c(uVar7,uVar5,uVar6,0);
    uVar5 = thunk_FUN_00d48444(Meta_Voice_VoiceRequestState_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar7,uVar5);
  }
  lVar2 = *(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *(long *)puVar1;
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
  local_28[0] = '\0';
  FUN_017d75a8(uVar7,local_28,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar2);
    lVar2 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x28);
  if (lVar3 != 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar2);
      lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    local_24 = param_1;
    uVar4 = FUN_0129eff4(lVar3,&local_24,&local_38,*(undefined8 *)StringLiteral_5709);
    if ((uVar4 & 1) != 0) goto LAB_01733bd0;
    lVar2 = *(long *)puVar1;
  }
  lVar2 = thunk_FUN_00d62348(lVar2);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01733288(lVar2,param_1,0,1);
  local_38 = lVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_0173390c(lVar2);
LAB_01733bd0:
  lVar2 = local_38;
  if (local_28[0] != '\0') {
    thunk_FUN_00d56f10(uVar7,0);
  }
  return lVar2;
}


