/*
FUNCTION_NAME: FUN_07892dc8
ENTRY_POINT: 07892dc8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_3
*/


ulong FUN_07892dc8(long param_1,long param_2,int param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  
  if ((DAT_08272b75 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d8eaa8);
    FUN_0373b518(PTR_DAT_07d8d790);
    FUN_0373b518(
                System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                );
    DAT_08272b75 = 1;
  }
  if ((*(int *)(param_1 + 0x130) == 0) ||
     (uVar10 = FUN_075a6abc(param_1,0), puVar4 = PTR_DAT_07d86548, (uVar10 & 1) == 0))
  goto LAB_0789349c;
  switch(*(undefined4 *)(param_1 + 0x130)) {
  case 1:
  case 2:
    if (param_3 == 0) {
                    /* try { // try from 07892f9c to 07992fa3 has its CatchHandler @ 07893008 */
      if (param_2 == 0) goto LAB_078934b8;
      if (*(int *)(param_2 + 0x10) < 1) goto LAB_07892e6c;
                    /* try { // try from 07892fac to 07992fb7 has its CatchHandler @ 07893004 */
                    /* try { // try from 07892fb8 to 07993017 has its CatchHandler @ 07892eac */
      sVar7 = FUN_060bb390(param_2,0,0);
      bVar6 = sVar7 == 0x2d;
    }
    else {
      if (param_2 == 0) goto LAB_078934b8;
LAB_07892e6c:
      bVar6 = false;
    }
    if (*(int *)(param_2 + 0x10) < 1) {
LAB_07893018:
                    /* try { // try from 07893018 to 0799301b has its CatchHandler @ 07893090 */
      bVar1 = false;
    }
    else {
      sVar7 = FUN_060bb390(param_2,0,0);
      bVar1 = false;
      if (sVar7 == 0x2d) {
        iVar9 = FUN_07890de0(param_1);
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 07892fac with catch @ 07893004
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 07892f9c with catch @ 07893008
                        */
        if ((iVar9 == 0) && (iVar9 = FUN_07890e3c(param_1), 0 < iVar9)) {
          bVar1 = true;
        }
        else {
          iVar9 = FUN_07890e3c(param_1);
          if (iVar9 != 0) goto LAB_07893018;
          iVar9 = FUN_07890de0(param_1);
          bVar1 = 0 < iVar9;
        }
      }
    }
                    /* try { // try from 0789301c to 07993097 has its CatchHandler @ 07892eac */
    iVar9 = FUN_07890de0(param_1);
    if (iVar9 == 0) {
      bVar5 = true;
    }
    else {
      iVar9 = FUN_07890e3c(param_1);
      bVar5 = iVar9 == 0;
    }
    if (bVar1 || !bVar6) {
      if ((param_4 - 0x30 & 0xffff) < 10) goto LAB_0789349c;
      uVar2 = param_4 & 0xffff;
      if ((uVar2 == 0x2c) || (uVar2 == 0x2e)) {
        if (*(int *)(param_1 + 0x130) == 2) {
          lVar11 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d8eaa8,2);
          if (lVar11 == 0) {
LAB_078934b8:
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          if ((*(int *)(lVar11 + 0x18) == 0) ||
             (*(undefined2 *)(lVar11 + 0x20) = 0x2e, *(int *)(lVar11 + 0x18) == 1)) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          *(undefined2 *)(lVar11 + 0x22) = 0x2c;
          iVar9 = FUN_060c5c98(param_2,lVar11,0);
          if (iVar9 == -1) goto LAB_0789349c;
        }
      }
      else if ((uVar2 == 0x2d) && (bVar5 || param_3 == 0)) {
        param_4 = 0x2d;
                    /* catch() { ... } // from try @ 07893018 with catch @ 07893090 */
        goto LAB_0789349c;
      }
    }
    break;
  case 3:
    if ((param_4 & 0xffff) < 0x41) {
      if ((param_4 - 0x30 & 0xffff) < 10) goto LAB_0789349c;
    }
    else {
                    /* try { // try from 07893098 to 0799309f has its CatchHandler @ 078930b4 */
                    /* try { // try from 078930a0 to 079930ab has its CatchHandler @ 07892eac */
      if (((param_4 & 0xffff) < 0x5b) || ((param_4 - 0x61 & 0xffff) < 0x1a)) goto LAB_0789349c;
    }
    break;
  case 4:
    if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0x88) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
                    /* try { // try from 07892eac to 07992f9b has its CatchHandler @ 07892eac
                       catch() { ... } // from try @ 07892eac with catch @ 07892eac
                       catch() { ... } // from try @ 07892fb8 with catch @ 07892eac
                       catch() { ... } // from try @ 0789301c with catch @ 07892eac
                       catch() { ... } // from try @ 078930a0 with catch @ 07892eac */
    uVar10 = FUN_061ae240(param_4,0);
    if ((uVar10 & 1) != 0) {
      if (*(int *)(*(long *)(puVar4 + 0x88) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar10 = FUN_061ae3d8(param_4,0);
      if ((uVar10 & 1) != 0) {
        if (param_3 == 0) {
LAB_07892f20:
          if (*(int *)(*(long *)(puVar4 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar10 = FUN_061ae664(param_4,0);
          return uVar10;
        }
        if (param_2 == 0) goto LAB_078934b8;
        sVar7 = FUN_060bb390(param_2,param_3 + -1,0);
        if ((sVar7 == 0x20) || (sVar7 = FUN_060bb390(param_2,param_3 + -1,0), sVar7 == 0x2d))
        goto LAB_07892f20;
      }
      if (*(int *)(*(long *)(puVar4 + 0x88) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar10 = FUN_061ae338(param_4,0);
      iVar9 = param_3 + -1;
      if ((0 < param_3) && ((uVar10 & 1) != 0)) {
        if (param_2 == 0) goto LAB_078934b8;
        sVar7 = FUN_060bb390(param_2,iVar9,0);
        if (((sVar7 != 0x20) && (sVar7 = FUN_060bb390(param_2,iVar9,0), sVar7 != 0x27)) &&
           (sVar7 = FUN_060bb390(param_2,iVar9,0), sVar7 != 0x2d)) {
          if (*(int *)(*(long *)(puVar4 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar10 = FUN_061ae7dc(param_4,0);
          return uVar10;
        }
      }
      goto LAB_0789349c;
    }
    uVar2 = param_4 & 0xffff;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07893098 with catch @ 078930b4
                       catch(type#2 @ 00000000) { ... } // from try @ 078930ac with catch @ 078930b4
                        */
    if ((uVar2 == 0x20) || (uVar2 == 0x2d)) {
      if (param_3 != 0) {
        iVar9 = param_3 + -1;
        if (param_3 < 1) {
          if (param_2 == 0) goto LAB_078934b8;
        }
        else {
          if (param_2 == 0) goto LAB_078934b8;
          sVar7 = FUN_060bb390(param_2,iVar9,0);
          if (((sVar7 == 0x20) || (sVar7 = FUN_060bb390(param_2,iVar9,0), sVar7 == 0x27)) ||
             (sVar7 = FUN_060bb390(param_2,iVar9,0), sVar7 == 0x2d)) break;
        }
        if ((*(int *)(param_2 + 0x10) <= param_3) ||
           (((sVar7 = FUN_060bb390(param_2,param_3,0), sVar7 != 0x20 &&
             (sVar7 = FUN_060bb390(param_2,param_3,0), sVar7 != 0x27)) &&
            (sVar7 = FUN_060bb390(param_2,iVar9,0), sVar7 != 0x2d)))) goto LAB_0789349c;
      }
    }
    else if (uVar2 == 0x27) {
      if (param_2 == 0) goto LAB_078934b8;
      uVar10 = FUN_060c5b28(param_2,*(undefined8 *)PTR_DAT_07d8d790,0);
      if ((((uVar10 & 1) == 0) &&
          ((iVar9 = param_3 + -1, param_3 < 1 ||
           (((sVar7 = FUN_060bb390(param_2,iVar9,0), sVar7 != 0x20 &&
             (sVar7 = FUN_060bb390(param_2,iVar9,0), sVar7 != 0x27)) &&
            (sVar7 = FUN_060bb390(param_2,iVar9,0), sVar7 != 0x2d)))))) &&
         ((*(int *)(param_2 + 0x10) <= param_3 ||
          (((sVar7 = FUN_060bb390(param_2,param_3,0), sVar7 != 0x20 &&
            (sVar7 = FUN_060bb390(param_2,param_3,0), sVar7 != 0x27)) &&
           (sVar7 = FUN_060bb390(param_2,param_3,0), sVar7 != 0x2d)))))) {
        param_4 = 0x27;
        goto LAB_0789349c;
      }
    }
    break;
  case 5:
    uVar2 = param_4 & 0xffff;
    if (uVar2 < 0x41) {
      if (0x2f < uVar2) {
        if ((param_4 & 0xffff) < 0x3a) goto LAB_0789349c;
        if ((param_4 & 0xffff) == 0x40) {
          if (param_2 == 0) goto LAB_078934b8;
          iVar9 = FUN_060c5ba4(param_2,0x40,0);
          if (iVar9 == -1) {
            param_4 = 0x40;
            goto LAB_0789349c;
          }
        }
      }
    }
    else if ((uVar2 < 0x5b) || ((param_4 - 0x61 & 0xffff) < 0x1a)) goto LAB_0789349c;
    if (*(long *)
         System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
        == 0) goto LAB_078934b8;
    iVar9 = FUN_060c5ba4(*(long *)
                          System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                         ,param_4,0);
    if (iVar9 != -1) goto LAB_0789349c;
    if ((param_4 & 0xffff) == 0x2e) {
      if (param_2 == 0) goto LAB_078934b8;
      iVar9 = *(int *)(param_2 + 0x10);
      if (0 < iVar9) {
        iVar3 = param_3;
        if (iVar9 <= param_3) {
          iVar3 = iVar9 + -1;
        }
        iVar9 = 0;
        if (-1 < param_3) {
          iVar9 = iVar3;
        }
        sVar7 = FUN_060bb390(param_2,iVar9,0);
        iVar3 = *(int *)(param_2 + 0x10);
        iVar9 = iVar3 + -1;
        if (iVar3 < 1) {
          bVar6 = false;
        }
        else {
          if (param_3 + 1 < iVar3) {
            iVar9 = param_3 + 1;
          }
          iVar3 = 0;
          if (-1 < param_3 + 1) {
            iVar3 = iVar9;
          }
          sVar8 = FUN_060bb390(param_2,iVar3,0);
          bVar6 = sVar8 == 0x2e;
        }
        if ((sVar7 == 0x2e) || (bVar6)) break;
      }
      param_4 = 0x2e;
      goto LAB_0789349c;
    }
  }
  param_4 = 0;
LAB_0789349c:
  return (ulong)param_4;
}


