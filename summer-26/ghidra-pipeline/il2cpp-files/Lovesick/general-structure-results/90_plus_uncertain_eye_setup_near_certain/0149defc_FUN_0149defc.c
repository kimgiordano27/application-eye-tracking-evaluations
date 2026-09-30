/*
FUNCTION_NAME: FUN_0149defc
ENTRY_POINT: 0149defc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0149defc(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_40;
  undefined8 local_38;
  long local_28;
  
                    /* try { // try from 0149df08 to 0159df0b has its CatchHandler @ 0149df88 */
  if ((DAT_03776c8b & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(PTR_DAT_033f03a0);
    thunk_FUN_00d48444(FullSerializer_Internal_fsTypeCache_TypeInfo);
                    /* try { // try from 0149df48 to 0159df73 has its CatchHandler @ 0149df94 */
    thunk_FUN_00d48444(Method_System_Collections_Specialized_ReadOnlyList_set_Item__);
    thunk_FUN_00d48444(StringLiteral_11955);
    thunk_FUN_00d48444(StringLiteral_4128);
    thunk_FUN_00d48444(PTR_DAT_033ebcc8);
                    /* try { // try from 0149df74 to 0159df7f has its CatchHandler @ 0149d9fc */
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_Utilities_TypeExtensions_<GetAllMembers>d__51<object>_System_Collections_IEnumerator_Reset__
                      );
                    /* try { // try from 0149df80 to 0159df93 has its CatchHandler @ 0149df94 */
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<BezierControlPoint>_get_Current__
                      );
                    /* catch() { ... } // from try @ 0149df08 with catch @ 0149df88 */
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_58_0_TypeInfo);
                    /* catch() { ... } // from try @ 0149ded8 with catch @ 0149df94
                       catch() { ... } // from try @ 0149df48 with catch @ 0149df94
                       catch() { ... } // from try @ 0149df80 with catch @ 0149df94 */
    thunk_FUN_00d48444(Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXmlNode>_get_Item__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXRGroupMember>__ctor__);
    thunk_FUN_00d48444(StringLiteral_720);
    thunk_FUN_00d48444(StringLiteral_11606);
    DAT_03776c8b = 1;
  }
  puVar2 = StringLiteral_11955;
  local_40 = 0;
  local_38 = 0;
  lVar7 = *(long *)(param_1 + 8);
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
LAB_0149e0c0:
    FUN_013ba2d0(&local_38,&local_28,
                 *(undefined8 *)
                  Method_Sirenix_Serialization_Utilities_TypeExtensions_<GetAllMembers>d__51<object>_System_Collections_IEnumerator_Reset__
                );
    lVar3 = *(long *)(param_1 + 0xc);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    *(long *)(lVar3 + 0x10) = local_28;
    if (local_28 == 0) {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar5 = (long *)thunk_FUN_00d93c64(lVar7,0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar8 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      uVar6 = FUN_015f5b28(*(undefined8 *)StringLiteral_11606,*(undefined8 *)(param_1 + 10),0);
      if (*(int *)(*(long *)StringLiteral_720 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_014def10(uVar8,uVar6,0,0);
      uVar8 = 0;
      goto LAB_0149e1f0;
    }
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_016f27fc(lVar7,lVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<IXmlNode>_get_Item__,0);
    if (*(int *)(*(long *)
                  Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__ +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar7 = FUN_017efd20(lVar7,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    local_40 = FUN_017e7d88(lVar7,0);
    uVar4 = FUN_016a1310(&local_40,0);
    if ((uVar4 & 1) == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x10) = local_40;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01098fc0(param_1 + 2,&local_40,param_1,
                   *(undefined8 *)FullSerializer_Internal_fsTypeCache_TypeInfo);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_List<IXRGroupMember>__ctor__);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_017b46ec(lVar3,0);
      puVar1 = PTR_DAT_033ebcc8;
      *(long *)(param_1 + 0xc) = lVar3;
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_1 + 8);
      uVar8 = *(undefined8 *)(param_1 + 10);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar3 = FUN_010ff2f8(uVar8,0,0,*(undefined8 *)StringLiteral_4128);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_38 = FUN_013bdbc4(lVar3,*(undefined8 *)OVRPlugin_OVRP_1_58_0_TypeInfo);
      uVar4 = FUN_013ba28c(&local_38,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List_Enumerator<BezierControlPoint>_get_Current__
                          );
      if ((uVar4 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0xe) = local_38;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01098fc0(param_1 + 2,&local_38,param_1,*(undefined8 *)PTR_DAT_033f03a0);
        return;
      }
      goto LAB_0149e0c0;
    }
    local_40 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  FUN_016a13e0(&local_40,0);
  if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0xc) + 0x10);
LAB_0149e1f0:
  *param_1 = -2;
  param_1[0xc] = 0;
  puVar1 = Method_System_Collections_Specialized_ReadOnlyList_set_Item__;
  param_1[0xd] = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_011ccb9c(param_1 + 2,uVar8,*(undefined8 *)puVar1);
  return;
}


