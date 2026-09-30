/*
FUNCTION_NAME: OVRPlugin$$SetControllerHaptics
ENTRY_POINT: 033821cc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__SetControllerHaptics(void)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int iVar13;
  uint uVar14;
  
  FUN_01c5d288();
  FUN_01c5d288(PTR_DAT_0422fb28);
  FUN_01c5d288(Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x612) = 1;
  FUN_0336c7fc();
  puVar3 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<string,_TranslationQuery>_get_Current__;
  puVar4 = Method_System_Collections_Generic_Dictionary_Enumerator<string,_TermData>_MoveNext__;
  if (unaff_x19 != (long *)0x0) {
    uVar8 = (**(code **)(*unaff_x19 + 0x818))();
    lVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
    FUN_02d4f99c(lVar9,uVar8,*(undefined8 *)puVar4);
    uVar10 = FUN_032ea6e0();
    if ((uVar10 & 1) != 0) {
      lVar11 = (**(code **)(*unaff_x19 + 0x878))();
      puVar4 = Method_System_Collections_Generic_Dictionary_Enumerator<string,_TermData>_Dispose__;
      if (lVar11 == 0) goto LAB_0338242c;
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (0 < (int)uVar1) {
        uVar14 = 0;
        do {
          if (uVar1 <= uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          plVar12 = *(long **)(lVar11 + (long)(int)uVar14 * 8 + 0x20);
          if (plVar12 == (long *)0x0) goto LAB_0338242c;
          uVar8 = (**(code **)(*plVar12 + 0x818))
                            (plVar12,unaff_w21,*(undefined8 *)(*plVar12 + 0x820));
          if (lVar9 == 0) goto LAB_0338242c;
          FUN_02d50250(lVar9,uVar8,*(undefined8 *)puVar4);
          uVar1 = *(uint *)(lVar11 + 0x18);
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)uVar1);
      }
    }
    puVar4 = System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
    if (*(int *)(*(long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03382dfc(lVar9);
    puVar7 = 
    Method_System_Collections_Generic_Dictionary_Enumerator<string,_TranslationQuery>_MoveNext__;
    puVar6 = 
    Method_System_Collections_Generic_Dictionary_Enumerator<string,_TranslationQuery>_Dispose__;
    puVar5 = Photon_Realtime_LoadBalancingClient_TypeInfo;
    puVar3 = PTR_DAT_0422fb28;
    if (lVar9 != 0) {
      if (0 < *(int *)(lVar9 + 0x18)) {
        iVar13 = 0;
        do {
          plVar12 = (long *)FUN_02d4fd88(lVar9,iVar13,*(undefined8 *)puVar6);
          if (plVar12 == (long *)0x0) goto LAB_0338242c;
          uVar8 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar3);
          }
          uVar10 = FUN_032ea0d4(uVar8);
          if ((uVar10 & 1) != 0) {
            uVar8 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar4);
            }
            plVar12 = (long *)FUN_0338299c(uVar8,plVar12);
            if (plVar12 != (long *)0x0) {
              bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5))
              {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d748(plVar12);
              }
            }
            FUN_02d4fddc(lVar9,iVar13,plVar12,*(undefined8 *)puVar7);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < *(int *)(lVar9 + 0x18));
      }
      return lVar9;
    }
  }
LAB_0338242c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


