/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetTrackingPositionEnabled
ENTRY_POINT: 03396cd8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03396ec4) */

long OVRPlugin_OVRP_1_1_0__ovrp_SetTrackingPositionEnabled(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  long *unaff_x23;
  
  uVar11 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar12 = *param_1;
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar12 = FUN_032e04b8(uVar12,0);
  uVar3 = FUN_032e935c(uVar11,uVar12,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_033b3cd4();
    return lVar4;
  }
  if (unaff_x19 != (long *)0x0) {
    iVar2 = (**(code **)(*unaff_x19 + 0x188))();
    if (iVar2 == 0xb) {
      uVar11 = *(undefined8 *)(unaff_x20 + 0x60);
      uVar12 = *(undefined8 *)
                Method_System_Collections_Generic_HashSet<AsyncOperationHandle>__ctor__;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar12 = FUN_032e04b8(uVar12,0);
      uVar3 = FUN_032e935c(uVar11,uVar12,0);
      if ((uVar3 & 1) == 0) {
        uVar11 = *(undefined8 *)(unaff_x20 + 0x60);
        uVar12 = *(undefined8 *)
                  Method_UnityEngine_UIElements_EventBase<MouseCaptureEvent>_SetCreateFunction__;
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar12 = FUN_032e04b8(uVar12,0);
        uVar3 = FUN_032e935c(uVar11,uVar12,0);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
      }
    }
    puVar1 = PTR_DAT_0422fce8;
    plVar5 = (long *)thunk_FUN_01c496e0(*(undefined8 *)
                                         Method_System_Collections_Generic_HashSet<AsyncOperationHandle>__ctor__
                                       );
    FUN_033bc398(plVar5,0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_03369418(plVar5);
    lVar4 = FUN_033bc37c(plVar5,0);
    lVar9 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03396e60;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_01c72498(plVar5,*(long *)puVar1,0);
LAB_03396e60:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((unaff_x20 != 0) && (lVar4 != 0)) {
      plVar5 = *(long **)(unaff_x20 + 0x60);
      uVar11 = thunk_FUN_01c5d21c(lVar4,0);
      if (plVar5 == (long *)0x0) goto LAB_03396ecc;
      uVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,uVar11,*(undefined8 *)(*plVar5 + 0x2a0));
      if ((uVar3 & 1) == 0) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar11 = FUN_03295500(0);
        FUN_019b2708(lVar4);
        plVar5 = (long *)thunk_FUN_01c5d21c(lVar4,0);
        FUN_019b2708();
        uVar12 = (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
        FUN_019b2708();
        plVar5 = *(long **)(unaff_x20 + 0x60);
        FUN_019b2708(plVar5);
        uVar7 = (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
        uVar8 = thunk_FUN_01c273e8(
                                  Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_Add__
                                  );
        FUN_033704d4(uVar8,uVar11,uVar12,uVar7,0);
        uVar11 = FUN_0335cdc4();
        uVar12 = thunk_FUN_01c273e8(
                                   Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_Clear__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar11,uVar12);
      }
    }
    return lVar4;
  }
LAB_03396ecc:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


