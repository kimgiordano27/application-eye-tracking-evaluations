/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeTrackingEnabled
ENTRY_POINT: 036a4d40
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 115
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_14;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeTrackingEnabled(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 in_ZR;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong in_x9;
  long lVar13;
  int *in_x10;
  int *piVar14;
  long unaff_x19;
  ulong unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long *plVar15;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float unaff_s13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  int iStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long in_stack_00000078;
  
code_r0x036a4d40:
  if (!(bool)in_ZR) goto LAB_036a4d2c;
LAB_036a4d44:
  puVar7 = (undefined8 *)FUN_01ecb238(unaff_x23,param_3,4);
  do {
    (*(code *)*puVar7)(&stack0x00000030,unaff_x23,unaff_x21 & 0xffffffff,0,puVar7[1]);
    uVar6 = in_stack_00000038;
    uVar5 = uStack0000000000000034;
    iVar4 = iStack0000000000000030;
                    /* try { // try from 036a4d88 to 037a4d97 has its CatchHandler @ 036a4dcc */
    uVar8 = FUN_036a4fe8();
    if ((uVar8 & 1) == 0) {
                    /* try { // try from 036a4d98 to 037a4d9f has its CatchHandler @ 036a4dac */
      plVar15 = *(long **)(unaff_x19 + 0x28);
      if (plVar15 == (long *)0x0) goto LAB_036a4fe0;
                    /* catch() { ... } // from try @ 036a4cc0 with catch @ 036a4da0
                       try { // try from 036a4da0 to 037a4de3 has its CatchHandler @ 036a4c04 */
      lVar11 = *plVar15;
                    /* catch() { ... } // from try @ 036a4ca4 with catch @ 036a4da4 */
                    /* catch() { ... } // from try @ 036a4c78 with catch @ 036a4da8 */
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    /* catch() { ... } // from try @ 036a4d54 with catch @ 036a4dac
                       catch() { ... } // from try @ 036a4d98 with catch @ 036a4dac */
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
                    /* catch() { ... } // from try @ 036a4c88 with catch @ 036a4db8 */
          if (*(long *)(piVar14 + -2) == *unaff_x27) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 4) * 0x10 + 0x138);
            goto LAB_036a4df0;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar15,*unaff_x27,4);
LAB_036a4df0:
      (*(code *)*puVar7)(&stack0x00000030,plVar15,unaff_w22,0,puVar7[1]);
      in_stack_00000010 = CONCAT44(uStack0000000000000034,iStack0000000000000030);
      uStack0000000000000064 = uStack0000000000000044;
      uStack0000000000000060 = uStack0000000000000040;
      in_stack_00000058 = in_stack_00000038;
      in_stack_00000018 = in_stack_00000038;
      uStack0000000000000024 = uStack0000000000000044;
      uStack0000000000000020 = uStack0000000000000040;
      in_stack_00000050 = in_stack_00000010;
      in_stack_00000078 = FUN_036a5088();
    }
    iStack0000000000000030 = unaff_w22;
    uVar9 = thunk_FUN_01f113fc(*unaff_x28,&stack0x00000030);
    in_stack_00000008._4_4_ = (undefined4)unaff_x21;
    uVar10 = thunk_FUN_01f113fc(*unaff_x28,(long)&stack0x00000008 + 4);
    FUN_0340f2f0(*(undefined8 *)
                  Method_Scene_PlayerController_<SetTimeScaleRoutine>d__82_System_Collections_IEnumerator_Reset__
                 ,uVar9,uVar10,0);
    if (*(long *)(unaff_x19 + 0x30) == 0) {
LAB_036a4fe0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar9 = FUN_036a5284(*(long *)(unaff_x19 + 0x30),unaff_w22);
    if (in_stack_00000078 == 0) goto LAB_036a4fe0;
    fVar3 = (float)uVar9;
    if (unaff_w22 != 0) {
      fVar3 = unaff_s13;
    }
    fVar2 = -(float)uVar9;
    if (unaff_x21 < 0x13) {
      fVar2 = fVar3;
    }
    FUN_04070398(in_stack_00000078,0);
    uVar9 = FUN_036a52fc(iVar4,uVar5,uVar6,uVar9,fVar2);
    lVar11 = in_stack_00000078;
    uVar10 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_IO_Path_<>c_<JoinInternal>b__56_0__);
    FUN_036a5578(uVar10,unaff_w22,unaff_x21 & 0xffffffff,lVar11,uVar9);
    lVar11 = *(long *)(unaff_x19 + 0x58);
    if (lVar11 == 0) goto LAB_036a4fe0;
    lVar12 = *(long *)(lVar11 + 0x10);
    lVar13 = *unaff_x29;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_036a4fe0;
    uVar1 = *(uint *)(lVar11 + 0x18);
    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
      puVar7 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
      *puVar7 = uVar10;
      thunk_FUN_01f51358(puVar7,uVar10);
    }
    else {
      FUN_030f2bb4(lVar11,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
      ;
    }
    do {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 0x18) {
        FUN_036a55d0();
        lVar11 = *(long *)(unaff_x19 + 0x48);
        *(undefined2 *)(unaff_x19 + 0x70) = 0x100;
        if (lVar11 != 0) {
          (**(code **)(lVar11 + 0x18))
                    (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
          return;
        }
        goto LAB_036a4fe0;
      }
      lVar11 = *unaff_x26;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar11 = *unaff_x26;
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
      if (lVar11 == 0) goto LAB_036a4fe0;
      if (*(uint *)(lVar11 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      unaff_w22 = *(int *)(lVar11 + unaff_x21 * 4 + 0x20);
    } while ((unaff_w22 == -1) ||
            ((*(uint *)(unaff_x19 + 0x40) >> (ulong)((uint)unaff_x21 & 0x1f) & 1) == 0));
    unaff_x23 = *(long **)(unaff_x19 + 0x28);
    if (unaff_x23 == (long *)0x0) goto LAB_036a4fe0;
    param_1 = *unaff_x23;
    param_3 = *unaff_x27;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_036a4d44;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_036a4d2c:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x036a4d40;
    }
                    /* try { // try from 036a4d54 to 037a4d5f has its CatchHandler @ 036a4dac */
                    /* try { // try from 036a4d60 to 037a4d87 has its CatchHandler @ 036a4c04 */
    puVar7 = (undefined8 *)(param_1 + (long)(*in_x10 + 4) * 0x10 + 0x138);
  } while( true );
}


