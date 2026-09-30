/*
FUNCTION_NAME: FUN_01154d60
ENTRY_POINT: 01154d60
PROGRAM: Lovesick-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;functionality_gaze_retrieval_or_extraction
*/


undefined8 FUN_01154d60(long param_1,int param_2,uint param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_40;
  uint local_38;
  int iStack_34;
  
  local_38 = param_3;
  iStack_34 = param_2;
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_00d48444(StringLiteral_5238);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_00d59478(param_4);
    }
  }
  local_40 = 0;
  if (param_1 == 0) {
                    /* try { // try from 01154ebc to 01254ec7 has its CatchHandler @ 01154610 */
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar5 = thunk_FUN_00d62348();
                    /* try { // try from 01154ec8 to 01254ecf has its CatchHandler @ 01154ed8 */
    FUN_00ac2be8();
                    /* catch() { ... } // from try @ 01154e44 with catch @ 01154ed0 */
    uVar8 = thunk_FUN_00d48444(System_Collections_Generic_Dictionary<BodyJointId,_Pose>_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01154e54 with catch @ 01154ed8
                       catch(type#2 @ 00000000) { ... } // from try @ 01154ec8 with catch @ 01154ed8
                        */
    FUN_016ec5b8(uVar5,uVar8,0);
  }
  else {
    if (param_2 < 1) {
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      uVar5 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar3 = Obi_ObiList<ObiList<ObiPathFrame>>_TypeInfo;
    }
    else {
      if (-1 < (int)param_3) {
        uVar8 = **(undefined8 **)(param_4 + 0x38);
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_01780344(uVar8,0);
                    /* try { // try from 01154e08 to 01254e0f has its CatchHandler @ 01154e20 */
        if (*(int *)(*(long *)StringLiteral_5238 + 0xe0) == 0) {
                    /* try { // try from 01154e10 to 01254e13 has its CatchHandler @ 01154e1c */
          thunk_FUN_00d32864(*(long *)StringLiteral_5238);
        }
                    /* try { // try from 01154e14 to 01254e43 has its CatchHandler @ 01154610 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01154e10 with catch @ 01154e1c
                        */
        iVar2 = thunk_FUN_00d366d8(uVar8,0);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01154e08 with catch @ 01154e20
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 011547f0 with catch @ 01154e24
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01154794 with catch @ 01154e28
                        */
        if ((param_3 & 7) == 0) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0115484c with catch @ 01154e2c
                        */
          local_40._4_4_ = iVar2;
          if ((int)(param_2 + param_3) < *(int *)(param_1 + 0x18)) {
            iVar1 = 0;
            if (iVar2 != 0) {
              iVar1 = (int)(param_2 - param_3) / iVar2;
            }
                    /* try { // try from 01154e44 to 01254e47 has its CatchHandler @ 01154ed0 */
            if (param_2 - param_3 == iVar1 * iVar2) {
                    /* try { // try from 01154e54 to 01254ebb has its CatchHandler @ 01154ed8 */
              iVar1 = 0;
              if (iVar2 != 0) {
                iVar1 = (int)(*(int *)(param_1 + 0x18) - param_3) / iVar2;
              }
              lVar7 = *(long *)(*(long *)(param_4 + 0x38) + 8);
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                lVar7 = FUN_00d5941c(lVar7);
              }
              uVar8 = FUN_00da4fb8(lVar7,iVar1);
              FUN_01c6fa20(param_1,uVar8,param_2,param_3,0,0);
              return uVar8;
            }
            uVar8 = thunk_FUN_00d48444(PTR_DAT_033ea8a0);
            uVar5 = FUN_00da4fb8(uVar8,0xd);
            FUN_00ac2be8();
            puVar3 = Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>_Add__
            ;
            uVar8 = thunk_FUN_00d48444(
                                      Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>_Add__
                                      );
            FUN_00acb0b4(uVar5,uVar8);
            uVar8 = thunk_FUN_00d48444(puVar3);
            FUN_00acb320(uVar5,0,uVar8);
            FUN_00ac2be8(param_1);
            local_40._0_4_ = (undefined4)*(undefined8 *)(param_1 + 0x18);
            uVar8 = FUN_0176eb1c(&local_40,0);
            FUN_00ac2be8(uVar5);
            FUN_00acb0b4(uVar5,uVar8);
            FUN_00acb320(uVar5,1,uVar8);
            FUN_00ac2be8(uVar5);
            puVar3 = StringLiteral_11450;
            uVar8 = thunk_FUN_00d48444(StringLiteral_11450);
            FUN_00acb0b4(uVar5,uVar8);
            uVar8 = thunk_FUN_00d48444(puVar3);
            FUN_00acb320(uVar5,2,uVar8);
            FUN_00ac2be8(param_1);
            local_40 = CONCAT44(local_40._4_4_,*(int *)(param_1 + 0x18) - param_3);
            uVar8 = FUN_0176eb1c(&local_40,0);
            FUN_00ac2be8(uVar5);
            FUN_00acb0b4(uVar5,uVar8);
            FUN_00acb320(uVar5,3,uVar8);
            FUN_00ac2be8(uVar5);
            puVar3 = 
            Field_<PrivateImplementationDetails>_914FCE8DC82DA59038745B264F743222527FBAE2E4A28E71C89760B7E3DBBA67
            ;
            uVar8 = thunk_FUN_00d48444(
                                      Field_<PrivateImplementationDetails>_914FCE8DC82DA59038745B264F743222527FBAE2E4A28E71C89760B7E3DBBA67
                                      );
            FUN_00acb0b4(uVar5,uVar8);
            uVar8 = thunk_FUN_00d48444(puVar3);
            FUN_00acb320(uVar5,4,uVar8);
            uVar8 = FUN_0176eb1c(&local_38,0);
            FUN_00ac2be8(uVar5);
            FUN_00acb0b4(uVar5,uVar8);
            FUN_00acb320(uVar5,5,uVar8);
            FUN_00ac2be8(uVar5);
            puVar3 = Method_System_Xml_Schema_DatatypeImplementation_DeriveByList__;
            uVar8 = thunk_FUN_00d48444(
                                      Method_System_Xml_Schema_DatatypeImplementation_DeriveByList__
                                      );
            FUN_00acb0b4(uVar5,uVar8);
            uVar8 = thunk_FUN_00d48444(puVar3);
            FUN_00acb320(uVar5,6,uVar8);
            uVar8 = **(undefined8 **)(param_4 + 0x38);
            thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            FUN_00acb0a4();
            plVar6 = (long *)FUN_01780344(uVar8,0);
            FUN_00ac2be8();
            uVar8 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
            FUN_00ac2be8(uVar5);
            FUN_00acb0b4(uVar5,uVar8);
            FUN_00acb320(uVar5,7,uVar8);
            FUN_00ac2be8(uVar5);
            puVar3 = PTR_DAT_033f6af8;
            uVar8 = thunk_FUN_00d48444(PTR_DAT_033f6af8);
            FUN_00acb0b4(uVar5,uVar8);
            uVar8 = thunk_FUN_00d48444(puVar3);
            FUN_00acb320(uVar5,8,uVar8);
            plVar6 = (long *)FUN_01780344(**(undefined8 **)(param_4 + 0x38),0);
            FUN_00ac2be8();
            uVar8 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
            FUN_00ac2be8(uVar5);
            FUN_00acb0b4(uVar5,uVar8);
            FUN_00acb320(uVar5,9,uVar8);
            FUN_00ac2be8(uVar5);
            puVar3 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__;
            uVar8 = thunk_FUN_00d48444(
                                      Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__
                                      );
            FUN_00acb0b4(uVar5,uVar8);
            uVar8 = thunk_FUN_00d48444(puVar3);
            FUN_00acb320(uVar5,10,uVar8);
            uVar8 = FUN_0176eb1c((long)&local_40 + 4,0);
            FUN_00ac2be8(uVar5);
            FUN_00acb0b4(uVar5,uVar8);
            FUN_00acb320(uVar5,0xb,uVar8);
            FUN_00ac2be8(uVar5);
            puVar3 = Method_System_Collections_Generic_List_Enumerator<OVRSceneAnchor>_get_Current__
            ;
            uVar8 = thunk_FUN_00d48444(
                                      Method_System_Collections_Generic_List_Enumerator<OVRSceneAnchor>_get_Current__
                                      );
            FUN_00acb0b4(uVar5,uVar8);
            uVar8 = thunk_FUN_00d48444(puVar3);
            FUN_00acb320(uVar5,0xc,uVar8);
          }
          else {
            uVar8 = thunk_FUN_00d48444(PTR_DAT_033ea8a0);
            uVar5 = FUN_00da4fb8(uVar8,5);
            FUN_00ac2be8();
            puVar3 = Method_System_Linq_Enumerable_First<CharacterZone>__;
            uVar8 = thunk_FUN_00d48444(Method_System_Linq_Enumerable_First<CharacterZone>__);
            FUN_00acb0b4(uVar5,uVar8);
            uVar8 = thunk_FUN_00d48444(puVar3);
            FUN_00acb320(uVar5,0,uVar8);
            FUN_00ac2be8(param_1);
            local_40 = CONCAT44(local_40._4_4_,(int)*(undefined8 *)(param_1 + 0x18));
            uVar8 = FUN_0176eb1c(&local_40,0);
            FUN_00ac2be8(uVar5);
            FUN_00acb0b4(uVar5,uVar8);
            FUN_00acb320(uVar5,1,uVar8);
            FUN_00ac2be8(uVar5);
            puVar3 = System_Runtime_Serialization_ObjectIDGenerator_TypeInfo;
            uVar8 = thunk_FUN_00d48444(System_Runtime_Serialization_ObjectIDGenerator_TypeInfo);
            FUN_00acb0b4(uVar5,uVar8);
            uVar8 = thunk_FUN_00d48444(puVar3);
            FUN_00acb320(uVar5,2,uVar8);
            uVar8 = FUN_0176eb1c(&iStack_34,0);
            FUN_00ac2be8(uVar5);
            FUN_00acb0b4(uVar5,uVar8);
            FUN_00acb320(uVar5,3,uVar8);
            FUN_00ac2be8(uVar5);
            puVar3 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
            uVar8 = thunk_FUN_00d48444(
                                      Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                                      );
            FUN_00acb0b4(uVar5,uVar8);
            uVar8 = thunk_FUN_00d48444(puVar3);
            FUN_00acb320(uVar5,4,uVar8);
          }
          uVar8 = FUN_01600844(uVar5,0);
        }
        else {
          local_40 = CONCAT44(iVar2,8);
          uVar8 = FUN_0176eb1c(&local_40,0);
          uVar5 = thunk_FUN_00d48444(PTR_DAT_033f5540);
          uVar4 = thunk_FUN_00d48444(System_Gen2GcCallback_TypeInfo);
          uVar8 = FUN_01600424(uVar5,uVar8,uVar4,0);
        }
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        uVar5 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_016f2f28(uVar5,uVar8,0);
        uVar8 = thunk_FUN_00d48444(StringLiteral_5110);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar5,uVar8);
      }
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      uVar5 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar3 = System_Xml_AsyncHelper_TypeInfo;
    }
    uVar8 = thunk_FUN_00d48444(puVar3);
    FUN_016f2f28(uVar5,uVar8,0);
  }
  uVar8 = thunk_FUN_00d48444(StringLiteral_5110);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar5,uVar8);
}


