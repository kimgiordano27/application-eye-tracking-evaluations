/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 036d7894
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x036d79cc) */
/* WARNING: Removing unreachable block (ram,0x036d79d0) */
/* WARNING: Removing unreachable block (ram,0x036d7a80) */
/* WARNING: Removing unreachable block (ram,0x036d7b00) */

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong in_x9;
  int *piVar6;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000018;
  
  while (*(long *)(param_1 + in_x9 * 8 + -8) == param_3) {
    do {
      lVar3 = FUN_036f2d10(in_stack_00000018,0);
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      plVar4 = (long *)FUN_03fbac38(lVar3,unaff_x20[0x10],0);
      if (plVar4 == (long *)0x0) {
        if ((unaff_x26 == 0) || (uVar5 = FUN_036f0830(), (uVar5 & 1) == 0)) {
          FUN_01fbafc0();
        }
      }
      else {
        bVar1 = *(byte *)(*(long *)PTR_DAT_06e2c7d8 + 300);
        if ((*(byte *)(*plVar4 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06e2c7d8
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170();
        }
      }
      lVar3 = *unaff_x23;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x21) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_036d77fc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80();
LAB_036d77fc:
      uVar5 = (*(code *)*puVar2)();
      if ((uVar5 & 1) == 0) {
        plVar4 = (long *)thunk_FUN_015d0480();
        if (plVar4 == (long *)0x0) {
          return;
        }
        lVar3 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar5 == 0) goto LAB_036d797c;
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_036d7964;
      }
      lVar3 = *unaff_x23;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x21) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_036d785c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80();
LAB_036d785c:
      unaff_x20 = (long *)(*(code *)*puVar2)();
    } while (unaff_x20 == (long *)0x0);
    param_3 = *(long *)PTR_DAT_06e2c7d8;
    in_x9 = (ulong)*(byte *)(param_3 + 300);
    if (*(byte *)(*unaff_x20 + 300) < *(byte *)(param_3 + 300)) break;
    param_1 = *(long *)(*unaff_x20 + 200);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160f170(unaff_x20);
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_036d7964:
    if (*(long *)(piVar6 + -2) == *unaff_x25) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_036d7998;
    }
  }
LAB_036d797c:
  puVar2 = (undefined8 *)FUN_015c2a80(plVar4,*unaff_x25,0);
LAB_036d7998:
  (*(code *)*puVar2)(plVar4,puVar2[1]);
  return;
}


