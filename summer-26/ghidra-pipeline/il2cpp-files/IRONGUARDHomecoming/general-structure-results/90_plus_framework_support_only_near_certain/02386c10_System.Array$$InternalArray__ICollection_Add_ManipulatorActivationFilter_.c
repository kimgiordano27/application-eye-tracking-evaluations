/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<ManipulatorActivationFilter>
ENTRY_POINT: 02386c10
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02386ce0) */

void System_Array__InternalArray__ICollection_Add<ManipulatorActivationFilter>
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x29;
  
  uVar8 = *(undefined8 *)(unaff_x29 + -0x58);
  plVar9 = *(long **)(unaff_x29 + -0x40);
  if (param_2 != 1) {
    if (*(long **)(unaff_x29 + -0x40) != (long *)0x0) {
      lVar7 = **(long **)(unaff_x29 + -0x40);
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar1 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
            goto code_r0x02386cc8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ecb238(*(undefined8 *)(unaff_x29 + -0x40),
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
code_r0x02386cc8:
      (*(code *)*puVar1)(*(undefined8 *)(unaff_x29 + -0x40),puVar1[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14(param_1);
  }
  plVar3 = (long *)__cxa_begin_catch(param_1);
  lVar7 = *plVar3;
  __cxa_end_catch();
  if (plVar9 != (long *)0x0) {
    lVar4 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto FUN_02386ab8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar9,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
FUN_02386ab8:
    (*(code *)*puVar1)(plVar9,puVar1[1]);
  }
  if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar7);
  }
  if ((*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x48) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar2 = thunk_FUN_01f117cc();
  (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x90))
            (uVar2,uVar8,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x88));
  (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x98))
            (*(undefined8 *)(unaff_x29 + -0x50),uVar2,*(uint *)(unaff_x29 + -100) & 1);
  if (*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


