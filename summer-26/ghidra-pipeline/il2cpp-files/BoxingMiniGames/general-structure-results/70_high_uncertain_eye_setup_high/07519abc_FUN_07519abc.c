/*
FUNCTION_NAME: FUN_07519abc
ENTRY_POINT: 07519abc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07519f3c) */
/* WARNING: Removing unreachable block (ram,0x07519ec4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_07519abc(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  
  puVar9 = 
  Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
  ;
  if ((DAT_07ef4b8e & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4938);
    FUN_03642964(PTR_DAT_07a30e10);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Max__);
    FUN_03642964(PTR_DAT_079ffdf0);
    FUN_03642964(PTR_DAT_079ffdf8);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Ne__);
    FUN_03642964(PTR_DAT_079ffe00);
    FUN_03642964(PTR_DAT_07a02aa0);
    FUN_03642964(PTR_DAT_079fd4b0);
    FUN_03642964(PTR_DAT_079fdb90);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensor<int>_FromValues__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Pow__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensor<int>_ToArray__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Sign__);
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    DAT_07ef4b8e = 1;
  }
  puVar3 = Method_Unity_InferenceEngine_PartialTensor<int>_ToArray__;
  FUN_074eeee0(param_2,0);
  FUN_07516ab4(param_1);
  FUN_0751a150(param_1,param_2);
  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar11 = FUN_03fc4cf8(*(undefined8 *)puVar3);
  FUN_07519044(param_1,param_2,lVar11);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (*(int *)(lVar11 + 0x18) != 0) {
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    puVar3 = Method_Unity_InferenceEngine_PartialTensorElement<float>_Sign__;
    lVar12 = FUN_03fc4cf8(*(undefined8 *)
                           Method_Unity_InferenceEngine_PartialTensorElement<float>_Sign__);
    lVar13 = FUN_03fc4cf8(*(undefined8 *)puVar3);
    puVar10 = Method_Unity_InferenceEngine_PartialTensorElement<float>_Ne__;
    puVar8 = PTR_DAT_07a02aa0;
    puVar6 = PTR_DAT_079ffdf8;
    puVar3 = PTR_DAT_079f4938;
    if (lVar11 != 0) {
      iVar19 = 0;
      do {
        puVar7 = PTR_DAT_079ffe00;
        puVar5 = PTR_DAT_079fdb90;
        puVar4 = PTR_DAT_079fd4b0;
        if (*(int *)(lVar11 + 0x18) <= iVar19) {
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(int *)(lVar13 + 0x18) == 0) {
            if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(char *)(param_2 + 0x40) == '\0') {
              uVar14 = thunk_FUN_036aa1c8(PTR_DAT_079f4558);
              lVar11 = FUN_03642a4c(uVar14,1);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar14 = *(undefined8 *)(param_2 + 0x10);
              FUN_03154b74(lVar11,uVar14);
              FUN_03154bd8(lVar11,0,uVar14);
              uVar14 = thunk_FUN_036aa1c8(
                                         Method_Unity_AppUI_UI_Picker<DropdownItem,_DropdownItem>__ctor__
                                         );
              uVar14 = FUN_074ee34c(uVar14,lVar11,0);
              uVar16 = thunk_FUN_036aa1c8(
                                         Method_Unity_InferenceEngine_PartialTensor<float>_set_Item__
                                         );
                    /* WARNING: Subroutine does not return */
              FUN_03642acc(uVar14,uVar16);
            }
          }
          if (*(char *)(param_1 + 0x9a) != '\0') {
            iVar19 = 0;
            while (iVar19 < *(int *)(lVar13 + 0x18)) {
              plVar15 = (long *)FUN_0459ed6c(lVar13,iVar19,*(undefined8 *)puVar6);
              if (plVar15 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
                if ((bVar1 <= *(byte *)(*plVar15 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar5)
                   ) {
                  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  uVar14 = *(undefined8 *)(param_2 + 0x10);
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_036a1978();
                  }
                  uVar14 = FUN_074f00e4(uVar14,0);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  FUN_0459edc0(lVar13,iVar19,uVar14,*(undefined8 *)puVar7);
                }
              }
              iVar19 = iVar19 + 1;
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
            }
          }
          FUN_03db053c(param_3,lVar13,*(undefined8 *)puVar8);
          if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          puVar3 = Method_Unity_InferenceEngine_PartialTensorElement<float>_Pow__;
          FUN_03fc4778(lVar12,*(undefined8 *)
                               Method_Unity_InferenceEngine_PartialTensorElement<float>_Pow__);
          FUN_03fc4778(lVar13,*(undefined8 *)puVar3);
          goto LAB_07519ed4;
        }
        uVar14 = FUN_0459ed6c(lVar11,iVar19,*(undefined8 *)puVar10);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        iVar20 = *(int *)(lVar12 + 0x18);
        *(undefined4 *)(lVar12 + 0x18) = 0;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (0 < iVar20) {
          FUN_05e3b0f4(*(undefined8 *)(lVar12 + 0x10),0,iVar20,0);
        }
        FUN_075184c8(param_1,uVar14,param_2,lVar12);
        if (lVar12 == 0) {
LAB_07519f2c:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        iVar20 = 0;
        while (iVar20 < *(int *)(lVar12 + 0x18)) {
          uVar14 = FUN_0459ed6c(lVar12,iVar20,*(undefined8 *)puVar6);
          if (lVar13 == 0) {
LAB_07519f28:
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar17 = *(long *)(lVar13 + 0x10);
          lVar18 = *(long *)puVar3;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar17 == 0) goto LAB_07519f28;
          uVar2 = *(uint *)(lVar13 + 0x18);
          if (uVar2 < *(uint *)(lVar17 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar14;
            thunk_FUN_036b7ad0();
          }
          else {
            FUN_0459f03c(lVar13,uVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
          iVar20 = iVar20 + 1;
          if (lVar12 == 0) goto LAB_07519f2c;
        }
        iVar19 = iVar19 + 1;
      } while (lVar11 != 0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (*(char *)(param_2 + 0x40) == '\0') {
    uVar14 = thunk_FUN_036aa1c8(PTR_DAT_079f4558);
    lVar11 = FUN_03642a4c(uVar14,2);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar14 = *(undefined8 *)(param_2 + 0x10);
    FUN_03154b74(lVar11,uVar14);
    FUN_03154bd8(lVar11,0,uVar14);
    uVar14 = FUN_0750d110(param_2);
    FUN_03154b74(lVar11,uVar14);
    FUN_03154bd8(lVar11,1,uVar14);
    uVar14 = thunk_FUN_036aa1c8(Method_Unity_InferenceEngine_PartialTensor<float>_FromValues__);
    uVar14 = FUN_074ee34c(uVar14,lVar11,0);
    uVar16 = thunk_FUN_036aa1c8(Method_Unity_InferenceEngine_PartialTensor<float>_set_Item__);
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar14,uVar16);
  }
LAB_07519ed4:
  puVar3 = Method_Unity_InferenceEngine_PartialTensor<int>_FromValues__;
  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_03fc4778(lVar11,*(undefined8 *)puVar3);
  return;
}


