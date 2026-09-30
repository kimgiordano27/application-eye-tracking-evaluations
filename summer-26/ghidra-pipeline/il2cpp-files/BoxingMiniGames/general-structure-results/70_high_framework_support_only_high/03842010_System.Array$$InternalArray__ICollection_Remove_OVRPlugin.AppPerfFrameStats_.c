/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 03842010
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03842294) */

void System_Array__InternalArray__ICollection_Remove<OVRPlugin_AppPerfFrameStats>
               (undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_07ed7f40 & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4598);
    FUN_03642964(PTR_DAT_079fc0b8);
    FUN_03642964(PTR_DAT_079fc0c0);
    FUN_03642964(PTR_DAT_079f49a8);
    DAT_07ed7f40 = 1;
  }
  System_Array__InternalArray__ICollection_Remove<OVRInput_OpenVRControllerDetails>(param_1);
  if (param_2 == (long *)0x0) {
    thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
    uVar6 = thunk_FUN_0367fe20();
    uVar7 = thunk_FUN_036aa1c8(PTR_DAT_079fb728);
    FUN_05d7e1a0(uVar6,uVar7,0);
    uVar7 = thunk_FUN_036aa1c8(PTR_DAT_079fc0c8);
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar6,uVar7);
  }
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_079fc0b8) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_038420c0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_0367cd30(param_2,*(long *)PTR_DAT_079fc0b8,0);
LAB_038420c0:
  puVar3 = PTR_DAT_079fc0c0;
  puVar2 = PTR_DAT_079f49a8;
  puVar1 = PTR_DAT_079f4598;
  plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  do {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03842144;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)puVar2,0);
LAB_03842144:
    uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_03842204;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_038421a8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)puVar3,0);
LAB_038421a8:
    uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    FUN_03841f20(param_1,uVar6);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03842220;
    }
  }
LAB_03842204:
  puVar4 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)puVar1,0);
LAB_03842220:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return;
}


