/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetOrgScopedID
ENTRY_POINT: 035f3f04
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Oculus_Platform_CAPI__ovr_Message_GetOrgScopedID(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  int iVar13;
  long unaff_x20;
  long *plVar14;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xa38));
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_77__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_78__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_79__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_8__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                    );
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_80__);
  thunk_FUN_01efb3a4(
                    Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                    );
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_81__);
  *(undefined1 *)(unaff_x20 + 0x845) = 1;
  puVar2 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_79__;
  puVar1 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_73__;
  lVar6 = *(long *)(unaff_x19 + 0x60);
  if (lVar6 != 0) {
    uVar10 = *(uint *)(lVar6 + 0x18);
    if ((int)uVar10 < 1) {
      iVar13 = 0;
    }
    else {
      uVar9 = 0;
      iVar13 = 0;
      do {
        if (uVar10 <= uVar9) goto LAB_035f4320;
        lVar12 = *(long *)(lVar6 + (long)(int)uVar9 * 8 + 0x20);
        if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0)) goto LAB_035f431c;
        uVar9 = uVar9 + 1;
        iVar13 = iVar13 + *(int *)(lVar12 + 0x18);
      } while ((int)uVar9 < (int)uVar10);
    }
    lVar6 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_8__);
    FUN_02b6aa80(lVar6,iVar13 + 1,*(undefined8 *)puVar2);
    plVar14 = (long *)(unaff_x19 + 0x68);
    *plVar14 = lVar6;
    thunk_FUN_01f51358(plVar14,lVar6);
    lVar6 = *(long *)puVar1;
    lVar12 = *plVar14;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *(long *)puVar1;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
    if ((lVar6 != 0) && (lVar12 != 0)) {
      FUN_02b6b2e4(lVar12,*(undefined8 *)(lVar6 + 0x10),lVar6,
                   *(undefined8 *)Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_77__)
      ;
      puVar4 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_80__;
      puVar3 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_78__;
      puVar2 = 
      Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__;
      puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
      lVar6 = *(long *)(unaff_x19 + 0x60);
      if (lVar6 != 0) {
        uVar7 = *(undefined8 *)(lVar6 + 0x18);
        if (0 < (int)uVar7) {
          uVar10 = 0;
          do {
            if ((uint)uVar7 <= uVar10) {
LAB_035f4320:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            uVar9 = 0;
            lVar12 = (long)(int)uVar10;
            while( true ) {
              lVar8 = *(long *)(lVar6 + lVar12 * 8 + 0x20);
              if ((lVar8 == 0) || (lVar11 = *(long *)(lVar8 + 0x18), lVar11 == 0))
              goto LAB_035f431c;
              if ((int)*(uint *)(lVar11 + 0x18) <= (int)uVar9) break;
              if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_035f4320;
              lVar8 = (long)(int)uVar9;
              lVar6 = *(long *)(lVar11 + lVar8 * 8 + 0x20);
              if ((lVar6 == 0) || (*plVar14 == 0)) goto LAB_035f431c;
              uVar5 = FUN_02b6b4d8(*plVar14,*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)puVar3);
              if ((uVar5 & 1) == 0) {
                lVar6 = *(long *)(unaff_x19 + 0x60);
                if (lVar6 == 0) goto LAB_035f431c;
                if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_035f4320;
                lVar6 = *(long *)(lVar6 + lVar12 * 8 + 0x20);
                if ((lVar6 == 0) || (lVar11 = *(long *)(lVar6 + 0x18), lVar11 == 0))
                goto LAB_035f431c;
                if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_035f4320;
                lVar11 = *(long *)(lVar11 + lVar8 * 8 + 0x20);
                if (lVar11 == 0) goto LAB_035f431c;
                *(long *)(lVar11 + 0x78) = lVar6;
                thunk_FUN_01f51358();
                lVar6 = *(long *)(unaff_x19 + 0x60);
                if (lVar6 == 0) goto LAB_035f431c;
                if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_035f4320;
                lVar6 = *(long *)(lVar6 + lVar12 * 8 + 0x20);
                if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x18), lVar6 == 0))
                goto LAB_035f431c;
                if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_035f4320;
                lVar6 = *(long *)(lVar6 + lVar8 * 8 + 0x20);
                if ((lVar6 == 0) || (*(long *)(unaff_x19 + 0x68) == 0)) goto LAB_035f431c;
                FUN_02b6b2e4(*(long *)(unaff_x19 + 0x68),*(undefined8 *)(lVar6 + 0x10),lVar6,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_77__);
              }
              else {
                lVar6 = FUN_01f08890(*(undefined8 *)
                                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                     ,5);
                if (lVar6 == 0) goto LAB_035f431c;
                if (*(int *)(lVar6 + 0x18) == 0) goto LAB_035f4320;
                *(undefined8 *)(lVar6 + 0x20) =
                     *(undefined8 *)
                      Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_81__;
                thunk_FUN_01f51358();
                lVar11 = *(long *)(unaff_x19 + 0x60);
                if (lVar11 == 0) goto LAB_035f431c;
                if (*(uint *)(lVar11 + 0x18) <= uVar10) goto LAB_035f4320;
                lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
                if (lVar11 == 0) goto LAB_035f431c;
                if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_035f4320;
                *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar11 + 0x10);
                thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x28));
                if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_035f4320;
                *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)puVar4;
                thunk_FUN_01f51358();
                lVar11 = *(long *)(unaff_x19 + 0x60);
                if (lVar11 == 0) goto LAB_035f431c;
                if (*(uint *)(lVar11 + 0x18) <= uVar10) goto LAB_035f4320;
                lVar11 = *(long *)(lVar11 + lVar12 * 8 + 0x20);
                if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x18), lVar11 == 0))
                goto LAB_035f431c;
                if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_035f4320;
                lVar8 = *(long *)(lVar11 + lVar8 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_035f431c;
                if (*(uint *)(lVar6 + 0x18) < 4) goto LAB_035f4320;
                *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(lVar8 + 0x10);
                thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x38));
                if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_035f4320;
                *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)puVar2;
                thunk_FUN_01f51358();
                uVar7 = FUN_0340efe8(lVar6,0);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c(*(long *)puVar1);
                }
                FUN_0403ed64(uVar7,0);
              }
              lVar6 = *(long *)(unaff_x19 + 0x60);
              if (lVar6 == 0) goto LAB_035f431c;
              uVar9 = uVar9 + 1;
              if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_035f4320;
            }
            *(undefined4 *)(lVar8 + 0x34) = 0;
            uVar7 = *(undefined8 *)(lVar6 + 0x18);
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)uVar7);
        }
        return;
      }
    }
  }
LAB_035f431c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


