/*
FUNCTION_NAME: OVRPlugin$$UpdateNodePhysicsPoses
ENTRY_POINT: 073dacb4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateNodePhysicsPoses(void)

{
  uint uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  long *plVar14;
  long unaff_x22;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  float in_stack_00000088;
  float in_stack_00000090;
  float in_stack_00000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined8 uStack00000000000000a4;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  float in_stack_000000c8;
  float fStack00000000000000cc;
  undefined4 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 in_stack_000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 in_stack_000000e8;
  undefined4 uStack00000000000000ec;
  undefined8 in_stack_000000f0;
  float in_stack_000000f8;
  float fStack00000000000000fc;
  float in_stack_00000100;
  float fStack0000000000000104;
  float in_stack_00000108;
  undefined4 uStack0000000000000110;
  undefined8 uStack0000000000000114;
  
  FUN_0516acb4();
  if (unaff_x19 != 0) {
    plVar14 = (long *)(unaff_x19 + 0x20);
    *plVar14 = unaff_x22;
    thunk_FUN_03d233cc(plVar14);
    puVar5 = PTR_DAT_08eb5bf8;
    puVar4 = PTR_DAT_08eb5be8;
    puVar3 = PTR_DAT_08eb5be0;
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      FUN_0516c244(&stack0x00000030,*(long *)(unaff_x20 + 0x20),*(undefined8 *)PTR_DAT_08eb5c00);
      fVar2 = DAT_018afd5c;
      in_stack_000000b8 = CONCAT44(fStack000000000000003c,uStack0000000000000038);
      in_stack_000000c0 = CONCAT44(fStack0000000000000044,fStack0000000000000040);
      in_stack_000000b0 = in_stack_00000030;
      in_stack_000000c8 = fStack0000000000000048;
      fStack00000000000000cc = fStack000000000000004c;
      in_stack_000000d8 = uStack0000000000000058;
      uStack00000000000000dc = uStack000000000000005c;
      in_stack_000000d0 = uStack0000000000000050;
      in_stack_000000e8 = (undefined4)in_stack_00000068;
      uStack00000000000000ec = (undefined4)((ulong)in_stack_00000068 >> 0x20);
      in_stack_000000e0 = (undefined4)in_stack_00000060;
      uStack00000000000000e4 = (undefined4)((ulong)in_stack_00000060 >> 0x20);
      while( true ) {
                    /* try { // try from 073dad30 to 074dad3f has its CatchHandler @ 073dad44 */
        uVar10 = FUN_06c0cab4(&stack0x000000b0,*(undefined8 *)puVar4);
        if ((uVar10 & 1) == 0) {
          FUN_06c0cab0(&stack0x000000b0,*(undefined8 *)puVar3);
          return;
        }
        uStack00000000000000a4 = CONCAT44(in_stack_000000e8,uStack00000000000000e4);
                    /* try { // try from 073dad40 to 074dad47 has its CatchHandler @ 073dab80 */
                    /* catch() { ... } // from try @ 073dac78 with catch @ 073dad44
                       catch() { ... } // from try @ 073dad30 with catch @ 073dad44 */
                    /* try { // try from 073dad48 to 074dad4b has its CatchHandler @ 073dad54 */
        uStack00000000000000a0 = in_stack_000000e0;
        in_stack_00000088 = in_stack_000000c8;
                    /* try { // try from 073dad4c to 074dad57 has its CatchHandler @ 073dab80 */
        in_stack_00000080 = in_stack_000000c0;
        in_stack_00000098 = (float)in_stack_000000d8;
        uStack000000000000009c = uStack00000000000000dc;
        in_stack_00000090 = (float)in_stack_000000d0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 073dad48 with catch @ 073dad54
                        */
        in_stack_00000108 = (float)in_stack_000000d8;
        in_stack_00000100 = (float)in_stack_000000d0;
        in_stack_000000f8 = in_stack_000000c8;
        in_stack_000000f0 = in_stack_000000c0;
        fVar18 = fStack00000000000000cc;
        FUN_0737f84c(&stack0x00000030,*(undefined8 *)(unaff_x20 + 0x28),&stack0x000000f0,0);
        fVar9 = fStack0000000000000048;
        fVar8 = fStack0000000000000044;
        fVar7 = fStack0000000000000040;
        fVar6 = fStack000000000000003c;
        in_stack_00000070 = in_stack_00000030;
        in_stack_00000078 = uStack0000000000000038;
        fVar17 = 0.0;
        fVar16 = fVar2;
        fVar15 = (float)FUN_085d262c(fVar2,0);
        in_stack_000000f0 = in_stack_00000070;
        fStack00000000000000fc = (fVar7 * fVar17 + fVar9 * fVar15 + fVar6 * fVar18) - fVar8 * fVar16
        ;
        in_stack_00000100 = (fVar8 * fVar15 + fVar9 * fVar16 + fVar7 * fVar18) - fVar6 * fVar17;
        fStack0000000000000104 = (fVar6 * fVar16 + fVar9 * fVar17 + fVar8 * fVar18) - fVar7 * fVar15
        ;
        in_stack_00000108 = ((fVar9 * fVar18 - fVar6 * fVar15) - fVar7 * fVar16) - fVar8 * fVar17;
        in_stack_000000f8 = (float)in_stack_00000078;
        FUN_0737f644(&stack0x00000030,*(undefined8 *)(unaff_x20 + 0x28),&stack0x000000f0,0);
        in_stack_00000080 = in_stack_00000030;
        in_stack_00000098 = fStack0000000000000048;
        in_stack_00000090 = fStack0000000000000040;
        in_stack_00000088 = (float)uStack0000000000000038;
        lVar11 = *plVar14;
        if (lVar11 == 0) break;
        in_stack_000000f0 = in_stack_00000030;
        uStack0000000000000114 = uStack00000000000000a4;
        lVar13 = *(long *)puVar5;
        in_stack_000000f8 = (float)uStack0000000000000038;
        in_stack_00000108 = fStack0000000000000048;
        in_stack_00000100 = fStack0000000000000040;
        uStack0000000000000110 = uStack00000000000000a0;
        lVar12 = *(long *)(lVar11 + 0x10);
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          lVar12 = lVar12 + (long)(int)uVar1 * 0x2c;
          *(undefined8 *)(lVar12 + 0x44) = uStack00000000000000a4;
          *(ulong *)(lVar12 + 0x3c) = CONCAT44(uStack00000000000000a0,uStack000000000000009c);
          *(ulong *)(lVar12 + 0x28) = CONCAT44(fStack000000000000003c,uStack0000000000000038);
          *(undefined8 *)(lVar12 + 0x20) = in_stack_00000030;
          *(ulong *)(lVar12 + 0x38) = CONCAT44(uStack000000000000009c,fStack0000000000000048);
          *(ulong *)(lVar12 + 0x30) = CONCAT44(fStack0000000000000044,fStack0000000000000040);
        }
        else {
          uStack0000000000000054 = (undefined4)uStack00000000000000a4;
          uStack0000000000000058 = SUB84(uStack00000000000000a4,4);
          uStack0000000000000050 = uStack00000000000000a0;
          FUN_0516b5c4(lVar11,&stack0x00000030,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


