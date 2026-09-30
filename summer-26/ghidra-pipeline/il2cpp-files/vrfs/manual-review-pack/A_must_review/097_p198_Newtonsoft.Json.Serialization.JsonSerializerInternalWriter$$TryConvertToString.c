/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$TryConvertToString
ENTRY_POINT: 01bc6fa4
PROGRAM: vrfs-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01bc7078) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__TryConvertToString(void)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  ulong in_d3;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint uStack0000000000000014;
  uint uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  fVar9 = (float)FUN_02eb00f8(&stack0x000002b0,&stack0x00000260,0);
  if ((fVar9 <= 0.0) || (**(float **)(unaff_x20 + 0xb8) <= 0.0)) {
    if (0 < *(int *)(unaff_x20 + 0x30)) {
      lVar7 = 0;
      lVar8 = 0;
      do {
        in_stack_00000050 = unaff_x19[6];
        in_stack_00000038 = unaff_x19[3];
        in_stack_00000030 = unaff_x19[2];
        in_stack_00000048 = unaff_x19[5];
        in_stack_00000040 = unaff_x19[4];
        in_stack_00000028 = unaff_x19[1];
        in_stack_00000020 = *unaff_x19;
        puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x28) + lVar7);
        unaff_x21 = unaff_x21 & 0xffffffff00000000 | (ulong)*(uint *)(puVar1 + 1);
        in_stack_000001a0 = in_stack_00000020;
        in_stack_000001a8 = in_stack_00000028;
        in_stack_000001b0 = in_stack_00000030;
        in_stack_000001b8 = in_stack_00000038;
        in_stack_000001c0 = in_stack_00000040;
        in_stack_000001c8 = in_stack_00000048;
        in_stack_000001d0 = in_stack_00000050;
        FUN_02eb040c(&stack0x00000020,*puVar1,unaff_x21,0);
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0xc;
      } while (lVar8 < *(int *)(unaff_x20 + 0x30));
    }
  }
  else if (*(int *)(unaff_x20 + 0x30) != 0) {
                    /* try { // try from 01bc6fec to 01cc6ff3 has its CatchHandler @ 01bc704c */
                    /* try { // try from 01bc7004 to 01cc7007 has its CatchHandler @ 01bc7048 */
                    /* try { // try from 01bc7008 to 01cc703b has its CatchHandler @ 01bc6df8 */
    FUN_0267e8b4(&stack0x00000220,*(undefined8 *)(unaff_x20 + 0x38),
                 *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x98),
                 *(undefined8 *)(unaff_x20 + 0xa0),0);
    uVar13 = unaff_x19[2];
    in_stack_000001e8 = unaff_x19[1];
    uVar4 = *unaff_x19;
    in_stack_000001e0 = uVar4;
                    /* try { // try from 01bc703c to 01cc703f has its CatchHandler @ 01bc7044 */
    fVar10 = (float)FUN_02eb7db0();
    fVar15 = (float)uVar4;
                    /* try { // try from 01bc7040 to 01cc7063 has its CatchHandler @ 01bc6df8 */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 01bc703c with catch @ 01bc7044
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 01bc7004 with catch @ 01bc7048
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 01bc6fec with catch @ 01bc704c
                        */
    FUN_04f13694(0);
                    /* try { // try from 01bc7064 to 01cc7067 has its CatchHandler @ 01bc7088 */
    if (0 < *(int *)(unaff_x20 + 0x30)) {
                    /* try { // try from 01bc7068 to 01cc708f has its CatchHandler @ 01bc6df8 */
      lVar6 = 0;
                    /* catch() { ... } // from try @ 01bc7064 with catch @ 01bc7088 */
      lVar7 = 0;
      lVar8 = 0;
      uStack0000000000000014 = (uint)in_d3;
      uStack000000000000001c = (uint)uVar13;
                    /* try { // try from 01bc7090 to 01cc7097 has its CatchHandler @ 01bc70ac */
      if (fVar9 < 0.0) {
        fVar9 = 0.0;
      }
      do {
                    /* try { // try from 01bc70a4 to 01cc70ab has its CatchHandler @ 01bc70ac */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01bc7090 with catch @ 01bc70ac
                       catch(type#2 @ 00000000) { ... } // from try @ 01bc70a4 with catch @ 01bc70ac
                        */
        puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x28) + lVar7);
        uVar3 = *(undefined4 *)(puVar1 + 1);
        uVar4 = *puVar1;
        in_stack_000001d0 = unaff_x19[6];
        in_stack_000001b8 = unaff_x19[3];
        in_stack_000001b0 = unaff_x19[2];
        in_stack_000001c8 = unaff_x19[5];
        in_stack_000001c0 = unaff_x19[4];
        in_stack_000001a8 = unaff_x19[1];
        in_stack_000001a0 = *unaff_x19;
        in_stack_00000190 = unaff_x19[6];
        in_stack_00000178 = unaff_x19[3];
        uVar14 = unaff_x19[2];
        in_stack_00000188 = unaff_x19[5];
        in_stack_00000180 = unaff_x19[4];
        in_stack_00000168 = unaff_x19[1];
        uVar17 = *unaff_x19;
        in_stack_00000160 = uVar17;
        in_stack_00000170 = uVar14;
        fVar11 = (float)FUN_02eb01dc(&stack0x000002a0,&stack0x00000160,0);
        pfVar2 = (float *)(*(long *)(unaff_x20 + 0x88) + lVar7);
        in_stack_00000128 = in_stack_000001a8;
        in_stack_00000120 = in_stack_000001a0;
        in_stack_00000138 = in_stack_000001b8;
        in_stack_00000130 = in_stack_000001b0;
        in_stack_00000148 = in_stack_000001c8;
        in_stack_00000140 = in_stack_000001c0;
        in_stack_00000150 = in_stack_000001d0;
        FUN_02eb0214(fVar11 + fVar9 * (*pfVar2 - fVar11),
                     (float)uVar14 + fVar9 * (pfVar2[1] - (float)uVar14),
                     (float)uVar17 + fVar9 * (pfVar2[2] - (float)uVar17),&stack0x000002a0,
                     &stack0x00000120,0);
        puVar5 = *(undefined4 **)(unaff_x20 + 0x78);
        fVar12 = (float)puVar5[1];
        fVar16 = (float)puVar5[2];
        pfVar2 = (float *)(*(long *)(unaff_x20 + 0x68) + lVar7);
        fVar18 = *pfVar2;
        fVar11 = (float)FUN_04f13c44(*puVar5,fVar12,fVar16,fVar18,pfVar2[1],pfVar2[2],0);
        fVar19 = *(float *)(unaff_x20 + 0x18);
        fVar22 = *(float *)(unaff_x20 + 0x1c);
        fVar20 = *(float *)(unaff_x20 + 0x20);
        fVar21 = *(float *)(unaff_x20 + 0x24);
        pfVar2 = (float *)(*(long *)(unaff_x20 + 0x48) + lVar6);
        fVar25 = *pfVar2;
        fVar27 = pfVar2[1];
        fVar26 = pfVar2[2];
        fVar28 = pfVar2[3];
        fVar23 = (float)in_d3;
        fVar24 = (float)uVar13;
        FUN_04f1372c((fVar24 * fVar26 + fVar23 * fVar25 + fVar10 * fVar28) - fVar15 * fVar27,
                     (fVar15 * fVar25 + fVar23 * fVar27 + fVar24 * fVar28) - fVar10 * fVar26,
                     (fVar10 * fVar27 + fVar23 * fVar26 + fVar15 * fVar28) - fVar24 * fVar25,
                     ((fVar23 * fVar28 - fVar10 * fVar25) - fVar24 * fVar27) - fVar15 * fVar26,
                     (fVar12 * fVar20 + fVar18 * fVar19 + fVar11 * fVar21) - fVar16 * fVar22,
                     (fVar16 * fVar19 + fVar18 * fVar22 + fVar12 * fVar21) - fVar11 * fVar20,
                     (fVar11 * fVar22 + fVar18 * fVar20 + fVar16 * fVar21) - fVar12 * fVar19,
                     ((fVar18 * fVar21 - fVar11 * fVar19) - fVar12 * fVar22) - fVar16 * fVar20,0);
        in_stack_00000110 = unaff_x19[6];
        in_stack_000000f8 = unaff_x19[3];
        in_stack_000000f0 = unaff_x19[2];
        in_stack_00000108 = unaff_x19[5];
        in_stack_00000100 = unaff_x19[4];
        in_stack_000000e8 = unaff_x19[1];
        in_stack_000000e0 = *unaff_x19;
        in_stack_000000d0 = unaff_x19[6];
        in_stack_000000b8 = unaff_x19[3];
        in_stack_000000b0 = unaff_x19[2];
        in_stack_000000c8 = unaff_x19[5];
        in_stack_000000c0 = unaff_x19[4];
        in_stack_000000a8 = unaff_x19[1];
        in_stack_000000a0 = *unaff_x19;
        FUN_02eb039c(&stack0x000002a0,&stack0x000000a0,0);
        in_d3 = (ulong)uStack0000000000000014;
        uVar13 = (ulong)uStack000000000000001c;
        FUN_04f1372c(0);
        in_stack_00000068 = in_stack_000000e8;
        in_stack_00000060 = in_stack_000000e0;
        in_stack_00000078 = in_stack_000000f8;
        in_stack_00000070 = in_stack_000000f0;
        in_stack_00000088 = in_stack_00000108;
        in_stack_00000080 = in_stack_00000100;
        in_stack_00000090 = in_stack_00000110;
        FUN_02eb03d4(&stack0x000002a0,&stack0x00000060,0);
        lVar8 = lVar8 + 1;
        puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x28) + lVar7);
        *(undefined4 *)(puVar1 + 1) = uVar3;
        *puVar1 = uVar4;
        lVar7 = lVar7 + 0xc;
        lVar6 = lVar6 + 0x10;
      } while (lVar8 < *(int *)(unaff_x20 + 0x30));
    }
  }
  return;
}


