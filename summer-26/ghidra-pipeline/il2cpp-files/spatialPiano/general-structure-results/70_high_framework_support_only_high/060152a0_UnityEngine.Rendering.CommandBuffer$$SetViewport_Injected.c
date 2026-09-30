/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$SetViewport_Injected
ENTRY_POINT: 060152a0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


void UnityEngine_Rendering_CommandBuffer__SetViewport_Injected(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined2 unaff_w19;
  long unaff_x20;
  int iVar11;
  long unaff_x21;
  
  FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_143__);
  FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_144__);
  FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_145__);
  *(undefined1 *)(unaff_x21 + 0x33c) = 1;
  lVar5 = *(long *)(unaff_x20 + 0x38);
  *(undefined2 *)(unaff_x20 + 0x32) = *(undefined2 *)(unaff_x20 + 0x30);
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__837_145__;
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__837_144__;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__837_143__;
  if (lVar5 != 0) {
    iVar11 = 0;
    do {
      if (*(int *)(lVar5 + 0x20) <= iVar11) {
        lVar5 = *(long *)(unaff_x20 + 0x40);
        if (lVar5 != 0) {
          iVar11 = 0;
          goto LAB_0601539c;
        }
        break;
      }
      plVar6 = (long *)FUN_04e383a4(lVar5,iVar11,*(undefined8 *)puVar3);
      if (plVar6 == (long *)0x0) break;
      lVar8 = *plVar6;
      uVar1 = *(undefined2 *)(unaff_x20 + 0x32);
      lVar5 = *(long *)puVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar5) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0601536c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(plVar6,lVar5,1);
LAB_0601536c:
      (*(code *)*puVar7)(plVar6,uVar1,unaff_w19,puVar7[1]);
      lVar5 = *(long *)(unaff_x20 + 0x38);
      iVar11 = iVar11 + 1;
    } while (lVar5 != 0);
  }
  goto thunk_FUN_02f089c8;
LAB_0601539c:
  do {
    if (*(int *)(lVar5 + 0x20) <= iVar11) {
      *(undefined4 *)(unaff_x20 + 0x58) = 0;
      *(undefined1 *)(unaff_x20 + 0x5d) = 0;
      return;
    }
    plVar6 = (long *)FUN_04e383a4(lVar5,iVar11,*(undefined8 *)puVar2);
    if (plVar6 == (long *)0x0) break;
    lVar8 = *plVar6;
    uVar1 = *(undefined2 *)(unaff_x20 + 0x32);
    lVar5 = *(long *)puVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_06015410;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(plVar6,lVar5,1);
LAB_06015410:
    (*(code *)*puVar7)(plVar6,uVar1,unaff_w19,puVar7[1]);
    lVar5 = *(long *)(unaff_x20 + 0x40);
    iVar11 = iVar11 + 1;
  } while (lVar5 != 0);
thunk_FUN_02f089c8:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


