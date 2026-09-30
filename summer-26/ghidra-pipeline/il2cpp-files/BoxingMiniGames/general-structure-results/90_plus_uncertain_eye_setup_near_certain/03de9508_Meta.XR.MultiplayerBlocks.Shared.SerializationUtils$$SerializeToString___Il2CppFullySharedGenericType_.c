/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<__Il2CppFullySharedGenericType>
ENTRY_POINT: 03de9508
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__SerializeToString<__Il2CppFullySharedGenericType>
               (long param_1,undefined8 param_2,undefined8 param_3,size_t param_4)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong in_x10;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar9;
  void *unaff_x24;
  undefined8 uVar10;
  void *unaff_x25;
  size_t unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  puVar9 = (undefined8 *)(&stack0x00000000 + -(in_x10 & 0x1fffffff0));
  if (-1 < *(int *)(param_1 + 0x28)) {
    unaff_x25 = (void *)(unaff_x29 + -0x40);
  }
  memcpy(unaff_x22,unaff_x25,param_4);
  if (-1 < *(int *)(unaff_x21 + 0x28)) {
    unaff_x24 = (void *)(unaff_x29 + -0x48);
  }
  memcpy(puVar9,unaff_x24,unaff_x26);
  lVar2 = *(long *)(unaff_x28 + 0x30);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar5 = *(long *)(lVar6 + 0x30);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar2 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_0367c9fc(lVar5);
    lVar6 = *(long *)(unaff_x20 + 0x38);
    uVar1 = *(ushort *)(*(long *)(lVar6 + 0x30) + 0x135);
    lVar2 = *(long *)(lVar6 + 0x30);
  }
  uVar10 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_0367c9fc(lVar2);
    lVar6 = *(long *)(unaff_x20 + 0x38);
  }
  puVar4 = *(undefined8 **)(lVar6 + 0x40);
  uVar3 = *puVar4;
  if (-1 < *(int *)(*(long *)(lVar6 + 8) + 0x28)) {
    unaff_x22 = (undefined8 *)*unaff_x22;
  }
  if (-1 < *(int *)(*(long *)(lVar6 + 0x10) + 0x28)) {
    puVar9 = (undefined8 *)*puVar9;
  }
  *(undefined8 *)(unaff_x29 + -0x18) = **(undefined8 **)(lVar2 + 0xb8);
  *(undefined8 **)(unaff_x29 + -0x38) = unaff_x22;
  *(undefined8 **)(unaff_x29 + -0x30) = puVar9;
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x50);
  *(undefined8 *)(unaff_x29 + -0x20) = uVar10;
  (*(code *)puVar4[2])(uVar3,puVar4,0,unaff_x29 + -0x38,unaff_x29 + -0x10);
  if (unaff_x19 == (long *)0x0) {
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    lVar2 = **(long **)(unaff_x20 + 0x38);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc(lVar2);
    }
    lVar5 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar2) {
          puVar9 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03de9680;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_0367cd30();
LAB_03de9680:
    (*(code *)*puVar9)();
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


