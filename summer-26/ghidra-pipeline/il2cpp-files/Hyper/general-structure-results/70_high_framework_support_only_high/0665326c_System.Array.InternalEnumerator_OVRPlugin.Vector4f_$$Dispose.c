/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 0665326c
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector4f>__Dispose(int *param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x21;
  int unaff_w22;
  
  if (unaff_w22 <= (int)param_2) {
    thunk_FUN_049ae08c(PTR_DAT_0ac0c088);
    uVar3 = thunk_FUN_04983f60();
    uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac161d0);
    FUN_08cc57b4(uVar3,uVar2,0);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar3);
  }
  if (param_2 == 0) {
    plVar6 = (long *)(param_1 + 4);
    lVar1 = *plVar6;
    if (lVar1 == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
      goto FUN_066533f0;
    }
    uVar5 = *(ulong *)(lVar1 + 0x18);
    iVar4 = (int)uVar5;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(lVar1 + 0x20);
    if ((uVar5 & 0xffffffff) != 1) {
      FUN_08d9f1fc(lVar1,1,lVar1,0,iVar4 + -1,0);
      if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar1 = *(long *)(unaff_x21 + 0x20);
      iVar4 = *(int *)(*plVar6 + 0x18) + -1;
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_04980b34();
      }
      lVar1 = *(long *)(lVar1 + 0xc0);
      goto LAB_066533e8;
    }
    *plVar6 = 0;
LAB_066532c8:
    uVar3 = 0;
  }
  else {
    if (unaff_w22 - 1U == 1) {
      param_1[4] = 0;
      param_1[5] = 0;
      goto LAB_066532c8;
    }
    if (unaff_w22 - 1U == param_2) {
      lVar1 = *(long *)(unaff_x21 + 0x20);
      iVar4 = unaff_w22 + -2;
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_04980b34();
      }
      lVar1 = *(long *)(lVar1 + 0xc0);
LAB_066533e8:
      FUN_059af6e8(param_1 + 4,iVar4,*(undefined8 *)(lVar1 + 0x60));
      goto FUN_066533f0;
    }
    lVar1 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04980b34();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04980b34();
    }
    uVar3 = FUN_04947fd0(lVar1,unaff_w22 + -2);
    iVar4 = param_2 - 1;
    if (iVar4 != 0) {
      FUN_08d9f1fc(*(undefined8 *)(param_1 + 4),0,uVar3,0,iVar4,0);
    }
    FUN_08d9f1fc(*(undefined8 *)(param_1 + 4),param_2,uVar3,iVar4,*param_1 + ~param_2,0);
    *(undefined8 *)(param_1 + 4) = uVar3;
  }
  thunk_FUN_049ee3d8(param_1 + 4,uVar3);
FUN_066533f0:
  *param_1 = *param_1 + -1;
  return;
}


