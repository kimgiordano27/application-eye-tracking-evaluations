/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<MatchInfo>
ENTRY_POINT: 03ca2bfc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<MatchInfo>
               (long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int in_w8;
  long lVar4;
  int *piVar5;
  int unaff_w19;
  int iVar6;
  long *plVar7;
  int iVar8;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar9;
  undefined4 unaff_w22;
  undefined4 uVar10;
  int unaff_w23;
  undefined8 uVar11;
  int unaff_w24;
  long lVar12;
  undefined8 unaff_x29;
  undefined8 in_stack_00000008;
  
  if (in_w8 == 0) {
    thunk_FUN_02fdcff0();
    param_1 = *unaff_x20;
  }
  lVar12 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
  if (unaff_w19 == 0) {
    lVar4 = lVar12;
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar4 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 8);
    }
    if (lVar4 == 0) goto LAB_03ca2d64;
    unaff_w19 = FUN_065c0128(lVar4,0);
  }
  uVar2 = FUN_065fbec8(&stack0x00000008,0);
  bVar1 = (uVar2 & 1) == 0;
  lVar4 = 0;
  if (bVar1) {
    lVar4 = lVar12;
  }
  uVar9 = 0;
  if (bVar1) {
    uVar9 = unaff_x21;
  }
  iVar6 = 0;
  if (bVar1) {
    iVar6 = unaff_w19;
  }
  uVar11 = 0;
  if (bVar1) {
    uVar11 = unaff_x29;
  }
  iVar8 = 0;
  if (bVar1) {
    iVar8 = unaff_w23 - unaff_w24;
  }
  uVar10 = 0;
  if (bVar1) {
    uVar10 = unaff_w22;
  }
  if ((uVar2 & 1) == 0) {
    plVar7 = (long *)**(undefined8 **)(*(long *)PTR_DAT_06f99a90 + 0xb8);
    if (plVar7 == (long *)0x0) goto LAB_03ca2d64;
    lVar12 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06f99a88) {
          puVar3 = (undefined8 *)(lVar12 + (long)(*piVar5 + 0x13) * 0x10 + 0x138);
          goto LAB_03ca2d04;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02feb5b8(plVar7,*(long *)PTR_DAT_06f99a88,0x13);
LAB_03ca2d04:
    (*(code *)*puVar3)(plVar7,puVar3[1]);
  }
  else {
    FUN_06606a3c(&stack0x00000008,0);
    uVar9 = unaff_x21;
    uVar11 = unaff_x29;
    lVar4 = lVar12;
    iVar6 = unaff_w19;
    iVar8 = unaff_w23 - unaff_w24;
    uVar10 = unaff_w22;
  }
  if (lVar4 != 0) {
    FUN_065c513c(lVar4,uVar9,iVar6,uVar11,iVar8,uVar10,in_stack_00000008,0);
    return;
  }
LAB_03ca2d64:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


