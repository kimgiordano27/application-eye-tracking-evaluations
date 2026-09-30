/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$Dispose
ENTRY_POINT: 0427c90c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__Dispose(void)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  int *unaff_x19;
  uint unaff_w20;
  long *plVar5;
  long unaff_x21;
  int unaff_w22;
  
  if (unaff_w20 == 0) {
    plVar5 = (long *)(unaff_x19 + 2);
    lVar1 = *plVar5;
    if (lVar1 == 0) {
      unaff_x19[1] = 0;
      goto LAB_0427ca80;
    }
    uVar4 = *(ulong *)(lVar1 + 0x18);
    iVar3 = (int)uVar4;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    unaff_x19[1] = *(int *)(lVar1 + 0x20);
    if ((uVar4 & 0xffffffff) != 1) {
      FUN_05e3b3a4(lVar1,1,lVar1,0,iVar3 + -1,0);
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar1 = *(long *)(unaff_x21 + 0x20);
      iVar3 = *(int *)(*plVar5 + 0x18) + -1;
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc();
      }
      lVar1 = *(long *)(lVar1 + 0xc0);
      goto LAB_0427ca78;
    }
    *plVar5 = 0;
LAB_0427c958:
    uVar2 = 0;
  }
  else {
    if (unaff_w22 - 1U == 1) {
      unaff_x19[2] = 0;
      unaff_x19[3] = 0;
      goto LAB_0427c958;
    }
    if (unaff_w22 - 1U == unaff_w20) {
      lVar1 = *(long *)(unaff_x21 + 0x20);
      iVar3 = unaff_w22 + -2;
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc();
      }
      lVar1 = *(long *)(lVar1 + 0xc0);
LAB_0427ca78:
      FUN_03b12a64(unaff_x19 + 2,iVar3,*(undefined8 *)(lVar1 + 0x60));
      goto LAB_0427ca80;
    }
    lVar1 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    uVar2 = FUN_03642a4c(lVar1,unaff_w22 + -2);
    iVar3 = unaff_w20 - 1;
    if (iVar3 != 0) {
      FUN_05e3b3a4(*(undefined8 *)(unaff_x19 + 2),0,uVar2,0,iVar3,0);
    }
    FUN_05e3b3a4(*(undefined8 *)(unaff_x19 + 2),unaff_w20,uVar2,iVar3,*unaff_x19 + ~unaff_w20,0);
    *(undefined8 *)(unaff_x19 + 2) = uVar2;
  }
  thunk_FUN_036b7ad0(unaff_x19 + 2,uVar2);
LAB_0427ca80:
  *unaff_x19 = *unaff_x19 + -1;
  return;
}


