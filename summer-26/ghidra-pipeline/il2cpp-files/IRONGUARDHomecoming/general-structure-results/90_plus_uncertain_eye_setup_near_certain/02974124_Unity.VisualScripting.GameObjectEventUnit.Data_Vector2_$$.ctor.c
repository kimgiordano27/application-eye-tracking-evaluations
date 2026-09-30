/*
FUNCTION_NAME: Unity.VisualScripting.GameObjectEventUnit.Data<Vector2>$$.ctor
ENTRY_POINT: 02974124
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029741bc) */

void Unity_VisualScripting_GameObjectEventUnit_Data<Vector2>___ctor(void)

{
  bool in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long lVar6;
  
  if (!in_ZR) {
    if (unaff_x19 != (long *)0x0) {
      lVar6 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_029741a4;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029741a4:
      (*(code *)*puVar1)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14();
  }
  plVar2 = (long *)__cxa_begin_catch();
  lVar6 = *plVar2;
  __cxa_end_catch();
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto FUN_029740e0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
FUN_029740e0:
    (*(code *)*puVar1)();
  }
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01eed990(lVar6);
}


