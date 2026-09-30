/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 03efc2b8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 System_Array__IndexOf<OVRPlugin_Qpl_Annotation>(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  undefined4 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  if ((*(byte *)(unaff_x22 + 0xcf3) & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4540);
    FUN_03642964(PTR_DAT_079f4558);
    FUN_03642964(PTR_DAT_079ff0b0);
    FUN_03642964(PTR_DAT_079ff0b8);
    FUN_03642964(PTR_DAT_079ff0c0);
    *(undefined1 *)(unaff_x22 + 0xcf3) = 1;
  }
  iVar2 = FUN_0734a580(&stack0x00000018,0);
  puVar1 = PTR_DAT_079ff0b0;
  if (iVar2 == unaff_w21) {
    if (((unaff_x20 != 0) && (-1 < (int)in_stack_00000018._4_4_)) &&
       ((int)in_stack_00000018._4_4_ < *(int *)(unaff_x20 + 0x18))) {
      return *(undefined4 *)(unaff_x20 + (ulong)in_stack_00000018._4_4_ * 0x10 + 0x20);
    }
    if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_07179a54(*(undefined8 *)PTR_DAT_079ff0c0,param_1,0);
    return 0;
  }
  plVar3 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4558,2);
  lVar4 = thunk_FUN_0367fa58(*(undefined8 *)puVar1,&stack0x0000000c);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_0367fd24(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_03efc494:
    uVar6 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_036b7ad0(plVar3 + 4,lVar4);
    in_stack_00000008 = FUN_0734a580(&stack0x00000018,0);
    lVar4 = thunk_FUN_0367fa58(*(undefined8 *)puVar1,&stack0x00000008);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_0367fd24(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_03efc494;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar4;
      thunk_FUN_036b7ad0(plVar3 + 5,lVar4);
      if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_07179c84(param_1,*(undefined8 *)PTR_DAT_079ff0b8,plVar3,0);
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


