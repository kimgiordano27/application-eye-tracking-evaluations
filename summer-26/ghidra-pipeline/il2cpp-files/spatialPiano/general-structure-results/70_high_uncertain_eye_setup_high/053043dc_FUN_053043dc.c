/*
FUNCTION_NAME: FUN_053043dc
ENTRY_POINT: 053043dc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_053043dc(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 local_d0 [2];
  undefined8 uStack_bc;
  undefined8 local_ac [2];
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_06bbb125 & 1) == 0) {
    FUN_02f08768(Unity_Properties_PropertyBag<ResolvedStyleAccess>_TypeInfo);
    FUN_02f08768(System_Runtime_Serialization_DataContract_TypeInfo);
    FUN_02f08768(System_Runtime_Serialization_DataContractAttribute_TypeInfo);
    FUN_02f08768(System_CultureAwareComparer_TypeInfo);
    DAT_06bbb125 = 1;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(long *)(param_4 + 0x20) != 0) {
    if (*(int *)(*(long *)(param_4 + 0x20) + 0x84) == 3) {
      return;
    }
    uVar1 = FUN_05302e0c();
    uVar11 = 0x3f800000;
    uVar12 = 0x3f800000;
    uVar13 = 0x3f800000;
    uVar14 = 0x3f800000;
    if ((uVar1 & 1) == 0) {
      uVar14 = *(undefined4 *)(param_4 + 0x54);
      uVar13 = *(undefined4 *)(param_4 + 0x58);
      uVar12 = *(undefined4 *)(param_4 + 0x5c);
      uVar11 = *(undefined4 *)(param_4 + 0x60);
    }
    lVar3 = *(long *)(param_4 + 0x20);
    if (lVar3 != 0) {
      local_70 = *(undefined8 *)(lVar3 + 0x168);
      uStack_88 = *(undefined8 *)(lVar3 + 0x150);
      local_90 = *(undefined8 *)(lVar3 + 0x148);
      uStack_78 = *(undefined8 *)(lVar3 + 0x160);
      uVar10 = *(undefined8 *)(lVar3 + 0x158);
      uStack_80 = uVar10;
      if (*(int *)(*(long *)System_CultureAwareComparer_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar9 = (undefined4)uVar10;
      uVar7 = FUN_053016ec(&local_90);
      plVar6 = *(long **)(param_4 + 0x70);
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar1 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) ==
                *(long *)System_Runtime_Serialization_DataContract_TypeInfo) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_05304524;
            }
            uVar1 = uVar1 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar1 != 0);
        }
        puVar2 = (undefined8 *)
                 FUN_02f421d0(plVar6,*(long *)System_Runtime_Serialization_DataContract_TypeInfo,0);
LAB_05304524:
        uVar7 = (*(code *)*puVar2)(uVar7,uVar9,param_3,plVar6,puVar2[1]);
      }
      if (*(long *)(param_4 + 0x20) != 0) {
        FUN_05302210(local_ac);
        local_d0[0] = local_ac[0];
        uStack_bc = uStack_98;
        FUN_05304678(uVar7,uVar9,param_3,param_4,local_d0);
        lVar3 = *(long *)(param_4 + 0x28);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x50) = uVar14;
          *(undefined4 *)(lVar3 + 0x54) = uVar13;
          *(undefined4 *)(lVar3 + 0x58) = uVar12;
          *(undefined4 *)(lVar3 + 0x5c) = uVar11;
          plVar6 = *(long **)(param_4 + 0x48);
          lVar3 = *(long *)(param_4 + 0x28);
          if (plVar6 == (long *)0x0) {
            uVar8 = 0;
          }
          else {
            lVar4 = *plVar6;
            uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar1 != 0) {
              piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) ==
                    *(long *)Unity_Properties_PropertyBag<ResolvedStyleAccess>_TypeInfo) {
                  puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
                  goto LAB_05304604;
                }
                uVar1 = uVar1 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar1 != 0);
            }
            puVar2 = (undefined8 *)
                     FUN_02f421d0(plVar6,*(long *)
                                          Unity_Properties_PropertyBag<ResolvedStyleAccess>_TypeInfo
                                  ,0);
LAB_05304604:
            uVar8 = (*(code *)*puVar2)(plVar6,puVar2[1]);
          }
          if (lVar3 != 0) {
            lVar4 = *(long *)(param_4 + 0x28);
            *(undefined4 *)(lVar3 + 0x78) = uVar8;
            if (lVar4 != 0) {
              FUN_052368cc(lVar4,*(undefined8 *)(param_4 + 0x68),0,0);
              OVRManager__OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice
                        (uVar14,uVar13,uVar12,uVar11,uVar7,uVar9,param_3,param_4);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


