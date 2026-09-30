/*
FUNCTION_NAME: FUN_0642f36c
ENTRY_POINT: 0642f36c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_0642f36c(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  if ((DAT_06dccb92 & 1) == 0) {
    FUN_02d965b8(Method_Unity_Burst_BurstCompiler_<>c_<Compile>b__22_0__);
    FUN_02d965b8(Method_CodeMonkey_Utils_Button_Sprite_<>c_<Awake>b__43_0__);
    FUN_02d965b8(
                Method_Unity_Services_Vivox_ChannelSession_<>c__DisplayClass41_0_<HandleSessionArchiveMessage>b__0__
                );
    DAT_06dccb92 = 1;
  }
  if (DAT_06dcc9e4 == '\0') {
    FUN_02d965b8(Method_System_Xml_Schema_XsdBuilder_BuildAttributeGroupRef_Ref__);
    DAT_06dcc9e4 = '\x01';
  }
  if (*(char *)(*(long *)(*(long *)Method_System_Xml_Schema_XsdBuilder_BuildAttributeGroupRef_Ref__
                         + 0xb8) + 8) == '\0') {
    uVar1 = FUN_0634adf0(0);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  if (((param_2 != 0) && (lVar3 = *(long *)(param_2 + 0x98), lVar3 != 0)) &&
     (*(long *)(lVar3 + 0x28) != 0)) {
    lVar2 = *(long *)(param_1 + 0x10);
    *(double *)(*(long *)(lVar3 + 0x28) + 0x58) = (double)*(int *)(param_1 + 0x18);
    if (lVar2 != 0) {
      FUN_03e96ba4(lVar2,lVar3,
                   *(undefined8 *)
                    Method_Unity_Services_Vivox_ChannelSession_<>c__DisplayClass41_0_<HandleSessionArchiveMessage>b__0__
                  );
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_03e96644(*(long *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x98),
                     *(undefined8 *)Method_CodeMonkey_Utils_Button_Sprite_<>c_<Awake>b__43_0__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


