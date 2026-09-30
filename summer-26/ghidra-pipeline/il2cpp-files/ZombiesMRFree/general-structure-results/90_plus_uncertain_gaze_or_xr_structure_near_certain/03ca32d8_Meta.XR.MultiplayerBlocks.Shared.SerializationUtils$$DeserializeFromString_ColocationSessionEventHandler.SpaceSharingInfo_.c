/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<ColocationSessionEventHandler.SpaceSharingInfo>
ENTRY_POINT: 03ca32d8
PROGRAM: ZombiesMRFree-libil2cpp.so
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
               (long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  int unaff_w19;
  int iVar7;
  long *plVar8;
  int iVar9;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar10;
  undefined4 unaff_w22;
  undefined4 uVar11;
  int unaff_w23;
  undefined8 uVar12;
  int unaff_w24;
  long unaff_x25;
  undefined8 unaff_x29;
  undefined8 in_stack_00000008;
  
  if (unaff_w19 == 0) {
    lVar4 = unaff_x25;
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar4 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 8);
    }
    if (lVar4 == 0) goto LAB_03ca342c;
    unaff_w19 = FUN_065c0128(lVar4,0);
  }
  uVar2 = FUN_065fbec8(&stack0x00000008,0);
  bVar1 = (uVar2 & 1) == 0;
  lVar4 = 0;
  if (bVar1) {
    lVar4 = unaff_x25;
  }
  uVar10 = 0;
  if (bVar1) {
    uVar10 = unaff_x21;
  }
  iVar7 = 0;
  if (bVar1) {
    iVar7 = unaff_w19;
  }
  uVar12 = 0;
  if (bVar1) {
    uVar12 = unaff_x29;
  }
  iVar9 = 0;
  if (bVar1) {
    iVar9 = unaff_w23 - unaff_w24;
  }
  uVar11 = 0;
  if (bVar1) {
    uVar11 = unaff_w22;
  }
  if ((uVar2 & 1) == 0) {
    plVar8 = (long *)**(undefined8 **)(*(long *)PTR_DAT_06f99a90 + 0xb8);
    if (plVar8 == (long *)0x0) goto LAB_03ca342c;
    lVar5 = *plVar8;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06f99a88) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0x13) * 0x10 + 0x138);
          goto LAB_03ca33cc;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06f99a88,0x13);
LAB_03ca33cc:
    (*(code *)*puVar3)(plVar8,puVar3[1]);
  }
  else {
    FUN_06606a3c(&stack0x00000008,0);
    uVar10 = unaff_x21;
    uVar12 = unaff_x29;
    lVar4 = unaff_x25;
    iVar7 = unaff_w19;
    iVar9 = unaff_w23 - unaff_w24;
    uVar11 = unaff_w22;
  }
  if (lVar4 != 0) {
    FUN_065c513c(lVar4,uVar10,iVar7,uVar12,iVar9,uVar11,in_stack_00000008,0);
    return;
  }
LAB_03ca342c:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


