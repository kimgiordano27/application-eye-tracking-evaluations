/*
FUNCTION_NAME: FUN_03296144
ENTRY_POINT: 03296144
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x032964ac) */
/* WARNING: Removing unreachable block (ram,0x03296518) */
/* WARNING: Removing unreachable block (ram,0x032964e8) */
/* WARNING: Removing unreachable block (ram,0x032967ec) */

void FUN_03296144(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  void *__ptr;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 local_90;
  int local_88;
  int local_84;
  void *local_80;
  long local_78;
  long local_70;
  long local_68;
  
  if ((DAT_03ff5774 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d86030);
    thunk_FUN_01ad9084(PTR_DAT_03d86038);
    thunk_FUN_01ad9084(PTR_DAT_03d86040);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_VisualElement_Hierarchy_MoveChildElement__);
    thunk_FUN_01ad9084(PTR_DAT_03d86048);
    thunk_FUN_01ad9084(PTR_DAT_03d86050);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_VisualElement_Hierarchy_Remove__);
    thunk_FUN_01ad9084(PTR_DAT_03d86058);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_VisualElement_Hierarchy_RemoveAt__);
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d86060);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_VisualElementFocusChangeTarget_<>c_<_cctor>b__9_0__
                      );
    thunk_FUN_01ad9084(StringLiteral_2598);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d86068);
    thunk_FUN_01ad9084(StringLiteral_2992);
    thunk_FUN_01ad9084(PTR_DAT_03d86070);
    DAT_03ff5774 = 1;
  }
  puVar2 = 
  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__;
  local_70 = 0;
  local_68 = 0;
  local_80 = (void *)0x0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_84 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  if (*(char *)(param_1 + 0x109) == '\0') {
    return;
  }
  if (*(int *)(*(long *)
                Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_0325dffc(&local_68,0);
  lVar10 = local_68;
  puVar4 = PTR_DAT_03d86038;
  puVar3 = Method_UnityEngine_UIElements_VisualElement_Hierarchy_Remove__;
  if (local_68 != 0) {
    if (0 < (int)*(ulong *)(local_68 + 0x18)) {
      uVar15 = 0;
      uVar11 = *(ulong *)(local_68 + 0x18) & 0xffffffff;
      plVar13 = (long *)StringLiteral_2598;
      do {
        if (uVar11 <= uVar15) goto LAB_032967e4;
        if (*(long *)(param_1 + 0xd0) == 0) goto LAB_03296760;
        uVar12 = *(undefined8 *)(lVar10 + uVar15 * 8 + 0x20);
        uVar11 = FUN_0263c308(*(long *)(param_1 + 0xd0),uVar12,&local_78,*(undefined8 *)puVar4);
        if ((uVar11 & 1) != 0) {
          local_90 = 0;
          local_88 = 0;
          local_84 = 0;
          local_80 = (void *)0x0;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_0325e2f0(uVar12,&local_90,0);
          iVar8 = local_84;
          if (local_84 != 0) {
            if (*(int *)(*plVar13 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            local_80 = (void *)FUN_02f7c424(iVar8,0);
            local_88 = local_84;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)puVar2);
            }
            FUN_0325e2f0(uVar12,&local_90,0);
            uVar12 = FUN_01b47fd0(*(undefined8 *)
                                   Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                                  ,local_84);
            FUN_02f7c724(local_80,uVar12,0,local_84,0);
            uVar11 = local_90;
            uVar7 = local_90._4_4_;
            lVar9 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_2992);
            FUN_03907774(lVar9,uVar11 & 0xffffffff,uVar7,4,0,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_03905eb0(lVar9,2,0);
            FUN_01f55f88(lVar9,uVar12,0,0,*(undefined8 *)PTR_DAT_03d86068);
            FUN_03907d34(lVar9,1,1,0);
            if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_02b5a400(&local_e0,local_78,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_VisualElementFocusChangeTarget_<>c_<_cctor>b__9_0__
                        );
            local_b0 = CONCAT44(uStack_dc,local_e0);
            uStack_a8 = uStack_d8;
            local_a0 = local_d0;
            while (uVar11 = FUN_02739b98(&local_b0,*(undefined8 *)puVar3), (uVar11 & 1) != 0) {
              if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              FUN_038ff638(local_a0,lVar9,0);
            }
            FUN_02739b94(&local_b0,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_VisualElement_Hierarchy_MoveChildElement__);
            __ptr = local_80;
            plVar13 = (long *)StringLiteral_2598;
            if (*(int *)(*(long *)StringLiteral_2598 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            free(__ptr);
          }
        }
        uVar1 = *(uint *)(lVar10 + 0x18);
        uVar11 = (ulong)uVar1;
        uVar15 = uVar15 + 1;
      } while ((long)uVar15 < (long)(int)uVar1);
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    iVar8 = FUN_0325db64(&local_70,0);
    puVar6 = PTR_DAT_03d86070;
    puVar5 = PTR_DAT_03d86040;
    puVar4 = PTR_DAT_03d86030;
    puVar3 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
    puVar2 = 
    Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
    ;
    if (iVar8 != 0) {
      return;
    }
    if (local_70 != 0) {
      uVar15 = 0;
      do {
        uVar11 = *(ulong *)(local_70 + 0x18);
        if ((long)(int)uVar11 <= (long)uVar15) {
          if (uVar11 == 0) {
            return;
          }
          if (*(long *)(param_1 + 0xf8) != 0) {
            FUN_02b5a400(&local_c8,*(long *)(param_1 + 0xf8),*(undefined8 *)PTR_DAT_03d86060);
            puVar2 = PTR_DAT_03d86050;
            while( true ) {
              uVar15 = FUN_02739b98(&local_c8,*(undefined8 *)puVar2);
              if ((uVar15 & 1) == 0) {
                FUN_02739b94(&local_c8,*(undefined8 *)PTR_DAT_03d86048);
                return;
              }
              if (local_b8 == 0) break;
              FUN_0321d2f8(local_b8,0);
            }
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          break;
        }
        if ((uVar11 & 0xffffffff) <= uVar15) {
LAB_032967e4:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        if (*(long *)(param_1 + 0xf0) == 0) break;
        uVar11 = FUN_0255af34(*(long *)(param_1 + 0xf0),
                              *(undefined4 *)(local_70 + uVar15 * 8 + 0x20),*(undefined8 *)puVar4);
        if ((uVar11 & 1) == 0) {
          if (local_70 == 0) break;
          if (*(uint *)(local_70 + 0x18) <= uVar15) goto LAB_032967e4;
          local_e0 = *(undefined4 *)(local_70 + uVar15 * 8 + 0x20);
          uVar12 = thunk_FUN_01afa70c(*(undefined8 *)puVar2,&local_e0);
          uVar12 = FUN_02ede300(*(undefined8 *)puVar6,uVar12,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar3);
          }
          FUN_038f336c(uVar12,0);
        }
        else {
          if (local_70 == 0) break;
          if (*(uint *)(local_70 + 0x18) <= uVar15) goto LAB_032967e4;
          if ((*(long *)(param_1 + 0xf0) == 0) ||
             (lVar10 = FUN_0255aca0(*(long *)(param_1 + 0xf0),
                                    *(undefined4 *)(local_70 + uVar15 * 8 + 0x20),
                                    *(undefined8 *)puVar5), lVar10 == 0)) break;
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (0 < (int)uVar1) {
            uVar14 = 0;
            do {
              if (uVar1 <= uVar14) goto LAB_032967e4;
              if (local_70 == 0) goto LAB_03296760;
              if (*(uint *)(local_70 + 0x18) <= uVar15) goto LAB_032967e4;
              lVar9 = *(long *)(lVar10 + (long)(int)uVar14 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_03296760;
              FUN_0321c100(*(undefined4 *)(local_70 + uVar15 * 8 + 0x24),lVar9,0,0);
              uVar1 = *(uint *)(lVar10 + 0x18);
              uVar14 = uVar14 + 1;
            } while ((int)uVar14 < (int)uVar1);
          }
        }
        uVar15 = uVar15 + 1;
      } while (local_70 != 0);
    }
  }
LAB_03296760:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


