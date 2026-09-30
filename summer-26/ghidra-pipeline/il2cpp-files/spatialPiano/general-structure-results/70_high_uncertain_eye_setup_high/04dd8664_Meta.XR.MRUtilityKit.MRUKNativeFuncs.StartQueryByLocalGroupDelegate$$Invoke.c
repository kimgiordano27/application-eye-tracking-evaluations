/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.StartQueryByLocalGroupDelegate$$Invoke
ENTRY_POINT: 04dd8664
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_StartQueryByLocalGroupDelegate__Invoke(void)

{
  int iVar1;
  long lVar2;
  ushort *unaff_x19;
  long unaff_x20;
  ushort *unaff_x21;
  uint unaff_w22;
  ushort *puVar3;
  ushort *puVar4;
  ulong uVar5;
  uint uStack000000000000000c;
  
  FUN_02f41e9c();
  if ((int)(uint)*unaff_x19 <= (int)unaff_w22) {
    unaff_w22 = (uint)*unaff_x19;
  }
  uVar5 = (ulong)unaff_w22;
  if (unaff_w22 != 0) {
    puVar3 = unaff_x21 + 1;
    puVar4 = unaff_x19 + 1;
    do {
      iVar1 = FUN_0609d588(puVar3,puVar4,1,0);
      if (iVar1 != 0) {
        return;
      }
      uVar5 = uVar5 - 1;
      puVar4 = (ushort *)((long)puVar4 + 1);
      puVar3 = (ushort *)((long)puVar3 + 1);
    } while (uVar5 != 0);
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uStack000000000000000c = (uint)*unaff_x21;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  FUN_050d2bd4(&stack0x0000000c,*unaff_x19,0);
  return;
}


