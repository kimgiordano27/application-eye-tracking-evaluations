/*
FUNCTION_NAME: FUN_037eda1c
ENTRY_POINT: 037eda1c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


void FUN_037eda1c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((DAT_04538fb7 & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_JsonUtility_FromJson<JsonResponseGeneralArray<ExitData>>__);
    FUN_01c5d288(PTR_DAT_042367c0);
    FUN_01c5d288(Method_System_Configuration_IgnoreSection_SerializeSection__);
    FUN_01c5d288(PTR_DAT_04230940);
    FUN_01c5d288(Method_UnityEngine_Rendering_ListPool<GUIContent>_Get__);
    FUN_01c5d288(
                Method_Unity_Services_Core_Internal_CoreRegistry_RegisterPackage<Ua2CoreInitializeCallback>__
                );
    DAT_04538fb7 = 1;
  }
  puVar5 = Method_UnityEngine_JsonUtility_FromJson<JsonResponseGeneralArray<ExitData>>__;
  puVar3 = 
  Method_Unity_Services_Core_Internal_CoreRegistry_RegisterPackage<Ua2CoreInitializeCallback>__;
  puVar1 = PTR_DAT_04230940;
  plVar6 = *(long **)(param_1 + 0x50);
  if (plVar6 != (long *)0x0) {
    lVar7 = (**(code **)(*plVar6 + 0x468))(plVar6,*(undefined8 *)(*plVar6 + 0x470));
    *(long *)(param_1 + 0x98) = lVar7;
    if (lVar7 == 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_UnityEngine_Rendering_ListPool<GUIContent>_Get__);
      FUN_0389ba48(uVar8,uVar9,0);
      *(undefined8 *)(param_1 + 0x98) = uVar8;
      *(undefined1 *)(param_1 + 0xa0) = 1;
    }
    puVar4 = Method_System_Configuration_IgnoreSection_SerializeSection__;
    puVar2 = PTR_DAT_042367c0;
    uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03884424(uVar8,10,0);
    *(undefined8 *)(param_1 + 0x80) = uVar8;
    uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
    FUN_03160a50(uVar8,0);
    *(undefined8 *)(param_1 + 0x68) = uVar8;
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar7 = *(long *)puVar3;
    }
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
    uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
    FUN_032ab88c(uVar8,0);
    *(undefined8 *)(param_1 + 0x88) = uVar8;
    FUN_037edc50(param_1,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8));
    uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
    FUN_037ccc98(uVar8,0);
    *(undefined8 *)(param_1 + 0x48) = uVar8;
    *(undefined1 *)(param_1 + 0x79) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


