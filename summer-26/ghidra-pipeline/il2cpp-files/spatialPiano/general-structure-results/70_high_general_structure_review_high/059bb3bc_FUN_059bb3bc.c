/*
FUNCTION_NAME: FUN_059bb3bc
ENTRY_POINT: 059bb3bc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x059bb520) */
/* WARNING: Removing unreachable block (ram,0x059bb56c) */

void FUN_059bb3bc(long *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_06bc1c84 & 1) == 0) {
    FUN_02f08768(Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>_get_Data__);
    FUN_02f08768(Method_Oculus_Platform_Message<NetSyncVoipAttenuationValueList>__ctor__);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(Method_Unity_Collections_NativeArray<RenderStateBlock>_Dispose__);
    DAT_06bc1c84 = 1;
  }
  iVar1 = (int)param_1[100];
  if (iVar1 != param_2) {
    FUN_059bc598(param_1,param_2);
    lVar5 = param_1[100];
    if (iVar1 != (int)lVar5) {
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<NetSyncVoipAttenuationValueList>__ctor__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      plVar3 = (long *)FUN_0442be88(iVar1,(int)lVar5,
                                    *(undefined8 *)
                                     Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>_get_Data__
                                   );
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_0635e004(plVar3,param_1,0);
      (**(code **)(*param_1 + 0x188))(param_1,plVar3,*(undefined8 *)(*param_1 + 400));
      if (plVar3 != (long *)0x0) {
        lVar5 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_067c91b0) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_059bb508;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)PTR_DAT_067c91b0,0);
LAB_059bb508:
        (*(code *)*puVar4)(plVar3,puVar4[1]);
      }
    }
    puVar2 = Method_Unity_Collections_NativeArray<RenderStateBlock>_Dispose__;
    lVar5 = *(long *)Method_Unity_Collections_NativeArray<RenderStateBlock>_Dispose__;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar5 = *(long *)puVar2;
    }
    FUN_06361d7c(param_1,*(long *)(lVar5 + 0xb8) + 0x1c8,0);
  }
  return;
}


