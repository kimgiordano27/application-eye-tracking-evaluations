/*
FUNCTION_NAME: System.Span<OVRPlugin.Vector4s>$$ToArray
ENTRY_POINT: 07509d94
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_Vector4s>__ToArray
               (undefined4 param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_0ac43740;
  if ((DAT_0b327258 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac43740);
    DAT_0b327258 = 1;
  }
  FUN_05d9c170(param_1,*(undefined8 *)puVar2,
               *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x100));
  if (-1 < (int)param_3) {
    if ((int)param_3 <= *(int *)(param_2 + 0x18)) {
      FUN_075091ec(param_2,*(int *)(param_2 + 0x18) + 1,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78));
      FUN_08d9f1fc(*(undefined8 *)(param_2 + 0x10),param_3,*(undefined8 *)(param_2 + 0x10),
                   param_3 + 1,*(int *)(param_2 + 0x18) - param_3,0);
      lVar5 = *(long *)(param_2 + 0x10);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (param_3 < *(uint *)(lVar5 + 0x18)) {
        iVar1 = *(int *)(param_2 + 0x18);
        *(undefined4 *)(lVar5 + (ulong)param_3 * 4 + 0x20) = param_1;
        *(int *)(param_2 + 0x18) = iVar1 + 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
  }
  thunk_FUN_049ae08c(PTR_DAT_0ac0c088);
  uVar3 = thunk_FUN_04983f60();
  uVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac161d0);
  FUN_08cc57b4(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
  FUN_04948050(uVar3,param_4);
}


