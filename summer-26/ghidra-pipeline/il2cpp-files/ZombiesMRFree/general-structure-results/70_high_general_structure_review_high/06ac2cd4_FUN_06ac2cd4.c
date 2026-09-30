/*
FUNCTION_NAME: FUN_06ac2cd4
ENTRY_POINT: 06ac2cd4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x06ac32e0) */

void FUN_06ac2cd4(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if ((DAT_073ab0c3 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f70b30);
    FUN_02fe925c(PTR_DAT_06f9b058);
    FUN_02fe925c(
                Unity_Entities_EntityComponentStore_SortEntityInChunk_0000063A_BurstDirectCall_TypeInfo
                );
    FUN_02fe925c(PTR_DAT_06f9b740);
    FUN_02fe925c(
                Unity_Entities_EntityDataAccess_BuildSharedComponentMapForMoving_0000077D_BurstDirectCall_TypeInfo
                );
    FUN_02fe925c(PTR_DAT_06f9b748);
    FUN_02fe925c(OVR_OpenVR_IVROverlay__IsHoverTargetOverlay_TypeInfo);
    FUN_02fe925c(OVR_OpenVR_IVROverlay__IsDashboardVisible_TypeInfo);
    FUN_02fe925c(System_Net_WebRequest_TypeInfo);
    DAT_073ab0c3 = 1;
  }
  puVar1 = PTR_DAT_06f9b058;
  if ((*(ushort *)(param_1 + 0x88) < 0x21) &&
     ((1L << ((ulong)*(ushort *)(param_1 + 0x88) & 0x3f) & 0x100000408U) != 0)) {
    plVar2 = (long *)FUN_04810210(1,*(undefined4 *)(param_1 + 0x84),
                                  *(undefined8 *)OVR_OpenVR_IVROverlay__IsDashboardVisible_TypeInfo)
    ;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_06abc4b0(plVar2,*(undefined8 *)(param_1 + 0x48));
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar6 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06ac2e90;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_02feb5b8(param_2,*(long *)puVar1,0);
LAB_06ac2e90:
    plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    (**(code **)(*plVar4 + 0x198))(plVar4,plVar2,*(undefined8 *)(*plVar4 + 0x1a0));
    if (plVar2 == (long *)0x0) {
      return;
    }
    lVar7 = *plVar2;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    lVar6 = *(long *)PTR_DAT_06f70b30;
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar6) goto LAB_06ac32b0;
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
  }
  else if (*(int *)(param_1 + 0x8c) == 0x1b) {
    plVar2 = (long *)FUN_04810210(1,*(undefined4 *)(param_1 + 0x84),
                                  *(undefined8 *)
                                   OVR_OpenVR_IVROverlay__IsHoverTargetOverlay_TypeInfo);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_06abc4b0(plVar2,*(undefined8 *)(param_1 + 0x48));
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar6 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06ac3028;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_02feb5b8(param_2,*(long *)puVar1,0);
LAB_06ac3028:
    plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    (**(code **)(*plVar4 + 0x198))(plVar4,plVar2,*(undefined8 *)(*plVar4 + 0x1a0));
    if (plVar2 == (long *)0x0) {
      return;
    }
    lVar7 = *plVar2;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    lVar6 = *(long *)PTR_DAT_06f70b30;
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar6) goto LAB_06ac32b0;
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
  }
  else {
    uVar9 = FUN_06ac35c4(param_1);
    if ((uVar9 & 1) == 0) {
      switch(*(undefined4 *)(param_1 + 0x8c)) {
      case 0x111:
        if (DAT_0738f43e == '\0') {
          FUN_02fe925c(PTR_DAT_06f6dde0);
          DAT_0738f43e = '\x01';
        }
        puVar8 = (undefined4 *)(*(long *)(*(long *)PTR_DAT_06f6dde0 + 0xb8) + 0x10);
        puVar10 = (undefined4 *)(*(long *)(*(long *)PTR_DAT_06f6dde0 + 0xb8) + 0x14);
        break;
      case 0x112:
        if (DAT_07395fdf == '\0') {
          FUN_02fe925c(PTR_DAT_06f6dde0);
          DAT_07395fdf = '\x01';
        }
        puVar8 = (undefined4 *)(*(long *)(*(long *)PTR_DAT_06f6dde0 + 0xb8) + 0x18);
        puVar10 = (undefined4 *)(*(long *)(*(long *)PTR_DAT_06f6dde0 + 0xb8) + 0x1c);
        break;
      case 0x113:
        if (DAT_0738f78c == '\0') {
          FUN_02fe925c(PTR_DAT_06f6dde0);
          DAT_0738f78c = '\x01';
        }
        puVar8 = (undefined4 *)(*(long *)(*(long *)PTR_DAT_06f6dde0 + 0xb8) + 0x28);
        puVar10 = (undefined4 *)(*(long *)(*(long *)PTR_DAT_06f6dde0 + 0xb8) + 0x2c);
        break;
      case 0x114:
        if (DAT_07395fde == '\0') {
          FUN_02fe925c(PTR_DAT_06f6dde0);
          DAT_07395fde = '\x01';
        }
        puVar8 = (undefined4 *)(*(long *)(*(long *)PTR_DAT_06f6dde0 + 0xb8) + 0x20);
        puVar10 = (undefined4 *)(*(long *)(*(long *)PTR_DAT_06f6dde0 + 0xb8) + 0x24);
        break;
      default:
        return;
      }
      uVar12 = *puVar10;
      uVar13 = *puVar8;
      uVar5 = *(undefined4 *)(param_1 + 0x84);
      if (*(int *)(*(long *)System_Net_WebRequest_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      plVar2 = (long *)FUN_06ac8b20(uVar13,uVar12,1,uVar5,0);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      FUN_06abc4b0(plVar2,*(undefined8 *)(param_1 + 0x48));
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      lVar6 = *param_2;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06ac324c;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_02feb5b8(param_2,*(long *)puVar1,0);
LAB_06ac324c:
      plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      (**(code **)(*plVar4 + 0x198))(plVar4,plVar2,*(undefined8 *)(*plVar4 + 0x1a0));
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar2;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      lVar6 = *(long *)PTR_DAT_06f70b30;
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar6) goto LAB_06ac32b0;
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
    }
    else {
      uVar9 = FUN_04248c2c(param_1,*(undefined8 *)PTR_DAT_06f9b748);
      uVar12 = *(undefined4 *)(param_1 + 0x84);
      uVar5 = 5;
      if ((uVar9 & 1) != 0) {
        uVar5 = 6;
      }
      if (*(int *)(*(long *)System_Net_WebRequest_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      plVar2 = (long *)FUN_06ac8ccc(uVar5,1,uVar12,0);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      FUN_06abc4b0(plVar2,*(undefined8 *)(param_1 + 0x48));
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      lVar6 = *param_2;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06ac3098;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_02feb5b8(param_2,*(long *)puVar1,0);
LAB_06ac3098:
      plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      (**(code **)(*plVar4 + 0x198))(plVar4,plVar2,*(undefined8 *)(*plVar4 + 0x1a0));
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar2;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      lVar6 = *(long *)PTR_DAT_06f70b30;
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar6) goto LAB_06ac32b0;
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
    }
  }
  puVar3 = (undefined8 *)FUN_02feb5b8(plVar2,lVar6,0);
LAB_06ac32bc:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
LAB_06ac32b0:
  puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
  goto LAB_06ac32bc;
}


