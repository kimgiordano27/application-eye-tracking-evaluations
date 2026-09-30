/*
FUNCTION_NAME: FUN_011557c0
ENTRY_POINT: 011557c0
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


undefined8 FUN_011557c0(long param_1,int param_2,uint param_3,long param_4)

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
  
                    /* try { // try from 011557d8 to 012558c7 has its CatchHandler @ 011555cc */
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
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar8 = thunk_FUN_00d48444(System_Collections_Generic_Dictionary<BodyJointId,_Pose>_TypeInfo);
                    /* try { // try from 01155944 to 0125596b has its CatchHandler @ 01155c20 */
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
        if (*(int *)(*(long *)StringLiteral_5238 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_5238);
        }
        iVar2 = thunk_FUN_00d366d8(uVar8,0);
        if ((param_3 & 7) == 0) {
          local_40._4_4_ = iVar2;
          if ((int)(param_2 + param_3) < *(int *)(param_1 + 0x18)) {
            iVar1 = 0;
            if (iVar2 != 0) {
              iVar1 = (int)(param_2 - param_3) / iVar2;
            }
            if (param_2 - param_3 == iVar1 * iVar2) {
              iVar1 = 0;
              if (iVar2 != 0) {
                iVar1 = (int)(*(int *)(param_1 + 0x18) - param_3) / iVar2;
              }
              lVar7 = *(long *)(*(long *)(param_4 + 0x38) + 8);
              if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
                    /* try { // try from 011558c8 to 012558ef has its CatchHandler @ 01155c28 */
                lVar7 = FUN_00d5941c(lVar7);
              }
              uVar8 = FUN_00da4fb8(lVar7,iVar1);
                    /* try { // try from 011558f8 to 0125590f has its CatchHandler @ 01155c30 */
              FUN_01c89608(param_1,uVar8,param_2,param_3,0,0);
              return uVar8;
            }
            uVar8 = thunk_FUN_00d48444(PTR_DAT_033ea8a0);
            uVar5 = FUN_00da4fb8(uVar8,0xd);
            FUN_00ac2be8();
            puVar3 = Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>_Add__
            ;
                    /* try { // try from 01155b80 to 01255b87 has its CatchHandler @ 01155be8 */
            uVar8 = thunk_FUN_00d48444(
                                      Method_System_Collections_Generic_Dictionary<string,_Tuple<Guid,_string>>_Add__
                                      );
                    /* try { // try from 01155b88 to 01255b8b has its CatchHandler @ 01155be4 */
                    /* try { // try from 01155b8c to 01255b8f has its CatchHandler @ 01155be0 */
            FUN_00acb0b4(uVar5,uVar8);
                    /* try { // try from 01155b90 to 01255b93 has its CatchHandler @ 01155bdc */
                    /* try { // try from 01155b94 to 01255b97 has its CatchHandler @ 01155bd8 */
            uVar8 = thunk_FUN_00d48444(puVar3);
                    /* try { // try from 01155b98 to 01255b9b has its CatchHandler @ 01155bd4 */
                    /* try { // try from 01155b9c to 01255b9f has its CatchHandler @ 01155bd0 */
                    /* try { // try from 01155ba0 to 01255ba7 has its CatchHandler @ 01155bcc */
            FUN_00acb320(uVar5,0,uVar8);
                    /* try { // try from 01155ba8 to 01255bab has its CatchHandler @ 011555cc */
                    /* try { // try from 01155bac to 01255baf has its CatchHandler @ 01155bc8 */
            FUN_00ac2be8(param_1);
                    /* try { // try from 01155bb0 to 01255bb7 has its CatchHandler @ 011555cc */
                    /* try { // try from 01155bb8 to 01255bbb has its CatchHandler @ 01155bc4 */
                    /* try { // try from 01155bbc to 01255c4f has its CatchHandler @ 011555cc */
            local_40._0_4_ = (undefined4)*(undefined8 *)(param_1 + 0x18);
            uVar8 = FUN_0176eb1c(&local_40,0);
                    /* catch() { ... } // from try @ 01155bb8 with catch @ 01155bc4 */
                    /* catch() { ... } // from try @ 01155bac with catch @ 01155bc8 */
                    /* catch() { ... } // from try @ 01155ba0 with catch @ 01155bcc */
            FUN_00ac2be8(uVar5);
                    /* catch() { ... } // from try @ 01155b9c with catch @ 01155bd0 */
                    /* catch() { ... } // from try @ 01155b98 with catch @ 01155bd4 */
                    /* catch() { ... } // from try @ 01155b94 with catch @ 01155bd8 */
            FUN_00acb0b4(uVar5,uVar8);
                    /* catch() { ... } // from try @ 01155b90 with catch @ 01155bdc */
                    /* catch() { ... } // from try @ 01155b8c with catch @ 01155be0 */
                    /* catch() { ... } // from try @ 01155b88 with catch @ 01155be4 */
                    /* catch() { ... } // from try @ 01155b80 with catch @ 01155be8 */
            FUN_00acb320(uVar5,1,uVar8);
                    /* catch() { ... } // from try @ 011559fc with catch @ 01155bec */
                    /* catch() { ... } // from try @ 011559bc with catch @ 01155bf0 */
            FUN_00ac2be8(uVar5);
            puVar3 = StringLiteral_11450;
                    /* catch() { ... } // from try @ 01155980 with catch @ 01155bf4 */
                    /* catch() { ... } // from try @ 0115599c with catch @ 01155bf8 */
                    /* catch() { ... } // from try @ 01155a24 with catch @ 01155bfc */
                    /* catch() { ... } // from try @ 01155a90 with catch @ 01155c00 */
            uVar8 = thunk_FUN_00d48444(StringLiteral_11450);
                    /* catch() { ... } // from try @ 01155a4c with catch @ 01155c04 */
                    /* catch() { ... } // from try @ 01155a30 with catch @ 01155c08 */
                    /* catch() { ... } // from try @ 011559e0 with catch @ 01155c0c */
            FUN_00acb0b4(uVar5,uVar8);
                    /* catch() { ... } // from try @ 011559cc with catch @ 01155c10 */
                    /* catch() { ... } // from try @ 01155a5c with catch @ 01155c14 */
            uVar8 = thunk_FUN_00d48444(puVar3);
                    /* catch() { ... } // from try @ 01155984 with catch @ 01155c18 */
                    /* catch() { ... } // from try @ 01155ab4 with catch @ 01155c1c */
                    /* catch() { ... } // from try @ 01155944 with catch @ 01155c20 */
                    /* catch() { ... } // from try @ 01155754 with catch @ 01155c24 */
            FUN_00acb320(uVar5,2,uVar8);
                    /* catch() { ... } // from try @ 011558c8 with catch @ 01155c28 */
                    /* catch() { ... } // from try @ 011556f8 with catch @ 01155c2c */
            FUN_00ac2be8(param_1);
                    /* catch() { ... } // from try @ 011558f8 with catch @ 01155c30 */
            local_40 = CONCAT44(local_40._4_4_,*(int *)(param_1 + 0x18) - param_3);
            uVar8 = FUN_0176eb1c(&local_40,0);
                    /* try { // try from 01155c50 to 01255c53 has its CatchHandler @ 01155cc4 */
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
                    /* try { // try from 01155c90 to 01255cc3 has its CatchHandler @ 01155d7c */
            FUN_00acb0b4(uVar5,uVar8);
            uVar8 = thunk_FUN_00d48444(puVar3);
            FUN_00acb320(uVar5,4,uVar8);
            uVar8 = FUN_0176eb1c(&local_38,0);
            FUN_00ac2be8(uVar5);
                    /* catch() { ... } // from try @ 01155c50 with catch @ 01155cc4
                       try { // try from 01155cc4 to 01255ce7 has its CatchHandler @ 011555cc */
            FUN_00acb0b4(uVar5,uVar8);
                    /* catch() { ... } // from try @ 011557b0 with catch @ 01155cd0 */
            FUN_00acb320(uVar5,5,uVar8);
            FUN_00ac2be8(uVar5);
            puVar3 = Method_System_Xml_Schema_DatatypeImplementation_DeriveByList__;
                    /* try { // try from 01155ce8 to 01255ceb has its CatchHandler @ 01155d74 */
            uVar8 = thunk_FUN_00d48444(
                                      Method_System_Xml_Schema_DatatypeImplementation_DeriveByList__
                                      );
                    /* try { // try from 01155cf8 to 01255d5f has its CatchHandler @ 01155d7c */
            FUN_00acb0b4(uVar5,uVar8);
            uVar8 = thunk_FUN_00d48444(puVar3);
            FUN_00acb320(uVar5,6,uVar8);
            uVar8 = **(undefined8 **)(param_4 + 0x38);
            thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
            FUN_00acb0a4();
            plVar6 = (long *)FUN_01780344(uVar8,0);
            FUN_00ac2be8();
            uVar8 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
                    /* try { // try from 01155d60 to 01255d6b has its CatchHandler @ 011555cc */
            FUN_00ac2be8(uVar5);
                    /* try { // try from 01155d6c to 01255d73 has its CatchHandler @ 01155d7c */
            FUN_00acb0b4(uVar5,uVar8);
                    /* catch() { ... } // from try @ 01155ce8 with catch @ 01155d74 */
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
                    /* try { // try from 01155a24 to 01255a2f has its CatchHandler @ 01155bfc */
                    /* try { // try from 01155a30 to 01255a3f has its CatchHandler @ 01155c08 */
            uVar8 = thunk_FUN_00d48444(Method_System_Linq_Enumerable_First<CharacterZone>__);
            FUN_00acb0b4(uVar5,uVar8);
            uVar8 = thunk_FUN_00d48444(puVar3);
                    /* try { // try from 01155a4c to 01255a57 has its CatchHandler @ 01155c04 */
            FUN_00acb320(uVar5,0,uVar8);
                    /* try { // try from 01155a5c to 01255a83 has its CatchHandler @ 01155c14 */
            FUN_00ac2be8(param_1);
            local_40 = CONCAT44(local_40._4_4_,(int)*(undefined8 *)(param_1 + 0x18));
            uVar8 = FUN_0176eb1c(&local_40,0);
            FUN_00ac2be8(uVar5);
            FUN_00acb0b4(uVar5,uVar8);
                    /* try { // try from 01155a90 to 01255a9b has its CatchHandler @ 01155c00 */
            FUN_00acb320(uVar5,1,uVar8);
            FUN_00ac2be8(uVar5);
            puVar3 = System_Runtime_Serialization_ObjectIDGenerator_TypeInfo;
            uVar8 = thunk_FUN_00d48444(System_Runtime_Serialization_ObjectIDGenerator_TypeInfo);
                    /* try { // try from 01155ab4 to 01255aef has its CatchHandler @ 01155c1c */
            FUN_00acb0b4(uVar5,uVar8);
            uVar8 = thunk_FUN_00d48444(puVar3);
            FUN_00acb320(uVar5,2,uVar8);
            uVar8 = FUN_0176eb1c(&iStack_34,0);
            FUN_00ac2be8(uVar5);
                    /* try { // try from 01155af0 to 01255b7f has its CatchHandler @ 011555cc */
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
                    /* try { // try from 011559bc to 012559bf has its CatchHandler @ 01155bf0 */
          local_40 = CONCAT44(iVar2,8);
                    /* try { // try from 011559cc to 012559d7 has its CatchHandler @ 01155c10 */
          uVar8 = FUN_0176eb1c(&local_40,0);
          uVar5 = thunk_FUN_00d48444(PTR_DAT_033f5540);
                    /* try { // try from 011559e0 to 012559eb has its CatchHandler @ 01155c0c */
          uVar4 = thunk_FUN_00d48444(System_Gen2GcCallback_TypeInfo);
                    /* try { // try from 011559fc to 01255a03 has its CatchHandler @ 01155bec */
          uVar8 = FUN_01600424(uVar5,uVar8,uVar4,0);
        }
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        uVar5 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_016f2f28(uVar5,uVar8,0);
        uVar8 = thunk_FUN_00d48444(Method_TutorialBobber_Show__);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar5,uVar8);
      }
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      uVar5 = thunk_FUN_00d62348();
                    /* try { // try from 01155980 to 01255983 has its CatchHandler @ 01155bf4 */
                    /* try { // try from 01155984 to 0125598f has its CatchHandler @ 01155c18 */
      FUN_00ac2be8();
      puVar3 = System_Xml_AsyncHelper_TypeInfo;
    }
    uVar8 = thunk_FUN_00d48444(puVar3);
                    /* try { // try from 0115599c to 012559a3 has its CatchHandler @ 01155bf8 */
    FUN_016f2f28(uVar5,uVar8,0);
  }
  uVar8 = thunk_FUN_00d48444(Method_TutorialBobber_Show__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar5,uVar8);
}


