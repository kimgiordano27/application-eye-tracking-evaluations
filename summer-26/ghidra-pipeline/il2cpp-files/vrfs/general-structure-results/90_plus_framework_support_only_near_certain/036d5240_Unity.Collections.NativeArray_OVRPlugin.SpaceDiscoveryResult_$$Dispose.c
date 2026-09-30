/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 036d5240
PROGRAM: vrfs-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x036d53ac) */

void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong in_x9;
  int *piVar6;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x27;
  
  while (*(long *)(param_1 + in_x9 * 8 + -8) == param_3) {
    do {
      lVar3 = FUN_036f0df8();
      if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      plVar4 = (long *)FUN_03fbac38(lVar3,unaff_x23[0x10],0);
      if (plVar4 == (long *)0x0) {
        if ((unaff_x21 == 0) || (uVar5 = FUN_036f0830(), (uVar5 & 1) == 0)) {
          FUN_01fbafc0();
        }
      }
      else {
        bVar1 = *(byte *)(*unaff_x25 + 300);
        if ((*(byte *)(*plVar4 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x25)) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170();
        }
      }
      lVar3 = *unaff_x22;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_036d51b0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80();
LAB_036d51b0:
      uVar5 = (*(code *)*puVar2)();
      if ((uVar5 & 1) == 0) {
        plVar4 = (long *)thunk_FUN_015d0480();
        if (plVar4 == (long *)0x0) {
          return;
        }
        lVar3 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar5 == 0) goto LAB_036d531c;
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_036d5304;
      }
      lVar3 = *unaff_x22;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_036d5210;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80();
LAB_036d5210:
      unaff_x23 = (long *)(*(code *)*puVar2)();
    } while (unaff_x23 == (long *)0x0);
    param_3 = *unaff_x25;
    in_x9 = (ulong)*(byte *)(param_3 + 300);
    if (*(byte *)(*unaff_x23 + 300) < *(byte *)(param_3 + 300)) break;
    param_1 = *(long *)(*unaff_x23 + 200);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160f170(unaff_x23);
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_036d5304:
    if (*(long *)(piVar6 + -2) == *unaff_x27) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_036d5338;
    }
  }
LAB_036d531c:
  puVar2 = (undefined8 *)FUN_015c2a80(plVar4,*unaff_x27,0);
LAB_036d5338:
  (*(code *)*puVar2)(plVar4,puVar2[1]);
  return;
}


