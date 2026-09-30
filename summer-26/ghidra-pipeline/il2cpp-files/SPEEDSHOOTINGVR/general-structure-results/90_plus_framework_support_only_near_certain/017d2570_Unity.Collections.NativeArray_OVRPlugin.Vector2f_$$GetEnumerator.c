/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$GetEnumerator
ENTRY_POINT: 017d2570
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x017d26a0) */

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetEnumerator
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong in_x9;
  int *in_x10;
  int *piVar6;
  long in_x11;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_017d25a0;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_0103c348();
LAB_017d25a0:
        uVar2 = (*(code *)*puVar1)();
        lVar3 = *(long *)(unaff_x21 + 0x10);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        uVar4 = *(uint *)(unaff_x21 + 0x18);
        if (uVar4 == *(uint *)(lVar3 + 0x18)) {
          FUN_017d100c();
          uVar4 = *(uint *)(unaff_x21 + 0x18);
          lVar3 = *(long *)(unaff_x21 + 0x10);
          *(uint *)(unaff_x21 + 0x18) = uVar4 + 1;
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
        }
        else {
          *(uint *)(unaff_x21 + 0x18) = uVar4 + 1;
        }
        if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        *(undefined8 *)(lVar3 + (long)(int)uVar4 * 8 + 0x20) = uVar2;
        lVar3 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x24) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_017d2528;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar1 = (undefined8 *)FUN_0103c348();
LAB_017d2528:
        uVar5 = (*(code *)*puVar1)();
        if ((uVar5 & 1) == 0) {
          if (unaff_x19 == (long *)0x0) {
            return;
          }
          lVar3 = *unaff_x19;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar5 == 0)
          goto 
          Unity_Collections_NativeArray<OVRPlugin_Vector2f>__System_Collections_IEnumerable_GetEnumerator
          ;
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_017d2634;
        }
        param_3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
        if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_0103c244(param_3);
        }
        param_1 = *unaff_x19;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_017d2634:
    if (*(long *)(piVar6 + -2) == *unaff_x23) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_017d2668;
    }
  }
Unity_Collections_NativeArray<OVRPlugin_Vector2f>__System_Collections_IEnumerable_GetEnumerator:
  puVar1 = (undefined8 *)FUN_0103c348();
LAB_017d2668:
  (*(code *)*puVar1)();
  return;
}


