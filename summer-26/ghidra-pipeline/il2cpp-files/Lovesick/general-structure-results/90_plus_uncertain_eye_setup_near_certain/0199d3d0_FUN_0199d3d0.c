/*
FUNCTION_NAME: FUN_0199d3d0
ENTRY_POINT: 0199d3d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
FUN_0199d3d0(float param_1,float param_2,float param_3,long param_4,long param_5,long param_6,
            long param_7)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined4 uStack_ac;
  undefined4 local_94;
  
                    /* try { // try from 0199d3d4 to 01a9d3db has its CatchHandler @ 0199d3e4 */
                    /* catch() { ... } // from try @ 0199d360 with catch @ 0199d3dc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0199d3a0 with catch @ 0199d3e4
                       catch(type#2 @ 00000000) { ... } // from try @ 0199d3d4 with catch @ 0199d3e4
                        */
  if ((DAT_0377a4cd & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_WitWebSocketClient_PubSubSubscription>_set_Item__
                      );
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<TextVertex>_Dispose__);
    thunk_FUN_00d48444(PTR_DAT_033f6548);
    thunk_FUN_00d48444(StringLiteral_14226);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                      );
    thunk_FUN_00d48444(OVRPlugin_<>c_TypeInfo);
    DAT_0377a4cd = 1;
  }
  if (param_6 != 0) {
    lVar7 = *(long *)
             Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__;
    *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + 1;
    uVar6 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 200));
    if ((uVar6 & 1) == 0) {
      *(undefined4 *)(param_6 + 0x18) = 0;
    }
    else {
      iVar9 = *(int *)(param_6 + 0x18);
      *(undefined4 *)(param_6 + 0x18) = 0;
      if (0 < iVar9) {
        FUN_0179519c(*(undefined8 *)(param_6 + 0x10),0,iVar9,0);
      }
    }
  }
  puVar4 = StringLiteral_14226;
  puVar3 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
  puVar2 = OVRPlugin_<>c_TypeInfo;
  local_94 = 0;
  fVar8 = 0.0;
  while ((lVar7 = param_7, param_7 != 0 || (lVar7 = *(long *)(param_4 + 0x28), lVar7 != 0))) {
    if (*(int *)(lVar7 + 0x18) <= (int)fVar8) {
      return local_94;
    }
    fVar1 = fVar8;
    if (param_7 != 0) {
      FUN_0132138c(param_7,fVar8,&local_b8,*(undefined8 *)puVar3);
      fVar1 = local_b8;
    }
    if ((*(long *)(param_4 + 0x28) == 0) ||
       (FUN_0132138c(*(long *)(param_4 + 0x28),fVar1,&local_b8,*(undefined8 *)puVar2),
       uVar5 = uStack_ac, param_5 == 0)) break;
    fVar10 = local_b8 - param_1;
    fVar11 = fStack_b4 - param_2;
    fVar12 = local_b0 - param_3;
    uVar6 = Oculus_Platform_CAPI__ovr_Error_GetDisplayableMessage_Native
                      (fVar10,fVar11,fVar12,uStack_ac,*(undefined8 *)(param_5 + 0x10),0);
    if ((uVar6 & 1) != 0) {
      lVar7 = *(long *)(param_5 + 0x18);
      if (lVar7 == 0) break;
      iVar9 = 0;
      while (iVar9 < *(int *)(lVar7 + 0x18)) {
        FUN_0132138c(lVar7,iVar9,&local_b8,*(undefined8 *)puVar4);
        uVar6 = Oculus_Platform_CAPI__ovr_Error_GetDisplayableMessage_Native
                          (fVar10,fVar11,fVar12,uVar5,CONCAT44(fStack_b4,local_b8),0);
        if ((uVar6 & 1) != 0) {
          if (param_6 == 0) {
            return 1;
          }
          FUN_00ac20f0(param_6,fVar1,*(undefined8 *)StringLiteral_4747);
          local_94 = 1;
          break;
        }
        lVar7 = *(long *)(param_5 + 0x18);
        iVar9 = iVar9 + 1;
        if (lVar7 == 0) goto LAB_0199d65c;
      }
    }
    fVar8 = (float)((int)fVar8 + 1);
  }
LAB_0199d65c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


