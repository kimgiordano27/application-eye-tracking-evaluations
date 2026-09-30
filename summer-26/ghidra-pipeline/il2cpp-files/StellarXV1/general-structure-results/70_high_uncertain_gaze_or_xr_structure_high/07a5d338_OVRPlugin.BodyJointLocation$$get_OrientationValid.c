/*
FUNCTION_NAME: OVRPlugin.BodyJointLocation$$get_OrientationValid
ENTRY_POINT: 07a5d338
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_BodyJointLocation__get_OrientationValid(ulong param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined4 uVar6;
  uint uStack000000000000000c;
  uint uStack0000000000000014;
  
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_092ed030);
    *(undefined1 *)(unaff_x21 + 0x4f1) = 1;
  }
  puVar1 = PTR_DAT_092ed030;
  uStack000000000000000c = 0;
  uStack0000000000000014 = 0;
  if (unaff_x20 != (long *)0x0) {
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092ed030) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x12) * 0x10 + 0x138);
          goto LAB_07a5d3b8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00();
LAB_07a5d3b8:
    (*(code *)*puVar2)();
    if (unaff_x19 != 0) {
      *(ulong *)(unaff_x19 + 0x28) = (ulong)uStack000000000000000c << 0x20;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(ulong *)(unaff_x19 + 0x34) = (ulong)uStack0000000000000014;
      *(ulong *)(unaff_x19 + 0x2c) = (ulong)uStack000000000000000c;
      FUN_07a5cef8();
      lVar3 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto FUN_07a5d438;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00();
FUN_07a5d438:
      uVar6 = (*(code *)*puVar2)();
      *(undefined4 *)(unaff_x19 + 0x3c) = uVar6;
      FUN_07a5cef8();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


