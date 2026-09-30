/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 03810304
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Qpl_Annotation>
               (code *param_1,ulong param_2,ulong param_3,float param_4,long *param_5)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined8 in_x4;
  long lVar8;
  int *piVar9;
  uint unaff_w19;
  long unaff_x20;
  ulong uVar10;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  int unaff_w25;
  long *unaff_x27;
  int unaff_w29;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  int in_stack_00000028;
  ulong in_stack_00000030;
  undefined8 in_stack_00000038;
  
  do {
    lVar5 = (*param_1)(param_2,param_3,param_5,unaff_w19,in_stack_00000020,in_stack_00000018,in_x4);
    if (lVar5 == 0) {
LAB_038104c8:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
                    /* try { // try from 03810314 to 0391033f has its CatchHandler @ 03810424 */
    uVar10 = 0;
    fVar13 = param_4;
    do {
      if (*(uint *)(lVar5 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      fVar11 = 0.0;
      if (1 < unaff_w19) {
        fVar11 = (float)(int)uVar10 / unaff_s13;
      }
                    /* try { // try from 03810350 to 03910357 has its CatchHandler @ 03810404 */
      fVar12 = unaff_s15;
      if (fVar11 <= unaff_s15) {
        fVar12 = fVar11;
      }
      fVar2 = unaff_s14;
      if (0.0 <= fVar11) {
        fVar2 = fVar12;
      }
      fVar12 = *(float *)(unaff_x20 + 0x2c) * (float)unaff_w29 +
               *(float *)(unaff_x20 + 0x2c) * fVar2 + unaff_s14;
                    /* try { // try from 03810370 to 0391037b has its CatchHandler @ 038103ec */
      fVar11 = unaff_s12;
      if (fVar12 <= unaff_s12) {
        fVar11 = fVar12;
      }
      fVar2 = unaff_s14;
                    /* try { // try from 0381037c to 03910393 has its CatchHandler @ 038103c4 */
      if (0.0 <= fVar12) {
        fVar2 = fVar11;
      }
      if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_038104c8;
      uVar14 = *(undefined8 *)(lVar5 + 0x20 + uVar10 * 8);
      param_4 = (float)FUN_071d0360(*(long *)(unaff_x20 + 0x20),0);
      if (unaff_x23 == 0) goto LAB_038104c8;
      uVar3 = FUN_05e310c0();
                    /* try { // try from 038103a8 to 039103ab has its CatchHandler @ 038103ac */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 038103a8 with catch @ 038103ac
                       try { // try from 038103ac to 0391045b has its CatchHandler @ 03810168 */
      FUN_071b7b68(0,uVar3,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0381037c with catch @ 038103c4
                        */
      plVar6 = (long *)FUN_05e31120();
      if (plVar6 == (long *)0x0) goto LAB_038104c8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 03810300 with catch @ 038103d8
                        */
      if (*(long *)(*plVar6 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03643084();
      }
      puVar7 = (undefined4 *)thunk_FUN_0367ff68();
      if (unaff_x22 == 0) goto LAB_038104c8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 03810370 with catch @ 038103ec
                        */
      lVar8 = *(long *)(unaff_x22 + 0x10);
      uVar3 = *puVar7;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 038101b8 with catch @ 03810400
                        */
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 03810350 with catch @ 03810404
                        */
      if (lVar8 == 0) goto LAB_038104c8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 038101ac with catch @ 03810408
                        */
      uVar1 = *(uint *)(unaff_x22 + 0x18);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 03810314 with catch @ 03810424
                        */
      param_4 = (float)uVar14 + param_4;
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (long)(int)uVar1 * (long)unaff_w25;
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar8 + 0x20) = uVar3;
        *(ulong *)(lVar8 + 0x24) = CONCAT44((float)((ulong)uVar14 >> 0x20) + fVar11,param_4);
        *(float *)(lVar8 + 0x2c) = fVar13 + unaff_s14;
        *(float *)(lVar8 + 0x30) = fVar2 + in_stack_00000038._4_4_;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0381019c with catch @ 03810448
                       catch(type#1 @ 00000000) { ... } // from try @ 038101c4 with catch @ 03810448
                        */
      }
      else {
        FUN_045f665c();
      }
      uVar10 = uVar10 + 1;
      fVar13 = param_4;
    } while (unaff_x24 != uVar10);
    unaff_w29 = unaff_w29 + 1;
    if (unaff_w29 == in_stack_00000028) {
      return;
    }
    lVar5 = *in_stack_00000010;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_079fac78) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_038102f8;
        }
        uVar10 = uVar10 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_0367cd30(in_stack_00000010,*(long *)PTR_DAT_079fac78,0);
LAB_038102f8:
    param_1 = (code *)*puVar4;
    in_x4 = puVar4[1];
    param_3 = in_stack_00000030 & 0xffffffff;
    param_5 = in_stack_00000010;
    param_2 = in_stack_00000030 >> 0x20;
  } while( true );
}


