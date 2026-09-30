/*
FUNCTION_NAME: FUN_03ab0458
ENTRY_POINT: 03ab0458
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined1  [16] FUN_03ab0458(long param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_04838fe1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<BezierKnot>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04838fe1 = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  plVar9 = *(long **)(param_1 + 0x18);
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_03ab04f8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar9,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,1);
LAB_03ab04f8:
    plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
    puVar3 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
    if (plVar9 != (long *)0x0) {
      if (*(long *)(*plVar9 + 0x40) !=
          *(long *)(*(long *)Method_System_Linq_Enumerable_ToList<BezierKnot>__ + 0x40)) {
LAB_03ab05e8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      puVar4 = (undefined8 *)thunk_FUN_01f11920();
      plVar9 = *(long **)(param_1 + 0x18);
      if (plVar9 != (long *)0x0) {
        lVar5 = *plVar9;
        uVar8 = *puVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_03ab0588;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,1);
LAB_03ab0588:
        plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
        if (plVar9 != (long *)0x0) {
          if (*(long *)(*plVar9 + 0x40) == *(long *)(*(long *)puVar3 + 0x40)) {
            lVar5 = thunk_FUN_01f11920();
            local_40 = 0;
            uStack_38 = 0;
            FUN_0353c748(&local_40,uVar8,*(undefined8 *)(lVar5 + 8),0);
            auVar1._8_8_ = uStack_38;
            auVar1._0_8_ = local_40;
            return auVar1;
          }
          goto LAB_03ab05e8;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


