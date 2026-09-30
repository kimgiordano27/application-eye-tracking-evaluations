/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<OVRPlugin.Qpl.Annotation.Builder.Entry>$$Contains
ENTRY_POINT: 02539e58
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_5;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0253a158) */

void System_Collections_ObjectModel_ReadOnlyCollection<OVRPlugin_Qpl_Annotation_Builder_Entry>__Contains
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long *unaff_x19;
  long unaff_x20;
  long *plVar18;
  long unaff_x21;
  undefined8 uVar19;
  
  FUN_01d7d918();
  FUN_01d7d918(StringLiteral_2142);
  FUN_01d7d918(StringLiteral_2143);
  FUN_01d7d918(
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              );
  *(undefined1 *)(unaff_x21 + 0x84c) = 1;
  plVar18 = (long *)(unaff_x20 + 0x10);
  if (*plVar18 == 0) {
    lVar8 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_2143);
    FUN_0319873c(lVar8,*(undefined8 *)StringLiteral_2142);
    *plVar18 = lVar8;
    thunk_FUN_01e10808(plVar18,lVar8);
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar8 = *unaff_x19;
  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_2144) {
        puVar9 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_02539f1c;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
  puVar9 = (undefined8 *)FUN_01dde8fc();
LAB_02539f1c:
  puVar3 = Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads;
  plVar10 = (long *)(*(code *)*puVar9)();
  puVar7 = StringLiteral_2145;
  puVar6 = StringLiteral_2141;
  puVar5 = StringLiteral_2140;
  puVar4 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
  puVar2 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  do {
    lVar8 = *plVar10;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02539fac;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_01dde8fc(plVar10,*(long *)puVar4,0);
LAB_02539fac:
    uVar15 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if ((uVar15 & 1) == 0) {
      if (plVar10 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar15 == 0) goto LAB_0253a100;
      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar10;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0253a008;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_01dde8fc(plVar10,*(long *)puVar7,0);
LAB_0253a008:
    lVar8 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if (lVar8 != 0) {
      uVar11 = thunk_FUN_01dfff04(lVar8,0);
      uVar19 = *(undefined8 *)puVar5;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar19 = FUN_033a87c8(uVar19,0);
      uVar15 = FUN_033aa3b4(uVar11,uVar19,0);
      if ((uVar15 & 1) == 0) {
        lVar12 = *plVar18;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        lVar13 = *(long *)(lVar12 + 0x10);
        lVar16 = *(long *)puVar6;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          plVar14 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
          *plVar14 = lVar8;
          thunk_FUN_01e10808(plVar14,lVar8);
        }
        else {
          FUN_03198f70(lVar12,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar9 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0253a11c;
    }
  }
LAB_0253a100:
  puVar9 = (undefined8 *)FUN_01dde8fc(plVar10,*(long *)puVar3,0);
LAB_0253a11c:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
  return;
}


