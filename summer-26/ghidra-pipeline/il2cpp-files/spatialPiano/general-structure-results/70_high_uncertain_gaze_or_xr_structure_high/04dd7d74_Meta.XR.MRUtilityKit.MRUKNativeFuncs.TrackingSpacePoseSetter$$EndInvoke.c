/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.TrackingSpacePoseSetter$$EndInvoke
ENTRY_POINT: 04dd7d74
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_TrackingSpacePoseSetter__EndInvoke
               (undefined8 param_1,ushort *param_2,long param_3)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  ushort *unaff_x21;
  ushort *puVar4;
  ushort *puVar5;
  ulong uVar6;
  uint uStack000000000000000c;
  
  uStack000000000000000c = 0;
  if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  if (DAT_06bb79d3 == '\0') {
    FUN_02f08768(PTR_DAT_067ca1b0);
    DAT_06bb79d3 = '\x01';
  }
  if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  if (DAT_06bb79d0 == '\0') {
    FUN_02f08768(PTR_DAT_067ca1b0);
    DAT_06bb79d0 = '\x01';
  }
  lVar3 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  if (*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02f41ef8();
  }
  lVar3 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  if (*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02f41ef8();
  }
  lVar3 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  lVar3 = *(long *)(param_3 + 0x20);
  uVar1 = *unaff_x21;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x200) + 0x20) + 0x135) & 1) == 0)
  {
    FUN_02f41e9c();
  }
  if (*param_2 <= uVar1) {
    uVar1 = *param_2;
  }
  uVar6 = (ulong)(uint)uVar1;
  if (uVar1 != 0) {
    puVar4 = unaff_x21 + 1;
    puVar5 = param_2 + 1;
    do {
      iVar2 = FUN_0609d588(puVar4,puVar5,1,0);
      if (iVar2 != 0) {
        return;
      }
      uVar6 = uVar6 - 1;
      puVar5 = (ushort *)((long)puVar5 + 1);
      puVar4 = (ushort *)((long)puVar4 + 1);
    } while (uVar6 != 0);
  }
  lVar3 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  lVar3 = *(long *)(param_3 + 0x20);
  uStack000000000000000c = (uint)*unaff_x21;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x200) + 0x20) + 0x135) & 1) == 0)
  {
    FUN_02f41e9c();
  }
  FUN_050d2bd4(&stack0x0000000c,*param_2,0);
  return;
}


