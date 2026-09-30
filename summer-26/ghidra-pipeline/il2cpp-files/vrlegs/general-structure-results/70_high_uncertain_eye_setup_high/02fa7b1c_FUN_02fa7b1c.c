/*
FUNCTION_NAME: FUN_02fa7b1c
ENTRY_POINT: 02fa7b1c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02fa7e88) */

bool FUN_02fa7b1c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  bool bVar10;
  undefined8 uVar11;
  char local_34 [4];
  
  if ((DAT_0412ae3d & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d142f0);
    FUN_01ab69ac(PTR_DAT_03d1f860);
    FUN_01ab69ac(PTR_DAT_03cf1d40);
    DAT_0412ae3d = 1;
  }
  local_34[0] = '\0';
  FUN_027e0bd8(param_1,local_34,0);
  if ((*(int *)(param_1 + 0x40) == 0) && (*(long *)(param_1 + 0x58) == 0)) {
    if (*(char *)(param_1 + 0x18) == '\0') {
      bVar10 = true;
      goto LAB_02fa7b98;
    }
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar8 = *(long **)(param_2 + 0x10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar9 = *(long *)(param_1 + 0x10);
    lVar2 = (**(code **)(*plVar8 + 0x268))(plVar8,*(undefined8 *)(*plVar8 + 0x270));
    if (lVar2 == 0) {
LAB_02fa7ca0:
      plVar3 = (long *)(**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
    }
    else {
      plVar3 = (long *)(**(code **)(*plVar8 + 0x268))(plVar8,*(undefined8 *)(*plVar8 + 0x270));
      uVar4 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
      puVar1 = PTR_DAT_03d1f860;
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar2 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03d1f860) {
            puVar5 = (undefined8 *)(lVar2 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_02fa7c8c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_01a472ec(plVar3,*(long *)PTR_DAT_03d1f860,1);
LAB_02fa7c8c:
      uVar6 = (*(code *)*puVar5)(plVar3,uVar4,puVar5[1]);
      if ((uVar6 & 1) != 0) goto LAB_02fa7ca0;
      plVar3 = (long *)(**(code **)(*plVar8 + 0x268))(plVar8,*(undefined8 *)(*plVar8 + 0x270));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar2 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar2 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_02fa7d24;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_01a472ec(plVar3,*(long *)puVar1,2);
LAB_02fa7d24:
      plVar3 = (long *)(*(code *)*puVar5)(plVar3,puVar5[1]);
    }
    if (plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
      lVar2 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
      uVar11 = *(undefined8 *)PTR_DAT_03cf1d40;
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03d142f0) {
            puVar5 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02fa7dac;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_01a472ec(plVar3,*(long *)PTR_DAT_03d142f0,0);
LAB_02fa7dac:
      lVar2 = (*(code *)*puVar5)(plVar3,uVar4,uVar11,puVar5[1]);
      bVar10 = false;
      if ((lVar9 == 0) || (bVar10 = false, lVar2 == 0)) goto LAB_02fa7b98;
      uVar4 = FUN_02f7a930(lVar9,0);
      uVar11 = FUN_02f7a930(lVar2,0);
      uVar6 = FUN_025bd4ac(uVar4,uVar11,0);
      if ((uVar6 & 1) == 0) {
        uVar4 = FUN_02f7a910(lVar9,0);
        uVar11 = FUN_02f7a910(lVar2,0);
        uVar6 = FUN_025bd4ac(uVar4,uVar11,0);
        if ((uVar6 & 1) == 0) {
          uVar4 = FUN_02f7a918(lVar9,0);
          uVar11 = FUN_02f7a918(lVar2,0);
          uVar6 = FUN_025bd4ac(uVar4,uVar11,0);
          if ((uVar6 & 1) == 0) {
            bVar10 = *(char *)((long)plVar8 + 0x191) != '\0' && *(char *)(param_1 + 0x19) != '\0';
            goto LAB_02fa7b98;
          }
        }
      }
    }
  }
  bVar10 = false;
LAB_02fa7b98:
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
  }
  return bVar10;
}


