/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopyTo
ENTRY_POINT: 05ce4310
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05ce44a0) */

void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo
               (long param_1,int param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 in_stack_00000008;
  char cStack000000000000001c;
  
  if ((DAT_0983d52f & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091ae280);
    FUN_03d2d2b0(PTR_DAT_091a1650);
    FUN_03d2d2b0(PTR_DAT_091a2d28);
    DAT_0983d52f = 1;
  }
  in_stack_00000008 = 0;
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  cStack000000000000001c = '\0';
  FUN_071e78b0(uVar7,&stack0x0000001c,0);
  puVar3 = PTR_DAT_091ae280;
  puVar2 = PTR_DAT_091a2d28;
  puVar1 = PTR_DAT_091a1650;
  while (iVar4 = FUN_05ce4010(param_1,*(undefined8 *)
                                       (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x70)),
        iVar4 != 0) {
    lVar5 = FUN_05ce423c(param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48)
                        );
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar6 = FUN_04145524(0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar8 = *(undefined8 *)(lVar5 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    in_stack_00000008 = FUN_0715ab44(uVar6,uVar8,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    dVar9 = (double)FUN_0718efd4(&stack0x00000008,0);
    if (dVar9 <= (double)param_2) break;
    FUN_05ce476c(param_1,*(undefined8 *)(lVar5 + 0x18),
                 *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x68));
  }
  if (cStack000000000000001c != '\0') {
    thunk_FUN_03d180a8(uVar7,0);
  }
  return;
}


