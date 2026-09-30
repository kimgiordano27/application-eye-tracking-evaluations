/*
FUNCTION_NAME: FUN_06bbdc90
ENTRY_POINT: 06bbdc90
PROGRAM: waitwhat-libil2cpp.so
SCORE: 140
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_21
*/


/* WARNING: Removing unreachable block (ram,0x06bbe278) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_06bbdc90(long param_1,long param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 extraout_x1;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long local_88;
  ulong local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  
  if ((DAT_07560420 & 1) == 0) {
    FUN_03188a78(Method_Newtonsoft_Json_Linq_JEnumerable<JToken>_GetEnumerator__);
    FUN_03188a78(
                Method_Best_HTTP_Request_Upload_JSonDataStream<BulkCreateUpdateGameEventRequestData>__ctor__
                );
    FUN_03188a78(Method_Best_HTTP_Request_Upload_JSonDataStream<Report_RequestData>__ctor__);
    FUN_03188a78(
                Method_Best_HTTP_Request_Upload_JSonDataStream<LoginRequest_Login_RequestData>__ctor__
                );
    FUN_03188a78(
                Method_Best_HTTP_Request_Upload_JSonDataStream<RequestOTL_RequestOTL_RequestData>__ctor__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
                );
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(Method_UnityEngine_TextCore_Text_FastAction<bool,_Material>__ctor__);
    FUN_03188a78(
                Method_System_Text_Json_Serialization_Metadata_JsonCollectionInfoValues<Dictionary<string,_bool>>__ctor__
                );
    FUN_03188a78(
                Method_System_Text_Json_Serialization_Metadata_JsonCollectionInfoValues<Dictionary<string,_bool>>_set_ElementInfo__
                );
    FUN_03188a78(
                Method_System_Text_Json_Serialization_Metadata_JsonCollectionInfoValues<Dictionary<string,_bool>>_set_KeyInfo__
                );
    FUN_03188a78(PTR_DAT_070c2c18);
    FUN_03188a78(PTR_DAT_070c2868);
    FUN_03188a78(
                Method_System_Text_Json_Serialization_Metadata_JsonCollectionInfoValues<Dictionary<string,_bool>>_set_NumberHandling__
                );
    FUN_03188a78(
                Method_System_Text_Json_Serialization_Metadata_JsonCollectionInfoValues<Dictionary<string,_bool>>_set_ObjectCreator__
                );
    DAT_07560420 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  if (param_2 != 0) {
    iVar6 = *(int *)(param_2 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0698f888(iVar6 == 0,0);
    puVar5 = 
    Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__;
    puVar3 = 
    Method_Best_HTTP_Request_Upload_JSonDataStream<RequestOTL_RequestOTL_RequestData>__ctor__;
    puVar4 = 
    Method_Best_HTTP_Request_Upload_JSonDataStream<BulkCreateUpdateGameEventRequestData>__ctor__;
    if (param_1 != 0) {
      FUN_0698f9b8(*(long *)(param_1 + 0x20) != 0,
                   *(undefined8 *)
                    Method_System_Text_Json_Serialization_Metadata_JsonCollectionInfoValues<Dictionary<string,_bool>>_set_ObjectCreator__
                   ,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      puVar3 = Method_Newtonsoft_Json_Linq_JEnumerable<JToken>_GetEnumerator__;
      local_68 = FUN_04d5d8ac(*(undefined8 *)puVar4);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)puVar5);
      }
      lVar9 = FUN_04d61030(*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 06bbde5c with catch @ 06bbde3c
                       catch() { ... } // from try @ 06bbde94 with catch @ 06bbde3c
                       catch() { ... } // from try @ 06bbdebc with catch @ 06bbde3c */
      lVar15 = *(long *)(param_1 + 0x20);
                    /* try { // try from 06bbde50 to 06cbde5b has its CatchHandler @ 06bbde74 */
      local_70 = lVar9;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
                    /* try { // try from 06bbde5c to 06cbde8f has its CatchHandler @ 06bbde3c */
      uVar10 = FUN_06b222c0(lVar15,0);
      puVar4 = 
      Method_System_Text_Json_Serialization_Metadata_JsonCollectionInfoValues<Dictionary<string,_bool>>__ctor__
      ;
      if (lVar9 != 0) {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 06bbde50 with catch @ 06bbde74
                        */
        lVar13 = *(long *)(lVar9 + 0x10);
        lVar12 = *(long *)
                  Method_System_Text_Json_Serialization_Metadata_JsonCollectionInfoValues<Dictionary<string,_bool>>__ctor__
        ;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar13 != 0) {
          uVar8 = *(uint *)(lVar9 + 0x18);
                    /* try { // try from 06bbde90 to 06cbde93 has its CatchHandler @ 06bbdeb0 */
                    /* try { // try from 06bbde94 to 06cbdeb3 has its CatchHandler @ 06bbde3c */
          if (uVar8 < *(uint *)(lVar13 + 0x18)) {
            lVar13 = lVar13 + (long)(int)uVar8 * 0x10;
            *(uint *)(lVar9 + 0x18) = uVar8 + 1;
            *(undefined8 *)(lVar13 + 0x20) = 1;
            *(undefined8 *)(lVar13 + 0x28) = uVar10;
                    /* catch() { ... } // from try @ 06bbde90 with catch @ 06bbdeb0 */
          }
          else {
                    /* try { // try from 06bbdeb4 to 06cbdebb has its CatchHandler @ 06bbdec4 */
                    /* try { // try from 06bbdebc to 06cbdec7 has its CatchHandler @ 06bbde3c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06bbdeb4 with catch @ 06bbdec4
                        */
            FUN_044a4088(lVar9,1,uVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          uVar10 = FUN_06b22010(lVar15,0);
          uVar11 = FUN_057bebf8(uVar10,0);
          lVar9 = local_70;
          if ((uVar11 & 1) == 0) {
            uVar10 = FUN_06b22010(lVar15,0);
            if (lVar9 != 0) {
              lVar13 = *(long *)(lVar9 + 0x10);
              lVar12 = *(long *)puVar4;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar13 != 0) {
                uVar8 = *(uint *)(lVar9 + 0x18);
                if (uVar8 < *(uint *)(lVar13 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)uVar8 * 0x10;
                  *(uint *)(lVar9 + 0x18) = uVar8 + 1;
                  *(undefined8 *)(lVar13 + 0x20) = 0;
                  *(undefined8 *)(lVar13 + 0x28) = uVar10;
                }
                else {
                  FUN_044a4088(lVar9,0,uVar10,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_06bbdf50;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
LAB_06bbdf50:
          lVar9 = FUN_06b25750(lVar15,0);
          puVar3 = PTR_DAT_070c2868;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          iVar6 = *(int *)(lVar9 + 0x18);
          if (0 < iVar6) {
            iVar16 = 0;
            do {
              lVar13 = local_70;
              uVar10 = FUN_042e47a4(lVar9,iVar16,*(undefined8 *)puVar3);
              if (lVar13 == 0) {
LAB_06bbe25c:
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              lVar12 = *(long *)(lVar13 + 0x10);
              lVar14 = *(long *)puVar4;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_06bbe25c;
              uVar8 = *(uint *)(lVar13 + 0x18);
              if (uVar8 < *(uint *)(lVar12 + 0x18)) {
                lVar12 = lVar12 + (long)(int)uVar8 * 0x10;
                *(uint *)(lVar13 + 0x18) = uVar8 + 1;
                *(undefined8 *)(lVar12 + 0x20) = 2;
                *(undefined8 *)(lVar12 + 0x28) = uVar10;
              }
              else {
                FUN_044a4088(lVar13,2,uVar10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              iVar16 = iVar16 + 1;
            } while (iVar6 != iVar16);
          }
          iVar6 = FUN_06b79178(param_1,0);
          puVar3 = 
          Method_System_Text_Json_Serialization_Metadata_JsonCollectionInfoValues<Dictionary<string,_bool>>_set_NumberHandling__
          ;
          puVar4 = Method_UnityEngine_TextCore_Text_FastAction<bool,_Material>__ctor__;
          if (-1 < (int)(iVar6 - 1U)) {
            bVar2 = false;
            uVar8 = iVar6 - 1U;
            do {
              lVar9 = FUN_06b79400(param_1,uVar8,0);
              if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03188cd8();
              }
              uVar11 = FUN_03eb65b4(local_68,lVar9,*(undefined8 *)puVar4);
              if ((uVar11 & 1) != 0) {
                if (param_3 < (int)uVar8) {
                  uVar7 = FUN_06b21bc0(lVar15,0);
                  FUN_06b21bc8(lVar15,uVar7 | 0x80,0);
                  bVar2 = true;
                }
                else {
                  uVar7 = FUN_06b21bc0(lVar15,0);
                  FUN_06b21bc8(lVar15,uVar7 & 0xffffff7f,0);
                }
                local_78 = 0;
                local_80 = (ulong)uVar8;
                local_88 = lVar9;
                if (local_70 == 0) {
LAB_06bbe20c:
                    /* WARNING: Subroutine does not return */
                  FUN_03188cd8();
                }
                iVar6 = 0;
                while (iVar6 < *(int *)(local_70 + 0x18)) {
                  uVar7 = FUN_044a3d88(local_70,iVar6,*(undefined8 *)puVar3);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03188cd8();
                  }
                  if ((*(uint *)(lVar9 + 0x80) >> (ulong)(uVar7 & 0x1f) & 1) != 0) {
                    lVar13 = *(long *)(lVar9 + 0x78);
                    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03188cd8();
                    }
                    if (*(uint *)(lVar13 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                      FUN_03188ce0();
                    }
                    FUN_06bbdba8(*(undefined8 *)(lVar13 + (long)(int)uVar7 * 8 + 0x20),param_2,
                                 param_1,extraout_x1,&local_88);
                  }
                  iVar6 = iVar6 + 1;
                  if (local_70 == 0) goto LAB_06bbe20c;
                }
                if (bVar2) {
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03188cd8();
                  }
                  FUN_06bbda64(*(undefined8 *)(lVar9 + 0x88),param_2,param_1,&local_88);
                }
                else if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03188cd8();
                }
                FUN_06bbda64(*(undefined8 *)(lVar9 + 0x90),param_2,param_1,&local_88);
              }
              bVar1 = 0 < (int)uVar8;
              uVar8 = uVar8 - 1;
            } while (bVar1);
            if (bVar2) {
              uVar8 = FUN_06b21bc0(lVar15,0);
              FUN_06b21bc8(lVar15,uVar8 & 0xffffff7f,0);
            }
          }
          lVar9 = local_70;
          puVar3 = 
          Method_Best_HTTP_Request_Upload_JSonDataStream<RequestOTL_RequestOTL_RequestData>__ctor__;
          puVar4 = 
          Method_Best_HTTP_Request_Upload_JSonDataStream<LoginRequest_Login_RequestData>__ctor__;
          if (*(int *)(*(long *)
                        Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
                      + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          puVar5 = Method_Best_HTTP_Request_Upload_JSonDataStream<Report_RequestData>__ctor__;
          FUN_04d61198(lVar9,*(undefined8 *)puVar4);
          lVar9 = local_68;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          FUN_04d5da14(lVar9,*(undefined8 *)puVar5);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


