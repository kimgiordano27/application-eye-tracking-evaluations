/*
FUNCTION_NAME: Unity.VisualScripting.Unit$$Uninstantiate
ENTRY_POINT: 03ee6314
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_Unit__Uninstantiate(undefined8 param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x19;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  char cStack0000000000000018;
  int iStack000000000000001c;
  
  thunk_FUN_01f51358(param_1,0);
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
  uVar8 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x19 + 0x10);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar5 = FUN_03eedf54(uVar8,uVar9,0x1d,0x7c,0);
  if (lVar5 == 0) {
LAB_03ee668c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(long *)(lVar5 + 0x18) == 0) {
    uVar8 = *(undefined8 *)(unaff_x19 + 0x20);
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar6 = FUN_03f6ff34(uVar8,0);
    if (lVar6 == 0) goto LAB_03ee668c;
    uVar7 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                      (lVar6,*(undefined8 *)(unaff_x19 + 0x10),&stack0x00000008,
                       *(undefined8 *)
                        Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_27__);
    if ((uVar7 & 1) != 0) {
      FUN_03ee4174();
      uVar8 = *(undefined8 *)(unaff_x19 + 0x20);
      uVar9 = *(undefined8 *)(unaff_x19 + 0x10);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar5 = FUN_03eedf54(uVar8,uVar9,0x1d,0x7c,0);
      if (lVar5 == 0) goto LAB_03ee668c;
    }
  }
  puVar1 = PTR_DAT_0457ce28;
  uVar7 = *(ulong *)(lVar5 + 0x18);
  if (uVar7 == 0) {
    uVar8 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                              );
    uVar8 = FUN_01f08890(uVar8,5);
    FUN_01bc50c0();
    uVar9 = thunk_FUN_01efb3a4(PTR_DAT_0457ce68);
    FUN_01bc5408(uVar8,0,uVar9);
    plVar10 = *(long **)(unaff_x19 + 0x20);
    FUN_01bc50c0(plVar10);
    uVar9 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
    FUN_01bc50c0(uVar8);
    FUN_01bc5408(uVar8,1,uVar9);
    FUN_01bc50c0(uVar8);
    uVar9 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__
                              );
    FUN_01bc5408(uVar8,2,uVar9);
    uVar9 = *(undefined8 *)(unaff_x19 + 0x10);
    FUN_01bc50c0(uVar8);
    FUN_01bc5408(uVar8,3,uVar9);
    FUN_01bc50c0(uVar8);
    uVar9 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                              );
    FUN_01bc5408(uVar8,4,uVar9);
    uVar9 = FUN_0340efe8(uVar8,0);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRScenePlane>__);
    uVar8 = thunk_FUN_01f117cc();
    FUN_0358c410(uVar8,uVar9,0);
  }
  else {
    _cStack0000000000000018 = 0;
    if (0 < (int)uVar7) {
      lVar6 = 0;
LAB_03ee6460:
      if ((uint)uVar7 <= (uint)lVar6) {
LAB_03ee6690:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar10 = *(long **)(lVar5 + 0x20 + lVar6 * 8);
      if (plVar10 == (long *)0x0) goto LAB_03ee668c;
      cVar2 = cStack0000000000000018;
      iVar3 = (**(code **)(*plVar10 + 0x198))(plVar10,*(undefined8 *)(*plVar10 + 0x1a0));
      if (cVar2 == '\0') {
        FUN_0332f40c(&stack0x00000018,iVar3,*(undefined8 *)puVar1);
      }
      else if ((cStack0000000000000018 == '\0') || (iVar3 != iStack000000000000001c)) {
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar7 = FUN_03eeb2f4(plVar10,0);
        if ((uVar7 & 1) == 0) {
          lVar5 = FUN_01f08890(*(undefined8 *)
                                Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                               ,5);
          if (lVar5 == 0) goto LAB_03ee668c;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_03ee6690;
          *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_0457ce38;
          thunk_FUN_01f51358();
          plVar10 = *(long **)(unaff_x19 + 0x20);
          if (plVar10 == (long *)0x0) goto LAB_03ee668c;
          uVar8 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
          if (1 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x28) = uVar8;
            thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28),uVar8);
            if (2 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x30) =
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__;
              thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x30));
              if (3 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(unaff_x19 + 0x10);
                thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x38));
                if (4 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x40) =
                       *(undefined8 *)
                        Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                  ;
                  thunk_FUN_01f51358();
                  uVar8 = FUN_0340efe8(lVar5,0);
                  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0)
                      == 0) {
                    thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__
                                      );
                  }
                  FUN_0403f2cc(uVar8,0);
                  goto LAB_03ee65f8;
                }
              }
            }
          }
          goto LAB_03ee6690;
        }
      }
      uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
      lVar6 = lVar6 + 1;
      if ((int)*(uint *)(lVar5 + 0x18) <= (int)lVar6) goto LAB_03ee65f8;
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
    uVar8 = thunk_FUN_01efb3a4(PTR_DAT_0457ce40);
    uVar4 = thunk_FUN_0332f424(&stack0x00000018,uVar8);
    thunk_FUN_01efb3a4(PTR_DAT_0457ce48);
    uVar8 = thunk_FUN_01f117cc();
    uVar9 = thunk_FUN_01efb3a4(PTR_DAT_0457ce50);
    thunk_FUN_02803030(uVar8,uVar4,uVar9);
  }
  uVar9 = thunk_FUN_01efb3a4(PTR_DAT_0457ce60);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar8,uVar9);
}


