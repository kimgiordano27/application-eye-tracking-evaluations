/*
FUNCTION_NAME: FUN_08abad5c
ENTRY_POINT: 08abad5c
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_08abad5c(long *param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  if ((DAT_096a5047 & 1) == 0) {
    FUN_03f13384(UnityEngine_Pool_GenericPool<StringBuilder>_TypeInfo);
    FUN_03f13384(PTR_DAT_091255b8);
    FUN_03f13384(UnityEngine_Pool_GenericPool<XRLayout>_TypeInfo);
    FUN_03f13384(PTR_DAT_091255c0);
    FUN_03f13384(PTR_DAT_091255c8);
    FUN_03f13384(UnityEngine_Pool_GenericPool<CameraScreenRaycaster_CameraRayEnumerator>_TypeInfo);
    FUN_03f13384(PTR_DAT_091255d8);
    FUN_03f13384(System_Func<JsonSerializerContext,_bool>_TypeInfo);
    FUN_03f13384(PTR_DAT_091acca8);
    FUN_03f13384(PTR_DAT_091255e8);
    FUN_03f13384(PTR_DAT_091255f0);
    FUN_03f13384(PTR_DAT_091255f8);
    FUN_03f13384(PTR_DAT_091acc98);
    FUN_03f13384(PTR_DAT_09125600);
    FUN_03f13384(
                UnityEngine_Pool_GenericPool<InitializationOperation_UnloadBundlesOperation>_TypeInfo
                );
    FUN_03f13384(UnityEngine_Rendering_GenericPool<XRPass>_TypeInfo);
    FUN_03f13384(Unity_Services_RemoteConfig_ConfigResponse_var);
    DAT_096a5047 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  lVar5 = FUN_08a8dad0(param_2,0);
  if ((lVar5 == 0) || (uVar6 = FUN_08aba020(param_1,param_2,1,1), (uVar6 & 1) == 0)) {
    puVar3 = PTR_DAT_091255f8;
    puVar2 = PTR_DAT_091255b8;
    lVar5 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(*(long *)puVar3);
    }
    lVar7 = FUN_04faea4c(*(undefined8 *)puVar2);
    if (lVar5 != lVar7) {
      lVar5 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
      if (*(int *)(*(long *)PTR_DAT_09125600 + 0xe4) == 0) {
        thunk_FUN_03f6fea8(*(long *)PTR_DAT_09125600);
      }
      lVar7 = FUN_04faea4c(*(undefined8 *)PTR_DAT_091255c8);
      if (lVar5 != lVar7) {
        lVar5 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
        if (*(int *)(*(long *)System_Func<JsonSerializerContext,_bool>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)System_Func<JsonSerializerContext,_bool>_TypeInfo);
        }
        lVar7 = FUN_04faea4c(*(undefined8 *)UnityEngine_Pool_GenericPool<StringBuilder>_TypeInfo);
        if (lVar5 != lVar7) {
          lVar5 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
          if (*(int *)(*(long *)PTR_DAT_091255e8 + 0xe4) == 0) {
            thunk_FUN_03f6fea8(*(long *)PTR_DAT_091255e8);
          }
          lVar7 = FUN_04faea4c(*(undefined8 *)PTR_DAT_091255d8);
          if (lVar5 == lVar7) {
            *(undefined1 *)((long)param_1 + 0x354) = 1;
            FUN_08966324(param_1,0x800,0);
            return;
          }
          lVar5 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
          if (*(int *)(*(long *)PTR_DAT_091255f0 + 0xe4) == 0) {
            thunk_FUN_03f6fea8(*(long *)PTR_DAT_091255f0);
          }
          lVar7 = FUN_04faea4c(*(undefined8 *)PTR_DAT_091255c0);
          if (lVar5 == lVar7) {
            bVar1 = *(byte *)(*(long *)Unity_Services_RemoteConfig_ConfigResponse_var + 0x130);
            if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
               (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)Unity_Services_RemoteConfig_ConfigResponse_var)) {
              lVar5 = param_2[0xe];
              *(undefined1 *)((long)param_1 + 0x355) = 1;
              param_1[0x6b] = lVar5;
              thunk_FUN_03f86000(param_1 + 0x6b);
              *(char *)((long)param_1 + 0x2f5) = (char)param_2[0x10];
              return;
            }
            *(undefined1 *)((long)param_1 + 0x355) = 1;
                    /* WARNING: Subroutine does not return */
            FUN_03f1362c();
          }
          lVar5 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
          if (*(int *)(*(long *)PTR_DAT_091acc98 + 0xe4) == 0) {
            thunk_FUN_03f6fea8(*(long *)PTR_DAT_091acc98);
          }
          lVar7 = FUN_04faea4c(*(undefined8 *)
                                UnityEngine_Pool_GenericPool<CameraScreenRaycaster_CameraRayEnumerator>_TypeInfo
                              );
          if (lVar5 == lVar7) {
            plVar8 = (long *)param_1[0x54];
            if (plVar8 == (long *)0x0) {
              return;
            }
            iVar4 = (**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250));
                    /* WARNING: Could not recover jumptable at 0x08abb120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar8 + 600))(plVar8,iVar4 + -1,*(undefined8 *)(*plVar8 + 0x260));
            return;
          }
          lVar5 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
          if (*(int *)(*(long *)PTR_DAT_091acca8 + 0xe4) == 0) {
            thunk_FUN_03f6fea8(*(long *)PTR_DAT_091acca8);
          }
          lVar7 = FUN_04faea4c(*(undefined8 *)UnityEngine_Pool_GenericPool<XRLayout>_TypeInfo);
          if (lVar5 != lVar7) {
            return;
          }
          plVar8 = (long *)param_1[0x54];
          if (plVar8 == (long *)0x0) {
            return;
          }
          iVar4 = (**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250));
          (**(code **)(*plVar8 + 600))(plVar8,iVar4 + 1,*(undefined8 *)(*plVar8 + 0x260));
          FUN_08abb1d4(param_1);
          return;
        }
      }
    }
  }
  FUN_08a90b38(param_2,0);
  lVar5 = (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
  if (lVar5 == 0) {
    return;
  }
  FUN_08aa3840(lVar5,param_2,0);
  return;
}


