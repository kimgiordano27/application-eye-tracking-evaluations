/*
FUNCTION_NAME: System.Diagnostics.Process$$GetCurrentProcess
ENTRY_POINT: 03539214
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x035395d0) */

long System_Diagnostics_Process__GetCurrentProcess(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_01d7d918(StringLiteral_4454);
  FUN_01d7d918(StringLiteral_4455);
  FUN_01d7d918(Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial);
  FUN_01d7d918(PTR_DAT_0421a0e8);
  FUN_01d7d918(StringLiteral_48);
  FUN_01d7d918(StringLiteral_49);
  FUN_01d7d918(StringLiteral_917);
  FUN_01d7d918(StringLiteral_10836);
  FUN_01d7d918(StringLiteral_10839);
  FUN_01d7d918(PTR_DAT_0421a0f8);
  *(undefined1 *)(unaff_x21 + 0x893) = 1;
  uVar9 = FUN_01d7d9bc(*unaff_x22,6);
  FUN_032ff394(uVar9,*unaff_x20,0);
  lVar10 = FUN_03539b9c();
  if ((lVar10 != 0) &&
     (uVar9 = FUN_0327baac(lVar10,uVar9,0), puVar3 = PTR_DAT_0421a0f0,
     puVar2 = Field_UnityEngine_EventSystems_RaycastResult_m_GameObject,
     puVar1 = Field_UnityEngine_InputSystem_UI_NavigationModel_eventData, unaff_x19 != 0)) {
    uVar11 = FUN_0327baac();
    plVar12 = (long *)FUN_020ade94(uVar9,uVar11,*(undefined8 *)puVar3);
    lVar10 = thunk_FUN_01de27b8(*(undefined8 *)puVar1);
    System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
              (lVar10,*(undefined8 *)puVar2);
    if (plVar12 != (long *)0x0) {
      lVar14 = *plVar12;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_4454) {
            puVar13 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0353937c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar13 = (undefined8 *)FUN_01dde8fc(plVar12,*(long *)StringLiteral_4454,0);
LAB_0353937c:
      plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      puVar8 = PTR_DAT_0421a0f8;
      puVar7 = StringLiteral_10839;
      puVar6 = StringLiteral_4455;
      puVar5 = StringLiteral_917;
      puVar4 = StringLiteral_49;
      puVar3 = StringLiteral_48;
      puVar2 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
      puVar1 = Field_System_Reflection_ParameterInfo_ClassImpl;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      do {
        lVar14 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0353941c;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar13 = (undefined8 *)FUN_01dde8fc(plVar12,*(long *)puVar2,0);
LAB_0353941c:
        uVar15 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if ((uVar15 & 1) == 0) {
          if (plVar12 == (long *)0x0) {
            return lVar10;
          }
          lVar14 = *plVar12;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 == 0) goto LAB_0353956c;
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_03539554;
        }
        lVar14 = *plVar12;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
              puVar13 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_03539478;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar13 = (undefined8 *)FUN_01dde8fc(plVar12,*(long *)puVar6,0);
LAB_03539478:
        lVar14 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar9 = FUN_0327d284(lVar14,0);
        uVar15 = thunk_FUN_03278f50(uVar9,*(undefined8 *)puVar5,0);
        if (((uVar15 & 1) != 0) ||
           (uVar15 = thunk_FUN_03278f50(uVar9,*(undefined8 *)puVar8,0), (uVar15 & 1) != 0)) {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          FUN_02f17d24(lVar10,*(undefined8 *)puVar4,*(undefined8 *)puVar1);
        }
        uVar15 = thunk_FUN_03278f50(uVar9,*(undefined8 *)puVar7,0);
        if (((uVar15 & 1) == 0) &&
           (uVar15 = thunk_FUN_03278f50(uVar9,*(undefined8 *)StringLiteral_10836,0),
           (uVar15 & 1) == 0)) {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
        }
        else {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          FUN_02f17d24(lVar10,*(undefined8 *)puVar3,*(undefined8 *)puVar1);
        }
        FUN_02f17d24(lVar10,uVar9,*(undefined8 *)puVar1);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_03539554:
    if (*(long *)(piVar16 + -2) ==
        *(long *)Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads) {
      puVar13 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_03539588;
    }
  }
LAB_0353956c:
  puVar13 = (undefined8 *)
            FUN_01dde8fc(plVar12,*(long *)
                                  Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                         ,0);
LAB_03539588:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
  return lVar10;
}


