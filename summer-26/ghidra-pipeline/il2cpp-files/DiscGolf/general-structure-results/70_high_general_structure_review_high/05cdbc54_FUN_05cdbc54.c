/*
FUNCTION_NAME: FUN_05cdbc54
ENTRY_POINT: 05cdbc54
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_8;telemetry_or_network_hits_9;frame_or_lifecycle_behavior
*/


undefined8
FUN_05cdbc54(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  int local_58;
  char local_54;
  
  puVar2 = Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__;
  if ((DAT_06dc2d3a & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0d2c0);
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_TryCreateOneFingerGestureOnTouchBegan__
                );
    FUN_02d965b8(
                Method_Unity_Burst_FunctionPointer<XRGrabInteractable_EaseAttachBurst_00000F65_PostfixBurstDelegate>_get_Value__
                );
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__);
                    /* catch() { ... } // from try @ 05cdb3a0 with catch @ 05cdbcc8 */
    FUN_02d965b8(PTR_DAT_069fc180);
                    /* catch() { ... } // from try @ 05cdb388 with catch @ 05cdbccc */
    FUN_02d965b8(PTR_DAT_069ff7d8);
                    /* catch() { ... } // from try @ 05cdb568 with catch @ 05cdbcd8 */
                    /* catch() { ... } // from try @ 05cdb520 with catch @ 05cdbcdc */
                    /* catch() { ... } // from try @ 05cdb558 with catch @ 05cdbce0 */
    FUN_02d965b8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__);
                    /* catch() { ... } // from try @ 05cdbc28 with catch @ 05cdbce4 */
                    /* catch() { ... } // from try @ 05cdb53c with catch @ 05cdbce8 */
                    /* catch() { ... } // from try @ 05cdb4f8 with catch @ 05cdbcec */
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_TryCreateOneFingerGestureOnTouchBegan__
                );
                    /* catch() { ... } // from try @ 05cdb524 with catch @ 05cdbcf0 */
                    /* catch() { ... } // from try @ 05cdbc24 with catch @ 05cdbcf4 */
                    /* catch() { ... } // from try @ 05cdb738 with catch @ 05cdbcf8 */
    FUN_02d965b8(Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                );
                    /* catch() { ... } // from try @ 05cdbc20 with catch @ 05cdbcfc */
                    /* catch() { ... } // from try @ 05cdb760 with catch @ 05cdbd00 */
                    /* catch() { ... } // from try @ 05cdbc1c with catch @ 05cdbd04 */
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_Update__
                );
                    /* catch() { ... } // from try @ 05cdb594 with catch @ 05cdbd08 */
                    /* catch() { ... } // from try @ 05cdbc18 with catch @ 05cdbd0c */
                    /* catch() { ... } // from try @ 05cdbc14 with catch @ 05cdbd10 */
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_add_onGestureStarted__
                );
                    /* catch() { ... } // from try @ 05cdb578 with catch @ 05cdbd14 */
                    /* catch() { ... } // from try @ 05cdb5a8 with catch @ 05cdbd18 */
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_arSessionOrigin__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_raycastMask__
                );
                    /* try { // try from 05cdbd34 to 05ddbd4b has its CatchHandler @ 05cdbe2c */
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_raycastTriggerInteraction__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_xrOrigin__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_remove_onGestureStarted__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_set_arSessionOrigin__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_set_raycastMask__
                );
                    /* try { // try from 05cdbd68 to 05ddbd6b has its CatchHandler @ 05cdbe28 */
                    /* try { // try from 05cdbd6c to 05ddbd83 has its CatchHandler @ 05cdbe24 */
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_set_raycastTriggerInteraction__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_set_xrOrigin__
                );
                    /* try { // try from 05cdbd84 to 05ddbd8b has its CatchHandler @ 05cdbe20 */
    DAT_06dc2d3a = 1;
  }
  local_54 = '\0';
  lVar5 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
                    /* try { // try from 05cdbd94 to 05ddbdb3 has its CatchHandler @ 05cdbe1c */
  FUN_05cdf694(lVar5,0);
  puVar2 = Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__;
  if (lVar5 == 0) goto LAB_05cdc460;
                    /* try { // try from 05cdbdb4 to 05ddbdf7 has its CatchHandler @ 05cdbe18 */
  *(long *)(lVar5 + 0x10) = param_1;
  LeanTween__value((long *)(lVar5 + 0x10),param_1);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar6 = FUN_05cd427c();
  if ((uVar6 & 1) != 0) {
    plVar7 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,2);
    uVar12 = *(undefined8 *)
              Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_set_xrOrigin__
    ;
                    /* try { // try from 05cdbdf8 to 05ddbe07 has its CatchHandler @ 05cdb038 */
    if (param_2 == 0) {
      if (plVar7 == (long *)0x0) goto LAB_05cdc460;
      lVar14 = 0;
    }
    else {
      if (plVar7 == (long *)0x0) goto LAB_05cdc460;
      lVar14 = *(long *)(param_2 + 0x10);
                    /* try { // try from 05cdbe08 to 05ddbe17 has its CatchHandler @ 05cdbe2c */
      if ((lVar14 != 0) &&
         (lVar8 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
      goto LAB_05cdbe60;
    }
    if ((int)plVar7[3] == 0) {
LAB_05cdc464:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    plVar7[4] = lVar14;
    LeanTween__value(plVar7 + 4,lVar14);
    if (param_3 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(param_3 + 0x18);
      if ((lVar14 != 0) &&
         (lVar8 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
LAB_05cdbe60:
        uVar12 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar12,0);
      }
    }
    if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_05cdc464;
    plVar7[5] = lVar14;
    LeanTween__value(plVar7 + 5,lVar14);
    uVar12 = FUN_0540edec(uVar12,plVar7,0);
    lVar14 = *(long *)puVar2;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar14);
    }
    FUN_05cd42e0(param_1,uVar12,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_raycastTriggerInteraction__
                );
  }
  if (param_3 == 0) {
    return 0;
  }
  iVar4 = *(int *)(param_3 + 0x14);
  if (iVar4 != 0xdd) {
    uVar12 = *(undefined8 *)(param_3 + 0x18);
    *(int *)(param_1 + 0x104) = iVar4;
    *(undefined8 *)(param_1 + 0x108) = uVar12;
    LeanTween__value(param_1 + 0x108);
    if (*(int *)(param_3 + 0x14) - 600U < 0xfffffe0c) {
      thunk_FUN_02dfd288(PTR_DAT_06a10338);
      uVar10 = thunk_FUN_02dd3144();
      uVar12 = thunk_FUN_02dfd288(
                                 Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>__ctor__
                                 );
      FUN_05ce56b4(uVar10,uVar12,7,0);
      goto LAB_05cdc4d8;
    }
  }
  if (*(int *)(param_1 + 0x58) == -1) {
    if (iVar4 == 0x78) {
      return 3;
    }
    if (iVar4 == 0xdc) {
      lVar5 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff7d8);
      FUN_05377f4c(lVar5,0);
      plVar7 = (long *)(param_1 + 0xa0);
      *plVar7 = lVar5;
      LeanTween__value(plVar7,lVar5);
      if (*plVar7 != 0) {
        FUN_053798ac(*plVar7,*(undefined8 *)(param_1 + 0x108),0);
        return 1;
      }
      goto LAB_05cdc460;
    }
    goto LAB_05cdc4bc;
  }
  if (param_2 == 0) goto LAB_05cdc460;
  uVar6 = thunk_FUN_0536b75c(*(undefined8 *)(param_2 + 0x10),
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_arSessionOrigin__
                             ,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(param_3 + 0x14) - 200U < 100) {
      uVar12 = FUN_0538828c(0);
    }
    else {
      uVar12 = FUN_05389424(0);
    }
    FUN_05cdaba4(param_1,uVar12);
    return 1;
  }
  if (*(long *)(param_2 + 0x10) == 0) goto LAB_05cdc460;
  iVar3 = FUN_053728f8(*(long *)(param_2 + 0x10),
                       *(undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_set_arSessionOrigin__
                       ,0);
  if ((iVar4 == 0xe6) && (iVar3 != -1)) {
    iVar3 = *(int *)(param_3 + 0x14);
    *(undefined1 *)(param_1 + 0x100) = 1;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    if (199 < iVar3 - 400U) {
LAB_05cdc020:
      if (*(char *)(param_1 + 0x100) != '\x01') {
        if (*(long *)(param_2 + 0x10) == 0) goto LAB_05cdc460;
        iVar3 = FUN_053728f8(*(long *)(param_2 + 0x10),
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_raycastMask__
                             ,0);
        if (iVar3 != -1) {
          if ((iVar4 != 0x14c) && (iVar4 != 0xe6)) goto LAB_05cdc4bc;
          *(undefined1 *)(param_1 + 0x100) = 1;
        }
      }
      if ((((*(byte *)(param_2 + 0x18) >> 2 & 1) != 0) && (*(int *)(param_3 + 0x14) - 100U < 200))
         && (uVar12 = FUN_05cdc510(param_1,param_2,param_3,0), local_54 == '\0')) {
        return uVar12;
      }
      puVar2 = Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__;
      if (iVar4 != 0x7d) {
        if (iVar4 == 0xe6) {
          if (*(long *)(param_1 + 0xa8) != 0) {
            FUN_053798ac(*(long *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x108),0);
            goto LAB_05cdc404;
          }
          goto LAB_05cdc460;
        }
        if (iVar4 != 0x96) {
          if (iVar4 == 0xdd) {
            if (*(long *)(param_1 + 0xb0) != 0) {
              FUN_053798ac(*(long *)(param_1 + 0xb0),*(undefined8 *)(param_3 + 0x18),0);
              FUN_05cdf79c(param_1,0);
              goto LAB_05cdc404;
            }
            goto LAB_05cdc460;
          }
          if (iVar4 == 0xd5) {
            if (*(long *)(param_2 + 0x10) == 0) goto LAB_05cdc460;
            uVar6 = FUN_0536bac4(*(long *)(param_2 + 0x10),
                                 *(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_xrOrigin__
                                 ,0);
            if ((uVar6 & 1) == 0) {
              if (*(long *)(param_2 + 0x10) == 0) goto LAB_05cdc460;
              uVar6 = FUN_0536bac4(*(long *)(param_2 + 0x10),
                                   *(undefined8 *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_set_raycastMask__
                                   ,0);
              if ((uVar6 & 1) != 0) {
                uVar12 = FUN_05cdd12c(param_1,*(undefined8 *)(param_3 + 0x18));
                *(undefined8 *)(param_1 + 0xd0) = uVar12;
              }
            }
            else {
              uVar12 = FUN_05cdd000(uVar6,*(undefined8 *)(param_3 + 0x18));
              *(undefined8 *)(param_1 + 200) = uVar12;
            }
          }
          else {
            if (iVar4 == 0x101) {
              uVar6 = thunk_FUN_0536b75c(*(undefined8 *)(param_2 + 0x10),
                                         *(undefined8 *)
                                          Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_set_raycastTriggerInteraction__
                                         ,0);
              if (((uVar6 & 1) == 0) || ((*(byte *)(param_2 + 0x18) & 1) != 0)) goto LAB_05cdc404;
              lVar5 = FUN_05cdd4d0(uVar6,*(undefined8 *)(param_3 + 0x18));
              plVar7 = (long *)(param_1 + 0xe0);
              *plVar7 = lVar5;
            }
            else if (iVar4 == 0xea) {
              plVar7 = (long *)(param_1 + 0x30);
              plVar11 = (long *)*plVar7;
              if (plVar11 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__ +
                                 0x130);
                if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)Method_UnityEngine_Rendering_GenericPool<XRPass>_Get__))
                goto LAB_05cdc404;
              }
              plVar13 = *(long **)(param_1 + 0x40);
              if (plVar13 == (long *)0x0) {
                FUN_05ce8620(param_1,0);
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*plVar13 !=
                  *(long *)
                   Method_Unity_Burst_FunctionPointer<XRGrabInteractable_EaseAttachBurst_00000F65_PostfixBurstDelegate>_get_Value__
                 ) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96be0(plVar13);
              }
              uVar12 = FUN_05ce8620(param_1,0);
              lVar14 = (**(code **)(*plVar13 + 0x1e8))(plVar13,*(undefined8 *)(*plVar13 + 0x1f0));
              if (lVar14 == 0) goto LAB_05cdc460;
              uVar10 = FUN_05c0b888(lVar14,0);
              uVar9 = FUN_05ce75e4(plVar13,0);
              lVar14 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
              FUN_05cd65e8(lVar14,plVar11,uVar12,uVar10,uVar9);
              plVar11 = (long *)(lVar5 + 0x18);
              *plVar11 = lVar14;
              LeanTween__value(plVar11,lVar14);
              lVar14 = *plVar11;
              if (*(char *)(param_1 + 0x48) != '\0') {
                uVar12 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0d2c0);
                FUN_054544a8(uVar12,lVar5,
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_TryCreateOneFingerGestureOnTouchBegan__
                             ,0);
                if (lVar14 != 0) {
                  FUN_05cd67d8(lVar14,uVar12,0);
                  return 2;
                }
                goto LAB_05cdc460;
              }
              if (lVar14 == 0) goto LAB_05cdc460;
              FUN_05cd66d8(lVar14);
              *plVar7 = *plVar11;
            }
            else {
              if (*(long *)(param_2 + 0x10) == 0) goto LAB_05cdc460;
              iVar4 = FUN_053728f8(*(long *)(param_2 + 0x10),
                                   *(undefined8 *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_remove_onGestureStarted__
                                   ,0);
              if (iVar4 == -1) goto LAB_05cdc404;
              plVar7 = (long *)(param_1 + 0xe8);
              *plVar7 = *(long *)(param_1 + 0xf0);
            }
            LeanTween__value(plVar7);
          }
LAB_05cdc404:
          if ((*(int *)(param_3 + 0x14) - 200U < 0xffffff9c) &&
             ((uVar6 = FUN_05ce8510(param_1,0), (uVar6 & 1) != 0 ||
              (uVar6 = thunk_FUN_0536b75c(*(undefined8 *)(param_2 + 0x10),
                                          *(undefined8 *)
                                           Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_Update__
                                          ,0), (uVar6 & 1) == 0)))) {
            return 1;
          }
          return 3;
        }
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        if ((*(byte *)(param_2 + 0x18) >> 1 & 1) != 0) {
          FUN_05cdcbc4(param_1,*(undefined8 *)(param_3 + 0x18));
          plVar7 = *(long **)(param_1 + 0x40);
          if (plVar7 != (long *)0x0) {
            if (*plVar7 !=
                *(long *)
                 Method_Unity_Burst_FunctionPointer<XRGrabInteractable_EaseAttachBurst_00000F65_PostfixBurstDelegate>_get_Value__
               ) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96be0(plVar7);
            }
            if (plVar7[10] != 0) {
              uVar6 = FUN_05ce0ce4(plVar7[10],0);
              if ((uVar6 & 1) != 0) {
                FUN_05cdccb0(param_1,*(undefined8 *)(param_3 + 0x18),plVar7);
              }
              uVar12 = FUN_05cdb810(param_1,param_5);
              return uVar12;
            }
          }
LAB_05cdc460:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        local_58 = iVar4;
        uVar12 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                     Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_TryCreateOneFingerGestureOnTouchBegan__
                                    ,&local_58);
        uVar12 = FUN_0534f2b8(*(undefined8 *)
                               Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_add_onGestureStarted__
                              ,uVar12,*(undefined8 *)(param_2 + 0x10),0);
        *(undefined8 *)(param_1 + 0x68) = uVar12;
        LeanTween__value((undefined8 *)(param_1 + 0x68),uVar12);
      }
      return 0;
    }
  }
  else {
    if (199 < *(int *)(param_3 + 0x14) - 400U) goto LAB_05cdc020;
    if ((iVar4 == 0x1a5) && (*(int *)(param_1 + 0x58) < 2)) {
      *(undefined1 *)(param_1 + 0x38) = 1;
    }
  }
LAB_05cdc4bc:
  uVar12 = FUN_02979e58(param_3);
  uVar10 = FUN_05cd9830(uVar12,iVar4,*(undefined8 *)(param_3 + 0x18),0);
LAB_05cdc4d8:
  uVar12 = thunk_FUN_02dfd288(
                             Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_TryCreateTwoFingerGestureOnTouchBegan__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar10,uVar12);
}


