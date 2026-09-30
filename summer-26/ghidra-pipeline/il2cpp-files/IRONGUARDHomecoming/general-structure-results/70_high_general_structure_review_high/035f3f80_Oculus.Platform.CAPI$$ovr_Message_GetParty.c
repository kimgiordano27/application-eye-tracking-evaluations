/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetParty
ENTRY_POINT: 035f3f80
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void Oculus_Platform_CAPI__ovr_Message_GetParty(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  uint in_w9;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  int iVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  
  puVar2 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_79__;
  puVar1 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_73__;
  if ((int)in_w9 < 1) {
    iVar11 = 0;
  }
  else {
    uVar8 = 0;
    iVar11 = 0;
    do {
      if (in_w9 <= uVar8) goto LAB_035f4320;
      lVar10 = *(long *)(param_1 + (long)(int)uVar8 * 8 + 0x20);
      if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x18), lVar10 == 0)) goto LAB_035f431c;
      uVar8 = uVar8 + 1;
      iVar11 = iVar11 + *(int *)(lVar10 + 0x18);
    } while ((int)uVar8 < (int)in_w9);
  }
  lVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                               Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_8__);
  FUN_02b6aa80(lVar10,iVar11 + 1,*(undefined8 *)puVar2);
  plVar12 = (long *)(unaff_x19 + 0x68);
  *plVar12 = lVar10;
  thunk_FUN_01f51358(plVar12,lVar10);
  lVar10 = *(long *)puVar1;
  lVar13 = *plVar12;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar10 = *(long *)puVar1;
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
  if ((lVar10 != 0) && (lVar13 != 0)) {
    FUN_02b6b2e4(lVar13,*(undefined8 *)(lVar10 + 0x10),lVar10,
                 *(undefined8 *)Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_77__);
    puVar4 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_80__;
    puVar3 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_78__;
    puVar2 = 
    Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__;
    puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
    lVar10 = *(long *)(unaff_x19 + 0x60);
    if (lVar10 != 0) {
      uVar6 = *(undefined8 *)(lVar10 + 0x18);
      if (0 < (int)uVar6) {
        uVar8 = 0;
        do {
          if ((uint)uVar6 <= uVar8) {
LAB_035f4320:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          uVar14 = 0;
          lVar13 = (long)(int)uVar8;
          while( true ) {
            lVar7 = *(long *)(lVar10 + lVar13 * 8 + 0x20);
            if ((lVar7 == 0) || (lVar9 = *(long *)(lVar7 + 0x18), lVar9 == 0)) goto LAB_035f431c;
            if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar14) break;
            if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_035f4320;
            lVar7 = (long)(int)uVar14;
            lVar10 = *(long *)(lVar9 + lVar7 * 8 + 0x20);
            if ((lVar10 == 0) || (*plVar12 == 0)) goto LAB_035f431c;
            uVar5 = FUN_02b6b4d8(*plVar12,*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)puVar3);
            if ((uVar5 & 1) == 0) {
              lVar10 = *(long *)(unaff_x19 + 0x60);
              if (lVar10 == 0) goto LAB_035f431c;
              if (*(uint *)(lVar10 + 0x18) <= uVar8) goto LAB_035f4320;
              lVar10 = *(long *)(lVar10 + lVar13 * 8 + 0x20);
              if ((lVar10 == 0) || (lVar9 = *(long *)(lVar10 + 0x18), lVar9 == 0))
              goto LAB_035f431c;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_035f4320;
              lVar9 = *(long *)(lVar9 + lVar7 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_035f431c;
              *(long *)(lVar9 + 0x78) = lVar10;
              thunk_FUN_01f51358();
              lVar10 = *(long *)(unaff_x19 + 0x60);
              if (lVar10 == 0) goto LAB_035f431c;
              if (*(uint *)(lVar10 + 0x18) <= uVar8) goto LAB_035f4320;
              lVar10 = *(long *)(lVar10 + lVar13 * 8 + 0x20);
              if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x18), lVar10 == 0))
              goto LAB_035f431c;
              if (*(uint *)(lVar10 + 0x18) <= uVar14) goto LAB_035f4320;
              lVar10 = *(long *)(lVar10 + lVar7 * 8 + 0x20);
              if ((lVar10 == 0) || (*(long *)(unaff_x19 + 0x68) == 0)) goto LAB_035f431c;
              FUN_02b6b2e4(*(long *)(unaff_x19 + 0x68),*(undefined8 *)(lVar10 + 0x10),lVar10,
                           *(undefined8 *)
                            Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_77__);
            }
            else {
              lVar10 = FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                    ,5);
              if (lVar10 == 0) goto LAB_035f431c;
              if (*(int *)(lVar10 + 0x18) == 0) goto LAB_035f4320;
              *(undefined8 *)(lVar10 + 0x20) =
                   *(undefined8 *)Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_81__;
              thunk_FUN_01f51358();
              lVar9 = *(long *)(unaff_x19 + 0x60);
              if (lVar9 == 0) goto LAB_035f431c;
              if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_035f4320;
              lVar9 = *(long *)(lVar9 + lVar13 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_035f431c;
              if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_035f4320;
              *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(lVar9 + 0x10);
              thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x28));
              if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_035f4320;
              *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)puVar4;
              thunk_FUN_01f51358();
              lVar9 = *(long *)(unaff_x19 + 0x60);
              if (lVar9 == 0) goto LAB_035f431c;
              if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_035f4320;
              lVar9 = *(long *)(lVar9 + lVar13 * 8 + 0x20);
              if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x18), lVar9 == 0)) goto LAB_035f431c;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_035f4320;
              lVar7 = *(long *)(lVar9 + lVar7 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_035f431c;
              if (*(uint *)(lVar10 + 0x18) < 4) goto LAB_035f4320;
              *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)(lVar7 + 0x10);
              thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x38));
              if (*(uint *)(lVar10 + 0x18) < 5) goto LAB_035f4320;
              *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)puVar2;
              thunk_FUN_01f51358();
              uVar6 = FUN_0340efe8(lVar10,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(*(long *)puVar1);
              }
              FUN_0403ed64(uVar6,0);
            }
            lVar10 = *(long *)(unaff_x19 + 0x60);
            if (lVar10 == 0) goto LAB_035f431c;
            uVar14 = uVar14 + 1;
            if (*(uint *)(lVar10 + 0x18) <= uVar8) goto LAB_035f4320;
          }
          *(undefined4 *)(lVar7 + 0x34) = 0;
          uVar6 = *(undefined8 *)(lVar10 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar6);
      }
      return;
    }
  }
LAB_035f431c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


