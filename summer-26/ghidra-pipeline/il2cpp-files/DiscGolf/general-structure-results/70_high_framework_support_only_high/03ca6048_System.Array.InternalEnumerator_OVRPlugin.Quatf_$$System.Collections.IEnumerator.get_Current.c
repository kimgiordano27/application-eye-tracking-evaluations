/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 03ca6048
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Quatf>__System_Collections_IEnumerator_get_Current
               (int *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  uint unaff_w20;
  long *plVar6;
  long unaff_x21;
  int unaff_w22;
  
  if (unaff_w22 <= param_2) {
    thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
    uVar3 = thunk_FUN_02dd3144();
    uVar2 = thunk_FUN_02dfd288(PTR_DAT_06a0d1d0);
    FUN_05453f78(uVar3,uVar2,0);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar3);
  }
  if (unaff_w20 == 0) {
    plVar6 = (long *)(param_1 + 2);
    lVar1 = *plVar6;
    if (lVar1 == 0) {
      param_1[1] = 0;
      goto LAB_03ca61c8;
    }
    uVar5 = *(ulong *)(lVar1 + 0x18);
    iVar4 = (int)uVar5;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    param_1[1] = *(int *)(lVar1 + 0x20);
    if ((uVar5 & 0xffffffff) != 1) {
      FUN_0550b264(lVar1,1,lVar1,0,iVar4 + -1,0);
      if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar1 = *(long *)(unaff_x21 + 0x20);
      iVar4 = *(int *)(*plVar6 + 0x18) + -1;
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02dcfd18();
      }
      lVar1 = *(long *)(lVar1 + 0xc0);
      goto LAB_03ca61c0;
    }
    *plVar6 = 0;
LAB_03ca60a0:
    uVar3 = 0;
  }
  else {
    if (unaff_w22 - 1U == 1) {
      param_1[2] = 0;
      param_1[3] = 0;
      goto LAB_03ca60a0;
    }
    if (unaff_w22 - 1U == unaff_w20) {
      lVar1 = *(long *)(unaff_x21 + 0x20);
      iVar4 = unaff_w22 + -2;
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02dcfd18();
      }
      lVar1 = *(long *)(lVar1 + 0xc0);
LAB_03ca61c0:
      FUN_034e24a4(param_1 + 2,iVar4,*(undefined8 *)(lVar1 + 0x60));
      goto LAB_03ca61c8;
    }
    lVar1 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18();
    }
    uVar3 = FUN_02d966a4(lVar1,unaff_w22 + -2);
    iVar4 = unaff_w20 - 1;
    if (iVar4 != 0) {
      FUN_0550b264(*(undefined8 *)(param_1 + 2),0,uVar3,0,iVar4,0);
    }
    FUN_0550b264(*(undefined8 *)(param_1 + 2),unaff_w20,uVar3,iVar4,*param_1 + ~unaff_w20,0);
    *(undefined8 *)(param_1 + 2) = uVar3;
  }
  LeanTween__value(param_1 + 2,uVar3);
LAB_03ca61c8:
  *param_1 = *param_1 + -1;
  return;
}


