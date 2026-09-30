/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$get_Length
ENTRY_POINT: 036d76a8
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x036d79cc) */
/* WARNING: Removing unreachable block (ram,0x036d79d0) */
/* WARNING: Removing unreachable block (ram,0x036d7b00) */

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__get_Length(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  int unaff_w25;
  long *unaff_x26;
  long in_stack_00000000;
  undefined8 in_stack_00000018;
  
  uVar9 = (ulong)*(ushort *)(param_1 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x26) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_036d76f4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_015c2a80(param_2,*unaff_x26,0);
LAB_036d76f4:
  (*(code *)*puVar3)(param_2,puVar3[1]);
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0164c380();
  }
  if ((unaff_w25 != 0x23) && (unaff_w25 != 0)) {
    return;
  }
  if ((unaff_x19 == 0) ||
     ((lVar4 = FUN_036f2d10(), lVar4 == 0 ||
      (plVar5 = (long *)FUN_03fbacb0(lVar4,0), puVar2 = PTR_DAT_06e636c0, plVar5 == (long *)0x0))))
  {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar4 = *plVar5;
  uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06e1d6c8) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_036d7794;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_015c2a80(plVar5,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d7794:
  plVar5 = (long *)(*(code *)*puVar3)(plVar5,puVar3[1]);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  do {
    lVar4 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_036d77fc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_015c2a80(plVar5,*unaff_x21,0);
LAB_036d77fc:
    uVar9 = (*(code *)*puVar3)(plVar5,puVar3[1]);
    if ((uVar9 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_015d0480(plVar5,*(undefined8 *)puVar2);
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar5;
      lVar4 = *(long *)puVar2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 == 0) goto LAB_036d797c;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar4 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_036d785c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_015c2a80(plVar5,*unaff_x21,1);
LAB_036d785c:
    plVar6 = (long *)(*(code *)*puVar3)(plVar5,puVar3[1]);
    if (plVar6 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
      if ((*(byte *)(*plVar6 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e2c7d8))
      {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar6);
      }
    }
    lVar4 = FUN_036f2d10(in_stack_00000018,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    plVar7 = (long *)FUN_03fbac38(lVar4,plVar6[0x10],0);
    if (plVar7 == (long *)0x0) {
      if ((in_stack_00000000 == 0) ||
         (uVar9 = FUN_036f0830(in_stack_00000000,plVar6[0x10],0), (uVar9 & 1) == 0)) {
        FUN_01fbafc0();
      }
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
      if ((*(byte *)(*plVar7 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e2c7d8))
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
    if (*(long *)(piVar10 + -2) == lVar4) {
      puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_036d7998;
    }
  }
LAB_036d797c:
  puVar3 = (undefined8 *)FUN_015c2a80(plVar5,lVar4,0);
LAB_036d7998:
  (*(code *)*puVar3)(plVar5,puVar3[1]);
  return;
}


