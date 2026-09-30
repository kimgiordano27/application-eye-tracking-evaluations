/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$.ctor
ENTRY_POINT: 048369b8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>___ctor
          (ulong param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f80978);
    FUN_02fe925c(PTR_DAT_06f8dec8);
    *(undefined1 *)(unaff_x21 + 0x7bc) = 1;
  }
  puVar1 = PTR_DAT_06f80978;
  lVar10 = *param_2;
  if (lVar10 == 0) {
    uVar2 = 0;
    goto LAB_04836be0;
  }
  plVar3 = (long *)thunk_FUN_03010710(lVar10,*(undefined8 *)PTR_DAT_06f80978);
  if (plVar3 == (long *)0x0) {
    lVar6 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x40);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4(lVar6);
    }
    plVar3 = (long *)thunk_FUN_03010710(lVar10,lVar6);
    if (plVar3 != (long *)0x0) {
      lVar10 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02feb2c4();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02feb2c4(lVar10);
      }
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar10) {
            lVar6 = lVar6 + (long)*piVar9 * 0x10;
            goto LAB_04836bbc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      uVar5 = 0;
      goto LAB_04836af8;
    }
    lVar6 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x48);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4(lVar6);
    }
    plVar3 = (long *)thunk_FUN_03010710(lVar10,lVar6);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    lVar10 = *(long *)(param_3 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02feb2c4();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x48);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02feb2c4(lVar10);
    }
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar10) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04836c08;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02feb5b8(plVar3,lVar10,0);
LAB_04836c08:
    pcVar7 = (code *)*puVar4;
    uVar5 = puVar4[1];
  }
  else {
    lVar6 = *plVar3;
    lVar10 = *(long *)puVar1;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
LAB_04836a20:
      if (*(long *)(piVar9 + -2) != lVar10) goto code_r0x04836a2c;
      lVar6 = lVar6 + (long)(*piVar9 + 1) * 0x10;
LAB_04836bbc:
      puVar4 = (undefined8 *)(lVar6 + 0x138);
      goto LAB_04836bc0;
    }
LAB_04836a38:
    uVar5 = 1;
LAB_04836af8:
    puVar4 = (undefined8 *)FUN_02feb5b8(plVar3,lVar10,uVar5);
LAB_04836bc0:
    pcVar7 = (code *)*puVar4;
    uVar5 = puVar4[1];
  }
  uVar2 = (*pcVar7)(plVar3,uVar5);
LAB_04836be0:
  in_stack_00000008 = 0;
  FUN_0481dc04(&stack0x00000008,uVar2,*(undefined8 *)PTR_DAT_06f8dec8);
  return in_stack_00000008;
code_r0x04836a2c:
  uVar8 = uVar8 - 1;
  piVar9 = piVar9 + 4;
  if (uVar8 == 0) goto LAB_04836a38;
  goto LAB_04836a20;
}


