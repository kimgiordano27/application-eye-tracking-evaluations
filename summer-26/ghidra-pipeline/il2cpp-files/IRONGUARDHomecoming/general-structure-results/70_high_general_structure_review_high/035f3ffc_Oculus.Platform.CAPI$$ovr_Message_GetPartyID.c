/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetPartyID
ENTRY_POINT: 035f3ffc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void Oculus_Platform_CAPI__ovr_Message_GetPartyID(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long *plVar11;
  long unaff_x21;
  long lVar12;
  long *unaff_x22;
  uint uVar13;
  
  plVar11 = (long *)(unaff_x20 + 0x68);
  *plVar11 = unaff_x21;
  thunk_FUN_01f51358(plVar11);
  lVar5 = *unaff_x22;
  lVar12 = *plVar11;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *unaff_x22;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
  if ((lVar5 != 0) && (lVar12 != 0)) {
    FUN_02b6b2e4(lVar12,*(undefined8 *)(lVar5 + 0x10),lVar5,
                 *(undefined8 *)Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_77__);
    puVar4 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_80__;
    puVar3 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_78__;
    puVar2 = 
    Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__;
    puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
    lVar5 = *(long *)(unaff_x19 + 0x60);
    if (lVar5 != 0) {
      uVar7 = *(undefined8 *)(lVar5 + 0x18);
      if (0 < (int)uVar7) {
        uVar9 = 0;
        do {
          if ((uint)uVar7 <= uVar9) {
LAB_035f4320:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          uVar13 = 0;
          lVar12 = (long)(int)uVar9;
          while( true ) {
            lVar8 = *(long *)(lVar5 + lVar12 * 8 + 0x20);
            if ((lVar8 == 0) || (lVar10 = *(long *)(lVar8 + 0x18), lVar10 == 0)) goto LAB_035f431c;
            if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar13) break;
            if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_035f4320;
            lVar8 = (long)(int)uVar13;
            lVar5 = *(long *)(lVar10 + lVar8 * 8 + 0x20);
            if ((lVar5 == 0) || (*plVar11 == 0)) goto LAB_035f431c;
            uVar6 = FUN_02b6b4d8(*plVar11,*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)puVar3);
            if ((uVar6 & 1) == 0) {
              lVar5 = *(long *)(unaff_x19 + 0x60);
              if (lVar5 == 0) goto LAB_035f431c;
              if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_035f4320;
              lVar5 = *(long *)(lVar5 + lVar12 * 8 + 0x20);
              if ((lVar5 == 0) || (lVar10 = *(long *)(lVar5 + 0x18), lVar10 == 0))
              goto LAB_035f431c;
              if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_035f4320;
              lVar10 = *(long *)(lVar10 + lVar8 * 8 + 0x20);
              if (lVar10 == 0) goto LAB_035f431c;
              *(long *)(lVar10 + 0x78) = lVar5;
              thunk_FUN_01f51358();
              lVar5 = *(long *)(unaff_x19 + 0x60);
              if (lVar5 == 0) goto LAB_035f431c;
              if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_035f4320;
              lVar5 = *(long *)(lVar5 + lVar12 * 8 + 0x20);
              if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x18), lVar5 == 0)) goto LAB_035f431c;
              if (*(uint *)(lVar5 + 0x18) <= uVar13) goto LAB_035f4320;
              lVar5 = *(long *)(lVar5 + lVar8 * 8 + 0x20);
              if ((lVar5 == 0) || (*(long *)(unaff_x19 + 0x68) == 0)) goto LAB_035f431c;
              FUN_02b6b2e4(*(long *)(unaff_x19 + 0x68),*(undefined8 *)(lVar5 + 0x10),lVar5,
                           *(undefined8 *)
                            Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_77__);
            }
            else {
              lVar5 = FUN_01f08890(*(undefined8 *)
                                    Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                   ,5);
              if (lVar5 == 0) goto LAB_035f431c;
              if (*(int *)(lVar5 + 0x18) == 0) goto LAB_035f4320;
              *(undefined8 *)(lVar5 + 0x20) =
                   *(undefined8 *)Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_81__;
              thunk_FUN_01f51358();
              lVar10 = *(long *)(unaff_x19 + 0x60);
              if (lVar10 == 0) goto LAB_035f431c;
              if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_035f4320;
              lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
              if (lVar10 == 0) goto LAB_035f431c;
              if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_035f4320;
              *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar10 + 0x10);
              thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28));
              if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_035f4320;
              *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)puVar4;
              thunk_FUN_01f51358();
              lVar10 = *(long *)(unaff_x19 + 0x60);
              if (lVar10 == 0) goto LAB_035f431c;
              if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_035f4320;
              lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
              if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x18), lVar10 == 0))
              goto LAB_035f431c;
              if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_035f4320;
              lVar8 = *(long *)(lVar10 + lVar8 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_035f431c;
              if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_035f4320;
              *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(lVar8 + 0x10);
              thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x38));
              if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_035f4320;
              *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)puVar2;
              thunk_FUN_01f51358();
              uVar7 = FUN_0340efe8(lVar5,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(*(long *)puVar1);
              }
              FUN_0403ed64(uVar7,0);
            }
            lVar5 = *(long *)(unaff_x19 + 0x60);
            if (lVar5 == 0) goto LAB_035f431c;
            uVar13 = uVar13 + 1;
            if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_035f4320;
          }
          *(undefined4 *)(lVar8 + 0x34) = 0;
          uVar7 = *(undefined8 *)(lVar5 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar7);
      }
      return;
    }
  }
LAB_035f431c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


