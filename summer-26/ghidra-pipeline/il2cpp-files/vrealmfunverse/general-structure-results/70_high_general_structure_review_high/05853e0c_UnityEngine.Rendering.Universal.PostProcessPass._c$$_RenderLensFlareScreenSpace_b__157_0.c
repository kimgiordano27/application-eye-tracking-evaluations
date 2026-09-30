/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.PostProcessPass.<>c$$<RenderLensFlareScreenSpace>b__157_0
ENTRY_POINT: 05853e0c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_2
*/


void UnityEngine_Rendering_Universal_PostProcessPass_<>c__<RenderLensFlareScreenSpace>b__157_0(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long lVar9;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x23;
  thunk_FUN_02bb0e9c();
  FUN_058575c0();
  iVar1 = *(int *)(unaff_x19 + 0x28);
  uVar2 = *(undefined1 *)(unaff_x19 + 0x1c);
  uVar3 = *(undefined1 *)(unaff_x19 + 0x2d);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined1 *)(unaff_x22 + 0xa8) = 0;
  *(undefined1 *)(unaff_x22 + 0x51) = uVar2;
  *(undefined1 *)(unaff_x22 + 0x52) = uVar3;
  *(bool *)(unaff_x22 + 0x50) = iVar1 != 1;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar7;
  thunk_FUN_02bb0e9c();
  *(ulong *)(unaff_x22 + 0xac) = unaff_x21 & 0xffffffff | unaff_x20 << 0x20;
  puVar4 = Method_Unity_Collections_NativeArray<Vector3>_Copy__;
  if (*(char *)(unaff_x19 + 0x38) != '\0') {
    lVar5 = *(long *)Method_Unity_Collections_NativeArray<Vector3>_Copy__;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar5 = *(long *)puVar4;
    }
    puVar8 = *(undefined8 **)(lVar5 + 0xb8);
    lVar9 = puVar8[1];
    if (lVar9 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
      uVar7 = *puVar8;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<Vector3>__ctor__);
      FUN_0585a82c(lVar9,uVar7,*(undefined8 *)Method_Unity_Collections_NativeArray<Vector3>__ctor__)
      ;
      plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
      *plVar6 = lVar9;
      thunk_FUN_02bb0e9c(plVar6,lVar9);
    }
    *(long *)(unaff_x22 + 0xa0) = lVar9;
    thunk_FUN_02bb0e9c((long *)(unaff_x22 + 0xa0),lVar9);
  }
  return;
}


