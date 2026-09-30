/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$SaveSceneToJsonString
ENTRY_POINT: 04de16f0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__SaveSceneToJsonString(long param_1,undefined8 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  void *unaff_x20;
  code *unaff_x22;
  long unaff_x23;
  code *pcVar7;
  long in_stack_00000208;
  
  uVar3 = (*unaff_x22)(param_2,*(undefined8 *)(param_1 + 0x60));
  lVar6 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar5 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar5 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x60);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar5);
  }
  uVar4 = (*pcVar7)();
  memcpy(&stack0x00000008,unaff_x20,0x200);
  lVar6 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar5 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar5 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x90);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_02f41e9c(lVar5);
  }
  iVar2 = (*pcVar7)(&stack0x00000008,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x90));
  iVar2 = FUN_0609d588(uVar3,uVar4,(long)iVar2,0);
  if (*(long *)(unaff_x23 + 0x28) != in_stack_00000208) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2 == 0);
  }
  return;
}


