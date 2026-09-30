/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<__Il2CppFullySharedGenericType>
ENTRY_POINT: 03ca2f3c
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


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<__Il2CppFullySharedGenericType>
               (undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  int unaff_w19;
  int iVar10;
  long *plVar11;
  int iVar12;
  long unaff_x21;
  undefined4 uVar13;
  long unaff_x23;
  undefined8 uVar14;
  long lVar15;
  undefined8 unaff_x29;
  undefined8 in_stack_00000008;
  
  if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d508);
  }
  uVar4 = FUN_05af01a8(0x1e,param_1,0);
  puVar2 = PTR_DAT_06f99928;
  if (unaff_x21 != 0) {
    iVar1 = *(int *)(unaff_x23 + 4);
    iVar10 = *(int *)(unaff_x21 + 0x14);
    lVar5 = *(long *)PTR_DAT_06f99928;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar5 = *(long *)puVar2;
    }
    lVar15 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (unaff_w19 == 0) {
      lVar8 = lVar15;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      }
      if (lVar8 == 0) goto LAB_03ca30f4;
      unaff_w19 = FUN_065c0128(lVar8,0);
    }
    iVar1 = iVar1 - iVar10;
    uVar6 = FUN_065fbec8(&stack0x00000008,0);
    bVar3 = (uVar6 & 1) == 0;
    lVar5 = 0;
    if (bVar3) {
      lVar5 = lVar15;
    }
    lVar8 = 0;
    if (bVar3) {
      lVar8 = unaff_x21;
    }
    iVar10 = 0;
    if (bVar3) {
      iVar10 = unaff_w19;
    }
    uVar14 = 0;
    if (bVar3) {
      uVar14 = unaff_x29;
    }
    iVar12 = 0;
    if (bVar3) {
      iVar12 = iVar1;
    }
    uVar13 = 0;
    if (bVar3) {
      uVar13 = uVar4;
    }
    if ((uVar6 & 1) == 0) {
      plVar11 = (long *)**(undefined8 **)(*(long *)PTR_DAT_06f99a90 + 0xb8);
      if (plVar11 == (long *)0x0) goto LAB_03ca30f4;
      lVar15 = *plVar11;
      uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06f99a88) {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar9 + 0x13) * 0x10 + 0x138);
            goto LAB_03ca3094;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_02feb5b8(plVar11,*(long *)PTR_DAT_06f99a88,0x13);
LAB_03ca3094:
      (*(code *)*puVar7)(plVar11,puVar7[1]);
    }
    else {
      FUN_06606a3c(&stack0x00000008,0);
      lVar8 = unaff_x21;
      uVar14 = unaff_x29;
      lVar5 = lVar15;
      iVar10 = unaff_w19;
      iVar12 = iVar1;
      uVar13 = uVar4;
    }
    if (lVar5 != 0) {
      FUN_065c513c(lVar5,lVar8,iVar10,uVar14,iVar12,uVar13,in_stack_00000008,0);
      return;
    }
  }
LAB_03ca30f4:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


