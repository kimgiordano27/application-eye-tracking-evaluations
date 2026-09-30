/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_RecenterTrackingOrigin
ENTRY_POINT: 0369a708
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


void OVRPlugin_OVRP_1_0_0__ovrp_RecenterTrackingOrigin
               (long *param_1,float param_2,undefined1 param_3 [16],float param_4,float param_5)

{
  undefined8 *puVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  long *unaff_x21;
  long *unaff_x22;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar9;
  float unaff_s13;
  float fVar10;
  float unaff_s14;
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
  float fStack00000000000000dc;
  
  fVar7 = unaff_s8 * unaff_s8 + param_2 + unaff_s11 * unaff_s11;
  fVar9 = unaff_s14 - unaff_s12;
  fVar10 = unaff_s10 - unaff_s13;
  param_4 = param_5 - param_4;
  if (**(float **)(*param_1 + 0xb8) <= fVar7) {
    fVar8 = param_4 * unaff_s8 + fVar9 * unaff_s9 + fVar10 * unaff_s11;
    fVar9 = fVar9 - (unaff_s9 * fVar8) / fVar7;
    fVar10 = fVar10 - (unaff_s11 * fVar8) / fVar7;
    param_4 = param_4 - (unaff_s8 * fVar8) / fVar7;
  }
  fStack00000000000000dc = param_5;
  if (DAT_0482ee9b == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482ee9b = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar7 = SQRT(param_4 * param_4 + fVar9 * fVar9 + fVar10 * fVar10);
  if (fVar7 <= DAT_00c926ac) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x21 + 0xb8);
    fVar9 = *pfVar2;
    fVar10 = pfVar2[1];
    param_4 = pfVar2[2];
  }
  else {
    fVar9 = fVar9 / fVar7;
    fVar10 = fVar10 / fVar7;
    param_4 = param_4 / fVar7;
  }
  if (*(char *)(unaff_x20 + 0xe19) == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    *(undefined1 *)(unaff_x20 + 0xe19) = 1;
  }
  lVar3 = *(long *)(*unaff_x21 + 0xb8);
  FUN_04067568(fVar9,fVar10,param_4,*(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),
               *(undefined4 *)(lVar3 + 0x20),0);
  plVar6 = *(long **)(unaff_x19 + 0x138);
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  FUN_0407b788(&stack0x00000050,0);
  uStack0000000000000084 = CONCAT44(in_stack_00000068,uStack0000000000000064);
  in_stack_00000078 = in_stack_00000058;
  in_stack_00000070 = in_stack_00000050;
  uStack000000000000007c = uStack000000000000005c;
  in_stack_00000080 = in_stack_00000060;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_47__) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
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


