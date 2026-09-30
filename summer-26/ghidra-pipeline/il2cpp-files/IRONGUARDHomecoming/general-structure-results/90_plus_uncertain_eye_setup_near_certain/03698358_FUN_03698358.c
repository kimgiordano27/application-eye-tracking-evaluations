/*
FUNCTION_NAME: FUN_03698358
ENTRY_POINT: 03698358
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 118
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_11;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_03698358(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 local_d0 [2];
  undefined8 uStack_bc;
  undefined8 local_b0 [2];
  undefined8 uStack_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_04833f06 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__);
    thunk_FUN_01efb3a4(Method_UnityEngine_ObjectDispatcher_<>c_<_cctor>b__54_1__);
    thunk_FUN_01efb3a4(
                      Method_OVRSceneLoader_<DelayCanvasPosUpdate>d__24_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(
                      Method_ObjectManipulator_<StartDemo>d__23_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_FovfPair_get_Item__);
    DAT_04833f06 = 1;
  }
  lVar3 = *(long *)(param_4 + 0x20);
  if (lVar3 == 0) goto LAB_03698674;
  if (*(int *)(lVar3 + 0x84) == 3) {
    return;
  }
  uVar6 = *(undefined8 *)(lVar3 + 200);
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c();
  }
  uVar1 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (uVar6,0,0);
  lVar3 = *(long *)(param_4 + 0x20);
  if ((uVar1 & 1) == 0) {
    if ((lVar3 == 0) || (*(long *)(lVar3 + 200) == 0)) goto LAB_03698674;
    uVar10 = 0x3f800000;
    uVar11 = 0x3f800000;
    uVar12 = 0x3f800000;
    uVar13 = 0x3f800000;
    if (*(char *)(*(long *)(lVar3 + 200) + 0xb0) == '\0') goto LAB_03698440;
  }
  else {
LAB_03698440:
    uVar13 = *(undefined4 *)(param_4 + 0x54);
    uVar12 = *(undefined4 *)(param_4 + 0x58);
    uVar11 = *(undefined4 *)(param_4 + 0x5c);
    uVar10 = *(undefined4 *)(param_4 + 0x60);
  }
  plVar7 = *(long **)(param_4 + 0x70);
  if (plVar7 == (long *)0x0) {
    if (lVar3 == 0) goto LAB_03698674;
    local_70 = *(undefined8 *)(lVar3 + 0x168);
    uStack_88 = *(undefined8 *)(lVar3 + 0x150);
    local_90 = *(undefined8 *)(lVar3 + 0x148);
    uStack_78 = *(undefined8 *)(lVar3 + 0x160);
    uVar6 = *(undefined8 *)(lVar3 + 0x158);
    uStack_80 = uVar6;
    if (*(int *)(*(long *)Method_OVRPlugin_FovfPair_get_Item__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = FUN_03694cd0(&local_90,0);
  }
  else {
    if (lVar3 == 0) goto LAB_03698674;
    local_70 = *(undefined8 *)(lVar3 + 0x168);
    uStack_88 = *(undefined8 *)(lVar3 + 0x150);
    local_90 = *(undefined8 *)(lVar3 + 0x148);
    uStack_78 = *(undefined8 *)(lVar3 + 0x160);
    uVar6 = *(undefined8 *)(lVar3 + 0x158);
    uStack_80 = uVar6;
    if (*(int *)(*(long *)Method_OVRPlugin_FovfPair_get_Item__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = FUN_03694cd0(&local_90,0);
    lVar3 = *plVar7;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_UnityEngine_ObjectDispatcher_<>c_<_cctor>b__54_1__) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0369852c;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)Method_UnityEngine_ObjectDispatcher_<>c_<_cctor>b__54_1__,
                          0);
LAB_0369852c:
    uVar9 = (*(code *)*puVar2)(uVar9,uVar6,param_3,plVar7,puVar2[1]);
  }
  if (*(long *)(param_4 + 0x20) != 0) {
    FUN_03695c0c(local_b0,*(long *)(param_4 + 0x20),0);
    local_d0[0] = local_b0[0];
    uStack_bc = uStack_9c;
    FUN_03698678(uVar9,uVar6,param_3,param_4,local_d0);
    lVar3 = *(long *)(param_4 + 0x28);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x50) = uVar13;
      *(undefined4 *)(lVar3 + 0x54) = uVar12;
      *(undefined4 *)(lVar3 + 0x58) = uVar11;
      *(undefined4 *)(lVar3 + 0x5c) = uVar10;
      plVar7 = *(long **)(param_4 + 0x48);
      lVar3 = *(long *)(param_4 + 0x28);
      if (plVar7 == (long *)0x0) {
        uVar8 = 0;
      }
      else {
        lVar4 = *plVar7;
        uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar1 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) ==
                *(long *)Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_03698610;
            }
            uVar1 = uVar1 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar1 != 0);
        }
        puVar2 = (undefined8 *)
                 FUN_01ecb238(plVar7,*(long *)
                                      Method_UnityEngine_UIElements_FocusOutEvent_<>c_<_cctor>b__0_0__
                              ,0);
LAB_03698610:
        uVar8 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      }
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x78) = uVar8;
        if (*(long *)(param_4 + 0x28) != 0) {
          FUN_035fc638(*(long *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x68),0,0);
          FUN_03698ce8(uVar13,uVar12,uVar11,uVar10,param_4);
          return;
        }
      }
    }
  }
LAB_03698674:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


