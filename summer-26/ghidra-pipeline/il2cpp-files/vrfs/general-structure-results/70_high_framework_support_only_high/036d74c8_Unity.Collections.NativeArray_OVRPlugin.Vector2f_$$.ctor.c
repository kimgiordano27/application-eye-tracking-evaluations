/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 036d74c8
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x036d7b00) */
/* WARNING: Removing unreachable block (ram,0x036d770c) */
/* WARNING: Removing unreachable block (ram,0x036d79cc) */
/* WARNING: Removing unreachable block (ram,0x036d79d0) */
/* WARNING: Removing unreachable block (ram,0x036d7acc) */

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong in_x9;
  int *in_x10;
  int *piVar10;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x24;
  long in_stack_00000000;
  undefined8 in_stack_00000018;
  
code_r0x036d74c8:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_036d74b8;
LAB_036d74d0:
  puVar3 = (undefined8 *)FUN_015c2a80();
  do {
    plVar4 = (long *)(*(code *)*puVar3)();
    if (plVar4 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
      if ((*(byte *)(*plVar4 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e2c7d8))
      {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar4);
      }
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar5 = FUN_036f2d10();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    plVar6 = (long *)FUN_03fbac38(lVar5,plVar4[0x10],0);
    if (plVar6 == (long *)0x0) {
      lVar5 = FUN_036f2d10();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_03fba610(lVar5,plVar4[0x10],plVar4,0);
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
      if ((*(byte *)(*plVar6 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e2c7d8))
      {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar6);
      }
      if (*(int *)((long)plVar4 + 0x6c) == 3) {
        if (*(int *)((long)plVar6 + 0x6c) == 3) {
LAB_036d7624:
          if (((plVar4[0x12] == 0) || (plVar6[0x12] == 0)) ||
             (uVar9 = FUN_03fc5448(plVar6[0x12],plVar4[0x12],0,0), (uVar9 & 1) == 0)) {
            FUN_01fbafc0();
          }
          else {
            uVar9 = FUN_036dc9b0(uVar9,plVar4[0x13],plVar6[0x13]);
            if ((uVar9 & 1) == 0) {
              FUN_01fbafc0();
            }
          }
        }
        else {
          FUN_01fbafc0();
        }
      }
      else if (*(int *)((long)plVar4 + 0x6c) == 2) {
        if (*(int *)((long)plVar6 + 0x6c) != 2) {
          FUN_01fbafc0();
        }
      }
      else if (*(int *)((long)plVar6 + 0x6c) != 2) goto LAB_036d7624;
    }
    lVar5 = *unaff_x24;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_036d7490;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_015c2a80();
LAB_036d7490:
    uVar9 = (*(code *)*puVar3)();
    puVar2 = PTR_DAT_06e636c0;
    if ((uVar9 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_015d0480();
      if (plVar4 == (long *)0x0) goto LAB_036d7700;
      lVar5 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar9 == 0) goto LAB_036d76d8;
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    param_1 = *unaff_x24;
    param_3 = *unaff_x21;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12a);
    if (in_x9 == 0) goto LAB_036d74d0;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_036d74b8:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x036d74c8;
    }
    puVar3 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_036d76f4;
    }
  }
LAB_036d76d8:
  puVar3 = (undefined8 *)FUN_015c2a80(plVar4,*(long *)puVar2,0);
LAB_036d76f4:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_036d7700:
  if (((unaff_x19 == 0) || (lVar5 = FUN_036f2d10(), lVar5 == 0)) ||
     (plVar4 = (long *)FUN_03fbacb0(lVar5,0), puVar2 = PTR_DAT_06e636c0, plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar5 = *plVar4;
  uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06e1d6c8) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_036d7794;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_015c2a80(plVar4,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036d7794:
  plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  do {
    lVar5 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
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
      lVar5 = *(long *)puVar2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 == 0) goto LAB_036d797c;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_036d785c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_015c2a80(plVar4,*unaff_x21,1);
LAB_036d785c:
    plVar6 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
    if (plVar6 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
      if ((*(byte *)(*plVar6 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e2c7d8))
      {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar6);
      }
    }
    lVar5 = FUN_036f2d10(in_stack_00000018,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    plVar7 = (long *)FUN_03fbac38(lVar5,plVar6[0x10],0);
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
    if (*(long *)(piVar10 + -2) == lVar5) {
      puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_036d7998;
    }
  }
LAB_036d797c:
  puVar3 = (undefined8 *)FUN_015c2a80(plVar4,lVar5,0);
LAB_036d7998:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


