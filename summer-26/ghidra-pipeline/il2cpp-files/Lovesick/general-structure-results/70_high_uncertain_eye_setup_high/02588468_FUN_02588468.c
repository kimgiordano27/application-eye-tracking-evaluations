/*
FUNCTION_NAME: FUN_02588468
ENTRY_POINT: 02588468
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02588468(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  
  if ((DAT_03782eff & 1) == 0) {
    thunk_FUN_00d48444(Oculus_Interaction_ControllerSelector_<>c_TypeInfo);
    thunk_FUN_00d48444(Method_OVRNativeList<OVRLocatable>_Dispose__);
    thunk_FUN_00d48444(Oculus_Platform_Models_SdkAccount_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_TypeConverter_StandardValuesCollection_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
                      );
    thunk_FUN_00d48444(UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJson_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<JsonConverter>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_329);
    thunk_FUN_00d48444(StringLiteral_10694);
    DAT_03782eff = 1;
  }
  puVar5 = StringLiteral_10694;
  puVar4 = StringLiteral_329;
  puVar3 = Method_OVRNativeList<OVRLocatable>_Dispose__;
  puVar2 = Oculus_Interaction_ControllerSelector_<>c_TypeInfo;
  puVar1 = Oculus_Platform_Models_SdkAccount_TypeInfo;
  if (*(long *)(param_1 + 0x48) == param_2) {
    return;
  }
  plVar12 = *(long **)(param_1 + 0x50);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)Oculus_Interaction_ControllerSelector_<>c_TypeInfo)
        {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto FUN_025885a4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_00d59724(plVar12,*(long *)Oculus_Interaction_ControllerSelector_<>c_TypeInfo,0);
FUN_025885a4:
    lVar9 = (*(code *)*puVar6)(plVar12,puVar6[1]);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if ((lVar7 == 0) || (FUN_013df2bc(lVar7,param_1,*(undefined8 *)puVar4,0), lVar9 == 0))
    goto LAB_02588824;
    FUN_013df7e0(lVar9,lVar7,
                 *(undefined8 *)
                  UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJson_TypeInfo);
    plVar12 = *(long **)(param_1 + 0x50);
    if (plVar12 == (long *)0x0) goto LAB_02588824;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_0258864c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar2,1);
LAB_0258864c:
    lVar9 = (*(code *)*puVar6)(plVar12,puVar6[1]);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar7 == 0) || (FUN_013df2bc(lVar7,param_1,*(undefined8 *)puVar5,0), lVar9 == 0))
    goto LAB_02588824;
    FUN_013df7e0(lVar9,lVar7,*(undefined8 *)System_Collections_Generic_List<JsonConverter>_TypeInfo)
    ;
  }
  *(long *)(param_1 + 0x48) = param_2;
  uVar8 = thunk_FUN_00d6225c(param_2,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x50) = uVar8;
  thunk_FUN_00d6225c(param_2,*(undefined8 *)puVar2);
  plVar12 = *(long **)(param_1 + 0x50);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02588710;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar2,0);
LAB_02588710:
    lVar9 = (*(code *)*puVar6)(plVar12,puVar6[1]);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if ((lVar7 != 0) && (FUN_013df2bc(lVar7,param_1,*(undefined8 *)puVar4,0), lVar9 != 0)) {
      FUN_013df780(lVar9,lVar7,
                   *(undefined8 *)
                    System_ComponentModel_TypeConverter_StandardValuesCollection_TypeInfo);
      plVar12 = *(long **)(param_1 + 0x50);
      if (plVar12 != (long *)0x0) {
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_025887b8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar2,1);
LAB_025887b8:
        lVar9 = (*(code *)*puVar6)(plVar12,puVar6[1]);
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if ((lVar7 != 0) && (FUN_013df2bc(lVar7,param_1,*(undefined8 *)puVar5,0), lVar9 != 0)) {
          FUN_013df780(lVar9,lVar7,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
                      );
          goto LAB_02588808;
        }
      }
    }
LAB_02588824:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_02588808:
  FUN_02588340(param_1);
  return;
}


