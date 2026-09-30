/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ReadNullCharAsync>d__34$$MoveNext
ENTRY_POINT: 01724e34
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonTextReader_<ReadNullCharAsync>d__34__MoveNext(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x19;
  long unaff_x20;
  
  puVar1 = StringLiteral_13536;
  *(undefined4 *)(param_1 + 0x20) = 3;
  *(long *)(unaff_x19 + 0x20) = param_1;
  puVar2 = StringLiteral_6003;
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)puVar1;
  puVar1 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
                    /* try { // try from 01724e70 to 01824e9b has its CatchHandler @ 01724fb0 */
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)puVar2;
  puVar2 = Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__;
  uVar7 = *(undefined8 *)puVar1;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar7;
  puVar1 = Method_System_Xml_Schema_XsdBuilder_BuildSimpleType_Final__;
  uVar8 = *(undefined8 *)puVar2;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar8;
  *(undefined8 *)(unaff_x19 + 0x50) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar8;
  puVar2 = Method_System_Collections_Generic_HashSet<string>_Contains__;
  *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)puVar1;
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_00000940_PostfixBurstDelegate_var
  ;
  *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)puVar2;
  puVar2 = Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetCameraDelegate_TypeInfo;
  *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)puVar1;
  puVar1 = PTR_DAT_033ed190;
  uVar9 = *(undefined8 *)puVar2;
  *(undefined8 *)(unaff_x19 + 0x88) = uVar8;
  *(undefined8 *)(unaff_x19 + 0x78) = uVar9;
  *(undefined8 *)(unaff_x19 + 0x80) = uVar7;
  puVar2 = System_Globalization_GregorianCalendar_var;
                    /* try { // try from 01724ed4 to 01824edf has its CatchHandler @ 01724fac */
                    /* try { // try from 01724ee0 to 01824f87 has its CatchHandler @ 01724d5c */
  *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)puVar1;
  puVar1 = PTR_DAT_033ea8a0;
  *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)puVar2;
  plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,10);
  puVar1 = Method_Newtonsoft_Json_Bson_BsonWriter_WriteComment__;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((*(long *)Method_Newtonsoft_Json_Bson_BsonWriter_WriteComment__ != 0) &&
     (lVar4 = thunk_FUN_00d6225c(*(long *)Method_Newtonsoft_Json_Bson_BsonWriter_WriteComment__,
                                 *(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_017251d4:
    uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar7,0);
  }
  puVar2 = Method_Newtonsoft_Json_Schema_Extensions_<>c__DisplayClass1_0_<IsValid>b__0__;
  uVar6 = *(uint *)(plVar3 + 3);
  if (uVar6 != 0) {
    plVar3[4] = *(long *)puVar1;
    lVar4 = *(long *)puVar2;
    if (lVar4 != 0) {
      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar4 == 0) goto LAB_017251d4;
      uVar6 = *(uint *)(plVar3 + 3);
    }
    puVar1 = PTR_DAT_033ef240;
    if (1 < uVar6) {
      plVar3[5] = *(long *)puVar2;
      lVar4 = *(long *)puVar1;
      if (lVar4 != 0) {
        lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
        if (lVar4 == 0) goto LAB_017251d4;
                    /* try { // try from 01724f88 to 01824f8f has its CatchHandler @ 01724fa8 */
        uVar6 = *(uint *)(plVar3 + 3);
      }
      puVar2 = Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerComponent_TypeInfo;
                    /* try { // try from 01724f90 to 01824f93 has its CatchHandler @ 01724fa4 */
      if (2 < uVar6) {
                    /* try { // try from 01724f94 to 01824f97 has its CatchHandler @ 01724fa0 */
                    /* try { // try from 01724f98 to 01824fcb has its CatchHandler @ 01724d5c */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01724f94 with catch @ 01724fa0
                        */
        plVar3[6] = *(long *)puVar1;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01724f90 with catch @ 01724fa4
                        */
        lVar4 = *(long *)puVar2;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01724f88 with catch @ 01724fa8
                        */
        if (lVar4 != 0) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01724ed4 with catch @ 01724fac
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01724e70 with catch @ 01724fb0
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01724e14 with catch @ 01724fb4
                        */
          lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
          if (lVar4 == 0) goto LAB_017251d4;
          uVar6 = *(uint *)(plVar3 + 3);
        }
        puVar1 = Method_Oculus_Platform_Message<ShareMediaResult>_get_Data__;
        if (3 < uVar6) {
                    /* try { // try from 01724fcc to 01824fcf has its CatchHandler @ 01725060 */
          plVar3[7] = *(long *)puVar2;
          lVar4 = *(long *)puVar1;
          if (lVar4 != 0) {
                    /* try { // try from 01724fe4 to 0182504b has its CatchHandler @ 01725068 */
            lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
            if (lVar4 == 0) goto LAB_017251d4;
            uVar6 = *(uint *)(plVar3 + 3);
          }
          puVar2 = UnityEngine_XR_Interaction_Toolkit_Transformers_IXRDropTransformer_TypeInfo;
          if (4 < uVar6) {
            plVar3[8] = *(long *)puVar1;
            lVar4 = *(long *)puVar2;
            if (lVar4 != 0) {
              lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
              if (lVar4 == 0) goto LAB_017251d4;
              uVar6 = *(uint *)(plVar3 + 3);
            }
            puVar1 = Mono_Security_Authenticode_AuthenticodeDeformatter_TypeInfo;
            if (5 < uVar6) {
              plVar3[9] = *(long *)puVar2;
              lVar4 = *(long *)puVar1;
              if (lVar4 != 0) {
                    /* try { // try from 0172504c to 01825057 has its CatchHandler @ 01724d5c */
                lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                if (lVar4 == 0) goto LAB_017251d4;
                    /* try { // try from 01725058 to 0182505f has its CatchHandler @ 01725068 */
                uVar6 = *(uint *)(plVar3 + 3);
              }
              puVar2 = Method_System_Nullable<short>_get_HasValue__;
                    /* catch() { ... } // from try @ 01724fcc with catch @ 01725060 */
              if (6 < uVar6) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01724fe4 with catch @ 01725068
                       catch(type#2 @ 00000000) { ... } // from try @ 01725058 with catch @ 01725068
                        */
                plVar3[10] = *(long *)puVar1;
                lVar4 = *(long *)puVar2;
                if (lVar4 != 0) {
                  lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                  if (lVar4 == 0) goto LAB_017251d4;
                  uVar6 = *(uint *)(plVar3 + 3);
                }
                puVar1 = 
                Method_Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerComponent_DefaultCallbacks_Create__
                ;
                if (7 < uVar6) {
                  plVar3[0xb] = *(long *)puVar2;
                  lVar4 = *(long *)puVar1;
                  if (lVar4 != 0) {
                    lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                    if (lVar4 == 0) goto LAB_017251d4;
                    uVar6 = *(uint *)(plVar3 + 3);
                  }
                  puVar2 = StringLiteral_8892;
                  if (8 < uVar6) {
                    plVar3[0xc] = *(long *)puVar1;
                    lVar4 = *(long *)puVar2;
                    if (lVar4 != 0) {
                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                      if (lVar4 == 0) goto LAB_017251d4;
                      uVar6 = *(uint *)(plVar3 + 3);
                    }
                    puVar1 = Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
                    uVar7 = DAT_02942680;
                    if (9 < uVar6) {
                      plVar3[0xd] = *(long *)puVar2;
                      *(long **)(unaff_x19 + 0xa0) = plVar3;
                      *(undefined8 *)(unaff_x19 + 0xac) = 0x200000002;
                      *(undefined4 *)(unaff_x19 + 0xbc) = 1;
                      *(undefined8 *)(unaff_x19 + 200) = uVar7;
                      *(undefined2 *)(unaff_x19 + 0xd3) = 0x101;
                      FUN_017b46ec();
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      if (DAT_03778a3f == '\0') {
                        thunk_FUN_00d48444(
                                          Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__
                                          );
                        DAT_03778a3f = '\x01';
                      }
                      lVar4 = *(long *)puVar1;
                      if (*(int *)(lVar4 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar4 = *(long *)puVar1;
                      }
                      if (**(char **)(lVar4 + 0xb8) == '\0') {
                        if (unaff_x20 == 0) {
                          return;
                        }
                        FUN_01725270();
                        uVar5 = FUN_015ff8a0(*(undefined8 *)(unaff_x20 + 0x58),0);
                        if ((uVar5 & 1) == 0) {
                          return;
                        }
                      }
                      *(undefined1 *)(unaff_x19 + 0xd2) = 1;
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
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


