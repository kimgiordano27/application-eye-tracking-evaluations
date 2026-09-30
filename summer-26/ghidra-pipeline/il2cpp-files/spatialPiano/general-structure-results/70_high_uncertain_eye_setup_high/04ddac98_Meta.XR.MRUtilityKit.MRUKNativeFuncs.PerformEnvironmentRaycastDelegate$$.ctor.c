/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.PerformEnvironmentRaycastDelegate$$.ctor
ENTRY_POINT: 04ddac98
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_PerformEnvironmentRaycastDelegate___ctor
               (long param_1,ushort *param_2,long param_3)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  long lVar5;
  ushort *unaff_x21;
  ulong uVar6;
  uint uStack000000000000000c;
  
  uStack000000000000000c = 0;
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  if (DAT_06bb79e7 == '\0') {
    FUN_02f08768(PTR_DAT_067ca1b0);
    DAT_06bb79e7 = '\x01';
  }
  if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  if (DAT_06bb79e5 == '\0') {
    FUN_02f08768(PTR_DAT_067ca1b0);
    DAT_06bb79e5 = '\x01';
  }
  lVar5 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02f41e9c();
  }
  if (*(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02f41ef8();
  }
  lVar5 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02f41e9c();
  }
  if (*(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02f41ef8();
  }
  lVar5 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02f41e9c();
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  lVar5 = *(long *)(param_3 + 0x20);
  uVar1 = *unaff_x21;
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02f41e9c();
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x148) + 0x20) + 0x135) & 1) == 0)
  {
    FUN_02f41e9c();
  }
  if (*param_2 <= uVar1) {
    uVar1 = *param_2;
  }
  uVar6 = (ulong)(uint)uVar1;
  puVar2 = unaff_x21;
  puVar3 = param_2;
  if (uVar1 != 0) {
    do {
      iVar4 = FUN_0609d588(puVar2 + 2,puVar3 + 2,4,0);
      if (iVar4 != 0) {
        return;
      }
      uVar6 = uVar6 - 1;
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + 2;
    } while (uVar6 != 0);
  }
  lVar5 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02f41e9c();
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  lVar5 = *(long *)(param_3 + 0x20);
  uStack000000000000000c = (uint)*unaff_x21;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02f41e9c();
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x148) + 0x20) + 0x135) & 1) == 0)
  {
    FUN_02f41e9c();
  }
  FUN_050d2bd4(&stack0x0000000c,*param_2,0);
  return;
}


