/*
FUNCTION_NAME: FUN_05e61248
ENTRY_POINT: 05e61248
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_14;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05e61248(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  
  if ((DAT_066dc652 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313040);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponent<FullBodyBipedIK>__);
    FUN_02b3c81c(PTR_DAT_06312fd8);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponent<Grabbable>__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_72__);
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass36_0_<AddInstanceOcclusionPassDataRow>b__5__
                );
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponent<GrabbableChild>__);
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass36_0_<AddInstanceOcclusionPassDataRow>b__6__
                );
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_73__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_Universal_ScriptableRenderer_get_cameraColorTarget__);
    FUN_02b3c81c(Method_System_Diagnostics_TraceListenerCollection_System_Collections_IList_Add__);
    FUN_02b3c81c(PTR_DAT_06313c10);
    DAT_066dc652 = 1;
  }
  puVar7 = Method_OVRPlugin_<>c_<_cctor>b__810_73__;
  puVar6 = 
  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass36_0_<AddInstanceOcclusionPassDataRow>b__6__
  ;
  puVar4 = Method_UnityEngine_Rendering_Universal_ScriptableRenderer_get_cameraColorTarget__;
  puVar3 = Method_UnityEngine_Component_GetComponent<FullBodyBipedIK>__;
  puVar2 = PTR_DAT_06313040;
  if (param_4 != 0) {
    if (0 < *(int *)(param_4 + 0x18)) {
      iVar15 = 0;
      do {
        lVar10 = FUN_037a6268(param_4,iVar15,*(undefined8 *)puVar7);
        if (lVar10 == 0) goto LAB_05e61588;
        lVar16 = *(long *)(param_1 + 0x70);
        plVar11 = (long *)FUN_05c59c60(lVar10,0);
        if (lVar16 == 0) goto LAB_05e61588;
        if (plVar11 == (long *)0x0) {
          plVar11 = (long *)0x0;
        }
        else if (*plVar11 != *(long *)PTR_DAT_06313c10) {
          plVar11 = (long *)0x0;
        }
        lVar13 = *(long *)(lVar16 + 0x10);
        lVar14 = *(long *)puVar3;
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_05e61588;
        uVar1 = *(uint *)(lVar16 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar16 + 0x18) = uVar1 + 1;
          *(long **)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = plVar11;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(lVar16,plVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        if (param_5 == 0) goto LAB_05e61588;
        uVar8 = FUN_03755690(param_5,iVar15,*(undefined8 *)puVar6);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)puVar4);
        }
        uVar12 = FUN_05d7a2cc(uVar8,0);
        uVar8 = 0;
        if ((uVar12 & 1) == 0) {
          lVar16 = *(long *)(param_1 + 0x70);
          if ((lVar16 == 0) ||
             (lVar16 = FUN_037a6268(lVar16,*(int *)(lVar16 + 0x18) + -1,
                                    *(undefined8 *)
                                     Method_UnityEngine_Component_GetComponent<GrabbableChild>__),
             lVar16 == 0)) goto LAB_05e61588;
          iVar9 = FUN_05c6927c(lVar16,0);
          puVar5 = Method_System_Diagnostics_TraceListenerCollection_System_Collections_IList_Add__;
          if (iVar9 == 1) {
            lVar16 = *(long *)
                      Method_System_Diagnostics_TraceListenerCollection_System_Collections_IList_Add__
            ;
            if (*(int *)(lVar16 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar16 = *(long *)puVar5;
            }
            uVar8 = thunk_FUN_05c5c11c(lVar10,*(undefined4 *)(*(long *)(lVar16 + 0xb8) + 0x6c),0);
          }
        }
        lVar10 = *(long *)(param_1 + 0x78);
        if (lVar10 == 0) goto LAB_05e61588;
        lVar16 = *(long *)(lVar10 + 0x10);
        lVar13 = *(long *)puVar2;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar16 == 0) goto LAB_05e61588;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar16 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar16 + (long)(int)uVar1 * 4 + 0x20) = uVar8;
        }
        else {
          FUN_038264a4(uVar8,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(param_4 + 0x18));
    }
    FUN_05e6158c(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x70));
    lVar10 = *(long *)(param_1 + 0x70);
    if (lVar10 != 0) {
      iVar15 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (0 < iVar15) {
        FUN_04d9e084(*(undefined8 *)(lVar10 + 0x10),0,iVar15,0);
      }
      lVar10 = *(long *)(param_1 + 0x78);
      if (lVar10 != 0) {
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        return;
      }
    }
  }
LAB_05e61588:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


