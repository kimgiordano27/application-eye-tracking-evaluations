/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 020cef2c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 183
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_21
*/


void System_Array__InternalArray__Insert<OVRPlugin_VirtualKeyboardModelAnimationState>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 uVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  undefined4 *puVar17;
  long unaff_x19;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *unaff_x23;
  long lVar21;
  long *plVar22;
  uint uVar23;
  long *unaff_x29;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  uVar7 = FUN_022c60a8();
  *unaff_x23 = uVar7;
  thunk_FUN_01f51358();
  uVar7 = *unaff_x23;
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  bVar3 = FUN_04073094(uVar7,0,0);
  *(byte *)(unaff_x19 + 0x30c) = bVar3 & 1;
  if ((bVar3 & 1) != 0) {
    lVar21 = *(long *)(unaff_x19 + 400);
    if (*(int *)(*(long *)Method_System_Numerics_Vector<ulong>_get_Count__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if ((lVar21 == 0) ||
       (lVar21 = FUN_034111c4(lVar21,*(undefined8 *)
                                      (*(long *)(*(long *)
                                                  Method_System_Numerics_Vector<ulong>_get_Count__ +
                                                0xb8) + 0x20),1,0), lVar21 == 0)) goto LAB_020cfbb4;
    uVar23 = *(uint *)(lVar21 + 0x18);
    uVar7 = FUN_01f08890(*(undefined8 *)
                          Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnSuccess__
                         ,uVar23);
    plVar15 = (long *)(unaff_x19 + 0x310);
    *(undefined8 *)(unaff_x19 + 0x310) = uVar7;
    thunk_FUN_01f51358(plVar15,uVar7);
    if (0 < (int)uVar23) {
      uVar14 = 0;
      do {
        _uStack0000000000000028 = 0;
        if (*(uint *)(lVar21 + 0x18) <= uVar14) goto LAB_020cfe90;
        lVar19 = (long)(int)uVar14;
        lVar8 = *(long *)(lVar21 + lVar19 * 8 + 0x20);
        if ((lVar8 == 0) || (lVar8 = FUN_03412ab4(lVar8,0), lVar8 == 0)) goto LAB_020cfbb4;
        uVar4 = FUN_034134c8(lVar8,*(undefined8 *)
                                    Method_UnityEngine_Rendering_VolumeParameter<Color>__ctor__,0);
        iVar5 = FUN_034134c8(lVar8,*(undefined8 *)
                                    Method_UnityEngine_Rendering_VolumeParameter<Color>_op_Inequality__
                             ,0);
        if ((0 < (int)uVar4) && ((int)uVar4 < iVar5)) {
          lVar9 = FUN_03410500(lVar8,0,uVar4,0);
          if (lVar9 == 0) goto LAB_020cfbb4;
          lVar9 = FUN_03412ab4(lVar9,0);
          lVar8 = FUN_03410500(lVar8,uVar4 + 1,iVar5 + ~uVar4,0);
          if (*(int *)(*(long *)Method_System_Numerics_Vector<ulong>_get_Count__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)Method_System_Numerics_Vector<ulong>_get_Count__);
          }
          if ((lVar8 == 0) ||
             (lVar10 = FUN_034111c4(lVar8,*(undefined8 *)
                                           (*(long *)(*(long *)
                                                  Method_System_Numerics_Vector<ulong>_get_Count__ +
                                                  0xb8) + 0x28),1,0), lVar10 == 0))
          goto LAB_020cfbb4;
          lVar8 = lVar9;
          if (*(int *)(lVar10 + 0x18) == 2) {
            uVar7 = *(undefined8 *)(lVar10 + 0x20);
            if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar11 = FUN_03532f80(0);
            FUN_0357d99c(uVar7,0x1ff,uVar11,(long)&stack0x00000028 + 4,0);
            if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_020cfe90;
            uVar11 = *(undefined8 *)(lVar10 + 0x28);
            uVar7 = FUN_03532f80(0);
            FUN_0357d99c(uVar11,0x1ff,uVar7,&stack0x00000028,0);
          }
        }
        lVar9 = *plVar15;
        if (lVar9 == 0) goto LAB_020cfbb4;
        uVar6 = FUN_04030fb8(lVar8,0);
        if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_020cfe90;
        *(undefined4 *)(lVar9 + lVar19 * 0xc + 0x20) = uVar6;
        lVar8 = *plVar15;
        if (lVar8 == 0) goto LAB_020cfbb4;
        if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_020cfe90;
        lVar8 = lVar8 + lVar19 * 0xc;
        uVar14 = uVar14 + 1;
        *(undefined4 *)(lVar8 + 0x24) = uStack000000000000002c;
        *(undefined4 *)(lVar8 + 0x28) = uStack0000000000000028;
      } while (uVar23 != uVar14);
    }
  }
  puVar1 = 
  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_set_Results__
  ;
  plVar15 = (long *)*in_stack_00000018;
  if (plVar15 == (long *)0x0) {
    *(undefined1 *)(unaff_x19 + 0x2d8) = 0;
    *(undefined1 *)(unaff_x19 + 0x2c8) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar19 = *plVar15;
  lVar8 = *(long *)
           Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Results__
  ;
  *(bool *)(unaff_x19 + 0x2d8) = lVar19 == lVar8;
  lVar21 = *(long *)puVar1;
  bVar3 = *(byte *)(lVar21 + 0x130);
  if ((*(byte *)(*plVar15 + 0x130) < bVar3) ||
     (lVar9 = (ulong)bVar3 - 1, *(long *)(*(long *)(*plVar15 + 200) + lVar9 * 8) != lVar21)) {
    *(undefined1 *)(unaff_x19 + 0x2c8) = 0;
    if (lVar19 == lVar8) {
      if ((*plVar15 != lVar8) || (*in_stack_00000008 = (long)plVar15, *plVar15 != lVar8)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar15,lVar8);
      }
      thunk_FUN_01f51358(in_stack_00000008,plVar15);
      if (*(char *)(unaff_x19 + 0x1b4) == '\0') {
        iVar5 = *(int *)(unaff_x19 + 0x1bc);
      }
      else {
        iVar5 = 1;
      }
      lVar21 = *(long *)(unaff_x19 + 0x1e0);
      plVar15 = (long *)(unaff_x19 + 0x1e0);
      if ((lVar21 == 0) || (iVar5 != *(int *)(lVar21 + 0x18))) {
        uVar7 = FUN_01f08890(*(undefined8 *)
                              Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Options__
                             ,*(undefined4 *)(unaff_x19 + 0x1bc));
        *(undefined8 *)(unaff_x19 + 0x1e0) = uVar7;
        thunk_FUN_01f51358(plVar15,uVar7);
        lVar21 = *(long *)(unaff_x19 + 0x1e0);
        if (lVar21 == 0) goto LAB_020cfbb4;
      }
      puVar1 = 
      Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_mousePosition__;
      uVar12 = *(ulong *)(lVar21 + 0x18);
      if (0 < (int)uVar12) {
        if (lVar21 != 0) {
          uVar16 = 0;
          do {
            if (*(uint *)(lVar21 + 0x18) <= uVar16) goto LAB_020cfe90;
            uVar7 = *(undefined8 *)(lVar21 + uVar16 * 8 + 0x20);
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar20 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                               (uVar7,0,0);
            if ((uVar20 & 1) != 0) {
              lVar21 = *plVar15;
              uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
              FUN_04051010(uVar7,0);
              if (lVar21 == 0) break;
              if (*(uint *)(lVar21 + 0x18) <= uVar16) goto LAB_020cfe90;
              puVar18 = (undefined8 *)(lVar21 + uVar16 * 8 + 0x20);
              *puVar18 = uVar7;
              thunk_FUN_01f51358(puVar18,uVar7);
              lVar21 = *plVar15;
              if (lVar21 == 0) break;
              if (*(uint *)(lVar21 + 0x18) <= uVar16) goto LAB_020cfe90;
              lVar21 = *(long *)(lVar21 + uVar16 * 8 + 0x20);
              if (lVar21 == 0) break;
              FUN_04077338(lVar21,0x34,0);
            }
            uVar16 = uVar16 + 1;
            if (uVar16 == (uVar12 & 0xffffffff)) goto LAB_020cf644;
            lVar21 = *plVar15;
          } while (lVar21 != 0);
        }
        goto LAB_020cfbb4;
      }
    }
    else {
      lVar21 = FUN_022c59ec(plVar15,*(undefined8 *)
                                     Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Events__
                           );
      plVar15 = (long *)(unaff_x19 + 0x1e0);
      if ((*(long *)(unaff_x19 + 0x1e0) == 0) ||
         (*(int *)(*(long *)(unaff_x19 + 0x1e0) + 0x18) != 1)) {
        lVar8 = FUN_01f08890(*(undefined8 *)
                              Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Options__
                             ,1);
        *plVar15 = lVar8;
        thunk_FUN_01f51358(plVar15,lVar8);
      }
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar12 = FUN_04073094(lVar21,0,0);
      if ((uVar12 & 1) == 0) {
        if (*in_stack_00000018 == 0) goto LAB_020cfbb4;
        lVar21 = FUN_022c59ec(*in_stack_00000018,
                              *(undefined8 *)
                               Method_System_Collections_Generic_Stack<TextMeshPro>_Clear__);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*unaff_x29);
        }
        uVar12 = FUN_04073094(lVar21,0,0);
        if ((uVar12 & 1) == 0) goto LAB_020cf644;
        if (lVar21 == 0) goto LAB_020cfbb4;
        lVar8 = *plVar15;
        uVar7 = FUN_04050c14(lVar21,0);
        if (lVar8 == 0) goto LAB_020cfbb4;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_020cfe90;
        puVar18 = (undefined8 *)(lVar8 + 0x20);
        *puVar18 = uVar7;
      }
      else {
        if (lVar21 == 0) goto LAB_020cfbb4;
        lVar8 = *plVar15;
        uVar7 = FUN_040c22f8(lVar21,0);
        if (lVar8 == 0) goto LAB_020cfbb4;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_020cfe90;
        puVar18 = (undefined8 *)(lVar8 + 0x20);
        *puVar18 = uVar7;
      }
      thunk_FUN_01f51358(puVar18,uVar7);
    }
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x2c8) = 1;
    if ((*(byte *)(*plVar15 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar15 + 200) + lVar9 * 8) != lVar21)) {
LAB_020cfeac:
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar15);
    }
    *in_stack_00000010 = (long)plVar15;
    if ((*(byte *)(*plVar15 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar15 + 200) + lVar9 * 8) != lVar21)) goto LAB_020cfeac;
    thunk_FUN_01f51358(in_stack_00000010,plVar15);
    if (*(char *)(unaff_x19 + 0x1b4) == '\0') {
      iVar5 = *(int *)(unaff_x19 + 0x1bc);
    }
    else {
      iVar5 = 1;
    }
    lVar21 = *(long *)(unaff_x19 + 0x1e0);
    plVar15 = (long *)(unaff_x19 + 0x1e0);
    if ((lVar21 == 0) || (iVar5 != *(int *)(lVar21 + 0x18))) {
      uVar7 = FUN_01f08890(*(undefined8 *)
                            Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Options__
                           ,*(undefined4 *)(unaff_x19 + 0x1bc));
      *(undefined8 *)(unaff_x19 + 0x1e0) = uVar7;
      thunk_FUN_01f51358(plVar15,uVar7);
      lVar21 = *(long *)(unaff_x19 + 0x1e0);
      if (lVar21 == 0) goto LAB_020cfbb4;
    }
    puVar1 = 
    Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_mousePosition__;
    uVar12 = *(ulong *)(lVar21 + 0x18);
    if (0 < (int)uVar12) {
      if (lVar21 != 0) {
        uVar16 = 0;
        do {
          if (*(uint *)(lVar21 + 0x18) <= uVar16) goto LAB_020cfe90;
          uVar7 = *(undefined8 *)(lVar21 + uVar16 * 8 + 0x20);
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar20 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                             (uVar7,0,0);
          if ((uVar20 & 1) != 0) {
            lVar21 = *plVar15;
            uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
            FUN_04051010(uVar7,0);
            if (lVar21 == 0) break;
            if (*(uint *)(lVar21 + 0x18) <= uVar16) goto LAB_020cfe90;
            puVar18 = (undefined8 *)(lVar21 + uVar16 * 8 + 0x20);
            *puVar18 = uVar7;
            thunk_FUN_01f51358(puVar18,uVar7);
            lVar21 = *plVar15;
            if (lVar21 == 0) break;
            if (*(uint *)(lVar21 + 0x18) <= uVar16) goto LAB_020cfe90;
            lVar21 = *(long *)(lVar21 + uVar16 * 8 + 0x20);
            if (lVar21 == 0) break;
            FUN_04077338(lVar21,0x34,0);
          }
          uVar16 = uVar16 + 1;
          if (uVar16 == (uVar12 & 0xffffffff)) goto LAB_020cf644;
          lVar21 = *plVar15;
        } while (lVar21 != 0);
      }
      goto LAB_020cfbb4;
    }
  }
LAB_020cf644:
  if (*(char *)(unaff_x19 + 0x3a) == '\0') {
    if (*(int *)(*(long *)Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar12 = FUN_04039d34(0);
    if ((uVar12 & 1) == 0) {
      return;
    }
  }
  *(undefined1 *)(unaff_x19 + 0x2f0) = 0;
  uVar7 = *(undefined8 *)(unaff_x19 + 0x200);
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar12 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                     (uVar7,0,0);
  if ((uVar12 & 1) != 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x200) == 0) goto LAB_020cfbb4;
  FUN_0404ea1c(*(long *)(unaff_x19 + 0x200),
               *(undefined8 *)Method_UnityEngine_Rendering_VolumeParameter<Cubemap>_GetHashCode__,0)
  ;
  if (*(long *)(unaff_x19 + 0x200) == 0) goto LAB_020cfbb4;
  FUN_0404e2f4(*(long *)(unaff_x19 + 0x200),0,0);
  puVar1 = 
  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
  ;
  lVar21 = *(long *)(unaff_x19 + 0x200);
  if (*(int *)(*(long *)
                Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (lVar21 == 0) goto LAB_020cfbb4;
  FUN_0404f968(lVar21,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1c),
               *(undefined4 *)(unaff_x19 + 0x8c),0);
  switch(*(undefined4 *)(unaff_x19 + 0xf8)) {
  case 0:
    break;
  case 1:
    lVar21 = FUN_020d1ad4();
    puVar2 = Method_System_Numerics_Vector<ulong>_get_Count__;
    lVar8 = *(long *)Method_System_Numerics_Vector<ulong>_get_Count__;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar8);
      lVar8 = *(long *)puVar2;
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar12 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                       (uVar7,0,0);
    if ((uVar12 & 1) != 0) {
      uVar7 = FUN_020d1cfc();
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar8);
        lVar8 = *(long *)puVar2;
      }
      puVar18 = (undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18);
      *puVar18 = uVar7;
      thunk_FUN_01f51358(puVar18,uVar7);
    }
    if (((*(char *)(unaff_x19 + 0x72) == '\0') || (*(char *)(unaff_x19 + 0x71) == '\0')) &&
       (*(char *)(unaff_x19 + 0x1a8) == '\0')) {
      uVar7 = *(undefined8 *)(unaff_x19 + 0x1a0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      bVar3 = FUN_04073094(uVar7,0,0);
      bVar3 = bVar3 & 1;
    }
    else {
      bVar3 = 1;
    }
    *(byte *)(unaff_x19 + 0x2f0) = bVar3;
    goto LAB_020cf830;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    lVar21 = *(long *)(unaff_x19 + 0x100);
    goto LAB_020cf830;
  default:
    lVar21 = 0;
    goto LAB_020cf830;
  }
  lVar21 = FUN_020d1ad4();
LAB_020cf830:
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar12 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                     (lVar21,0,0);
  if ((uVar12 & 1) != 0) {
    *(undefined8 *)(unaff_x19 + 0x1c8) = 0;
    thunk_FUN_01f51358(unaff_x19 + 0x1c8,0);
    FUN_0406f8a4();
    return;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (lVar21 == 0) goto LAB_020cfbb4;
  uVar12 = FUN_0404f968(lVar21,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1c),
                        *(undefined4 *)(unaff_x19 + 0x8c),0);
  bVar3 = 0;
  if ((*(char *)(unaff_x19 + 0x2c8) != '\0') && (bVar3 = 0, *(char *)(unaff_x19 + 0x1c0) != '\0')) {
    bVar3 = *(byte *)(unaff_x19 + 0x1b4) ^ 1;
  }
  *(byte *)(unaff_x19 + 0x351) = bVar3;
  if (bVar3 == 0) {
    uVar13 = 0;
    if (*(char *)(unaff_x19 + 0x2d8) != '\0') {
      uVar13 = *(undefined1 *)(unaff_x19 + 0x1c0);
    }
  }
  else {
    uVar13 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x351) = uVar13;
  if (*(char *)(unaff_x19 + 0xa0) == '\0') {
    bVar3 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x19 + 0xa8);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar12 = FUN_04073094(uVar7,0,0);
    if ((uVar12 & 1) == 0) {
      bVar3 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(unaff_x19 + 0xb0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar12 = FUN_04073094(uVar7,0,0);
      if ((uVar12 & 1) == 0) {
        bVar3 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(unaff_x19 + 0xb8);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar12 = FUN_04073094(uVar7,0,0);
        bVar3 = (byte)uVar12 & 1;
      }
    }
    if (unaff_x19 == 0) goto LAB_020cfbb4;
  }
  *(byte *)(unaff_x19 + 0x352) = bVar3;
  lVar8 = *(long *)(unaff_x19 + 0x210);
  plVar15 = (long *)(unaff_x19 + 0x210);
  if (lVar8 == 0) {
LAB_020cf9f4:
    uVar7 = FUN_01f08890(*(undefined8 *)
                          Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
                         ,*(undefined4 *)(unaff_x19 + 0x1b8));
    *(undefined8 *)(unaff_x19 + 0x210) = uVar7;
    thunk_FUN_01f51358(plVar15,uVar7);
    lVar8 = *(long *)(unaff_x19 + 0x210);
    if (lVar8 == 0) {
LAB_020cfbb4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  else {
    iVar5 = (int)*(ulong *)(lVar8 + 0x18);
    if (*(int *)(unaff_x19 + 0x1b8) != iVar5) {
      uVar16 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
      if (0 < iVar5) {
        uVar20 = 0;
        do {
          if (uVar16 <= uVar20) goto LAB_020cfe90;
          uVar12 = FUN_020ce6cc(uVar12,*(undefined8 *)(lVar8 + uVar20 * 8 + 0x20));
          lVar8 = *plVar15;
          if (lVar8 == 0) goto LAB_020cfbb4;
          uVar16 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar20 = uVar20 + 1;
        } while ((long)uVar20 < (long)(int)*(uint *)(lVar8 + 0x18));
      }
      goto LAB_020cf9f4;
    }
  }
  puVar2 = Method_UnityEngine_UIElements_StyleDataRef<RareData>_Equals__;
  lVar19 = 4;
  lVar9 = 0x20;
  while( true ) {
    uVar23 = (int)lVar19 - 4;
    if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar23) break;
    if (*(uint *)(lVar8 + 0x18) <= uVar23) goto LAB_020cfe90;
    uVar7 = *(undefined8 *)(lVar8 + lVar19 * 8);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar12 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                       (uVar7,0,0);
    if ((uVar12 & 1) == 0) {
      lVar8 = *plVar15;
      if (lVar8 == 0) goto LAB_020cfbb4;
      if (*(uint *)(lVar8 + 0x18) <= uVar23) goto LAB_020cfe90;
      lVar8 = *(long *)(lVar8 + lVar19 * 8);
      if (lVar8 == 0) goto LAB_020cfbb4;
      uVar7 = FUN_0404de9c(lVar8,0);
      uVar11 = FUN_0404de9c(lVar21,0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*unaff_x29);
      }
      uVar12 = FUN_04073094(uVar7,uVar11,0);
      if ((uVar12 & 1) != 0) goto LAB_020cfad0;
    }
    else {
LAB_020cfad0:
      plVar22 = (long *)*plVar15;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar8 = FUN_023aa7e0(lVar21,*(undefined8 *)puVar2);
      if (plVar22 == (long *)0x0) goto LAB_020cfbb4;
      if ((lVar8 != 0) &&
         (lVar10 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar22 + 0x40)), lVar10 == 0)) {
        uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar7,0);
      }
      if (*(uint *)(plVar22 + 3) <= uVar23) goto LAB_020cfe90;
      plVar22[lVar19] = lVar8;
      thunk_FUN_01f51358((long)plVar22 + lVar9,lVar8);
      lVar8 = *plVar15;
      if (lVar8 == 0) goto LAB_020cfbb4;
      if (*(uint *)(lVar8 + 0x18) <= uVar23) goto LAB_020cfe90;
      lVar8 = *(long *)(lVar8 + lVar19 * 8);
      if (lVar8 == 0) goto LAB_020cfbb4;
      FUN_04077338(lVar8,0x34,0);
    }
    if (*plVar15 == 0) goto LAB_020cfbb4;
    if (*(uint *)(*plVar15 + 0x18) <= uVar23) goto LAB_020cfe90;
    FUN_020d1f98();
    lVar8 = *(long *)(unaff_x19 + 0x210);
    if (lVar8 == 0) goto LAB_020cfbb4;
    if (*(uint *)(lVar8 + 0x18) <= uVar23) goto LAB_020cfe90;
    lVar8 = *(long *)(lVar8 + lVar19 * 8);
    if (lVar8 == 0) goto LAB_020cfbb4;
    FUN_0404e958(lVar8,(int)lVar19 + *(int *)(unaff_x19 + 0x2b8) + -3,0);
    lVar8 = *(long *)(unaff_x19 + 0x210);
    lVar19 = lVar19 + 1;
    lVar9 = lVar9 + 8;
    if (lVar8 == 0) goto LAB_020cfbb4;
  }
  if (*(long *)(unaff_x19 + 0x208) == 0) goto LAB_020cfbb4;
  FUN_0404e958(*(long *)(unaff_x19 + 0x208),
               *(int *)(unaff_x19 + 0x1b8) + *(int *)(unaff_x19 + 0x2b8) + 1,0);
  puVar2 = Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__;
  lVar21 = *(long *)(unaff_x19 + 0x208);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (lVar21 == 0) goto LAB_020cfbb4;
  FUN_0404f968(lVar21,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1c),
               *(undefined4 *)(unaff_x19 + 0x8c),0);
  if ((*(long *)(unaff_x19 + 0x1c8) != 0) &&
     (*(int *)(unaff_x19 + 0x60) == *(int *)(*(long *)(unaff_x19 + 0x1c8) + 0x18)))
  goto LAB_020cfc98;
  plVar15 = (long *)(unaff_x19 + 0x1c8);
  lVar21 = FUN_01f08890(*(undefined8 *)
                         Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>_get_selectedCamera__
                       );
  *plVar15 = lVar21;
  thunk_FUN_01f51358(plVar15,lVar21);
  lVar21 = *plVar15;
  if (lVar21 == 0) goto LAB_020cfbb4;
  uVar23 = *(uint *)(lVar21 + 0x18);
  if ((long)((ulong)uVar23 << 0x20) < 1) goto LAB_020cfc90;
  uVar12 = 0;
  puVar17 = (undefined4 *)(lVar21 + 0xa0);
  while (uVar12 < uVar23) {
    uVar12 = uVar12 + 1;
    *puVar17 = 0xff7fffff;
    puVar17 = puVar17 + 0x2c;
    if ((long)(int)uVar23 <= (long)uVar12) {
LAB_020cfc90:
      *(undefined4 *)(unaff_x19 + 0x1d8) = 0xffffffff;
LAB_020cfc98:
      if ((*(long *)(unaff_x19 + 0x1d0) == 0) ||
         (*(int *)(unaff_x19 + 0x60) != *(int *)(*(long *)(unaff_x19 + 0x1d0) + 0x18))) {
        uVar7 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>__ctor__
                            );
        *(undefined8 *)(unaff_x19 + 0x1d0) = uVar7;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x1d0),uVar7);
      }
      if ((*(long *)(unaff_x19 + 0x278) == 0) ||
         (*(int *)(*(long *)(unaff_x19 + 0x278) + 0x18) != 0x3ff)) {
        uVar7 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__,0x3ff)
        ;
        *(undefined8 *)(unaff_x19 + 0x278) = uVar7;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x278),uVar7);
      }
      if ((*(long *)(unaff_x19 + 0x280) == 0) ||
         (*(int *)(*(long *)(unaff_x19 + 0x280) + 0x18) != 0x3ff)) {
        uVar7 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_Events_UnityEvent<string,_int,_int>_Invoke__,0x3ff)
        ;
        *(undefined8 *)(unaff_x19 + 0x280) = uVar7;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x280),uVar7);
      }
      if ((*(long *)(unaff_x19 + 0x288) == 0) ||
         (*(int *)(*(long *)(unaff_x19 + 0x288) + 0x18) != 0x3ff)) {
        uVar7 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__,
                             0x3ff);
        *(undefined8 *)(unaff_x19 + 0x288) = uVar7;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x288),uVar7);
      }
      if ((*(long *)(unaff_x19 + 0x1f8) == 0) ||
         (*(int *)(*(long *)(unaff_x19 + 0x1f8) + 0x18) != 0x3ff)) {
        uVar7 = FUN_01f08890(*(undefined8 *)puVar2,0x3ff);
        *(undefined8 *)(unaff_x19 + 0x1f8) = uVar7;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x1f8),uVar7);
      }
      if ((*(long *)(unaff_x19 + 0x290) == 0) ||
         (*(int *)(*(long *)(unaff_x19 + 0x290) + 0x18) != 0x3ff)) {
        uVar7 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__,
                             0x3ff);
        *(undefined8 *)(unaff_x19 + 0x290) = uVar7;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x290),uVar7);
      }
      if ((*(long *)(unaff_x19 + 0x298) == 0) ||
         (*(int *)(*(long *)(unaff_x19 + 0x298) + 0x18) != 0x3ff)) {
        uVar7 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__,
                             0x3ff);
        *(undefined8 *)(unaff_x19 + 0x298) = uVar7;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x298),uVar7);
      }
      FUN_020d1458();
      return;
    }
  }
LAB_020cfe90:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


