/*
FUNCTION_NAME: System.Collections.ObjectModel.Collection<object>$$Contains
ENTRY_POINT: 028ecf34
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x028ed0b4) */

void System_Collections_ObjectModel_Collection<object>__Contains(void)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  
  uVar2 = FUN_0422ef4c();
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar5 = *(long *)(unaff_x22 + 0x38);
  if (lVar5 != 0) {
    if (unaff_w21 < *(uint *)(lVar5 + 0x18)) {
      if (*(long *)(unaff_x22 + 0x30) == 0) goto LAB_028ed0a8;
      if (unaff_w21 < *(uint *)(*(long *)(unaff_x22 + 0x30) + 0x18)) {
        lVar6 = (long)(int)unaff_w21;
        if (*(char *)(lVar5 + lVar6 * 0x28 + 0x40) == '\0') {
          lVar7 = 0;
        }
        else {
          lVar7 = unaff_x19 - *(long *)(lVar5 + lVar6 * 0x28 + 0x20);
        }
        iVar1 = *(int *)(lVar5 + lVar6 * 0x28 + 0x44);
        FUN_0423eb70();
        plVar3 = (long *)FUN_027c4708((double)((float)(lVar7 + (-iVar1 & iVar1 >> 0x1f)) / 1000.0),0
                                      ,0,*(undefined8 *)
                                          Method_System_Linq_Enumerable_All<KeyValuePair<TurretType,_TurretBase>>__
                                     );
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_041d4560(plVar3);
        (**(code **)(*unaff_x20 + 0x198))();
        lVar5 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_028ed080;
            }
            uVar2 = uVar2 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01ecb238(plVar3,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_028ed080:
        (*(code *)*puVar4)(plVar3,puVar4[1]);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
LAB_028ed0a8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


