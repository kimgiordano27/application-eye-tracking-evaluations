/*
FUNCTION_NAME: FUN_05c9a40c
ENTRY_POINT: 05c9a40c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05c9a40c(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined8 param_7,byte param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  
  puVar3 = Method_System_Runtime_InteropServices_GCHandle_get_Target__;
  puVar1 = OVRPlugin_OVRP_1_95_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_94_0_TypeInfo;
  if ((DAT_06bc319c & 1) == 0) {
    FUN_02f08768(Method_System_Runtime_InteropServices_GCHandle_op_Explicit__);
    FUN_02f08768(
                Method_UnityEngine_Rendering_GPUInstanceDataBufferBuilder_AddComponent<PackedMatrix>__
                );
    FUN_02f08768(OVRPlugin_OVRP_1_95_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_94_0_TypeInfo);
    FUN_02f08768(Method_System_Runtime_InteropServices_GCHandle_get_Target__);
    FUN_02f08768(PTR_DAT_067cb238);
    FUN_02f08768(Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__);
    DAT_06bc319c = 1;
  }
  uVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
  FUN_048252d0(uVar5,*(undefined8 *)
                      Method_UnityEngine_Rendering_GPUInstanceDataBufferBuilder_AddComponent<PackedMatrix>__
              );
  uVar6 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  uVar5 = thunk_FUN_02f45270(uVar6);
  FUN_0484e604(uVar5,*(undefined8 *)puVar1);
  uVar6 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  uVar5 = thunk_FUN_02f45270(uVar6);
  FUN_0484e604(uVar5,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  FUN_05116b38(param_1,0);
  puVar2 = Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0x20) = param_4;
  lVar7 = *(long *)puVar2;
  *(byte *)(param_1 + 0x24) = param_8 & 1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar2 = Method_System_Runtime_InteropServices_GCHandle_op_Explicit__;
  iVar4 = 1;
  uVar5 = FUN_05c978f4(0,param_2,param_3,param_4,1,param_5,1,2,0,param_8 & 1,0,0,1,1,0,0,0,0,0,
                       param_7);
  *(undefined1 *)(param_1 + 0x25) = 1;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  if (((param_8 & 1) == 0) ||
     (iVar4 = FUN_05c9ac10(param_1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c)),
     0 < iVar4)) {
    puVar1 = PTR_DAT_067cb238;
    iVar8 = 0;
    do {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_060b59fc(uVar5,iVar8,0);
      FUN_060b615c(0,0,0,0,0,1,0);
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
  }
  uVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_05ca1d78(uVar5,param_2,param_3,param_6 & 1);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  return;
}


