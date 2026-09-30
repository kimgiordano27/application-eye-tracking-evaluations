/*
FUNCTION_NAME: OVRPlugin$$GetSpaceSemanticLabels
ENTRY_POINT: 0338edd8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceSemanticLabels(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  FUN_01c5d288(Method_TMPro_FastAction<Object>_Add__);
  FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<UIRStylePainter_Entry>_Dispose__);
  FUN_01c5d288(Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__);
  FUN_01c5d288(UnityEngine_Splines_InterpolatorUtility_TypeInfo);
  FUN_01c5d288(VoxelBusters_EssentialKit_GameServicesCore_LoadAchievementsInternalCallback_TypeInfo)
  ;
  FUN_01c5d288(PTR_DAT_042305b8);
  FUN_01c5d288(System_Runtime_Remoting_InternalRemotingServices_TypeInfo);
  FUN_01c5d288(PTR_DAT_04230910);
  FUN_01c5d288(PTR_DAT_0422fb28);
  *(undefined1 *)(unaff_x21 + 0x672) = 1;
  puVar1 = PTR_DAT_0422fb28;
  lVar8 = *(long *)(unaff_x20 + 0xe0);
  if (lVar8 == 0) {
    uVar9 = *(undefined8 *)Method_TMPro_FastAction<object,_Compute_DT_EventArgs>__ctor__;
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    plVar3 = (long *)FUN_032e04b8(uVar9,0);
    puVar2 = PTR_DAT_04230910;
    plVar4 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,1);
    if (plVar4 == (long *)0x0) goto LAB_0338f14c;
    lVar8 = *(long *)(unaff_x20 + 0xc0);
    if ((lVar8 != 0) &&
       (lVar5 = thunk_FUN_01c495e4(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto LAB_0338f154;
    if ((int)plVar4[3] == 0) goto LAB_0338f150;
    plVar4[4] = lVar8;
    if (plVar3 == (long *)0x0) goto LAB_0338f14c;
    uVar9 = (**(code **)(*plVar3 + 0x8f8))(plVar3,plVar4,*(undefined8 *)(*plVar3 + 0x900));
    *(undefined8 *)(unaff_x20 + 0xd8) = uVar9;
    uVar10 = *(undefined8 *)(unaff_x20 + 0xd0);
    uVar9 = FUN_032e04b8(*(undefined8 *)
                          VoxelBusters_EssentialKit_GameServicesCore_LoadAchievementsInternalCallback_TypeInfo
                         ,0);
    if (*(int *)(*(long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo);
    }
    uVar6 = FUN_033802b8(uVar10,uVar9,0);
    if ((uVar6 & 1) == 0) {
      plVar3 = *(long **)(unaff_x20 + 0xd0);
      if (plVar3 == (long *)0x0) goto LAB_0338f14c;
      uVar9 = (**(code **)(*plVar3 + 0x438))(plVar3,*(undefined8 *)(*plVar3 + 0x440));
      lVar8 = *(long *)puVar1;
      uVar10 = *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<UIRStylePainter_Entry>_Dispose__;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar8);
      }
      uVar10 = FUN_032e04b8(uVar10,0);
      uVar6 = FUN_032e935c(uVar9,uVar10,0);
      if ((uVar6 & 1) != 0) goto LAB_0338ef98;
      lVar8 = *(long *)(unaff_x20 + 0xd0);
    }
    else {
LAB_0338ef98:
      uVar9 = *(undefined8 *)Method_TMPro_FastAction<Object>_Add__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar3 = (long *)FUN_032e04b8(uVar9,0);
      plVar4 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar2,1);
      if (plVar4 == (long *)0x0) goto LAB_0338f14c;
      lVar8 = *(long *)(unaff_x20 + 0xc0);
      if ((lVar8 != 0) &&
         (lVar5 = thunk_FUN_01c495e4(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_0338f154;
      if ((int)plVar4[3] == 0) goto LAB_0338f150;
      plVar4[4] = lVar8;
      if (plVar3 == (long *)0x0) goto LAB_0338f14c;
      lVar8 = (**(code **)(*plVar3 + 0x8f8))(plVar3,plVar4,*(undefined8 *)(*plVar3 + 0x900));
    }
    lVar5 = *(long *)(unaff_x20 + 0xd8);
    plVar3 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar2,1);
    if (plVar3 == (long *)0x0) goto LAB_0338f14c;
    if ((lVar8 != 0) &&
       (lVar7 = thunk_FUN_01c495e4(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar7 == 0))
    goto LAB_0338f154;
    if ((int)plVar3[3] == 0) goto LAB_0338f150;
    plVar3[4] = lVar8;
    if (lVar5 == 0) goto LAB_0338f14c;
    uVar9 = FUN_032eb758(lVar5,plVar3,0);
    if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo);
    }
    plVar3 = (long *)FUN_033a78fc(0);
    if (plVar3 == (long *)0x0) goto LAB_0338f14c;
    lVar8 = (**(code **)(*plVar3 + 0x188))(plVar3,uVar9,*(undefined8 *)(*plVar3 + 400));
    *(long *)(unaff_x20 + 0xe0) = lVar8;
  }
  lVar5 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
  if (lVar5 != 0) {
    if ((unaff_x19 != 0) && (lVar7 = thunk_FUN_01c495e4(), lVar7 == 0)) {
LAB_0338f154:
      uVar9 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar9,0);
    }
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_0338f150:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    *(long *)(lVar5 + 0x20) = unaff_x19;
    if (lVar8 != 0) {
      lVar8 = (**(code **)(lVar8 + 0x18))
                        (*(undefined8 *)(lVar8 + 0x40),lVar5,*(undefined8 *)(lVar8 + 0x28));
      if (lVar8 != 0) {
        uVar9 = *(undefined8 *)Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__;
        lVar5 = thunk_FUN_01c495e4(lVar8,uVar9);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(lVar8,uVar9);
        }
      }
      return;
    }
  }
LAB_0338f14c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


