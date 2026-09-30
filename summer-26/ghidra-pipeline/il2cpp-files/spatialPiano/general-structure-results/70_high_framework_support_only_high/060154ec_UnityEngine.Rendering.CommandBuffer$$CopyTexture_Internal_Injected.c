/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$CopyTexture_Internal_Injected
ENTRY_POINT: 060154ec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_Rendering_CommandBuffer__CopyTexture_Internal_Injected(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  int iVar15;
  undefined8 *unaff_x23;
  long unaff_x24;
  long *plVar16;
  float fVar17;
  float fVar18;
  float unaff_s8;
  undefined1 auVar19 [16];
  
  plVar16 = *(long **)(unaff_x24 + 0xda0);
  uVar8 = FUN_06015cec();
  if ((uVar8 & 1) == 0) {
LAB_06015590:
    fVar18 = *(float *)(unaff_x19 + 100);
    fVar17 = *(float *)(unaff_x19 + 0x58);
    bVar5 = false;
    bVar6 = false;
    bVar7 = false;
    if (unaff_s8 <= DAT_011b0660) {
      bVar5 = false;
      bVar6 = false;
      bVar7 = true;
      if (!NAN(fVar17) && !NAN(fVar18)) {
        bVar5 = fVar17 < fVar18;
        bVar6 = fVar17 == fVar18;
        bVar7 = false;
      }
    }
    if (!bVar6 && bVar5 == bVar7) {
      if (*(char *)(unaff_x19 + 0x5d) != '\0') {
        return;
      }
      unaff_s8 = 1.0;
      *(undefined1 *)(unaff_x19 + 0x5d) = 1;
    }
    puVar4 = Method_OVRPlugin_<>c_<_cctor>b__837_148__;
    puVar3 = Method_OVRPlugin_<>c_<_cctor>b__837_147__;
    puVar2 = Method_OVRPlugin_<>c_<_cctor>b__837_143__;
    lVar9 = *(long *)(unaff_x19 + 0x38);
    if (lVar9 != 0) {
      iVar15 = 0;
      do {
        if (*(int *)(lVar9 + 0x20) <= iVar15) {
          lVar9 = *(long *)(unaff_x19 + 0x40);
          if (lVar9 != 0) {
            iVar15 = 0;
            goto LAB_060156e0;
          }
          break;
        }
        lVar12 = *(long *)(unaff_x19 + 0x48);
        plVar10 = (long *)FUN_04e383a4(lVar9,iVar15,*unaff_x23);
        if (plVar10 == (long *)0x0) break;
        lVar13 = *plVar10;
        lVar9 = *plVar16;
        uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar8 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar9) {
              puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_06015654;
            }
            uVar8 = uVar8 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_02f421d0(plVar10,lVar9,0);
LAB_06015654:
        auVar19 = (*(code *)*puVar11)(unaff_s8,plVar10,puVar11[1]);
        if (lVar12 == 0) break;
        lVar9 = *(long *)(lVar12 + 0x10);
        lVar13 = *(long *)puVar4;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar9 == 0) break;
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          *(undefined1 (*) [16])(lVar9 + (long)(int)uVar1 * 0x10 + 0x20) = auVar19;
        }
        else {
          FUN_03a7aedc(lVar12,auVar19._0_8_,auVar19._8_8_,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        lVar9 = *(long *)(unaff_x19 + 0x38);
        iVar15 = iVar15 + 1;
      } while (lVar9 != 0);
    }
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 0x38);
    if (lVar9 != 0) {
      iVar15 = 0;
      do {
        if (*(int *)(lVar9 + 0x20) <= iVar15) goto LAB_06015590;
        plVar10 = (long *)FUN_04e383a4(lVar9,iVar15,*unaff_x23);
        if (plVar10 == (long *)0x0) break;
        lVar12 = *plVar10;
        lVar9 = *plVar16;
        uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar8 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar9) {
              puVar11 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_06015574;
            }
            uVar8 = uVar8 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_02f421d0(plVar10,lVar9,1);
LAB_06015574:
        (*(code *)*puVar11)(plVar10,puVar11[1]);
        lVar9 = *(long *)(unaff_x19 + 0x38);
        iVar15 = iVar15 + 1;
      } while (lVar9 != 0);
    }
  }
  goto LAB_06015768;
LAB_060156e0:
  do {
    if (*(int *)(lVar9 + 0x20) <= iVar15) {
      fVar18 = *(float *)(unaff_x19 + 0x58);
      fVar17 = (float)FUN_060fbf1c(0);
      *(float *)(unaff_x19 + 0x58) = fVar18 + fVar17;
      return;
    }
    plVar16 = (long *)FUN_04e383a4(lVar9,iVar15,*(undefined8 *)puVar2);
    if (plVar16 == (long *)0x0) break;
    lVar9 = *plVar16;
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0601574c;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined8 *)FUN_02f421d0(plVar16,*(long *)puVar3,0);
LAB_0601574c:
    (*(code *)*puVar11)(unaff_s8,plVar16,puVar11[1]);
    lVar9 = *(long *)(unaff_x19 + 0x40);
    iVar15 = iVar15 + 1;
  } while (lVar9 != 0);
LAB_06015768:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


