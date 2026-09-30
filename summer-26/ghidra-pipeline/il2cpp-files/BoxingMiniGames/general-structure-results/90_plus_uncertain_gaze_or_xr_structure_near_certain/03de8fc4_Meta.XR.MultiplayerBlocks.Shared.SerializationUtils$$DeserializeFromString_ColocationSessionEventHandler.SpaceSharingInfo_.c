/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<ColocationSessionEventHandler.SpaceSharingInfo>
ENTRY_POINT: 03de8fc4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<ColocationSessionEventHandler_SpaceSharingInfo>
               (void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *puVar8;
  void *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  if (unaff_x26 == 0) {
    FUN_0367ca58();
    unaff_x26 = *(long *)(unaff_x20 + 0x38);
  }
  uVar4 = (ulong)*(uint *)(*(long *)(unaff_x26 + 8) + 0xfc);
  puVar8 = (undefined8 *)(&stack0x00000000 + -(uVar4 + 0xf & 0x1fffffff0));
  if (-1 < *(int *)(*(long *)(unaff_x26 + 8) + 0x28)) {
    unaff_x24 = (void *)(unaff_x29 + -0x38);
  }
  memcpy(puVar8,unaff_x24,uVar4);
  lVar1 = *(long *)(unaff_x26 + 0x28);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar5 = *(long *)(unaff_x20 + 0x38);
  lVar1 = *(long *)(lVar5 + 0x28);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
    lVar5 = *(long *)(unaff_x20 + 0x38);
  }
  puVar3 = *(undefined8 **)(lVar5 + 0x38);
  uVar2 = *puVar3;
  if (-1 < *(int *)(*(long *)(lVar5 + 8) + 0x28)) {
    puVar8 = (undefined8 *)*puVar8;
  }
  *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x10);
  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x22;
  pcVar6 = (code *)puVar3[2];
  *(undefined8 **)(unaff_x29 + -0x30) = puVar8;
  *(undefined8 *)(unaff_x29 + -0x28) = unaff_x21;
  (*pcVar6)(uVar2,puVar3,0,unaff_x29 + -0x30,unaff_x29 + -0x10);
  if (unaff_x19 == (long *)0x0) {
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    lVar1 = **(long **)(unaff_x20 + 0x38);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc(lVar1);
    }
    lVar5 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar1) {
          puVar8 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03de90f0;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar8 = (undefined8 *)FUN_0367cd30();
LAB_03de90f0:
    (*(code *)*puVar8)();
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


