/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_archive_message_t$$Dispose
ENTRY_POINT: 05fe9588
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_vx_evt_session_archive_message_t__Dispose(long param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  
  plVar4 = (long *)(**(code **)(param_1 + 0x198))(param_2,*(undefined8 *)(param_1 + 0x1a0));
  if (plVar4 != (long *)0x0) {
    bVar2 = *(byte *)(*unaff_x22 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x22))
    goto LAB_05fe961c;
    if (plVar4[0xd] != 0) {
      if (*unaff_x20 == 0) goto LAB_05fe961c;
      uVar3 = *(uint *)(*unaff_x20 + 0x50);
      uVar1 = *(uint *)(plVar4[0xd] + 0x18);
      if ((int)uVar3 < (int)uVar1) {
        if (uVar1 <= uVar3) goto LAB_05fe9620;
        FUN_0536dcdc();
      }
    }
    lVar7 = *unaff_x20;
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x48) != 0)) {
      if (*(uint *)(*(long *)(lVar7 + 0x48) + 0x18) <= *(uint *)(lVar7 + 0x50)) {
LAB_05fe9620:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      FUN_05fe8f8c();
      lVar7 = *(long *)(unaff_x19 + 0x38);
      if (lVar7 != 0) {
        lVar6 = *(long *)(lVar7 + 0x10);
        lVar5 = *unaff_x20;
        lVar8 = *(long *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AssemblyParser_<LoadAssembliesMainThread>d__18>__
        ;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
            *plVar4 = lVar5;
            LeanTween__value(plVar4);
          }
          else {
            FUN_040101ec(lVar7,lVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          return;
        }
      }
    }
  }
LAB_05fe961c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


