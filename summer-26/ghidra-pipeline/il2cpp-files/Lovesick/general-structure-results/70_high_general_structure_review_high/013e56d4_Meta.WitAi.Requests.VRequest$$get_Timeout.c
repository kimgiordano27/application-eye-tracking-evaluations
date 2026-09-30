/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest$$get_Timeout
ENTRY_POINT: 013e56d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Meta_WitAi_Requests_VRequest__get_Timeout
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  uint uVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  undefined8 uVar13;
  long unaff_x24;
  long lVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  ulong uVar18;
  undefined4 unaff_s11;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  ulong in_stack_00000038;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  undefined4 uStack0000000000000084;
  long in_stack_00000088;
  
                    /* catch() { ... } // from try @ 013e5654 with catch @ 013e56d8 */
  thunk_FUN_00d48444(Method_System_ThrowHelper_ThrowInvalidTypeWithPointersNotSupported__);
  thunk_FUN_00d48444(
                    Method_Newtonsoft_Json_Serialization_JsonFormatterConverter_GetTokenValue<ulong>__
                    );
  *(undefined1 *)(unaff_x24 + 0x847) = 1;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  if (((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x18) != 0)) &&
     (lVar7 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x10), lVar7 != 0)) {
    lVar14 = *(long *)(unaff_x19 + 0x28);
    in_stack_00000078 = unaff_s11;
    uStack000000000000007c = unaff_s10;
    in_stack_00000080 = unaff_s9;
    uStack0000000000000084 = unaff_s8;
    FUN_0132138c(lVar7,0,&stack0x00000088,
                 *(undefined8 *)
                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
                );
    if (((in_stack_00000088 != 0) && (unaff_x23 != 0)) && (FUN_0144a43c(), lVar14 != 0)) {
      FUN_026845a0(lVar14,0);
      fVar15 = (float)FUN_026883a0(&stack0x00000078,0);
      fVar16 = (float)FUN_026884d4(&stack0x00000078,0);
      FUN_026883a8(1.0 - (fVar15 + fVar16),&stack0x00000078,0);
      fVar15 = (float)FUN_02688390(&stack0x00000078,0);
      plVar8 = *(long **)(unaff_x19 + 0x20);
      if (plVar8 != (long *)0x0) {
        iVar6 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
        FUN_02688398(fVar15 * (float)iVar6,&stack0x00000078,0);
        fVar15 = (float)FUN_026883a0(&stack0x00000078,0);
        plVar8 = *(long **)(unaff_x19 + 0x20);
        if (plVar8 != (long *)0x0) {
          iVar6 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
          FUN_026883a8(fVar15 * (float)iVar6,&stack0x00000078,0);
          fVar15 = (float)FUN_026884c4(&stack0x00000078,0);
          plVar8 = *(long **)(unaff_x19 + 0x20);
          if (plVar8 != (long *)0x0) {
            iVar6 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
            FUN_026884cc(fVar15 * (float)iVar6,&stack0x00000078,0);
            fVar15 = (float)FUN_026884d4(&stack0x00000078,0);
            plVar8 = *(long **)(unaff_x19 + 0x20);
            if (plVar8 != (long *)0x0) {
              iVar6 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
              FUN_026884dc(fVar15 * (float)iVar6,&stack0x00000078,0);
              in_stack_00000068 = CONCAT44(uStack0000000000000084,in_stack_00000080);
              in_stack_00000060 = CONCAT44(uStack000000000000007c,in_stack_00000078);
              fVar15 = (float)FUN_02688390(&stack0x00000060,0);
              FUN_02688398(fVar15 - (float)*(int *)(unaff_x19 + 0x30),&stack0x00000060,0);
              fVar15 = (float)FUN_026883a0(&stack0x00000060,0);
              FUN_026883a8(fVar15 - (float)*(int *)(unaff_x19 + 0x30),&stack0x00000060,0);
              fVar15 = (float)FUN_026884c4(&stack0x00000060,0);
              FUN_026884cc(fVar15 + (float)(*(int *)(unaff_x19 + 0x30) << 1),&stack0x00000060,0);
              fVar15 = (float)FUN_026884d4(&stack0x00000060,0);
              FUN_026884dc(fVar15 + (float)(*(int *)(unaff_x19 + 0x30) << 1),&stack0x00000060,0);
              in_stack_00000050 = 0;
              in_stack_00000058 = 0;
              lVar7 = *(long *)(unaff_x21 + 0x10);
              if (lVar7 != 0) {
                if (*(uint *)(lVar7 + 0x18) <= *(uint *)(unaff_x19 + 0x48)) goto LAB_013e6638;
                lVar7 = *(long *)(lVar7 + (long)(int)*(uint *)(unaff_x19 + 0x48) * 8 + 0x20);
                if (lVar7 != 0) {
                  in_stack_00000018 = *(undefined8 *)(lVar7 + 0x28);
                  uVar11 = *(undefined8 *)(lVar7 + 0x20);
                  in_stack_00000028 = *(undefined8 *)(lVar7 + 0x38);
                  in_stack_00000020 = *(undefined8 *)(lVar7 + 0x30);
                  in_stack_00000010 = uVar11;
                  uVar17 = FUN_014315a4(&stack0x00000010,0);
                  in_stack_00000040 = CONCAT44((int)uVar11,uVar17);
                  in_stack_00000048 = CONCAT44(param_4,param_3);
                  if ((unaff_x20 != 0) && (plVar8 = (long *)FUN_01443ffc(), plVar8 != (long *)0x0))
                  {
                    uVar17 = FUN_0266fff4(plVar8,0);
                    fVar15 = (float)FUN_026884c4(&stack0x00000040,0);
                    if ((fVar15 == 1.0) &&
                       (((fVar15 = (float)FUN_026884d4(&stack0x00000040,0), fVar15 == 1.0 &&
                         (fVar15 = (float)FUN_02688390(&stack0x00000040,0), fVar15 == 0.0)) &&
                        (fVar15 = (float)FUN_026883a0(&stack0x00000040,0), fVar15 == 0.0)))) {
                      uVar11 = 1;
                    }
                    else {
                      uVar11 = 0;
                    }
                    FUN_02670030(plVar8,uVar11,0);
                    if (*(int *)(unaff_x19 + 0x10) < 5) {
LAB_013e5c30:
                      puVar1 = 
                      Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Item__
                      ;
                      in_stack_00000030 = 0;
                      in_stack_00000038 = 0;
                      FUN_02688390(&stack0x00000040,0);
                      FUN_02688398(&stack0x00000030,0);
                      fVar15 = (float)FUN_026883a0(&stack0x00000040,0);
                      iVar6 = (**(code **)(*plVar8 + 0x1a8))
                                        (plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
                      FUN_026883a8((fVar15 + 1.0) - 1.0 / (float)iVar6,&stack0x00000030,0);
                      FUN_026884c4(&stack0x00000040,0);
                      FUN_026884cc(&stack0x00000030,0);
                      iVar6 = (**(code **)(*plVar8 + 0x1a8))
                                        (plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
                      FUN_026884dc(1.0 / (float)iVar6,&stack0x00000030,0);
                      FUN_02688390(&stack0x00000078,0);
                      FUN_02688398(&stack0x00000050,0);
                      FUN_026883a0(&stack0x00000060,0);
                      FUN_026883a8(&stack0x00000050,0);
                      FUN_026884c4(&stack0x00000078,0);
                      FUN_026884cc(&stack0x00000050,0);
                      FUN_026884dc((float)*(int *)(unaff_x19 + 0x30),&stack0x00000050,0);
                      uVar11 = FUN_02675830(0);
                      FUN_02675858(*(undefined8 *)(unaff_x19 + 0x20),0);
                      uVar18 = in_stack_00000050 & 0xffffffff;
                      uVar4 = in_stack_00000050._4_4_;
                      uVar19 = in_stack_00000058 & 0xffffffff;
                      uVar5 = in_stack_00000058._4_4_;
                      uVar21 = in_stack_00000030 & 0xffffffff;
                      uVar2 = in_stack_00000030._4_4_;
                      uVar20 = in_stack_00000038 & 0xffffffff;
                      uVar3 = in_stack_00000038._4_4_;
                      uVar13 = *(undefined8 *)(unaff_x19 + 0x18);
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      FUN_02678584(uVar18,uVar4,uVar19,uVar5,uVar21,uVar2,uVar20,uVar3,plVar8,0,0,0,
                                   0,uVar13,0);
                      FUN_02688390(&stack0x00000040,0);
                      FUN_02688398(&stack0x00000030,0);
                      FUN_026883a0(&stack0x00000040,0);
                      FUN_026883a8(&stack0x00000030,0);
                      FUN_026884c4(&stack0x00000040,0);
                      FUN_026884cc(&stack0x00000030,0);
                      iVar6 = (**(code **)(*plVar8 + 0x1a8))
                                        (plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
                      FUN_026884dc(1.0 / (float)iVar6,&stack0x00000030,0);
                      FUN_02688390(&stack0x00000078,0);
                      FUN_02688398(&stack0x00000050,0);
                      fVar15 = (float)FUN_026883a0(&stack0x00000078,0);
                      fVar16 = (float)FUN_026884d4(&stack0x00000078,0);
                      FUN_026883a8(fVar15 + fVar16,&stack0x00000050,0);
                      FUN_026884c4(&stack0x00000078,0);
                      FUN_026884cc(&stack0x00000050,0);
                      FUN_026884dc((float)*(int *)(unaff_x19 + 0x30),&stack0x00000050,0);
                      FUN_02678584(in_stack_00000050 & 0xffffffff,in_stack_00000050._4_4_,
                                   in_stack_00000058 & 0xffffffff,in_stack_00000058._4_4_,
                                   in_stack_00000030 & 0xffffffff,in_stack_00000030._4_4_,
                                   in_stack_00000038 & 0xffffffff,in_stack_00000038._4_4_,plVar8,0,0
                                   ,0,0,*(undefined8 *)(unaff_x19 + 0x18),0);
                      FUN_02688390(&stack0x00000040,0);
                      FUN_02688398(&stack0x00000030,0);
                      FUN_026883a0(&stack0x00000040,0);
                      FUN_026883a8(&stack0x00000030,0);
                      iVar6 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
                      FUN_026884cc(1.0 / (float)iVar6,&stack0x00000030,0);
                      FUN_026884d4(&stack0x00000040,0);
                      FUN_026884dc(&stack0x00000030,0);
                      FUN_02688390(&stack0x00000060,0);
                      FUN_02688398(&stack0x00000050,0);
                      FUN_026883a0(&stack0x00000078,0);
                      FUN_026883a8(&stack0x00000050,0);
                      FUN_026884cc((float)*(int *)(unaff_x19 + 0x30),&stack0x00000050,0);
                      FUN_026884d4(&stack0x00000078,0);
                      FUN_026884dc(&stack0x00000050,0);
                      FUN_02678584(in_stack_00000050 & 0xffffffff,in_stack_00000050._4_4_,
                                   in_stack_00000058 & 0xffffffff,in_stack_00000058._4_4_,
                                   in_stack_00000030 & 0xffffffff,in_stack_00000030._4_4_,
                                   in_stack_00000038 & 0xffffffff,in_stack_00000038._4_4_,plVar8,0,0
                                   ,0,0,*(undefined8 *)(unaff_x19 + 0x18),0);
                      fVar15 = (float)FUN_02688390(&stack0x00000040,0);
                      iVar6 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
                      FUN_02688398((fVar15 + 1.0) - 1.0 / (float)iVar6,&stack0x00000030,0);
                      FUN_026883a0(&stack0x00000040,0);
                      FUN_026883a8(&stack0x00000030,0);
                      iVar6 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
                      FUN_026884cc(1.0 / (float)iVar6,&stack0x00000030,0);
                      FUN_026884d4(&stack0x00000040,0);
                      FUN_026884dc(&stack0x00000030,0);
                      fVar15 = (float)FUN_02688390(&stack0x00000078,0);
                      fVar16 = (float)FUN_026884c4(&stack0x00000078,0);
                      FUN_02688398(fVar15 + fVar16,&stack0x00000050,0);
                      FUN_026883a0(&stack0x00000078,0);
                      FUN_026883a8(&stack0x00000050,0);
                      FUN_026884cc((float)*(int *)(unaff_x19 + 0x30),&stack0x00000050,0);
                      FUN_026884d4(&stack0x00000078,0);
                      FUN_026884dc(&stack0x00000050,0);
                      FUN_02678584(in_stack_00000050 & 0xffffffff,in_stack_00000050._4_4_,
                                   in_stack_00000058 & 0xffffffff,in_stack_00000058._4_4_,
                                   in_stack_00000030 & 0xffffffff,in_stack_00000030._4_4_,
                                   in_stack_00000038 & 0xffffffff,in_stack_00000038._4_4_,plVar8,0,0
                                   ,0,0,*(undefined8 *)(unaff_x19 + 0x18),0);
                      FUN_02688390(&stack0x00000040,0);
                      FUN_02688398(&stack0x00000030,0);
                      fVar15 = (float)FUN_026883a0(&stack0x00000040,0);
                      iVar6 = (**(code **)(*plVar8 + 0x1a8))
                                        (plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
                      FUN_026883a8((fVar15 + 1.0) - 1.0 / (float)iVar6,&stack0x00000030,0);
                      iVar6 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
                      FUN_026884cc(1.0 / (float)iVar6,&stack0x00000030,0);
                      iVar6 = (**(code **)(*plVar8 + 0x1a8))
                                        (plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
                      FUN_026884dc(1.0 / (float)iVar6,&stack0x00000030,0);
                      FUN_02688390(&stack0x00000060,0);
                      FUN_02688398(&stack0x00000050,0);
                      FUN_026883a0(&stack0x00000060,0);
                      FUN_026883a8(&stack0x00000050,0);
                      FUN_026884cc((float)*(int *)(unaff_x19 + 0x30),&stack0x00000050,0);
                      FUN_026884dc((float)*(int *)(unaff_x19 + 0x30),&stack0x00000050,0);
                      FUN_02678584(in_stack_00000050 & 0xffffffff,in_stack_00000050._4_4_,
                                   in_stack_00000058 & 0xffffffff,in_stack_00000058._4_4_,
                                   in_stack_00000030 & 0xffffffff,in_stack_00000030._4_4_,
                                   in_stack_00000038 & 0xffffffff,in_stack_00000038._4_4_,plVar8,0,0
                                   ,0,0,*(undefined8 *)(unaff_x19 + 0x18),0);
                      fVar15 = (float)FUN_02688390(&stack0x00000040,0);
                      iVar6 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
                      FUN_02688398((fVar15 + 1.0) - 1.0 / (float)iVar6,&stack0x00000030,0);
                      fVar15 = (float)FUN_026883a0(&stack0x00000040,0);
                      iVar6 = (**(code **)(*plVar8 + 0x1a8))
                                        (plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
                      FUN_026883a8((fVar15 + 1.0) - 1.0 / (float)iVar6,&stack0x00000030,0);
                      iVar6 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
                      FUN_026884cc(1.0 / (float)iVar6,&stack0x00000030,0);
                      iVar6 = (**(code **)(*plVar8 + 0x1a8))
                                        (plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
                      FUN_026884dc(1.0 / (float)iVar6,&stack0x00000030,0);
                      fVar15 = (float)FUN_02688390(&stack0x00000078,0);
                      fVar16 = (float)FUN_026884c4(&stack0x00000078,0);
                      FUN_02688398(fVar15 + fVar16,&stack0x00000050,0);
                      FUN_026883a0(&stack0x00000060,0);
                      FUN_026883a8(&stack0x00000050,0);
                      FUN_026884cc((float)*(int *)(unaff_x19 + 0x30),&stack0x00000050,0);
                      FUN_026884dc((float)*(int *)(unaff_x19 + 0x30),&stack0x00000050,0);
                      FUN_02678584(in_stack_00000050 & 0xffffffff,in_stack_00000050._4_4_,
                                   in_stack_00000058 & 0xffffffff,in_stack_00000058._4_4_,
                                   in_stack_00000030 & 0xffffffff,in_stack_00000030._4_4_,
                                   in_stack_00000038 & 0xffffffff,in_stack_00000038._4_4_,plVar8,0,0
                                   ,0,0,*(undefined8 *)(unaff_x19 + 0x18),0);
                      FUN_02688390(&stack0x00000040,0);
                      FUN_02688398(&stack0x00000030,0);
                      FUN_026883a0(&stack0x00000040,0);
                      FUN_026883a8(&stack0x00000030,0);
                      iVar6 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
                      FUN_026884cc(1.0 / (float)iVar6,&stack0x00000030,0);
                      iVar6 = (**(code **)(*plVar8 + 0x1a8))
                                        (plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
                      FUN_026884dc(1.0 / (float)iVar6,&stack0x00000030,0);
                      FUN_02688390(&stack0x00000060,0);
                      FUN_02688398(&stack0x00000050,0);
                      fVar15 = (float)FUN_026883a0(&stack0x00000078,0);
                      fVar16 = (float)FUN_026884d4(&stack0x00000078,0);
                      FUN_026883a8(fVar15 + fVar16,&stack0x00000050,0);
                      FUN_026884cc((float)*(int *)(unaff_x19 + 0x30),&stack0x00000050,0);
                      FUN_026884dc((float)*(int *)(unaff_x19 + 0x30),&stack0x00000050,0);
                      FUN_02678584(in_stack_00000050 & 0xffffffff,in_stack_00000050._4_4_,
                                   in_stack_00000058 & 0xffffffff,in_stack_00000058._4_4_,
                                   in_stack_00000030 & 0xffffffff,in_stack_00000030._4_4_,
                                   in_stack_00000038 & 0xffffffff,in_stack_00000038._4_4_,plVar8,0,0
                                   ,0,0,*(undefined8 *)(unaff_x19 + 0x18),0);
                      fVar15 = (float)FUN_02688390(&stack0x00000040,0);
                      iVar6 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
                      FUN_02688398((fVar15 + 1.0) - 1.0 / (float)iVar6,&stack0x00000030,0);
                      FUN_026883a0(&stack0x00000040,0);
                      FUN_026883a8(&stack0x00000030,0);
                      iVar6 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
                      FUN_026884cc(1.0 / (float)iVar6,&stack0x00000030,0);
                      iVar6 = (**(code **)(*plVar8 + 0x1a8))
                                        (plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
                      FUN_026884dc(1.0 / (float)iVar6,&stack0x00000030,0);
                      fVar15 = (float)FUN_02688390(&stack0x00000078,0);
                      fVar16 = (float)FUN_026884c4(&stack0x00000078,0);
                      FUN_02688398(fVar15 + fVar16,&stack0x00000050,0);
                      fVar15 = (float)FUN_026883a0(&stack0x00000078,0);
                      fVar16 = (float)FUN_026884d4(&stack0x00000078,0);
                      FUN_026883a8(fVar15 + fVar16,&stack0x00000050,0);
                      FUN_026884cc((float)*(int *)(unaff_x19 + 0x30),&stack0x00000050,0);
                      FUN_026884dc((float)*(int *)(unaff_x19 + 0x30),&stack0x00000050,0);
                      FUN_02678584(in_stack_00000050 & 0xffffffff,in_stack_00000050._4_4_,
                                   in_stack_00000058 & 0xffffffff,in_stack_00000058._4_4_,
                                   in_stack_00000030 & 0xffffffff,in_stack_00000030._4_4_,
                                   in_stack_00000038 & 0xffffffff,in_stack_00000038._4_4_,plVar8,0,0
                                   ,0,0,*(undefined8 *)(unaff_x19 + 0x18),0);
                      FUN_02678584(in_stack_00000078,uStack000000000000007c,in_stack_00000080,
                                   uStack0000000000000084,in_stack_00000040 & 0xffffffff,
                                   in_stack_00000040._4_4_,in_stack_00000048 & 0xffffffff,
                                   in_stack_00000048._4_4_,plVar8,0,0,0,0,
                                   *(undefined8 *)(unaff_x19 + 0x18),0);
                      FUN_02675858(uVar11,0);
                      FUN_02670030(plVar8,uVar17,0);
                      return;
                    }
                    plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
                    puVar1 = Method_System_Xml_XmlSqlBinaryReader_ImplReadEndElement__;
                    if (plVar9 != (long *)0x0) {
                      if ((*(long *)Method_System_Xml_XmlSqlBinaryReader_ImplReadEndElement__ != 0)
                         && (lVar7 = thunk_FUN_00d6225c(*(long *)
                                                  Method_System_Xml_XmlSqlBinaryReader_ImplReadEndElement__
                                                  ,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0)) {
LAB_013e5bd8:
                        uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                        FUN_00da5038(uVar11,0);
                      }
                      if ((int)plVar9[3] != 0) {
                        plVar9[4] = *(long *)puVar1;
                        lVar7 = FUN_0268b6ac(plVar8,0);
                        if ((lVar7 != 0) &&
                           (lVar14 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40)),
                           lVar14 == 0)) goto LAB_013e5bd8;
                        puVar1 = 
                        Method_System_ThrowHelper_ThrowInvalidTypeWithPointersNotSupported__;
                        uVar12 = *(uint *)(plVar9 + 3);
                        if (1 < uVar12) {
                          plVar9[5] = lVar7;
                          lVar7 = *(long *)puVar1;
                          if (lVar7 != 0) {
                            lVar7 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40));
                            if (lVar7 == 0) goto LAB_013e5bd8;
                            uVar12 = *(uint *)(plVar9 + 3);
                          }
                          if (2 < uVar12) {
                            plVar9[6] = *(long *)puVar1;
                            lVar7 = FUN_02688894();
                            if ((lVar7 != 0) &&
                               (lVar14 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40)),
                               lVar14 == 0)) goto LAB_013e5bd8;
                            puVar1 = UnityEngine_MeshFilter_var;
                            uVar12 = *(uint *)(plVar9 + 3);
                            if (3 < uVar12) {
                              plVar9[7] = lVar7;
                              lVar7 = *(long *)puVar1;
                              if (lVar7 != 0) {
                                lVar7 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40));
                                if (lVar7 == 0) goto LAB_013e5bd8;
                                uVar12 = *(uint *)(plVar9 + 3);
                              }
                              if (4 < uVar12) {
                                plVar9[8] = *(long *)puVar1;
                                lVar7 = FUN_02688894();
                                if ((lVar7 != 0) &&
                                   (lVar14 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)
                                                                       (*plVar9 + 0x40)),
                                   lVar14 == 0)) goto LAB_013e5bd8;
                                puVar1 = 
                                Method_Newtonsoft_Json_Serialization_JsonFormatterConverter_GetTokenValue<ulong>__
                                ;
                                uVar12 = *(uint *)(plVar9 + 3);
                                if (5 < uVar12) {
                                  plVar9[9] = lVar7;
                                  lVar7 = *(long *)puVar1;
                                  if (lVar7 != 0) {
                                    lVar7 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar9 + 0x40)
                                                              );
                                    if (lVar7 == 0) goto LAB_013e5bd8;
                                    uVar12 = *(uint *)(plVar9 + 3);
                                  }
                                  if (6 < uVar12) {
                                    plVar9[10] = *(long *)puVar1;
                                    plVar10 = *(long **)(unaff_x19 + 0x18);
                                    if (plVar10 == (long *)0x0) {
                                      lVar7 = 0;
                                    }
                                    else {
                                      lVar7 = (**(code **)(*plVar10 + 0x168))
                                                        (plVar10,*(undefined8 *)(*plVar10 + 0x170));
                                      if ((lVar7 != 0) &&
                                         (lVar14 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)
                                                                             (*plVar9 + 0x40)),
                                         lVar14 == 0)) goto LAB_013e5bd8;
                                    }
                                    puVar1 = StringLiteral_302;
                                    if (7 < *(uint *)(plVar9 + 3)) {
                                      plVar9[0xb] = lVar7;
                                      uVar11 = FUN_01600844(plVar9,0);
                                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                        thunk_FUN_00d32864(*(long *)puVar1);
                                      }
                                      FUN_02660dac(uVar11,0);
                                      goto LAB_013e5c30;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
LAB_013e6638:
                    /* WARNING: Subroutine does not return */
                      FUN_00da5194();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


