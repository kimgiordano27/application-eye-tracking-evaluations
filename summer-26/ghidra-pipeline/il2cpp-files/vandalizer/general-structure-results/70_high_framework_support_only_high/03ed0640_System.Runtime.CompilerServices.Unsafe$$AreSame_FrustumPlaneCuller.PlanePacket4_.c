/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AreSame<FrustumPlaneCuller.PlanePacket4>
ENTRY_POINT: 03ed0640
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_5;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Runtime_CompilerServices_Unsafe__AreSame<FrustumPlaneCuller_PlanePacket4>(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x21;
  long unaff_x22;
  
  lVar1 = thunk_FUN_0322f04c();
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      FUN_0322bef4(lVar1);
    }
    param_1 = (long *)thunk_FUN_0322f04c();
    if ((param_1 == (long *)0x0) || (lVar1 = thunk_FUN_0322f04c(), lVar1 == 0)) {
      lVar1 = **(long **)(unaff_x22 + 0x38);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0322bef4(lVar1);
      }
      lVar3 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar1) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto System_Runtime_CompilerServices_Unsafe__As<BatchMaterialID,_char>;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0322c1e8();
System_Runtime_CompilerServices_Unsafe__As<BatchMaterialID,_char>:
      UNRECOVERED_JUMPTABLE = (code *)*puVar2;
      goto System_Runtime_CompilerServices_Unsafe__As<object>;
    }
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0322bef4(lVar1);
    }
    lVar3 = *param_1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar1)
        goto System_Runtime_CompilerServices_Unsafe__AreSame<TubeRenderer_VertexLayout>;
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
  }
  else {
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0322bef4(lVar1);
    }
    lVar3 = *param_1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar1)
        goto System_Runtime_CompilerServices_Unsafe__AreSame<TubeRenderer_VertexLayout>;
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
  }
  puVar2 = (undefined8 *)FUN_0322c1e8(param_1,lVar1,0);
  goto System_Runtime_CompilerServices_Unsafe__AreSame<OVRPlugin_Qpl_Annotation>;
System_Runtime_CompilerServices_Unsafe__AreSame<TubeRenderer_VertexLayout>:
  puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
System_Runtime_CompilerServices_Unsafe__AreSame<OVRPlugin_Qpl_Annotation>:
  UNRECOVERED_JUMPTABLE = (code *)*puVar2;
System_Runtime_CompilerServices_Unsafe__As<object>:
                    /* WARNING: Could not recover jumptable at 0x03ed0774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


