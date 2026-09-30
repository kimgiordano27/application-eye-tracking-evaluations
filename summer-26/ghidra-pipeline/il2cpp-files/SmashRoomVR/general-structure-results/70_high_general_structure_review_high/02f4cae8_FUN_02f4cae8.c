/*
FUNCTION_NAME: FUN_02f4cae8
ENTRY_POINT: 02f4cae8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_02f4cae8(undefined8 param_1,long *param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  undefined2 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  puVar18 = &local_60;
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((DAT_03ff0bf7 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Oculus_Interaction_PointableElement_<>c_<_ctor>b__43_0__);
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<ReceiveAsyncApm>b__15_0__);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_System_Threading_Tasks_TaskSchedulerAwaitTaskContinuation_<>c_<Run>b__2_0__
                      );
    thunk_FUN_01ad9084(StringLiteral_8376);
    thunk_FUN_01ad9084(StringLiteral_8377);
    thunk_FUN_01ad9084(
                      Method_OVRSceneLoader_<onCheckSceneCoroutine>d__25_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_5__);
    thunk_FUN_01ad9084(StringLiteral_8378);
    thunk_FUN_01ad9084(StringLiteral_2269);
    thunk_FUN_01ad9084(StringLiteral_4247);
    thunk_FUN_01ad9084(StringLiteral_725);
    thunk_FUN_01ad9084(StringLiteral_7614);
    thunk_FUN_01ad9084(StringLiteral_2250);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesBackgroundSize_IsSame__
                      );
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_8379);
    thunk_FUN_01ad9084(StringLiteral_2241);
    thunk_FUN_01ad9084(StringLiteral_2912);
    thunk_FUN_01ad9084(StringLiteral_8059);
    thunk_FUN_01ad9084(StringLiteral_2311);
    thunk_FUN_01ad9084(StringLiteral_7422);
    thunk_FUN_01ad9084(StringLiteral_2255);
    thunk_FUN_01ad9084(Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__);
    thunk_FUN_01ad9084(
                      Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__);
    thunk_FUN_01ad9084(StringLiteral_675);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    thunk_FUN_01ad9084(StringLiteral_7988);
    thunk_FUN_01ad9084(StringLiteral_2831);
    thunk_FUN_01ad9084(StringLiteral_6856);
    thunk_FUN_01ad9084(StringLiteral_2494);
    thunk_FUN_01ad9084(StringLiteral_7733);
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Value__);
    DAT_03ff0bf7 = 1;
  }
  local_58 = 0;
  if (param_2 == (long *)0x0) {
    uVar11 = 0;
    goto LAB_02f4d1cc;
  }
  lVar19 = *param_2;
  bVar1 = *(byte *)(lVar19 + 0x130);
  bVar2 = *(byte *)(*(long *)StringLiteral_8376 + 0x130);
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)StringLiteral_8376)) {
    if (param_3 == (long *)0x0) {
LAB_02f4d250:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar11 = (**(code **)(*param_3 + 0x2e8))
                       (param_3,(int)param_2[2],*(undefined8 *)(*param_3 + 0x2f0));
    goto LAB_02f4d1cc;
  }
  bVar2 = *(byte *)(*(long *)StringLiteral_8377 + 0x130);
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)StringLiteral_8377)) {
    if (param_2[2] == 0) goto LAB_02f4d250;
    uVar11 = FUN_02f2ad30(param_2[2],(int)param_2[3],param_2[4],0);
    if (*(int *)(*(long *)StringLiteral_8059 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)StringLiteral_8059);
    }
    uVar11 = FUN_02f34b78(uVar11);
    goto LAB_02f4d1cc;
  }
  bVar2 = *(byte *)(*(long *)StringLiteral_2311 + 0x130);
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)StringLiteral_2311)) {
    plVar14 = (long *)thunk_FUN_01acfdbc(param_2,0);
    if (plVar14 == (long *)0x0) goto LAB_02f4d250;
    uVar11 = (**(code **)(*plVar14 + 0x438))(plVar14,*(undefined8 *)(*plVar14 + 0x440));
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                        );
    }
    iVar10 = FUN_0305a62c(uVar11,0);
    if (0xc < iVar10 - 3U) {
      thunk_FUN_01ad9084(Method_Internal_Cryptography_OidLookup_<>c_<_cctor>b__10_0__);
      uVar11 = thunk_FUN_01afaadc();
      FUN_03042944(uVar11,0);
      uVar20 = thunk_FUN_01ad9084(StringLiteral_8382);
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar11,uVar20);
    }
    puVar18 = (undefined8 *)(&PTR_DAT_03b89b08)[(int)(iVar10 - 3U)];
    uVar9 = FUN_030584a8(param_2,0);
    uVar11 = FUN_01b47fd0(*puVar18,uVar9);
    FUN_03062688(param_2,uVar11,0,0);
    goto LAB_02f4d1cc;
  }
  uVar11 = thunk_FUN_01acfdbc(param_2,0);
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
  }
  uVar9 = FUN_0305a62c(uVar11,0);
  puVar8 = StringLiteral_2269;
  puVar7 = StringLiteral_725;
  puVar6 = StringLiteral_675;
  puVar5 = 
  Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__;
  puVar4 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_5__;
  switch(uVar9) {
  case 3:
    plVar14 = (long *)Method_System_Net_Sockets_Socket_<>c_<ReceiveAsyncApm>b__15_0__;
    goto LAB_02f4d118;
  case 4:
    plVar14 = (long *)
              Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
    ;
    goto LAB_02f4d150;
  case 5:
    plVar14 = (long *)StringLiteral_2255;
    goto LAB_02f4d118;
  case 6:
    plVar14 = (long *)
              Method_System_Threading_Tasks_TaskSchedulerAwaitTaskContinuation_<>c_<Run>b__2_0__;
LAB_02f4d118:
    if (*(long *)(*param_2 + 0x40) != *(long *)(*plVar14 + 0x40)) {
LAB_02f4d248:
                    /* WARNING: Subroutine does not return */
      FUN_01b4841c(param_2);
    }
    puVar16 = (undefined1 *)thunk_FUN_01afac30(param_2);
    lVar19 = *plVar14;
    local_50 = CONCAT71(local_50._1_7_,*puVar16);
    break;
  case 7:
    plVar14 = (long *)StringLiteral_2250;
    goto LAB_02f4d150;
  case 8:
    plVar14 = (long *)StringLiteral_2831;
LAB_02f4d150:
    if (*(long *)(*param_2 + 0x40) != *(long *)(*plVar14 + 0x40)) goto LAB_02f4d248;
    puVar17 = (undefined2 *)thunk_FUN_01afac30(param_2);
    lVar19 = *plVar14;
    local_50 = CONCAT62(local_50._2_6_,*puVar17);
    break;
  case 9:
    plVar14 = (long *)
              Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
    ;
    goto LAB_02f4cfac;
  case 10:
    plVar14 = (long *)StringLiteral_2494;
LAB_02f4cfac:
    if (*(long *)(*param_2 + 0x40) != *(long *)(*plVar14 + 0x40)) goto LAB_02f4d248;
    puVar12 = (undefined4 *)thunk_FUN_01afac30(param_2);
    lVar19 = *plVar14;
    local_50 = CONCAT44(local_50._4_4_,*puVar12);
    break;
  case 0xb:
    plVar14 = (long *)StringLiteral_2241;
    goto LAB_02f4d194;
  case 0xc:
    plVar14 = (long *)Method_System_Collections_SortedList_SortedListEnumerator_get_Value__;
LAB_02f4d194:
    if (*(long *)(*param_2 + 0x40) != *(long *)(*plVar14 + 0x40)) goto LAB_02f4d248;
LAB_02f4d1ac:
    puVar18 = (undefined8 *)thunk_FUN_01afac30(param_2);
    local_50 = *puVar18;
    lVar19 = *plVar14;
    break;
  case 0xd:
    if (*(long *)(*param_2 + 0x40) !=
        *(long *)(*(long *)
                   Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                 + 0x40)) goto LAB_02f4d248;
    puVar12 = (undefined4 *)thunk_FUN_01afac30(param_2);
    lVar19 = *(long *)puVar5;
    local_50 = CONCAT44(local_50._4_4_,*puVar12);
    break;
  case 0xe:
    if (*(long *)(*param_2 + 0x40) != *(long *)(*(long *)StringLiteral_725 + 0x40))
    goto LAB_02f4d248;
    puVar18 = (undefined8 *)thunk_FUN_01afac30(param_2);
    local_50 = *puVar18;
    lVar19 = *(long *)puVar7;
    break;
  case 0xf:
    if (*(long *)(*param_2 + 0x40) != *(long *)(*(long *)StringLiteral_2269 + 0x40))
    goto LAB_02f4d248;
    puVar18 = (undefined8 *)thunk_FUN_01afac30(param_2);
    uStack_48 = puVar18[1];
    local_50 = *puVar18;
    lVar19 = *(long *)puVar8;
    break;
  case 0x10:
    if (*(long *)(*param_2 + 0x40) !=
        *(long *)(*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_5__ + 0x40))
    goto LAB_02f4d248;
    puVar13 = (undefined8 *)thunk_FUN_01afac30(param_2);
    local_58 = *puVar13;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar11 = FUN_03024604(&local_58,0);
    local_50 = 0;
    FUN_03021f2c(&local_50,uVar11,0);
    lVar19 = *(long *)puVar4;
    local_60 = local_50;
    goto LAB_02f4d1c4;
  default:
    if (*param_2 == *(long *)StringLiteral_675) {
      puVar18 = (undefined8 *)thunk_FUN_01afac30(param_2);
      lVar19 = *(long *)puVar6;
      local_50 = *puVar18;
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar19 = *(long *)puVar6;
      }
      break;
    }
    plVar14 = (long *)StringLiteral_2912;
    if (*param_2 != *(long *)StringLiteral_2912) {
      plVar14 = (long *)thunk_FUN_01acfdbc(param_2,0);
      uVar11 = thunk_FUN_01ad9084(StringLiteral_8380);
      uVar20 = 0;
      if (plVar14 != (long *)0x0) {
        uVar20 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
      }
      uVar15 = thunk_FUN_01ad9084(StringLiteral_8381);
      uVar11 = FUN_02ee6c30(uVar11,uVar20,uVar15,0);
      thunk_FUN_01ad9084(Method_Internal_Cryptography_OidLookup_<>c_<_cctor>b__10_0__);
      uVar20 = thunk_FUN_01afaadc();
      FUN_0303c164(uVar20,uVar11,0);
      uVar11 = thunk_FUN_01ad9084(StringLiteral_8382);
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar20,uVar11);
    }
    goto LAB_02f4d1ac;
  case 0x12:
    if (*param_2 == *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__) {
      uVar11 = FUN_02eec704(param_2,0);
      goto LAB_02f4d1cc;
    }
    goto LAB_02f4d248;
  }
  puVar18 = &local_50;
LAB_02f4d1c4:
  uVar11 = thunk_FUN_01afa70c(lVar19,puVar18);
LAB_02f4d1cc:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


