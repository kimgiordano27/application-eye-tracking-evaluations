/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$GetTrackingSpacePose
ENTRY_POINT: 04de5314
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_MRUtilityKit_MRUK__GetTrackingSpacePose(void)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  int in_w8;
  ushort *unaff_x19;
  long unaff_x20;
  ushort *unaff_x21;
  long unaff_x22;
  ushort *puVar4;
  ushort *puVar5;
  ulong uVar6;
  uint uStack000000000000000c;
  
  if (in_w8 == 0) {
    FUN_02f08768(PTR_DAT_067ca1b0);
    *(undefined1 *)(unaff_x22 + 0x9d0) = 1;
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  if (*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02f41ef8();
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  if (*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02f41ef8();
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *unaff_x21;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x1b8) + 0x20) + 0x135) & 1) == 0)
  {
    FUN_02f41e9c();
  }
  if (*unaff_x19 <= uVar1) {
    uVar1 = *unaff_x19;
  }
  uVar6 = (ulong)(uint)uVar1;
  if (uVar1 != 0) {
    puVar4 = unaff_x21 + 1;
    puVar5 = unaff_x19 + 1;
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
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uStack000000000000000c = (uint)*unaff_x21;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x1b8) + 0x20) + 0x135) & 1) == 0)
  {
    FUN_02f41e9c();
  }
  FUN_050d2bd4(&stack0x0000000c,*unaff_x19,0);
  return;
}


