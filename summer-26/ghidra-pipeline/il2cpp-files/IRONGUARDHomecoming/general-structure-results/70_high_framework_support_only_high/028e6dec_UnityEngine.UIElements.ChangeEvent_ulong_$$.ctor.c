/*
FUNCTION_NAME: UnityEngine.UIElements.ChangeEvent<ulong>$$.ctor
ENTRY_POINT: 028e6dec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x028e6f44) */

void UnityEngine_UIElements_ChangeEvent<ulong>___ctor(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint in_w9;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  
  if (unaff_w21 < in_w9) {
    if (*(long *)(unaff_x22 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (unaff_w21 < *(uint *)(*(long *)(unaff_x22 + 0x30) + 0x18)) {
      lVar4 = (long)(int)unaff_w21;
      if (*(char *)(param_1 + lVar4 * 0x28 + 0x40) == '\0') {
        lVar6 = 0;
      }
      else {
        lVar6 = unaff_x19 - *(long *)(param_1 + lVar4 * 0x28 + 0x20);
      }
      iVar1 = *(int *)(param_1 + lVar4 * 0x28 + 0x44);
      FUN_0423eb70();
      plVar2 = (long *)FUN_027c4708((double)((float)(lVar6 + (-iVar1 & iVar1 >> 0x1f)) / 1000.0),0,0
                                    ,*(undefined8 *)
                                      Method_System_Linq_Enumerable_All<KeyValuePair<TurretType,_TurretBase>>__
                                   );
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar2);
      (**(code **)(*unaff_x20 + 0x198))();
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_028e6f10;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(plVar2,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_028e6f10:
      (*(code *)*puVar3)(plVar2,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


