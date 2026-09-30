/*
FUNCTION_NAME: OVRPlugin$$GetCurrentTrackingTransformPose
ENTRY_POINT: 0600a580
PROGRAM: vandalizer-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetCurrentTrackingTransformPose(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulong uVar5;
  undefined8 uVar6;
  long in_x9;
  long lVar7;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float unaff_s8;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  
  do {
    *(int *)(param_2 + 0x18) = (int)in_x9 + 1;
    uVar6 = *(undefined8 *)(unaff_x23 + 0x8c);
    param_1 = param_1 + in_x9 * unaff_x27;
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(unaff_x23 + 0x94);
    *(undefined8 *)(param_1 + 0x3c) = uVar6;
    *(undefined8 *)(param_1 + 0x28) = in_stack_000000f8;
    *(undefined8 *)(param_1 + 0x20) = in_stack_000000f0;
    *(undefined8 *)(param_1 + 0x38) = in_stack_00000108;
    *(undefined8 *)(param_1 + 0x30) = in_stack_00000100;
    while( true ) {
      uVar5 = System_Collections_Generic_Dictionary_Enumerator<object,_TextureId>__get_Current
                        (&stack0x000000b0,*unaff_x24);
      if ((uVar5 & 1) == 0) {
        FUN_05a00f4c(&stack0x000000b0,*unaff_x22);
        return;
      }
      uVar6 = *(undefined8 *)((long)unaff_x26 + 0x1c);
      in_stack_00000088 = unaff_x26[1];
      in_stack_00000080 = *unaff_x26;
      in_stack_00000098 = unaff_x26[3];
      in_stack_00000090 = unaff_x26[2];
      uVar13 = *(undefined8 *)((long)unaff_x26 + 0x14);
      uVar12 = *(undefined8 *)((long)unaff_x26 + 0xc);
      *(undefined8 *)(unaff_x23 + 0x24) = *(undefined8 *)((long)unaff_x26 + 0x24);
      *(undefined8 *)(unaff_x23 + 0x1c) = uVar6;
      in_stack_000000f8 = unaff_x26[1];
      in_stack_000000f0 = *unaff_x26;
      uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
      *(undefined8 *)(unaff_x23 + 0x84) = uVar13;
      *(undefined8 *)(unaff_x23 + 0x7c) = uVar12;
      FUN_05faf300(&stack0x00000030,uVar6,&stack0x000000f0,0);
      fVar4 = fStack0000000000000048;
      fVar3 = fStack0000000000000044;
      fVar2 = fStack0000000000000040;
      fVar1 = fStack000000000000003c;
      fVar11 = (float)uVar12;
      in_stack_00000070 = in_stack_00000030;
      in_stack_00000078 = uStack0000000000000038;
      fVar10 = 0.0;
      fVar9 = unaff_s8;
      fVar8 = (float)FUN_06e45f14(0);
      in_stack_000000f0 = in_stack_00000070;
      in_stack_000000f8 =
           CONCAT44((fVar2 * fVar10 + fVar4 * fVar8 + fVar1 * fVar11) - fVar3 * fVar9,
                    in_stack_00000078);
      in_stack_00000100 =
           CONCAT44((fVar1 * fVar9 + fVar4 * fVar10 + fVar3 * fVar11) - fVar2 * fVar8,
                    (fVar3 * fVar8 + fVar4 * fVar9 + fVar2 * fVar11) - fVar1 * fVar10);
      in_stack_00000108 =
           CONCAT44(in_stack_00000108._4_4_,
                    ((fVar4 * fVar11 - fVar1 * fVar8) - fVar2 * fVar9) - fVar3 * fVar10);
      FUN_05faf0f8(&stack0x00000030,*(undefined8 *)(unaff_x20 + 0x28),&stack0x000000f0,0);
      in_stack_00000088 = CONCAT44(fStack000000000000003c,uStack0000000000000038);
      *(ulong *)(unaff_x23 + 0x14) = CONCAT44(fStack0000000000000048,fStack0000000000000044);
      *(ulong *)(unaff_x23 + 0xc) = CONCAT44(fStack0000000000000040,fStack000000000000003c);
      in_stack_00000080 = in_stack_00000030;
      param_2 = *unaff_x21;
      fStack0000000000000018 = (float)in_stack_00000098;
      uStack000000000000001c = (undefined4)*(undefined8 *)(unaff_x23 + 0x1c);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      in_stack_00000108 = CONCAT44(uStack000000000000001c,fStack0000000000000018);
      lVar7 = *unaff_x25;
      in_stack_000000f0 = in_stack_00000030;
      in_stack_00000100 = in_stack_00000090;
      *(undefined8 *)(unaff_x23 + 0x94) = *(undefined8 *)(unaff_x23 + 0x24);
      *(undefined8 *)(unaff_x23 + 0x8c) = *(undefined8 *)(unaff_x23 + 0x1c);
      param_1 = *(long *)(param_2 + 0x10);
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      in_stack_000000f8 = in_stack_00000088;
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      in_x9 = (long)(int)*(uint *)(param_2 + 0x18);
      if (*(uint *)(param_2 + 0x18) < *(uint *)(param_1 + 0x18)) break;
      uStack0000000000000054 = *(undefined8 *)(unaff_x23 + 0x94);
      fStack0000000000000048 = fStack0000000000000018;
      fStack0000000000000040 = (float)in_stack_00000090;
      fStack0000000000000044 = (float)((ulong)in_stack_00000090 >> 0x20);
      uStack000000000000004c = (undefined4)*(undefined8 *)(unaff_x23 + 0x8c);
      uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(unaff_x23 + 0x8c) >> 0x20);
      FUN_046e0b10(param_2,&stack0x00000030,
                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
}


