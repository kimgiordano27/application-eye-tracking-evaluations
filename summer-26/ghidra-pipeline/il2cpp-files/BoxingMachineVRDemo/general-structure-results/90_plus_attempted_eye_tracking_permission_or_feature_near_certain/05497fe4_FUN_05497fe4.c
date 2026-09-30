/*
FUNCTION_NAME: FUN_05497fe4
ENTRY_POINT: 05497fe4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 149
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05497fe4(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  long *plVar12;
  undefined *puVar6;
  
  if ((DAT_06b7ea17 & 1) == 0) {
    FUN_02d6084c(System_Xml_Schema_FacetsChecker_FacetsCompiler_var);
    FUN_02d6084c(UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var);
    FUN_02d6084c(TMPro_FloatTween_var);
    FUN_02d6084c(PTR_DAT_0676bc98);
    FUN_02d6084c(PTR_DAT_0676bca0);
    FUN_02d6084c(PTR_DAT_06773050);
    DAT_06b7ea17 = 1;
  }
  puVar1 = TMPro_FloatTween_var;
  puVar11 = PTR_DAT_0676bc98;
  if (param_2 == 0) {
LAB_054983b0:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if ((((*(int *)(param_2 + 0x10) < 3) ||
       (uVar3 = FUN_04e87a5c(param_2,0,0), (uVar3 & 0xffdf) != 0x58)) ||
      (uVar3 = FUN_04e87a5c(param_2,1,0), (uVar3 & 0xffdf) != 0x4d)) ||
     (uVar3 = FUN_04e87a5c(param_2,2,0), (uVar3 & 0xffdf) != 0x4c)) {
    uVar3 = *(uint *)(param_1 + 0x20);
    plVar12 = (long *)(param_1 + 0x10);
    do {
      uVar3 = uVar3 - 1;
      if ((int)uVar3 < 0) {
LAB_054981d0:
        if (*(int *)(param_2 + 0x10) == 0) {
          if (param_3 == 0) goto LAB_054983b0;
        }
        else {
          if (param_3 == 0) goto LAB_054983b0;
          puVar6 = UnityEngine_Awaitable_AwaitableAsyncMethodBuilder_var;
          if (*(int *)(param_3 + 0x10) == 0) goto LAB_054981ec;
        }
        lVar10 = *(long *)puVar11;
        if (lVar10 == 0) goto LAB_054983b0;
        if ((*(int *)(param_3 + 0x10) == *(int *)(lVar10 + 0x10)) &&
           (uVar4 = thunk_FUN_04e8bd3c(param_3,lVar10,0), (uVar4 & 1) != 0)) {
          uVar5 = thunk_FUN_02dc61f4(PTR_DAT_0675e2d0);
          uVar5 = FUN_02d60934(uVar5,2);
          FUN_028f4e40();
          puVar11 = PTR_DAT_0676bca0;
        }
        else {
          if (*(long *)puVar1 == 0) goto LAB_054983b0;
          if (((*(int *)(param_3 + 0x10) != *(int *)(*(long *)puVar1 + 0x10)) ||
              (sVar2 = FUN_04e87a5c(param_3,0x12,0), sVar2 != 0x58)) ||
             (uVar4 = thunk_FUN_04e8bd3c(param_3,*(undefined8 *)puVar1,0), (uVar4 & 1) == 0)) {
            lVar10 = *plVar12;
            if (lVar10 == 0) goto LAB_054983b0;
            uVar3 = *(uint *)(param_1 + 0x20);
            if (uVar3 == *(uint *)(lVar10 + 0x18)) {
              uVar5 = FUN_02d60934(*(undefined8 *)System_Xml_Schema_FacetsChecker_FacetsCompiler_var
                                   ,uVar3 << 1);
                    /* try { // try from 054982b4 to 0559842f has its CatchHandler @ 054982b4
                       catch() { ... } // from try @ 054982b4 with catch @ 054982b4
                       catch() { ... } // from try @ 0549844c with catch @ 054982b4
                       catch() { ... } // from try @ 05498540 with catch @ 054982b4
                       catch() { ... } // from try @ 054985a4 with catch @ 054982b4 */
              FUN_0502a894(*(undefined8 *)(param_1 + 0x10),uVar5,*(undefined4 *)(param_1 + 0x20),0);
              *(undefined8 *)(param_1 + 0x10) = uVar5;
              thunk_FUN_02dd37b4(plVar12,uVar5);
              lVar10 = *(long *)(param_1 + 0x10);
              if (lVar10 == 0) goto LAB_054983b0;
              uVar3 = *(uint *)(param_1 + 0x20);
            }
            if (*(uint *)(lVar10 + 0x18) <= uVar3) {
LAB_054983b4:
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
            lVar10 = *(long *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
            if (lVar10 == 0) {
              lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                           UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var
                                         );
              FUN_0504920c(lVar10,0);
              plVar12 = *(long **)(param_1 + 0x10);
              if (plVar12 == (long *)0x0) goto LAB_054983b0;
              uVar3 = *(uint *)(param_1 + 0x20);
              if ((lVar10 != 0) &&
                 (lVar8 = thunk_FUN_02d9d438(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0))
              {
                uVar5 = thunk_FUN_02daa0c0();
                    /* catch() { ... } // from try @ 05498528 with catch @ 0549859c
                       catch() { ... } // from try @ 0549858c with catch @ 0549859c */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 054985a0 to 055985a3 has its CatchHandler @ 054985ac */
                FUN_02d609b4(uVar5,0);
              }
              if (*(uint *)(plVar12 + 3) <= uVar3) goto LAB_054983b4;
              plVar12[(long)(int)uVar3 + 4] = lVar10;
              thunk_FUN_02dd37b4(plVar12 + (long)(int)uVar3 + 4,lVar10);
              if (lVar10 == 0) goto LAB_054983b0;
            }
            *(undefined4 *)(lVar10 + 0x28) = *(undefined4 *)(param_1 + 0x24);
            FUN_054977bc(lVar10,param_2);
            *(long *)(lVar10 + 0x18) = param_3;
            thunk_FUN_02dd37b4((long *)(lVar10 + 0x18),param_3);
            *(undefined8 *)(lVar10 + 0x20) = param_4;
            thunk_FUN_02dd37b4((undefined8 *)(lVar10 + 0x20),param_4);
            *(undefined8 *)(param_1 + 0x18) = 0;
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x18),0);
            return;
          }
          uVar5 = thunk_FUN_02dc61f4(PTR_DAT_0675e2d0);
          uVar5 = FUN_02d60934(uVar5,2);
          FUN_028f4e40();
          puVar11 = PTR_DAT_06773050;
        }
        uVar7 = thunk_FUN_02dc61f4(puVar11);
        FUN_028f7030(uVar5,uVar7);
        uVar7 = thunk_FUN_02dc61f4(puVar11);
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0549843c with catch @ 0549850c
                        */
        FUN_028f7064(uVar5,0,uVar7);
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05498430 with catch @ 05498510
                        */
        FUN_028f4e40(uVar5);
        FUN_028f7030(uVar5,param_3);
                    /* try { // try from 05498528 to 0559853f has its CatchHandler @ 0549859c */
        FUN_028f7064(uVar5,1,param_3);
        uVar7 = thunk_FUN_02dc61f4(
                                  UnityEngine_XR_OpenXR_Features_Meta_BatchSaveAnchors_SaveRequest_var
                                  );
                    /* try { // try from 05498540 to 0559858b has its CatchHandler @ 054982b4 */
        uVar7 = FUN_054f97f0(uVar7,uVar5,0);
        thunk_FUN_02dc61f4(PTR_DAT_06763b78);
        uVar5 = thunk_FUN_02d9d534();
        FUN_04f7d8e0(uVar5,uVar7,0);
        goto LAB_05498570;
      }
      lVar10 = *plVar12;
      if (lVar10 == 0) goto LAB_054983b0;
      if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_054983b4;
      lVar10 = *(long *)(lVar10 + (ulong)uVar3 * 8 + 0x20);
      if (lVar10 == 0) goto LAB_054983b0;
      if (*(int *)(lVar10 + 0x28) != *(int *)(param_1 + 0x24)) goto LAB_054981d0;
      uVar4 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar10 + 0x10),param_2,0);
    } while ((uVar4 & 1) == 0);
    uVar4 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar10 + 0x18),param_3,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
    uVar5 = thunk_FUN_02dc61f4(PTR_DAT_0675e2d0);
    uVar5 = FUN_02d60934(uVar5,3);
    FUN_028f4e40();
    FUN_028f7030(uVar5,param_2);
    FUN_028f7064(uVar5,0,param_2);
    FUN_028f4e40(lVar10);
    uVar7 = *(undefined8 *)(lVar10 + 0x18);
    FUN_028f4e40(uVar5);
                    /* try { // try from 05498430 to 05598437 has its CatchHandler @ 05498510 */
    FUN_028f7030(uVar5,uVar7);
                    /* try { // try from 0549843c to 0559844b has its CatchHandler @ 0549850c */
    FUN_028f7064(uVar5,1,uVar7);
                    /* try { // try from 0549844c to 05598527 has its CatchHandler @ 054982b4 */
    FUN_028f4e40(uVar5);
    FUN_028f7030(uVar5,param_3);
    FUN_028f7064(uVar5,2,param_3);
    uVar7 = thunk_FUN_02dc61f4(
                              UnityEngine_XR_OpenXR_Features_Meta_BatchEraseAnchors_EraseRequest_var
                              );
    uVar7 = FUN_054f97f0(uVar7,uVar5,0);
  }
  else {
    uVar4 = thunk_FUN_04e8bd3c(param_2,*(undefined8 *)PTR_DAT_06773050,0);
    if (((uVar4 & 1) != 0) &&
       (uVar4 = thunk_FUN_04e8bd3c(param_3,*(undefined8 *)puVar1,0), (uVar4 & 1) != 0)) {
      return;
    }
    uVar4 = thunk_FUN_04e8bd3c(param_2,*(undefined8 *)PTR_DAT_0676bca0,0);
    puVar6 = Unity_VisualScripting_Flow_RecursionNode_var;
    if (((uVar4 & 1) != 0) &&
       (uVar4 = thunk_FUN_04e8bd3c(param_3,*(undefined8 *)puVar11,0),
       puVar6 = Unity_VisualScripting_Flow_RecursionNode_var, (uVar4 & 1) != 0)) {
      return;
    }
LAB_054981ec:
    uVar5 = thunk_FUN_02dc61f4(puVar6);
    uVar7 = FUN_054f9054(uVar5,0);
  }
  thunk_FUN_02dc61f4(PTR_DAT_06763b78);
  uVar5 = thunk_FUN_02d9d534();
  uVar9 = thunk_FUN_02dc61f4(PTR_DAT_06775f88);
  FUN_04f77088(uVar5,uVar7,uVar9,0);
LAB_05498570:
  uVar5 = FUN_054f9058(uVar5,0);
  uVar7 = thunk_FUN_02dc61f4(UnityEngine_UIElements_FocusController_FocusedElement_var);
                    /* try { // try from 0549858c to 0559859b has its CatchHandler @ 0549859c */
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar5,uVar7);
}


