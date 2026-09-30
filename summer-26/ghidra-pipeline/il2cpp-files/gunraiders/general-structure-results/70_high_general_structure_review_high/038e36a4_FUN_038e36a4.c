/*
FUNCTION_NAME: FUN_038e36a4
ENTRY_POINT: 038e36a4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


long FUN_038e36a4(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 uVar9;
  long *local_58;
  long local_48;
  
  if ((DAT_0453974a & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__);
    FUN_01c5d288(PTR_DAT_0422fbe0);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(Method_System_Net_HttpWebRequest__ctor__);
    FUN_01c5d288(
                Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetAssociateMetadataTypeFromAttribute__
                );
    FUN_01c5d288(Method_System_Security_Cryptography_RSA_TryExportRSAPublicKey__);
    DAT_0453974a = 1;
  }
  puVar1 = PTR_DAT_0422fc38;
  local_48 = 0;
  local_58 = (long *)0x0;
  if (param_2 == (long *)0x0) {
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar9 = thunk_FUN_01c496e0();
    uVar7 = thunk_FUN_01c273e8(PTR_DAT_0422fa28);
    FUN_0323fc78(uVar9,uVar7,0);
    uVar7 = thunk_FUN_01c273e8(Method_System_Security_Cryptography_RSA_TrySignData__);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar9,uVar7);
  }
  *param_5 = 0;
  if (*param_2 == *(long *)puVar1) {
    lVar5 = (**(code **)(*param_1 + 0x238))
                      (param_1,param_2,param_3,param_4,param_5,*(undefined8 *)(*param_1 + 0x240));
    return lVar5;
  }
  local_48 = 0;
  lVar5 = param_1[7];
  if (lVar5 != 0) {
    lVar6 = 4;
    do {
      uVar8 = (int)lVar6 - 4;
      if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar8) {
        uVar9 = 0;
LAB_038e3814:
        if (local_48 == 0) {
          uVar9 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
          lVar5 = thunk_FUN_01c496e0(*(undefined8 *)Method_System_Net_HttpWebRequest__ctor__);
          FUN_037f036c(lVar5,*(undefined8 *)
                              Method_System_Security_Cryptography_RSA_TryExportRSAPublicKey__,uVar9,
                       0);
          return lVar5;
        }
        uVar4 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
        if ((uVar4 & 1) != 0) {
          plVar3 = (long *)(**(code **)(*param_1 + 0x1f8))
                                     (param_1,*(undefined8 *)(*param_1 + 0x200));
          lVar5 = local_48;
          uVar7 = *(undefined8 *)PTR_DAT_0422fbe0;
          if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar7 = FUN_032e04b8(uVar7,0);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          plVar3 = (long *)(**(code **)(*plVar3 + 0x508))
                                     (plVar3,lVar5,uVar7,param_4,*(undefined8 *)(*plVar3 + 0x510));
          puVar2 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__;
          if ((plVar3 != (long *)0x0) && (*plVar3 != *(long *)puVar1)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748();
          }
          lVar5 = *(long *)
                   Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__;
          local_58 = plVar3;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(lVar5);
            lVar5 = *(long *)puVar2;
          }
          plVar3 = *(long **)(*(long *)(lVar5 + 0xb8) + 0x98);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar5 = (**(code **)(*plVar3 + 0x178))
                            (plVar3,&local_58,param_1,*(undefined8 *)(*plVar3 + 0x180));
          if (lVar5 != 0) {
            return lVar5;
          }
        }
        lVar5 = local_48;
        lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                    Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetAssociateMetadataTypeFromAttribute__
                                  );
        FUN_03313b6c(lVar6,0);
        *(undefined8 *)(lVar6 + 0x10) = uVar9;
        *(long *)(lVar6 + 0x18) = lVar5;
        *param_5 = lVar6;
        uVar4 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
        puVar1 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__;
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        lVar5 = *(long *)
                 Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar5 = *(long *)puVar1;
        }
        plVar3 = *(long **)(*(long *)(lVar5 + 0xb8) + 0x98);
        if (plVar3 != (long *)0x0) {
          lVar5 = (**(code **)(*plVar3 + 0x188))
                            (plVar3,*param_5,param_1,*(undefined8 *)(*plVar3 + 400));
          return lVar5;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar8) {
LAB_038e39e8:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      lVar5 = *(long *)(lVar5 + lVar6 * 8);
      if ((lVar5 == 0) || (plVar3 = *(long **)(lVar5 + 0x68), plVar3 == (long *)0x0)) break;
      lVar5 = (**(code **)(*plVar3 + 0x248))
                        (plVar3,param_2,param_3,param_4,&local_48,*(undefined8 *)(*plVar3 + 0x250));
      if (lVar5 == 0) {
        lVar5 = param_1[7];
        if (lVar5 != 0) {
          if (uVar8 < *(uint *)(lVar5 + 0x18)) {
            uVar9 = *(undefined8 *)(lVar5 + lVar6 * 8);
            goto LAB_038e3814;
          }
          goto LAB_038e39e8;
        }
        break;
      }
      lVar5 = param_1[7];
      lVar6 = lVar6 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


