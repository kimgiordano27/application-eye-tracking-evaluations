/*
FUNCTION_NAME: Unity.Mathematics.math$$round
ENTRY_POINT: 06cca40c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x06cca6a4) */

void Unity_Mathematics_math__round(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  undefined8 in_stack_00000018;
  
  puVar1 = Oculus_Interaction_Input_Compatibility_OVR_HandSkeletonJoint___TypeInfo;
  if ((DAT_07eea58c & 1) == 0) {
    FUN_03642964(OVRPlugin_Bone___TypeInfo);
    FUN_03642964(OVRPlugin_BoneCapsule___TypeInfo);
    FUN_03642964(Oculus_Interaction_Input_Compatibility_OVR_HandSkeletonJoint___TypeInfo);
    FUN_03642964(UnityEngine_Rendering_RenderTargetIdentifier___TypeInfo);
    DAT_07eea58c = 1;
  }
  lVar5 = *(long *)puVar1;
  in_stack_00000018 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar5 = *(long *)puVar1;
    lVar8 = *(long *)(lVar5 + 0xb8);
    iVar9 = *(int *)(lVar5 + 0xe4);
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    if (iVar9 == 0) {
      thunk_FUN_036a1978();
      lVar5 = *(long *)puVar1;
      lVar8 = *(long *)(lVar5 + 0xb8);
    }
  }
  else {
    lVar8 = *(long *)(lVar5 + 0xb8);
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
  }
  puVar4 = OVRPlugin_BoneCapsule___TypeInfo;
  puVar3 = OVRPlugin_Bone___TypeInfo;
  puVar2 = UnityEngine_Rendering_RenderTargetIdentifier___TypeInfo;
  if (*(char *)(lVar8 + 0xc) != '\0') {
    iVar9 = 0;
    while( true ) {
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar5 = *(long *)puVar2;
      }
      lVar8 = *(long *)(lVar5 + 0xb8);
      if (*(int *)(lVar8 + 0x28) <= iVar9) break;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar8 = *(long *)(*(long *)puVar2 + 0xb8);
      }
      uVar6 = FUN_0427a61c(lVar8 + 0x28,iVar9,*(undefined8 *)puVar4);
      if (uVar6 == 0) {
LAB_06cca600:
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar5 = *(long *)puVar2;
        }
        FUN_0427b10c(*(long *)(lVar5 + 0xb8) + 0x28,iVar9,*(undefined8 *)puVar3);
        iVar9 = iVar9 + -1;
      }
      else {
        if ((uVar6 & 1) == 0) {
          puVar7 = (undefined8 *)FUN_05e63fd8(uVar6,0);
          plVar10 = (long *)*puVar7;
        }
        else {
          plVar10 = (long *)thunk_FUN_036447e0(uVar6,0);
        }
        lVar5 = *(long *)puVar2;
        if (plVar10 == (long *)0x0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_036a1978(lVar5);
            lVar5 = *(long *)puVar2;
          }
          in_stack_00000018 =
               FUN_0427a61c(*(long *)(lVar5 + 0xb8) + 0x28,iVar9,*(undefined8 *)puVar4);
          FUN_05d345c4(&stack0x00000018,0);
          goto LAB_06cca600;
        }
        if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_03643084(plVar10);
        }
        if (0 < (int)plVar10[9]) {
          lVar5 = 0;
          do {
            lVar8 = plVar10[2];
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(uint *)(lVar8 + 0x18) <= (uint)lVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            lVar8 = *(long *)(lVar8 + lVar5 * 8 + 0x20);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            UnityEngine_InputSystem_Layouts_InputDeviceBuilder__FinalizeControlHierarchyRecursive
                      (lVar8,0);
            lVar5 = lVar5 + 1;
          } while ((int)lVar5 < (int)plVar10[9]);
        }
      }
      iVar9 = iVar9 + 1;
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar5 = *(long *)puVar1;
    }
    *(undefined1 *)(*(long *)(lVar5 + 0xb8) + 0xc) = 0;
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar5 = *(long *)puVar1;
  }
  *(int *)(*(long *)(lVar5 + 0xb8) + 8) = *(int *)(*(long *)(lVar5 + 0xb8) + 8) + -1;
  return;
}


