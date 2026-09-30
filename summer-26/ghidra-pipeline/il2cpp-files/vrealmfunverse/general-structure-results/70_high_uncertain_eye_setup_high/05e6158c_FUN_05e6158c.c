/*
FUNCTION_NAME: FUN_05e6158c
ENTRY_POINT: 05e6158c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05e6158c(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 local_70 [16];
  
  if ((DAT_066dc653 & 1) == 0) {
    FUN_02b3c81c(
                Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetExtensionDataMemberForType>b__44_1__
                );
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponent<GrabbableChild>__);
    FUN_02b3c81c(
                Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_0__
                );
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_74__);
    FUN_02b3c81c(PTR_DAT_06312ff0);
    FUN_02b3c81c(
                Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
                );
    DAT_066dc653 = 1;
  }
  puVar3 = 
  Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
  ;
  puVar2 = 
  Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_0__
  ;
  local_70 = ZEXT816(0);
  if ((param_2 != 0) && (iVar1 = *(int *)(param_2 + 0x18), 0 < iVar1)) {
    iVar8 = 0;
    puVar7 = (undefined8 *)Method_UnityEngine_Component_GetComponent<GrabbableChild>__;
    do {
      auVar10 = FUN_0365cfb4(param_2,iVar8,*(undefined8 *)puVar2);
      local_70 = auVar10;
      iVar4 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                        (local_70,*(undefined8 *)puVar3);
      if (iVar4 != 0) {
        if ((param_4 == 0) || (lVar5 = FUN_037a6268(param_4,iVar8,*puVar7), lVar5 == 0))
        goto LAB_05e617dc;
        iVar4 = FUN_05c6927c(lVar5,0);
        uVar6 = FUN_037a6268(param_4,iVar8,*puVar7);
        auVar10 = FUN_0365cfb4(param_2,iVar8,*(undefined8 *)puVar2);
        if (iVar4 == 1) {
          if (param_3 == 0) {
LAB_05e617dc:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          auVar11 = FUN_0365a6d4(param_3,iVar8,
                                 *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_74__);
          if (param_6 == 0) goto LAB_05e617dc;
          uVar9 = FUN_038261a8(param_6,iVar8,*(undefined8 *)PTR_DAT_06312ff0);
          FUN_05e617e0(uVar9,0,param_1,uVar6,auVar10._0_8_,auVar10._8_8_,auVar11._0_8_,auVar11._8_8_
                       ,1,0);
          puVar7 = (undefined8 *)Method_UnityEngine_Component_GetComponent<GrabbableChild>__;
        }
        else {
          if (param_3 == 0) goto LAB_05e617dc;
          auVar11 = FUN_0365a6d4(param_3,iVar8,
                                 *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_74__);
          FUN_05e617e0(0,0,param_1,uVar6,auVar10._0_8_,auVar10._8_8_,auVar11._0_8_,auVar11._8_8_,0,1
                      );
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
  }
  return;
}


