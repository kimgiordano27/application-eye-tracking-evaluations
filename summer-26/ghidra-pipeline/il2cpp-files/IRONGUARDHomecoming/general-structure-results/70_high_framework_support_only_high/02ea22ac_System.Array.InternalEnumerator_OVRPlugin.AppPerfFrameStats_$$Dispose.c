/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.AppPerfFrameStats>$$Dispose
ENTRY_POINT: 02ea22ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ea247c) */
/* WARNING: Removing unreachable block (ram,0x02ea248c) */
/* WARNING: Removing unreachable block (ram,0x02ea2494) */
/* WARNING: Removing unreachable block (ram,0x02ea24bc) */
/* WARNING: Removing unreachable block (ram,0x02ea24a0) */
/* WARNING: Removing unreachable block (ram,0x02ea24ac) */
/* WARNING: Removing unreachable block (ram,0x02ea24cc) */
/* WARNING: Removing unreachable block (ram,0x02ea2510) */

void System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose
               (undefined8 param_1,undefined8 param_2)

{
  bool in_ZR;
  bool in_CY;
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  
  if (!in_CY || in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(unaff_x21 + 0x28) = param_2;
  thunk_FUN_01f51358();
  if (*(uint *)(unaff_x21 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(unaff_x21 + 0x30) =
       *(undefined8 *)
        Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_getFriendsCallback__;
  thunk_FUN_01f51358();
  uVar1 = FUN_0356965c(unaff_x29 + -0x30,0);
  if (*(uint *)(unaff_x21 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(unaff_x21 + 0x38) = uVar1;
  thunk_FUN_01f51358();
  if (*(uint *)(unaff_x21 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined8 *)(unaff_x21 + 0x40) =
       *(undefined8 *)
        Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_getUserCallback__;
  thunk_FUN_01f51358();
  uVar1 = FUN_0340efe8();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar1,uVar1);
  }
  FUN_0390b840();
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x26) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xe) * 0x10 + 0x138);
        goto LAB_02ea2468;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02ea2468:
  (*(code *)*puVar2)();
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


