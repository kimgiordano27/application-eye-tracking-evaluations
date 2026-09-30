/*
FUNCTION_NAME: FUN_03e969ec
ENTRY_POINT: 03e969ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_03e969ec(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined8 uVar14;
  
  if ((DAT_0483aab7 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0457b3e0);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_0457b3e8);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_0457b3f0);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                      );
    DAT_0483aab7 = 1;
  }
  puVar5 = PTR_DAT_0457b3f0;
  puVar4 = PTR_DAT_0457b3e8;
  puVar3 = Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__;
  puVar2 = Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar7 = FUN_040766fc(*(long *)(param_2 + 0x18),0);
    uVar7 = FUN_0340ebc0(*(undefined8 *)puVar5,uVar7,*(undefined8 *)puVar2,0);
    plVar8 = (long *)FUN_01f08890(*(undefined8 *)puVar3,1);
    uVar14 = *(undefined8 *)puVar4;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    lVar9 = FUN_03579868(uVar14,0);
    if (plVar8 != (long *)0x0) {
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_01f116d0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
        uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar7,0);
      }
      puVar1 = Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__;
      if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar8[4] = lVar9;
      thunk_FUN_01f51358(plVar8 + 4,lVar9);
      lVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      FUN_040735fc(lVar9,uVar7,plVar8,0);
      puVar1 = PTR_DAT_0457b3e0;
      if (lVar9 != 0) {
        FUN_04077338(lVar9,0x34,0);
        lVar10 = FUN_023361c8(lVar9,*(undefined8 *)puVar1);
        lVar11 = FUN_04073258(lVar9,0);
        if ((param_1 != 0) && (uVar7 = FUN_03e46eb0(param_1,0), lVar11 != 0)) {
          FUN_0407dcf4(lVar11,uVar7,0,0);
          lVar11 = FUN_04073258(lVar9,0);
          if (DAT_0482ee12 == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
            DAT_0482ee12 = '\x01';
          }
          puVar1 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
          if (lVar11 != 0) {
            puVar12 = *(undefined4 **)
                       (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                       0xb8);
            FUN_0407c958(*puVar12,puVar12[1],puVar12[2],lVar11,0);
            lVar11 = FUN_04073258(lVar9,0);
            if (DAT_0482ee0f == '\0') {
              thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__);
              DAT_0482ee0f = '\x01';
            }
            if (lVar11 != 0) {
              puVar12 = *(undefined4 **)
                         (*(long *)Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__ +
                         0xb8);
              FUN_0407d6f4(*puVar12,puVar12[1],puVar12[2],puVar12[3],lVar11,0);
              lVar11 = FUN_04073258(lVar9,0);
              if (DAT_0482ee10 == '\0') {
                thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
                DAT_0482ee10 = '\x01';
              }
              if (lVar11 != 0) {
                lVar13 = *(long *)(*(long *)puVar1 + 0xb8);
                FUN_0407da88(*(undefined4 *)(lVar13 + 0xc),*(undefined4 *)(lVar13 + 0x10),
                             *(undefined4 *)(lVar13 + 0x14),lVar11,0);
                lVar11 = FUN_040703d4(param_1,0);
                if (lVar11 != 0) {
                  uVar6 = FUN_04073294(lVar11,0);
                  FUN_040732d0(lVar9,uVar6,0);
                  if (lVar10 != 0) {
                    *(long *)(lVar10 + 0x70) = param_1;
                    thunk_FUN_01f51358((long *)(lVar10 + 0x70),param_1);
                    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(param_2 + 8);
                    thunk_FUN_01f51358();
                    *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(param_2 + 0x10);
                    thunk_FUN_01f51358();
                    *(byte *)(lVar10 + 0x50) = *(byte *)(param_2 + 0x20) & 1;
                    FUN_03e96508(lVar10,*(undefined8 *)(param_2 + 0x18));
                    lVar9 = FUN_03e966b4(lVar10);
                    lVar11 = FUN_03e4694c(param_1,0);
                    if ((lVar11 != 0) && (uVar6 = FUN_0404cad8(lVar11,0), lVar9 != 0)) {
                      FUN_0404cb14(lVar9,uVar6,0);
                      lVar9 = FUN_03e966b4(lVar10);
                      lVar11 = FUN_03e4694c(param_1,0);
                      if ((lVar11 != 0) && (uVar6 = FUN_0404cb58(lVar11,0), lVar9 != 0)) {
                        FUN_0404cb94(lVar9,uVar6,0);
                        return lVar10;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


