/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren<object,-object,-object>$$ComputeNumberOfChildren
ENTRY_POINT: 04ec32ec
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<object,_object,_object>__ComputeNumberOfChildren
               (long param_1,long *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  
  FUN_04ec22a4(param_2,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x1c0));
  uVar3 = FUN_04ec31cc(param_2);
  lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
                    /* try { // try from 04ec3310 to 04fc331b has its CatchHandler @ 04ec2d88 */
  if ((uVar3 & 1) == 0) {
    FUN_04ec3070(param_2,*(undefined8 *)(lVar5 + 0x98));
  }
  else {
    FUN_04ec3028(param_2,*(undefined8 *)(lVar5 + 0x1d0));
    if (0 < (int)param_2[0x16]) {
      iVar7 = 1;
      iVar2 = *(int *)((long)param_2 + 0x84);
      iVar1 = *(int *)((long)param_2 + 0x84);
      do {
        iVar8 = iVar2;
        if ((iVar8 == 0) || ((iVar1 != 0 && (iVar8 == 1)))) {
          (**(code **)(*param_2 + 0x508))(param_2,*(undefined8 *)(*param_2 + 0x510));
          iVar8 = *(int *)((long)param_2 + 0x84);
        }
        FUN_04ec2314(param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1e0));
        if (*(uint *)((long)param_2 + 0x84) < 4) {
          lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
          switch(*(uint *)((long)param_2 + 0x84)) {
          case 0:
            uVar3 = (**(code **)(*param_2 + 0x3c8))(param_2,*(undefined8 *)(*param_2 + 0x3d0));
            if ((uVar3 & 1) == 0) goto switchD_04ec33a0_caseD_3;
            FUN_04ec2678(param_2,*(undefined8 *)
                                  (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1f0));
            break;
          case 1:
            uVar3 = FUN_04ec0dc8(param_2,*(undefined8 *)(lVar5 + 0x1f8));
            lVar5 = *param_2;
            if ((uVar3 & 1) != 0) {
              pcVar6 = *(code **)(lVar5 + 0x518);
              uVar4 = *(undefined8 *)(lVar5 + 0x520);
              goto LAB_04ec3410;
            }
            uVar3 = (**(code **)(lVar5 + 0x3d8))(param_2,*(undefined8 *)(lVar5 + 0x3e0));
            if ((uVar3 & 1) == 0) goto switchD_04ec33a0_caseD_3;
            Cysharp_Threading_Tasks_UniTask_IsCanceledSource<Vector2>__OnCompleted
                      (param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x210))
            ;
            break;
          case 2:
            uVar3 = FUN_04ec0e74(param_2,*(undefined8 *)(lVar5 + 0x218));
            if ((uVar3 & 1) == 0) goto switchD_04ec33a0_caseD_3;
            pcVar6 = *(code **)(*param_2 + 0x528);
            uVar4 = *(undefined8 *)(*param_2 + 0x530);
LAB_04ec3410:
            (*pcVar6)(param_2,uVar4);
            break;
          case 3:
            goto switchD_04ec33a0_caseD_3;
          }
        }
        if ((int)param_2[0x16] <= iVar7) break;
        iVar7 = iVar7 + 1;
        iVar2 = *(int *)((long)param_2 + 0x84);
        iVar1 = iVar8;
      } while( true );
    }
  }
switchD_04ec33a0_caseD_3:
  FUN_04ec2388(param_2);
  return;
}


