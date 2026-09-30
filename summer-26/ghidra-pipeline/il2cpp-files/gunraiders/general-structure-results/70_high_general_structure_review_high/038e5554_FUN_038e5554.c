/*
FUNCTION_NAME: FUN_038e5554
ENTRY_POINT: 038e5554
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


long FUN_038e5554(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  long local_28;
  
  local_28 = param_2;
  if ((DAT_0453977b & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(PTR_DAT_04230a80);
    FUN_01c5d288(Method_System_Net_HttpWebRequest__ctor__);
    FUN_01c5d288(Method_System_Security_Cryptography_RSA_TryExportRSAPrivateKey__);
    DAT_0453977b = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_58 = 0;
  *param_5 = 0;
  puVar2 = Method_System_Security_Cryptography_RSA_TryExportRSAPrivateKey__;
  puVar1 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x10) == 0)) {
    uVar5 = **(undefined8 **)(*(long *)PTR_DAT_0422fc38 + 0xb8);
    lVar3 = thunk_FUN_01c496e0(*(undefined8 *)Method_System_Net_HttpWebRequest__ctor__);
    FUN_037f036c(lVar3,*(undefined8 *)puVar2,uVar5,0);
  }
  else {
    lVar3 = *(long *)Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar3 = *(long *)puVar1;
    }
    plVar4 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x80);
    if (plVar4 == (long *)0x0) {
LAB_038e5718:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar3 = (**(code **)(*plVar4 + 0x178))
                      (plVar4,&local_28,param_1,*(undefined8 *)(*plVar4 + 0x180));
    if (((lVar3 == 0) && (lVar3 = FUN_0383a358(local_28,1,&local_50,0), lVar3 == 0)) &&
       (lVar3 = FUN_0383ab28(&local_50,1,&local_58,0), lVar3 == 0)) {
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar3 = *(long *)puVar1;
      }
      plVar4 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x80);
      if (plVar4 == (long *)0x0) goto LAB_038e5718;
      lVar3 = (**(code **)(*plVar4 + 0x228))
                        (plVar4,local_58,param_1,*(undefined8 *)(*plVar4 + 0x230));
      if (lVar3 == 0) {
        local_60 = local_58;
        uVar5 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_04230a80,&local_60);
        *param_5 = uVar5;
      }
    }
  }
  return lVar3;
}


