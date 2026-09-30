/*
FUNCTION_NAME: thunk_FUN_032f6f6c
ENTRY_POINT: 032f6f68
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


void thunk_FUN_032f6f6c(long *param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined *puVar7;
  
  puVar7 = PTR_DAT_0422fb28;
  if ((DAT_045330c9 & 1) == 0) {
    FUN_01c5d288(UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(OVRSimpleJSON_JSONArray_TypeInfo);
    DAT_045330c9 = 1;
  }
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  if (param_1 == (long *)0x0) {
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar10 = thunk_FUN_01c496e0();
    puVar7 = Method_System_Collections_Generic_Dictionary<string,_Material>_get_Values__;
  }
  else if (param_2 == 0) {
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar10 = thunk_FUN_01c496e0();
    puVar7 = UnityEngine_Rendering_RenderQueueRange_TypeInfo;
  }
  else {
    if (param_3 != 0) {
      plVar4 = (long *)(**(code **)(*param_1 + 0x318))(param_1,*(undefined8 *)(*param_1 + 800));
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
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
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
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar10 = FUN_032e04b8(uVar10);
        uVar5 = (**(code **)(*plVar4 + 0x918))(plVar4,uVar10,*(undefined8 *)(*plVar4 + 0x920));
        if ((uVar5 & 1) == 0) {
          uVar5 = (**(code **)(*plVar4 + 0x278))(plVar4,*(undefined8 *)(*plVar4 + 0x280));
          if ((uVar5 & 1) == 0) {
            iVar1 = *(int *)(param_2 + 0x18);
            if (iVar1 < 1) {
              thunk_FUN_01c273e8(PTR_DAT_04231770);
              uVar10 = thunk_FUN_01c496e0();
              puVar7 = 
              Method_System_Collections_Generic_Dictionary<string,_RenderGraphDebugData>_TryGetValue__
              ;
            }
            else {
              if (iVar1 == *(int *)(param_3 + 0x18)) {
                iVar9 = 0;
                do {
                  if (iVar1 == iVar9) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d4ac();
                  }
                  uVar2 = *(uint *)(param_2 + (long)iVar9 * 4 + 0x20);
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
                      (long)((long)*(int *)(param_3 + (long)iVar9 * 4 + 0x20) + (ulong)uVar2)) {
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
                  FUN_01c5c2f0(plVar4,param_2,param_3);
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


