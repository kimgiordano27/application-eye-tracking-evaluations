/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$GetHashCode
ENTRY_POINT: 036da400
PROGRAM: vrfs-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * Unity_Collections_NativeArray<OVRPlugin_Vector4f>__GetHashCode(void)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *unaff_x19;
  long *unaff_x27;
  long *unaff_x28;
  
  iVar3 = FUN_03f054bc();
  if (iVar3 == 0) {
    lVar5 = *unaff_x28;
    lVar4 = unaff_x19[10];
    lVar1 = unaff_x19[0xb];
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar5 = *unaff_x28;
    }
    uVar6 = FUN_037103cc(lVar4,lVar1,**(undefined8 **)(lVar5 + 0xb8),
                         (*(undefined8 **)(lVar5 + 0xb8))[1],0);
    if ((uVar6 & 1) != 0) {
      FUN_01fbb444();
    }
    lVar4 = *unaff_x27;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar4 = *unaff_x27;
    }
    unaff_x19 = (long *)**(long **)(lVar4 + 0xb8);
  }
  else {
    lVar4 = (**(code **)(*unaff_x19 + 0x238))();
    if (lVar4 == 0) {
LAB_036da3d8:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    iVar3 = FUN_03f054bc(lVar4,0);
    if (iVar3 == 1) {
      lVar5 = *unaff_x28;
      lVar4 = unaff_x19[10];
      lVar1 = unaff_x19[0xb];
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar5 = *unaff_x28;
      }
      uVar6 = FUN_0371033c(lVar4,lVar1,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10),
                           *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18),0);
      if ((uVar6 & 1) != 0) {
        lVar5 = *unaff_x28;
        lVar4 = unaff_x19[0xc];
        lVar1 = unaff_x19[0xd];
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar5 = *unaff_x28;
        }
        uVar6 = FUN_0371033c(lVar4,lVar1,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10),
                             *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18),0);
        if ((uVar6 & 1) != 0) {
          plVar7 = (long *)(**(code **)(*unaff_x19 + 0x238))();
          if (plVar7 == (long *)0x0) goto LAB_036da3d8;
          unaff_x19 = (long *)(**(code **)(*plVar7 + 0x308))
                                        (plVar7,0,*(undefined8 *)(*plVar7 + 0x310));
          if (unaff_x19 != (long *)0x0) {
            bVar2 = *(byte *)(*unaff_x27 + 300);
            if ((*(byte *)(*unaff_x19 + 300) < bVar2) ||
               (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
              FUN_0160f170(unaff_x19);
            }
          }
        }
      }
    }
  }
  return unaff_x19;
}


