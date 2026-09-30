/*
FUNCTION_NAME: FUN_0751938c
ENTRY_POINT: 0751938c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x075196d0) */

long FUN_0751938c(long param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  
  if ((DAT_07ef4b8a & 1) == 0) {
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensor<int>_get_Item__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Max__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Ne__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensor<int>_FromValues__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensor<int>_ToArray__);
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    DAT_07ef4b8a = 1;
  }
  FUN_074eeee0(param_2,0);
  if ((param_2 != 0) && (lVar9 = *(long *)(param_1 + 0x20), lVar9 != 0)) {
    if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_2 + 0x44)) {
LAB_075196c0:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    lVar9 = *(long *)(lVar9 + (long)(int)*(uint *)(param_2 + 0x44) * 8 + 0x20);
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar9 + 0x18);
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      if (0 < (int)uVar1) {
        lVar11 = 0;
        do {
          if (uVar1 <= (uint)lVar11) goto LAB_075196c0;
          if (*(long *)(lVar9 + 0x20 + lVar11 * 8) == 0) goto LAB_075196bc;
          FUN_07516ab4();
          uVar1 = *(uint *)(lVar9 + 0x18);
          lVar11 = lVar11 + 1;
        } while ((int)lVar11 < (int)uVar1);
      }
      puVar4 = Method_Unity_InferenceEngine_PartialTensor<int>_ToArray__;
      plVar7 = (long *)
               Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
      ;
      if (*(int *)(*(long *)
                    Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                  + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      lVar11 = FUN_03fc4cf8(*(undefined8 *)puVar4);
      puVar4 = Method_Unity_InferenceEngine_PartialTensorElement<float>_Ne__;
      if ((int)*(ulong *)(lVar9 + 0x18) < 1) {
        lVar14 = 0;
      }
      else {
        uVar17 = 0;
        lVar14 = 0;
        bVar2 = false;
        bVar3 = false;
        uVar10 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
        iVar13 = 0x7fffffff;
        do {
          if (uVar10 <= uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          lVar16 = *(long *)(lVar9 + uVar17 * 8 + 0x20);
          iVar5 = FUN_07519910(param_1,lVar16);
          if (iVar5 <= iVar13) {
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar15 = *(int *)(lVar11 + 0x18);
            *(undefined4 *)(lVar11 + 0x18) = 0;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (0 < iVar15) {
              FUN_05e3b0f4(*(undefined8 *)(lVar11 + 0x10),0,iVar15,0);
            }
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_07519980(lVar16,uVar6,uVar8,lVar11);
            if (lVar11 == 0) {
LAB_075196ac:
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar15 = 0;
            while (iVar15 < *(int *)(lVar11 + 0x18)) {
              lVar16 = FUN_0459ed6c(lVar11,iVar15,*(undefined8 *)puVar4);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar12 = *(long *)(lVar16 + 0x28);
              if ((lVar12 == 0) ||
                 (uVar10 = (**(code **)(lVar12 + 0x18))
                                     (*(undefined8 *)(lVar12 + 0x40),param_2,
                                      *(undefined8 *)(lVar12 + 0x28)), (uVar10 & 1) != 0)) {
                FUN_074ee0ac(lVar14 == 0 || iVar13 == iVar5,0);
                if (lVar12 == 0) {
                  if (bVar2) goto LAB_075195dc;
                  if (lVar14 == 0 && !bVar3) goto LAB_07519604;
                  bVar2 = false;
                  bVar3 = true;
                }
                else if (bVar2) {
                  bVar3 = true;
LAB_075195dc:
                  bVar2 = true;
                }
                else {
LAB_07519604:
                  bVar3 = false;
                  lVar14 = lVar16;
                  iVar13 = iVar5;
                  bVar2 = lVar12 != 0;
                }
              }
              iVar15 = iVar15 + 1;
              if (lVar11 == 0) goto LAB_075196ac;
            }
          }
          uVar17 = uVar17 + 1;
          uVar10 = (ulong)*(uint *)(lVar9 + 0x18);
        } while ((long)uVar17 < (long)(int)*(uint *)(lVar9 + 0x18));
        plVar7 = (long *)
                 Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
        ;
        if (bVar3) {
          uVar6 = thunk_FUN_036aa1c8(PTR_DAT_079f4558);
          plVar7 = (long *)FUN_03642a4c(uVar6,3);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar9 = *(long *)(param_2 + 0x10);
          if ((lVar9 != 0) &&
             (lVar11 = thunk_FUN_0367fd24(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0)) {
            uVar6 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar6,0);
          }
          if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          plVar7[4] = lVar9;
          thunk_FUN_036b7ad0(plVar7 + 4,lVar9);
          uVar6 = *(undefined8 *)(param_2 + 0x20);
          if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          uVar17 = FUN_05e30794(uVar6,0,0);
          if ((uVar17 & 1) == 0) {
            uVar6 = thunk_FUN_036aa1c8(Method_Unity_InferenceEngine_PartialTensor<int>_get_Item__);
            uVar8 = thunk_FUN_036aa1c8(PTR_DAT_079f4558);
            lVar9 = FUN_03642a4c(uVar8,1);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar8 = *(undefined8 *)(param_2 + 0x20);
            FUN_03154b74(lVar9,uVar8);
            FUN_03154bd8(lVar9,0,uVar8);
            uVar8 = thunk_FUN_036aa1c8(Method_Unity_InferenceEngine_PartialTensor<float>__ctor__);
            uVar8 = FUN_074eed20(uVar8,lVar9,0);
          }
          else {
            uVar6 = thunk_FUN_036aa1c8(Method_Unity_InferenceEngine_PartialTensor<int>_get_Item__);
            uVar8 = thunk_FUN_036aa1c8(PTR_DAT_079f49e0);
          }
          FUN_03154b74(plVar7,uVar8);
          FUN_03154bd8(plVar7,1,uVar8);
          uVar8 = FUN_0750d110(param_2);
          FUN_03154b74(plVar7,uVar8);
          FUN_03154bd8(plVar7,2,uVar8);
          uVar6 = FUN_074ee34c(uVar6,plVar7,0);
          uVar8 = thunk_FUN_036aa1c8(Method_Unity_InferenceEngine_PartialTensor<int>_set_Item__);
                    /* WARNING: Subroutine does not return */
          FUN_03642acc(uVar6,uVar8);
        }
      }
      puVar4 = Method_Unity_InferenceEngine_PartialTensor<int>_FromValues__;
      if (*(int *)(*plVar7 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_03fc4778(lVar11,*(undefined8 *)puVar4);
      return lVar14;
    }
  }
LAB_075196bc:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


