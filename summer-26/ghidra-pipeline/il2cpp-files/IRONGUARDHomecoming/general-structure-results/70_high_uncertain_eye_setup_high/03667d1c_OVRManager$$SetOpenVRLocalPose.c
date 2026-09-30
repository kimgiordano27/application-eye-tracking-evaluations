/*
FUNCTION_NAME: OVRManager$$SetOpenVRLocalPose
ENTRY_POINT: 03667d1c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetOpenVRLocalPose(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  float fVar3;
  ulong uVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  ulong uVar8;
  float fVar9;
  float unaff_s9;
  float unaff_s10;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000078;
  float fStack000000000000007c;
  
  puVar1 = Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__;
  fVar9 = fStack000000000000007c * fStack000000000000007c +
          unaff_s10 * unaff_s10 + unaff_s9 * unaff_s9;
  fVar3 = (float)FUN_01fdd7a4(0);
  fVar5 = unaff_s10;
  fVar7 = unaff_s9;
  FUN_040674b0(fVar3 + fVar3,0);
  uStack0000000000000014 = FUN_040677e4(0);
  uVar10 = *(undefined4 *)(unaff_x20 + 0xc);
  uVar6 = (ulong)*(uint *)(unaff_x20 + 0x10);
  uVar8 = (ulong)*(uint *)(unaff_x20 + 0x14);
  uVar11 = *(undefined4 *)(unaff_x20 + 0x18);
  if (DAT_0482ee19 == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    DAT_0482ee19 = '\x01';
  }
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  uVar4 = FUN_040677e4(uVar10,uVar6,uVar8,uVar11,-*(float *)(lVar2 + 0x18),-*(float *)(lVar2 + 0x1c)
                       ,-*(float *)(lVar2 + 0x20),0);
  if (*(char *)(unaff_x21 + 0x8ab) == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                      );
    *(undefined1 *)(unaff_x21 + 0x8ab) = 1;
  }
  if (**(float **)(*(long *)puVar1 + 0xb8) <= fVar9) {
    fVar3 = fStack000000000000007c * (float)uVar8 +
            unaff_s10 * (float)uVar4 + unaff_s9 * (float)uVar6;
    uVar4 = (ulong)(uint)((float)uVar4 - (unaff_s10 * fVar3) / fVar9);
    uVar6 = (ulong)(uint)((float)uVar6 - (unaff_s9 * fVar3) / fVar9);
    uVar8 = (ulong)(uint)((float)uVar8 - (fStack000000000000007c * fVar3) / fVar9);
  }
  fVar3 = (float)FUN_01fdd7a4(uVar4,uVar6,uVar8,uStack0000000000000018,uStack000000000000001c,
                              uStack0000000000000078,0);
  FUN_040674b0(fVar3 + fVar3,0);
  uVar10 = FUN_040677e4(0);
  uVar11 = FUN_04067568(uStack0000000000000014,0);
  *(undefined4 *)((long)unaff_x19 + 0xc) = uVar11;
  *(float *)(unaff_x19 + 2) = fVar5;
  *(float *)((long)unaff_x19 + 0x14) = fVar7;
  *(undefined4 *)(unaff_x19 + 3) = uVar10;
  *unaff_x19 = in_stack_00000020;
  *(undefined4 *)(unaff_x19 + 1) = in_stack_00000028;
  return;
}


