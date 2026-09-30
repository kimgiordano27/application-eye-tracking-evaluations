/*
FUNCTION_NAME: OVRManager$$add_SpaceEraseComplete
ENTRY_POINT: 063664f8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__add_SpaceEraseComplete(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *in_x9;
  long unaff_x19;
  int unaff_w21;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x22;
  long *unaff_x23;
  undefined8 uStack0000000000000008;
  
  uVar3 = 0x10;
  if (unaff_w21 != 2) {
    uVar3 = 0x50;
  }
  uStack0000000000000008 = 0;
  FUN_04e5f37c(&stack0x00000008,uVar3,*in_x9);
  if (unaff_x22 != 0) {
    *(undefined8 *)(unaff_x22 + 0x30) = uStack0000000000000008;
    lVar4 = *(long *)(unaff_x19 + 0x30);
    uVar2 = FUN_063669d4();
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar4 + 0x10);
      *puVar5 = uVar2;
      thunk_FUN_037aeb94(puVar5,uVar2);
      bVar1 = *(byte *)(*(long *)PTR_DAT_07db46a0 + 0x130);
      if ((*(byte *)(*unaff_x23 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)PTR_DAT_07db46a0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54();
      }
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        *(undefined1 *)(*(long *)(unaff_x19 + 0x30) + 0xd0) = 1;
        lVar4 = FUN_0636579c();
        if (lVar4 != 0) {
          return *(undefined8 *)(lVar4 + 0x18);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


