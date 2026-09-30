/*
FUNCTION_NAME: FUN_038e6fd0
ENTRY_POINT: 038e6fd0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long FUN_038e6fd0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_40;
  long local_38;
  
  local_38 = param_2;
  if ((DAT_045397aa & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(
                Method_Unity_Services_Core_Internal_CoreRegistry_RegisterPackage<Ua2CoreInitializeCallback>__
                );
    FUN_01c5d288(Method_System_Net_HttpWebRequest__ctor__);
    FUN_01c5d288(Method_System_Security_Cryptography_RSA_TryExportRSAPrivateKey__);
    DAT_045397aa = 1;
  }
  local_40 = 0;
  *param_5 = 0;
  puVar2 = Method_System_Security_Cryptography_RSA_TryExportRSAPrivateKey__;
  puVar1 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x10) == 0)) {
    uVar6 = **(undefined8 **)(*(long *)PTR_DAT_0422fc38 + 0xb8);
    lVar4 = thunk_FUN_01c496e0(*(undefined8 *)Method_System_Net_HttpWebRequest__ctor__);
    FUN_037f036c(lVar4,*(undefined8 *)puVar2,uVar6,0);
  }
  else {
    lVar4 = *(long *)Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar4 = *(long *)puVar1;
    }
    plVar5 = *(long **)(*(long *)(lVar4 + 0xb8) + 0x90);
    if (plVar5 == (long *)0x0) {
LAB_038e7170:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar4 = (**(code **)(*plVar5 + 0x178))
                      (plVar5,&local_38,param_1,*(undefined8 *)(*plVar5 + 0x180));
    lVar3 = local_38;
    if (lVar4 == 0) {
      if (*(int *)(*(long *)
                    Method_Unity_Services_Core_Internal_CoreRegistry_RegisterPackage<Ua2CoreInitializeCallback>__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar6 = System_ComponentModel_MaskedTextProvider__TestSetChar(lVar3,param_4,&local_40,0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar4 = *(long *)puVar1;
      }
      plVar5 = *(long **)(*(long *)(lVar4 + 0xb8) + 0x90);
      if (plVar5 == (long *)0x0) goto LAB_038e7170;
      lVar4 = (**(code **)(*plVar5 + 0x238))(plVar5,uVar6,param_1,*(undefined8 *)(*plVar5 + 0x240));
      if (lVar4 == 0) {
        *param_5 = uVar6;
      }
    }
  }
  return lVar4;
}


