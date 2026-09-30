/*
FUNCTION_NAME: System.Linq.Expressions.Interpreter.CastInstruction.CastInstructionT<bool>$$Run
ENTRY_POINT: 028e39d8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x028e3bb8) */

void System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<bool>__Run
               (long param_1,long *param_2,uint param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long unaff_x24;
  
  puVar2 = Method_System_Linq_Enumerable_All<Attribute>__;
  if ((*(byte *)(unaff_x24 + 0xac1) & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_All<Attribute>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_All<KeyValuePair<TurretType,_TurretBase>>__);
    *(undefined1 *)(unaff_x24 + 0xac1) = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (param_2 != (long *)0x0) {
    uVar3 = FUN_0422ef4c(param_2,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10),0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x38);
    if (lVar6 != 0) {
      if (param_3 < *(uint *)(lVar6 + 0x18)) {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_028e3bac;
        if (param_3 < *(uint *)(*(long *)(param_1 + 0x30) + 0x18)) {
          lVar7 = (long)(int)param_3;
          if (*(char *)(lVar6 + lVar7 * 0x28 + 0x40) == '\0') {
            param_4 = 0;
          }
          else {
            param_4 = param_4 - *(long *)(lVar6 + lVar7 * 0x28 + 0x20);
          }
          iVar1 = *(int *)(lVar6 + lVar7 * 0x28 + 0x44);
          FUN_0423eb70();
          plVar4 = (long *)FUN_027c4708((double)((float)(param_4 + (-iVar1 & iVar1 >> 0x1f)) /
                                                1000.0),0,0,
                                        *(undefined8 *)
                                         Method_System_Linq_Enumerable_All<KeyValuePair<TurretType,_TurretBase>>__
                                       );
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_041d4560(plVar4,param_2,0);
          (**(code **)(*param_2 + 0x198))(param_2,plVar4,*(undefined8 *)(*param_2 + 0x1a0));
          lVar6 = *plVar4;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_028e3b84;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_01ecb238(plVar4,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                ,0);
LAB_028e3b84:
          (*(code *)*puVar5)(plVar4,puVar5[1]);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
  }
LAB_028e3bac:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


