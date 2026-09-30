/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 036d5184
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
  undefined1 in_ZR;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong in_x9;
  int *in_x10;
  int *piVar6;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x27;
  
  do {
    if ((bool)in_ZR) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_036d51b0;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_015c2a80();
LAB_036d51b0:
        uVar3 = (*(code *)*puVar2)();
        if ((uVar3 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_015d0480();
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar5 = *plVar4;
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar3 == 0) goto LAB_036d531c;
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_036d5304;
        }
        lVar5 = *unaff_x22;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x24) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_036d5210;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_015c2a80();
LAB_036d5210:
        plVar4 = (long *)(*(code *)*puVar2)();
        if (plVar4 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x25 + 300);
          if ((*(byte *)(*plVar4 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x25)) {
                    /* WARNING: Subroutine does not return */
            FUN_0160f170(plVar4);
          }
        }
        lVar5 = FUN_036f0df8();
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        plVar4 = (long *)FUN_03fbac38(lVar5,plVar4[0x10],0);
        if (plVar4 == (long *)0x0) {
          if ((unaff_x21 == 0) || (uVar3 = FUN_036f0830(), (uVar3 & 1) == 0)) {
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
        param_1 = *unaff_x22;
        param_3 = *unaff_x24;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12a);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
LAB_036d5304:
    if (*(long *)(piVar6 + -2) == *unaff_x27) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_036d5338;
    }
  }
LAB_036d531c:
  puVar2 = (undefined8 *)FUN_015c2a80(plVar4,*unaff_x27,0);
LAB_036d5338:
  (*(code *)*puVar2)(plVar4,puVar2[1]);
  return;
}


