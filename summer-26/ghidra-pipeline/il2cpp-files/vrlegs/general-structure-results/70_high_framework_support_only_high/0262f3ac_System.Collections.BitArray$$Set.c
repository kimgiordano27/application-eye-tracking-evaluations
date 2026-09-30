/*
FUNCTION_NAME: System.Collections.BitArray$$Set
ENTRY_POINT: 0262f3ac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0262f5c4) */
/* WARNING: Removing unreachable block (ram,0x0262f5ec) */
/* WARNING: Removing unreachable block (ram,0x0262f540) */

long System_Collections_BitArray__Set(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x24;
  uint uVar8;
  undefined8 uVar9;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
        goto LAB_0262f3e4;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_01a472ec();
LAB_0262f3e4:
      lVar2 = (*(code *)*puVar1)();
      if (lVar2 == 0) {
        lVar3 = 0;
      }
      else {
        uVar9 = *unaff_x28;
        lVar3 = thunk_FUN_01a89d6c(lVar2,uVar9);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(lVar2,uVar9);
        }
      }
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar2 = FUN_0263a118(lVar3);
      if (lVar2 != 0) {
        lVar4 = *unaff_x29;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar4 = *unaff_x29;
        }
        plVar5 = *(long **)(*(long *)(lVar4 + 0xb8) + 8);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(*plVar5 + 0x3c8))(plVar5,lVar3,*(undefined8 *)(*plVar5 + 0x3d0));
        FUN_0263a334(lVar3);
        uVar8 = 4;
        unaff_x21 = lVar2;
LAB_0262f4b8:
        plVar5 = (long *)thunk_FUN_01a89d6c();
        if (plVar5 == (long *)0x0) goto LAB_0262f534;
        lVar2 = *plVar5;
        uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar6 == 0) goto LAB_0262f50c;
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_0262f4f4;
      }
      lVar2 = *unaff_x24;
      uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x20) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0262f384;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)FUN_01a472ec();
LAB_0262f384:
      uVar6 = (*(code *)*puVar1)();
      if ((uVar6 & 1) == 0) {
        uVar8 = 8;
        goto LAB_0262f4b8;
      }
      param_1 = *unaff_x24;
      param_3 = *unaff_x20;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_0262f4f4:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0262f528;
    }
  }
LAB_0262f50c:
  puVar1 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)PTR_DAT_03cbed08,0);
LAB_0262f528:
  (*(code *)*puVar1)(plVar5,puVar1[1]);
LAB_0262f534:
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000000,0);
  }
  if ((uVar8 | 8) == 8) {
    *unaff_x19 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    unaff_x21 = 0;
  }
  return unaff_x21;
}


