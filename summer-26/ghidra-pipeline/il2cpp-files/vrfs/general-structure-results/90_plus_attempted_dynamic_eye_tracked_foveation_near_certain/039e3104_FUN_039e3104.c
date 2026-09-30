/*
FUNCTION_NAME: FUN_039e3104
ENTRY_POINT: 039e3104
PROGRAM: vrfs-libil2cpp.so
SCORE: 94
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_8;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_039e3104(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  
  if ((DAT_0723aadd & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e298a8);
    thunk_FUN_0159f088(PTR_DAT_06e08f40);
    thunk_FUN_0159f088(PTR_DAT_06dfc7f8);
    thunk_FUN_0159f088(PTR_DAT_06e07ce0);
    DAT_0723aadd = 1;
  }
  puVar3 = PTR_DAT_06e298a8;
  puVar2 = PTR_DAT_06e07ce0;
  puVar1 = PTR_DAT_06dfc7f8;
  plVar9 = *(long **)(param_1 + 0x50);
  if (plVar9 != (long *)0x0) {
    uVar8 = 0;
    lVar10 = 0x20;
    do {
      if ((long)(int)*(uint *)(plVar9 + 3) <= (long)uVar8) {
        lVar10 = *(long *)(param_1 + 0xd8);
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
      plVar9 = *(long **)(param_1 + 0x50);
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 8;
    } while (plVar9 != (long *)0x0);
  }
  goto LAB_039e330c;
  while( true ) {
    lVar10 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                       (lVar10,iVar6,*(undefined8 *)puVar1);
    if (lVar10 != 0) {
      lVar10 = *(long *)(param_1 + 0xd8);
      if (lVar10 == 0) break;
      uVar5 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                        (lVar10,iVar6,*(undefined8 *)puVar1);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)puVar3);
      }
      uVar5 = FUN_039e3690(uVar5);
      FUN_043c219c(lVar10,iVar6,uVar5,*(undefined8 *)puVar2);
    }
    lVar10 = *(long *)(param_1 + 0xd8);
    iVar6 = iVar6 + 1;
    if (lVar10 == 0) break;
LAB_039e3214:
    if (*(int *)(lVar10 + 0x18) <= iVar6) {
      lVar10 = *(long *)(param_1 + 0xd0);
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
      lVar10 = *(long *)(param_1 + 0xd0);
      if (lVar10 == 0) break;
      uVar5 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                        (lVar10,iVar6,*(undefined8 *)puVar1);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)puVar3);
      }
      uVar5 = FUN_039e3690(uVar5);
      FUN_043c219c(lVar10,iVar6,uVar5,*(undefined8 *)puVar2);
    }
    lVar10 = *(long *)(param_1 + 0xd0);
    iVar6 = iVar6 + 1;
  } while (lVar10 != 0);
LAB_039e330c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


