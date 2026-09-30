/*
FUNCTION_NAME: System.Linq.Expressions.Interpreter.CastInstruction.CastInstructionT<byte>$$Run
ENTRY_POINT: 028e3a90
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x028e3bb8) */

void System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<byte>__Run(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long in_x9;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  int in_w11;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  if (in_w11 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = unaff_x19 - *(long *)(param_1 + in_x9 * 0x28 + 0x20);
  }
  iVar1 = *(int *)(param_1 + in_x9 * 0x28 + 0x44);
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  FUN_0423eb70();
  plVar2 = (long *)FUN_027c4708((double)((float)(lVar5 + (-iVar1 & iVar1 >> 0x1f)) / 1000.0),
                                uStack0000000000000000,uStack0000000000000008,
                                *(undefined8 *)
                                 Method_System_Linq_Enumerable_All<KeyValuePair<TurretType,_TurretBase>>__
                               );
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_041d4560(plVar2);
                    /* catch() { ... } // from try @ 028e3b54 with catch @ 028e3b28
                       catch() { ... } // from try @ 028e3b88 with catch @ 028e3b28
                       catch() { ... } // from try @ 028e3bc0 with catch @ 028e3b28 */
  (**(code **)(*unaff_x20 + 0x198))();
  lVar5 = *plVar2;
  uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_028e3b84;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_028e3b84:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


