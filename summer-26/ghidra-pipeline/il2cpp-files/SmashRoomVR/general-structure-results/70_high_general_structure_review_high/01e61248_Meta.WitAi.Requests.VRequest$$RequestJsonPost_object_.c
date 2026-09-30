/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest$$RequestJsonPost<object>
ENTRY_POINT: 01e61248
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_1;ray_or_cast_sink_hits_1;telemetry_or_network_hits_8;frame_or_lifecycle_behavior
*/


void Meta_WitAi_Requests_VRequest__RequestJsonPost<object>(void)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  long unaff_x20;
  long *unaff_x24;
  long *unaff_x25;
  
  uVar2 = FUN_03057a60();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)*unaff_x24;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0304eec0(uVar3,0);
    uVar5 = FUN_0304eec0(*(undefined8 *)StringLiteral_613,0);
    uVar2 = FUN_03057a60(uVar3,uVar5,0);
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_038df410(*(undefined8 *)(unaff_x20 + 0x10),0);
      plVar4 = (long *)thunk_FUN_01afa70c(*(undefined8 *)(*unaff_x24 + 8),&stack0x0000000c);
      if (plVar4 == (long *)0x0) goto LAB_01e61bb8;
      if (*(long *)(*plVar4 + 0x40) ==
          *(long *)(*(long *)Method_System_Net_Sockets_Socket_<>c_<ReceiveAsyncApm>b__15_0__ + 0x40)
         ) {
        thunk_FUN_01afac30();
        FUN_038ddc20(uVar3);
        return;
      }
      goto LAB_01e61bb4;
    }
    uVar3 = *(undefined8 *)*unaff_x24;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0304eec0(uVar3,0);
    uVar5 = FUN_0304eec0(*(undefined8 *)StringLiteral_2246,0);
    uVar2 = FUN_03057a60(uVar3,uVar5,0);
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)*unaff_x24;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0304eec0(uVar3,0);
      uVar5 = FUN_0304eec0(*(undefined8 *)StringLiteral_2254,0);
      uVar2 = FUN_03057a60(uVar3,uVar5,0);
      if ((uVar2 & 1) == 0) {
        uVar3 = *(undefined8 *)*unaff_x24;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_0304eec0(uVar3,0);
        uVar5 = FUN_0304eec0(*(undefined8 *)StringLiteral_2249,0);
        uVar2 = FUN_03057a60(uVar3,uVar5,0);
        if ((uVar2 & 1) != 0) {
          uVar3 = FUN_038df410(*(undefined8 *)(unaff_x20 + 0x10),0);
          plVar4 = (long *)thunk_FUN_01afa70c(*(undefined8 *)(*unaff_x24 + 8),&stack0x0000000c);
          if (plVar4 == (long *)0x0) goto LAB_01e61bb8;
          if (*(long *)(*plVar4 + 0x40) == *(long *)(*(long *)StringLiteral_2250 + 0x40)) {
            thunk_FUN_01afac30();
            FUN_038ddaa8(uVar3);
            return;
          }
          goto LAB_01e61bb4;
        }
        uVar3 = *(undefined8 *)*unaff_x24;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_0304eec0(uVar3,0);
        uVar5 = FUN_0304eec0(*(undefined8 *)StringLiteral_2252,0);
        uVar2 = FUN_03057a60(uVar3,uVar5,0);
        if ((uVar2 & 1) != 0) {
          uVar3 = FUN_038df410(*(undefined8 *)(unaff_x20 + 0x10),0);
          plVar4 = (long *)thunk_FUN_01afa70c(*(undefined8 *)(*unaff_x24 + 8),&stack0x0000000c);
          if (plVar4 == (long *)0x0) goto LAB_01e61bb8;
          if (*(long *)(*plVar4 + 0x40) == *(long *)(*(long *)StringLiteral_2241 + 0x40)) {
            thunk_FUN_01afac30();
            FUN_038dd9ec(uVar3);
            return;
          }
          goto LAB_01e61bb4;
        }
        uVar3 = *(undefined8 *)*unaff_x24;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_0304eec0(uVar3,0);
        uVar5 = FUN_0304eec0(*(undefined8 *)StringLiteral_616,0);
        uVar2 = FUN_03057a60(uVar3,uVar5,0);
        if ((uVar2 & 1) != 0) {
          uVar3 = FUN_038df410(*(undefined8 *)(unaff_x20 + 0x10),0);
          plVar4 = (long *)thunk_FUN_01afa70c(*(undefined8 *)(*unaff_x24 + 8),&stack0x0000000c);
          if (plVar4 == (long *)0x0) goto LAB_01e61bb8;
          if (*(long *)(*plVar4 + 0x40) ==
              *(long *)(*(long *)
                         Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                       + 0x40)) {
            puVar6 = (undefined4 *)thunk_FUN_01afac30();
            FUN_038dd930(*puVar6,uVar3);
            return;
          }
          goto LAB_01e61bb4;
        }
        uVar3 = *(undefined8 *)*unaff_x24;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_0304eec0(uVar3,0);
        uVar5 = FUN_0304eec0(*(undefined8 *)StringLiteral_2248,0);
        uVar2 = FUN_03057a60(uVar3,uVar5,0);
        if ((uVar2 & 1) == 0) {
          uVar3 = *(undefined8 *)*unaff_x24;
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar3 = FUN_0304eec0(uVar3,0);
          uVar5 = FUN_0304eec0(*(undefined8 *)StringLiteral_2247,0);
          uVar2 = FUN_03057a60(uVar3,uVar5,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          uVar3 = FUN_038df410(*(undefined8 *)(unaff_x20 + 0x10),0);
          plVar4 = (long *)thunk_FUN_01afa70c(*(undefined8 *)(*unaff_x24 + 8),&stack0x0000000c);
          if (plVar4 == (long *)0x0) goto LAB_01e61bb8;
          if (*(long *)(*plVar4 + 0x40) ==
              *(long *)(*(long *)
                         Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                       + 0x40)) {
            thunk_FUN_01afac30();
            FUN_038dd7b8(uVar3);
            return;
          }
          goto LAB_01e61bb4;
        }
        uVar3 = FUN_038df410(*(undefined8 *)(unaff_x20 + 0x10),0);
        plVar4 = (long *)thunk_FUN_01afa70c(*(undefined8 *)(*unaff_x24 + 8),&stack0x0000000c);
        if (plVar4 != (long *)0x0) {
          if (*(long *)(*plVar4 + 0x40) == *(long *)(*(long *)StringLiteral_725 + 0x40)) {
            puVar7 = (undefined8 *)thunk_FUN_01afac30();
            FUN_038dd874(*puVar7,uVar3);
            return;
          }
          goto LAB_01e61bb4;
        }
        goto LAB_01e61bb8;
      }
      uVar3 = FUN_038df410(*(undefined8 *)(unaff_x20 + 0x10),0);
      plVar4 = (long *)thunk_FUN_01afa70c(*(undefined8 *)(*unaff_x24 + 8),&stack0x0000000c);
      plVar1 = (long *)StringLiteral_2255;
    }
    else {
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f336c(*(undefined8 *)StringLiteral_2312,0);
      uVar3 = FUN_038df410(*(undefined8 *)(unaff_x20 + 0x10),0);
      plVar4 = (long *)thunk_FUN_01afa70c(*(undefined8 *)(*unaff_x24 + 8),&stack0x0000000c);
      plVar1 = (long *)
               Method_System_Threading_Tasks_TaskSchedulerAwaitTaskContinuation_<>c_<Run>b__2_0__;
    }
    if (plVar4 == (long *)0x0) {
LAB_01e61bb8:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(long *)(*plVar4 + 0x40) == *(long *)(*plVar1 + 0x40)) {
      thunk_FUN_01afac30();
      FUN_038ddb64(uVar3);
      return;
    }
  }
  else {
    uVar3 = FUN_038df410(*(undefined8 *)(unaff_x20 + 0x10),0);
    plVar4 = (long *)thunk_FUN_01afa70c(*(undefined8 *)(*unaff_x24 + 8),&stack0x0000000c);
    if (plVar4 == (long *)0x0) goto LAB_01e61bb8;
    if (*(long *)(*plVar4 + 0x40) ==
        *(long *)(*(long *)
                   Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                 + 0x40)) {
      thunk_FUN_01afac30();
      FUN_038ddcdc(uVar3);
      return;
    }
  }
LAB_01e61bb4:
                    /* WARNING: Subroutine does not return */
  FUN_01b4841c();
}


