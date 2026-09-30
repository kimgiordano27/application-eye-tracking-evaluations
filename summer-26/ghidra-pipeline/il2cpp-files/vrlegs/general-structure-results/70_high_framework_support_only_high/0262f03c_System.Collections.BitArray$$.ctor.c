/*
FUNCTION_NAME: System.Collections.BitArray$$.ctor
ENTRY_POINT: 0262f03c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0262f5c4) */
/* WARNING: Removing unreachable block (ram,0x0262f540) */
/* WARNING: Removing unreachable block (ram,0x0262f5ec) */
/* WARNING: Removing unreachable block (ram,0x0262f5dc) */

long System_Collections_BitArray___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar14;
  undefined8 uVar15;
  char cStack000000000000000c;
  
  *(undefined1 *)(unaff_x21 + 0x4f) = 1;
  if ((unaff_x20 != 0) && (lVar5 = thunk_FUN_01a89d6c(), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0();
  }
  puVar2 = PTR_DAT_03cf2168;
  lVar5 = *(long *)PTR_DAT_03cf2168;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar2;
  }
  plVar6 = (long *)**(long **)(lVar5 + 0xb8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar7 = (**(code **)(*plVar6 + 0x2d8))(plVar6,*(undefined8 *)(*plVar6 + 0x2e0));
  cStack000000000000000c = '\0';
  FUN_027e0bd8(uVar7,&stack0x0000000c,0);
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar2;
  }
  plVar6 = (long *)**(long **)(lVar5 + 0xb8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar6 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
  puVar4 = PTR_DAT_03cf2770;
  puVar3 = PTR_DAT_03cf2360;
  puVar1 = PTR_DAT_03cbed20;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  do {
    do {
      lVar10 = *plVar6;
      lVar5 = *(long *)puVar1;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar5) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0262f160;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(plVar6,lVar5,0);
LAB_0262f160:
      uVar12 = (*(code *)*puVar8)(plVar6,puVar8[1]);
      if ((uVar12 & 1) == 0) {
        lVar5 = 0;
        uVar14 = 5;
        goto LAB_0262f244;
      }
      lVar10 = *plVar6;
      lVar5 = *(long *)puVar1;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar5) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_0262f1c0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(plVar6,lVar5,1);
LAB_0262f1c0:
      lVar5 = (*(code *)*puVar8)(plVar6,puVar8[1]);
      if (lVar5 == 0) {
        lVar10 = 0;
      }
      else {
        uVar15 = *(undefined8 *)puVar3;
        lVar10 = thunk_FUN_01a89d6c(lVar5,uVar15);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(lVar5,uVar15);
        }
      }
      lVar5 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)puVar4);
    } while (lVar5 == 0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar5 = FUN_0263a118(lVar5);
  } while (lVar5 == 0);
  uVar14 = 4;
LAB_0262f244:
  plVar6 = (long *)thunk_FUN_01a89d6c(plVar6,*(undefined8 *)PTR_DAT_03cbed08);
  if (plVar6 != (long *)0x0) {
    lVar10 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0262f2b4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)PTR_DAT_03cbed08,0);
LAB_0262f2b4:
    (*(code *)*puVar8)(plVar6,puVar8[1]);
  }
  if ((uVar14 == 5) || (uVar14 == 0)) {
    if (*(int *)(*(long *)PTR_DAT_03cf2220 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02622b38();
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar10 = *(long *)puVar2;
    }
    plVar6 = *(long **)(*(long *)(lVar10 + 0xb8) + 8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
    puVar3 = PTR_DAT_03cf2770;
    puVar1 = PTR_DAT_03cbed20;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    do {
      lVar11 = *plVar6;
      lVar10 = *(long *)puVar1;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0262f384;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(plVar6,lVar10,0);
LAB_0262f384:
      uVar12 = (*(code *)*puVar8)(plVar6,puVar8[1]);
      if ((uVar12 & 1) == 0) {
        uVar14 = 8;
        goto LAB_0262f4b8;
      }
      lVar11 = *plVar6;
      lVar10 = *(long *)puVar1;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_0262f3e4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(plVar6,lVar10,1);
LAB_0262f3e4:
      lVar10 = (*(code *)*puVar8)(plVar6,puVar8[1]);
      if (lVar10 == 0) {
        lVar11 = 0;
      }
      else {
        uVar15 = *(undefined8 *)puVar3;
        lVar11 = thunk_FUN_01a89d6c(lVar10,uVar15);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(lVar10,uVar15);
        }
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar10 = FUN_0263a118(lVar11);
    } while (lVar10 == 0);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *(long *)puVar2;
    }
    plVar9 = *(long **)(*(long *)(lVar5 + 0xb8) + 8);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar9 + 0x3c8))(plVar9,lVar11,*(undefined8 *)(*plVar9 + 0x3d0));
    FUN_0263a334(lVar11);
    uVar14 = 4;
    lVar5 = lVar10;
LAB_0262f4b8:
    plVar6 = (long *)thunk_FUN_01a89d6c(plVar6,*(undefined8 *)PTR_DAT_03cbed08);
    if (plVar6 != (long *)0x0) {
      lVar10 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03cbed08) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0262f528;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)PTR_DAT_03cbed08,0);
LAB_0262f528:
      (*(code *)*puVar8)(plVar6,puVar8[1]);
    }
  }
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
  }
  if ((uVar14 | 8) == 8) {
    *unaff_x19 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar5 = 0;
  }
  return lVar5;
}


