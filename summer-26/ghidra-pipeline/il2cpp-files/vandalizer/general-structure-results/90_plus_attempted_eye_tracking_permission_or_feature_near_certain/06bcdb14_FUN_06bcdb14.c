/*
FUNCTION_NAME: FUN_06bcdb14
ENTRY_POINT: 06bcdb14
PROGRAM: vandalizer-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_7;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x06bcdff0) */

long * FUN_06bcdb14(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *local_48;
  char local_34 [4];
  
  puVar1 = PTR_DAT_075d6da8;
  if ((DAT_07a4fe52 & 1) == 0) {
                    /* try { // try from 06bcdb40 to 06ccdb7b has its CatchHandler @ 06bcdcec */
    FUN_031f20f4(UnityEngine_UIElements_EventDispatcher_EventRecord_var);
    FUN_031f20f4(UnityEngine_InputForUI_EventProvider_Registration_var);
    FUN_031f20f4(PTR_DAT_075d8d78);
    FUN_031f20f4(PTR_DAT_075d6da8);
    FUN_031f20f4(System_Diagnostics_TraceLevel_var);
    FUN_031f20f4(UnityEngine_EventSystems_EventSystem_UIToolkitOverrideConfig_var);
    FUN_031f20f4(PTR_DAT_0759c0d8);
    FUN_031f20f4(PTR_DAT_075d7b58);
    FUN_031f20f4(System_Threading_ExecutionContext_Reader_var);
    FUN_031f20f4(UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var);
    FUN_031f20f4(PTR_DAT_0759b3b8);
    FUN_031f20f4(PTR_DAT_075d7518);
    DAT_07a4fe52 = 1;
  }
  puVar2 = PTR_DAT_075d7518;
  local_34[0] = '\0';
  local_48 = (long *)0x0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar3 = FUN_06bc54fc(*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_075d7b58;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  FUN_03da9d88(lVar3,param_1,*(undefined8 *)PTR_DAT_075d8d78);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar3 = *(long *)puVar1;
  }
  uVar10 = **(undefined8 **)(lVar3 + 0xb8);
  local_34[0] = '\0';
  FUN_05e65364(uVar10,local_34,0);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar3 = *(long *)puVar1;
  }
  if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar4 = FUN_05815364(**(long **)(lVar3 + 0xb8),param_1,&local_48,
                       *(undefined8 *)UnityEngine_InputForUI_EventProvider_Registration_var);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar4 = FUN_06bce20c(param_1);
    if ((uVar4 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_0322f148(*(undefined8 *)
                                           System_Threading_ExecutionContext_Reader_var);
      FUN_06bce260(plVar5,param_1);
      if (plVar5 == (long *)0x0) goto LAB_06bce01c;
    }
    else {
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar4 = FUN_05d386a0(param_1,0);
      if ((uVar4 & 1) == 0) {
        uVar11 = *(undefined8 *)UnityEngine_EventSystems_EventSystem_UIToolkitOverrideConfig_var;
        if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        plVar5 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar11,0);
        plVar6 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,2);
        lVar3 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if ((lVar3 != 0) &&
           (lVar7 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
          uVar10 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
          FUN_031f225c(uVar10,0);
        }
        if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        plVar6[4] = lVar3;
        thunk_FUN_0329bf60(plVar6 + 4,lVar3);
        lVar3 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
        if ((lVar3 != 0) &&
           (lVar7 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
          uVar10 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
          FUN_031f225c(uVar10,0);
        }
        if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        plVar6[5] = lVar3;
        thunk_FUN_0329bf60(plVar6 + 5,lVar3);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        uVar11 = (**(code **)(*plVar5 + 0x928))(plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x930));
      }
      else {
        uVar11 = *(undefined8 *)
                  UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var;
        if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        plVar5 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar11,0);
        plVar6 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,1);
        lVar3 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if ((lVar3 != 0) &&
           (lVar7 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
          uVar10 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
          FUN_031f225c(uVar10,0);
        }
        if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        plVar6[4] = lVar3;
        thunk_FUN_0329bf60(plVar6 + 4,lVar3);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        uVar11 = (**(code **)(*plVar5 + 0x928))(plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x930));
      }
      plVar5 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759c0d8,1);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      lVar3 = thunk_FUN_0322f04c(param_1,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar3 == 0) {
        uVar10 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
        FUN_031f225c(uVar10,0);
      }
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      plVar5[4] = (long)param_1;
      thunk_FUN_0329bf60(plVar5 + 4,param_1);
      lVar3 = FUN_05e2c180(uVar11,plVar5,0);
      if (lVar3 == 0) {
LAB_06bce01c:
        local_48 = (long *)0x0;
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar11 = *(undefined8 *)System_Diagnostics_TraceLevel_var;
      plVar5 = (long *)thunk_FUN_0322f04c(lVar3,uVar11);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2730(lVar3,uVar11);
      }
    }
    lVar3 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    local_48 = plVar5;
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)System_Diagnostics_TraceLevel_var) {
          puVar8 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06bcdf6c;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar8 = (undefined8 *)FUN_0322c1e8(plVar5,*(long *)System_Diagnostics_TraceLevel_var,0);
LAB_06bcdf6c:
    (*(code *)*puVar8)(plVar5,puVar8[1]);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar3 = *(long *)puVar1;
    }
    if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    FUN_05813848(**(long **)(lVar3 + 0xb8),param_1,local_48,
                 *(undefined8 *)UnityEngine_UIElements_EventDispatcher_EventRecord_var);
  }
  plVar5 = local_48;
  if (local_34[0] != '\0') {
    thunk_FUN_032004d4(uVar10,0);
  }
  return plVar5;
}


