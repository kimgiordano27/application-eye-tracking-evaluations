/*
FUNCTION_NAME: UnityEngine.AndroidJNI$$GetDoubleField
ENTRY_POINT: 05b10864
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

void UnityEngine_AndroidJNI__GetDoubleField(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  
  puVar1 = Method_Oculus_Interaction_Samples_DropDownGroup_<Start>b__37_0__;
  if ((DAT_066d46a9 & 1) == 0) {
    FUN_02b3c81c(Method_UnityEngine_GameObject_GetComponent<NavMeshSurface>__);
    FUN_02b3c81c(Method_System_Linq_Enumerable_Select<GUIContent,_string>__);
    FUN_02b3c81c(Method_UnityEngine_GameObject_GetComponent<OVRCameraRig>__);
    FUN_02b3c81c(Method_UnityEngine_GameObject_GetComponent<EventSystem>__);
    FUN_02b3c81c(Method_UnityEngine_GameObject_GetComponent<DebugUIHandlerWidget>__);
    FUN_02b3c81c(Method_UnityEngine_GameObject_GetComponent<OVRManager>__);
    FUN_02b3c81c(Method_UnityEngine_GameObject_GetComponent<OpenXRRestarter>__);
    FUN_02b3c81c(Method_UnityEngine_GameObject_GetComponent<Outline>__);
    FUN_02b3c81c(Method_Platinio_TweenEngine_EasingFunctions_EaseOutBackD__);
    FUN_02b3c81c(Method_Oculus_Interaction_Samples_DropDownGroup_<Start>b__37_0__);
    DAT_066d46a9 = 1;
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar6 = *(long *)puVar1;
  }
  lVar6 = **(long **)(lVar6 + 0xb8);
  if (lVar6 != 0) {
    FUN_05c36c30(lVar6,0);
  }
  puVar4 = Method_UnityEngine_GameObject_GetComponent<NavMeshSurface>__;
  puVar3 = Method_System_Linq_Enumerable_Select<GUIContent,_string>__;
  puVar2 = Method_Platinio_TweenEngine_EasingFunctions_EaseOutBackD__;
  if (*(char *)(param_1 + 0xc0) == '\0') {
    if (*(char *)(param_1 + 0xa8) == '\0') {
      if (*(char *)(param_1 + 0xf0) == '\0') {
        if (*(long *)(param_1 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_03eb0a7c(0,*(long *)(param_1 + 0xe8),
                     *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<NavMeshSurface>__);
        *(undefined1 *)(param_1 + 0xf0) = 1;
      }
      fVar16 = 0.0;
      iVar14 = 4;
      goto LAB_05b10bb8;
    }
    fVar16 = 0.0;
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xf0) = 0;
    puVar5 = Method_UnityEngine_GameObject_GetComponent<OpenXRRestarter>__;
    if (*(long *)(param_1 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar14 = *(int *)(*(long *)(param_1 + 0xb0) + 0x20);
    if (iVar14 < 1) {
      fVar16 = 0.0;
    }
    else {
      fVar16 = 0.0;
      iVar13 = 0;
      do {
        if (*(long *)(param_1 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar7 = RoomMeshAnchor_<GenerateRoomMesh>d__15__System_Collections_IEnumerator_Reset
                          (*(long *)(param_1 + 0xb0),iVar13,*(undefined8 *)puVar5);
        lVar8 = thunk_FUN_02b79548(uVar7,*(undefined8 *)puVar2);
        if (lVar8 == 0) {
          if (*(long *)(param_1 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          fVar16 = 1.0;
          FUN_0454df84(0x3f800000,*(long *)(param_1 + 0x110),uVar7,*(undefined8 *)puVar3);
        }
        iVar13 = iVar13 + 1;
      } while (iVar14 != iVar13);
    }
  }
  puVar5 = Method_UnityEngine_GameObject_GetComponent<OVRManager>__;
  if (*(char *)(param_1 + 0xa8) != '\0') {
    if (*(long *)(param_1 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar14 = *(int *)(*(long *)(param_1 + 0xa0) + 0x20);
    if (0 < iVar14) {
      iVar13 = 0;
      do {
        if (*(long *)(param_1 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar7 = RoomMeshAnchor_<GenerateRoomMesh>d__15__System_Collections_IEnumerator_Reset
                          (*(long *)(param_1 + 0xa0),iVar13,*(undefined8 *)puVar5);
        lVar8 = thunk_FUN_02b79548(uVar7,*(undefined8 *)puVar2);
        if ((lVar8 == 0) && (uVar9 = FUN_05b0e478(param_1,uVar7), (uVar9 & 1) == 0)) {
          if (*(long *)(param_1 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          FUN_0454df84(0,*(long *)(param_1 + 0x110),uVar7,*(undefined8 *)puVar3);
        }
        iVar13 = iVar13 + 1;
      } while (iVar14 != iVar13);
    }
  }
  puVar5 = Method_UnityEngine_GameObject_GetComponent<Outline>__;
  if (*(long *)(param_1 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  iVar14 = *(int *)(*(long *)(param_1 + 0x108) + 0x20);
  if (iVar14 < 1) {
    iVar14 = 0xf;
  }
  else {
    iVar13 = 0;
    do {
      if (*(long *)(param_1 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      plVar10 = (long *)RoomMeshAnchor_<GenerateRoomMesh>d__15__System_Collections_IEnumerator_Reset
                                  (*(long *)(param_1 + 0x108),iVar13,*(undefined8 *)puVar5);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar8 = *plVar10;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_05b10b1c;
          }
          uVar9 = uVar9 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_02b7654c(plVar10,*(long *)puVar2,1);
LAB_05b10b1c:
      fVar15 = (float)(*(code *)*puVar11)(plVar10,param_1,puVar11[1]);
      if (*(long *)(param_1 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_0454df84(*(long *)(param_1 + 0x110),plVar10,*(undefined8 *)puVar3);
      iVar13 = iVar13 + 1;
      if (fVar16 <= fVar15) {
        fVar16 = fVar15;
      }
    } while (iVar13 != iVar14);
    iVar14 = 0xf;
  }
LAB_05b10bb8:
  if (lVar6 != 0) {
    FUN_05c36cb8(lVar6,0);
  }
  if ((iVar14 == 0xf) || (iVar14 == 0)) {
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar6 = *(long *)puVar1;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar6 != 0) {
      FUN_05c36c30(lVar6,0);
    }
    if (*(long *)(param_1 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_03eb0a7c(fVar16,*(long *)(param_1 + 0xe8),*(undefined8 *)puVar4);
    if (lVar6 != 0) {
      FUN_05c36cb8(lVar6,0);
    }
  }
  return;
}


