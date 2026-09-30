/*
FUNCTION_NAME: RoomMeshAnchor$$EnableComponent<__Il2CppFullySharedGenericStructType>
ENTRY_POINT: 0103a328
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void RoomMeshAnchor__EnableComponent<__Il2CppFullySharedGenericStructType>(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x2e0));
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_List<OVRGLTFAnimationNodeMorphTargetHandler>_GetEnumerator__
                    );
  thunk_FUN_00d48444(OVRPlugin_OVRP_1_110_0_TypeInfo);
  thunk_FUN_00d48444(Method_Newtonsoft_Json_Utilities_CollectionUtils_AddDistinct<string>__);
  *(undefined1 *)(unaff_x20 + 0xf87) = 1;
  puVar2 = Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
  if (*(long *)(unaff_x19 + 0x118) != 0) {
    FUN_02689f9c(*(long *)(unaff_x19 + 0x118),0,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_03774e19 == '\0') {
      thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
      DAT_03774e19 = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar2;
    }
    if (**(long **)(lVar4 + 0xb8) != 0) {
      lVar5 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x28);
      if (DAT_03774e19 == '\0') {
        thunk_FUN_00d48444(puVar2);
        lVar4 = *(long *)puVar2;
        DAT_03774e19 = '\x01';
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar4 = *(long *)puVar2;
      }
      if (((**(long **)(lVar4 + 0xb8) != 0) &&
          (lVar4 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x38), lVar4 != 0)) &&
         (uVar3 = FUN_00edabf4(*(undefined8 *)(lVar4 + 0x10),0), lVar5 != 0)) {
        FUN_00ecce94(lVar5,0,uVar3,100,0);
        if (DAT_03774e19 == '\0') {
          thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
          DAT_03774e19 = '\x01';
        }
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar4 = *(long *)puVar2;
        }
        if (**(long **)(lVar4 + 0xb8) != 0) {
          lVar5 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x28);
          if (DAT_03774e19 == '\0') {
            thunk_FUN_00d48444(puVar2);
            lVar4 = *(long *)puVar2;
            DAT_03774e19 = '\x01';
          }
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar4 = *(long *)puVar2;
          }
          if (((**(long **)(lVar4 + 0xb8) != 0) &&
              (lVar4 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x40), lVar4 != 0)) &&
             (uVar3 = FUN_00edabf4(*(undefined8 *)(lVar4 + 0x10),0), lVar5 != 0)) {
            FUN_00ecce94(lVar5,0,uVar3,100,0);
            iVar1 = *(int *)(unaff_x19 + 0x110);
            *(int *)(unaff_x19 + 0x110) = iVar1 + 1;
            if (1 < iVar1) {
              FUN_00fdf628(*(undefined8 *)UnityEngine_GUILayoutOption___TypeInfo,0);
              FUN_0103969c();
              return;
            }
            FUN_00fdf628(*(undefined8 *)OVRPlugin_OVRP_1_110_0_TypeInfo,0);
            if (*(long *)(unaff_x19 + 0x108) != 0) {
              FUN_02654350(*(long *)(unaff_x19 + 0x108),
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<OVRGLTFAnimationNodeMorphTargetHandler>_GetEnumerator__
                           ,0,0);
              FUN_0268ea48(0x3f800000);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


