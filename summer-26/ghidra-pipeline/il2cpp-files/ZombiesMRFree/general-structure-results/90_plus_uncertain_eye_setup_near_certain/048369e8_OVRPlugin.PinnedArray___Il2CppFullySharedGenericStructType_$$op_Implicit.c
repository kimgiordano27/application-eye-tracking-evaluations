/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$op_Implicit
ENTRY_POINT: 048369e8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>__op_Implicit(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  puVar1 = PTR_DAT_06f80978;
  if (unaff_x20 == 0) {
    uVar2 = 0;
    goto LAB_04836be0;
  }
  plVar3 = (long *)thunk_FUN_03010710();
  if (plVar3 == (long *)0x0) {
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x40);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      FUN_02feb2c4(lVar5);
    }
    plVar3 = (long *)thunk_FUN_03010710();
    if (plVar3 != (long *)0x0) {
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x40);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4(lVar5);
      }
      lVar7 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar5) {
            lVar7 = lVar7 + (long)*piVar10 * 0x10;
            goto LAB_04836bbc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      uVar6 = 0;
      goto LAB_04836af8;
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      FUN_02feb2c4(lVar5);
    }
    plVar3 = (long *)thunk_FUN_03010710();
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4(lVar5);
    }
    lVar7 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04836c08;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02feb5b8(plVar3,lVar5,0);
LAB_04836c08:
    pcVar8 = (code *)*puVar4;
    uVar6 = puVar4[1];
  }
  else {
    lVar7 = *plVar3;
    lVar5 = *(long *)puVar1;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
LAB_04836a20:
      if (*(long *)(piVar10 + -2) != lVar5) goto code_r0x04836a2c;
      lVar7 = lVar7 + (long)(*piVar10 + 1) * 0x10;
LAB_04836bbc:
      puVar4 = (undefined8 *)(lVar7 + 0x138);
      goto LAB_04836bc0;
    }
LAB_04836a38:
    uVar6 = 1;
LAB_04836af8:
    puVar4 = (undefined8 *)FUN_02feb5b8(plVar3,lVar5,uVar6);
LAB_04836bc0:
    pcVar8 = (code *)*puVar4;
    uVar6 = puVar4[1];
  }
  uVar2 = (*pcVar8)(plVar3,uVar6);
LAB_04836be0:
  in_stack_00000008 = 0;
  FUN_0481dc04(&stack0x00000008,uVar2,*(undefined8 *)PTR_DAT_06f8dec8);
  return in_stack_00000008;
code_r0x04836a2c:
  uVar9 = uVar9 - 1;
  piVar10 = piVar10 + 4;
  if (uVar9 == 0) goto LAB_04836a38;
  goto LAB_04836a20;
}


