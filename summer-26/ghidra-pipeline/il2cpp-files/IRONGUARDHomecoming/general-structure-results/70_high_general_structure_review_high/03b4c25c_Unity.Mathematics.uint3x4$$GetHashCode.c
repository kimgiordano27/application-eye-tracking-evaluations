/*
FUNCTION_NAME: Unity.Mathematics.uint3x4$$GetHashCode
ENTRY_POINT: 03b4c25c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


byte Unity_Mathematics_uint3x4__GetHashCode(void)

{
  int iVar1;
  undefined *puVar2;
  bool in_ZR;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  double *pdVar6;
  int *piVar7;
  long *plVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  int in_w8;
  long lVar11;
  int *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float unaff_s8;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_00000240;
  long in_stack_00000260;
  int in_stack_0000026c;
  double in_stack_00000270;
  float in_stack_0000027c;
  
  if (in_ZR) {
    in_stack_00000270 = *(double *)(unaff_x19 + 2);
    if (DAT_048394fa == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_048394fa = '\x01';
    }
    dVar16 = (double)unaff_s8;
    goto LAB_03b4c5e8;
  }
  if (in_w8 == 4) {
    uVar4 = FUN_03b4b678();
    uVar5 = FUN_0357d664(uVar4,&stack0x0000027c,0);
    if ((uVar5 & 1) != 0) {
      if (DAT_0482ef73 == '\0') {
        thunk_FUN_01efb3a4(
                          Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                          );
        DAT_0482ef73 = '\x01';
      }
      fVar14 = ABS(unaff_s8);
      if (ABS(unaff_s8) <= ABS(in_stack_0000027c)) {
        fVar14 = ABS(in_stack_0000027c);
      }
      fVar15 = **(float **)
                 (*(long *)
                   Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                 + 0xb8) * 8.0;
      fVar12 = fVar14 * DAT_00c927dc;
      if (fVar14 * DAT_00c927dc <= fVar15) {
        fVar12 = fVar15;
      }
      bVar3 = ABS(in_stack_0000027c - unaff_s8) < fVar12;
      goto LAB_03b4c65c;
    }
  }
  else {
    lVar11 = *unaff_x20;
    if (lVar11 == *(long *)Method_System_Globalization_Calendar_TimeToTicks__) {
      pdVar6 = (double *)thunk_FUN_01f11920();
      dVar16 = *pdVar6;
      if (*unaff_x19 == 2) {
        in_stack_00000270 = *(double *)(unaff_x19 + 2);
        if (DAT_048394fa == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
          DAT_048394fa = '\x01';
        }
      }
      else {
        if (*unaff_x19 != 4) {
          lVar11 = *unaff_x20;
          goto LAB_03b4c124;
        }
        uVar4 = FUN_03b4b678();
        uVar5 = FUN_03553254(uVar4,&stack0x00000270,0);
        if ((uVar5 & 1) == 0) goto LAB_03b4c658;
        if (DAT_048394fa == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
          DAT_048394fa = '\x01';
        }
      }
LAB_03b4c5e8:
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      dVar13 = (double)FUN_0356bc5c(ABS(dVar16),ABS(in_stack_00000270),0);
      dVar13 = (double)FUN_0356bc5c(dVar13 * DAT_00c8e110,8,0);
      bVar3 = 0;
      if (!NAN(ABS(in_stack_00000270 - dVar16)) && !NAN(dVar13)) {
        bVar3 = ABS(in_stack_00000270 - dVar16) < dVar13;
      }
      goto LAB_03b4c65c;
    }
LAB_03b4c124:
    if (lVar11 == *(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__) {
      piVar7 = (int *)thunk_FUN_01f11920();
      iVar1 = *piVar7;
      if (*unaff_x19 == 3) {
        bVar3 = *(long *)(unaff_x19 + 4) == (long)iVar1;
        goto LAB_03b4c65c;
      }
      if (*unaff_x19 == 4) {
        uVar4 = FUN_03b4b678();
        uVar5 = FUN_03568ae4(uVar4,&stack0x0000026c,0);
        if ((uVar5 & 1) != 0) {
          bVar3 = iVar1 == in_stack_0000026c;
          goto LAB_03b4c65c;
        }
        goto LAB_03b4c658;
      }
      lVar11 = *unaff_x20;
    }
    if (lVar11 == *(long *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__) {
      plVar8 = (long *)thunk_FUN_01f11920();
      lVar11 = *plVar8;
      if (*unaff_x19 == 3) {
        in_stack_00000260 = *(long *)(unaff_x19 + 4);
      }
      else {
        if (*unaff_x19 != 4) {
          lVar11 = *unaff_x20;
          goto LAB_03b4c14c;
        }
        uVar4 = FUN_03b4b678();
        uVar5 = FUN_0356a410(uVar4,&stack0x00000260,0);
        if ((uVar5 & 1) == 0) goto LAB_03b4c658;
      }
      bVar3 = lVar11 == in_stack_00000260;
      goto LAB_03b4c65c;
    }
LAB_03b4c14c:
    if (lVar11 == *(long *)
                   Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
       ) {
      pbVar9 = (byte *)thunk_FUN_01f11920();
      if (*unaff_x19 == 1) {
        bVar3 = *pbVar9 == (*(byte *)(unaff_x19 + 1) & 1);
        goto LAB_03b4c65c;
      }
      if (*unaff_x19 != 4) {
        lVar11 = *unaff_x20;
        goto LAB_03b4c160;
      }
      if (*pbVar9 == 0) {
        memcpy(&stack0x00000218,unaff_x19,0x48);
        auVar17 = FUN_03b534d0(*(undefined8 *)
                                Method_UnityEngine_InputSystem_InputManager_OnFocusChanged__,0);
        thunk_FUN_01f51358(&stack0x00000290,0);
        in_stack_00000108 = *(undefined8 *)(unaff_x21 + 0x20);
        in_stack_00000100 = *(undefined8 *)(unaff_x21 + 0x18);
        in_stack_000000f0 = 0;
        in_stack_00000110 = in_stack_00000240;
        _in_stack_000000e0 = auVar17;
        uVar5 = FUN_03b4b1dc(&stack0x00000100,&stack0x00000290);
        if ((uVar5 & 1) == 0) {
          memcpy(&stack0x00000218,unaff_x19,0x48);
          auVar17 = FUN_03b534d0(*(undefined8 *)
                                  Method_Unity_VisualScripting_XHashSetPool_ToHashSetPooled<GraphReference>__
                                 ,0);
          thunk_FUN_01f51358(&stack0x00000290,0);
          in_stack_000000c8 = *(undefined8 *)(unaff_x21 + 0x20);
          in_stack_000000c0 = *(undefined8 *)(unaff_x21 + 0x18);
          in_stack_000000b0 = 0;
          in_stack_000000d0 = in_stack_00000240;
          _in_stack_000000a0 = auVar17;
          uVar5 = FUN_03b4b1dc(&stack0x000000c0,&stack0x00000290);
          if ((uVar5 & 1) == 0) {
            memcpy(&stack0x00000218,unaff_x19,0x48);
            auVar18 = FUN_03b534d0(*(undefined8 *)
                                    Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_set_text__
                                   ,0);
            thunk_FUN_01f51358(&stack0x00000290,0);
            auVar17._8_8_ = in_stack_00000128;
            auVar17._0_8_ = in_stack_00000120;
            in_stack_00000070 = 0;
            in_stack_00000088 = *(undefined8 *)(unaff_x21 + 0x20);
            in_stack_00000080 = *(undefined8 *)(unaff_x21 + 0x18);
            puVar10 = &stack0x00000080;
            in_stack_00000090 = in_stack_00000240;
            goto LAB_03b4c6dc;
          }
        }
      }
      else {
        memcpy(&stack0x00000218,unaff_x19,0x48);
        auVar17 = FUN_03b534d0(*(undefined8 *)
                                Method_UnityEngine_InputSystem_InputManager_OnNativeDeviceDiscovered__
                               ,0);
        thunk_FUN_01f51358(&stack0x00000290,0);
        in_stack_000001c8 = *(undefined8 *)(unaff_x21 + 0x20);
        in_stack_000001c0 = *(undefined8 *)(unaff_x21 + 0x18);
        in_stack_000001b0 = 0;
        in_stack_000001d0 = in_stack_00000240;
        _in_stack_000001a0 = auVar17;
        uVar5 = FUN_03b4b1dc(&stack0x000001c0,&stack0x00000290);
        if ((uVar5 & 1) == 0) {
          memcpy(&stack0x00000218,unaff_x19,0x48);
          auVar17 = FUN_03b534d0(*(undefined8 *)
                                  Method_Unity_VisualScripting_XListPool_Free<GraphReference>__,0);
          thunk_FUN_01f51358(&stack0x00000290,0);
          in_stack_00000188 = *(undefined8 *)(unaff_x21 + 0x20);
          in_stack_00000180 = *(undefined8 *)(unaff_x21 + 0x18);
          in_stack_00000170 = 0;
          in_stack_00000190 = in_stack_00000240;
          _in_stack_00000160 = auVar17;
          uVar5 = FUN_03b4b1dc(&stack0x00000180,&stack0x00000290);
          if ((uVar5 & 1) == 0) {
            memcpy(&stack0x00000218,unaff_x19,0x48);
            auVar17 = FUN_03b534d0(*(undefined8 *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Plane>__
                                   ,0);
            thunk_FUN_01f51358(&stack0x00000290,0);
            auVar18._8_8_ = in_stack_00000068;
            auVar18._0_8_ = in_stack_00000060;
            in_stack_00000148 = *(undefined8 *)(unaff_x21 + 0x20);
            in_stack_00000140 = *(undefined8 *)(unaff_x21 + 0x18);
            in_stack_00000130 = 0;
            puVar10 = &stack0x00000140;
            in_stack_00000150 = in_stack_00000240;
            goto LAB_03b4c6dc;
          }
        }
      }
      bVar3 = 1;
      goto LAB_03b4c65c;
    }
LAB_03b4c160:
    puVar2 = Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__;
    bVar3 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                     + 0x130);
    if ((bVar3 <= *(byte *)(lVar11 + 0x130)) &&
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar3 * 8 + -8) ==
        *(long *)Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__))
    {
      if (*unaff_x19 == 4) {
        memcpy(&stack0x00000218,unaff_x19,0x48);
        in_stack_00000048 = *(undefined8 *)(unaff_x21 + 0x20);
        in_stack_00000040 = *(undefined8 *)(unaff_x21 + 0x18);
        in_stack_00000050 = in_stack_00000240;
        uVar4 = thunk_FUN_01ecaf38();
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar4 = FUN_0359d008(uVar4);
        FUN_03b534d0(uVar4,0);
        thunk_FUN_01f51358(&stack0x00000290,0);
        auVar18._8_8_ = in_stack_00000068;
        auVar18._0_8_ = in_stack_00000060;
        auVar17._8_8_ = in_stack_00000128;
        auVar17._0_8_ = in_stack_00000120;
        in_stack_00000028 = in_stack_00000048;
        in_stack_00000020 = in_stack_00000040;
        in_stack_00000030 = in_stack_00000050;
        puVar10 = &stack0x00000020;
LAB_03b4c6dc:
        _in_stack_00000120 = auVar17;
        _in_stack_00000060 = auVar18;
        bVar3 = FUN_03b4b1dc(puVar10,&stack0x00000290);
        goto LAB_03b4c65c;
      }
      if (*unaff_x19 == 3) {
        if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar11 = FUN_035028b4();
        bVar3 = lVar11 == *(long *)(unaff_x19 + 4);
        goto LAB_03b4c65c;
      }
    }
  }
LAB_03b4c658:
  bVar3 = 0;
LAB_03b4c65c:
  return bVar3 & 1;
}


