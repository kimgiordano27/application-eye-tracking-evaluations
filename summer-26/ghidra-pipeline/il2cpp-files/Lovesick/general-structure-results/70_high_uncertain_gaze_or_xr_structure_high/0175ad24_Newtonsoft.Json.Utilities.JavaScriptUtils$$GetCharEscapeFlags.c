/*
FUNCTION_NAME: Newtonsoft.Json.Utilities.JavaScriptUtils$$GetCharEscapeFlags
ENTRY_POINT: 0175ad24
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_1;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


void Newtonsoft_Json_Utilities_JavaScriptUtils__GetCharEscapeFlags(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
                    /* try { // try from 0175ad24 to 0185ad2b has its CatchHandler @ 0175ad2c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0175ad0c with catch @ 0175ad2c
                       catch(type#2 @ 00000000) { ... } // from try @ 0175ad24 with catch @ 0175ad2c
                        */
  *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x20) = param_1;
  plVar3 = (long *)FUN_00da4fb8(*unaff_x19,7);
  puVar1 = Method_Newtonsoft_Json_Bson_BsonWriter_WriteComment__;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((*(long *)Method_Newtonsoft_Json_Bson_BsonWriter_WriteComment__ != 0) &&
     (lVar4 = thunk_FUN_00d6225c(*(long *)Method_Newtonsoft_Json_Bson_BsonWriter_WriteComment__,
                                 *(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_0175aecc:
    uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,0);
  }
  puVar2 = Method_System_DateTimeOffset_ValidateDate__;
  uVar6 = *(uint *)(plVar3 + 3);
  if (uVar6 != 0) {
    plVar3[4] = *(long *)puVar1;
                    /* try { // try from 0175ad7c to 0185ae83 has its CatchHandler @ 0175ad7c
                       catch() { ... } // from try @ 0175ad7c with catch @ 0175ad7c
                       catch() { ... } // from try @ 0175b2f8 with catch @ 0175ad7c
                       catch() { ... } // from try @ 0175b378 with catch @ 0175ad7c
                       catch() { ... } // from try @ 0175b3b0 with catch @ 0175ad7c
                       catch() { ... } // from try @ 0175b4c4 with catch @ 0175ad7c
                       catch() { ... } // from try @ 0175b580 with catch @ 0175ad7c
                       catch() { ... } // from try @ 0175b5dc with catch @ 0175ad7c */
    lVar4 = *(long *)puVar2;
    if (lVar4 != 0) {
      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar4 == 0) goto LAB_0175aecc;
      uVar6 = *(uint *)(plVar3 + 3);
    }
    puVar1 = UnityEngine_Rendering_Universal_ShadowSliceData___TypeInfo;
    if (1 < uVar6) {
      plVar3[5] = *(long *)puVar2;
      lVar4 = *(long *)puVar1;
      if (lVar4 != 0) {
        lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
        if (lVar4 == 0) goto LAB_0175aecc;
        uVar6 = *(uint *)(plVar3 + 3);
      }
      puVar2 = 
      Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__;
      if (2 < uVar6) {
        plVar3[6] = *(long *)puVar1;
        lVar4 = *(long *)puVar2;
        if (lVar4 != 0) {
          lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
          if (lVar4 == 0) goto LAB_0175aecc;
          uVar6 = *(uint *)(plVar3 + 3);
        }
        puVar1 = Method_UnityEngine_Mesh_SetListForChannel<Vector3>__;
        if (3 < uVar6) {
          plVar3[7] = *(long *)puVar2;
          lVar4 = *(long *)puVar1;
          if (lVar4 != 0) {
            lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
            if (lVar4 == 0) goto LAB_0175aecc;
            uVar6 = *(uint *)(plVar3 + 3);
          }
          puVar2 = 
          Field_<PrivateImplementationDetails>_8A0E648F758E0FC7AFC990F725E75075D192CF76D73C000CFCBAA51C386E06F2
          ;
          if (4 < uVar6) {
            plVar3[8] = *(long *)puVar1;
            lVar4 = *(long *)puVar2;
            if (lVar4 != 0) {
              lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
              if (lVar4 == 0) goto LAB_0175aecc;
              uVar6 = *(uint *)(plVar3 + 3);
            }
            puVar1 = UnityEngine_UI_ScrollRect_TypeInfo;
            if (5 < uVar6) {
              plVar3[9] = *(long *)puVar2;
              lVar4 = *(long *)puVar1;
              if (lVar4 != 0) {
                lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                if (lVar4 == 0) goto LAB_0175aecc;
                uVar6 = *(uint *)(plVar3 + 3);
              }
              if (6 < uVar6) {
                plVar3[10] = *(long *)puVar1;
                *(long **)(*(long *)(*unaff_x20 + 0xb8) + 0x28) = plVar3;
                return;
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


