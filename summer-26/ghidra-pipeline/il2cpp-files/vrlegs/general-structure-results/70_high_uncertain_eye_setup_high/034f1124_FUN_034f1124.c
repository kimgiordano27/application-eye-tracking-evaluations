/*
FUNCTION_NAME: FUN_034f1124
ENTRY_POINT: 034f1124
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x034f13a4) */

undefined8 FUN_034f1124(double param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_48;
  char local_3c [4];
  undefined8 local_38;
  
  if ((DAT_0412dc99 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbeeb0);
    FUN_01ab69ac(UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass_PassData_TypeInfo);
    FUN_01ab69ac(UnityEngine_Rendering_Universal_Internal_DepthOnlyPass_<>c_TypeInfo);
    FUN_01ab69ac(UnityEngine_Rendering_Universal_Internal_DepthOnlyPass_PassData_TypeInfo);
    FUN_01ab69ac(System_Security_Cryptography_DerSequenceReader_<>c_TypeInfo);
    DAT_0412dc99 = 1;
  }
  local_48 = 0;
  if (param_1 < 0.0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
    uVar3 = thunk_FUN_01a89e68();
    uVar7 = thunk_FUN_01a6ca08(
                              System_ComponentModel_Design_DesignerOptionService_DesignerOptionCollection_TypeInfo
                              );
    FUN_026b274c(uVar3,uVar7,0);
  }
  else {
    if (param_3 != 0) {
      uVar7 = *(undefined8 *)(param_2 + 0x40);
      local_3c[0] = '\0';
      FUN_027e0bd8(uVar7,local_3c,0);
      lVar1 = thunk_FUN_01a89e68(*(undefined8 *)
                                  System_Security_Cryptography_DerSequenceReader_<>c_TypeInfo);
      FUN_027b3d9c(lVar1,0);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      *(long *)(lVar1 + 0x10) = param_3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(lVar1 + 0x10),param_3);
      plVar8 = *(long **)(param_2 + 0x38);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)UnityEngine_Rendering_Universal_Internal_DepthOnlyPass_<>c_TypeInfo) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_034f1248;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01a472ec(plVar8,*(long *)
                                    UnityEngine_Rendering_Universal_Internal_DepthOnlyPass_<>c_TypeInfo
                            ,0);
LAB_034f1248:
      local_48 = (*(code *)*puVar2)(plVar8,puVar2[1]);
      if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar3 = FUN_027447a8(param_1,&local_48,0);
      *(undefined8 *)(lVar1 + 0x18) = uVar3;
      lVar9 = *(long *)(param_2 + 0x60);
      lVar4 = lVar9 + 1;
      *(long *)(param_2 + 0x60) = lVar4;
      *(long *)(lVar1 + 0x20) = lVar9;
      if (lVar4 < 1) {
        *(undefined8 *)(param_2 + 0x60) = 1;
      }
      if (*(long *)(param_2 + 0x48) != 0) {
        FUN_02225650(*(long *)(param_2 + 0x48),lVar1,
                     *(undefined8 *)
                      UnityEngine_Rendering_Universal_Internal_DepthOnlyPass_PassData_TypeInfo);
        if (*(long *)(param_2 + 0x50) != 0) {
          local_38 = *(undefined8 *)(lVar1 + 0x20);
          FUN_0219b9a4(*(long *)(param_2 + 0x50),&local_38,lVar1,
                       *(undefined8 *)
                        UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass_PassData_TypeInfo
                      );
          uVar3 = *(undefined8 *)(lVar1 + 0x20);
          if (local_3c[0] != '\0') {
            OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
          }
          return uVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar3 = thunk_FUN_01a89e68();
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cd0fc0);
    FUN_026a44fc(uVar3,uVar7,0);
  }
  uVar7 = thunk_FUN_01a6ca08(UnityEngine_UIElements_DetachFromPanelEvent_<>c_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar3,uVar7);
}


