/*
FUNCTION_NAME: Unity.Mathematics.uint3x4$$Equals
ENTRY_POINT: 03b4c134
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1
*/


byte Unity_Mathematics_uint3x4__Equals(long param_1)

{
  int iVar1;
  undefined *puVar2;
  bool in_ZR;
  byte bVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
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
  
  if (in_ZR) {
    piVar5 = (int *)thunk_FUN_01f11920();
    iVar1 = *piVar5;
    if (*unaff_x19 == 3) {
      bVar3 = *(long *)(unaff_x19 + 4) == (long)iVar1;
      goto LAB_03b4c65c;
    }
    if (*unaff_x19 != 4) {
      param_1 = *unaff_x20;
      goto LAB_03b4c138;
    }
    uVar10 = FUN_03b4b678();
    uVar8 = FUN_03568ae4(uVar10,&stack0x0000026c,0);
    if ((uVar8 & 1) != 0) {
      bVar3 = iVar1 == in_stack_0000026c;
      goto LAB_03b4c65c;
    }
  }
  else {
LAB_03b4c138:
    if (param_1 == *(long *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__) {
      plVar6 = (long *)thunk_FUN_01f11920();
      lVar4 = *plVar6;
      if (*unaff_x19 == 3) {
        in_stack_00000260 = *(long *)(unaff_x19 + 4);
      }
      else {
        if (*unaff_x19 != 4) {
          param_1 = *unaff_x20;
          goto LAB_03b4c14c;
        }
        uVar10 = FUN_03b4b678();
        uVar8 = FUN_0356a410(uVar10,&stack0x00000260,0);
        if ((uVar8 & 1) == 0) goto LAB_03b4c658;
      }
      bVar3 = lVar4 == in_stack_00000260;
      goto LAB_03b4c65c;
    }
LAB_03b4c14c:
    if (param_1 ==
        *(long *)Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
       ) {
      pbVar7 = (byte *)thunk_FUN_01f11920();
      if (*unaff_x19 == 1) {
        bVar3 = *pbVar7 == (*(byte *)(unaff_x19 + 1) & 1);
        goto LAB_03b4c65c;
      }
      if (*unaff_x19 != 4) {
        param_1 = *unaff_x20;
        goto LAB_03b4c160;
      }
      if (*pbVar7 == 0) {
        memcpy(&stack0x00000218,unaff_x19,0x48);
        auVar11 = FUN_03b534d0(*(undefined8 *)
                                Method_UnityEngine_InputSystem_InputManager_OnFocusChanged__,0);
        thunk_FUN_01f51358(&stack0x00000290,0);
        in_stack_00000108 = *(undefined8 *)(unaff_x21 + 0x20);
        in_stack_00000100 = *(undefined8 *)(unaff_x21 + 0x18);
        in_stack_000000f0 = 0;
        in_stack_00000110 = in_stack_00000240;
        _in_stack_000000e0 = auVar11;
        uVar8 = FUN_03b4b1dc(&stack0x00000100,&stack0x00000290);
        if ((uVar8 & 1) == 0) {
          memcpy(&stack0x00000218,unaff_x19,0x48);
          auVar11 = FUN_03b534d0(*(undefined8 *)
                                  Method_Unity_VisualScripting_XHashSetPool_ToHashSetPooled<GraphReference>__
                                 ,0);
          thunk_FUN_01f51358(&stack0x00000290,0);
          in_stack_000000c8 = *(undefined8 *)(unaff_x21 + 0x20);
          in_stack_000000c0 = *(undefined8 *)(unaff_x21 + 0x18);
          in_stack_000000b0 = 0;
          in_stack_000000d0 = in_stack_00000240;
          _in_stack_000000a0 = auVar11;
          uVar8 = FUN_03b4b1dc(&stack0x000000c0,&stack0x00000290);
          if ((uVar8 & 1) == 0) {
            memcpy(&stack0x00000218,unaff_x19,0x48);
            auVar12 = FUN_03b534d0(*(undefined8 *)
                                    Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_set_text__
                                   ,0);
            thunk_FUN_01f51358(&stack0x00000290,0);
            auVar11._8_8_ = in_stack_00000128;
            auVar11._0_8_ = in_stack_00000120;
            in_stack_00000070 = 0;
            in_stack_00000088 = *(undefined8 *)(unaff_x21 + 0x20);
            in_stack_00000080 = *(undefined8 *)(unaff_x21 + 0x18);
            puVar9 = &stack0x00000080;
            in_stack_00000090 = in_stack_00000240;
            goto LAB_03b4c6dc;
          }
        }
      }
      else {
        memcpy(&stack0x00000218,unaff_x19,0x48);
        auVar11 = FUN_03b534d0(*(undefined8 *)
                                Method_UnityEngine_InputSystem_InputManager_OnNativeDeviceDiscovered__
                               ,0);
        thunk_FUN_01f51358(&stack0x00000290,0);
        in_stack_000001c8 = *(undefined8 *)(unaff_x21 + 0x20);
        in_stack_000001c0 = *(undefined8 *)(unaff_x21 + 0x18);
        in_stack_000001b0 = 0;
        in_stack_000001d0 = in_stack_00000240;
        _in_stack_000001a0 = auVar11;
        uVar8 = FUN_03b4b1dc(&stack0x000001c0,&stack0x00000290);
        if ((uVar8 & 1) == 0) {
          memcpy(&stack0x00000218,unaff_x19,0x48);
          auVar11 = FUN_03b534d0(*(undefined8 *)
                                  Method_Unity_VisualScripting_XListPool_Free<GraphReference>__,0);
          thunk_FUN_01f51358(&stack0x00000290,0);
          in_stack_00000188 = *(undefined8 *)(unaff_x21 + 0x20);
          in_stack_00000180 = *(undefined8 *)(unaff_x21 + 0x18);
          in_stack_00000170 = 0;
          in_stack_00000190 = in_stack_00000240;
          _in_stack_00000160 = auVar11;
          uVar8 = FUN_03b4b1dc(&stack0x00000180,&stack0x00000290);
          if ((uVar8 & 1) == 0) {
            memcpy(&stack0x00000218,unaff_x19,0x48);
            auVar11 = FUN_03b534d0(*(undefined8 *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Plane>__
                                   ,0);
            thunk_FUN_01f51358(&stack0x00000290,0);
            auVar12._8_8_ = in_stack_00000068;
            auVar12._0_8_ = in_stack_00000060;
            in_stack_00000148 = *(undefined8 *)(unaff_x21 + 0x20);
            in_stack_00000140 = *(undefined8 *)(unaff_x21 + 0x18);
            in_stack_00000130 = 0;
            puVar9 = &stack0x00000140;
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
    if ((bVar3 <= *(byte *)(param_1 + 0x130)) &&
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar3 * 8 + -8) ==
        *(long *)Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__))
    {
      if (*unaff_x19 == 4) {
        memcpy(&stack0x00000218,unaff_x19,0x48);
        in_stack_00000048 = *(undefined8 *)(unaff_x21 + 0x20);
        in_stack_00000040 = *(undefined8 *)(unaff_x21 + 0x18);
        in_stack_00000050 = in_stack_00000240;
        uVar10 = thunk_FUN_01ecaf38();
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar10 = FUN_0359d008(uVar10);
        FUN_03b534d0(uVar10,0);
        thunk_FUN_01f51358(&stack0x00000290,0);
        auVar12._8_8_ = in_stack_00000068;
        auVar12._0_8_ = in_stack_00000060;
        auVar11._8_8_ = in_stack_00000128;
        auVar11._0_8_ = in_stack_00000120;
        in_stack_00000028 = in_stack_00000048;
        in_stack_00000020 = in_stack_00000040;
        in_stack_00000030 = in_stack_00000050;
        puVar9 = &stack0x00000020;
LAB_03b4c6dc:
        _in_stack_00000120 = auVar11;
        _in_stack_00000060 = auVar12;
        bVar3 = FUN_03b4b1dc(puVar9,&stack0x00000290);
        goto LAB_03b4c65c;
      }
      if (*unaff_x19 == 3) {
        if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar4 = FUN_035028b4();
        bVar3 = lVar4 == *(long *)(unaff_x19 + 4);
        goto LAB_03b4c65c;
      }
    }
  }
LAB_03b4c658:
  bVar3 = 0;
LAB_03b4c65c:
  return bVar3 & 1;
}


