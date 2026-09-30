/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcHeadsetControllerPose
ENTRY_POINT: 07c9e854
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetMrcHeadsetControllerPose
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],ulong param_4,
               undefined4 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long lVar8;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uStack0000000000000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  while( true ) {
    lVar5 = *(long *)(param_1 + 0x38);
    uVar9 = *(undefined8 *)(unaff_x25 + 0x14);
    uVar3 = *(undefined8 *)(unaff_x25 + 0xc);
    uStack0000000000000078 = (undefined4)in_stack_00000098;
    uStack0000000000000070 = in_stack_00000090;
    uStack0000000000000084 = (undefined4)uVar9;
    uStack0000000000000088 = (undefined4)((ulong)uVar9 >> 0x20);
    uStack000000000000007c = (undefined4)uVar3;
    uStack0000000000000080 = (undefined4)((ulong)uVar3 >> 0x20);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x20) {
LAB_07c9e97c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    uVar10 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    puVar6 = (undefined8 *)(lVar5 + unaff_x28);
    while( true ) {
      unaff_x29 = unaff_x29 + 0x10;
      unaff_x20 = unaff_x20 + 1;
      unaff_x28 = unaff_x28 + 0x1c;
      *(undefined8 *)((long)puVar6 + 0x14) = uVar9;
      *(undefined8 *)((long)puVar6 + 0xc) = uVar3;
      puVar6[1] = uVar10;
      *puVar6 = uStack0000000000000070;
      if (unaff_x29 == 0x1cc) {
                    /* try { // try from 07c9e960 to 07d9e98b has its CatchHandler @ 07c9eaf8 */
        return;
      }
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_07c9e978;
      uVar3 = uStack0000000000000070;
      lVar5 = FUN_05badb74(*(long *)(unaff_x19 + 0x60),unaff_x20 & 0xffffffff,
                           *(undefined8 *)PTR_DAT_09f1eba8);
      uVar11 = (undefined4)uVar3;
      if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
      }
      uVar1 = FUN_0952c404(lVar5,0,0);
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_07c9e978;
      lVar8 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48);
      if ((uVar1 & 1) == 0) break;
      if (*(char *)(unaff_x24 + 0xf45) == '\0') {
        FUN_04447ba8();
        *(undefined1 *)(unaff_x24 + 0xf45) = 1;
      }
      if (lVar8 == 0) goto LAB_07c9e978;
      if (*(uint *)(lVar8 + 0x18) <= unaff_x20) goto LAB_07c9e97c;
      uVar3 = **(undefined8 **)(*unaff_x21 + 0xb8);
      *(undefined8 *)(lVar8 + unaff_x29 + -4) = (*(undefined8 **)(*unaff_x21 + 0xb8))[1];
      *(undefined8 *)(lVar8 + unaff_x29 + -0xc) = uVar3;
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_07c9e978;
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
      if (*(char *)(unaff_x26 + 0xf43) == '\0') {
        FUN_04447ba8();
        cVar4 = *(char *)(unaff_x24 + 0xf45);
        *(undefined1 *)(unaff_x26 + 0xf43) = 1;
      }
      else {
        cVar4 = '\x01';
      }
      puVar7 = *(undefined4 **)(*unaff_x27 + 0xb8);
      uVar11 = *puVar7;
      uVar12 = puVar7[1];
      param_4 = (ulong)(uint)puVar7[2];
      if (cVar4 == '\0') {
        FUN_04447ba8();
        *(undefined1 *)(unaff_x24 + 0xf45) = 1;
      }
      puVar7 = *(undefined4 **)(*unaff_x21 + 0xb8);
      param_5 = *puVar7;
      uStack0000000000000070 = 0;
      uStack0000000000000078 = 0;
      uStack000000000000007c = 0;
      uStack0000000000000088 = 0;
      uStack0000000000000080 = 0;
      uStack0000000000000084 = 0;
      FUN_09537b20(uVar11,uVar12,param_4,param_5,puVar7[1],puVar7[2],puVar7[3],&stack0x00000070,0);
      if (lVar5 == 0) goto LAB_07c9e978;
      uVar9 = CONCAT44(uStack0000000000000088,uStack0000000000000084);
      if (*(uint *)(lVar5 + 0x18) <= unaff_x20) goto LAB_07c9e97c;
      uVar3 = CONCAT44(uStack0000000000000080,uStack000000000000007c);
      uVar10 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      puVar6 = (undefined8 *)(lVar5 + unaff_x28);
    }
    if (((lVar5 == 0) || (lVar2 = FUN_095258d0(lVar5,0), lVar2 == 0)) ||
       (uVar12 = FUN_0953a358(lVar2,0), lVar8 == 0)) break;
    if (*(uint *)(lVar8 + 0x18) <= unaff_x20) goto LAB_07c9e97c;
    puVar7 = (undefined4 *)(lVar8 + unaff_x29);
    puVar7[-3] = uVar12;
    puVar7[-2] = uVar11;
    puVar7[-1] = (int)param_4;
    *puVar7 = param_5;
    uVar3 = FUN_095258d0(lVar5,0);
    FUN_07c09014(&stack0x00000070,uVar3,0,0);
    in_stack_00000098 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    in_stack_00000090 = uStack0000000000000070;
    *(ulong *)(unaff_x25 + 0x14) = CONCAT44(uStack0000000000000088,uStack0000000000000084);
    *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
    uVar3 = FUN_095258d0();
    FUN_07c1d8a4(&stack0x00000070,uVar3,&stack0x00000090,0);
    in_stack_00000098 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    in_stack_00000090 = uStack0000000000000070;
    *(ulong *)(unaff_x25 + 0x14) = CONCAT44(uStack0000000000000088,uStack0000000000000084);
    *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
    param_1 = *(long *)(unaff_x19 + 0x48);
    if (param_1 == 0) break;
  }
LAB_07c9e978:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


