/*
FUNCTION_NAME: Unity.VisualScripting.Unit$$Instantiate
ENTRY_POINT: 03ee6264
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_3
*/


void Unity_VisualScripting_Unit__Instantiate(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  long unaff_x21;
  undefined8 uVar10;
  long *plVar11;
  undefined8 in_stack_00000008;
  char cStack0000000000000018;
  int iStack000000000000001c;
  
  thunk_FUN_01efb3a4(PTR_DAT_0457ce30);
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                    );
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  thunk_FUN_01efb3a4(
                    Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                    );
  thunk_FUN_01efb3a4(PTR_DAT_0457ce38);
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__);
  *(undefined1 *)(unaff_x21 + 0xe63) = 1;
  _cStack0000000000000018 = 0;
  in_stack_00000008 = 0;
  uVar9 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_03582560(uVar9,0,0);
  puVar1 = Method_UnityEngine_Component_GetComponent<TTSServiceLogging>__;
  if ((uVar6 & 1) != 0) {
    lVar7 = *(long *)(unaff_x19 + 0x28);
    if (lVar7 != 0) {
      uVar10 = *(undefined8 *)(unaff_x19 + 0x10);
      thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRScenePlane>__);
      uVar9 = thunk_FUN_01f117cc();
      FUN_0358c8d4(uVar9,lVar7,uVar10,0);
      uVar10 = thunk_FUN_01efb3a4(PTR_DAT_0457ce60);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar9,uVar10);
    }
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRScenePlane>__);
    uVar9 = thunk_FUN_01f117cc();
    uVar10 = thunk_FUN_01efb3a4(PTR_DAT_0457ce58);
    FUN_0358c410(uVar9,uVar10,0);
    uVar10 = thunk_FUN_01efb3a4(PTR_DAT_0457ce60);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar9,uVar10);
  }
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x38),0);
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x40),0);
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x48),0);
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x50),0);
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x60),0);
  *(undefined8 *)(unaff_x19 + 0x68) = 0;
  thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x68),0);
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x70),0);
  uVar9 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x19 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar7 = FUN_03eedf54(uVar9,uVar10,0x1d,0x7c,0);
  if (lVar7 == 0) {
LAB_03ee668c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(long *)(lVar7 + 0x18) == 0) {
    uVar9 = *(undefined8 *)(unaff_x19 + 0x20);
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar8 = FUN_03f6ff34(uVar9,0);
    if (lVar8 == 0) goto LAB_03ee668c;
    uVar6 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                      (lVar8,*(undefined8 *)(unaff_x19 + 0x10),&stack0x00000008,
                       *(undefined8 *)
                        Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_27__);
    if ((uVar6 & 1) != 0) {
      FUN_03ee4174();
      uVar9 = *(undefined8 *)(unaff_x19 + 0x20);
      uVar10 = *(undefined8 *)(unaff_x19 + 0x10);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar7 = FUN_03eedf54(uVar9,uVar10,0x1d,0x7c,0);
      if (lVar7 == 0) goto LAB_03ee668c;
    }
  }
  puVar2 = PTR_DAT_0457ce28;
  uVar6 = *(ulong *)(lVar7 + 0x18);
  if (uVar6 == 0) {
    uVar9 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                              );
    uVar9 = FUN_01f08890(uVar9,5);
    FUN_01bc50c0();
    uVar10 = thunk_FUN_01efb3a4(PTR_DAT_0457ce68);
    FUN_01bc5408(uVar9,0,uVar10);
    plVar11 = *(long **)(unaff_x19 + 0x20);
    FUN_01bc50c0(plVar11);
    uVar10 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
    FUN_01bc50c0(uVar9);
    FUN_01bc5408(uVar9,1,uVar10);
    FUN_01bc50c0(uVar9);
    uVar10 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__
                               );
    FUN_01bc5408(uVar9,2,uVar10);
    uVar10 = *(undefined8 *)(unaff_x19 + 0x10);
    FUN_01bc50c0(uVar9);
    FUN_01bc5408(uVar9,3,uVar10);
    FUN_01bc50c0(uVar9);
    uVar10 = thunk_FUN_01efb3a4(
                               Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                               );
    FUN_01bc5408(uVar9,4,uVar10);
    uVar10 = FUN_0340efe8(uVar9,0);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRScenePlane>__);
    uVar9 = thunk_FUN_01f117cc();
    FUN_0358c410(uVar9,uVar10,0);
  }
  else {
    _cStack0000000000000018 = 0;
    if (0 < (int)uVar6) {
      lVar8 = 0;
LAB_03ee6460:
      if ((uint)uVar6 <= (uint)lVar8) {
LAB_03ee6690:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar11 = *(long **)(lVar7 + 0x20 + lVar8 * 8);
      if (plVar11 == (long *)0x0) goto LAB_03ee668c;
      cVar3 = cStack0000000000000018;
      iVar4 = (**(code **)(*plVar11 + 0x198))(plVar11,*(undefined8 *)(*plVar11 + 0x1a0));
      if (cVar3 == '\0') {
        FUN_0332f40c(&stack0x00000018,iVar4,*(undefined8 *)puVar2);
      }
      else if ((cStack0000000000000018 == '\0') || (iVar4 != iStack000000000000001c)) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar6 = FUN_03eeb2f4(plVar11,0);
        if ((uVar6 & 1) == 0) {
          lVar7 = FUN_01f08890(*(undefined8 *)
                                Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                               ,5);
          if (lVar7 == 0) goto LAB_03ee668c;
          if (*(int *)(lVar7 + 0x18) == 0) goto LAB_03ee6690;
          *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_0457ce38;
          thunk_FUN_01f51358();
          plVar11 = *(long **)(unaff_x19 + 0x20);
          if (plVar11 == (long *)0x0) goto LAB_03ee668c;
          uVar9 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
          if (1 < *(uint *)(lVar7 + 0x18)) {
            *(undefined8 *)(lVar7 + 0x28) = uVar9;
            thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x28),uVar9);
            if (2 < *(uint *)(lVar7 + 0x18)) {
              *(undefined8 *)(lVar7 + 0x30) =
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__;
              thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x30));
              if (3 < *(uint *)(lVar7 + 0x18)) {
                *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(unaff_x19 + 0x10);
                thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x38));
                if (4 < *(uint *)(lVar7 + 0x18)) {
                  *(undefined8 *)(lVar7 + 0x40) =
                       *(undefined8 *)
                        Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                  ;
                  thunk_FUN_01f51358();
                  uVar9 = FUN_0340efe8(lVar7,0);
                  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0)
                      == 0) {
                    thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__
                                      );
                  }
                  FUN_0403f2cc(uVar9,0);
                  goto LAB_03ee65f8;
                }
              }
            }
          }
          goto LAB_03ee6690;
        }
      }
      uVar6 = (ulong)*(uint *)(lVar7 + 0x18);
      lVar8 = lVar8 + 1;
      if ((int)*(uint *)(lVar7 + 0x18) <= (int)lVar8) goto LAB_03ee65f8;
      goto LAB_03ee6460;
    }
LAB_03ee65f8:
    if (cStack0000000000000018 != '\0') {
      if (iStack000000000000001c < 5) {
        if (iStack000000000000001c == 1) {
          FUN_03ee7400();
          goto LAB_03ee6668;
        }
        if (iStack000000000000001c == 4) {
          FUN_03ee6c74();
          goto LAB_03ee6668;
        }
      }
      else {
        if (iStack000000000000001c == 8) {
          FUN_03ee703c();
LAB_03ee6668:
          *(undefined1 *)(unaff_x19 + 0x78) = 1;
          return;
        }
        if (iStack000000000000001c == 0x10) {
          FUN_03ee6e58();
          goto LAB_03ee6668;
        }
      }
    }
    uVar9 = thunk_FUN_01efb3a4(PTR_DAT_0457ce40);
    uVar5 = thunk_FUN_0332f424(&stack0x00000018,uVar9);
    thunk_FUN_01efb3a4(PTR_DAT_0457ce48);
    uVar9 = thunk_FUN_01f117cc();
    uVar10 = thunk_FUN_01efb3a4(PTR_DAT_0457ce50);
    thunk_FUN_02803030(uVar9,uVar5,uVar10);
  }
  uVar10 = thunk_FUN_01efb3a4(PTR_DAT_0457ce60);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar9,uVar10);
}


