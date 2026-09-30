/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 036dd78c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceDiscoveryResult>
               (undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  ulong in_x10;
  void *unaff_x19;
  long unaff_x20;
  long lVar6;
  ulong unaff_x22;
  void *__dest;
  long unaff_x25;
  long unaff_x29;
  
  iVar5 = (int)unaff_x22;
  if ((in_x10 & 1) == 0) {
    lVar2 = FUN_031c09d4();
    param_1 = *(undefined8 **)(unaff_x20 + 0x38);
    iVar5 = *(int *)(lVar2 + 0xfc);
  }
  lVar6 = (long)&stack0x00000000 - ((ulong)(iVar5 + 0x10) + 0xf & 0x1fffffff0);
  __dest = (void *)(lVar6 - (unaff_x22 + 0xf & 0x1fffffff0));
  plVar3 = (long *)(**(code **)*param_1)();
  memcpy(__dest,unaff_x19,unaff_x22);
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
  }
  if (plVar3 == (long *)0x0) {
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
  else {
    lVar4 = *plVar3;
    bVar1 = *(byte *)(lVar4 + 0x130);
    if ((*(byte *)(lVar2 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2)) {
      lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
        lVar4 = *plVar3;
        bVar1 = *(byte *)(lVar4 + 0x130);
      }
      if ((*(byte *)(lVar2 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2)) {
        FUN_03188aa0(plVar3,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 8) + 0x80),
                     __dest,unaff_x22 & 0xffffffff);
        lVar4 = *(long *)(unaff_x20 + 0x38);
        lVar2 = *(long *)(lVar4 + 0x18);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_031c09d4();
          lVar4 = *(long *)(unaff_x20 + 0x38);
        }
        FUN_031896ac(lVar2,*(undefined8 *)(lVar4 + 0x20),lVar6);
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
        goto LAB_036dd92c;
      }
    }
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03189058(plVar3);
    }
  }
LAB_036dd92c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


