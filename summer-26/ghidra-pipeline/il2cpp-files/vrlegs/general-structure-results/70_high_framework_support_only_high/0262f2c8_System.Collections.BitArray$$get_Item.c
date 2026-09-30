/*
FUNCTION_NAME: System.Collections.BitArray$$get_Item
ENTRY_POINT: 0262f2c8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0262f5c4) */
/* WARNING: Removing unreachable block (ram,0x0262f540) */
/* WARNING: Removing unreachable block (ram,0x0262f5ec) */

long System_Collections_BitArray__get_Item(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool in_ZR;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *unaff_x19;
  long unaff_x21;
  uint unaff_w25;
  undefined8 uVar11;
  undefined8 unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
  if ((in_ZR) || (unaff_w25 == 0)) {
    if (*(int *)(*(long *)PTR_DAT_03cf2220 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02622b38();
    lVar3 = *unaff_x29;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *unaff_x29;
    }
    plVar4 = *(long **)(*(long *)(lVar3 + 0xb8) + 8);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x388))(plVar4,*(undefined8 *)(*plVar4 + 0x390));
    puVar2 = PTR_DAT_03cf2770;
    puVar1 = PTR_DAT_03cbed20;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    do {
      lVar8 = *plVar4;
      lVar3 = *(long *)puVar1;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar3) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0262f384;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01a472ec(plVar4,lVar3,0);
LAB_0262f384:
      uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar9 & 1) == 0) {
        unaff_w25 = 8;
        goto LAB_0262f4b8;
      }
      lVar8 = *plVar4;
      lVar3 = *(long *)puVar1;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar3) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0262f3e4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01a472ec(plVar4,lVar3,1);
LAB_0262f3e4:
      lVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if (lVar3 == 0) {
        lVar8 = 0;
      }
      else {
        uVar11 = *(undefined8 *)puVar2;
        lVar8 = thunk_FUN_01a89d6c(lVar3,uVar11);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(lVar3,uVar11);
        }
      }
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar3 = FUN_0263a118(lVar8);
    } while (lVar3 == 0);
    lVar6 = *unaff_x29;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *unaff_x29;
    }
    plVar7 = *(long **)(*(long *)(lVar6 + 0xb8) + 8);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar7 + 0x3c8))(plVar7,lVar8,*(undefined8 *)(*plVar7 + 0x3d0));
    FUN_0263a334(lVar8);
    unaff_w25 = 4;
    unaff_x21 = lVar3;
LAB_0262f4b8:
    plVar4 = (long *)thunk_FUN_01a89d6c(plVar4,*(undefined8 *)PTR_DAT_03cbed08);
    if (plVar4 != (long *)0x0) {
      lVar3 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03cbed08) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0262f528;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01a472ec(plVar4,*(long *)PTR_DAT_03cbed08,0);
LAB_0262f528:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
  }
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(unaff_x28,0);
  }
  if ((unaff_w25 | 8) == 8) {
    *unaff_x19 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    unaff_x21 = 0;
  }
  return unaff_x21;
}


