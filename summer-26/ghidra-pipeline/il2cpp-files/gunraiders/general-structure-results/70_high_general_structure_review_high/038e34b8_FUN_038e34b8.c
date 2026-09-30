/*
FUNCTION_NAME: FUN_038e34b8
ENTRY_POINT: 038e34b8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


long FUN_038e34b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 local_48;
  
  puVar1 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__;
  local_48 = param_2;
  if ((DAT_04539749 & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__);
    FUN_01c5d288(Method_System_Net_HttpWebRequest__ctor__);
    FUN_01c5d288(
                Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetAssociateMetadataTypeFromAttribute__
                );
    FUN_01c5d288(Method_System_Security_Cryptography_RSA_TryExportRSAPublicKey__);
    DAT_04539749 = 1;
  }
  *param_5 = 0;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar3 = *(long *)puVar1;
  }
  plVar4 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x98);
  if (plVar4 != (long *)0x0) {
    lVar3 = (**(code **)(*plVar4 + 0x178))
                      (plVar4,&local_48,param_1,*(undefined8 *)(*plVar4 + 0x180));
    if (lVar3 != 0) {
      return lVar3;
    }
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 != 0) {
      lVar5 = 4;
      do {
        uVar7 = (int)lVar5 - 4;
        if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar7) {
LAB_038e3654:
          uVar2 = local_48;
          lVar3 = thunk_FUN_01c496e0(*(undefined8 *)Method_System_Net_HttpWebRequest__ctor__);
          FUN_037f036c(lVar3,*(undefined8 *)
                              Method_System_Security_Cryptography_RSA_TryExportRSAPublicKey__,uVar2,
                       0);
          return lVar3;
        }
        if (*(uint *)(lVar3 + 0x18) <= uVar7) {
LAB_038e36a0:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        lVar3 = *(long *)(lVar3 + lVar5 * 8);
        if ((lVar3 == 0) || (plVar4 = *(long **)(lVar3 + 0x68), plVar4 == (long *)0x0)) break;
        lVar3 = (**(code **)(*plVar4 + 0x238))
                          (plVar4,local_48,param_3,param_4,param_5,*(undefined8 *)(*plVar4 + 0x240))
        ;
        if (lVar3 == 0) {
          lVar3 = *(long *)(param_1 + 0x38);
          if (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_038e36a0;
            lVar3 = *(long *)(lVar3 + lVar5 * 8);
            if (lVar3 == 0) goto LAB_038e3654;
            lVar6 = *param_5;
            lVar5 = thunk_FUN_01c496e0(*(undefined8 *)
                                        Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetAssociateMetadataTypeFromAttribute__
                                      );
            FUN_03313b6c(lVar5,0);
            *(long *)(lVar5 + 0x10) = lVar3;
            *(long *)(lVar5 + 0x18) = lVar6;
            *param_5 = lVar5;
            lVar3 = *(long *)puVar1;
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
              lVar3 = *(long *)puVar1;
            }
            plVar4 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x98);
            if (plVar4 != (long *)0x0) {
              lVar3 = (**(code **)(*plVar4 + 0x188))
                                (plVar4,*param_5,param_1,*(undefined8 *)(*plVar4 + 400));
              return lVar3;
            }
          }
          break;
        }
        lVar3 = *(long *)(param_1 + 0x38);
        lVar5 = lVar5 + 1;
      } while (lVar3 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


