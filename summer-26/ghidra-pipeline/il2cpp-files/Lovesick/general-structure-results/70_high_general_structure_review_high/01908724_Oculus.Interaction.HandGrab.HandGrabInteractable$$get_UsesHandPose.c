/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.HandGrabInteractable$$get_UsesHandPose
ENTRY_POINT: 01908724
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Oculus_Interaction_HandGrab_HandGrabInteractable__get_UsesHandPose
          (long param_1,undefined1 param_2 [16],undefined4 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
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
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined4 uStack00000000000001b0;
  float fStack00000000000001b4;
  undefined4 uStack00000000000001b8;
  undefined4 uStack00000000000001bc;
  undefined4 uStack00000000000001c0;
  undefined4 uStack00000000000001c4;
  uint uStack00000000000001c8;
  undefined4 uStack00000000000001cc;
  
  (**(code **)(param_1 + 0x198))();
  if (*(long *)(unaff_x21 + 0x30) == 0) goto LAB_01908a50;
  uVar1 = *(undefined4 *)(*(long *)(unaff_x21 + 0x30) + 0x18);
  if ((*(long *)(unaff_x22 + 0x20) == 0) ||
     (uVar3 = FUN_0135b570(*(long *)(unaff_x22 + 0x20),
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<BufferOffsetSize>,_HttpWebRequest_<GetResponseFromData>d__244>__
                          ), (uVar3 & 1) == 0)) {
    if ((unaff_x19 == 0) || (*(long *)(unaff_x19 + 0x60) == 0)) goto LAB_01908a50;
    lVar4 = FUN_0190e140();
    *(long *)(unaff_x22 + 0x20) = lVar4;
    if (lVar4 == 0) goto LAB_01908a50;
    FUN_0135b58c(lVar4,*(undefined8 *)StringLiteral_7568);
  }
  else if (unaff_x19 == 0) goto LAB_01908a50;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_013576e8(*(long *)(unaff_x19 + 0x20),uVar1,&stack0x00000190,
                 *(undefined8 *)
                  Method_Newtonsoft_Json_Linq_JsonPath_ScanMultipleFilter_<ExecuteFilter>d__2_System_Collections_IEnumerator_Reset__
                );
    uStack00000000000001cc = 1;
    uStack00000000000001b0 = 5;
    if ((*(long *)(unaff_x22 + 0x10) != 0) &&
       (uStack00000000000001c4 = *(undefined4 *)(*(long *)(unaff_x22 + 0x10) + 0x28), unaff_x20 != 0
       )) {
      uStack00000000000001c8 = FUN_026eda64();
      puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      uStack00000000000001c8 = uStack00000000000001c8 & 1;
      if (*(long *)(unaff_x22 + 0x10) != 0) {
        uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x40);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar3 = FUN_02681b9c(uVar6,0,0);
        lVar4 = *(long *)(unaff_x22 + 0x10);
        if ((uVar3 & 1) == 0) {
          uStack00000000000001bc = 0xffffffff;
          if (lVar4 == 0) goto LAB_01908a50;
        }
        else {
          if (((lVar4 == 0) || (*(long *)(lVar4 + 0x40) == 0)) ||
             (lVar5 = *(long *)(*(long *)(lVar4 + 0x40) + 0x20), lVar5 == 0)) goto LAB_01908a50;
          uStack00000000000001bc = *(undefined4 *)(lVar5 + 0x18);
        }
        uVar6 = *(undefined8 *)(lVar4 + 0x20);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar3 = FUN_02681b9c(uVar6,0,0);
        if ((uVar3 & 1) == 0) {
          uStack00000000000001c0 = 0xffffffff;
        }
        else {
          if ((*(long *)(unaff_x22 + 0x10) == 0) ||
             (lVar4 = *(long *)(*(long *)(unaff_x22 + 0x10) + 0x20), lVar4 == 0)) goto LAB_01908a50;
          FUN_019106fc(lVar4);
          if (*(long *)(lVar4 + 0x18) == 0) goto LAB_01908a50;
          uStack00000000000001c0 = *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x18);
        }
        uStack0000000000000190 = FUN_026edaa0();
        in_stack_00000198 = 0;
        uStack0000000000000194 = param_3;
        if (*(long *)(unaff_x22 + 0x10) != 0) {
          fVar8 = *(float *)(*(long *)(unaff_x22 + 0x10) + 0x18);
          fVar7 = (float)FUN_026edd70();
          fVar8 = fVar8 + fVar7;
          fStack00000000000001b4 = fVar8;
          if (*(long *)(unaff_x22 + 0x20) != 0) {
            uStack00000000000001b8 = *(undefined4 *)(*(long *)(unaff_x22 + 0x20) + 0x18);
            in_stack_00000100 = CONCAT44(uStack0000000000000194,uStack0000000000000190);
            in_stack_00000128 = CONCAT44(uStack00000000000001bc,uStack00000000000001b8);
            in_stack_00000120 = CONCAT44(fVar8,uStack00000000000001b0);
            in_stack_00000138 = CONCAT44(uStack00000000000001cc,uStack00000000000001c8);
            in_stack_00000130 = CONCAT44(uStack00000000000001c4,uStack00000000000001c0);
            in_stack_00000108 = in_stack_00000198;
            in_stack_00000118 = in_stack_000001a8;
            in_stack_00000110 = in_stack_000001a0;
            if (*(long *)(unaff_x19 + 0x20) != 0) {
              in_stack_000000d8 = in_stack_000001a8;
              in_stack_000000d0 = in_stack_000001a0;
              in_stack_000000c8 = in_stack_00000198;
              in_stack_000000c0 = in_stack_00000100;
              in_stack_000000e0 = in_stack_00000120;
              in_stack_000000e8 = in_stack_00000128;
              in_stack_000000f0 = in_stack_00000130;
              in_stack_000000f8 = in_stack_00000138;
              FUN_013577f0(*(long *)(unaff_x19 + 0x20),uVar1,&stack0x000000c0,
                           *(undefined8 *)StringLiteral_5645);
              if (*(long *)(unaff_x19 + 0x28) != 0) {
                FUN_013576e8(*(long *)(unaff_x19 + 0x28),uVar1,&stack0x00000170,
                             *(undefined8 *)
                              Method_System_Collections_Generic_HashSet<VisualElement>_GetEnumerator__
                            );
                FUN_026edbbc(&stack0x00000030);
                in_stack_000000a8 = in_stack_00000038;
                in_stack_000000a0 = in_stack_00000030;
                in_stack_000000b0 = in_stack_00000040;
                FUN_01907be8(fVar8,&stack0x00000170,&stack0x000000a0,1);
                in_stack_00000088 = in_stack_00000178;
                in_stack_00000080 = in_stack_00000170;
                in_stack_00000098 = in_stack_00000188;
                in_stack_00000090 = in_stack_00000180;
                if (*(long *)(unaff_x19 + 0x28) != 0) {
                  in_stack_00000068 = in_stack_00000178;
                  in_stack_00000060 = in_stack_00000170;
                  in_stack_00000078 = in_stack_00000188;
                  in_stack_00000070 = in_stack_00000180;
                  FUN_013577f0(*(long *)(unaff_x19 + 0x28),uVar1,&stack0x00000060,
                               *(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_AR_CommonTouch_GetEnhancedTouch__
                              );
                  if (*(long *)(unaff_x19 + 0x30) != 0) {
                    FUN_013576e8(*(long *)(unaff_x19 + 0x30),uVar1,&stack0x00000140,
                                 *(undefined8 *)
                                  Method_Sirenix_OdinInspector_AssetSelectorAttribute_<>c_<set_Paths>b__12_0__
                                );
                    uVar6 = FUN_0268fd10();
                    FUN_01907cbc(&stack0x00000140,uVar6,1);
                    in_stack_00000038 = in_stack_00000148;
                    in_stack_00000030 = in_stack_00000140;
                    in_stack_00000048 = in_stack_00000158;
                    in_stack_00000040 = in_stack_00000150;
                    in_stack_00000058 = in_stack_00000168;
                    in_stack_00000050 = in_stack_00000160;
                    if (*(long *)(unaff_x19 + 0x30) != 0) {
                      FUN_013577f0(*(long *)(unaff_x19 + 0x30),uVar1);
                      return 1;
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
LAB_01908a50:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


