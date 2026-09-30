/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$set_Item
ENTRY_POINT: 036d7730
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x036d79cc) */
/* WARNING: Removing unreachable block (ram,0x036d79d0) */
/* WARNING: Removing unreachable block (ram,0x036d7a80) */
/* WARNING: Removing unreachable block (ram,0x036d7b00) */

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__set_Item(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x21;
  long in_stack_00000000;
  undefined8 in_stack_00000018;
  
  puVar2 = PTR_DAT_06e636c0;
  lVar7 = *param_1;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06e1d6c8) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_036d7794;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_015c2a80(param_1,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d7794:
  plVar4 = (long *)(*(code *)*puVar3)(param_1,puVar3[1]);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  do {
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_036d77fc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_015c2a80(plVar4,*unaff_x21,0);
LAB_036d77fc:
    uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar9 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_015d0480(plVar4,*(undefined8 *)puVar2);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar4;
      lVar7 = *(long *)puVar2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 == 0) goto LAB_036d797c;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_036d785c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_015c2a80(plVar4,*unaff_x21,1);
LAB_036d785c:
    plVar5 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
      if ((*(byte *)(*plVar5 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e2c7d8))
      {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar5);
      }
    }
    lVar7 = FUN_036f2d10(in_stack_00000018,0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    plVar6 = (long *)FUN_03fbac38(lVar7,plVar5[0x10],0);
    if (plVar6 == (long *)0x0) {
      if ((in_stack_00000000 == 0) ||
         (uVar9 = FUN_036f0830(in_stack_00000000,plVar5[0x10],0), (uVar9 & 1) == 0)) {
        FUN_01fbafc0();
      }
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
      if ((*(byte *)(*plVar6 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e2c7d8))
      {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170();
      }
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == lVar7) {
      puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_036d7998;
    }
  }
LAB_036d797c:
  puVar3 = (undefined8 *)FUN_015c2a80(plVar4,lVar7,0);
LAB_036d7998:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


