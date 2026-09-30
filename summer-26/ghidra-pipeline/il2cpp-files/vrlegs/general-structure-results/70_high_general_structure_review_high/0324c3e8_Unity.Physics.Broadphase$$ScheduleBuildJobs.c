/*
FUNCTION_NAME: Unity.Physics.Broadphase$$ScheduleBuildJobs
ENTRY_POINT: 0324c3e8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;ray_or_cast_sink_hits_2;strong_file_logging_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0324c654) */

void Unity_Physics_Broadphase__ScheduleBuildJobs(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 extraout_w1;
  uint uVar10;
  float *pfVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  long lVar14;
  uint uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined1 in_stack_00000058;
  long in_stack_00000068;
  
  FUN_01ab69ac(System_Xml_XmlTextWriter_Namespace___TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x7e7) = 1;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  lVar14 = *(long *)(unaff_x19 + 0x480);
  if (lVar14 != 0) {
    uVar15 = *(uint *)(unaff_x19 + 0xa8);
    if (*(int *)(lVar14 + 0x20) == 0) {
      FUN_032593a4(lVar14,1,0);
      lVar14 = *(long *)(unaff_x19 + 0x480);
      if (lVar14 == 0) goto LAB_0324c788;
    }
    uVar10 = *(int *)(lVar14 + 0x20) - 1;
    if (2 < uVar10) {
      FUN_018748a8(lVar14);
      uVar1 = *(undefined4 *)(lVar14 + 0x20);
                    /* try { // try from 0324c7a8 to 0334c7ab has its CatchHandler @ 0324c804 */
      in_stack_00000008 = thunk_FUN_01a6ca08(FMOD_Studio_Bank___TypeInfo);
                    /* try { // try from 0324c7ac to 0334c7b7 has its CatchHandler @ 0324c810 */
      in_stack_00000010 = 0xffffffffffffffff;
      uStack0000000000000018 = uVar1;
      uVar8 = FUN_027a62b8(&stack0x00000008,0);
                    /* try { // try from 0324c7c8 to 0334c7df has its CatchHandler @ 0324c814 */
      uVar9 = thunk_FUN_01a6ca08(System_Xml_XmlTextWriter_State___TypeInfo);
      uVar8 = FUN_025b1328(uVar9,uVar8,0);
      thunk_FUN_01a6ca08(PTR_DAT_03cbee40);
      uVar9 = thunk_FUN_01a89e68();
                    /* try { // try from 0324c800 to 0334c803 has its CatchHandler @ 0324c81c */
      FUN_02765308(uVar9,uVar8,0);
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0324c7a8 with catch @ 0324c804
                       try { // try from 0324c804 to 0334c837 has its CatchHandler @ 0324c6f0 */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0324c77c with catch @ 0324c808
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0324c764 with catch @ 0324c80c
                        */
      uVar8 = thunk_FUN_01a6ca08(System_Xml_XmlTextWriter_TagInfo___TypeInfo);
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0324c7ac with catch @ 0324c810
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0324c7c8 with catch @ 0324c814
                        */
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0324c790 with catch @ 0324c818
                        */
      FUN_01ab6b14(uVar9,uVar8);
    }
    uVar15 = uVar15 & 4 | *(uint *)(&DAT_00e6cbd0 + (long)(int)uVar10 * 4);
    if ((*(uint *)(unaff_x19 + 0xa8) != uVar15) &&
       (*(uint *)(unaff_x19 + 0xa8) = uVar15, 0 < *(int *)(unaff_x19 + 0x70))) {
      FUN_0324c910();
    }
    FUN_0324ce58();
    if (*(long *)(unaff_x19 + 0x480) != 0) {
      auVar17 = FUN_03259670(*(long *)(unaff_x19 + 0x480),0);
      if ((0 < auVar17._12_4_) && (0 < *(int *)(unaff_x19 + 0x70))) {
        uVar15 = 0;
        do {
          uVar8 = auVar17._8_8_;
          uVar9 = auVar17._0_8_;
          lVar14 = *(long *)(unaff_x19 + 0x78);
          if (lVar14 == 0) goto LAB_0324c788;
          if (*(uint *)(lVar14 + 0x18) <= uVar15) {
LAB_0324c784:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44(uVar9,uVar8);
          }
          lVar14 = *(long *)(lVar14 + (long)(int)uVar15 * 8 + 0x20);
          if (lVar14 == 0) goto LAB_0324c788;
          if (0 < *(int *)(unaff_x19 + 0x88)) {
            lVar12 = *(long *)(unaff_x19 + 0x90);
            if (lVar12 == 0) goto LAB_0324c788;
            uVar8 = *(undefined8 *)(lVar14 + 0x58);
            auVar17._8_8_ = uVar8;
            auVar17._0_8_ = uVar9;
            uVar10 = 0;
            piVar13 = (int *)(lVar12 + 0x58);
            do {
              if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_0324c784;
              if (*piVar13 == *(int *)(lVar14 + 0xe0)) {
                auVar17 = FUN_03250aa8();
                if ((auVar17._0_8_ & 1) == 0) {
                  auVar17 = FUN_0324f98c();
                  uVar15 = uVar15 - 1;
                }
                break;
              }
              uVar10 = uVar10 + 1;
              piVar13 = piVar13 + 0x10;
            } while ((int)uVar10 < *(int *)(unaff_x19 + 0x88));
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < *(int *)(unaff_x19 + 0x70));
      }
      lVar14 = *(long *)(unaff_x19 + 0x480);
      if (lVar14 != 0) {
        if ((*(long *)(lVar14 + 0x60) != 0) &&
           (uVar7 = FUN_03259a74(lVar14,*(undefined8 *)System_Xml_XmlTextWriter_Namespace___TypeInfo
                                 ,0), (uVar7 & 1) != 0)) {
          in_stack_00000050 = FUN_03273724(1,0);
          in_stack_00000058 = extraout_w1;
          lVar14 = FUN_01f8ad6c();
          if (lVar14 < 0) {
            if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0367ae18(*(undefined8 *)System_Xml_XmlTextReaderImpl_ParsingState___TypeInfo,0);
          }
        }
        lVar14 = *(long *)(unaff_x19 + 0x480);
        if (lVar14 != 0) {
          lVar12 = *(long *)(*(long *)
                              System_Linq_Expressions_Interpreter_EnterFaultInstruction___TypeInfo +
                            0xb8);
          *(undefined4 *)(lVar12 + 8) = *(undefined4 *)(lVar14 + 0x48);
          *(undefined4 *)(lVar12 + 0xc) = *(undefined4 *)(lVar14 + 0x58);
          puVar5 = PTR_DAT_03cd8450;
          puVar2 = PTR_DAT_03cd81e8;
          *(float *)(lVar12 + 0x10) = *(float *)(lVar14 + 0x54) * *(float *)(lVar14 + 0x54);
          puVar3 = PTR_DAT_03cd8438;
          pfVar11 = *(float **)(*(long *)puVar2 + 0xb8);
          fVar16 = *(float *)(lVar14 + 0x40);
          if (*(float *)(lVar14 + 0x40) < DAT_00d3879c) {
            fVar16 = DAT_00d3879c;
          }
          *pfVar11 = fVar16;
          puVar6 = System_Xml_XmlTextReaderImpl_NodeData___TypeInfo;
          puVar4 = PTR_DAT_03cd8440;
          puVar2 = PTR_DAT_03cd8430;
          pfVar11[1] = *(float *)(lVar14 + 0x44);
          _in_stack_00000020 = FUN_0324c014();
          FUN_02068dc4(&stack0x00000008,&stack0x00000020,*(undefined8 *)puVar5);
          in_stack_00000040 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
          in_stack_00000038 = in_stack_00000010;
          in_stack_00000030 = in_stack_00000008;
          while( true ) {
            uVar7 = FUN_021b948c(&stack0x00000030,*(undefined8 *)puVar3);
            if ((uVar7 & 1) == 0) {
              FUN_021b9488(&stack0x00000030,*(undefined8 *)puVar2);
              auVar17 = FUN_0324c014();
              _in_stack_00000020 = auVar17;
              FUN_02068dc4(&stack0x00000008,&stack0x00000020,*(undefined8 *)puVar5);
              in_stack_00000040 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
              in_stack_00000038 = in_stack_00000010;
              in_stack_00000030 = in_stack_00000008;
              while( true ) {
                uVar7 = FUN_021b948c(&stack0x00000030,*(undefined8 *)puVar3);
                if ((uVar7 & 1) == 0) {
                  FUN_021b9488(&stack0x00000030,*(undefined8 *)puVar2);
                  FUN_03290d34(unaff_x19 + 0x360,*(undefined8 *)puVar6,0,0);
                  return;
                }
                FUN_021b94b8(&stack0x00000030,&stack0x00000008,*(undefined8 *)puVar4);
                if (in_stack_00000008 == 0) break;
                FUN_031fe68c(in_stack_00000008,0);
              }
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            FUN_021b94b8(&stack0x00000030,&stack0x00000068,*(undefined8 *)puVar4);
            if (in_stack_00000068 == 0) break;
            FUN_03204ec0(in_stack_00000068,0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
    }
  }
LAB_0324c788:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


