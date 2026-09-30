/*
FUNCTION_NAME: FUN_05b391f8
ENTRY_POINT: 05b391f8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05b396b4) */
/* WARNING: Removing unreachable block (ram,0x05b3969c) */

void FUN_05b391f8(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  
  puVar3 = PTR_DAT_063174e0;
  if ((DAT_066d47fc & 1) == 0) {
    FUN_02b3c81c(Method_System_Reflection_EventInfo_RemoveEventHandler__);
    FUN_02b3c81c(Method_UnityEngine_GameObject_GetComponent<NavMeshSurface>__);
    FUN_02b3c81c(Method_Autohand_HandGestureEventTextWriter_OnGestureStop__);
    FUN_02b3c81c(Method_HandEventTemplate_OnGrabJointBreak__);
    FUN_02b3c81c(Method_HandEventTemplate_OnHighlight__);
    FUN_02b3c81c(Method_Oculus_Interaction_GrabAPI_HandGrabAPI_OnHandUpdated__);
    FUN_02b3c81c(Method_Oculus_Interaction_HandGrabGlow_UpdateVisual__);
    FUN_02b3c81c(Method_Oculus_Interaction_HandGrab_HandGrabInteractable_<Start>b__46_0__);
    FUN_02b3c81c(Method_Oculus_Interaction_HandGrab_HandGrabInteractor_<Start>b__69_0__);
    FUN_02b3c81c(Method_System_Threading_EventWaitHandle_Set__);
    FUN_02b3c81c(Method_System_Net_DigestSession_Authenticate__);
    FUN_02b3c81c(PTR_DAT_063174e0);
    DAT_066d47fc = 1;
  }
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar8 = *(long *)puVar3;
  }
  lVar8 = **(long **)(lVar8 + 0xb8);
  if (lVar8 != 0) {
    FUN_05c36c30(lVar8,0);
  }
  puVar5 = Method_UnityEngine_GameObject_GetComponent<NavMeshSurface>__;
  if ((*(char *)(param_1 + 0x110) == '\0') && (*(char *)(param_1 + 0xf8) == '\0')) {
    if (*(char *)(param_1 + 0x168) == '\0') {
      if (*(long *)(param_1 + 0x160) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_03eb0a7c(0,*(long *)(param_1 + 0x160),
                   *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<NavMeshSurface>__);
      *(undefined1 *)(param_1 + 0x168) = 1;
    }
    fVar16 = 0.0;
    iVar14 = 4;
  }
  else {
    *(undefined1 *)(param_1 + 0x168) = 0;
    puVar7 = Method_Oculus_Interaction_HandGrab_HandGrabInteractor_<Start>b__69_0__;
    puVar6 = Method_Autohand_HandGestureEventTextWriter_OnGestureStop__;
    puVar4 = Method_System_Net_DigestSession_Authenticate__;
    if (*(long *)(param_1 + 0x158) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar12 = *(long *)(*(long *)(param_1 + 0x158) + 0x10);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    fVar16 = 0.0;
    iVar14 = *(int *)(lVar12 + 0x18);
    if (*(char *)(param_1 + 0x110) != '\0') {
      if (*(long *)(param_1 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      iVar1 = *(int *)(*(long *)(param_1 + 0x100) + 0x20);
      if (0 < iVar1) {
        iVar13 = 0;
        do {
          if (*(long *)(param_1 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          plVar9 = (long *)RoomMeshAnchor_<GenerateRoomMesh>d__15__System_Collections_IEnumerator_Reset
                                     (*(long *)(param_1 + 0x100),iVar13,*(undefined8 *)puVar7);
          if (plVar9 == (long *)0x0) {
LAB_05b393b4:
            if (iVar14 < 1) {
              fVar15 = 1.0;
            }
            else {
              fVar15 = (float)FUN_05acbf04(0x3f800000,*(undefined8 *)(param_1 + 0x158),plVar9,
                                           param_1,0);
            }
            if (*(long *)(param_1 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            FUN_0454df84(fVar15,*(long *)(param_1 + 400),plVar9,*(undefined8 *)puVar6);
            if (fVar16 <= fVar15) {
              fVar16 = fVar15;
            }
          }
          else {
            bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
            if ((*(byte *)(*plVar9 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4))
            goto LAB_05b393b4;
          }
          iVar13 = iVar13 + 1;
        } while (iVar1 != iVar13);
      }
    }
    puVar7 = Method_Oculus_Interaction_HandGrab_HandGrabInteractable_<Start>b__46_0__;
    puVar4 = Method_System_Net_DigestSession_Authenticate__;
    if (*(char *)(param_1 + 0xf8) != '\0') {
      if (*(long *)(param_1 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      iVar1 = *(int *)(*(long *)(param_1 + 0xf0) + 0x20);
      if (0 < iVar1) {
        iVar13 = 0;
        do {
          if (*(long *)(param_1 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          plVar9 = (long *)RoomMeshAnchor_<GenerateRoomMesh>d__15__System_Collections_IEnumerator_Reset
                                     (*(long *)(param_1 + 0xf0),iVar13,*(undefined8 *)puVar7);
          if (plVar9 == (long *)0x0) {
LAB_05b39484:
            uVar10 = FUN_05b3799c(param_1,plVar9);
            if ((uVar10 & 1) == 0) {
              if (iVar14 < 1) {
                fVar15 = 0.0;
              }
              else {
                fVar15 = (float)FUN_05acbf04(0,*(undefined8 *)(param_1 + 0x158),plVar9,param_1,0);
              }
              if (*(long *)(param_1 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              FUN_0454df84(fVar15,*(long *)(param_1 + 400),plVar9,*(undefined8 *)puVar6);
              if (fVar16 <= fVar15) {
                fVar16 = fVar15;
              }
            }
          }
          else {
            bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
            if ((*(byte *)(*plVar9 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4))
            goto LAB_05b39484;
          }
          iVar13 = iVar13 + 1;
        } while (iVar1 != iVar13);
      }
    }
    puVar4 = Method_Oculus_Interaction_HandGrabGlow_UpdateVisual__;
    if (*(long *)(param_1 + 0x188) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar1 = *(int *)(*(long *)(param_1 + 0x188) + 0x20);
    if (0 < iVar1) {
      iVar13 = 0;
      do {
        if (*(long *)(param_1 + 0x188) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar11 = RoomMeshAnchor_<GenerateRoomMesh>d__15__System_Collections_IEnumerator_Reset
                           (*(long *)(param_1 + 0x188),iVar13,*(undefined8 *)puVar4);
        if (iVar14 < 1) {
          fVar15 = (float)FUN_05b397ac(param_1,uVar11);
        }
        else {
          FUN_05b397ac(param_1,uVar11);
          fVar15 = (float)FUN_05acbf04(*(undefined8 *)(param_1 + 0x158),uVar11,param_1,0);
        }
        if (*(long *)(param_1 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_0454df84(fVar15,*(long *)(param_1 + 400),uVar11,*(undefined8 *)puVar6);
        iVar13 = iVar13 + 1;
        if (fVar16 <= fVar15) {
          fVar16 = fVar15;
        }
      } while (iVar1 != iVar13);
    }
    iVar14 = 0x15;
  }
  if (lVar8 != 0) {
    FUN_05c36cb8(lVar8,0);
  }
  if ((iVar14 == 0x15) || (iVar14 == 0)) {
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar8 = *(long *)puVar3;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
    if (lVar8 != 0) {
      FUN_05c36c30(lVar8,0);
    }
    if (*(long *)(param_1 + 0x160) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_03eb0a7c(fVar16,*(long *)(param_1 + 0x160),*(undefined8 *)puVar5);
    if (lVar8 != 0) {
      FUN_05c36cb8(lVar8,0);
    }
  }
  return;
}


