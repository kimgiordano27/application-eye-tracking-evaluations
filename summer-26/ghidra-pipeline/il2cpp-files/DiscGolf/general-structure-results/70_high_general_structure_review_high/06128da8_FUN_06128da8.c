/*
FUNCTION_NAME: FUN_06128da8
ENTRY_POINT: 06128da8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_06128da8(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  
  puVar3 = 
  Method_Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_DeserializeIntoActualObject__
  ;
  puVar2 = 
  Method_Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_DeserializeIntoActualObject__
  ;
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_TryGetTrackableManager<ARRaycastManager>__
  ;
  if ((DAT_06dc66cd & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc868);
    FUN_02d965b8(Method_Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_FromJson__);
    FUN_02d965b8(PTR_DAT_06a102e0);
    FUN_02d965b8(
                Method_Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_DeserializeIntoActualObject__
                );
    FUN_02d965b8(
                Method_Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_DeserializeIntoActualObject__
                );
    FUN_02d965b8(
                Method_Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_GetConcreteType__
                );
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_TryGetTrackableManager<ARRaycastManager>__
                );
    DAT_06dc66cd = 1;
  }
  lVar4 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_0552aca4(lVar4,0);
  uVar5 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
  FUN_047e8068(uVar5,*(undefined8 *)puVar3);
  puVar2 = Method_Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_GetConcreteType__;
  puVar1 = PTR_DAT_069fc868;
  if (lVar4 != 0) {
    puVar9 = (undefined8 *)(lVar4 + 0x10);
    *puVar9 = uVar5;
    LeanTween__value(puVar9,uVar5);
    plVar10 = *(long **)(param_1 + 0x20);
    uVar5 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    FUN_054521e8(uVar5,lVar4,*(undefined8 *)puVar2,0);
    if ((*(long *)(param_1 + 0x18) != 0) && (plVar10 != (long *)0x0)) {
      lVar4 = *plVar10;
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06a102e0) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06128f18;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)PTR_DAT_06a102e0,0);
LAB_06128f18:
                    /* try { // try from 06128f18 to 0622943f has its CatchHandler @ 06128f18
                       catch() { ... } // from try @ 06128f18 with catch @ 06128f18
                       catch() { ... } // from try @ 061294e8 with catch @ 06128f18
                       catch() { ... } // from try @ 06129588 with catch @ 06128f18
                       catch() { ... } // from try @ 061295dc with catch @ 06128f18 */
      (*(code *)*puVar6)(uVar11,plVar10,uVar5,puVar6[1]);
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar7 = FUN_04b75634(*(long *)(param_1 + 0x10),param_2,*puVar9,
                             *(undefined8 *)
                              Method_Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_FromJson__
                            );
        if ((uVar7 & 1) != 0) {
          return;
        }
        thunk_FUN_02dfd288(
                          Method_Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOfJsonConverter_CanConvert__
                          );
        uVar5 = thunk_FUN_02dd3144();
        FUN_0612ad64(uVar5,param_2);
        uVar11 = thunk_FUN_02dfd288(
                                   Method_Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOfJsonConverter_WriteJson__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar5,uVar11);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


