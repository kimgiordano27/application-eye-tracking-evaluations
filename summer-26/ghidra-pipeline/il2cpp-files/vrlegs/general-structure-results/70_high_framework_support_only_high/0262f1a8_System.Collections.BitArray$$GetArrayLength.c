/*
FUNCTION_NAME: System.Collections.BitArray$$GetArrayLength
ENTRY_POINT: 0262f1a8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0262f5c4) */
/* WARNING: Removing unreachable block (ram,0x0262f540) */
/* WARNING: Removing unreachable block (ram,0x0262f5ec) */
/* WARNING: Removing unreachable block (ram,0x0262f5dc) */

long System_Collections_BitArray__GetArrayLength(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x24;
  uint uVar11;
  undefined8 uVar12;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
code_r0x0262f1a8:
  puVar3 = (undefined8 *)FUN_01a472ec();
  do {
    lVar4 = (*(code *)*puVar3)();
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      uVar12 = *unaff_x27;
      lVar5 = thunk_FUN_01a89d6c(lVar4,uVar12);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar4,uVar12);
      }
    }
    lVar4 = thunk_FUN_01a89d6c(lVar5,*unaff_x20);
    if (lVar4 != 0) {
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar4 = FUN_0263a118(lVar4);
      if (lVar4 == 0) goto LAB_0262f114;
      uVar11 = 4;
LAB_0262f244:
      plVar6 = (long *)thunk_FUN_01a89d6c();
      if (plVar6 == (long *)0x0) goto LAB_0262f2c0;
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 == 0) goto LAB_0262f298;
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
LAB_0262f114:
    lVar4 = *unaff_x24;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0262f160;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01a472ec();
LAB_0262f160:
    uVar9 = (*(code *)*puVar3)();
    if ((uVar9 & 1) == 0) {
      lVar4 = 0;
      uVar11 = 5;
      goto LAB_0262f244;
    }
    lVar4 = *unaff_x24;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 == 0) goto code_r0x0262f1a8;
    piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    while (*(long *)(piVar10 + -2) != *unaff_x26) {
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
      if (uVar9 == 0) goto code_r0x0262f1a8;
    }
    puVar3 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0262f2b4;
    }
  }
LAB_0262f298:
  puVar3 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)PTR_DAT_03cbed08,0);
LAB_0262f2b4:
  (*(code *)*puVar3)(plVar6,puVar3[1]);
LAB_0262f2c0:
  if ((uVar11 == 5) || (uVar11 == 0)) {
    if (*(int *)(*(long *)PTR_DAT_03cf2220 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02622b38();
    lVar5 = *unaff_x29;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *unaff_x29;
    }
    plVar6 = *(long **)(*(long *)(lVar5 + 0xb8) + 8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
    puVar2 = PTR_DAT_03cf2770;
    puVar1 = PTR_DAT_03cbed20;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    do {
      lVar8 = *plVar6;
      lVar5 = *(long *)puVar1;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0262f384;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_01a472ec(plVar6,lVar5,0);
LAB_0262f384:
      uVar9 = (*(code *)*puVar3)(plVar6,puVar3[1]);
      if ((uVar9 & 1) == 0) {
        uVar11 = 8;
        goto LAB_0262f4b8;
      }
      lVar8 = *plVar6;
      lVar5 = *(long *)puVar1;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0262f3e4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_01a472ec(plVar6,lVar5,1);
LAB_0262f3e4:
      lVar5 = (*(code *)*puVar3)(plVar6,puVar3[1]);
      if (lVar5 == 0) {
        lVar8 = 0;
      }
      else {
        uVar12 = *(undefined8 *)puVar2;
        lVar8 = thunk_FUN_01a89d6c(lVar5,uVar12);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(lVar5,uVar12);
        }
      }
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar5 = FUN_0263a118(lVar8);
    } while (lVar5 == 0);
    lVar4 = *unaff_x29;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *unaff_x29;
    }
    plVar7 = *(long **)(*(long *)(lVar4 + 0xb8) + 8);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar7 + 0x3c8))(plVar7,lVar8,*(undefined8 *)(*plVar7 + 0x3d0));
    FUN_0263a334(lVar8);
    uVar11 = 4;
    lVar4 = lVar5;
LAB_0262f4b8:
    plVar6 = (long *)thunk_FUN_01a89d6c(plVar6,*(undefined8 *)PTR_DAT_03cbed08);
    if (plVar6 != (long *)0x0) {
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03cbed08) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0262f528;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)PTR_DAT_03cbed08,0);
LAB_0262f528:
      (*(code *)*puVar3)(plVar6,puVar3[1]);
    }
  }
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(unaff_x28,0);
  }
  if ((uVar11 | 8) == 8) {
    *unaff_x19 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar4 = 0;
  }
  return lVar4;
}


