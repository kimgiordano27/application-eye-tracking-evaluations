/*
FUNCTION_NAME: FUN_061d7100
ENTRY_POINT: 061d7100
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_18;telemetry_or_network_hits_2;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void FUN_061d7100(long param_1,undefined4 param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  if ((DAT_076dddcd & 1) == 0) {
    thunk_FUN_032e1da0(
                      System_Func<<>f__AnonymousType0<VisualEffectControlTrackController_Event,_int>,_double>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Func<Transform>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<XRRaycastSubsystemDescriptor>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<RenderPose,_string>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<UIRAtlasAllocator_AreaNode>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionCancelEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionEndEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<UniqueIdentifier_Decorator>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<KeyValuePair<string,_bool>,_string>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<KeyValuePair<string,_DateTime>,_DateTime>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<KeyValuePair<string,_DateTime>,_string>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<FocusController_FocusedElement>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionRunEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<DetachFromPanelEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<IGrouping<AssetType,_AssetColor>,_AssetColor[]>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<Color>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<UIHoverEventArgs>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<Join>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<Column>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_List<CombineInstance>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<PropertyInfo,_IOptimizedAccessor>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Func<KeyValuePair<string,_AssetType>,_bool>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<KeyValuePair<string,_AssetType>,_string>_TypeInfo);
                    /* try { // try from 061d7264 to 062d73b3 has its CatchHandler @ 061d7264
                       catch() { ... } // from try @ 061d7264 with catch @ 061d7264
                       catch() { ... } // from try @ 061d73e4 with catch @ 061d7264
                       catch() { ... } // from try @ 061d749c with catch @ 061d7264
                       catch() { ... } // from try @ 061d7534 with catch @ 061d7264 */
    thunk_FUN_032e1da0(System_Func<KeyValuePair<string,_bool>,_bool>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<FocusEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<FocusExitEventArgs>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<FocusInEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<FocusOutEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<object[],_object>_TypeInfo);
    DAT_076dddcd = 1;
  }
  switch(param_2) {
  case 2:
    if (param_3 == (long *)0x0) {
      plVar5 = (long *)(param_1 + 0x158);
      *(undefined8 *)(param_1 + 0x158) = 0;
      goto LAB_061d7c08;
    }
    lVar2 = *(long *)System_Func<Transform>_TypeInfo;
    bVar1 = *(byte *)(lVar2 + 0x130);
    if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
       (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
      *(long **)(param_1 + 0x158) = param_3;
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
        plVar5 = (long *)(param_1 + 0x158);
        goto LAB_061d7c08;
      }
    }
    goto LAB_061d7e70;
  case 3:
    if (param_3 != (long *)0x0) {
                    /* try { // try from 061d7498 to 062d749b has its CatchHandler @ 061d74ac */
                    /* try { // try from 061d749c to 062d74c3 has its CatchHandler @ 061d7264 */
      lVar2 = *(long *)System_Collections_Generic_List<Join>_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 061d73b4 with catch @ 061d74ac
                       catch(type#1 @ 06e40658) { ... } // from try @ 061d7498 with catch @ 061d74ac
                        */
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
                    /* try { // try from 061d74c4 to 062d74c7 has its CatchHandler @ 061d74d4 */
        *(long **)(param_1 + 0x148) = param_3;
                    /* catch() { ... } // from try @ 061d74c4 with catch @ 061d74d4 */
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
          plVar5 = (long *)(param_1 + 0x148);
          goto LAB_061d7c08;
        }
      }
      goto LAB_061d7e70;
    }
    plVar5 = (long *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x148) = 0;
    goto LAB_061d7c08;
  case 4:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)System_Func<UIHoverEventArgs>_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
                    /* try { // try from 061d750c to 062d7533 has its CatchHandler @ 061d7548 */
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
        *(long **)(param_1 + 0x150) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
          plVar5 = (long *)(param_1 + 0x150);
          goto LAB_061d7c08;
        }
      }
      goto LAB_061d7e70;
    }
    plVar5 = (long *)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x150) = 0;
    goto LAB_061d7c08;
  case 5:
    if (param_3 == (long *)0x0) {
      plVar5 = (long *)(param_1 + 0x78);
      *plVar5 = 0;
      goto LAB_061d7c08;
    }
    lVar2 = *(long *)System_Func<TransitionRunEvent>_TypeInfo;
    uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (lVar4 = uVar3 - 1, *(long *)(*(long *)(*param_3 + 200) + lVar4 * 8) != lVar2))
    goto LAB_061d7e70;
    plVar5 = (long *)(param_1 + 0x78);
    *plVar5 = (long)param_3;
    break;
  case 6:
    if (param_3 == (long *)0x0) {
      plVar5 = (long *)(param_1 + 0x88);
      *plVar5 = 0;
      goto LAB_061d7c08;
    }
    lVar2 = *(long *)System_Func<TransitionEndEvent>_TypeInfo;
    uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (lVar4 = uVar3 - 1, *(long *)(*(long *)(*param_3 + 200) + lVar4 * 8) != lVar2))
    goto LAB_061d7e70;
    plVar5 = (long *)(param_1 + 0x88);
    *plVar5 = (long)param_3;
    break;
  case 7:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)System_Func<TransitionCancelEvent>_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
        *(long **)(param_1 + 0x120) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
          plVar5 = (long *)(param_1 + 0x120);
          goto LAB_061d7c08;
        }
      }
      goto LAB_061d7e70;
    }
    plVar5 = (long *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x120) = 0;
    goto LAB_061d7c08;
  case 8:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)System_Func<UIRAtlasAllocator_AreaNode>_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
        *(long **)(param_1 + 0x128) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
          plVar5 = (long *)(param_1 + 0x128);
          goto LAB_061d7c08;
        }
      }
      goto LAB_061d7e70;
    }
    plVar5 = (long *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = 0;
    goto LAB_061d7c08;
  case 9:
    if (param_3 == (long *)0x0) {
      plVar5 = (long *)(param_1 + 0x90);
      *plVar5 = 0;
      goto LAB_061d7c08;
    }
    lVar2 = *(long *)System_Collections_Generic_List<XRRaycastSubsystemDescriptor>_TypeInfo;
    uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (lVar4 = uVar3 - 1, *(long *)(*(long *)(*param_3 + 200) + lVar4 * 8) != lVar2))
    goto LAB_061d7e70;
    plVar5 = (long *)(param_1 + 0x90);
    *plVar5 = (long)param_3;
    break;
  case 10:
    if (param_3 == (long *)0x0) {
      plVar5 = (long *)(param_1 + 0xf0);
      *plVar5 = 0;
      goto LAB_061d7c08;
    }
    lVar2 = *(long *)System_Collections_Generic_List<Color>_TypeInfo;
    uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (lVar4 = uVar3 - 1, *(long *)(*(long *)(*param_3 + 200) + lVar4 * 8) != lVar2))
    goto LAB_061d7e70;
    plVar5 = (long *)(param_1 + 0xf0);
    *plVar5 = (long)param_3;
    break;
  case 0xb:
    if (param_3 == (long *)0x0) {
      plVar5 = (long *)(param_1 + 0xf8);
      *plVar5 = 0;
      goto LAB_061d7c08;
    }
    lVar2 = *(long *)System_Func<IGrouping<AssetType,_AssetColor>,_AssetColor[]>_TypeInfo;
    uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (lVar4 = uVar3 - 1, *(long *)(*(long *)(*param_3 + 200) + lVar4 * 8) != lVar2))
    goto LAB_061d7e70;
    plVar5 = (long *)(param_1 + 0xf8);
    *plVar5 = (long)param_3;
    break;
  case 0xc:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)
               System_Func<<>f__AnonymousType0<VisualEffectControlTrackController_Event,_int>,_double>_TypeInfo
      ;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
        *(long **)(param_1 + 0x100) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
          plVar5 = (long *)(param_1 + 0x100);
          goto LAB_061d7c08;
        }
      }
      goto LAB_061d7e70;
    }
    plVar5 = (long *)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x100) = 0;
    goto LAB_061d7c08;
  case 0xd:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)System_Func<UniqueIdentifier_Decorator>_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
        *(long **)(param_1 + 0x108) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
          plVar5 = (long *)(param_1 + 0x108);
          goto LAB_061d7c08;
        }
      }
      goto LAB_061d7e70;
    }
    plVar5 = (long *)(param_1 + 0x108);
    *(undefined8 *)(param_1 + 0x108) = 0;
    goto LAB_061d7c08;
  case 0xe:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)
               System_Collections_Generic_Dictionary<PropertyInfo,_IOptimizedAccessor>_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
        *(long **)(param_1 + 0x110) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
          plVar5 = (long *)(param_1 + 0x110);
          goto LAB_061d7c08;
        }
      }
      goto LAB_061d7e70;
    }
    plVar5 = (long *)(param_1 + 0x110);
    *(undefined8 *)(param_1 + 0x110) = 0;
    goto LAB_061d7c08;
  case 0xf:
    if (param_3 == (long *)0x0) {
      plVar5 = (long *)(param_1 + 0x80);
      *plVar5 = 0;
      goto LAB_061d7c08;
    }
    lVar2 = *(long *)System_Collections_Generic_Dictionary<RenderPose,_string>_TypeInfo;
    uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (lVar4 = uVar3 - 1, *(long *)(*(long *)(*param_3 + 200) + lVar4 * 8) != lVar2))
    goto LAB_061d7e70;
    plVar5 = (long *)(param_1 + 0x80);
    *plVar5 = (long)param_3;
    break;
  case 0x10:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)System_Collections_Generic_List<Column>_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
        *(long **)(param_1 + 0x130) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
          plVar5 = (long *)(param_1 + 0x130);
          goto LAB_061d7c08;
        }
      }
      goto LAB_061d7e70;
    }
    plVar5 = (long *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x130) = 0;
    goto LAB_061d7c08;
  case 0x11:
    if (param_3 == (long *)0x0) {
      plVar5 = (long *)(param_1 + 0xa0);
      *plVar5 = 0;
      goto LAB_061d7c08;
    }
    lVar2 = *(long *)System_Func<FocusOutEvent>_TypeInfo;
    uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (lVar4 = uVar3 - 1, *(long *)(*(long *)(*param_3 + 200) + lVar4 * 8) != lVar2))
    goto LAB_061d7e70;
    plVar5 = (long *)(param_1 + 0xa0);
    *plVar5 = (long)param_3;
    break;
  case 0x12:
    if (param_3 == (long *)0x0) {
      plVar5 = (long *)(param_1 + 0x98);
      *plVar5 = 0;
      goto LAB_061d7c08;
    }
    lVar2 = *(long *)System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo;
    uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (lVar4 = uVar3 - 1, *(long *)(*(long *)(*param_3 + 200) + lVar4 * 8) != lVar2))
    goto LAB_061d7e70;
    plVar5 = (long *)(param_1 + 0x98);
    *plVar5 = (long)param_3;
    break;
  case 0x13:
    if (param_3 == (long *)0x0) {
      plVar5 = (long *)(param_1 + 0xa8);
      *plVar5 = 0;
      goto LAB_061d7c08;
    }
    lVar2 = *(long *)System_Func<KeyValuePair<string,_DateTime>,_string>_TypeInfo;
    uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (lVar4 = uVar3 - 1, *(long *)(*(long *)(*param_3 + 200) + lVar4 * 8) != lVar2))
    goto LAB_061d7e70;
    plVar5 = (long *)(param_1 + 0xa8);
    *plVar5 = (long)param_3;
    break;
  case 0x14:
    if (param_3 == (long *)0x0) {
      plVar5 = (long *)(param_1 + 0xb8);
      *plVar5 = 0;
      goto LAB_061d7c08;
    }
    lVar2 = *(long *)System_Func<KeyValuePair<string,_DateTime>,_DateTime>_TypeInfo;
    uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (lVar4 = uVar3 - 1, *(long *)(*(long *)(*param_3 + 200) + lVar4 * 8) != lVar2))
    goto LAB_061d7e70;
    plVar5 = (long *)(param_1 + 0xb8);
    *plVar5 = (long)param_3;
    break;
  case 0x15:
    if (param_3 == (long *)0x0) {
      plVar5 = (long *)(param_1 + 0xb0);
      *plVar5 = 0;
      goto LAB_061d7c08;
    }
    lVar2 = *(long *)System_Func<KeyValuePair<string,_bool>,_string>_TypeInfo;
    uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (lVar4 = uVar3 - 1, *(long *)(*(long *)(*param_3 + 200) + lVar4 * 8) != lVar2))
    goto LAB_061d7e70;
    plVar5 = (long *)(param_1 + 0xb0);
    *plVar5 = (long)param_3;
    break;
  case 0x16:
    if (param_3 == (long *)0x0) {
      plVar5 = (long *)(param_1 + 0xc0);
      *plVar5 = 0;
      goto LAB_061d7c08;
    }
    lVar2 = *(long *)System_Func<KeyValuePair<string,_bool>,_bool>_TypeInfo;
    uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (lVar4 = uVar3 - 1, *(long *)(*(long *)(*param_3 + 200) + lVar4 * 8) != lVar2))
    goto LAB_061d7e70;
    plVar5 = (long *)(param_1 + 0xc0);
    *plVar5 = (long)param_3;
    break;
  case 0x17:
    if (param_3 == (long *)0x0) {
      plVar5 = (long *)(param_1 + 200);
      *plVar5 = 0;
      goto LAB_061d7c08;
    }
    lVar2 = *(long *)System_Func<KeyValuePair<string,_AssetType>,_bool>_TypeInfo;
    uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (lVar4 = uVar3 - 1, *(long *)(*(long *)(*param_3 + 200) + lVar4 * 8) != lVar2))
    goto LAB_061d7e70;
    plVar5 = (long *)(param_1 + 200);
    *plVar5 = (long)param_3;
    break;
  case 0x18:
    if (param_3 == (long *)0x0) {
      plVar5 = (long *)(param_1 + 0xd0);
      *plVar5 = 0;
      goto LAB_061d7c08;
    }
    lVar2 = *(long *)System_Func<KeyValuePair<string,_AssetType>,_string>_TypeInfo;
    uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (lVar4 = uVar3 - 1, *(long *)(*(long *)(*param_3 + 200) + lVar4 * 8) != lVar2))
    goto LAB_061d7e70;
    plVar5 = (long *)(param_1 + 0xd0);
    *plVar5 = (long)param_3;
    break;
  case 0x19:
    if (param_3 == (long *)0x0) {
      plVar5 = (long *)(param_1 + 0xd8);
      *plVar5 = 0;
      goto LAB_061d7c08;
    }
    lVar2 = *(long *)System_Func<FocusInEvent>_TypeInfo;
    uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (lVar4 = uVar3 - 1, *(long *)(*(long *)(*param_3 + 200) + lVar4 * 8) != lVar2))
    goto LAB_061d7e70;
    plVar5 = (long *)(param_1 + 0xd8);
    *plVar5 = (long)param_3;
    break;
  case 0x1a:
    if (param_3 == (long *)0x0) {
      plVar5 = (long *)(param_1 + 0xe0);
      *plVar5 = 0;
      goto LAB_061d7c08;
    }
    lVar2 = *(long *)System_Func<FocusEvent>_TypeInfo;
    uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (lVar4 = uVar3 - 1, *(long *)(*(long *)(*param_3 + 200) + lVar4 * 8) != lVar2))
    goto LAB_061d7e70;
    plVar5 = (long *)(param_1 + 0xe0);
    *plVar5 = (long)param_3;
    break;
  case 0x1b:
    if (param_3 == (long *)0x0) {
      plVar5 = (long *)(param_1 + 0xe8);
      *plVar5 = 0;
      goto LAB_061d7c08;
    }
    lVar2 = *(long *)System_Func<FocusExitEventArgs>_TypeInfo;
    uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (lVar4 = uVar3 - 1, *(long *)(*(long *)(*param_3 + 200) + lVar4 * 8) != lVar2))
    goto LAB_061d7e70;
    plVar5 = (long *)(param_1 + 0xe8);
    *plVar5 = (long)param_3;
    break;
  case 0x1c:
  case 0x1d:
  case 0x1e:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)System_Func<KeyValuePair<Type,_PostProcessBundle>,_bool>_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
        *(long **)(param_1 + 0x138) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
          plVar5 = (long *)(param_1 + 0x138);
          goto LAB_061d7c08;
        }
      }
      goto LAB_061d7e70;
    }
    plVar5 = (long *)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0x138) = 0;
    goto LAB_061d7c08;
  case 0x1f:
  case 0x20:
    if (param_3 != (long *)0x0) {
                    /* try { // try from 061d73b4 to 062d73e3 has its CatchHandler @ 061d74ac */
      lVar2 = *(long *)System_Func<object[],_object>_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
        *(long **)(param_1 + 0x140) = param_3;
                    /* try { // try from 061d73e4 to 062d7497 has its CatchHandler @ 061d7264 */
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
          plVar5 = (long *)(param_1 + 0x140);
          goto LAB_061d7c08;
        }
      }
      goto LAB_061d7e70;
    }
    plVar5 = (long *)(param_1 + 0x140);
    *(undefined8 *)(param_1 + 0x140) = 0;
    goto LAB_061d7c08;
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)System_Func<DetachFromPanelEvent>_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
        *(long **)(param_1 + 0x170) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
          plVar5 = (long *)(param_1 + 0x170);
          goto LAB_061d7c08;
        }
      }
      goto LAB_061d7e70;
    }
    plVar5 = (long *)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x170) = 0;
    goto LAB_061d7c08;
  case 0x2d:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)System_Func<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
        *(long **)(param_1 + 0x160) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
          plVar5 = (long *)(param_1 + 0x160);
          goto LAB_061d7c08;
        }
      }
      goto LAB_061d7e70;
    }
    plVar5 = (long *)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x160) = 0;
    goto LAB_061d7c08;
  case 0x2e:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)System_Collections_Generic_List<FocusController_FocusedElement>_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
        *(long **)(param_1 + 0x168) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
          plVar5 = (long *)(param_1 + 0x168);
          goto LAB_061d7c08;
        }
      }
      goto LAB_061d7e70;
    }
    plVar5 = (long *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x168) = 0;
    goto LAB_061d7c08;
  case 0x2f:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)System_Collections_Generic_List<CombineInstance>_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
        *(long **)(param_1 + 0x180) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
          plVar5 = (long *)(param_1 + 0x180);
          goto LAB_061d7c08;
        }
      }
      goto LAB_061d7e70;
    }
    plVar5 = (long *)(param_1 + 0x180);
    *(undefined8 *)(param_1 + 0x180) = 0;
    goto LAB_061d7c08;
  default:
    return;
  }
  if (((uint)*(byte *)(*param_3 + 0x130) < (uint)uVar3) ||
     (*(long *)(*(long *)(*param_3 + 200) + lVar4 * 8) != lVar2)) {
LAB_061d7e70:
                    /* WARNING: Subroutine does not return */
    FUN_032d618c(param_3);
  }
LAB_061d7c08:
  thunk_FUN_0333a630(plVar5,param_3);
  return;
}


