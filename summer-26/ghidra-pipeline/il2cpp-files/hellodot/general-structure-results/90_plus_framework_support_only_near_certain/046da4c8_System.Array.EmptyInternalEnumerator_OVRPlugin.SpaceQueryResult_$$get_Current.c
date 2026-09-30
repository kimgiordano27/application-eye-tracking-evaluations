/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 046da4c8
PROGRAM: hellodot-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__get_Current(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *unaff_x25;
  long *unaff_x26;
  long in_stack_00000048;
  
  if ((unaff_x23 != 0) && (lVar1 = thunk_FUN_02cea798(), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018();
  }
  if (unaff_w22 == 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  else {
    FUN_046d9db8();
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar4 = FUN_04f3fb68(uVar4,0);
    if (in_stack_00000048 == 0) goto LAB_046da674;
    lVar1 = FUN_04e3dc38(in_stack_00000048,*(undefined8 *)PTR_DAT_065e1ad0,uVar4,0);
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02ce0978(lVar5);
    }
    if (lVar1 == 0) {
      FUN_04f52020(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar2 = (long *)thunk_FUN_02cea798(lVar1,lVar5);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(lVar1,lVar5);
    }
    if (0 < (int)plVar2[3]) {
      uVar6 = 0;
      plVar7 = plVar2;
      do {
        plVar7 = plVar7 + 4;
        uVar3 = (ulong)*(uint *)(plVar2 + 3);
        if (uVar3 <= uVar6) {
LAB_046da670:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        if (*plVar7 == 0) {
          FUN_04f52020(0x11,0);
          uVar3 = (ulong)*(uint *)(plVar2 + 3);
        }
        if (uVar3 <= uVar6) goto LAB_046da670;
        FUN_046d9e80();
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)plVar2[3]);
    }
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
LAB_046da674:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


