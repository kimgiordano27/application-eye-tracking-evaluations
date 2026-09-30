/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$Blit_Texture
ENTRY_POINT: 060155b4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_Rendering_CommandBuffer__Blit_Texture(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  int iVar11;
  long lVar12;
  undefined8 *unaff_x23;
  long *unaff_x24;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  
  *(undefined1 *)(unaff_x19 + 0x5d) = 1;
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__837_148__;
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__837_147__;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__837_143__;
  lVar5 = *(long *)(unaff_x19 + 0x38);
  if (lVar5 != 0) {
    iVar11 = 0;
    do {
      if (*(int *)(lVar5 + 0x20) <= iVar11) {
        lVar5 = *(long *)(unaff_x19 + 0x40);
        if (lVar5 != 0) {
          iVar11 = 0;
          goto LAB_060156e0;
        }
        break;
      }
      lVar12 = *(long *)(unaff_x19 + 0x48);
      plVar6 = (long *)FUN_04e383a4(lVar5,iVar11,*unaff_x23);
      if (plVar6 == (long *)0x0) break;
      lVar5 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x24) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06015654;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(plVar6,*unaff_x24,0);
LAB_06015654:
      auVar15 = (*(code *)*puVar7)(0x3f800000,plVar6,puVar7[1]);
      if (lVar12 == 0) break;
      lVar5 = *(long *)(lVar12 + 0x10);
      lVar9 = *(long *)puVar4;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar5 == 0) break;
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
        *(undefined1 (*) [16])(lVar5 + (long)(int)uVar1 * 0x10 + 0x20) = auVar15;
      }
      else {
        FUN_03a7aedc(lVar12,auVar15._0_8_,auVar15._8_8_,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      lVar5 = *(long *)(unaff_x19 + 0x38);
      iVar11 = iVar11 + 1;
    } while (lVar5 != 0);
  }
  goto LAB_06015768;
LAB_060156e0:
  do {
    if (*(int *)(lVar5 + 0x20) <= iVar11) {
      fVar14 = *(float *)(unaff_x19 + 0x58);
      fVar13 = (float)FUN_060fbf1c(0);
      *(float *)(unaff_x19 + 0x58) = fVar14 + fVar13;
      return;
    }
    plVar6 = (long *)FUN_04e383a4(lVar5,iVar11,*(undefined8 *)puVar2);
    if (plVar6 == (long *)0x0) break;
    lVar5 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0601574c;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(plVar6,*(long *)puVar3,0);
LAB_0601574c:
    (*(code *)*puVar7)(0x3f800000,plVar6,puVar7[1]);
    lVar5 = *(long *)(unaff_x19 + 0x40);
    iVar11 = iVar11 + 1;
  } while (lVar5 != 0);
LAB_06015768:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


