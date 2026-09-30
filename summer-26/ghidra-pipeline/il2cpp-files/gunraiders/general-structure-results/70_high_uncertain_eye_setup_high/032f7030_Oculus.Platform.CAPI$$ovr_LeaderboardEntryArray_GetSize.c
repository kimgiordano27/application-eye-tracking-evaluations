/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_LeaderboardEntryArray_GetSize
ENTRY_POINT: 032f7030
PROGRAM: gunraiders-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Oculus_Platform_CAPI__ovr_LeaderboardEntryArray_GetSize(long *param_1)

{
  int iVar1;
  uint uVar2;
  bool in_ZR;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar6;
  int iVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar8;
  undefined *puVar5;
  
  if (!in_ZR) {
    param_1 = (long *)0x0;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  if (param_1 == (long *)0x0) {
    thunk_FUN_01c273e8(PTR_DAT_04231770);
    uVar6 = thunk_FUN_01c496e0();
    uVar8 = thunk_FUN_01c273e8(PurchaseLevelSpawner_<StartBuyCoroutine>d__9_TypeInfo);
    uVar4 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_Dictionary<string,_Material>_get_Values__
                              );
    FUN_0323fce4(uVar6,uVar8,uVar4,0);
  }
  else {
    uVar8 = *(undefined8 *)OVRSimpleJSON_JSONArray_TypeInfo;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar8 = FUN_032e04b8(uVar8);
    uVar3 = (**(code **)(*param_1 + 0x918))(param_1,uVar8,*(undefined8 *)(*param_1 + 0x920));
    if ((uVar3 & 1) == 0) {
      uVar3 = (**(code **)(*param_1 + 0x278))(param_1,*(undefined8 *)(*param_1 + 0x280));
      if ((uVar3 & 1) == 0) {
        iVar1 = *(int *)(unaff_x20 + 0x18);
        if (iVar1 < 1) {
          thunk_FUN_01c273e8(PTR_DAT_04231770);
          uVar6 = thunk_FUN_01c496e0();
          puVar5 = 
          Method_System_Collections_Generic_Dictionary<string,_RenderGraphDebugData>_TryGetValue__;
        }
        else {
          if (iVar1 == *(int *)(unaff_x19 + 0x18)) {
            iVar7 = 0;
            do {
              if (iVar1 == iVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4ac();
              }
              uVar2 = *(uint *)(unaff_x20 + (long)iVar7 * 4 + 0x20);
              if ((int)uVar2 < 0) {
                thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
                uVar6 = thunk_FUN_01c496e0();
                uVar8 = thunk_FUN_01c273e8(UnityEngine_Rendering_RenderQueueRange_TypeInfo);
                puVar5 = 
                Method_System_Collections_Generic_Dictionary<string,_RenderGraphDebugData>__ctor__;
LAB_032f717c:
                uVar4 = thunk_FUN_01c273e8(puVar5);
                FUN_03243400(uVar6,uVar8,uVar4,0);
                goto LAB_032f7194;
              }
              if (0x7fffffff <
                  (long)((long)*(int *)(unaff_x19 + (long)iVar7 * 4 + 0x20) + (ulong)uVar2)) {
                thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
                uVar6 = thunk_FUN_01c496e0();
                uVar8 = thunk_FUN_01c273e8(UnityEngine_Rendering_RenderQueueRange_TypeInfo);
                puVar5 = 
                Method_System_Collections_Generic_Dictionary<string,_RenderGraphDebugData>_Add__;
                goto LAB_032f717c;
              }
              iVar7 = iVar7 + 1;
            } while (iVar1 != iVar7);
            if (iVar1 < 0x100) {
              FUN_01c5c2f0(param_1);
              return;
            }
            thunk_FUN_01c273e8(OVRPlugin_Hand_TypeInfo);
            uVar6 = thunk_FUN_01c496e0();
            FUN_03314458(uVar6,0);
            goto LAB_032f7194;
          }
          thunk_FUN_01c273e8(PTR_DAT_04231770);
          uVar6 = thunk_FUN_01c496e0();
          puVar5 = Method_System_Collections_Generic_Dictionary<string,_ReportSection>__ctor__;
        }
        uVar8 = thunk_FUN_01c273e8(puVar5);
        FUN_032467a0(uVar6,uVar8,0);
        goto LAB_032f7194;
      }
      thunk_FUN_01c273e8(PTR_DAT_04230a40);
      uVar6 = thunk_FUN_01c496e0();
      puVar5 = 
      Method_System_Collections_Generic_Dictionary<string,_NativeFeatureRuntimeConfiguration>__ctor__
      ;
    }
    else {
      thunk_FUN_01c273e8(PTR_DAT_04230a40);
      uVar6 = thunk_FUN_01c496e0();
      puVar5 = Method_System_Collections_Generic_Dictionary<string,_Material>_set_Item__;
    }
    uVar8 = thunk_FUN_01c273e8(puVar5);
    FUN_032cd310(uVar6,uVar8,0);
  }
LAB_032f7194:
  uVar8 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary<string,_RenderGraphDebugData>_Clear__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar6,uVar8);
}


