/*
FUNCTION_NAME: FUN_01724c90
ENTRY_POINT: 01724c90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01724c90(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
  if ((DAT_03778a9d & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(System_Globalization_GregorianCalendar_var);
    thunk_FUN_00d48444(Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerComponent_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13536);
    thunk_FUN_00d48444(PTR_DAT_033ef240);
    thunk_FUN_00d48444(StringLiteral_8892);
    thunk_FUN_00d48444(Mono_Security_Authenticode_AuthenticodeDeformatter_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_6003);
    thunk_FUN_00d48444(Method_System_Xml_Schema_XsdBuilder_BuildSimpleType_Final__);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000940_PostfixBurstDelegate_var
                      );
    thunk_FUN_00d48444(PTR_DAT_033ed190);
                    /* try { // try from 01724d5c to 01824e13 has its CatchHandler @ 01724d5c
                       catch() { ... } // from try @ 01724d5c with catch @ 01724d5c
                       catch() { ... } // from try @ 01724ee0 with catch @ 01724d5c
                       catch() { ... } // from try @ 01724f98 with catch @ 01724d5c
                       catch() { ... } // from try @ 0172504c with catch @ 01724d5c */
    thunk_FUN_00d48444(Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetCameraDelegate_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_System_Nullable<short>_get_HasValue__);
    thunk_FUN_00d48444(Method_Oculus_Platform_Message<ShareMediaResult>_get_Data__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<string>_Contains__);
    thunk_FUN_00d48444(
                      Method_Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerComponent_DefaultCallbacks_Create__
                      );
    thunk_FUN_00d48444(Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Schema_Extensions_<>c__DisplayClass1_0_<IsValid>b__0__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__);
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_Transformers_IXRDropTransformer_TypeInfo);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Bson_BsonWriter_WriteComment__);
    DAT_03778a9d = 1;
  }
  lVar3 = FUN_00da4fb8(*(undefined8 *)puVar1,1);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined4 *)(lVar3 + 0x20) = 3;
      *(long *)(param_1 + 0x10) = lVar3;
      lVar3 = FUN_00da4fb8(*(undefined8 *)puVar1,1);
      if (lVar3 == 0) goto LAB_017251e0;
      if (*(int *)(lVar3 + 0x18) != 0) {
        *(undefined4 *)(lVar3 + 0x20) = 3;
        *(long *)(param_1 + 0x18) = lVar3;
        lVar3 = FUN_00da4fb8(*(undefined8 *)puVar1,1);
        puVar1 = StringLiteral_13536;
        if (lVar3 == 0) goto LAB_017251e0;
        if (*(int *)(lVar3 + 0x18) != 0) {
          *(undefined4 *)(lVar3 + 0x20) = 3;
          *(long *)(param_1 + 0x20) = lVar3;
          puVar2 = StringLiteral_6003;
          *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)puVar1;
          puVar1 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
          *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)puVar2;
          puVar2 = Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__;
          uVar7 = *(undefined8 *)puVar1;
          *(undefined8 *)(param_1 + 0x38) = uVar7;
          puVar1 = Method_System_Xml_Schema_XsdBuilder_BuildSimpleType_Final__;
          uVar8 = *(undefined8 *)puVar2;
          *(undefined8 *)(param_1 + 0x48) = uVar8;
          *(undefined8 *)(param_1 + 0x50) = uVar7;
          *(undefined8 *)(param_1 + 0x40) = uVar8;
          puVar2 = Method_System_Collections_Generic_HashSet<string>_Contains__;
          *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)puVar1;
          puVar1 = 
          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000940_PostfixBurstDelegate_var
          ;
          *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)puVar2;
          puVar2 = Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetCameraDelegate_TypeInfo;
          *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)puVar1;
          puVar1 = PTR_DAT_033ed190;
          uVar9 = *(undefined8 *)puVar2;
          *(undefined8 *)(param_1 + 0x88) = uVar8;
          *(undefined8 *)(param_1 + 0x78) = uVar9;
          *(undefined8 *)(param_1 + 0x80) = uVar7;
          puVar2 = System_Globalization_GregorianCalendar_var;
          *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)puVar1;
          puVar1 = PTR_DAT_033ea8a0;
          *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)puVar2;
          plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,10);
          puVar1 = Method_Newtonsoft_Json_Bson_BsonWriter_WriteComment__;
          if (plVar4 == (long *)0x0) goto LAB_017251e0;
          if ((*(long *)Method_Newtonsoft_Json_Bson_BsonWriter_WriteComment__ != 0) &&
             (lVar3 = thunk_FUN_00d6225c(*(long *)
                                          Method_Newtonsoft_Json_Bson_BsonWriter_WriteComment__,
                                         *(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0)) {
LAB_017251d4:
            uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar7,0);
          }
          puVar2 = Method_Newtonsoft_Json_Schema_Extensions_<>c__DisplayClass1_0_<IsValid>b__0__;
          uVar6 = *(uint *)(plVar4 + 3);
          if (uVar6 != 0) {
            plVar4[4] = *(long *)puVar1;
            lVar3 = *(long *)puVar2;
            if (lVar3 != 0) {
              lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
              if (lVar3 == 0) goto LAB_017251d4;
              uVar6 = *(uint *)(plVar4 + 3);
            }
            puVar1 = PTR_DAT_033ef240;
            if (1 < uVar6) {
              plVar4[5] = *(long *)puVar2;
              lVar3 = *(long *)puVar1;
              if (lVar3 != 0) {
                lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
                if (lVar3 == 0) goto LAB_017251d4;
                uVar6 = *(uint *)(plVar4 + 3);
              }
              puVar2 = Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerComponent_TypeInfo;
              if (2 < uVar6) {
                plVar4[6] = *(long *)puVar1;
                lVar3 = *(long *)puVar2;
                if (lVar3 != 0) {
                  lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
                  if (lVar3 == 0) goto LAB_017251d4;
                  uVar6 = *(uint *)(plVar4 + 3);
                }
                puVar1 = Method_Oculus_Platform_Message<ShareMediaResult>_get_Data__;
                if (3 < uVar6) {
                  plVar4[7] = *(long *)puVar2;
                  lVar3 = *(long *)puVar1;
                  if (lVar3 != 0) {
                    lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
                    if (lVar3 == 0) goto LAB_017251d4;
                    uVar6 = *(uint *)(plVar4 + 3);
                  }
                  puVar2 = 
                  UnityEngine_XR_Interaction_Toolkit_Transformers_IXRDropTransformer_TypeInfo;
                  if (4 < uVar6) {
                    plVar4[8] = *(long *)puVar1;
                    lVar3 = *(long *)puVar2;
                    if (lVar3 != 0) {
                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
                      if (lVar3 == 0) goto LAB_017251d4;
                      uVar6 = *(uint *)(plVar4 + 3);
                    }
                    puVar1 = Mono_Security_Authenticode_AuthenticodeDeformatter_TypeInfo;
                    if (5 < uVar6) {
                      plVar4[9] = *(long *)puVar2;
                      lVar3 = *(long *)puVar1;
                      if (lVar3 != 0) {
                        lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
                        if (lVar3 == 0) goto LAB_017251d4;
                        uVar6 = *(uint *)(plVar4 + 3);
                      }
                      puVar2 = Method_System_Nullable<short>_get_HasValue__;
                      if (6 < uVar6) {
                        plVar4[10] = *(long *)puVar1;
                        lVar3 = *(long *)puVar2;
                        if (lVar3 != 0) {
                          lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
                          if (lVar3 == 0) goto LAB_017251d4;
                          uVar6 = *(uint *)(plVar4 + 3);
                        }
                        puVar1 = 
                        Method_Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerComponent_DefaultCallbacks_Create__
                        ;
                        if (7 < uVar6) {
                          plVar4[0xb] = *(long *)puVar2;
                          lVar3 = *(long *)puVar1;
                          if (lVar3 != 0) {
                            lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
                            if (lVar3 == 0) goto LAB_017251d4;
                            uVar6 = *(uint *)(plVar4 + 3);
                          }
                          puVar2 = StringLiteral_8892;
                          if (8 < uVar6) {
                            plVar4[0xc] = *(long *)puVar1;
                            lVar3 = *(long *)puVar2;
                            if (lVar3 != 0) {
                              lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar4 + 0x40));
                              if (lVar3 == 0) goto LAB_017251d4;
                              uVar6 = *(uint *)(plVar4 + 3);
                            }
                            puVar1 = 
                            Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
                            uVar7 = DAT_02942680;
                            if (9 < uVar6) {
                              plVar4[0xd] = *(long *)puVar2;
                              *(long **)(param_1 + 0xa0) = plVar4;
                              *(undefined8 *)(param_1 + 0xac) = 0x200000002;
                              *(undefined4 *)(param_1 + 0xbc) = 1;
                              *(undefined8 *)(param_1 + 200) = uVar7;
                              *(undefined2 *)(param_1 + 0xd3) = 0x101;
                              FUN_017b46ec(param_1,0);
                              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              if (DAT_03778a3f == '\0') {
                                thunk_FUN_00d48444(
                                                  Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__
                                                  );
                                DAT_03778a3f = '\x01';
                              }
                              lVar3 = *(long *)puVar1;
                              if (*(int *)(lVar3 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                                lVar3 = *(long *)puVar1;
                              }
                              if (**(char **)(lVar3 + 0xb8) == '\0') {
                                if (param_2 == 0) {
                                  return;
                                }
                                FUN_01725270(param_2,param_1);
                                uVar5 = FUN_015ff8a0(*(undefined8 *)(param_2 + 0x58),0);
                                if ((uVar5 & 1) == 0) {
                                  return;
                                }
                              }
                              *(undefined1 *)(param_1 + 0xd2) = 1;
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_017251e0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


