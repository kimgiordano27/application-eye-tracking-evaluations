/*
FUNCTION_NAME: MultiRotationKnob$$RotateSelfForward
ENTRY_POINT: 00eeb370
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1
*/


void MultiRotationKnob__RotateSelfForward(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  uint uVar13;
  undefined8 in_stack_00000018;
  
  uVar5 = FUN_0268fd10();
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vsri_n_u64__;
  if (param_1 != 0) {
                    /* try { // try from 00eeb390 to 00feb44f has its CatchHandler @ 00eeb084 */
    FUN_0269fea8(param_1,uVar5,0);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    puVar3 = Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
    if (lVar6 != 0) {
      FUN_01320e50(lVar6,*(undefined8 *)
                          System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
      *(long *)(unaff_x20 + 0x30) = lVar6;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_03774e19 == '\0') {
        thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
        DAT_03774e19 = '\x01';
      }
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 00eeb0e4 with catch @ 00eeb408 */
        thunk_FUN_00d32864();
                    /* catch() { ... } // from try @ 00eeb2f8 with catch @ 00eeb40c */
        lVar6 = *(long *)puVar3;
      }
                    /* catch() { ... } // from try @ 00eeb1f8 with catch @ 00eeb410 */
                    /* catch() { ... } // from try @ 00eeb16c with catch @ 00eeb414
                       catch() { ... } // from try @ 00eeb260 with catch @ 00eeb414 */
      if (**(long **)(lVar6 + 0xb8) != 0) {
        uVar5 = *(undefined8 *)(**(long **)(lVar6 + 0xb8) + 0x138);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar7 = FUN_02681b9c(uVar5,0,0);
        if ((uVar7 & 1) != 0) {
                    /* catch() { ... } // from try @ 00eeb87c with catch @ 00eeb450 */
          lVar6 = FUN_010c3404();
          if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_00eec06c;
          lVar8 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (*(long *)(unaff_x20 + 0x28),0);
          lVar9 = FUN_0268fd10();
                    /* try { // try from 00eeb498 to 00feb49f has its CatchHandler @ 00eeb8a0 */
          if ((lVar9 == 0) ||
             (FUN_026a0f08(*(undefined4 *)(unaff_x19 + 0x16c),*(undefined4 *)(unaff_x19 + 0x170),
                           *(undefined4 *)(unaff_x19 + 0x174),lVar9,0), lVar8 == 0))
          goto LAB_00eec06c;
          FUN_0269f618(lVar8,0);
          if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_00eec06c;
          lVar8 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (*(long *)(unaff_x20 + 0x28),0);
          lVar9 = FUN_0268fd10();
          if ((lVar9 == 0) || (FUN_026a125c(lVar9,0), lVar8 == 0)) goto LAB_00eec06c;
                    /* try { // try from 00eeb4e0 to 00feb533 has its CatchHandler @ 00eeb8b0 */
          FUN_0269fd98(lVar8,0);
          if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_00eec06c;
          lVar8 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (*(long *)(unaff_x20 + 0x28),0);
          lVar9 = FUN_0268fd10();
          if (((lVar9 == 0) || (FUN_0269f810(lVar9,0), lVar8 == 0)) ||
             (FUN_0269f894(lVar8,0),
             puVar4 = 
             Method_Oculus_Interaction_HashSetExtensions_ExceptWithNonAlloc<__Il2CppFullySharedGenericType>__
             , puVar2 = OVR_OpenVR_IVRCompositor__ClearLastSubmittedFrame_TypeInfo, lVar6 == 0))
          goto LAB_00eec06c;
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (0 < (int)uVar1) {
                    /* try { // try from 00eeb544 to 00feb557 has its CatchHandler @ 00eeb89c */
            uVar13 = 0;
            do {
              if (uVar1 <= uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              lVar9 = *(long *)(lVar6 + (long)(int)uVar13 * 8 + 0x20);
              lVar8 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3868);
              if (lVar8 == 0) goto LAB_00eec06c;
              FUN_0268b098(lVar8,0);
              lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                 (lVar8,0);
              if ((*(long *)(unaff_x20 + 0x28) == 0) ||
                 (uVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                    (*(long *)(unaff_x20 + 0x28),0), lVar10 == 0))
              goto LAB_00eec06c;
              FUN_0269fea8(lVar10,uVar5,0);
                    /* try { // try from 00eeb5c0 to 00feb603 has its CatchHandler @ 00eeb8d4 */
              lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                 (lVar8,0);
              if ((lVar9 == 0) ||
                 ((lVar11 = FUN_0268fd10(lVar9,0), lVar11 == 0 ||
                  (FUN_0269f578(lVar11,0), lVar10 == 0)))) goto LAB_00eec06c;
              FUN_0269f618(lVar10,0);
              lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                 (lVar8,0);
              lVar11 = FUN_0268fd10(lVar9,0);
              if ((lVar11 == 0) || (FUN_026a125c(lVar11,0), lVar10 == 0)) goto LAB_00eec06c;
              FUN_0269fd98(lVar10,0);
              lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                 (lVar8,0);
              lVar11 = FUN_0268fd10(lVar9,0);
                    /* try { // try from 00eeb64c to 00feb67f has its CatchHandler @ 00eeb8d0 */
              if ((lVar11 == 0) || (FUN_0269f810(lVar11,0), lVar10 == 0)) goto LAB_00eec06c;
              FUN_0269f894(lVar10,0);
              lVar10 = FUN_010e5800(lVar8,*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
              uVar5 = FUN_026774f4(lVar9,0);
              if (lVar10 == 0) goto LAB_00eec06c;
              FUN_02677530(lVar10,uVar5,0);
              lVar9 = FUN_010e5800(lVar8,*(undefined8 *)UnityEngine_Pose___TypeInfo);
              if (lVar9 == 0) goto LAB_00eec06c;
                    /* try { // try from 00eeb6b4 to 00feb6ff has its CatchHandler @ 00eeb8d4 */
              FUN_0266622c(lVar9,0,0);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              if (DAT_03774e19 == '\0') {
                thunk_FUN_00d48444(puVar3);
                DAT_03774e19 = '\x01';
              }
              lVar10 = *(long *)puVar3;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar10 = *(long *)puVar3;
              }
              if (**(long **)(lVar10 + 0xb8) == 0) goto LAB_00eec06c;
              uVar12 = *(undefined8 *)(**(long **)(lVar10 + 0xb8) + 0x138);
              uVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                (lVar8,0);
              if (*(int *)(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                          0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)
                                    System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                  );
              }
              lVar10 = FUN_0112fe80(uVar12,uVar5,*(undefined8 *)StringLiteral_7102);
              if (lVar10 == 0) goto LAB_00eec06c;
              FUN_010c2c5c(lVar10,&stack0x00000028,*(undefined8 *)puVar4);
              in_stack_00000018 = FUN_026eabc8(lVar10,0);
              FUN_026eb484(&stack0x00000018,lVar9,0);
              if (*(long *)(unaff_x20 + 0x30) == 0) goto LAB_00eec06c;
              FUN_00ac5cb0(*(long *)(unaff_x20 + 0x30),lVar10,*(undefined8 *)puVar2);
              FUN_026ea898(lVar10,0);
              FUN_0268c0c8(0x40800000,lVar8,0);
              uVar1 = *(uint *)(lVar6 + 0x18);
              uVar13 = uVar13 + 1;
            } while ((int)uVar13 < (int)uVar1);
          }
        }
        FUN_00ee8614();
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_12098);
        if (lVar6 != 0) {
          FUN_0268a094(0x3f400000,lVar6,0);
          *(long *)(unaff_x20 + 0x18) = lVar6;
          *(undefined4 *)(unaff_x20 + 0x10) = 1;
          return;
        }
      }
    }
  }
LAB_00eec06c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


