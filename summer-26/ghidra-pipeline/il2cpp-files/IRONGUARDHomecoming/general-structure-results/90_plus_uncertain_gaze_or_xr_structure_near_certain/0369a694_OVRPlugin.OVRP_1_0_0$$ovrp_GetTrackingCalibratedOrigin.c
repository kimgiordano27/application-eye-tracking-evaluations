/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingCalibratedOrigin
ENTRY_POINT: 0369a694
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingCalibratedOrigin
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined8 *puVar1;
  long lVar2;
  float *pfVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  long *unaff_x21;
  long *unaff_x22;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float unaff_s10;
  float fVar14;
  float fVar15;
  float unaff_s12;
  float fVar16;
  float unaff_s13;
  float fVar17;
  float unaff_s14;
  float fVar18;
  float unaff_s15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  undefined8 uStack0000000000000084;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  
  fVar18 = fStack00000000000000dc + unaff_s14;
  lVar2 = *(long *)(*unaff_x21 + 0xb8);
  fVar14 = fStack00000000000000d8 + unaff_s10;
  fVar13 = *(float *)(lVar2 + 0x18);
  fVar15 = *(float *)(lVar2 + 0x1c);
  fVar12 = *(float *)(lVar2 + 0x20);
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + unaff_s15;
  if (DAT_0482f8ab == '\0') {
    fStack00000000000000d8 = unaff_s12;
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
                      );
    DAT_0482f8ab = '\x01';
    unaff_s12 = fStack00000000000000d8;
  }
  fVar7 = fVar12 * fVar12 + fVar13 * fVar13 + fVar15 * fVar15;
  fVar16 = fVar18 - unaff_s12;
  fVar17 = fVar14 - unaff_s13;
  param_3 = in_stack_00000008._4_4_ - param_3;
  if (**(float **)
        (*(long *)
          Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__ +
        0xb8) <= fVar7) {
    fVar9 = param_3 * fVar12 + fVar16 * fVar13 + fVar17 * fVar15;
    fVar16 = fVar16 - (fVar13 * fVar9) / fVar7;
    fVar17 = fVar17 - (fVar15 * fVar9) / fVar7;
    param_3 = param_3 - (fVar12 * fVar9) / fVar7;
  }
  fStack00000000000000dc = in_stack_00000008._4_4_;
  if (DAT_0482ee9b == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482ee9b = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar12 = SQRT(param_3 * param_3 + fVar16 * fVar16 + fVar17 * fVar17);
  if (fVar12 <= DAT_00c926ac) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    pfVar3 = *(float **)(*unaff_x21 + 0xb8);
    fVar16 = *pfVar3;
    fVar17 = pfVar3[1];
    param_3 = pfVar3[2];
  }
  else {
    fVar16 = fVar16 / fVar12;
    fVar17 = fVar17 / fVar12;
    param_3 = param_3 / fVar12;
  }
  uVar10 = (ulong)(uint)param_3;
  uVar4 = (ulong)(uint)fVar17;
  if (*(char *)(unaff_x20 + 0xe19) == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    *(undefined1 *)(unaff_x20 + 0xe19) = 1;
  }
  lVar2 = *(long *)(*unaff_x21 + 0xb8);
  uVar11 = (ulong)*(uint *)(lVar2 + 0x18);
  uVar8 = FUN_04067568(fVar16,uVar4,uVar10,uVar11,*(undefined4 *)(lVar2 + 0x1c),
                       *(undefined4 *)(lVar2 + 0x20),0);
  plVar6 = *(long **)(unaff_x19 + 0x138);
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  FUN_0407b788(fVar18,fVar14,fStack00000000000000dc,uVar8,uVar4,uVar10,uVar11,&stack0x00000050,0);
  uStack0000000000000084 = CONCAT44(in_stack_00000068,uStack0000000000000064);
  in_stack_00000078 = in_stack_00000058;
  in_stack_00000070 = in_stack_00000050;
  uStack000000000000007c = uStack000000000000005c;
  in_stack_00000080 = in_stack_00000060;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_47__) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_0369a904;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_47__
                        ,2);
LAB_0369a904:
  (*(code *)*puVar1)(&stack0x00000010,plVar6,&stack0x00000070,puVar1[1]);
  *(ulong *)(unaff_x19 + 0x14c) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
  *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000010;
  *(undefined8 *)(unaff_x19 + 0x158) = uStack0000000000000024;
  *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
  return;
}


