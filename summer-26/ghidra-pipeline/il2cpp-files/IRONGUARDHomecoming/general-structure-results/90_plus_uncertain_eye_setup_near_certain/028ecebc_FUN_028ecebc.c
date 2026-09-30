/*
FUNCTION_NAME: FUN_028ecebc
ENTRY_POINT: 028ecebc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x028ed0b4) */

void FUN_028ecebc(long param_1,long *param_2,uint param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar2 = Method_System_Linq_Enumerable_All<Attribute>__;
  if ((DAT_04830aeb & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_All<Attribute>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_All<KeyValuePair<TurretType,_TurretBase>>__);
    DAT_04830aeb = 1;
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
        lVar8 = *(long *)(param_1 + 0x30);
        if (lVar8 == 0) goto LAB_028ed0a8;
        if (param_3 < *(uint *)(lVar8 + 0x18)) {
          lVar7 = (long)(int)param_3;
          if (*(char *)(lVar6 + lVar7 * 0x28 + 0x40) == '\0') {
            param_4 = 0;
          }
          else {
            param_4 = param_4 - *(long *)(lVar6 + lVar7 * 0x28 + 0x20);
          }
          iVar1 = *(int *)(lVar6 + lVar7 * 0x28 + 0x44);
          local_50 = 0;
          uStack_48 = 0;
          FUN_0423eb70(&local_50,*(undefined4 *)(lVar8 + lVar7 * 4 + 0x20),0);
          plVar4 = (long *)FUN_027c4708((double)((float)(param_4 + (-iVar1 & iVar1 >> 0x1f)) /
                                                1000.0),local_50,uStack_48,
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
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_028ed080;
              }
              uVar3 = uVar3 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_01ecb238(plVar4,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                ,0);
LAB_028ed080:
          (*(code *)*puVar5)(plVar4,puVar5[1]);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
  }
LAB_028ed0a8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


