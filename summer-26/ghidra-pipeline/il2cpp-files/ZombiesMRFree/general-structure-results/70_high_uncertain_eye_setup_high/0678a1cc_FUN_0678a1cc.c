/*
FUNCTION_NAME: FUN_0678a1cc
ENTRY_POINT: 0678a1cc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0678a1cc(long param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if ((DAT_073a15e6 & 1) == 0) {
    FUN_02fe925c(System_Collections_Generic_List<TypeName>_TypeInfo);
    FUN_02fe925c(OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo);
    DAT_073a15e6 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x108);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x238) = *(undefined8 *)(param_1 + 0xf8);
    thunk_FUN_03048534(lVar3 + 0x238);
    lVar3 = *(long *)(param_1 + 0x108);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x240) = *(undefined4 *)(param_1 + 0xf0);
      *(undefined1 *)(lVar3 + 0x244) = *(undefined1 *)(param_1 + 0x100);
      if (*(char *)(param_1 + 0xf4) == '\0') {
        if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        bVar1 = FUN_0674ac30(0x31,4,0);
        bVar1 = bVar1 ^ 1;
      }
      else {
        bVar1 = 1;
      }
      *(byte *)(lVar3 + 0x245) = bVar1 & 1;
      lVar3 = *(long *)(param_1 + 0xe0);
      if (lVar3 != 0) {
        local_60 = *(undefined8 *)(lVar3 + 0x48);
        uStack_68 = *(undefined8 *)(lVar3 + 0x40);
        uStack_70 = *(undefined8 *)(lVar3 + 0x38);
        uStack_78 = *(undefined8 *)(lVar3 + 0x30);
        local_80 = *(undefined8 *)(lVar3 + 0x28);
        local_50 = local_80;
        uStack_48 = uStack_78;
        uStack_40 = uStack_70;
        uStack_38 = uStack_68;
        local_30 = local_60;
        if (*param_3 != 0) {
          uVar2 = FUN_06916814(*param_3,*(undefined8 *)
                                         OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo,
                               &local_80,0);
          FUN_0678a2f4(uVar2,*(undefined8 *)(param_1 + 0x108),param_3,param_3 + 3,
                       *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


