/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 03842058
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

void System_Array__InternalArray__ICollection_Remove<OVRPlugin_BodyJointLocation>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 in_w8;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x20;
  long unaff_x21;
  long *plStack0000000000000018;
  
  *(undefined1 *)(unaff_x21 + 0xf40) = in_w8;
  plStack0000000000000018 = (long *)0x0;
  System_Array__InternalArray__ICollection_Remove<OVRInput_OpenVRControllerDetails>();
  if (unaff_x20 == (long *)0x0) {
    thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
    uVar6 = thunk_FUN_0367fe20();
    uVar7 = thunk_FUN_036aa1c8(PTR_DAT_079fb728);
    FUN_05d7e1a0(uVar6,uVar7,0);
    uVar7 = thunk_FUN_036aa1c8(PTR_DAT_079fc0c8);
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar6,uVar7);
  }
  lVar8 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_079fc0b8) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_038420c0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_0367cd30();
LAB_038420c0:
  puVar3 = PTR_DAT_079fc0c0;
  puVar2 = PTR_DAT_079f49a8;
  puVar1 = PTR_DAT_079f4598;
  plStack0000000000000018 = (long *)(*(code *)*puVar5)();
  do {
    plVar4 = plStack0000000000000018;
    if (plStack0000000000000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar8 = *plStack0000000000000018;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03842144;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0367cd30(plStack0000000000000018,*(long *)puVar2,0);
LAB_03842144:
    uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    plVar4 = plStack0000000000000018;
    if ((uVar9 & 1) == 0) {
      if (plStack0000000000000018 == (long *)0x0) {
        return;
      }
      lVar8 = *plStack0000000000000018;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_03842204;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    if (plStack0000000000000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar8 = *plStack0000000000000018;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_038421a8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0367cd30(plStack0000000000000018,*(long *)puVar3,0);
LAB_038421a8:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
    FUN_03841f20();
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03842220;
    }
  }
LAB_03842204:
  puVar5 = (undefined8 *)FUN_0367cd30(plStack0000000000000018,*(long *)puVar1,0);
LAB_03842220:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


