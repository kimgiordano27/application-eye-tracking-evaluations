/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.GrabPoseFinder$$FindPreviousScaledGrabPose
ENTRY_POINT: 019077e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


undefined8
Oculus_Interaction_HandGrab_GrabPoseFinder__FindPreviousScaledGrabPose
          (long *param_1,undefined1 param_2 [16],undefined4 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined4 uStack0000000000000190;
  undefined4 uStack0000000000000194;
  undefined8 in_stack_00000198;
  undefined4 uStack00000000000001a0;
  undefined4 uStack00000000000001a4;
  undefined8 in_stack_000001a8;
  undefined4 uStack00000000000001b0;
  float fStack00000000000001b4;
  undefined4 uStack00000000000001b8;
  undefined4 uStack00000000000001bc;
  undefined4 uStack00000000000001c0;
  undefined4 uStack00000000000001c4;
  uint uStack00000000000001c8;
  undefined4 uStack00000000000001cc;
  
  if (*param_1 !=
      *(long *)
       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Create__
     ) {
    param_1 = (long *)0x0;
  }
  lVar3 = FUN_01907b10();
  plVar7 = *(long **)(unaff_x22 + 0x10);
  if (plVar7 != (long *)0x0) {
    lVar5 = plVar7[6];
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
      lVar5 = plVar7[6];
      if (lVar5 == 0) goto LAB_01907b0c;
    }
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) {
      uVar1 = *(undefined4 *)(lVar5 + 0x18);
      FUN_013576e8(*(long *)(lVar3 + 0x20),uVar1,&stack0x00000190,
                   *(undefined8 *)
                    Method_Newtonsoft_Json_Linq_JsonPath_ScanMultipleFilter_<ExecuteFilter>d__2_System_Collections_IEnumerator_Reset__
                  );
      uStack00000000000001cc = 1;
      uStack00000000000001b0 = 1;
      if (*(long *)(unaff_x22 + 0x10) != 0) {
        uStack00000000000001c4 = *(undefined4 *)(*(long *)(unaff_x22 + 0x10) + 0x28);
        if (param_1 != (long *)0x0) {
          uStack00000000000001c8 = FUN_026eda64(param_1,0);
          puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          uStack00000000000001c8 = uStack00000000000001c8 & 1;
          if (*(long *)(unaff_x22 + 0x10) != 0) {
            uVar8 = *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x40);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar4 = FUN_02681b9c(uVar8,0,0);
            lVar5 = *(long *)(unaff_x22 + 0x10);
            if ((uVar4 & 1) == 0) {
              uStack00000000000001bc = 0xffffffff;
              if (lVar5 == 0) goto LAB_01907b0c;
            }
            else {
              if (((lVar5 == 0) || (*(long *)(lVar5 + 0x40) == 0)) ||
                 (lVar6 = *(long *)(*(long *)(lVar5 + 0x40) + 0x20), lVar6 == 0)) goto LAB_01907b0c;
              uStack00000000000001bc = *(undefined4 *)(lVar6 + 0x18);
            }
            uVar8 = *(undefined8 *)(lVar5 + 0x20);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar4 = FUN_02681b9c(uVar8,0,0);
            if ((uVar4 & 1) == 0) {
              uStack00000000000001c0 = 0xffffffff;
            }
            else {
              if ((*(long *)(unaff_x22 + 0x10) == 0) ||
                 (lVar5 = *(long *)(*(long *)(unaff_x22 + 0x10) + 0x20), lVar5 == 0))
              goto LAB_01907b0c;
              FUN_019106fc(lVar5);
              if (*(long *)(lVar5 + 0x18) == 0) goto LAB_01907b0c;
              uStack00000000000001c0 = *(undefined4 *)(*(long *)(lVar5 + 0x18) + 0x18);
            }
            if (*(long *)(unaff_x22 + 0x10) != 0) {
              fVar10 = *(float *)(*(long *)(unaff_x22 + 0x10) + 0x18);
              fVar9 = (float)FUN_026edf40(param_1,0);
              fVar10 = fVar10 + fVar9;
              fStack00000000000001b4 = fVar10;
              uStack0000000000000190 = FUN_026edaa0(param_1,0);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0190778c with catch @ 01907994
                        */
              in_stack_00000198 = 0;
              uStack0000000000000194 = param_3;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 019077b4 with catch @ 01907998
                        */
              uStack00000000000001a0 = FUN_026ede24(param_1,0);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01907790 with catch @ 0190799c
                        */
              in_stack_000001a8 = 0;
              in_stack_00000100 = CONCAT44(uStack0000000000000194,uStack0000000000000190);
              in_stack_00000110 = CONCAT44(param_3,uStack00000000000001a0);
              in_stack_00000128 = CONCAT44(uStack00000000000001bc,uStack00000000000001b8);
              in_stack_00000120 = CONCAT44(fStack00000000000001b4,uStack00000000000001b0);
              in_stack_00000138 = CONCAT44(uStack00000000000001cc,uStack00000000000001c8);
              in_stack_00000130 = CONCAT44(uStack00000000000001c4,uStack00000000000001c0);
              in_stack_00000108 = in_stack_00000198;
              in_stack_00000118 = 0;
              uStack00000000000001a4 = param_3;
              if (*(long *)(lVar3 + 0x20) != 0) {
                in_stack_000000d8 = 0;
                in_stack_000000c8 = in_stack_00000198;
                in_stack_000000c0 = in_stack_00000100;
                in_stack_000000d0 = in_stack_00000110;
                in_stack_000000e0 = in_stack_00000120;
                in_stack_000000e8 = in_stack_00000128;
                in_stack_000000f0 = in_stack_00000130;
                in_stack_000000f8 = in_stack_00000138;
                FUN_013577f0(*(long *)(lVar3 + 0x20),uVar1,&stack0x000000c0,
                             *(undefined8 *)StringLiteral_5645);
                if (*(long *)(lVar3 + 0x28) != 0) {
                  FUN_013576e8(*(long *)(lVar3 + 0x28),uVar1,&stack0x00000170,
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<VisualElement>_GetEnumerator__
                              );
                  FUN_026edbbc(&stack0x00000030,param_1,0);
                  in_stack_000000a8 = in_stack_00000038;
                  in_stack_000000a0 = in_stack_00000030;
                  in_stack_000000b0 = in_stack_00000040;
                  FUN_01907be8(fVar10,&stack0x00000170,&stack0x000000a0,1);
                  in_stack_00000088 = in_stack_00000178;
                  in_stack_00000080 = in_stack_00000170;
                  in_stack_00000098 = in_stack_00000188;
                  in_stack_00000090 = in_stack_00000180;
                  if (*(long *)(lVar3 + 0x28) != 0) {
                    in_stack_00000068 = in_stack_00000178;
                    in_stack_00000060 = in_stack_00000170;
                    in_stack_00000078 = in_stack_00000188;
                    in_stack_00000070 = in_stack_00000180;
                    FUN_013577f0(*(long *)(lVar3 + 0x28),uVar1,&stack0x00000060,
                                 *(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_CommonTouch_GetEnhancedTouch__
                                );
                    if (*(long *)(lVar3 + 0x30) != 0) {
                      FUN_013576e8(*(long *)(lVar3 + 0x30),uVar1,&stack0x00000140,
                                   *(undefined8 *)
                                    Method_Sirenix_OdinInspector_AssetSelectorAttribute_<>c_<set_Paths>b__12_0__
                                  );
                      uVar8 = FUN_0268fd10(param_1,0);
                      FUN_01907cbc(&stack0x00000140,uVar8,1);
                      in_stack_00000038 = in_stack_00000148;
                      in_stack_00000030 = in_stack_00000140;
                      in_stack_00000048 = in_stack_00000158;
                      in_stack_00000040 = in_stack_00000150;
                      in_stack_00000058 = in_stack_00000168;
                      in_stack_00000050 = in_stack_00000160;
                      if (*(long *)(lVar3 + 0x30) != 0) {
                        FUN_013577f0(*(long *)(lVar3 + 0x30),uVar1);
                        return 0;
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
  }
LAB_01907b0c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


