/*
FUNCTION_NAME: FUN_03402384
ENTRY_POINT: 03402384
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_3;functionality_permission_setup
*/


long FUN_03402384(long *param_1,long param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  
  if ((DAT_0483267a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRControllerHelper_InputFocusAquired__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Member_Get__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0483267a = 1;
  }
  if ((param_2 != 0) && (param_1 != (long *)0x0)) {
    iVar3 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    iVar4 = *(int *)(param_2 + 0x18);
    uVar5 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
    puVar1 = Method_Unity_VisualScripting_Member_Get__;
    if (iVar4 != iVar3 >> 3) {
      uVar8 = thunk_FUN_01efb3a4(Method_MoviePlayerSampleControls_OnPlayPauseClicked__);
      uVar5 = FUN_03405678(uVar8,uVar5,0);
      thunk_FUN_01efb3a4(Method_System_Reflection_MemberInfoSerializationHolder_GetObjectData__);
      uVar8 = thunk_FUN_01f117cc();
      FUN_03437810(uVar8,uVar5,0);
      uVar5 = thunk_FUN_01efb3a4(Method_OVRManager_OnPermissionGranted__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar8,uVar5);
    }
    if (*(int *)(*(long *)Method_Unity_VisualScripting_Member_Get__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar6 = FUN_0344a284(uVar5,0);
    puVar2 = Method_OVRControllerHelper_InputFocusAquired__;
    lVar7 = param_2;
    if (lVar6 != 0) {
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)Method_OVRControllerHelper_InputFocusAquired__);
      FUN_035ac8e8(lVar7,0);
      *(undefined1 *)(lVar7 + 0x10) = 0x30;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x18),0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_0344aa58(lVar6,0);
      uVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
      FUN_033fd870(uVar8,uVar5);
      FUN_033fdbc0(lVar7,uVar8);
      lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
      FUN_035ac8e8(lVar6,0);
      *(undefined1 *)(lVar6 + 0x10) = 5;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x18),0);
      FUN_033fdbc0(lVar7,lVar6);
      lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
      FUN_035ac8e8(lVar6,0);
      *(undefined1 *)(lVar6 + 0x10) = 4;
      *(long *)(lVar6 + 0x18) = param_2;
      thunk_FUN_01f51358((long *)(lVar6 + 0x18),param_2);
      plVar9 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar2);
      FUN_035ac8e8(plVar9,0);
      *(undefined1 *)(plVar9 + 2) = 0x30;
      plVar9[3] = 0;
      thunk_FUN_01f51358(plVar9 + 3,0);
      FUN_033fdbc0(plVar9,lVar7);
      FUN_033fdbc0(plVar9,lVar6);
      lVar7 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
      if (lVar7 == 0) goto LAB_0340268c;
    }
    puVar2 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
    puVar1 = Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__;
    FUN_03596b60(param_2,0,lVar7,*(int *)(lVar7 + 0x18) - *(int *)(param_2 + 0x18),
                 *(int *)(param_2 + 0x18),0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iVar4 = FUN_0356bc8c(8,(param_3 - *(int *)(lVar7 + 0x18)) + -3,0);
    lVar6 = FUN_01f08890(*(undefined8 *)puVar1,iVar4 + 3 + *(int *)(lVar7 + 0x18));
    if (lVar6 != 0) {
      uVar11 = *(ulong *)(lVar6 + 0x18);
      if (1 < (uint)uVar11) {
        *(undefined1 *)(lVar6 + 0x21) = 1;
        if (2 < (int)(iVar4 + 2U)) {
          lVar10 = 0;
          do {
            if ((uVar11 & 0xffffffff) <= lVar10 + 2U) goto LAB_03402688;
            *(undefined1 *)(lVar6 + 0x22 + lVar10) = 0xff;
            lVar10 = lVar10 + 1;
          } while ((ulong)(iVar4 + 2U) - 2 != lVar10);
        }
        FUN_03596b60(lVar7,0,lVar6,iVar4 + 3,*(undefined4 *)(lVar7 + 0x18),0);
        return lVar6;
      }
LAB_03402688:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
  }
LAB_0340268c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


