/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 046da524
PROGRAM: hellodot-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_Reset
               (void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *unaff_x25;
  
  FUN_04f3fb68();
  if (unaff_x22 != 0) {
    lVar1 = FUN_04e3dc38();
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02ce0978(lVar4);
    }
    if (lVar1 == 0) {
      FUN_04f52020(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar2 = (long *)thunk_FUN_02cea798(lVar1,lVar4);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(lVar1,lVar4);
    }
    if (0 < (int)plVar2[3]) {
      uVar5 = 0;
      plVar6 = plVar2;
      do {
        plVar6 = plVar6 + 4;
        uVar3 = (ulong)*(uint *)(plVar2 + 3);
        if (uVar3 <= uVar5) {
LAB_046da670:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        if (*plVar6 == 0) {
          FUN_04f52020(0x11,0);
          uVar3 = (ulong)*(uint *)(plVar2 + 3);
        }
        if (uVar3 <= uVar5) goto LAB_046da670;
        FUN_046d9e80();
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)plVar2[3]);
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar1 = FUN_04efe4a4(0);
    if (lVar1 != 0) {
      FUN_044a67d0();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


