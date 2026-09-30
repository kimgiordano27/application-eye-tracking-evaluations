/*
FUNCTION_NAME: FUN_01935274
ENTRY_POINT: 01935274
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_gaze_retrieval_or_extraction
*/


void FUN_01935274(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  
  puVar3 = OVRPlugin_OVRP_1_79_0_TypeInfo;
  if ((DAT_0377a11a & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_79_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_645);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_fsDirectConverter>_get_Item__
                      );
                    /* try { // try from 019352c0 to 01a352ef has its CatchHandler @ 01935e10 */
    thunk_FUN_00d48444(Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerComponent_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ef240);
    thunk_FUN_00d48444(StringLiteral_8892);
    thunk_FUN_00d48444(Mono_Security_Authenticode_AuthenticodeDeformatter_TypeInfo);
    thunk_FUN_00d48444(Method_System_Nullable<short>_get_HasValue__);
    thunk_FUN_00d48444(Method_Oculus_Platform_Message<ShareMediaResult>_get_Data__);
    thunk_FUN_00d48444(PTR_DAT_033ed648);
    thunk_FUN_00d48444(StringLiteral_1335);
    thunk_FUN_00d48444(
                      Method_Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerComponent_DefaultCallbacks_Create__
                      );
    thunk_FUN_00d48444(System_Xml_XmlNamespaceManager_TypeInfo);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_All<__Il2CppFullySharedGenericType>__);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Schema_Extensions_<>c__DisplayClass1_0_<IsValid>b__0__
                      );
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_Transformers_IXRDropTransformer_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<MedleyBossProjectileSpawnPoint>_TypeInfo);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Bson_BsonWriter_WriteComment__);
    DAT_0377a11a = 1;
  }
  lVar4 = FUN_00da4fb8(*(undefined8 *)puVar3,0x1a);
  if (lVar4 != 0) {
    uVar7 = *(uint *)(lVar4 + 0x18);
    if ((((((((((uVar7 != 0) && (*(undefined4 *)(lVar4 + 0x20) = 0xffffa3f0, uVar7 != 1)) &&
              (*(undefined4 *)(lVar4 + 0x24) = 0xffdc7500, 2 < uVar7)) &&
             ((*(undefined4 *)(lVar4 + 0x28) = 0xff003f99, uVar7 != 3 &&
              (*(undefined4 *)(lVar4 + 0x2c) = 0xff5c004c, 4 < uVar7)))) &&
            (*(undefined4 *)(lVar4 + 0x30) = 0xff191919, uVar7 != 5)) &&
           (((*(undefined4 *)(lVar4 + 0x34) = 0xff315c00, 6 < uVar7 &&
             (*(undefined4 *)(lVar4 + 0x38) = 0xff48ce2b, uVar7 != 7)) &&
            ((*(undefined4 *)(lVar4 + 0x3c) = 0xff99ccff, 8 < uVar7 &&
             (((*(undefined4 *)(lVar4 + 0x40) = 0xff808080, uVar7 != 9 &&
               (*(undefined4 *)(lVar4 + 0x44) = 0xffb5ff94, 10 < uVar7)) &&
              (*(undefined4 *)(lVar4 + 0x48) = 0xff007c8f, uVar7 != 0xb)))))))) &&
          ((*(undefined4 *)(lVar4 + 0x4c) = 0xff00cc9d, 0xc < uVar7 &&
           (*(undefined4 *)(lVar4 + 0x50) = 0xff8800c2, uVar7 != 0xd)))) &&
         ((*(undefined4 *)(lVar4 + 0x54) = 0xff803300, 0xe < uVar7 &&
          (((*(undefined4 *)(lVar4 + 0x58) = 0xff05a4ff, uVar7 != 0xf &&
            (*(undefined4 *)(lVar4 + 0x5c) = 0xffbba8ff, 0x10 < uVar7)) &&
           ((*(undefined4 *)(lVar4 + 0x60) = 0xff006642, uVar7 != 0x11 &&
            (((*(undefined4 *)(lVar4 + 100) = 0xff1000ff, 0x12 < uVar7 &&
              (*(undefined4 *)(lVar4 + 0x68) = 0xfff2f15e, uVar7 != 0x13)) &&
             (*(undefined4 *)(lVar4 + 0x6c) = 0xff8f9900, 0x14 < uVar7)))))))))) &&
        (((*(undefined4 *)(lVar4 + 0x70) = 0xff66ffe0, uVar7 != 0x15 &&
          (*(undefined4 *)(lVar4 + 0x74) = 0xffff0a74, 0x16 < uVar7)) &&
         (*(undefined4 *)(lVar4 + 0x78) = 0xff000099, uVar7 != 0x17)))) &&
       ((*(undefined4 *)(lVar4 + 0x7c) = 0xff80ffff, 0x18 < uVar7 &&
        (*(undefined4 *)(lVar4 + 0x80) = 0xff00ffff, puVar3 = StringLiteral_645, uVar7 != 0x19)))) {
      *(undefined4 *)(lVar4 + 0x84) = 0xff0550ff;
      puVar1 = PTR_DAT_033ea8a0;
      **(long **)(*(long *)puVar3 + 0xb8) = lVar4;
      plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,0x10);
      puVar1 = Method_Newtonsoft_Json_Bson_BsonWriter_WriteComment__;
      if (plVar5 == (long *)0x0) goto LAB_01935918;
      if ((*(long *)Method_Newtonsoft_Json_Bson_BsonWriter_WriteComment__ != 0) &&
         (lVar4 = thunk_FUN_00d6225c(*(long *)Method_Newtonsoft_Json_Bson_BsonWriter_WriteComment__,
                                     *(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0)) {
LAB_0193590c:
        uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar6,0);
      }
      puVar2 = Method_Newtonsoft_Json_Schema_Extensions_<>c__DisplayClass1_0_<IsValid>b__0__;
      uVar7 = *(uint *)(plVar5 + 3);
      if (uVar7 != 0) {
        plVar5[4] = *(long *)puVar1;
        lVar4 = *(long *)puVar2;
        if (lVar4 != 0) {
          lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
          if (lVar4 == 0) goto LAB_0193590c;
          uVar7 = *(uint *)(plVar5 + 3);
        }
        puVar1 = PTR_DAT_033ef240;
        if (1 < uVar7) {
          plVar5[5] = *(long *)puVar2;
          lVar4 = *(long *)puVar1;
          if (lVar4 != 0) {
            lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
            if (lVar4 == 0) goto LAB_0193590c;
            uVar7 = *(uint *)(plVar5 + 3);
          }
          puVar2 = Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerComponent_TypeInfo;
          if (2 < uVar7) {
            plVar5[6] = *(long *)puVar1;
            lVar4 = *(long *)puVar2;
            if (lVar4 != 0) {
              lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
              if (lVar4 == 0) goto LAB_0193590c;
              uVar7 = *(uint *)(plVar5 + 3);
            }
            puVar1 = Method_Oculus_Platform_Message<ShareMediaResult>_get_Data__;
            if (3 < uVar7) {
              plVar5[7] = *(long *)puVar2;
              lVar4 = *(long *)puVar1;
              if (lVar4 != 0) {
                lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                if (lVar4 == 0) goto LAB_0193590c;
                uVar7 = *(uint *)(plVar5 + 3);
              }
              puVar2 = UnityEngine_XR_Interaction_Toolkit_Transformers_IXRDropTransformer_TypeInfo;
              if (4 < uVar7) {
                plVar5[8] = *(long *)puVar1;
                lVar4 = *(long *)puVar2;
                if (lVar4 != 0) {
                  lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                  if (lVar4 == 0) goto LAB_0193590c;
                  uVar7 = *(uint *)(plVar5 + 3);
                }
                puVar1 = Mono_Security_Authenticode_AuthenticodeDeformatter_TypeInfo;
                if (5 < uVar7) {
                  plVar5[9] = *(long *)puVar2;
                  lVar4 = *(long *)puVar1;
                  if (lVar4 != 0) {
                    lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                    if (lVar4 == 0) goto LAB_0193590c;
                    uVar7 = *(uint *)(plVar5 + 3);
                  }
                  puVar2 = Method_System_Nullable<short>_get_HasValue__;
                  if (6 < uVar7) {
                    plVar5[10] = *(long *)puVar1;
                    lVar4 = *(long *)puVar2;
                    if (lVar4 != 0) {
                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                      if (lVar4 == 0) goto LAB_0193590c;
                      uVar7 = *(uint *)(plVar5 + 3);
                    }
                    puVar1 = 
                    Method_Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerComponent_DefaultCallbacks_Create__
                    ;
                    if (7 < uVar7) {
                      plVar5[0xb] = *(long *)puVar2;
                      lVar4 = *(long *)puVar1;
                      if (lVar4 != 0) {
                        lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                        if (lVar4 == 0) goto LAB_0193590c;
                        uVar7 = *(uint *)(plVar5 + 3);
                      }
                      puVar2 = StringLiteral_8892;
                      if (8 < uVar7) {
                        plVar5[0xc] = *(long *)puVar1;
                        lVar4 = *(long *)puVar2;
                        if (lVar4 != 0) {
                          lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                          if (lVar4 == 0) goto LAB_0193590c;
                          uVar7 = *(uint *)(plVar5 + 3);
                        }
                        puVar1 = StringLiteral_1335;
                        if (9 < uVar7) {
                          plVar5[0xd] = *(long *)puVar2;
                          lVar4 = *(long *)puVar1;
                          if (lVar4 != 0) {
                            lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                            if (lVar4 == 0) goto LAB_0193590c;
                            uVar7 = *(uint *)(plVar5 + 3);
                          }
                          puVar2 = PTR_DAT_033ed648;
                          if (10 < uVar7) {
                            plVar5[0xe] = *(long *)puVar1;
                            lVar4 = *(long *)puVar2;
                            if (lVar4 != 0) {
                              lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                              if (lVar4 == 0) goto LAB_0193590c;
                              uVar7 = *(uint *)(plVar5 + 3);
                            }
                            puVar1 = System_Xml_XmlNamespaceManager_TypeInfo;
                            if (0xb < uVar7) {
                              plVar5[0xf] = *(long *)puVar2;
                              lVar4 = *(long *)puVar1;
                              if (lVar4 != 0) {
                                lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                                if (lVar4 == 0) goto LAB_0193590c;
                                uVar7 = *(uint *)(plVar5 + 3);
                              }
                              puVar2 = 
                              Method_System_Collections_Generic_Dictionary<Type,_fsDirectConverter>_get_Item__
                              ;
                              if (0xc < uVar7) {
                                plVar5[0x10] = *(long *)puVar1;
                                lVar4 = *(long *)puVar2;
                                if (lVar4 != 0) {
                                  lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                                  if (lVar4 == 0) goto LAB_0193590c;
                                  uVar7 = *(uint *)(plVar5 + 3);
                                }
                                puVar1 = 
                                Method_System_Linq_Enumerable_All<__Il2CppFullySharedGenericType>__;
                                if (0xd < uVar7) {
                                  plVar5[0x11] = *(long *)puVar2;
                                  lVar4 = *(long *)puVar1;
                                  if (lVar4 != 0) {
                                    lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar5 + 0x40)
                                                              );
                                    if (lVar4 == 0) goto LAB_0193590c;
                                    uVar7 = *(uint *)(plVar5 + 3);
                                  }
                                  puVar2 = 
                                  System_Collections_Generic_List<MedleyBossProjectileSpawnPoint>_TypeInfo
                                  ;
                                  if (0xe < uVar7) {
                                    plVar5[0x12] = *(long *)puVar1;
                                    lVar4 = *(long *)puVar2;
                                    if (lVar4 != 0) {
                                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)
                                                                        (*plVar5 + 0x40));
                                      if (lVar4 == 0) goto LAB_0193590c;
                                      uVar7 = *(uint *)(plVar5 + 3);
                                    }
                                    if (0xf < uVar7) {
                                      plVar5[0x13] = *(long *)puVar2;
                                      *(long **)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = plVar5;
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
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_01935918:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


