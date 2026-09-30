/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 039e3160
PROGRAM: vrfs-libil2cpp.so
SCORE: 148
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_Utils__get_eyeTrackedFoveatedRenderingSupported(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_06e298a8;
  puVar2 = PTR_DAT_06e07ce0;
  puVar1 = PTR_DAT_06dfc7f8;
  plVar9 = *(long **)(unaff_x19 + 0x50);
  if (plVar9 != (long *)0x0) {
    uVar8 = 0;
    lVar10 = 0x20;
    do {
      if ((long)(int)*(uint *)(plVar9 + 3) <= (long)uVar8) {
        lVar10 = *(long *)(unaff_x19 + 0xd8);
        if (lVar10 != 0) {
          iVar6 = 0;
          goto LAB_039e3214;
        }
        break;
      }
      if (*(uint *)(plVar9 + 3) <= uVar8) {
LAB_039e3328:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      lVar7 = plVar9[uVar8 + 4];
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      lVar7 = FUN_039e3690(lVar7);
      if ((lVar7 != 0) &&
         (lVar4 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar4 == 0)) {
        uVar5 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar5,0);
      }
      if (*(uint *)(plVar9 + 3) <= uVar8) goto LAB_039e3328;
      plVar9[uVar8 + 4] = lVar7;
      thunk_FUN_01656ef8((long)plVar9 + lVar10,lVar7);
      plVar9 = *(long **)(unaff_x19 + 0x50);
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 8;
    } while (plVar9 != (long *)0x0);
  }
  goto LAB_039e330c;
  while( true ) {
    lVar10 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                       (lVar10,iVar6,*(undefined8 *)puVar1);
    if (lVar10 != 0) {
      lVar10 = *(long *)(unaff_x19 + 0xd8);
      if (lVar10 == 0) break;
      uVar5 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                        (lVar10,iVar6,*(undefined8 *)puVar1);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)puVar3);
      }
      uVar5 = FUN_039e3690(uVar5);
      FUN_043c219c(lVar10,iVar6,uVar5,*(undefined8 *)puVar2);
    }
    lVar10 = *(long *)(unaff_x19 + 0xd8);
    iVar6 = iVar6 + 1;
    if (lVar10 == 0) break;
LAB_039e3214:
    if (*(int *)(lVar10 + 0x18) <= iVar6) {
      lVar10 = *(long *)(unaff_x19 + 0xd0);
      if (lVar10 != 0) {
        iVar6 = 0;
        goto Unity_XR_Oculus_Utils__SetFoveationLevel;
      }
      break;
    }
  }
  goto LAB_039e330c;
Unity_XR_Oculus_Utils__SetFoveationLevel:
  do {
    if (*(int *)(lVar10 + 0x18) <= iVar6) {
      return;
    }
    lVar10 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                       (lVar10,iVar6,*(undefined8 *)puVar1);
    if (lVar10 != 0) {
      lVar10 = *(long *)(unaff_x19 + 0xd0);
      if (lVar10 == 0) break;
      uVar5 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                        (lVar10,iVar6,*(undefined8 *)puVar1);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)puVar3);
      }
      uVar5 = FUN_039e3690(uVar5);
      FUN_043c219c(lVar10,iVar6,uVar5,*(undefined8 *)puVar2);
    }
    lVar10 = *(long *)(unaff_x19 + 0xd0);
    iVar6 = iVar6 + 1;
  } while (lVar10 != 0);
LAB_039e330c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


