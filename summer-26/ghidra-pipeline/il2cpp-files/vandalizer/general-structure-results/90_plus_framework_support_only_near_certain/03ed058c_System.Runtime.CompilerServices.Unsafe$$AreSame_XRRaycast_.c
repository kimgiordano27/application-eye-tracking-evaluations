/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AreSame<XRRaycast>
ENTRY_POINT: 03ed058c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Runtime_CompilerServices_Unsafe__AreSame<XRRaycast>
               (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_0322bef4(param_3);
  }
  plVar1 = (long *)thunk_FUN_0322f04c();
  if ((plVar1 == (long *)0x0) || (lVar2 = thunk_FUN_0322f04c(), lVar2 == 0)) {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      FUN_0322bef4(lVar2);
    }
    plVar1 = (long *)thunk_FUN_0322f04c();
    if ((plVar1 == (long *)0x0) || (lVar2 = thunk_FUN_0322f04c(), lVar2 == 0)) {
      lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        FUN_0322bef4(lVar2);
      }
      plVar1 = (long *)thunk_FUN_0322f04c();
      if ((plVar1 == (long *)0x0) || (lVar2 = thunk_FUN_0322f04c(), lVar2 == 0)) {
        lVar2 = **(long **)(unaff_x22 + 0x38);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0322bef4(lVar2);
        }
        lVar4 = *unaff_x21;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar2) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto System_Runtime_CompilerServices_Unsafe__As<BatchMaterialID,_char>;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_0322c1e8();
System_Runtime_CompilerServices_Unsafe__As<BatchMaterialID,_char>:
        UNRECOVERED_JUMPTABLE = (code *)*puVar3;
        goto System_Runtime_CompilerServices_Unsafe__As<object>;
      }
      lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4(lVar2);
      }
      lVar4 = *plVar1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar2)
          goto System_Runtime_CompilerServices_Unsafe__AreSame<TubeRenderer_VertexLayout>;
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
    }
    else {
      lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4(lVar2);
      }
      lVar4 = *plVar1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar2)
          goto System_Runtime_CompilerServices_Unsafe__AreSame<TubeRenderer_VertexLayout>;
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
    }
  }
  else {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4(lVar2);
    }
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2)
        goto System_Runtime_CompilerServices_Unsafe__AreSame<TubeRenderer_VertexLayout>;
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  puVar3 = (undefined8 *)FUN_0322c1e8(plVar1,lVar2,0);
System_Runtime_CompilerServices_Unsafe__AreSame<OVRPlugin_Qpl_Annotation>:
  UNRECOVERED_JUMPTABLE = (code *)*puVar3;
System_Runtime_CompilerServices_Unsafe__As<object>:
                    /* WARNING: Could not recover jumptable at 0x03ed0774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
System_Runtime_CompilerServices_Unsafe__AreSame<TubeRenderer_VertexLayout>:
  puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
  goto System_Runtime_CompilerServices_Unsafe__AreSame<OVRPlugin_Qpl_Annotation>;
}


