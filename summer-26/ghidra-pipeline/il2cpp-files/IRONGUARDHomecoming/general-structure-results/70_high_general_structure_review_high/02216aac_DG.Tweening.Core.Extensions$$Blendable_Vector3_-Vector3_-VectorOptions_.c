/*
FUNCTION_NAME: DG.Tweening.Core.Extensions$$Blendable<Vector3,-Vector3,-VectorOptions>
ENTRY_POINT: 02216aac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void DG_Tweening_Core_Extensions__Blendable<Vector3,_Vector3,_VectorOptions>(void)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x24;
  long in_stack_00000038;
  
  thunk_FUN_01efb3a4();
  if (*(long *)(unaff_x20 + 0x38) == 0) {
    FUN_01ecafa0();
  }
  uVar1 = FUN_03582fa8();
  if (unaff_w19 < uVar1) {
    plVar2 = (long *)thunk_FUN_01f116d0();
    if (plVar2 == (long *)0x0) {
      FUN_01f08848();
    }
    else {
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(unaff_x20 + 0x38));
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
      if (*(uint *)(plVar2 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar2[(long)(int)unaff_w19 + 4] = lVar3;
      thunk_FUN_01f51358(plVar2 + (long)(int)unaff_w19 + 4,lVar3);
    }
    if (*(long *)(unaff_x24 + 0x28) == in_stack_00000038) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6);
}


