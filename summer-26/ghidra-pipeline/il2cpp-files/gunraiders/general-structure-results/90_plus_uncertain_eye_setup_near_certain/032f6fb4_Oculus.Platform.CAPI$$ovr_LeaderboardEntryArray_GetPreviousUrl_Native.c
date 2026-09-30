/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_LeaderboardEntryArray_GetPreviousUrl_Native
ENTRY_POINT: 032f6fb4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Oculus_Platform_CAPI__ovr_LeaderboardEntryArray_GetPreviousUrl_Native(long param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  int iVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 uVar10;
  long unaff_x23;
  undefined *puVar7;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0xb50));
  *(undefined1 *)(unaff_x23 + 0xc9) = 1;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  if (unaff_x21 == (long *)0x0) {
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar10 = thunk_FUN_01c496e0();
    puVar7 = Method_System_Collections_Generic_Dictionary<string,_Material>_get_Values__;
  }
  else if (unaff_x20 == 0) {
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar10 = thunk_FUN_01c496e0();
    puVar7 = UnityEngine_Rendering_RenderQueueRange_TypeInfo;
  }
  else {
    if (unaff_x19 != 0) {
      plVar4 = (long *)(**(code **)(*unaff_x21 + 0x318))();
      if (plVar4 == (long *)0x0) {
LAB_032f7018:
        plVar4 = (long *)0x0;
      }
      else {
        bVar3 = *(byte *)(*(long *)
                           UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo
                         + 0x130);
        if (*(byte *)(*plVar4 + 0x130) < bVar3) goto LAB_032f7018;
        if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo) {
          plVar4 = (long *)0x0;
        }
      }
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      if (plVar4 == (long *)0x0) {
        thunk_FUN_01c273e8(PTR_DAT_04231770);
        uVar10 = thunk_FUN_01c496e0();
        uVar8 = thunk_FUN_01c273e8(PurchaseLevelSpawner_<StartBuyCoroutine>d__9_TypeInfo);
        uVar6 = thunk_FUN_01c273e8(
                                  Method_System_Collections_Generic_Dictionary<string,_Material>_get_Values__
                                  );
        FUN_0323fce4(uVar10,uVar8,uVar6,0);
      }
      else {
        uVar10 = *(undefined8 *)OVRSimpleJSON_JSONArray_TypeInfo;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar10 = FUN_032e04b8(uVar10);
        uVar5 = (**(code **)(*plVar4 + 0x918))(plVar4,uVar10,*(undefined8 *)(*plVar4 + 0x920));
        if ((uVar5 & 1) == 0) {
          uVar5 = (**(code **)(*plVar4 + 0x278))(plVar4,*(undefined8 *)(*plVar4 + 0x280));
          if ((uVar5 & 1) == 0) {
            iVar1 = *(int *)(unaff_x20 + 0x18);
            if (iVar1 < 1) {
              thunk_FUN_01c273e8(PTR_DAT_04231770);
              uVar10 = thunk_FUN_01c496e0();
              puVar7 = 
              Method_System_Collections_Generic_Dictionary<string,_RenderGraphDebugData>_TryGetValue__
              ;
            }
            else {
              if (iVar1 == *(int *)(unaff_x19 + 0x18)) {
                iVar9 = 0;
                do {
                  if (iVar1 == iVar9) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4ac();
                  }
                  uVar2 = *(uint *)(unaff_x20 + (long)iVar9 * 4 + 0x20);
                  if ((int)uVar2 < 0) {
                    thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
                    uVar10 = thunk_FUN_01c496e0();
                    uVar8 = thunk_FUN_01c273e8(UnityEngine_Rendering_RenderQueueRange_TypeInfo);
                    puVar7 = 
                    Method_System_Collections_Generic_Dictionary<string,_RenderGraphDebugData>__ctor__
                    ;
LAB_032f717c:
                    uVar6 = thunk_FUN_01c273e8(puVar7);
                    FUN_03243400(uVar10,uVar8,uVar6,0);
                    goto LAB_032f7194;
                  }
                  if (0x7fffffff <
                      (long)((long)*(int *)(unaff_x19 + (long)iVar9 * 4 + 0x20) + (ulong)uVar2)) {
                    thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
                    uVar10 = thunk_FUN_01c496e0();
                    uVar8 = thunk_FUN_01c273e8(UnityEngine_Rendering_RenderQueueRange_TypeInfo);
                    puVar7 = 
                    Method_System_Collections_Generic_Dictionary<string,_RenderGraphDebugData>_Add__
                    ;
                    goto LAB_032f717c;
                  }
                  iVar9 = iVar9 + 1;
                } while (iVar1 != iVar9);
                if (iVar1 < 0x100) {
                  FUN_01c5c2f0(plVar4);
                  return;
                }
                thunk_FUN_01c273e8(OVRPlugin_Hand_TypeInfo);
                uVar10 = thunk_FUN_01c496e0();
                FUN_03314458(uVar10,0);
                goto LAB_032f7194;
              }
              thunk_FUN_01c273e8(PTR_DAT_04231770);
              uVar10 = thunk_FUN_01c496e0();
              puVar7 = Method_System_Collections_Generic_Dictionary<string,_ReportSection>__ctor__;
            }
            uVar8 = thunk_FUN_01c273e8(puVar7);
            FUN_032467a0(uVar10,uVar8,0);
            goto LAB_032f7194;
          }
          thunk_FUN_01c273e8(PTR_DAT_04230a40);
          uVar10 = thunk_FUN_01c496e0();
          puVar7 = 
          Method_System_Collections_Generic_Dictionary<string,_NativeFeatureRuntimeConfiguration>__ctor__
          ;
        }
        else {
          thunk_FUN_01c273e8(PTR_DAT_04230a40);
          uVar10 = thunk_FUN_01c496e0();
          puVar7 = Method_System_Collections_Generic_Dictionary<string,_Material>_set_Item__;
        }
        uVar8 = thunk_FUN_01c273e8(puVar7);
        FUN_032cd310(uVar10,uVar8,0);
      }
      goto LAB_032f7194;
    }
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar10 = thunk_FUN_01c496e0();
    puVar7 = 
    Method_System_Collections_Generic_Dictionary<string,_RenderGraphDebugData>_GetEnumerator__;
  }
  uVar8 = thunk_FUN_01c273e8(puVar7);
  FUN_0323fc78(uVar10,uVar8,0);
LAB_032f7194:
  uVar8 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary<string,_RenderGraphDebugData>_Clear__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar10,uVar8);
}


