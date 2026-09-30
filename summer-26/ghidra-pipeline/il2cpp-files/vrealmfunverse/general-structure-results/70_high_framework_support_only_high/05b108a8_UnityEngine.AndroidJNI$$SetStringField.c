/*
FUNCTION_NAME: UnityEngine.AndroidJNI$$SetStringField
ENTRY_POINT: 05b108a8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05b10c8c) */
/* WARNING: Removing unreachable block (ram,0x05b10c7c) */

void UnityEngine_AndroidJNI__SetStringField(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  long unaff_x19;
  int iVar12;
  long unaff_x20;
  int iVar13;
  long *unaff_x22;
  float fVar14;
  float fVar15;
  
  FUN_02b3c81c();
  FUN_02b3c81c(Method_UnityEngine_GameObject_GetComponent<OVRCameraRig>__);
  FUN_02b3c81c(Method_UnityEngine_GameObject_GetComponent<EventSystem>__);
  FUN_02b3c81c(Method_UnityEngine_GameObject_GetComponent<DebugUIHandlerWidget>__);
  FUN_02b3c81c(Method_UnityEngine_GameObject_GetComponent<OVRManager>__);
  FUN_02b3c81c(Method_UnityEngine_GameObject_GetComponent<OpenXRRestarter>__);
  FUN_02b3c81c(Method_UnityEngine_GameObject_GetComponent<Outline>__);
  FUN_02b3c81c(Method_Platinio_TweenEngine_EasingFunctions_EaseOutBackD__);
  FUN_02b3c81c(Method_Oculus_Interaction_Samples_DropDownGroup_<Start>b__37_0__);
  *(undefined1 *)(unaff_x20 + 0x6a9) = 1;
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar5 = *unaff_x22;
  }
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (lVar5 != 0) {
    FUN_05c36c30(lVar5,0);
  }
  puVar3 = Method_UnityEngine_GameObject_GetComponent<NavMeshSurface>__;
  puVar2 = Method_System_Linq_Enumerable_Select<GUIContent,_string>__;
  puVar1 = Method_Platinio_TweenEngine_EasingFunctions_EaseOutBackD__;
  if (*(char *)(unaff_x19 + 0xc0) == '\0') {
    if (*(char *)(unaff_x19 + 0xa8) == '\0') {
      if (*(char *)(unaff_x19 + 0xf0) == '\0') {
        if (*(long *)(unaff_x19 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_03eb0a7c(0,*(long *)(unaff_x19 + 0xe8),
                     *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<NavMeshSurface>__);
        *(undefined1 *)(unaff_x19 + 0xf0) = 1;
      }
      fVar15 = 0.0;
      iVar13 = 4;
      goto LAB_05b10bb8;
    }
    fVar15 = 0.0;
    *(undefined1 *)(unaff_x19 + 0xf0) = 0;
  }
  else {
    *(undefined1 *)(unaff_x19 + 0xf0) = 0;
    puVar4 = Method_UnityEngine_GameObject_GetComponent<OpenXRRestarter>__;
    if (*(long *)(unaff_x19 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar13 = *(int *)(*(long *)(unaff_x19 + 0xb0) + 0x20);
    if (iVar13 < 1) {
      fVar15 = 0.0;
    }
    else {
      fVar15 = 0.0;
      iVar12 = 0;
      do {
        if (*(long *)(unaff_x19 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar6 = RoomMeshAnchor_<GenerateRoomMesh>d__15__System_Collections_IEnumerator_Reset
                          (*(long *)(unaff_x19 + 0xb0),iVar12,*(undefined8 *)puVar4);
        lVar7 = thunk_FUN_02b79548(uVar6,*(undefined8 *)puVar1);
        if (lVar7 == 0) {
          if (*(long *)(unaff_x19 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          fVar15 = 1.0;
          FUN_0454df84(0x3f800000,*(long *)(unaff_x19 + 0x110),uVar6,*(undefined8 *)puVar2);
        }
        iVar12 = iVar12 + 1;
      } while (iVar13 != iVar12);
    }
  }
  puVar4 = Method_UnityEngine_GameObject_GetComponent<OVRManager>__;
  if (*(char *)(unaff_x19 + 0xa8) != '\0') {
    if (*(long *)(unaff_x19 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar13 = *(int *)(*(long *)(unaff_x19 + 0xa0) + 0x20);
    if (0 < iVar13) {
      iVar12 = 0;
      do {
        if (*(long *)(unaff_x19 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar6 = RoomMeshAnchor_<GenerateRoomMesh>d__15__System_Collections_IEnumerator_Reset
                          (*(long *)(unaff_x19 + 0xa0),iVar12,*(undefined8 *)puVar4);
        lVar7 = thunk_FUN_02b79548(uVar6,*(undefined8 *)puVar1);
        if ((lVar7 == 0) && (uVar8 = FUN_05b0e478(), (uVar8 & 1) == 0)) {
          if (*(long *)(unaff_x19 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          FUN_0454df84(0,*(long *)(unaff_x19 + 0x110),uVar6,*(undefined8 *)puVar2);
        }
        iVar12 = iVar12 + 1;
      } while (iVar13 != iVar12);
    }
  }
  puVar4 = Method_UnityEngine_GameObject_GetComponent<Outline>__;
  if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  iVar13 = *(int *)(*(long *)(unaff_x19 + 0x108) + 0x20);
  if (iVar13 < 1) {
    iVar13 = 0xf;
  }
  else {
    iVar12 = 0;
    do {
      if (*(long *)(unaff_x19 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      plVar9 = (long *)RoomMeshAnchor_<GenerateRoomMesh>d__15__System_Collections_IEnumerator_Reset
                                 (*(long *)(unaff_x19 + 0x108),iVar12,*(undefined8 *)puVar4);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar7 = *plVar9;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar10 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_05b10b1c;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)puVar1,1);
LAB_05b10b1c:
      fVar14 = (float)(*(code *)*puVar10)(plVar9);
      if (*(long *)(unaff_x19 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_0454df84(*(long *)(unaff_x19 + 0x110),plVar9,*(undefined8 *)puVar2);
      iVar12 = iVar12 + 1;
      if (fVar15 <= fVar14) {
        fVar15 = fVar14;
      }
    } while (iVar12 != iVar13);
    iVar13 = 0xf;
  }
LAB_05b10bb8:
  if (lVar5 != 0) {
    FUN_05c36cb8(lVar5,0);
  }
  if ((iVar13 == 0xf) || (iVar13 == 0)) {
    lVar5 = *unaff_x22;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar5 = *unaff_x22;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 != 0) {
      FUN_05c36c30(lVar5,0);
    }
    if (*(long *)(unaff_x19 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_03eb0a7c(fVar15,*(long *)(unaff_x19 + 0xe8),*(undefined8 *)puVar3);
    if (lVar5 != 0) {
      FUN_05c36cb8(lVar5,0);
    }
  }
  return;
}


