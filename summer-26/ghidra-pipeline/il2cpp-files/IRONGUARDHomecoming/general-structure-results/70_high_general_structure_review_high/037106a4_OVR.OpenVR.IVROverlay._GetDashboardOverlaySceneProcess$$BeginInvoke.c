/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._GetDashboardOverlaySceneProcess$$BeginInvoke
ENTRY_POINT: 037106a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


void OVR_OpenVR_IVROverlay__GetDashboardOverlaySceneProcess__BeginInvoke
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 in_stack_00000008;
  
  uVar4 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (param_1,param_2,0);
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_040703d4();
    if (lVar5 == 0) goto LAB_03710880;
    lVar5 = FUN_023360e0(lVar5,*(undefined8 *)
                                Method_System_ValueTuple<bool,_bool,_Task<BufferOffsetSize>,_WebException>__ctor__
                        );
    *unaff_x20 = lVar5;
    thunk_FUN_01f51358();
  }
  if ((*unaff_x20 != 0) && (lVar5 = FUN_040703d4(*unaff_x20,0), lVar5 != 0)) {
    FUN_023360e0(lVar5,*(undefined8 *)
                        Method_UnityEngine_UIElements_UIEventRegistration_<>c_<_cctor>b__1_5__);
    if ((*unaff_x20 != 0) &&
       ((lVar5 = FUN_040703d4(*unaff_x20,0), lVar5 != 0 &&
        (lVar5 = FUN_023361c8(lVar5,*(undefined8 *)
                                     Method_UnityEngine_UIElements_UIR_UIRenderDevice_<>c_<_ctor>b__50_0__
                             ),
        puVar2 = Method_UnityEngine_UIElements_UIR_UIRenderDevice_<>c_<_ctor>b__50_1__,
        puVar1 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__0__,
        lVar5 != 0)))) {
      *(long *)(lVar5 + 0x20) = unaff_x19;
      thunk_FUN_01f51358();
      *(undefined4 *)(unaff_x19 + 0x20) = 0x28;
      iVar3 = FUN_04032f44(0);
      **(int **)(*(long *)puVar2 + 0xb8) = iVar3;
      if (iVar3 == 24000) {
        uVar9 = 1;
      }
      else if (iVar3 == 0xac44) {
        uVar9 = 2;
      }
      else if (iVar3 == 48000) {
        uVar9 = 3;
      }
      else {
        uVar9 = 0;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_036e3560(uVar9);
      puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
      if (*(char *)(*(long *)(*(long *)puVar2 + 0xb8) + 4) != '\0') {
        plVar6 = (long *)FUN_01f08890(*(undefined8 *)
                                       Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                      ,1);
        in_stack_00000008._4_4_ = **(undefined4 **)(*(long *)puVar2 + 0xb8);
        lVar5 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,(long)&stack0x00000008 + 4);
        if (plVar6 == (long *)0x0) goto LAB_03710880;
        if ((lVar5 != 0) &&
           (lVar7 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
          uVar8 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar8,0);
        }
        puVar2 = Method_System_Text_UTF7Encoding_DecoderUTF7FallbackBuffer_InternalFallback__;
        puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
        if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar6[4] = lVar5;
        thunk_FUN_01f51358(plVar6 + 4,lVar5);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0403ec4c(*(undefined8 *)puVar2,plVar6,0);
      }
      return;
    }
  }
LAB_03710880:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


