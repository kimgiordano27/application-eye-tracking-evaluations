/*
FUNCTION_NAME: OVRSimpleJSON.JSONNode$$ReadVector2
ENTRY_POINT: 05703ce0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x05703da4) */

void OVRSimpleJSON_JSONNode__ReadVector2(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  long unaff_x19;
  int unaff_w20;
  undefined8 uVar8;
  undefined8 *unaff_x24;
  long in_stack_00000000;
  int *in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  int *in_stack_00000038;
  long *in_stack_00000040;
  long in_stack_00000048;
  int *in_stack_00000050;
  long *in_stack_00000058;
  int in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 *in_stack_000000a0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long in_stack_000000f0;
  int *in_stack_000000f8;
  long *in_stack_00000100;
  undefined8 in_stack_00000108;
  long in_stack_00000110;
  int *in_stack_00000118;
  long *in_stack_00000120;
  undefined4 *in_stack_00000138;
  
  FUN_05144508();
  if (unaff_x19 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  if ((unaff_w20 == 0xe) || (unaff_w20 == 0)) {
    _in_stack_00000070 =
         FUN_0376a32c(in_stack_000000d8,in_stack_000000d0,
                      *(undefined8 *)Unity_Collections_Allocator_TypeInfo);
    if (*(int *)(*(long *)Unity_Services_Relay_Models_AllocationRequest_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)Unity_Services_Relay_Models_AllocationRequest_TypeInfo);
    }
    _in_stack_00000080 =
         FUN_04384368(&stack0x00000070,
                      *(undefined8 *)System_Xml_Schema_AllElementsContentValidator_TypeInfo);
    uVar5 = FUN_040c0684(&stack0x00000080,
                         *(undefined8 *)System_Security_Cryptography_AesTransform_TypeInfo);
    if ((uVar5 & 1) == 0) {
      in_stack_00000108._4_4_ = 0;
      *in_stack_00000138 = 0;
      uVar6 = *(undefined8 *)UnityEngine_AndroidReflection_TypeInfo;
      *(undefined1 (*) [16])(in_stack_00000138 + 0x18) = _in_stack_00000080;
      FUN_033688e8(in_stack_00000138 + 2,&stack0x00000080,in_stack_00000138,uVar6);
      unaff_w20 = 0x10;
    }
    else {
      lVar4 = FUN_040c0784(&stack0x00000080,*(undefined8 *)System_Security_Cryptography_Aes_TypeInfo
                          );
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_03fb6fa8(&stack0x00000018,lVar4,
                   *(undefined8 *)Microsoft_CSharp_RuntimeBinder_Semantics_AggregateType_TypeInfo);
      puVar2 = System_AggregateException_TypeInfo;
      puVar1 = PTR_DAT_06a00f70;
      in_stack_00000098 = in_stack_00000020;
      in_stack_00000090 = in_stack_00000018;
      in_stack_000000a0 = in_stack_00000028;
      in_stack_00000020 = (long)&stack0x00000108 + 4;
      in_stack_00000018 = 0;
      in_stack_00000028 = &stack0x00000090;
      do {
        uVar5 = FUN_0514478c(&stack0x00000090,*(undefined8 *)puVar2);
        puVar3 = in_stack_000000a0;
        if ((uVar5 & 1) == 0) {
          unaff_w20 = 0x14;
          goto LAB_05703b20;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar5 = FUN_0576856c((ulong)puVar3 & 0xffffffff,0);
      } while ((uVar5 & 1) != 0);
      FUN_03767334(*(undefined8 *)(in_stack_00000138 + 10),(ulong)puVar3 & 0xffffffff,*unaff_x24);
      unaff_w20 = 0x13;
      in_stack_000000f8 = in_stack_00000008;
      in_stack_000000f0 = in_stack_00000000;
      in_stack_00000100 = in_stack_00000010;
LAB_05703b20:
      if (in_stack_00000108._4_4_ < 0) {
        FUN_05144788(in_stack_00000028,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_AffordanceStateShortcuts_TypeInfo
                    );
      }
      if ((unaff_w20 == 0x14) || (unaff_w20 == 0)) {
        unaff_w20 = 0x15;
      }
    }
  }
  if (*in_stack_00000038 < 0) {
    FUN_04808f10(*in_stack_00000040 + 0x50,
                 *(undefined8 *)Unity_Collections_AllocatorManager_TypeInfo);
  }
  if (in_stack_00000030 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  if ((unaff_w20 == 0x15) || (unaff_w20 == 0)) {
    uVar6 = *unaff_x24;
    *(undefined8 *)(in_stack_00000138 + 0x14) = 0;
    *(undefined8 *)(in_stack_00000138 + 0x16) = 0;
    FUN_03767334(&stack0x00000030,*(undefined8 *)(in_stack_00000138 + 10),0,uVar6);
    unaff_w20 = 0x13;
    in_stack_000000f8 = in_stack_00000038;
    in_stack_000000f0 = in_stack_00000030;
    in_stack_00000100 = in_stack_00000040;
  }
  if (*in_stack_00000050 < 0) {
    FUN_03bb07f0(*in_stack_00000058 + 0x48,
                 *(undefined8 *)UnityEngine_Android_AndroidNavigation_TypeInfo);
  }
  if (in_stack_00000048 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  if (*in_stack_00000118 < 0) {
    FUN_03bb07f0(*in_stack_00000120 + 0x40,*(undefined8 *)UnityEngine_Android_AndroidLocale_TypeInfo
                );
  }
  puVar1 = UnityEngine_Android_AndroidHardwareKeyboardHidden_TypeInfo;
  if (in_stack_00000110 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  if (unaff_w20 == 0x13) {
    *in_stack_00000138 = 0xfffffffe;
    in_stack_00000118 = in_stack_000000f8;
    in_stack_00000110 = in_stack_000000f0;
    in_stack_00000120 = in_stack_00000100;
    FUN_0435ecc8(in_stack_00000138 + 2,&stack0x00000110,*(undefined8 *)puVar1);
  }
  else if (unaff_w20 == 0) {
    uVar8 = *(undefined8 *)(&stack0x00000060 + (long)(in_stack_00000068 + -1) * 8);
    puVar7 = in_stack_00000138 + 2;
    *in_stack_00000138 = 0xfffffffe;
    uVar6 = thunk_FUN_02dfd288(UnityEngine_AndroidJavaObject_TypeInfo);
    FUN_0435ebf8(puVar7,uVar8,uVar6);
  }
  return;
}


