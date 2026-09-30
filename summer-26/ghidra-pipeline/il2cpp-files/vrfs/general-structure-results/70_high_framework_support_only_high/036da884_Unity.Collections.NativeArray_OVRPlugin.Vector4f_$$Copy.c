/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 036da884
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  int unaff_w25;
  long *unaff_x28;
  long *unaff_x29;
  ulong in_stack_00000008;
  
code_r0x036da884:
  lVar8 = (**(code **)(param_1 + 0x238))(param_2,*(undefined8 *)(param_1 + 0x240));
  param_2 = unaff_x24;
  if (lVar8 == 0) {
LAB_036da8d8:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
LAB_036da810:
  iVar3 = FUN_03f054bc(lVar8,0);
  if (iVar3 <= unaff_w25) {
LAB_036da8bc:
    do {
      unaff_w23 = unaff_w23 + 1;
      lVar8 = (**(code **)(*unaff_x19 + 0x238))();
      if (lVar8 == 0) goto LAB_036da8d8;
      iVar3 = FUN_03f054bc(lVar8,0);
      if (iVar3 <= unaff_w23) {
        lVar8 = (**(code **)(*unaff_x22 + 0x238))();
        if (lVar8 == 0) goto LAB_036da8d8;
        iVar3 = FUN_03f054bc(lVar8,0);
        if (iVar3 == 0) {
          lVar8 = *unaff_x28;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar8 = *unaff_x28;
          }
          unaff_x22 = (long *)**(long **)(lVar8 + 0xb8);
        }
        else if ((in_stack_00000008 & 0x100000000) == 0) {
          lVar8 = (**(code **)(*unaff_x22 + 0x238))();
          if (lVar8 == 0) goto LAB_036da8d8;
          iVar3 = FUN_03f054bc(lVar8,0);
          if (iVar3 == 1) {
            lVar4 = *unaff_x29;
            lVar8 = unaff_x22[10];
            lVar1 = unaff_x22[0xb];
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar4 = *unaff_x29;
            }
            uVar5 = FUN_0371033c(lVar8,lVar1,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10),
                                 *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18),0);
            if ((uVar5 & 1) != 0) {
              lVar4 = *unaff_x29;
              lVar8 = unaff_x22[0xc];
              lVar1 = unaff_x22[0xd];
              if (*(int *)(lVar4 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar4 = *unaff_x29;
              }
              uVar5 = FUN_0371033c(lVar8,lVar1,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10),
                                   *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18),0);
              if ((uVar5 & 1) != 0) {
                plVar6 = (long *)(**(code **)(*unaff_x22 + 0x238))();
                if (plVar6 == (long *)0x0) goto LAB_036da8d8;
                unaff_x22 = (long *)(**(code **)(*plVar6 + 0x308))
                                              (plVar6,0,*(undefined8 *)(*plVar6 + 0x310));
                if (unaff_x22 != (long *)0x0) {
                  bVar2 = *(byte *)(*unaff_x28 + 300);
                  if ((*(byte *)(*unaff_x22 + 300) < bVar2) ||
                     (*(long *)(*(long *)(*unaff_x22 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x28))
                  {
                    /* WARNING: Subroutine does not return */
                    FUN_0160f170(unaff_x22);
                  }
                }
              }
            }
          }
        }
        return unaff_x22;
      }
      plVar6 = (long *)(**(code **)(*unaff_x19 + 0x238))();
      if (plVar6 == (long *)0x0) goto LAB_036da8d8;
      plVar6 = (long *)(**(code **)(*plVar6 + 0x308))
                                 (plVar6,unaff_w23,*(undefined8 *)(*plVar6 + 0x310));
      if (plVar6 != (long *)0x0) {
        bVar2 = *(byte *)(*unaff_x28 + 300);
        if ((*(byte *)(*plVar6 + 300) < bVar2) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(plVar6);
        }
      }
      plVar6 = (long *)FUN_036d4778();
      lVar8 = *unaff_x28;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_016466fc(lVar8);
        lVar8 = *unaff_x28;
      }
    } while (plVar6 == (long *)**(long **)(lVar8 + 0xb8));
    if (plVar6 == (long *)0x0) goto LAB_036da8d8;
    bVar2 = *(byte *)(*unaff_x20 + 300);
    if (*(byte *)(*plVar6 + 300) < bVar2) {
      param_2 = (long *)0x0;
    }
    else {
      param_2 = plVar6;
      if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x20) {
        param_2 = (long *)0x0;
      }
    }
    lVar4 = *unaff_x29;
    lVar8 = plVar6[10];
    lVar1 = plVar6[0xb];
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar4 = *unaff_x29;
    }
    uVar5 = FUN_0371033c(lVar8,lVar1,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10),
                         *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18),0);
    if ((uVar5 & 1) != 0) {
      lVar4 = *unaff_x29;
      lVar8 = plVar6[0xc];
      lVar1 = plVar6[0xd];
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar4 = *unaff_x29;
      }
      uVar5 = FUN_0371033c(lVar8,lVar1,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10),
                           *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18),0);
      if ((param_2 != (long *)0x0) && ((uVar5 & 1) != 0)) goto code_r0x036da7f4;
    }
    lVar8 = (**(code **)(*unaff_x22 + 0x238))();
    if (lVar8 == 0) goto LAB_036da8d8;
    FUN_036ef950(lVar8,plVar6,0);
    goto LAB_036da8bc;
  }
  lVar8 = (**(code **)(*unaff_x22 + 0x238))();
  plVar6 = (long *)(**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if ((plVar6 == (long *)0x0) ||
     (uVar7 = (**(code **)(*plVar6 + 0x308))(plVar6,unaff_w25,*(undefined8 *)(*plVar6 + 0x310)),
     lVar8 == 0)) goto LAB_036da8d8;
  FUN_036ef950(lVar8,uVar7,0);
  param_1 = *param_2;
  unaff_w25 = unaff_w25 + 1;
  unaff_x24 = param_2;
  goto code_r0x036da884;
code_r0x036da7f4:
  lVar8 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if (lVar8 == 0) goto LAB_036da8d8;
  unaff_w25 = 0;
  goto LAB_036da810;
}


