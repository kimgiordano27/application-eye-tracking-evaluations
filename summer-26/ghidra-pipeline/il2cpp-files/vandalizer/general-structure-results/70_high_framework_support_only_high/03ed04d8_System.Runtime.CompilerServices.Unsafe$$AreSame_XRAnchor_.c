/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AreSame<XRAnchor>
ENTRY_POINT: 03ed04d8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_7;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Runtime_CompilerServices_Unsafe__AreSame<XRAnchor>(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x21;
  long unaff_x22;
  
  if (*(long *)(unaff_x22 + 0x38) == 0) {
    FUN_0322bf50();
  }
  if (unaff_x21 == (long *)0x0) {
    thunk_FUN_03257e30(PTR_DAT_0759c0f0);
    uVar3 = thunk_FUN_0322f148();
    uVar4 = thunk_FUN_03257e30(PTR_DAT_075d7c60);
    FUN_05d6f364(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar3);
  }
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    FUN_0322bef4(lVar5);
  }
  plVar1 = (long *)thunk_FUN_0322f04c();
  if ((plVar1 == (long *)0x0) || (lVar5 = thunk_FUN_0322f04c(), lVar5 == 0)) {
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      FUN_0322bef4(lVar5);
    }
    plVar1 = (long *)thunk_FUN_0322f04c();
    if ((plVar1 == (long *)0x0) || (lVar5 = thunk_FUN_0322f04c(), lVar5 == 0)) {
      lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        FUN_0322bef4(lVar5);
      }
      plVar1 = (long *)thunk_FUN_0322f04c();
      if ((plVar1 == (long *)0x0) || (lVar5 = thunk_FUN_0322f04c(), lVar5 == 0)) {
        lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          FUN_0322bef4(lVar5);
        }
        plVar1 = (long *)thunk_FUN_0322f04c();
        if ((plVar1 == (long *)0x0) || (lVar5 = thunk_FUN_0322f04c(), lVar5 == 0)) {
          lVar5 = **(long **)(unaff_x22 + 0x38);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0322bef4(lVar5);
          }
          lVar6 = *unaff_x21;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar5) {
                puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                goto System_Runtime_CompilerServices_Unsafe__As<BatchMaterialID,_char>;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar2 = (undefined8 *)FUN_0322c1e8();
System_Runtime_CompilerServices_Unsafe__As<BatchMaterialID,_char>:
          UNRECOVERED_JUMPTABLE = (code *)*puVar2;
          goto System_Runtime_CompilerServices_Unsafe__As<object>;
        }
        lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0322bef4(lVar5);
        }
        lVar6 = *plVar1;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5)
            goto System_Runtime_CompilerServices_Unsafe__AreSame<TubeRenderer_VertexLayout>;
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
      }
      else {
        lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0322bef4(lVar5);
        }
        lVar6 = *plVar1;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5)
            goto System_Runtime_CompilerServices_Unsafe__AreSame<TubeRenderer_VertexLayout>;
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
      }
    }
    else {
      lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0322bef4(lVar5);
      }
      lVar6 = *plVar1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5)
          goto System_Runtime_CompilerServices_Unsafe__AreSame<TubeRenderer_VertexLayout>;
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
    }
  }
  else {
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0322bef4(lVar5);
    }
    lVar6 = *plVar1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5)
        goto System_Runtime_CompilerServices_Unsafe__AreSame<TubeRenderer_VertexLayout>;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  puVar2 = (undefined8 *)FUN_0322c1e8(plVar1,lVar5,0);
System_Runtime_CompilerServices_Unsafe__AreSame<OVRPlugin_Qpl_Annotation>:
  UNRECOVERED_JUMPTABLE = (code *)*puVar2;
System_Runtime_CompilerServices_Unsafe__As<object>:
                    /* WARNING: Could not recover jumptable at 0x03ed0774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
System_Runtime_CompilerServices_Unsafe__AreSame<TubeRenderer_VertexLayout>:
  puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
  goto System_Runtime_CompilerServices_Unsafe__AreSame<OVRPlugin_Qpl_Annotation>;
}


