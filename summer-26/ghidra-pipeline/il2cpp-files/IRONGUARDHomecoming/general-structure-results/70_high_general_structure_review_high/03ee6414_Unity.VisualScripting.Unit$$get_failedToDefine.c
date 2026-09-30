/*
FUNCTION_NAME: Unity.VisualScripting.Unit$$get_failedToDefine
ENTRY_POINT: 03ee6414
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_Unit__get_failedToDefine(void)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int in_w8;
  ulong uVar8;
  long unaff_x19;
  long *plVar9;
  long *unaff_x22;
  long lVar10;
  char cStack0000000000000018;
  int iStack000000000000001c;
  
  if (in_w8 == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar5 = FUN_03eedf54();
  puVar1 = PTR_DAT_0457ce28;
  if (lVar5 == 0) {
LAB_03ee668c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar8 = *(ulong *)(lVar5 + 0x18);
  if (uVar8 == 0) {
    uVar6 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                              );
    uVar6 = FUN_01f08890(uVar6,5);
    FUN_01bc50c0();
    uVar7 = thunk_FUN_01efb3a4(PTR_DAT_0457ce68);
    FUN_01bc5408(uVar6,0,uVar7);
    plVar9 = *(long **)(unaff_x19 + 0x20);
    FUN_01bc50c0(plVar9);
    uVar7 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
    FUN_01bc50c0(uVar6);
    FUN_01bc5408(uVar6,1,uVar7);
    FUN_01bc50c0(uVar6);
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__
                              );
    FUN_01bc5408(uVar6,2,uVar7);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x10);
    FUN_01bc50c0(uVar6);
    FUN_01bc5408(uVar6,3,uVar7);
    FUN_01bc50c0(uVar6);
    uVar7 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                              );
    FUN_01bc5408(uVar6,4,uVar7);
    uVar7 = FUN_0340efe8(uVar6,0);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRScenePlane>__);
    uVar6 = thunk_FUN_01f117cc();
    FUN_0358c410(uVar6,uVar7,0);
  }
  else {
    _cStack0000000000000018 = 0;
    if (0 < (int)uVar8) {
      lVar10 = 0;
LAB_03ee6460:
      if ((uint)uVar8 <= (uint)lVar10) {
LAB_03ee6690:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar9 = *(long **)(lVar5 + 0x20 + lVar10 * 8);
      if (plVar9 == (long *)0x0) goto LAB_03ee668c;
      cVar2 = cStack0000000000000018;
      iVar3 = (**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
      if (cVar2 == '\0') {
        FUN_0332f40c(&stack0x00000018,iVar3,*(undefined8 *)puVar1);
      }
      else if ((cStack0000000000000018 == '\0') || (iVar3 != iStack000000000000001c)) {
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar8 = FUN_03eeb2f4(plVar9,0);
        if ((uVar8 & 1) == 0) {
          lVar5 = FUN_01f08890(*(undefined8 *)
                                Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                               ,5);
          if (lVar5 == 0) goto LAB_03ee668c;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_03ee6690;
          *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_0457ce38;
          thunk_FUN_01f51358();
          plVar9 = *(long **)(unaff_x19 + 0x20);
          if (plVar9 == (long *)0x0) goto LAB_03ee668c;
          uVar6 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
          if (1 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x28) = uVar6;
            thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28),uVar6);
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
                  uVar6 = FUN_0340efe8(lVar5,0);
                  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0)
                      == 0) {
                    thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__
                                      );
                  }
                  FUN_0403f2cc(uVar6,0);
                  goto LAB_03ee65f8;
                }
              }
            }
          }
          goto LAB_03ee6690;
        }
      }
      uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
      lVar10 = lVar10 + 1;
      if ((int)*(uint *)(lVar5 + 0x18) <= (int)lVar10) goto LAB_03ee65f8;
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
    uVar6 = thunk_FUN_01efb3a4(PTR_DAT_0457ce40);
    uVar4 = thunk_FUN_0332f424(&stack0x00000018,uVar6);
    thunk_FUN_01efb3a4(PTR_DAT_0457ce48);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(PTR_DAT_0457ce50);
    thunk_FUN_02803030(uVar6,uVar4,uVar7);
  }
  uVar7 = thunk_FUN_01efb3a4(PTR_DAT_0457ce60);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar7);
}


