/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$.ctor
ENTRY_POINT: 0427c8ec
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>___ctor
               (int *param_1,uint param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  
  if ((int)param_2 < 0) {
LAB_0427ca9c:
    thunk_FUN_036aa1c8(PTR_DAT_079fb6d0);
    uVar3 = thunk_FUN_0367fe20();
    uVar2 = thunk_FUN_036aa1c8(PTR_DAT_079fb798);
    FUN_05d862e8(uVar3,uVar2,0);
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar3,param_3);
  }
  iVar4 = *param_1;
  if (iVar4 <= (int)param_2) goto LAB_0427ca9c;
  if (param_2 == 0) {
    plVar6 = (long *)(param_1 + 2);
    lVar1 = *plVar6;
    if (lVar1 == 0) {
      param_1[1] = 0;
      goto LAB_0427ca80;
    }
    uVar5 = *(ulong *)(lVar1 + 0x18);
    iVar4 = (int)uVar5;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    param_1[1] = *(int *)(lVar1 + 0x20);
    if ((uVar5 & 0xffffffff) != 1) {
      FUN_05e3b3a4(lVar1,1,lVar1,0,iVar4 + -1,0);
      if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar1 = *(long *)(param_3 + 0x20);
      iVar4 = *(int *)(*plVar6 + 0x18) + -1;
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc();
      }
      lVar1 = *(long *)(lVar1 + 0xc0);
      goto LAB_0427ca78;
    }
    *plVar6 = 0;
LAB_0427c958:
    uVar3 = 0;
  }
  else {
    if (iVar4 - 1U == 1) {
      param_1[2] = 0;
      param_1[3] = 0;
      goto LAB_0427c958;
    }
    if (iVar4 - 1U == param_2) {
      lVar1 = *(long *)(param_3 + 0x20);
      iVar4 = iVar4 + -2;
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc();
      }
      lVar1 = *(long *)(lVar1 + 0xc0);
LAB_0427ca78:
      FUN_03b12a64(param_1 + 2,iVar4,*(undefined8 *)(lVar1 + 0x60));
      goto LAB_0427ca80;
    }
    lVar1 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    uVar3 = FUN_03642a4c(lVar1,iVar4 + -2);
    iVar4 = param_2 - 1;
    if (iVar4 != 0) {
      FUN_05e3b3a4(*(undefined8 *)(param_1 + 2),0,uVar3,0,iVar4,0);
    }
    FUN_05e3b3a4(*(undefined8 *)(param_1 + 2),param_2,uVar3,iVar4,*param_1 + ~param_2,0);
    *(undefined8 *)(param_1 + 2) = uVar3;
  }
  thunk_FUN_036b7ad0(param_1 + 2,uVar3);
LAB_0427ca80:
  *param_1 = *param_1 + -1;
  return;
}


