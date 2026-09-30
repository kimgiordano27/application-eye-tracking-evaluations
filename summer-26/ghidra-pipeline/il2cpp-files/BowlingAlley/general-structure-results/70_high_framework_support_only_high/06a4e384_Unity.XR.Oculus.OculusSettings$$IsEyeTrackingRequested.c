/*
FUNCTION_NAME: Unity.XR.Oculus.OculusSettings$$IsEyeTrackingRequested
ENTRY_POINT: 06a4e384
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Unity_XR_Oculus_OculusSettings__IsEyeTrackingRequested(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long unaff_x19;
  int iVar13;
  long unaff_x20;
  uint uVar14;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0xa20));
  thunk_FUN_032e1da0(Method_System_Collections_Generic_Stack<StackViewItem>__ctor__);
  thunk_FUN_032e1da0(PTR_DAT_072794f8);
  *(undefined1 *)(unaff_x20 + 0xcb2) = 1;
  uVar9 = FUN_057ab1f0();
  puVar4 = Method_System_Collections_Generic_Stack<StackViewItem>__ctor__;
  if ((uVar9 & 1) != 0) {
    return **(undefined8 **)(*(long *)PTR_DAT_072794f8 + 0xb8);
  }
  lVar10 = *(long *)Method_System_Collections_Generic_Stack<StackViewItem>__ctor__;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar10 = *(long *)puVar4;
  }
  if ((**(long **)(lVar10 + 0xb8) != 0) &&
     (FUN_057b7638(**(long **)(lVar10 + 0xb8),0,0), unaff_x19 != 0)) {
    lVar10 = **(long **)(*(long *)puVar4 + 0xb8);
    uVar5 = FUN_057a62b4();
    if (lVar10 != 0) {
      FUN_057b889c(lVar10,uVar5,0);
      puVar3 = PTR_DAT_0727fa20;
      iVar2 = *(int *)(unaff_x19 + 0x10);
      if (0 < iVar2 + -1) {
        iVar13 = 1;
        do {
          uVar5 = FUN_057a62b4();
          uVar6 = FUN_057a62b4();
          lVar10 = *(long *)puVar3;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(lVar10);
          }
          uVar9 = FUN_058a4af0(uVar5,0);
          uVar7 = FUN_058a4af0(uVar6,0);
          uVar14 = ~uVar7 & 1;
          if ((uVar9 & 1) == 0) {
            uVar14 = 0;
          }
          if (iVar13 + 1 < iVar2) {
            uVar5 = FUN_057a62b4();
            lVar10 = *(long *)puVar3;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_032cd7c0(lVar10);
            }
            uVar8 = FUN_058a4af0(uVar5,0);
            uVar1 = 0;
            if ((uVar9 & 1) == 0) {
              uVar1 = ~uVar7 & 1;
            }
            uVar14 = uVar8 & uVar1 | uVar14;
          }
          if (uVar14 != 0) {
            lVar10 = *(long *)puVar4;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar10 = *(long *)puVar4;
            }
            if (**(long **)(lVar10 + 0xb8) == 0) goto LAB_06a4e5d0;
            FUN_057b889c(**(long **)(lVar10 + 0xb8),0x20,0);
          }
          lVar10 = *(long *)puVar4;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar10 = *(long *)puVar4;
          }
          if (**(long **)(lVar10 + 0xb8) == 0) goto LAB_06a4e5d0;
          FUN_057b889c(**(long **)(lVar10 + 0xb8),uVar6,0);
          iVar13 = iVar13 + 1;
        } while (iVar2 != iVar13);
      }
      lVar10 = *(long *)puVar4;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar10 = *(long *)puVar4;
      }
      plVar11 = (long *)**(long **)(lVar10 + 0xb8);
      if (plVar11 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x06a4e5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar12 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
        return uVar12;
      }
    }
  }
LAB_06a4e5d0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


