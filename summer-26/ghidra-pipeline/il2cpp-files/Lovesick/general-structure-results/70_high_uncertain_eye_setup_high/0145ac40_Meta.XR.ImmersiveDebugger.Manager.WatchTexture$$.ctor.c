/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchTexture$$.ctor
ENTRY_POINT: 0145ac40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchTexture___ctor
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  uint *unaff_x23;
  
  FUN_0143e30c(param_2,*param_1,param_4,0);
  lVar1 = thunk_FUN_00d6225c(param_2,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar1 != 0) {
    if (0x1a < *unaff_x23) {
      unaff_x19[0x1e] = param_2;
      lVar1 = thunk_FUN_00d62348(*unaff_x22);
      if (lVar1 == 0) {
LAB_0145ae58:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0143e30c(lVar1,*(undefined8 *)Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__,
                   0,0);
      lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar2 == 0) goto LAB_0145ae5c;
      if (0x1b < *unaff_x23) {
        unaff_x19[0x1f] = lVar1;
        lVar1 = thunk_FUN_00d62348(*unaff_x22);
        if (lVar1 == 0) goto LAB_0145ae58;
        FUN_0143e30c(lVar1,*(undefined8 *)StringLiteral_5771,0,0);
        lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar2 == 0) goto LAB_0145ae5c;
        if (0x1c < *unaff_x23) {
          unaff_x19[0x20] = lVar1;
          lVar1 = thunk_FUN_00d62348(*unaff_x22);
          if (lVar1 == 0) goto LAB_0145ae58;
          FUN_0143e30c(lVar1,*(undefined8 *)
                              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                       ,0,0);
          lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
          if (lVar2 == 0) goto LAB_0145ae5c;
          if (0x1d < *unaff_x23) {
            unaff_x19[0x21] = lVar1;
            lVar1 = thunk_FUN_00d62348(*unaff_x22);
            if (lVar1 == 0) goto LAB_0145ae58;
            FUN_0143e30c(lVar1,*(undefined8 *)StringLiteral_5916,0,0);
            lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
            if (lVar2 == 0) goto LAB_0145ae5c;
            if (0x1e < *unaff_x23) {
              unaff_x19[0x22] = lVar1;
              lVar1 = thunk_FUN_00d62348(*unaff_x22);
              if (lVar1 == 0) goto LAB_0145ae58;
              FUN_0143e30c(lVar1,*(undefined8 *)
                                  Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
                           ,0,0);
              lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
              if (lVar2 == 0) goto LAB_0145ae5c;
              if (0x1f < *unaff_x23) {
                unaff_x19[0x23] = lVar1;
                lVar1 = thunk_FUN_00d62348(*unaff_x22);
                if (lVar1 == 0) goto LAB_0145ae58;
                FUN_0143e30c(lVar1,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TryGetValue__
                             ,0,0);
                lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
                if (lVar2 == 0) goto LAB_0145ae5c;
                if (0x20 < *unaff_x23) {
                  unaff_x19[0x24] = lVar1;
                  *(long **)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
                  return;
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_0145ae5c:
  uVar3 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar3,0);
}


