/*
FUNCTION_NAME: OVRPlugin.EyeGazeState$$get_IsValid
ENTRY_POINT: 0569200c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_3;validity_or_gating_hits_13;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_EyeGazeState__get_IsValid(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar9;
  long lVar10;
  
  if (unaff_x21 != 0) {
    lVar9 = *(long *)(unaff_x21 + 0x60);
    lVar10 = unaff_x20[2];
    unaff_x19[7] = lVar9;
    LeanTween__value(unaff_x19 + 7,lVar9);
    if (lVar10 != 0) {
      FUN_06324564(lVar10,lVar9,0);
      if (unaff_x19[5] != 0) {
        thunk_FUN_0631c1e0(unaff_x19[5],*(undefined8 *)(unaff_x21 + 0x58),0);
        if ((unaff_x19[5] != 0) &&
           (lVar9 = thunk_FUN_0631c110(unaff_x19[5],0),
           puVar2 = OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo, lVar9 != 0)) {
          bVar3 = FUN_0631fedc(lVar9,*(undefined8 *)OVRTask<List<OVRPlugin_Result>>_TypeInfo,0);
          uVar8 = FUN_0631fedc(lVar9,*(undefined8 *)puVar2,0);
          iVar4 = FUN_056922b4(uVar8,lVar9);
          if (*unaff_x20 != 0) {
            if ((bool)(bVar3 & 1) != (*(char *)(*unaff_x20 + 0xd4) != '\0')) {
              FUN_0569154c();
              if (unaff_x19[6] == 0) goto LAB_056922b0;
              FUN_0569154c();
            }
            uVar5 = (**(code **)(*unaff_x19 + 0x188))();
            if (((uint)uVar8 & 1) != (uVar5 & 1)) {
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
              lVar9 = unaff_x19[0xd];
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              if ((*unaff_x20 != 0) && (lVar9 != 0)) {
                FUN_0631a9d8(lVar9,**(undefined4 **)(*(long *)puVar2 + 0xb8),
                             *(undefined1 *)(*unaff_x20 + 0xd4),0);
                lVar9 = *(long *)puVar2;
                lVar10 = unaff_x19[0xd];
                if (*(int *)(lVar9 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar9 = *(long *)puVar2;
                }
                uVar1 = *(undefined4 *)(*(long *)(lVar9 + 0xb8) + 8);
                uVar5 = (**(code **)(*unaff_x19 + 0x188))();
                if (lVar10 != 0) {
                  FUN_0631a9d8(lVar10,uVar1,uVar5 & 1,0);
                  lVar9 = *(long *)puVar2;
                  lVar10 = unaff_x19[0xd];
                  if (*(int *)(lVar9 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar9 = *(long *)puVar2;
                  }
                  uVar1 = *(undefined4 *)(*(long *)(lVar9 + 0xb8) + 4);
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
  }
LAB_056922b0:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


