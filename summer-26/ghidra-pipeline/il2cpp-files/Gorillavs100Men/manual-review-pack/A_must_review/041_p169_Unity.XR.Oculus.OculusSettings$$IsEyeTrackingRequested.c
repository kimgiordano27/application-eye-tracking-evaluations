/*
FUNCTION_NAME: Unity.XR.Oculus.OculusSettings$$IsEyeTrackingRequested
ENTRY_POINT: 03f1b184
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_XR_Oculus_OculusSettings__IsEyeTrackingRequested(long *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if ((DAT_04922add & 1) == 0) {
    FUN_020612a4(PTR_DAT_046beb30);
    FUN_020612a4(PTR_DAT_046beb38);
    FUN_020612a4(PTR_DAT_046beb40);
    FUN_020612a4(PTR_DAT_046bea60);
    FUN_020612a4(PTR_DAT_046bea68);
    FUN_020612a4(PTR_DAT_046bf1d0);
    FUN_020612a4(PTR_DAT_046beb48);
    FUN_020612a4(PTR_DAT_046beed0);
    FUN_020612a4(PTR_DAT_046beb58);
    FUN_020612a4(PTR_DAT_046beec8);
    FUN_020612a4(StringLiteral_8731);
    DAT_04922add = 1;
  }
  puVar3 = PTR_DAT_046beed0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if ((char)param_1[2] == '\0') {
    return;
  }
  if (*param_1 != 0) {
    uVar1 = *(undefined4 *)(*param_1 + 0x18);
    lVar10 = thunk_FUN_02094760(*(undefined8 *)PTR_DAT_046beec8);
    FUN_034a2178(lVar10,uVar1,*(undefined8 *)puVar3);
    plVar15 = param_1 + 1;
    *plVar15 = lVar10;
    thunk_FUN_020ccb58(plVar15,lVar10);
    *(undefined1 *)((long)param_1 + 0x11) = 0;
    puVar8 = PTR_DAT_046bf1d0;
    puVar7 = PTR_DAT_046beb38;
    puVar6 = PTR_DAT_046beb30;
    puVar5 = PTR_DAT_046bea68;
    puVar4 = PTR_DAT_046bea60;
    puVar3 = StringLiteral_8731;
    if (*param_1 != 0) {
      FUN_034a3364(&stack0x00000008,*param_1,*(undefined8 *)PTR_DAT_046beb48);
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000020;
      while( true ) {
        do {
          uVar11 = System_Collections_Generic_EqualityComparer<PropertyPathPart>__System_Collections_IEqualityComparer_Equals
                             (&stack0x00000020,*(undefined8 *)puVar7);
          uVar9 = in_stack_00000030;
          if ((uVar11 & 1) == 0) {
            FUN_02ff5734(&stack0x00000020,*(undefined8 *)puVar6);
            *(undefined1 *)(param_1 + 2) = 0;
            return;
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_020b5864();
          }
          uVar11 = FUN_040ca3b8(uVar9,0,0);
        } while ((uVar11 & 1) == 0);
        lVar10 = *plVar15;
        if (lVar10 == 0) break;
        uVar12 = thunk_FUN_02094664(uVar9,*(undefined8 *)puVar4);
        lVar13 = *(long *)(lVar10 + 0x10);
        lVar14 = *(long *)puVar8;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar13 == 0) break;
        uVar2 = *(uint *)(lVar10 + 0x18);
        if (uVar2 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
          thunk_FUN_020ccb58();
        }
        else {
          FUN_034a2968(lVar10,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        lVar10 = thunk_FUN_02094664(uVar9,*(undefined8 *)puVar5);
        if (lVar10 != 0) {
          *(undefined1 *)((long)param_1 + 0x11) = 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0206154c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0206154c();
}


