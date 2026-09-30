/*
FUNCTION_NAME: FUN_038e52d4
ENTRY_POINT: 038e52d4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long FUN_038e52d4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 local_38;
  long local_28;
  
  local_28 = param_2;
  if ((DAT_04539778 & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(PTR_DAT_04230a80);
    FUN_01c5d288(Method_System_Collections_Generic_List<Action<Texture>>__ctor__);
    FUN_01c5d288(Method_System_Net_HttpWebRequest__ctor__);
    FUN_01c5d288(Method_System_Security_Cryptography_RSA_TryExportRSAPrivateKey__);
    DAT_04539778 = 1;
  }
  local_38 = 0;
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
    plVar5 = *(long **)(*(long *)(lVar4 + 0xb8) + 0x80);
    if (plVar5 == (long *)0x0) {
LAB_038e5494:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar4 = (**(code **)(*plVar5 + 0x178))
                      (plVar5,&local_28,param_1,*(undefined8 *)(*plVar5 + 0x180));
    lVar3 = local_28;
    if (lVar4 == 0) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<Action<Texture>>__ctor__ + 0xe0)
          == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar4 = FUN_03895bf8(lVar3,&local_38,0);
      if (lVar4 == 0) {
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar4 = *(long *)puVar1;
        }
        plVar5 = *(long **)(*(long *)(lVar4 + 0xb8) + 0x80);
        if (plVar5 == (long *)0x0) goto LAB_038e5494;
        lVar4 = (**(code **)(*plVar5 + 0x228))
                          (plVar5,local_38,param_1,*(undefined8 *)(*plVar5 + 0x230));
        if (lVar4 == 0) {
          local_40 = local_38;
          uVar6 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_04230a80,&local_40);
          *param_5 = uVar6;
        }
      }
    }
  }
  return lVar4;
}


