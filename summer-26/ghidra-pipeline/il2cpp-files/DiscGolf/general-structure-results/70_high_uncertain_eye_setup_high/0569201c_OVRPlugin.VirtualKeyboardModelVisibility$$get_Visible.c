/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelVisibility$$get_Visible
ENTRY_POINT: 0569201c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_VirtualKeyboardModelVisibility__get_Visible(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x19;
  long *unaff_x20;
  long lVar10;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  
  *(undefined8 *)(param_1 + 0x38) = unaff_x22;
  LeanTween__value();
  if (unaff_x23 != 0) {
    FUN_06324564();
    if (unaff_x19[5] != 0) {
      thunk_FUN_0631c1e0(unaff_x19[5],*(undefined8 *)(unaff_x21 + 0x58),0);
      if ((unaff_x19[5] != 0) &&
         (lVar8 = thunk_FUN_0631c110(unaff_x19[5],0),
         puVar2 = OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo, lVar8 != 0)) {
        bVar3 = FUN_0631fedc(lVar8,*(undefined8 *)OVRTask<List<OVRPlugin_Result>>_TypeInfo,0);
        uVar9 = FUN_0631fedc(lVar8,*(undefined8 *)puVar2,0);
        iVar4 = FUN_056922b4(uVar9,lVar8);
        if (*unaff_x20 != 0) {
          if ((bool)(bVar3 & 1) != (*(char *)(*unaff_x20 + 0xd4) != '\0')) {
            FUN_0569154c();
            if (unaff_x19[6] == 0) goto LAB_056922b0;
            FUN_0569154c();
          }
          uVar5 = (**(code **)(*unaff_x19 + 0x188))();
          if (((uint)uVar9 & 1) != (uVar5 & 1)) {
            (**(code **)(*unaff_x19 + 0x188))();
            FUN_0569154c();
            (**(code **)(*unaff_x19 + 0x188))();
            FUN_0569154c();
          }
          iVar6 = (**(code **)(*unaff_x19 + 0x198))();
          if (iVar6 != iVar4) {
            (**(code **)(*unaff_x19 + 0x198))();
            FUN_05692370();
          }
          puVar2 = System_Collections_Generic_Dictionary<string,_UriParser>_TypeInfo;
          if (unaff_x19[5] != 0) {
            thunk_FUN_0631c714(unaff_x19[5],unaff_x19[0xd],0);
            lVar8 = unaff_x19[0xd];
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            if ((*unaff_x20 != 0) && (lVar8 != 0)) {
              FUN_0631a9d8(lVar8,**(undefined4 **)(*(long *)puVar2 + 0xb8),
                           *(undefined1 *)(*unaff_x20 + 0xd4),0);
              lVar8 = *(long *)puVar2;
              lVar10 = unaff_x19[0xd];
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar8 = *(long *)puVar2;
              }
              uVar1 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 8);
              uVar5 = (**(code **)(*unaff_x19 + 0x188))();
              if (lVar10 != 0) {
                FUN_0631a9d8(lVar10,uVar1,uVar5 & 1,0);
                lVar8 = *(long *)puVar2;
                lVar10 = unaff_x19[0xd];
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar8 = *(long *)puVar2;
                }
                uVar1 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 4);
                uVar7 = (**(code **)(*unaff_x19 + 0x198))();
                if (lVar10 != 0) {
                  FUN_0631a9d8(lVar10,uVar1,uVar7,0);
                  if (unaff_x19[5] != 0) {
                    thunk_FUN_0631c648(unaff_x19[5],unaff_x19[0xd],0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_056922b0:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


