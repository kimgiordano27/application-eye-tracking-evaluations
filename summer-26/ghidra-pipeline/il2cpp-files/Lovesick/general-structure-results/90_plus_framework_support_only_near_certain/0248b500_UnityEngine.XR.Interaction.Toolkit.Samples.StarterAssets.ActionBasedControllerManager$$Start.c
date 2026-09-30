/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager$$Start
ENTRY_POINT: 0248b500
PROGRAM: Lovesick-libil2cpp.so
SCORE: 141
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;weak_vector_component_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__Start
               (long param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  bool bVar5;
  bool bVar6;
  double __x;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  int *piVar20;
  ulong uVar21;
  undefined1 uVar22;
  char cVar23;
  uint uVar24;
  undefined4 *puVar25;
  long lVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  float *pfVar31;
  code *pcVar32;
  uint uVar33;
  uint uVar34;
  long lVar35;
  float *pfVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w25;
  long *plVar41;
  uint *unaff_x26;
  uint uVar42;
  long *unaff_x27;
  long *plVar43;
  undefined8 *unaff_x28;
  float fVar44;
  float fVar45;
  float fVar46;
  double dVar47;
  undefined4 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float unaff_s9;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float unaff_s12;
  float unaff_s13;
  float fVar59;
  undefined4 uVar60;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  uint uStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined8 in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  byte bStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  float *in_stack_00000088;
  float fStack0000000000000090;
  undefined4 uStack0000000000000094;
  float fStack0000000000000098;
  float in_stack_000000a0;
  int iStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  undefined8 in_stack_000000b8;
  float fStack00000000000000c4;
  float in_stack_000000c8;
  float fStack00000000000000cc;
  undefined8 in_stack_000000d8;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  float in_stack_00000100;
  uint uStack0000000000000114;
  float in_stack_00000120;
  float in_stack_00000128;
  undefined8 in_stack_00000130;
  float in_stack_00000138;
  undefined8 in_stack_00000140;
  uint *in_stack_00000148;
  long *in_stack_00000150;
  undefined8 in_stack_00000158;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  float in_stack_00000180;
  uint in_stack_00000880;
  undefined4 in_stack_00000884;
  undefined4 in_stack_00000890;
  undefined4 in_stack_00000bf8;
  undefined4 in_stack_00000bfc;
  undefined8 in_stack_00000c00;
  long in_stack_000016d8;
  uint in_stack_0000176c;
  uint in_stack_00001788;
  undefined8 in_stack_00001790;
  undefined8 in_stack_00001798;
  float in_stack_000017a0;
  undefined8 in_stack_000017a8;
  float in_stack_000017b8;
  uint uVar61;
  uint in_stack_000017bc;
  
code_r0x0248b500:
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar11 = FUN_016f68bc(unaff_w25,0);
  uVar11 = uVar11 & 1;
  fVar49 = unaff_s13;
  unaff_w25 = in_stack_000017bc;
  do {
    fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
    *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
    iVar10 = (int)unaff_x21;
    if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
      fVar57 = 0.0;
      fVar56 = 0.0;
      fVar53 = 0.0;
    }
    else {
      if (unaff_x19[200] == 0) goto LAB_02491464;
      uVar24 = *unaff_x26;
      uVar27 = *(uint *)(unaff_x19[200] + 0x28);
      if ((int)uVar24 < (int)in_stack_00000078._4_4_) {
        if ((*in_stack_00000150 == 0) ||
           (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar28 + 0x18) <= uVar24 + 1)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar28 = *(long *)(lVar28 + (long)(int)(uVar24 + 1) * (long)iVar10 + 0x30);
        if ((((lVar28 == 0) || (*unaff_x27 == 0)) ||
            (lVar29 = *(long *)(*unaff_x27 + 0x128), lVar29 == 0)) ||
           (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)) goto LAB_02491464;
        in_stack_00000880 = uVar27 | *(int *)(lVar28 + 0x28) << 0x10;
        uVar17 = FUN_0129eff4(lVar29,&stack0x00000880,&stack0x000016d8,
                              *(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                             );
        uVar60 = 0;
        if ((uVar17 & 1) == 0) {
          fVar57 = 0.0;
          fVar56 = 0.0;
          fVar53 = 0.0;
        }
        else {
          if (in_stack_000016d8 == 0) goto LAB_02491464;
          fVar53 = *(float *)(in_stack_000016d8 + 0x14);
          fVar56 = *(float *)(in_stack_000016d8 + 0x18);
          fVar57 = *(float *)(in_stack_000016d8 + 0x1c);
          uVar60 = *(undefined4 *)(in_stack_000016d8 + 0x20);
          if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
            fStack00000000000000cc = 0.0;
          }
        }
        uVar24 = *unaff_x26;
      }
      else {
        uVar60 = 0;
        fVar57 = 0.0;
        fVar56 = 0.0;
        fVar53 = 0.0;
      }
      if (0 < (int)uVar24) {
        if ((*in_stack_00000150 == 0) ||
           (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar28 + 0x18) <= (uint)((long)(int)uVar24 + -1))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar28 = *(long *)(lVar28 + ((long)(int)uVar24 + -1) * unaff_x21 + 0x30);
        if (((lVar28 == 0) || (*unaff_x27 == 0)) ||
           ((lVar29 = *(long *)(*unaff_x27 + 0x128), lVar29 == 0 ||
            (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)))) goto LAB_02491464;
        in_stack_00000880 = *(uint *)(lVar28 + 0x28) | uVar27 << 0x10;
        uVar17 = FUN_0129eff4(lVar29,&stack0x00000880,&stack0x000016d8,
                              *(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                             );
        if ((uVar17 & 1) != 0) {
                    /* try { // try from 0248b6b4 to 0258b6bb has its CatchHandler @ 0248bb68 */
                    /* try { // try from 0248b6c4 to 0258b6cf has its CatchHandler @ 0248b9bc */
          if ((in_stack_000016d8 == 0) ||
             (fVar53 = (float)FUN_024bb1bc(fVar53,fVar56,fVar57,uVar60,
                                           *(undefined4 *)(in_stack_000016d8 + 0x28),
                                           *(undefined4 *)(in_stack_000016d8 + 0x2c),
                                           *(undefined4 *)(in_stack_000016d8 + 0x30),
                                           *(undefined4 *)(in_stack_000016d8 + 0x34),0),
             in_stack_000016d8 == 0)) goto LAB_02491464;
          if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
            fStack00000000000000cc = 0.0;
          }
        }
      }
      *(float *)((long)unaff_x19 + 0x2f4) = fVar57;
    }
    if ((char)unaff_x19[0x1d] != '\0') {
      fVar51 = *(float *)(unaff_x19 + 199);
                    /* try { // try from 0248b708 to 0258b70f has its CatchHandler @ 0248b9c0 */
      fVar44 = (float)FUN_026fd474(&stack0x00001770,0);
                    /* try { // try from 0248b710 to 0258b74f has its CatchHandler @ 0248b32c */
      fVar51 = fVar51 - fVar49 * fVar44 * (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc));
      *(float *)(unaff_x19 + 199) = fVar51;
      if ((uVar11 != 0) || (unaff_w25 == 0x200b)) {
        *(float *)(unaff_x19 + 199) =
             fVar51 - in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      }
    }
    fVar51 = *(float *)(unaff_x19 + 0x55);
                    /* try { // try from 0248b750 to 0258b757 has its CatchHandler @ 0248bb04 */
    fVar44 = 0.0;
    if (fVar51 != 0.0) {
                    /* try { // try from 0248b760 to 0258b767 has its CatchHandler @ 0248b9b4 */
      fVar44 = (float)FUN_026fd454(&stack0x00001770,0);
      fVar45 = (float)FUN_026fd464(&stack0x00001770,0);
                    /* try { // try from 0248b780 to 0258b78b has its CatchHandler @ 0248b9b8 */
                    /* try { // try from 0248b78c to 0258b7cb has its CatchHandler @ 0248b32c */
      fVar44 = (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
               (fVar51 * 0.5 - fVar49 * (fVar44 * 0.5 + fVar45));
      *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar44;
    }
    if (((unaff_w22 == 0) && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
       ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
      lVar28 = unaff_x19[0x22];
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_02681b9c(lVar28,0,0);
      fVar45 = 0.0;
      if ((uVar17 & 1) != 0) {
        lVar28 = unaff_x19[0x22];
        if (*(int *)(*(long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar30 = (long *)
                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
        ;
        if (lVar28 == 0) goto LAB_02491464;
        uVar17 = FUN_0267e1d8(lVar28,*(undefined4 *)
                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                + 0xb8) + 0x54),0);
        if ((uVar17 & 1) != 0) {
          lVar28 = unaff_x19[0x22];
          if (*(int *)(*plVar30 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            plVar30 = (long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
            ;
          }
          if (lVar28 == 0) goto LAB_02491464;
          fVar51 = (float)FUN_0267f610(lVar28,*(undefined4 *)(*(long *)(*plVar30 + 0xb8) + 0x54),0);
          if ((*unaff_x27 == 0) || (unaff_x19[0x22] == 0)) goto LAB_02491464;
          fVar52 = *(float *)(*unaff_x27 + 0x1b0);
          fVar45 = (float)FUN_0267f610(unaff_x19[0x22],
                                       *(undefined4 *)
                                        (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0xcc),0);
          fVar45 = fVar45 * fVar51 * fVar52 * 0.25;
          if (fVar51 < in_stack_00000130._4_4_ + fVar45) {
            in_stack_00000130._4_4_ = fVar51 - fVar45;
          }
        }
      }
      if (*unaff_x27 == 0) goto LAB_02491464;
      fStack00000000000000c4 = *(float *)(*unaff_x27 + 0x1b4);
    }
    else {
      lVar28 = unaff_x19[0x22];
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_02681b9c(lVar28,0,0);
      fStack00000000000000c4 = 0.0;
      if ((uVar17 & 1) != 0) {
        lVar28 = unaff_x19[0x22];
        if (*(int *)(*(long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar30 = (long *)
                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
        ;
        if (lVar28 == 0) goto LAB_02491464;
        uVar17 = FUN_0267e1d8(lVar28,*(undefined4 *)
                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                + 0xb8) + 0x54),0);
        if ((uVar17 & 1) != 0) {
          lVar28 = unaff_x19[0x22];
          if (*(int *)(*plVar30 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            plVar30 = (long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
            ;
          }
          if (lVar28 == 0) goto LAB_02491464;
          uVar17 = FUN_0267e1d8(lVar28,*(undefined4 *)(*(long *)(*plVar30 + 0xb8) + 0xcc),0);
          if ((uVar17 & 1) != 0) {
            lVar28 = unaff_x19[0x22];
            if (*(int *)(*plVar30 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              plVar30 = (long *)
                        Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
              ;
            }
            if (lVar28 != 0) {
              fVar51 = (float)FUN_0267f610(lVar28,*(undefined4 *)(*(long *)(*plVar30 + 0xb8) + 0x54)
                                           ,0);
              if ((*unaff_x27 != 0) && (unaff_x19[0x22] != 0)) {
                fVar52 = *(float *)(*unaff_x27 + 0x1a8);
                fVar45 = (float)FUN_0267f610(unaff_x19[0x22],
                                             *(undefined4 *)
                                              (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0xcc),0);
                fVar45 = fVar45 * fVar51 * fVar52 * 0.25;
                if (fVar51 < in_stack_00000130._4_4_ + fVar45) {
                  in_stack_00000130._4_4_ = fVar51 - fVar45;
                }
                goto LAB_0248ba68;
              }
            }
            goto LAB_02491464;
          }
        }
      }
      fVar45 = 0.0;
    }
LAB_0248ba68:
    fStack00000000000000ec = *(float *)(unaff_x19 + 199);
    fVar51 = (float)FUN_026fd464(&stack0x00001770,0);
    fStack00000000000000ec =
         fStack00000000000000ec +
         (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
         fVar49 * (fVar53 + ((fVar51 - in_stack_00000130._4_4_) - fVar45));
    fVar53 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar51 = *(float *)((long)unaff_x19 + 0x614) +
             ((in_stack_00000138 + fVar49 * (fVar56 + in_stack_00000130._4_4_ + fVar53)) -
             *(float *)(unaff_x19 + 0x9a));
    fVar53 = (float)FUN_026fd45c(&stack0x00001770,0);
    fVar52 = fVar51 - fVar49 * (in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar53);
    fVar53 = (float)FUN_026fd454(&stack0x00001770,0);
    fVar56 = fStack00000000000000ec +
             (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
             fVar49 * (fVar45 + fVar45 + in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar53)
    ;
    fStack00000000000000e8 = fStack00000000000000ec;
    fVar53 = fVar56;
    if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (unaff_w22 == 0)) &&
       ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
      fVar55 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
      fVar53 = (float)FUN_026fd46c(&stack0x00001770,0);
      fVar54 = fVar55 * fVar49 * (fVar45 + in_stack_00000130._4_4_ + fVar53);
      fVar53 = (float)FUN_026fd46c(&stack0x00001770,0);
      fVar50 = (float)FUN_026fd45c(&stack0x00001770,0);
      fVar51 = fVar51 + 0.0;
      fVar52 = fVar52 + 0.0;
      fVar55 = fVar55 * fVar49 * (((fVar53 - fVar50) - in_stack_00000130._4_4_) - fVar45);
      fVar53 = fVar56 + fVar55;
      fVar50 = fStack00000000000000ec + fVar54;
      fVar46 = (fVar54 - fVar55) * 0.5;
      fStack00000000000000ec = (fStack00000000000000ec + fVar55) - fVar46;
      fVar56 = (fVar56 + fVar54) - fVar46;
      fStack00000000000000e8 = fVar50 - fVar46;
      fVar53 = fVar53 - fVar46;
    }
    if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
      fVar46 = 0.0;
      fVar54 = 0.0;
      fStack00000000000000e0 = 0.0;
      fStack00000000000000e4 = 0.0;
      fVar55 = fVar52;
      fVar50 = fVar51;
    }
    else {
      thunk_FUN_026935f0(_uStack0000000000000060,0);
      fVar58 = (fVar56 + fStack00000000000000ec) * 0.5;
      fVar59 = (fVar52 + fVar51) * 0.5;
      fVar51 = fVar51 - fVar59;
      fStack00000000000000e4 = 0.0;
      fVar50 = fVar51;
      fStack00000000000000e8 =
           (float)FUN_02692df0(fStack00000000000000e8 - fVar58,_uStack0000000000000060,0);
      fStack00000000000000e8 = fVar58 + fStack00000000000000e8;
      fStack00000000000000e4 = fStack00000000000000e4 + 0.0;
      fVar52 = fVar52 - fVar59;
      fStack00000000000000e0 = 0.0;
      fVar55 = fVar52;
      fStack00000000000000ec =
           (float)FUN_02692df0(fStack00000000000000ec - fVar58,_uStack0000000000000060,0);
      fStack00000000000000ec = fVar58 + fStack00000000000000ec;
      fStack00000000000000e0 = fStack00000000000000e0 + 0.0;
      fVar54 = 0.0;
      fVar56 = (float)FUN_02692df0(fVar56 - fVar58,_uStack0000000000000060,0);
      fVar56 = fVar58 + fVar56;
      fVar51 = fVar59 + fVar51;
      fVar54 = fVar54 + 0.0;
      fVar46 = 0.0;
      fVar53 = (float)FUN_02692df0(fVar53 - fVar58,_uStack0000000000000060,0);
      fVar53 = fVar58 + fVar53;
      fVar52 = fVar59 + fVar52;
      fVar46 = fVar46 + 0.0;
      fVar55 = fVar59 + fVar55;
      fVar50 = fVar59 + fVar50;
    }
    if (*in_stack_00000150 == 0) goto LAB_02491464;
    lVar28 = *(long *)(*in_stack_00000150 + 0x38);
    uVar17 = (ulong)(uint)fVar49;
    if (lVar28 == 0) goto LAB_02491464;
    if (*(uint *)(lVar28 + 0x18) <= *unaff_x26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar28 = lVar28 + (int)*unaff_x26 * unaff_x21;
    *(float *)(lVar28 + 0x120) = fVar55;
    *(float *)(lVar28 + 0x11c) = fStack00000000000000ec;
    *(float *)(lVar28 + 0x124) = fStack00000000000000e0;
    if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar28 + 0x18) <= *unaff_x26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar28 = lVar28 + (int)*unaff_x26 * unaff_x21;
    *(float *)(lVar28 + 0x114) = fVar50;
    *(float *)(lVar28 + 0x110) = fStack00000000000000e8;
    *(float *)(lVar28 + 0x118) = fStack00000000000000e4;
    if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar28 + 0x18) <= *unaff_x26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar28 = lVar28 + (int)*unaff_x26 * unaff_x21;
    *(float *)(lVar28 + 0x128) = fVar56;
    *(float *)(lVar28 + 300) = fVar51;
    *(float *)(lVar28 + 0x130) = fVar54;
    if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar28 + 0x18) <= *unaff_x26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar28 = lVar28 + (int)*unaff_x26 * unaff_x21;
    *(float *)(lVar28 + 0x134) = fVar53;
    *(float *)(lVar28 + 0x138) = fVar52;
    *(float *)(lVar28 + 0x13c) = fVar46;
    if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
    goto LAB_02491464;
    uVar27 = *unaff_x26;
    lVar29 = (long)(int)uVar27;
    if (*(uint *)(lVar28 + 0x18) <= uVar27)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar35 = lVar28 + lVar29 * unaff_x21;
    *(int *)(lVar35 + 0x140) = (int)unaff_x19[199];
    fVar51 = *(float *)(unaff_x19 + 0x9a);
    uVar18 = (ulong)(uint)fVar51;
    fVar53 = *(float *)((long)unaff_x19 + 0x614);
    *(float *)(lVar35 + 0x15c) = (fVar56 - fStack00000000000000ec) / (fVar50 - fVar55);
    *(float *)(lVar35 + 0x14c) = (in_stack_00000138 - fVar51) + fVar53;
    in_stack_00000128 = in_stack_00000128 * fVar49;
    if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
      in_stack_00000128 = in_stack_00000128 / in_stack_00000100;
      in_stack_00000120 = (in_stack_00000120 * fVar49) / in_stack_00000100;
    }
    else {
      in_stack_00000120 = in_stack_00000120 * fVar49;
    }
    uVar24 = *(uint *)(unaff_x19 + 0x92);
    bVar8 = uVar11 != 0;
    in_stack_00000128 = fVar53 + in_stack_00000128;
    bVar9 = uVar27 != uVar24;
    if (bVar9 && bVar8) {
      fVar53 = *(float *)(unaff_x19 + 0x98);
      lVar28 = lVar28 + lVar29 * unaff_x21;
      *(float *)(lVar28 + 0x154) = fVar53;
      in_stack_00000120 = *(float *)((long)unaff_x19 + 0x4c4);
      *(float *)(lVar28 + 0x148) = fVar53 - fVar51;
      *(float *)(lVar28 + 0x158) = in_stack_00000120;
      *(float *)(unaff_x19 + 0x97) = fVar53 - fVar51;
      in_stack_00000120 = in_stack_00000120 - fVar51;
      *(float *)(lVar28 + 0x150) = in_stack_00000120;
    }
    else {
      in_stack_00000120 = fVar53 + in_stack_00000120;
      fVar56 = in_stack_00000128;
      fVar52 = in_stack_00000120;
      if (fVar53 != 0.0) {
        fVar56 = (in_stack_00000128 - fVar53) / *(float *)((long)unaff_x19 + 0x3fc);
        fVar52 = (in_stack_00000120 - fVar53) / *(float *)((long)unaff_x19 + 0x3fc);
        if (fVar56 <= in_stack_00000128) {
          fVar56 = in_stack_00000128;
        }
        if (in_stack_00000120 <= fVar52) {
          fVar52 = in_stack_00000120;
        }
      }
      lVar28 = lVar28 + lVar29 * unaff_x21;
      fVar53 = fVar56;
      if (fVar56 <= *(float *)(unaff_x19 + 0x98)) {
        fVar53 = *(float *)(unaff_x19 + 0x98);
      }
      fVar50 = fVar52;
      if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar52) {
        fVar50 = *(float *)((long)unaff_x19 + 0x4c4);
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar50;
      in_stack_00000120 = in_stack_00000120 - fVar51;
      *(float *)(unaff_x19 + 0x98) = fVar53;
      *(float *)(lVar28 + 0x154) = fVar56;
      *(float *)(lVar28 + 0x158) = fVar52;
      *(float *)(lVar28 + 0x148) = in_stack_00000128 - fVar51;
      *(float *)(unaff_x19 + 0x97) = in_stack_00000128 - fVar51;
      *(float *)(lVar28 + 0x150) = in_stack_00000120;
    }
    *(float *)((long)unaff_x19 + 0x4bc) = in_stack_00000120;
    if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
      if (!bVar9 || !bVar8) {
        *(float *)(unaff_x19 + 0x96) = fVar53;
        if (unaff_x19[0x1f] != 0) {
          fVar53 = *(float *)((long)unaff_x19 + 0x4b4);
          fVar56 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
          in_stack_00000100 = (fVar49 * fVar56) / in_stack_00000100;
          uVar18 = (ulong)*(uint *)(unaff_x19 + 0x9a);
          if (fVar53 <= in_stack_00000100) {
            fVar53 = in_stack_00000100;
          }
          *(float *)((long)unaff_x19 + 0x4b4) = fVar53;
          goto LAB_0248bef4;
        }
        goto LAB_02491464;
      }
    }
    else {
LAB_0248bef4:
      if ((!bVar9 || !bVar8) && (float)uVar18 == 0.0) {
        fVar53 = *(float *)(in_stack_00000070 + 0x208);
        if (*(float *)(in_stack_00000070 + 0x208) <= in_stack_00000128) {
          fVar53 = in_stack_00000128;
        }
        *(float *)(in_stack_00000070 + 0x208) = fVar53;
      }
    }
    lVar28 = *in_stack_00000150;
    if ((lVar28 == 0) || (lVar29 = *(long *)(lVar28 + 0x38), lVar29 == 0)) goto LAB_02491464;
    uVar2 = *unaff_x26;
    if (*(uint *)(lVar29 + 0x18) <= uVar2)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar29 = lVar29 + (int)uVar2 * unaff_x21;
    *(undefined1 *)(lVar29 + 0x194) = 0;
    uVar33 = *(uint *)(unaff_x19 + 0x4e);
    uVar61 = unaff_w25;
    if ((unaff_w25 == 9) ||
       (((((uVar11 == 0 && (unaff_w25 != 3)) && (unaff_w25 != 0x200b)) && (unaff_w25 != 0xad)) ||
        (((unaff_w25 == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
         (*(int *)((long)unaff_x19 + 0x63c) == 1)))))) {
      *(undefined1 *)(lVar29 + 0x194) = 1;
      pfVar31 = in_stack_00000088;
      pfVar36 = _fStack0000000000000098;
      if (unaff_w20 != 0) {
        lVar28 = *(long *)(lVar28 + 0x50);
        if (lVar28 == 0) goto LAB_02491464;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        pfVar36 = (float *)(lVar28 + 0x60);
        pfVar31 = (float *)(lVar28 + 100);
      }
      fVar56 = *pfVar36;
      fVar51 = *pfVar31;
      fVar53 = *(float *)(unaff_x19 + 0x6b);
      fVar52 = *(float *)(unaff_x19 + 199);
      in_stack_000000d8._4_4_ = (fStack0000000000000090 - fVar56) - fVar51;
      bVar8 = true;
      if ((fVar53 <= in_stack_000000d8._4_4_) && (bVar8 = false, !NAN(fVar53))) {
        bVar8 = fVar53 == -1.0;
      }
      if (!bVar8) {
        in_stack_000000d8._4_4_ = fVar53;
      }
      fVar53 = 0.0;
      if ((char)unaff_x19[0x1d] == '\0') {
        fVar53 = (float)FUN_026fd474(&stack0x00001770,0);
        uVar18 = (ulong)*(uint *)(unaff_x19 + 0x9a);
      }
      fVar46 = *(float *)((long)unaff_x19 + 0x4c4);
      fVar50 = *(float *)((long)unaff_x19 + 0x2cc);
      fVar55 = (float)uVar18;
      if (unaff_w25 != 0xad) {
        unaff_s9 = fVar49;
      }
      fVar54 = 0.0;
      if ((0.0 < fVar55) && (fVar54 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar54 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      fVar54 = (*(float *)(unaff_x19 + 0x96) - (fVar46 - fVar55)) + fVar54;
      uVar2 = *in_stack_00000148;
      if (fVar54 <= in_stack_000000a0) {
switchD_0248c274_caseD_2:
        plVar30 = (long *)System_Threading_Mutex_TypeInfo;
        fVar55 = 1.0 - fVar50;
        uVar18 = (ulong)(uint)fVar55;
        fVar52 = ABS(fVar52) + fVar53 * fVar55 * unaff_s9;
        fVar53 = _DAT_0294c6e8;
        if ((uVar33 & 0x18) == 0) {
          fVar53 = 1.0;
        }
        if (fVar52 <= fVar53 * in_stack_000000d8._4_4_) {
LAB_0248cf18:
          if (unaff_w25 == 0xad) {
            if ((*in_stack_00000150 != 0) &&
               (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 != 0)) {
              if (*in_stack_00000148 < *(uint *)(lVar28 + 0x18)) {
                *(undefined1 *)(lVar28 + (int)*in_stack_00000148 * unaff_x21 + 0x194) = 0;
                goto FUN_0248d088;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            }
            goto LAB_02491464;
          }
          if (unaff_w25 != 9) {
            if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
              (**(code **)(*unaff_x19 + 0x8c8))();
            }
            else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
              (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000130._4_4_,fVar45);
            }
            uVar2 = *in_stack_00000148;
            if (((uint)fStack0000000000000058 & 1) != 0) {
              *(uint *)(in_stack_00000070 + 0x1f0) = uVar2;
            }
            *(uint *)((long)unaff_x19 + 0x49c) = uVar2;
            *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
            if ((unaff_x19[0x6c] != 0) && (lVar28 = *(long *)(unaff_x19[0x6c] + 0x50), lVar28 != 0))
            {
              if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar28 + 0x18)) {
                lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                fStack0000000000000058 = 0.0;
                *(float *)(lVar28 + 0x60) = fVar56;
                *(float *)(lVar28 + 100) = fVar51;
                goto FUN_0248d088;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            }
            goto LAB_02491464;
          }
          lVar28 = *in_stack_00000150;
          if ((lVar28 == 0) || (lVar29 = *(long *)(lVar28 + 0x38), lVar29 == 0)) goto LAB_02491464;
          uVar2 = *in_stack_00000148;
          if (uVar2 < *(uint *)(lVar29 + 0x18)) {
            *(undefined1 *)(lVar29 + (int)uVar2 * unaff_x21 + 0x194) = 0;
            *(uint *)((long)unaff_x19 + 0x49c) = uVar2;
            lVar29 = *(long *)(lVar28 + 0x50);
            if (lVar29 != 0) {
              if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar29 + 0x18)) {
                lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                *(int *)(lVar29 + 0x2c) = *(int *)(lVar29 + 0x2c) + 1;
                goto LAB_0248cf8c;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            }
            goto LAB_02491464;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        if (((char)unaff_x19[0x5a] == '\0') || (uVar2 == *(uint *)(unaff_x19 + 0x92))) {
          if (((char)unaff_x19[0x46] != '\0') &&
             (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            fVar46 = *(float *)(unaff_x19 + 0x59) / 100.0;
            if (fVar50 < fVar46) {
              fVar49 = fVar52 / fVar55;
              if (fVar50 <= 0.0) {
                fVar49 = fVar52;
              }
              fVar50 = fVar50 + (fVar52 - fVar53 * (in_stack_000000d8._4_4_ + DAT_02958218)) /
                                fVar49;
              goto LAB_0249154c;
            }
            fVar55 = *(float *)((long)unaff_x19 + 0x1dc);
            uVar18 = (ulong)(uint)fVar55;
            fVar50 = *(float *)(unaff_x19 + 0x49);
            if (fVar55 <= fVar50) goto LAB_0248c3dc;
LAB_024914c0:
            fVar49 = (fVar55 - *(float *)(unaff_x19 + 0x47)) * 0.5;
            if (fVar49 <= DAT_028aa298) {
              fVar49 = DAT_028aa298;
            }
            *(float *)((long)unaff_x19 + 0x234) = fVar55;
            fVar53 = (fVar55 - fVar49) * 20.0 + 0.5;
            fVar49 = DAT_02958220;
            if (fVar53 != INFINITY) {
              fVar49 = (float)(int)fVar53 / 20.0;
            }
            if (fVar49 <= fVar50) {
              fVar49 = fVar50;
            }
LAB_0248e598:
            *(float *)((long)unaff_x19 + 0x1dc) = fVar49;
            return;
          }
LAB_0248c3dc:
          iVar12 = (int)unaff_x19[0x5b];
          if (iVar12 == 1) {
            lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar28 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar28 = *plVar30;
            }
            plVar43 = (long *)StringLiteral_302;
            lVar29 = *(long *)(lVar28 + 0xb8);
            lVar28 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
            if ((*(byte *)(lVar28 + 0x132) & 1) == 0) {
              lVar28 = FUN_00d5941c(lVar28);
            }
            lVar28 = *(long *)(*(long *)(lVar28 + 0xc0) + 8);
            if ((*(byte *)(lVar28 + 0x132) & 1) == 0) {
              lVar28 = FUN_00d5941c();
            }
            piVar20 = (int *)thunk_FUN_00d32ed4(lVar29 + 0x11f0,*(long *)(lVar28 + 0x80) + 0xa0);
            if (*piVar20 == 0) goto LAB_0248e4bc;
            lVar28 = *plVar30;
            if (*(int *)(lVar28 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar28 = *plVar30;
            }
            FUN_013b8de4(*(long *)(lVar28 + 0xb8) + 0x11f0,&stack0x00000880,
                         *(undefined8 *)
                          Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                        );
            memcpy(&stack0x00000c70,&stack0x00000880,0x378);
            goto LAB_0248c8f4;
          }
          if (iVar12 != 6) {
            if (iVar12 == 3) {
              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              goto LAB_0248c524;
            }
            goto LAB_0248cf18;
          }
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar43 = (long *)StringLiteral_302;
          in_stack_00001788 = FUN_024d66ec();
          lVar28 = unaff_x19[0x5c];
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              );
          }
          uVar17 = FUN_02681b9c(lVar28,0,0);
          if ((uVar17 & 1) != 0) {
            plVar41 = (long *)unaff_x19[0x5c];
            uVar19 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar41 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar41 + 0x558))(plVar41,uVar19,*(undefined8 *)(*plVar41 + 0x560));
            lVar28 = unaff_x19[0x5c];
            if (lVar28 == 0) goto LAB_02491464;
            *(int *)(lVar28 + 0x3f8) = (int)unaff_x19[0x7f];
            FUN_024c910c(lVar28,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
            plVar41 = (long *)unaff_x19[0x5c];
            if (plVar41 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
LAB_0248ca1c:
          uVar17 = uVar18;
          in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
        }
        else {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
            lVar28 = *in_stack_00000150;
            if ((lVar28 == 0) || (lVar29 = *(long *)(lVar28 + 0x38), lVar29 == 0))
            goto LAB_02491464;
            if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fVar50 = *(float *)(unaff_x19 + 0x9a);
            fVar55 = 0.0;
            if ((0.0 < fVar50) && (fVar55 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
              fVar55 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
            }
            fVar55 = in_stack_000000c8 * *(float *)(unaff_x19 + 0x56) +
                     *(float *)(lVar29 + (int)*in_stack_00000148 * unaff_x21 + 0x154) +
                     (fVar55 - *(float *)((long)unaff_x19 + 0x4c4)) +
                     fStack0000000000000054 *
                     (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
          }
          else {
            lVar28 = unaff_x19[0x6c];
            *(undefined1 *)((long)unaff_x19 + 700) = 1;
            if (lVar28 == 0) goto LAB_02491464;
            fVar50 = *(float *)(unaff_x19 + 0x9a);
            fVar55 = *(float *)(unaff_x19 + 0x57) + in_stack_000000c8 * *(float *)(unaff_x19 + 0x56)
            ;
          }
          puVar7 = System_Threading_Mutex_TypeInfo;
          lVar28 = *(long *)(lVar28 + 0x38);
          if (lVar28 == 0) goto LAB_02491464;
          uVar42 = *(uint *)((long)unaff_x19 + 0x48c);
          if ((*(uint *)(lVar28 + 0x18) <= uVar42) ||
             (uVar34 = uVar42 - 1, *(uint *)(lVar28 + 0x18) <= uVar34))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar18 = (ulong)(uint)(fVar55 + *(float *)(unaff_x19 + 0x96));
          fVar54 = (fVar55 + *(float *)(unaff_x19 + 0x96) + fVar50) -
                   *(float *)(lVar28 + (int)uVar42 * unaff_x21 + 0x158);
          if (((in_stack_00000068._4_1_ & 1) != 0 ||
               *(short *)(lVar28 + (long)(int)uVar34 * (long)iVar10 + 0x20) != 0xad) ||
             ((in_stack_000000a0 <= fVar54 && ((int)unaff_x19[0x5b] != 0)))) {
            if (*(short *)(lVar28 + (int)uVar42 * unaff_x21 + 0x20) == 0xad) {
              in_stack_00000068._4_1_ = 1;
              plVar30 = (long *)System_Threading_Mutex_TypeInfo;
              plVar43 = (long *)StringLiteral_302;
              uVar17 = uVar18;
            }
            else {
              if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
                fVar50 = *(float *)((long)unaff_x19 + 0x2cc);
                fVar46 = *(float *)(unaff_x19 + 0x59) / 100.0;
                if ((fVar46 <= fVar50) ||
                   ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
                  fVar55 = *(float *)((long)unaff_x19 + 0x1dc);
                  uVar18 = (ulong)(uint)fVar55;
                  fVar50 = *(float *)(unaff_x19 + 0x49);
                  if ((fVar50 < fVar55) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_024914c0;
                  goto LAB_0248cc70;
                }
LAB_0249155c:
                fVar49 = fVar52;
                if (0.0 < fVar50) {
                  fVar49 = fVar52 / (1.0 - fVar50);
                }
                fVar50 = fVar50 + (fVar52 - fVar53 * (in_stack_000000d8._4_4_ + DAT_02958218)) /
                                  fVar49;
LAB_0249154c:
                if (fVar46 <= fVar50) {
                  fVar50 = fVar46;
                }
                *(float *)((long)unaff_x19 + 0x2cc) = fVar50;
                return;
              }
LAB_0248cc70:
              lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar28 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar28 = *(long *)puVar7;
              }
              iVar12 = *(int *)(*(long *)(lVar28 + 0xb8) + 0xe78);
              if ((((float)iVar12 != fStack0000000000000034) && (iVar12 != -1)) &&
                 (((bStack000000000000005c ^ 1) & 1) == 0)) {
                if (*(int *)(lVar28 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                in_stack_00001788 = FUN_024d66ec();
                if ((unaff_x19[0x6c] == 0) ||
                   (lVar28 = *(long *)(unaff_x19[0x6c] + 0x38), lVar28 == 0)) goto LAB_02491464;
                uVar42 = *in_stack_00000148 - 1;
                if (*(uint *)(lVar28 + 0x18) <= uVar42)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                fStack0000000000000034 = (float)iVar12;
                if (*(short *)(lVar28 + (long)(int)uVar42 * (long)iVar10 + 0x20) == 0xad) {
                  in_stack_00000068._4_1_ = 0;
                  in_stack_000017a8 = CONCAT44(0x2d,uVar42);
                  *in_stack_00000148 = uVar42;
                  plVar30 = (long *)System_Threading_Mutex_TypeInfo;
                  plVar43 = (long *)StringLiteral_302;
                  uVar17 = uVar18;
                  in_stack_00001788 = in_stack_00001788 - 1;
                  goto LAB_0248ab98;
                }
              }
              if (in_stack_000000a0 < fVar54) {
                if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                  *(undefined4 *)((long)unaff_x19 + 0x2dc) =
                       *(undefined4 *)((long)unaff_x19 + 0x48c);
                }
                plVar43 = (long *)StringLiteral_302;
                plVar30 = (long *)System_Threading_Mutex_TypeInfo;
                if ((char)unaff_x19[0x46] != '\0') {
                  fVar50 = *(float *)(unaff_x19 + 0x58);
                  if ((fVar50 < *(float *)((long)unaff_x19 + 0x2b4)) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                    fVar49 = *(float *)((long)unaff_x19 + 0x2b4) +
                             ((in_stack_00000018._4_4_ - fVar54) / (float)((int)unaff_x19[0x94] + 1)
                             ) / fStack0000000000000054;
                    if (fVar49 <= fVar50) {
                      fVar49 = fVar50;
                    }
LAB_0248ea5c:
                    *(float *)((long)unaff_x19 + 0x2b4) = fVar49;
                    return;
                  }
                  fVar50 = *(float *)((long)unaff_x19 + 0x2cc);
                  fVar46 = *(float *)(unaff_x19 + 0x59) / 100.0;
                  if ((fVar50 < fVar46) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_0249155c;
                  fVar55 = *(float *)((long)unaff_x19 + 0x1dc);
                  uVar18 = (ulong)(uint)fVar55;
                  fVar50 = *(float *)(unaff_x19 + 0x49);
                  if ((fVar50 < fVar55) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_024914c0;
                }
                switch((int)unaff_x19[0x5b]) {
                case 0:
                case 2:
                case 4:
                  FUN_024d7014(fStack0000000000000054,uVar17,in_stack_000000c8,
                               *(undefined4 *)((long)unaff_x19 + 0x2f4),fStack00000000000000c4,
                               fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048
                              );
                  break;
                case 1:
                  lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
                  if (*(int *)(lVar28 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar28 = *plVar30;
                  }
                  lVar29 = *(long *)(lVar28 + 0xb8);
                  lVar28 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                  if ((*(byte *)(lVar28 + 0x132) & 1) == 0) {
                    lVar28 = FUN_00d5941c(lVar28);
                  }
                  lVar28 = *(long *)(*(long *)(lVar28 + 0xc0) + 8);
                  if ((*(byte *)(lVar28 + 0x132) & 1) == 0) {
                    lVar28 = FUN_00d5941c();
                  }
                  piVar20 = (int *)thunk_FUN_00d32ed4(lVar29 + 0x11f0,
                                                      *(long *)(lVar28 + 0x80) + 0xa0);
                  if (*piVar20 == 0) {
                    in_stack_00000068._4_1_ = 0;
                    goto LAB_0248e4bc;
                  }
                  lVar28 = *plVar30;
                  if (*(int *)(lVar28 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar28 = *plVar30;
                  }
                  FUN_013b8de4(*(long *)(lVar28 + 0xb8) + 0x11f0,&stack0x00000880,
                               *(undefined8 *)
                                Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                              );
                  memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
                  iVar12 = FUN_024d66ec();
                  in_stack_00000068._4_1_ = 0;
                  goto LAB_0248c900;
                case 3:
                  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  in_stack_00001788 = FUN_024d66ec();
                  in_stack_00000068._4_1_ = 0;
                  goto LAB_0248c628;
                case 5:
                  *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
                  FUN_024d7014(fStack0000000000000054,uVar17,in_stack_000000c8,
                               *(undefined4 *)((long)unaff_x19 + 0x2f4),fStack00000000000000c4,
                               fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048
                              );
                  *(undefined4 *)(unaff_x19 + 0x99) = 0;
                  *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                  *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
                  *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                  break;
                case 6:
                  lVar28 = unaff_x19[0x5c];
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar17 = FUN_02681b9c(lVar28,0,0);
                  if ((uVar17 & 1) != 0) {
                    plVar41 = (long *)unaff_x19[0x5c];
                    uVar19 = (**(code **)(*unaff_x19 + 0x548))();
                    if (plVar41 == (long *)0x0) goto LAB_02491464;
                    (**(code **)(*plVar41 + 0x558))
                              (plVar41,uVar19,*(undefined8 *)(*plVar41 + 0x560));
                    lVar28 = unaff_x19[0x5c];
                    if (lVar28 == 0) goto LAB_02491464;
                    *(int *)(lVar28 + 0x3f8) = (int)unaff_x19[0x7f];
                    FUN_024c910c(lVar28,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                    plVar41 = (long *)unaff_x19[0x5c];
                    if (plVar41 == (long *)0x0) goto LAB_02491464;
                    (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
                    *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                  }
                  in_stack_00000068._4_1_ = 0;
                  goto LAB_0248ca1c;
                default:
                  in_stack_00000068._4_1_ = 0;
                  goto LAB_0248cf18;
                }
                in_stack_00000068._4_1_ = 0;
                bStack000000000000005c = 1;
                fStack0000000000000058 = 1.4013e-45;
                plVar30 = (long *)System_Threading_Mutex_TypeInfo;
                plVar43 = (long *)StringLiteral_302;
              }
              else {
                FUN_024d7014(fStack0000000000000054,uVar17,in_stack_000000c8,
                             *(undefined4 *)((long)unaff_x19 + 0x2f4),fStack00000000000000c4,
                             fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
                bStack000000000000005c = 1;
                in_stack_00000068._4_1_ = 0;
                fStack0000000000000058 = 1.4013e-45;
                plVar30 = (long *)System_Threading_Mutex_TypeInfo;
                plVar43 = (long *)StringLiteral_302;
              }
            }
          }
          else {
            in_stack_00000068._4_1_ = 0;
            in_stack_000017a8 = CONCAT44(0x2d,uVar34);
            *in_stack_00000148 = uVar34;
            plVar30 = (long *)System_Threading_Mutex_TypeInfo;
            plVar43 = (long *)StringLiteral_302;
            uVar17 = uVar18;
            in_stack_00001788 = in_stack_00001788 - 1;
          }
        }
      }
      else {
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(uint *)((long)unaff_x19 + 0x2dc) = uVar2;
        }
        plVar43 = (long *)StringLiteral_302;
        plVar30 = (long *)System_Threading_Mutex_TypeInfo;
        uVar19 = DAT_02941c08;
        if ((char)unaff_x19[0x46] != '\0') {
          fVar58 = *(float *)(unaff_x19 + 0x58);
          if (((fVar58 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar55)) &&
             (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            fVar49 = *(float *)((long)unaff_x19 + 0x2b4) +
                     ((in_stack_00000018._4_4_ - fVar54) / (float)(int)unaff_x19[0x94]) /
                     fStack0000000000000054;
            if (fVar49 <= fVar58) {
              fVar49 = fVar58;
            }
            goto LAB_0248ea5c;
          }
          fVar54 = *(float *)((long)unaff_x19 + 0x1dc);
          fVar55 = *(float *)(unaff_x19 + 0x49);
          uVar18 = (ulong)(uint)fVar55;
          if ((fVar55 < fVar54) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            fVar49 = (fVar54 - *(float *)(unaff_x19 + 0x47)) * 0.5;
            if (fVar49 <= DAT_028aa298) {
              fVar49 = DAT_028aa298;
            }
            fVar53 = (fVar54 - fVar49) * 20.0 + 0.5;
            fVar49 = DAT_02958220;
            if (fVar53 != INFINITY) {
              fVar49 = (float)(int)fVar53 / 20.0;
            }
            if (fVar49 <= fVar55) {
              fVar49 = fVar55;
            }
            *(float *)((long)unaff_x19 + 0x234) = fVar54;
            goto LAB_0248e598;
          }
        }
        switch((int)unaff_x19[0x5b]) {
        case 1:
          lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(lVar28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar28 = *plVar30;
          }
          lVar29 = *(long *)(lVar28 + 0xb8);
          lVar28 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
          if ((*(byte *)(lVar28 + 0x132) & 1) == 0) {
            lVar28 = FUN_00d5941c(lVar28);
          }
          plVar43 = (long *)StringLiteral_302;
          lVar28 = *(long *)(*(long *)(lVar28 + 0xc0) + 8);
          if ((*(byte *)(lVar28 + 0x132) & 1) == 0) {
            lVar28 = FUN_00d5941c();
          }
          piVar20 = (int *)thunk_FUN_00d32ed4(lVar29 + 0x11f0,*(long *)(lVar28 + 0x80) + 0xa0);
          if (*piVar20 == 0) {
LAB_0248e4bc:
            in_stack_000017a8 = DAT_02941c08;
            in_stack_00000148[0] = 0;
            in_stack_00000148[1] = 0;
            uVar17 = uVar18;
            in_stack_00001788 = 0xffffffff;
          }
          else {
            lVar28 = *plVar30;
            if (*(int *)(lVar28 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar28 = *plVar30;
            }
            FUN_013b8de4(*(long *)(lVar28 + 0xb8) + 0x11f0,&stack0x00000880,
                         *(undefined8 *)
                          Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                        );
            memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_0248c8f4:
            iVar12 = FUN_024d66ec();
LAB_0248c900:
            iVar13 = *(int *)((long)unaff_x19 + 0x48c) + -1;
            *(int *)((long)unaff_x19 + 0x48c) = iVar13;
            in_stack_00000140._4_4_ = in_stack_00000140._4_4_ + 1;
            uVar17 = uVar18;
            in_stack_00001788 = iVar12 - 1;
            in_stack_000017a8 = CONCAT44(0x2026,iVar13);
          }
          goto LAB_0248ab98;
        default:
          goto switchD_0248c274_caseD_2;
        case 3:
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
LAB_0248c524:
          plVar43 = (long *)StringLiteral_302;
          in_stack_00001788 = FUN_024d66ec();
          break;
        case 5:
          if ((uVar2 == 0) || ((int)in_stack_00001788 < 0)) {
            *in_stack_00000148 = 0;
            plVar30 = (long *)System_Threading_Mutex_TypeInfo;
            plVar43 = (long *)StringLiteral_302;
            uVar17 = uVar18;
            in_stack_00001788 = 0xffffffff;
            in_stack_000017a8 = uVar19;
          }
          else {
            fVar53 = *(float *)(unaff_x19 + 0x98);
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            in_stack_00001788 = FUN_024d66ec();
            if (in_stack_000000a0 < fVar53 - fVar46) break;
            *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
            *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
            uVar17 = *(ulong *)(*(long *)(*plVar30 + 0xb8) + 0x15a8);
            *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
            *(undefined4 *)(unaff_x19 + 0x99) = 0;
            lVar28 = NEON_rev64(uVar17,4);
            unaff_x19[0x98] = lVar28;
            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
            *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
            *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
            *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          }
          goto LAB_0248ab98;
        case 6:
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          plVar43 = (long *)StringLiteral_302;
          lVar28 = unaff_x19[0x5c];
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              );
          }
          uVar17 = FUN_02681b9c(lVar28,0,0);
          if ((uVar17 & 1) != 0) {
            plVar41 = (long *)unaff_x19[0x5c];
            uVar19 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar41 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar41 + 0x558))(plVar41,uVar19,*(undefined8 *)(*plVar41 + 0x560));
            lVar28 = unaff_x19[0x5c];
            if (lVar28 == 0) goto LAB_02491464;
            *(int *)(lVar28 + 0x3f8) = (int)unaff_x19[0x7f];
            FUN_024c910c(lVar28,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
            plVar41 = (long *)unaff_x19[0x5c];
            if (plVar41 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
        }
LAB_0248c628:
        uVar17 = uVar18;
        in_stack_000017a8 = CONCAT44(3,uVar2);
      }
    }
    else {
      if (((unaff_w25 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
        fVar53 = 0.0;
        if ((0.0 < (float)uVar18) && (fVar53 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar53 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        uVar17 = (ulong)(uint)in_stack_000000a0;
        if (in_stack_000000a0 <
            (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - (float)uVar18)) +
            fVar53) {
          if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
            *(uint *)((long)unaff_x19 + 0x2dc) = uVar2;
          }
          plVar43 = (long *)StringLiteral_302;
          plVar30 = (long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          lVar28 = unaff_x19[0x5c];
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              );
          }
          uVar18 = FUN_02681b9c(lVar28,0,0);
          if ((uVar18 & 1) != 0) {
            plVar41 = (long *)unaff_x19[0x5c];
            uVar19 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar41 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar41 + 0x558))(plVar41,uVar19,*(undefined8 *)(*plVar41 + 0x560));
            lVar28 = unaff_x19[0x5c];
            if (lVar28 == 0) goto LAB_02491464;
            *(int *)(lVar28 + 0x3f8) = (int)unaff_x19[0x7f];
            FUN_024c910c(lVar28,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
            plVar41 = (long *)unaff_x19[0x5c];
            if (plVar41 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
          in_stack_000017a8 = CONCAT44(3,uVar2);
          goto LAB_0248ab98;
        }
      }
      if ((((unaff_w25 - 0x2007 < 0x23) &&
           ((1L << ((ulong)(unaff_w25 - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
          (unaff_w25 - 10 < 2)) || (unaff_w25 == 0xa0)) {
UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs:
        if (((unaff_w25 != 0xad) && (unaff_w25 != 0x200b)) && (unaff_w25 != 0x2060)) {
          lVar28 = *in_stack_00000150;
          if ((lVar28 == 0) || (lVar29 = *(long *)(lVar28 + 0x50), lVar29 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
          *(int *)(lVar29 + 0x2c) = *(int *)(lVar29 + 0x2c) + 1;
          *(int *)(lVar28 + 0x20) = *(int *)(lVar28 + 0x20) + 1;
        }
      }
      else {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_016fa418(unaff_w25,0);
        if ((uVar17 & 1) != 0)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs;
      }
      if (unaff_w25 == 0xa0) {
        if ((*in_stack_00000150 == 0) ||
           (lVar28 = *(long *)(*in_stack_00000150 + 0x50), lVar28 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_0248cf8c:
        *(int *)(lVar28 + 0x20) = *(int *)(lVar28 + 0x20) + 1;
      }
FUN_0248d088:
      if (((int)unaff_x19[0x5b] == 1) && ((unaff_w25 == 0x2d || (unaff_w20 != 1)))) {
        if (unaff_x19[0xca] == 0) goto LAB_02491464;
        fVar53 = *(float *)(unaff_x19 + 0x3c);
        iVar12 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
        if (unaff_x19[0xca] == 0) goto LAB_02491464;
        fVar51 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
        lVar28 = unaff_x19[0xc9];
        fVar56 = in_stack_00000080._4_4_;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar56 = 1.0;
        }
        if ((lVar28 == 0) || (*(long *)(lVar28 + 0x20) == 0)) goto LAB_02491464;
        fVar52 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar55 = *(float *)(lVar28 + 0x2c);
        fVar45 = (float)FUN_026fd668(*(long *)(lVar28 + 0x20),0);
        fVar50 = *_fStack0000000000000098;
        fVar45 = fVar52 * (fVar53 / (float)iVar12) * fVar51 * fVar56 * fVar55 * fVar45;
        fVar53 = *in_stack_00000088;
        if ((unaff_w25 == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
          if ((*in_stack_00000150 == 0) ||
             (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0)) goto LAB_02491464;
          uVar2 = *(int *)((long)unaff_x19 + 0x48c) - 1;
          if (*(uint *)(lVar28 + 0x18) <= uVar2)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          if (unaff_x19[0xca] == 0) goto LAB_02491464;
          fVar56 = *(float *)(lVar28 + (long)(int)uVar2 * (long)iVar10 + 0x60);
          iVar12 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
          if (unaff_x19[0xca] == 0) goto LAB_02491464;
          fVar52 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
          lVar28 = unaff_x19[0xc9];
          fVar51 = in_stack_00000080._4_4_;
          if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
            fVar51 = 1.0;
          }
          if ((lVar28 == 0) || (*(long *)(lVar28 + 0x20) == 0)) goto LAB_02491464;
          fVar55 = *(float *)((long)unaff_x19 + 0x3fc);
          fVar46 = *(float *)(lVar28 + 0x2c);
          fVar45 = (float)FUN_026fd668(*(long *)(lVar28 + 0x20),0);
          if ((*in_stack_00000150 == 0) ||
             (lVar28 = *(long *)(*in_stack_00000150 + 0x50), lVar28 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
          fVar50 = *(float *)(lVar28 + 0x60);
          fVar53 = *(float *)(lVar28 + 100);
          fVar45 = fVar55 * (fVar56 / (float)iVar12) * fVar52 * fVar51 * fVar46 * fVar45;
        }
        fVar55 = *(float *)(unaff_x19 + 0x9a);
        fVar51 = *(float *)(unaff_x19 + 0x96);
        fVar46 = *(float *)((long)unaff_x19 + 0x4c4);
        fVar56 = 0.0;
        fVar52 = 0.0;
        if ((0.0 < fVar55) && (fVar52 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar52 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        fVar54 = *(float *)(unaff_x19 + 199);
        if ((char)unaff_x19[0x1d] == '\0') {
          if ((unaff_x19[0xc9] == 0) || (lVar28 = *(long *)(unaff_x19[0xc9] + 0x20), lVar28 == 0))
          goto LAB_02491464;
          FUN_026fd62c(&stack0x00000880,lVar28,0);
          unaff_x28[0x1cd] = unaff_x28[1];
          unaff_x28[0x1cc] = *unaff_x28;
          fVar56 = (float)FUN_026fd474(&stack0x000016e0,0);
        }
        puVar7 = System_Threading_Mutex_TypeInfo;
        fVar58 = *(float *)(unaff_x19 + 0x6b);
        fVar53 = (fStack0000000000000090 - fVar50) - fVar53;
        bVar8 = true;
        if ((fVar58 <= fVar53) && (bVar8 = false, !NAN(fVar58))) {
          bVar8 = fVar58 == -1.0;
        }
        if (!bVar8) {
          fVar53 = fVar58;
        }
        fVar50 = _DAT_0294c6e8;
        if ((uVar33 & 0x18) == 0) {
          fVar50 = 1.0;
        }
        if (((fVar51 - (fVar46 - fVar55)) + fVar52 < in_stack_000000a0) &&
           (ABS(fVar54) + fVar45 * fVar56 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
            fVar50 * fVar53)) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_024d69d4();
          lVar28 = *(long *)(*(long *)puVar7 + 0xb8);
          memcpy(&stack0x00000508,(void *)(lVar28 + 0x788),0x378);
          FUN_013b86dc(lVar28 + 0x11f0,&stack0x00000508,
                       *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
        }
      }
      fVar53 = 1.0;
      lVar28 = *in_stack_00000150;
      if ((lVar28 == 0) || (lVar29 = *(long *)(lVar28 + 0x38), lVar29 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar2 = *(uint *)(unaff_x19 + 0x94);
      lVar29 = lVar29 + (int)*in_stack_00000148 * unaff_x21;
      *(uint *)(lVar29 + 100) = uVar2;
      *(int *)(lVar29 + 0x68) = (int)unaff_x19[0x95];
      if (((unaff_w20 & 1) == 0) &&
         ((0xd < unaff_w25 || ((1 << (ulong)(unaff_w25 & 0x1f) & 0x2c00U) == 0)))) {
        lVar28 = *(long *)(lVar28 + 0x50);
        if (lVar28 == 0) goto LAB_02491464;
LAB_0248d42c:
        if (*(uint *)(lVar28 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        *(int *)(lVar28 + (long)(int)uVar2 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
      }
      else {
        lVar28 = *(long *)(lVar28 + 0x50);
        if (lVar28 == 0) goto LAB_02491464;
        if (*(uint *)(lVar28 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        if (*(int *)(lVar28 + (long)(int)uVar2 * 0x5c + 0x24) == 1) goto LAB_0248d42c;
      }
      if (unaff_w25 == 9) {
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar53 = (float)FUN_026fd208(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar57 = *(float *)(unaff_x19 + 199);
        fVar56 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x27 + 0x1b9));
        fVar53 = fVar49 * fVar53 * fVar56;
        fVar44 = fVar53 * (float)(int)(fVar57 / fVar53);
        uVar17 = (ulong)(uint)fVar44;
        if (fVar44 <= fVar57) {
          fVar44 = fVar57 + fVar53;
        }
LAB_0248d614:
        *(float *)(unaff_x19 + 199) = fVar44;
      }
      else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
        if ((char)unaff_x19[0x1d] == '\0') {
          if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
            fVar53 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
          }
          fVar44 = *(float *)(unaff_x19 + 199);
          fVar51 = (float)FUN_026fd474(&stack0x00001770,0);
          if (unaff_x19[0x1f] != 0) {
            fVar56 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
            fVar44 = fVar44 + fVar56 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                       fVar49 * (fVar57 + fVar53 * fVar51) +
                                       in_stack_000000c8 *
                                       (fStack00000000000000c4 +
                                       fStack00000000000000cc + *(float *)(unaff_x19[0x1f] + 0x1ac))
                                       );
            *(float *)(unaff_x19 + 199) = fVar44;
            goto joined_r0x0248d568;
          }
          goto LAB_02491464;
        }
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar44 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                 (*(float *)((long)unaff_x19 + 0x2a4) +
                 fVar49 * fVar57 +
                 in_stack_000000c8 *
                 (fStack00000000000000c4 + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)))
        ;
        uVar17 = (ulong)(uint)fVar44;
        fVar44 = *(float *)(unaff_x19 + 199) - fVar44;
        *(float *)(unaff_x19 + 199) = fVar44;
        if ((uVar11 != 0) || (unaff_w25 == 0x200b)) {
          fVar53 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
          uVar17 = (ulong)(uint)fVar53;
          fVar44 = fVar44 - fVar53;
          goto LAB_0248d614;
        }
      }
      else {
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar56 = *(float *)(unaff_x19 + 199);
        fVar44 = fVar56 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                          (*(float *)((long)unaff_x19 + 0x2a4) +
                          (*(float *)(unaff_x19 + 0x55) - fVar44) +
                          in_stack_000000c8 *
                          (fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
        *(float *)(unaff_x19 + 199) = fVar44;
joined_r0x0248d568:
        if ((uVar11 != 0) || (uVar17 = (ulong)(uint)fVar56, unaff_w25 == 0x200b)) {
          fVar53 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
          uVar17 = (ulong)(uint)fVar53;
          fVar44 = fVar44 + fVar53;
          goto LAB_0248d614;
        }
      }
      lVar28 = *in_stack_00000150;
      if ((lVar28 == 0) || (lVar29 = *(long *)(lVar28 + 0x38), lVar29 == 0)) goto LAB_02491464;
      uVar2 = *in_stack_00000148;
      uVar33 = (uint)*(undefined8 *)(lVar29 + 0x18);
      if (uVar33 <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      *(float *)(lVar29 + (int)uVar2 * unaff_x21 + 0x144) = fVar44;
      uVar42 = unaff_w25;
      if ((int)unaff_w25 < 0xd) {
        if ((unaff_w25 - 10 < 2) || (unaff_w25 == 3)) goto LAB_0248d6b8;
LAB_0248d69c:
        if (((unaff_w20 & unaff_w25 == 0x2d) != 0) || ((float)uVar2 == in_stack_00000078._4_4_))
        goto LAB_0248d6b8;
      }
      else {
        if (1 < unaff_w25 - 0x2028) {
          if (unaff_w25 != 0xd) goto LAB_0248d69c;
          uVar17 = 0;
          *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
          if ((float)uVar2 != in_stack_00000078._4_4_) goto LAB_0248dc08;
        }
LAB_0248d6b8:
        if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
          fVar53 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
          if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (((fStack000000000000004c < ABS(fVar53)) && (*(char *)((long)unaff_x19 + 700) == '\0'))
             && (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
            FUN_024d6ca8(fVar53);
            *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar53;
            *(float *)(unaff_x19 + 0x9a) = fVar53 + *(float *)(unaff_x19 + 0x9a);
            puVar7 = System_Threading_Mutex_TypeInfo;
            lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar28 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar28 = *(long *)puVar7;
            }
            lVar29 = *(long *)(lVar28 + 0xb8);
            if (*(int *)(lVar29 + 0x7ac) == (int)unaff_x19[0x94]) {
              if (*(int *)(lVar28 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar29 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
              }
              FUN_013b8de4(lVar29 + 0x11f0,&stack0x00000880,
                           *(undefined8 *)
                            Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                          );
              lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
              memcpy((void *)(*(long *)(lVar28 + 0xb8) + 0x788),&stack0x00000880,0x378);
              lVar28 = *(long *)(lVar28 + 0xb8);
              *(float *)(lVar28 + 0x7bc) = fVar53 + *(float *)(lVar28 + 0x7bc);
              *(float *)(lVar28 + 0x800) = fVar53 + *(float *)(lVar28 + 0x800);
              memcpy(&stack0x00000190,(void *)(lVar28 + 0x788),0x378);
              FUN_013b86dc(lVar28 + 0x11f0,&stack0x00000190,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<TextStyle>_get_Item__);
            }
          }
        }
        fVar57 = *(float *)(unaff_x19 + 0x9a);
        *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
        fVar56 = *(float *)((long)unaff_x19 + 0x4c4) - fVar57;
        fVar53 = *(float *)((long)unaff_x19 + 0x4bc);
        if (fVar56 <= *(float *)((long)unaff_x19 + 0x4bc)) {
          fVar53 = fVar56;
        }
        *(float *)((long)unaff_x19 + 0x4bc) = fVar53;
        fVar44 = *(float *)(unaff_x19 + 0x98);
        if (*(char *)((long)unaff_x28 + 0xf34) == '\0') {
          in_stack_000017b8 = fVar53;
        }
        if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
           (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
            ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
          *(undefined1 *)((long)unaff_x28 + 0xf34) = 1;
        }
        lVar28 = *in_stack_00000150;
        if ((lVar28 == 0) || (lVar29 = *(long *)(lVar28 + 0x50), lVar29 == 0)) goto LAB_02491464;
        uVar2 = *(uint *)(unaff_x19 + 0x94);
        if (*(uint *)(lVar29 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar35 = lVar29 + (long)(int)uVar2 * 0x5c;
        *(int *)(lVar35 + 0x34) = (int)unaff_x19[0x92];
        iVar12 = (int)unaff_x19[0x92];
        if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
          iVar12 = *(int *)((long)unaff_x19 + 0x494);
        }
        *(int *)((long)unaff_x19 + 0x494) = iVar12;
        *(int *)(lVar35 + 0x38) = iVar12;
        *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
        *(undefined4 *)(lVar35 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
        iVar12 = *(int *)((long)unaff_x19 + 0x494);
        if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
          iVar12 = *(int *)((long)unaff_x19 + 0x49c);
        }
        *(int *)((long)unaff_x19 + 0x49c) = iVar12;
        *(int *)(lVar35 + 0x40) = iVar12;
        *(int *)(lVar35 + 0x24) = (*(int *)(lVar35 + 0x3c) - *(int *)(lVar35 + 0x34)) + 1;
        *(undefined4 *)(lVar35 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
        lVar28 = *(long *)(lVar28 + 0x38);
        if (lVar28 == 0) goto LAB_02491464;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar60 = *(undefined4 *)
                  (lVar28 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x21 + 0x11c);
        lVar29 = lVar29 + (long)(int)uVar2 * 0x5c;
        *(float *)(lVar29 + 0x70) = fVar56;
        *(undefined4 *)(lVar29 + 0x6c) = uVar60;
        lVar28 = *in_stack_00000150;
        if ((lVar28 == 0) || (lVar29 = *(long *)(lVar28 + 0x50), lVar29 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar28 = *(long *)(lVar28 + 0x38);
        if (lVar28 == 0) goto LAB_02491464;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar44 = fVar44 - fVar57;
        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(undefined4 *)(lVar29 + 0x74) =
             *(undefined4 *)(lVar28 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x21 + 0x128);
        *(float *)(lVar29 + 0x78) = fVar44;
        lVar28 = *in_stack_00000150;
        if ((lVar28 == 0) || (lVar35 = *(long *)(lVar28 + 0x50), lVar35 == 0)) goto LAB_02491464;
        lVar16 = (long)(int)*(uint *)(unaff_x19 + 0x94);
        if (*(uint *)(lVar35 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar29 = lVar35 + lVar16 * 0x5c;
        *(float *)(lVar29 + 0x44) = *(float *)(lVar29 + 0x74) - fVar49 * in_stack_00000130._4_4_;
        *(float *)(lVar29 + 0x5c) = in_stack_000000d8._4_4_;
        if (*(int *)(lVar29 + 0x24) == 1) {
          *(int *)(lVar35 + lVar16 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
        }
        if ((*unaff_x27 == 0) || (lVar29 = *(long *)(lVar28 + 0x38), lVar29 == 0))
        goto LAB_02491464;
        lVar37 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
        uVar33 = (uint)*(undefined8 *)(lVar29 + 0x18);
        if (uVar33 <= *(uint *)((long)unaff_x19 + 0x49c))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        if ((*(char *)(lVar29 + lVar37 * unaff_x21 + 0x194) == '\0') &&
           (lVar37 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar33 <= *(uint *)(unaff_x19 + 0x93)))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar57 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                 (in_stack_000000c8 *
                  (fStack00000000000000c4 + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac))
                 - *(float *)((long)unaff_x19 + 0x2a4));
        fVar53 = -fVar57;
        if ((char)unaff_x19[0x1d] != '\0') {
          fVar53 = fVar57;
        }
        lVar35 = lVar35 + lVar16 * 0x5c;
        *(float *)(lVar35 + 0x58) = *(float *)(lVar29 + lVar37 * unaff_x21 + 0x144) + fVar53;
        fVar53 = *(float *)(unaff_x19 + 0x9a);
        *(float *)(lVar35 + 0x48) = fStack0000000000000050 + (fVar44 - fVar56);
        *(float *)(lVar35 + 0x4c) = fVar44;
        uVar17 = (ulong)(uint)(0.0 - fVar53);
        *(float *)(lVar35 + 0x50) = 0.0 - fVar53;
        *(float *)(lVar35 + 0x54) = fVar56;
        plVar30 = (long *)System_Threading_Mutex_TypeInfo;
        if ((int)unaff_w25 < 0x2d) {
          if (unaff_w25 - 10 < 2) {
LAB_0248dad8:
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar43 = (long *)StringLiteral_302;
            FUN_024d69d4();
            lVar28 = unaff_x19[0x6c];
            *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
            iVar12 = (int)unaff_x19[0x94] + 1;
            *(int *)(unaff_x19 + 0x94) = iVar12;
            *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
            if ((lVar28 != 0) && (*(long *)(lVar28 + 0x50) != 0)) {
              if (*(int *)(*(long *)(lVar28 + 0x50) + 0x18) <= iVar12) {
                FUN_024d6e60();
                lVar28 = unaff_x19[0x6c];
                if (lVar28 == 0) goto LAB_02491464;
              }
              lVar28 = *(long *)(lVar28 + 0x38);
              if (lVar28 != 0) {
                if (*in_stack_00000148 < *(uint *)(lVar28 + 0x18)) {
                  fVar53 = *(float *)(lVar28 + (int)*in_stack_00000148 * unaff_x21 + 0x154);
                  if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                    fVar56 = 0.0;
                    if ((unaff_w25 == 0x2029) || (unaff_w25 == 10)) {
                      fVar56 = *(float *)((long)unaff_x19 + 0x2c4);
                    }
                    uVar22 = 0;
                    fVar56 = *(float *)(unaff_x19 + 0x9a) +
                             fVar53 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                             fStack0000000000000054 *
                             (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                             in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar56);
                  }
                  else {
                    if ((unaff_w25 == 0x2029) || (fVar56 = 0.0, unaff_w25 == 10)) {
                      fVar56 = *(float *)((long)unaff_x19 + 0x2c4);
                    }
                    uVar22 = 1;
                    fVar56 = *(float *)(unaff_x19 + 0x9a) +
                             *(float *)(unaff_x19 + 0x57) +
                             in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar56);
                  }
                  *(float *)(unaff_x19 + 0x9a) = fVar56;
                  *(undefined1 *)((long)unaff_x19 + 700) = uVar22;
                  lVar28 = *plVar30;
                  if (*(int *)(lVar28 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar28 = *plVar30;
                  }
                  uVar19 = *(undefined8 *)(*(long *)(lVar28 + 0xb8) + 0x15a8);
                  *(float *)(unaff_x19 + 0x99) = fVar53;
                  uVar17 = NEON_rev64(uVar19,4);
                  unaff_x19[0x98] = uVar17;
                  *(float *)(unaff_x19 + 199) =
                       *(float *)(unaff_x19 + 0x80) + 0.0 + *(float *)((long)unaff_x19 + 0x404);
                  FUN_024d69d4();
                  FUN_024d69d4();
                  *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
                  fStack0000000000000058 = 1.4013e-45;
                  bStack000000000000005c = 1;
                  goto LAB_0248ab98;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              }
            }
            goto LAB_02491464;
          }
          if (unaff_w25 == 3) {
            if (unaff_x19[0x8e] == 0) goto LAB_02491464;
            in_stack_00001788 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
            uVar42 = 3;
          }
        }
        else if ((unaff_w25 - 0x2028 < 2) || (unaff_w25 == 0x2d)) goto LAB_0248dad8;
      }
LAB_0248dc08:
      uVar2 = *in_stack_00000148;
      if (uVar33 <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (*(char *)(lVar29 + (int)uVar2 * unaff_x21 + 0x194) != '\0') {
        lVar29 = lVar29 + (int)uVar2 * unaff_x21;
        uVar18 = *(ulong *)(lVar29 + 0x11c);
        uVar17 = *(ulong *)(in_stack_00000070 + 0x230);
        *(ulong *)(in_stack_00000070 + 0x230) =
             uVar18 ^ (uVar18 ^ uVar17) &
                      CONCAT44(-(uint)((float)(uVar17 >> 0x20) < (float)(uVar18 >> 0x20)),
                               -(uint)((float)uVar17 < (float)uVar18));
        uVar18 = *(ulong *)(in_stack_00000070 + 0x238);
        uVar17 = *(ulong *)(lVar29 + 0x128);
        *(ulong *)(in_stack_00000070 + 0x238) =
             uVar17 ^ (uVar17 ^ uVar18) &
                      CONCAT44(-(uint)((float)(uVar17 >> 0x20) < (float)(uVar18 >> 0x20)),
                               -(uint)((float)uVar17 < (float)uVar18));
      }
      if (((int)unaff_x19[0x5b] == 5) &&
         ((0xd < uVar42 || ((1 << (ulong)(uVar42 & 0x1f) & 0x2c00U) == 0)))) {
        lVar29 = *(long *)(lVar28 + 0x58);
        if (lVar29 == 0) goto LAB_02491464;
        iVar12 = (int)unaff_x19[0x95] + 1;
        if (*(int *)(lVar29 + 0x18) < iVar12) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147c08((long *)(lVar28 + 0x58),iVar12,1,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
          lVar28 = *in_stack_00000150;
          if (lVar28 == 0) goto LAB_02491464;
        }
        lVar29 = *(long *)(lVar28 + 0x58);
        if (lVar29 == 0) goto LAB_02491464;
        uVar33 = *(uint *)(unaff_x19 + 0x95);
        lVar35 = (long)(int)uVar33;
        uVar2 = *(uint *)(lVar29 + 0x18);
        if (uVar2 <= uVar33)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar16 = lVar29 + lVar35 * 0x14;
        fVar56 = *(float *)(lVar16 + 0x30);
        uVar17 = (ulong)(uint)fVar56;
        *(undefined4 *)(lVar16 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
        fVar53 = *(float *)((long)unaff_x19 + 0x4bc);
        if (fVar56 <= *(float *)((long)unaff_x19 + 0x4bc)) {
          fVar53 = fVar56;
        }
        *(float *)(lVar16 + 0x30) = fVar53;
        uVar42 = *(uint *)((long)unaff_x19 + 0x48c);
        if (uVar42 == 0 && uVar33 == 0) {
          *(uint *)(lVar29 + lVar35 * 0x14 + 0x20) = uVar42;
        }
        else {
          uVar34 = uVar42 - 1;
          if (0 < (int)uVar42) {
            lVar28 = *(long *)(lVar28 + 0x38);
            if (lVar28 == 0) goto LAB_02491464;
            if (*(uint *)(lVar28 + 0x18) <= uVar34)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if (uVar33 != *(uint *)(lVar28 + (long)(int)uVar34 * (long)iVar10 + 0x68)) {
              if (uVar33 - 1 < uVar2) {
                *(uint *)(lVar29 + 0x20 + (long)(int)(uVar33 - 1) * 0x14 + 4) = uVar34;
                *(uint *)(lVar29 + 0x20 + lVar35 * 0x14) = uVar42;
                goto LAB_0248dc84;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            }
          }
          if ((float)uVar42 == in_stack_00000078._4_4_) {
            *(float *)(lVar29 + lVar35 * 0x14 + 0x24) = in_stack_00000078._4_4_;
          }
        }
      }
LAB_0248dc84:
      plVar30 = (long *)System_Threading_Mutex_TypeInfo;
      if (((char)unaff_x19[0x5a] != '\0') ||
         ((*(uint *)(unaff_x19 + 0x5b) < 7 &&
          ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) != 0)))) {
        if ((uVar11 == 0) && (((unaff_w25 != 0x2d && (unaff_w25 != 0x200b)) && (unaff_w25 != 0xad)))
           ) {
          if (*(char *)((long)unaff_x19 + 0x2d2) == '\0') {
LAB_0248de4c:
            if (((((0x2bfd < unaff_w25 - 0xac01) && (0x1d < unaff_w25 - 0xa961)) &&
                 (0xfd < unaff_w25 - 0x1101)) || (uVar18 = FUN_024e95f0(0), (uVar18 & 1) != 0)) &&
               ((((0xed < unaff_w25 - 0xff01 && (0x1d < unaff_w25 - 0xfe31)) &&
                 (0x717d < unaff_w25 - 0x2e81)) && (0x1fd < unaff_w25 - 0xf901))))
            goto LAB_0248ded4;
            lVar28 = FUN_024e94b0(0);
            if ((lVar28 == 0) || (*(long *)(lVar28 + 0x10) == 0)) goto LAB_02491464;
            uVar18 = FUN_0129aa60(*(long *)(lVar28 + 0x10),&stack0x00000880,
                                  *(undefined8 *)
                                   System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                 );
            if ((int)*in_stack_00000148 < (int)in_stack_00000078._4_4_) {
              lVar28 = FUN_024e94b0(0);
              if (((lVar28 == 0) || (*in_stack_00000150 == 0)) ||
                 (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0)) goto LAB_02491464;
              if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148 + 1)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              if (*(long *)(lVar28 + 0x18) == 0) goto LAB_02491464;
              in_stack_00000880 =
                   (uint)*(ushort *)
                          (lVar29 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar10 + 0x20);
              uVar21 = FUN_0129aa60(*(long *)(lVar28 + 0x18),&stack0x00000880,
                                    *(undefined8 *)
                                     System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                   );
              if ((uVar18 & 1) != 0) goto LAB_0248e0dc;
              if ((uVar21 & 1) == 0) goto LAB_0248e1b0;
              plVar30 = (long *)System_Threading_Mutex_TypeInfo;
              if ((bStack000000000000005c & 1) == 0) {
                bStack000000000000005c = 0;
                goto LAB_0248e168;
              }
            }
            else {
              in_stack_00000880 = unaff_w25;
              if ((uVar18 & 1) == 0) {
LAB_0248e1b0:
                plVar30 = (long *)System_Threading_Mutex_TypeInfo;
                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_024d69d4();
                bStack000000000000005c = 0;
                goto LAB_0248e168;
              }
LAB_0248e0dc:
              plVar30 = (long *)System_Threading_Mutex_TypeInfo;
              if (uVar27 != uVar24 || ((bStack000000000000005c ^ 0xff) & 1) != 0) goto LAB_0248e168;
            }
joined_r0x0248e0fc:
            System_Threading_Mutex_TypeInfo = (undefined *)plVar30;
            if (uVar11 != 0) {
LAB_0248e100:
              plVar30 = (long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_024d69d4();
            }
            if (*(int *)(*plVar30 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_024d69d4();
            bStack000000000000005c = 1;
          }
          else {
LAB_0248ded4:
            plVar30 = (long *)System_Threading_Mutex_TypeInfo;
            if ((bStack000000000000005c & 1) != 0) {
              if ((unaff_w25 == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0)
              goto joined_r0x0248e0fc;
              goto LAB_0248e100;
            }
            bStack000000000000005c = 0;
          }
        }
        else {
          if (*(char *)((long)unaff_x19 + 0x2d2) == '\x01') goto LAB_0248ded4;
          if (((unaff_w25 - 0x2007 < 0x29) &&
              ((1L << ((ulong)(unaff_w25 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
             ((unaff_w25 == 0xa0 || (unaff_w25 == 0x2060)))) goto LAB_0248de4c;
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_024d69d4();
          bStack000000000000005c = 0;
          *(undefined4 *)(*(long *)(*plVar30 + 0xb8) + 0xe78) = 0xffffffff;
        }
      }
LAB_0248e168:
      if (*(int *)(*plVar30 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar43 = (long *)StringLiteral_302;
      FUN_024d69d4();
      *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
    }
LAB_0248ab98:
    do {
      fVar53 = 1.0;
      in_stack_00001788 = in_stack_00001788 + 1;
      lVar28 = unaff_x19[0x8e];
      if (lVar28 == 0) goto LAB_02491464;
      if ((int)*(uint *)(lVar28 + 0x18) <= (int)in_stack_00001788) {
LAB_0248e4dc:
        fVar49 = (float)uVar17;
        if (((char)unaff_x19[0x46] != '\0') &&
           (fVar49 = DAT_02956ccc,
           DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
          fVar49 = *(float *)((long)unaff_x19 + 0x1dc);
          fVar53 = *(float *)((long)unaff_x19 + 0x24c);
          if ((fVar49 < fVar53) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
              *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
            }
            fVar56 = (*(float *)((long)unaff_x19 + 0x234) - fVar49) * 0.5;
            if (fVar56 <= DAT_028aa298) {
              fVar56 = DAT_028aa298;
            }
            *(float *)(unaff_x19 + 0x47) = fVar49;
            fVar56 = (fVar49 + fVar56) * 20.0 + 0.5;
            fVar49 = DAT_02958220;
            if (fVar56 != INFINITY) {
              fVar49 = (float)(int)fVar56 / 20.0;
            }
            if (fVar53 <= fVar49) {
              fVar49 = fVar53;
            }
            goto LAB_0248e598;
          }
        }
        *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
        if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
          uVar19 = FUN_0176eb1c(_fStack0000000000000038,0);
          uVar15 = FUN_017840ac(in_stack_00000040,0);
          uVar19 = FUN_0160073c(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__
                                ,uVar19,*(undefined8 *)
                                         Method_UnityEngine_GameObject_GetComponents<Component>__,
                                uVar15,0);
          if (*(int *)(*plVar43 + 0xe0) == 0) {
            thunk_FUN_00d32864(*plVar43);
          }
          FUN_02660dac(uVar19,0);
        }
        puVar7 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
        if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (uVar61 == 3)))) {
          (**(code **)(*unaff_x19 + 0x958))();
          lVar28 = *(long *)puVar7;
          goto LAB_02491474;
        }
        lVar28 = *plVar30;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar28 = *plVar30;
        }
        plVar30 = (long *)PTR_DAT_033ed410;
        lVar28 = **(long **)(lVar28 + 0xb8);
        if (lVar28 == 0) goto LAB_02491464;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        iVar10 = *(int *)(lVar28 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
        if ((*in_stack_00000150 == 0) ||
           (lVar28 = *(long *)(*in_stack_00000150 + 0x60), lVar28 == 0)) goto LAB_02491464;
        if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(int *)(lVar28 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        FUN_024e7d94(lVar28 + 0x20,0,0);
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        iVar12 = (int)unaff_x19[0x4d];
        fStack00000000000000c4 =
             **(float **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        in_stack_000000b8 =
             *(undefined8 *)
              (*(float **)
                (*(long *)
                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
                0xb8) + 1);
        lVar28 = unaff_x19[0xea];
        in_stack_00000088 = (float *)in_stack_000000b8;
        fStack0000000000000090 = fStack00000000000000c4;
        if (iVar12 < 0x401) {
          if (iVar12 == 0x100) {
            if (lVar28 == 0) goto LAB_02491464;
            if (*(uint *)(lVar28 + 0x18) < 2)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            uVar19 = *(undefined8 *)(lVar28 + 0x30);
            if ((int)unaff_x19[0x5b] == 5) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar29 = *(long *)(*in_stack_00000150 + 0x58), lVar29 == 0)) goto LAB_02491464;
              if (*(uint *)(lVar29 + 0x18) <= uStack0000000000000030)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              fVar49 = *(float *)(lVar29 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
            }
            else {
              fVar49 = *(float *)(unaff_x19 + 0x96);
            }
            fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar28 + 0x2c);
            fVar49 = (0.0 - fVar49) - fStack0000000000000020;
          }
          else if (iVar12 == 0x200) {
            if (lVar28 == 0) goto LAB_02491464;
            if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fStack0000000000000090 = (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
            uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar28 + 0x24) +
                              (float)*(undefined8 *)(lVar28 + 0x30)) * 0.5);
            if ((int)unaff_x19[0x5b] == 5) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar28 = *(long *)(*in_stack_00000150 + 0x58), lVar28 == 0)) goto LAB_02491464;
              if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              lVar28 = lVar28 + (long)(int)uStack0000000000000030 * 0x14;
              fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
              fVar49 = ((fStack0000000000000020 + *(float *)(lVar28 + 0x28) +
                        *(float *)(lVar28 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
            }
            else {
              fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
              fVar49 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8)
                       - fStack0000000000000024) * -0.5 + 0.0;
            }
          }
          else {
            if (iVar12 != 0x400) goto LAB_0248eb64;
            if (lVar28 == 0) goto LAB_02491464;
            if (*(int *)(lVar28 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            uVar19 = *(undefined8 *)(lVar28 + 0x24);
            if ((int)unaff_x19[0x5b] == 5) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar29 = *(long *)(*in_stack_00000150 + 0x58), lVar29 == 0)) goto LAB_02491464;
              if (*(uint *)(lVar29 + 0x18) <= uStack0000000000000030)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              in_stack_000017b8 =
                   *(float *)(lVar29 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
            }
            fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar28 + 0x20);
            fVar49 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
          }
          in_stack_00000088 =
               (float *)CONCAT44((float)((ulong)uVar19 >> 0x20) + 0.0,(float)uVar19 + fVar49);
        }
        else if (iVar12 == 0x800) {
          if (lVar28 == 0) goto LAB_02491464;
          if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fVar49 = ((float)*(undefined8 *)(lVar28 + 0x24) + (float)*(undefined8 *)(lVar28 + 0x30)) *
                   0.5;
          fStack0000000000000090 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
          in_stack_00000088 =
               (float *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                                 (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5 + 0.0
                                 ,fVar49 + 0.0);
        }
        else {
          if (iVar12 == 0x1000) {
            if (lVar28 == 0) goto LAB_02491464;
            if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fVar49 = (float)*(undefined8 *)(lVar28 + 0x24) + (float)*(undefined8 *)(lVar28 + 0x30);
            fVar53 = (float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20);
            fStack0000000000000020 =
                 fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) +
                 *(float *)(unaff_x19 + 0x9b);
            fStack0000000000000090 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
          }
          else {
            if (iVar12 != 0x2000) goto LAB_0248eb64;
            if (lVar28 == 0) goto LAB_02491464;
            if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fVar49 = (float)*(undefined8 *)(lVar28 + 0x24) + (float)*(undefined8 *)(lVar28 + 0x30);
            fVar53 = (float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20);
            fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
            fStack0000000000000090 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
          }
          fVar49 = fVar49 * 0.5;
          in_stack_00000088 =
               (float *)CONCAT44(fVar53 * 0.5 + 0.0,
                                 fVar49 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) *
                                                 0.5));
        }
LAB_0248eb64:
        lVar28 = FUN_0249b7f8();
        if (lVar28 == 0) goto LAB_02491464;
        FUN_026a125c(lVar28,0);
        __x = DAT_028aa048;
        *(float *)((long)unaff_x19 + 0x6dc) = fVar49;
        dVar47 = modf(__x,(double *)&stack0x00000880);
        puVar7 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
        if (dVar47 == 0.5) {
          fVar53 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
            fVar53 = fVar53 + 1.0;
          }
        }
        else {
          fVar53 = 255.0;
        }
        dVar47 = modf(__x,(double *)&stack0x00000880);
        if (dVar47 == 0.5) {
          fVar56 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
            fVar56 = fVar56 + 1.0;
          }
        }
        else {
          fVar56 = 255.0;
        }
        dVar47 = modf(__x,(double *)&stack0x00000880);
        if (dVar47 == 0.5) {
          fVar57 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
            fVar57 = fVar57 + 1.0;
          }
        }
        else {
          fVar57 = 255.0;
        }
        dVar47 = modf(__x,(double *)&stack0x00000880);
        if (dVar47 == 0.5) {
          fVar44 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
            fVar44 = fVar44 + 1.0;
          }
        }
        else {
          fVar44 = 255.0;
        }
        modf(__x,(double *)&stack0x00000880);
        modf(__x,(double *)&stack0x00000880);
        modf(__x,(double *)&stack0x00000880);
        modf(__x,(double *)&stack0x00000880);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_037825d3 == '\0') {
          thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
          DAT_037825d3 = '\x01';
        }
        puVar7 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
        lVar28 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar28 = *(long *)puVar7;
        }
        puVar25 = *(undefined4 **)(lVar28 + 0xb8);
        UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                  (*puVar25,puVar25[1],puVar25[2],puVar25[3],&stack0x00001790,0x4000ffff,0);
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar28 = *in_stack_00000150;
        if (lVar28 == 0) goto LAB_02491464;
        uVar11 = *in_stack_00000148;
        if ((int)uVar11 < 1) {
          iStack00000000000000a4 = 0;
          iVar10 = 0;
          plVar43 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          goto LAB_02491068;
        }
        lVar28 = *(long *)(lVar28 + 0x38);
        if (lVar28 == 0) goto LAB_02491464;
        iVar12 = 0;
        bVar6 = false;
        bVar5 = false;
        bVar9 = false;
        iStack00000000000000a4 = 0;
        fStack0000000000000024 = 0.0;
        bVar8 = false;
        uStack0000000000000114 = 0;
        fStack0000000000000048 = 0.0;
        fStack00000000000000cc =
             *(float *)(*(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8) + 0x15a8);
        in_stack_000000c8 = 0.0;
        fStack0000000000000054 = fStack00000000000000a8;
        fStack0000000000000058 = 0.0;
        fStack0000000000000038 = 0.0;
        in_stack_00000080._4_4_ = 0.0;
        fStack0000000000000034 = 0.0;
        _bStack000000000000005c =
             (int)fVar53 & 0xffU | ((int)fVar56 & 0xffU) << 8 | ((int)fVar57 & 0xffU) << 0x10 |
             (int)fVar44 << 0x18;
        fVar56 = 0.0;
        fVar53 = 0.0;
        _in_stack_00000128 = 0x2e0;
        fStack0000000000000098 = fStack00000000000000a8;
        in_stack_000000a0 = fStack00000000000000ac;
        fStack000000000000004c = fStack00000000000000ac;
        fStack0000000000000050 = (float)uStack0000000000000094;
        in_stack_00000078._4_4_ = fStack00000000000000a8;
        in_stack_00000068._4_4_ = fStack00000000000000ac;
        uStack0000000000000060 = uStack0000000000000094;
        uVar27 = 0;
        uVar24 = 1;
        goto LAB_0248ef74;
      }
      if (*(uint *)(lVar28 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      unaff_w25 = *(uint *)(lVar28 + (long)(int)in_stack_00001788 * 0xc + 0x20);
      if (unaff_w25 == 0) goto LAB_0248e4dc;
      if (5 < in_stack_00000140._4_4_) {
        uVar19 = FUN_0176eb1c(&stack0x000017bc,0);
        uVar15 = FUN_0176eb1c(&stack0x00001788,0);
        uVar19 = FUN_0160073c(*(undefined8 *)UnityEngine_Rendering_Universal_DebugValidationMode_var
                              ,uVar19,*(undefined8 *)
                                       Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                              ,uVar15,0);
        if (*(int *)(*plVar43 + 0xe0) == 0) {
          thunk_FUN_00d32864(*plVar43);
        }
        FUN_026610e4(uVar19,0);
        in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
      }
      if ((*(char *)((long)unaff_x19 + 0x2fa) == '\0') || (unaff_w25 != 0x3c)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar28 = lVar28 + (int)*in_stack_00000148 * unaff_x21;
        *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar28 + 0x2c);
        *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar28 + 0x58);
        unaff_x19[0x1f] = *(long *)(lVar28 + 0x38);
      }
      else {
        *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
        *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
        uVar18 = FUN_024d0688();
        if (((uVar18 & 1) != 0) &&
           (in_stack_00001788 = in_stack_0000176c, uVar61 = unaff_w25,
           *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_0248ab98;
      }
      if ((unaff_x19[0x6c] == 0) || (lVar28 = *(long *)(unaff_x19[0x6c] + 0x38), lVar28 == 0))
      goto LAB_02491464;
      uVar11 = *in_stack_00000148;
      if (*(uint *)(lVar28 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar35 = (long)(int)uVar11;
      unaff_w22 = (uint)*(byte *)(lVar28 + lVar35 * unaff_x21 + 0x5c);
      *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
      lVar29 = unaff_x19[0x23];
      if ((uint)in_stack_000017a8 == uVar11) {
        unaff_w25 = (uint)((ulong)in_stack_000017a8 >> 0x20);
        unaff_w20 = 1;
        *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
        if (unaff_w25 == 0x2026) {
          lVar16 = unaff_x19[0xc9];
          lVar28 = lVar28 + lVar35 * unaff_x21;
          *(undefined4 *)(lVar28 + 0x2c) = 0;
          *(long *)(lVar28 + 0x30) = lVar16;
          *(long *)(lVar28 + 0x38) = unaff_x19[0xca];
          *(long *)(lVar28 + 0x50) = unaff_x19[0xcb];
          *(int *)(lVar28 + 0x58) = (int)unaff_x19[0xcc];
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          in_stack_000017a8 = CONCAT44(3,uVar11 + 1);
        }
        else if (unaff_w25 == 3) {
          if ((*unaff_x27 == 0) || (lVar16 = FUN_024b11ac(*unaff_x27,0), lVar16 == 0))
          goto LAB_02491464;
          in_stack_00000bf8 = 3;
          FUN_01299bc0(lVar16,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
          if (*(uint *)(lVar28 + 0x18) <= uVar11)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          unaff_w20 = 1;
          *(ulong *)(lVar28 + lVar35 * unaff_x21 + 0x30) =
               CONCAT44(in_stack_00000884,in_stack_00000880);
          uVar11 = *(uint *)((long)unaff_x19 + 0x48c);
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
      }
      else {
        unaff_w20 = 0;
      }
      plVar30 = (long *)System_Threading_Mutex_TypeInfo;
      if (((int)uVar11 < *(int *)((long)unaff_x19 + 0x31c)) && (unaff_w25 != 3)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar28 + 0x18) <= uVar11)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar28 = lVar28 + (long)(int)uVar11 * (long)iVar10;
        *(undefined1 *)(lVar28 + 0x194) = 0;
        *(undefined2 *)(lVar28 + 0x20) = 0x200b;
        *(undefined4 *)(lVar28 + 100) = 0;
        *in_stack_00000148 = uVar11 + 1;
        uVar61 = unaff_w25;
        goto LAB_0248ab98;
      }
      iVar12 = *(int *)((long)unaff_x19 + 0x63c);
      in_stack_00000100 = fVar53;
      if (iVar12 == 0) {
        uVar11 = *(uint *)((long)unaff_x19 + 0x254);
        if ((uVar11 >> 4 & 1) == 0) {
          if ((uVar11 >> 3 & 1) == 0) {
            if ((uVar11 >> 5 & 1) != 0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar18 = FUN_016f92d4(unaff_w25,0);
              if ((uVar18 & 1) != 0) {
                if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar11 = FUN_016f95a8(unaff_w25,0);
                unaff_w25 = uVar11 & 0xffff;
                in_stack_00000100 = fStack0000000000000028;
              }
            }
          }
          else {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar18 = FUN_016f9218(unaff_w25,0);
            if ((uVar18 & 1) != 0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar11 = FUN_016f9724(unaff_w25,0);
              goto LAB_0248af70;
            }
          }
        }
        else {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar18 = FUN_016f92d4(unaff_w25,0);
          in_stack_00000100 = 1.0;
          if ((uVar18 & 1) != 0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar11 = FUN_016f95a8(unaff_w25,0);
LAB_0248af70:
            unaff_w25 = uVar11 & 0xffff;
            in_stack_00000100 = 1.0;
          }
        }
        iVar12 = *(int *)((long)unaff_x19 + 0x63c);
        if (iVar12 == 0) goto LAB_0248af84;
LAB_0248abc8:
        if (iVar12 != 1) {
          lVar28 = *in_stack_00000150;
          unaff_s13 = 0.0;
          if (unaff_w25 != 3 && unaff_w25 != 0xad) {
            unaff_s13 = fVar49;
          }
          in_stack_00000138 = 0.0;
          if (lVar28 == 0) goto LAB_02491464;
          in_stack_00000128 = 0.0;
          in_stack_00000120 = 0.0;
          unaff_s9 = fVar49;
          goto LAB_0248b39c;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar28 = lVar28 + (int)*in_stack_00000148 * unaff_x21;
        lVar35 = *(long *)(lVar28 + 0x40);
        unaff_x19[0xd2] = lVar35;
        *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar28 + 0x48);
        if ((lVar35 == 0) || (lVar28 = FUN_024ebfa0(lVar35,0), lVar28 == 0)) goto LAB_02491464;
        FUN_0132138c(lVar28,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                     *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
        puVar7 = System_Threading_Mutex_TypeInfo;
        lVar35 = CONCAT44(in_stack_00000884,in_stack_00000880);
        plVar30 = (long *)System_Threading_Mutex_TypeInfo;
        uVar61 = unaff_w25;
        if (lVar35 != 0) {
          if (unaff_w25 == 0x3c) {
            unaff_w25 = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
          }
          else {
            lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar28 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar28 = *(long *)puVar7;
            }
            *(undefined4 *)((long)unaff_x19 + 0x1b4) =
                 *(undefined4 *)(*(long *)(lVar28 + 0xb8) + 0x68);
          }
          if (unaff_x19[0x1f] == 0) goto LAB_02491464;
          fVar49 = *(float *)(unaff_x19 + 0x3c);
          memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
          iVar10 = FUN_026fd110(&stack0x00001700,0);
          if (*unaff_x27 == 0) goto LAB_02491464;
          memmove(&stack0x00001700,(void *)(*unaff_x27 + 0x50),0x60);
          fVar57 = (float)FUN_026fd120(&stack0x00001700,0);
          fVar56 = in_stack_00000080._4_4_;
          if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
            fVar56 = 1.0;
          }
          if (unaff_x19[0xd2] == 0) goto LAB_02491464;
          fVar56 = (fVar49 / (float)iVar10) * fVar57 * fVar56;
          iVar10 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
          fVar49 = *(float *)(unaff_x19 + 0x3c);
          if (iVar10 < 1) {
            if (*unaff_x27 == 0) goto LAB_02491464;
            iVar10 = FUN_026fd110(*unaff_x27 + 0x50,0);
            if (*unaff_x27 == 0) goto LAB_02491464;
            fVar57 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
            in_stack_00000120 = in_stack_00000080._4_4_;
            if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
              in_stack_00000120 = fVar53;
            }
            if (unaff_x19[0x1f] == 0) goto LAB_02491464;
            fVar53 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
            if (*(long *)(lVar35 + 0x20) == 0) goto LAB_02491464;
            FUN_026fd62c(&stack0x00000880,*(long *)(lVar35 + 0x20),0);
            unaff_x28[0x1cd] = unaff_x28[1];
            unaff_x28[0x1cc] = *unaff_x28;
            fVar44 = (float)FUN_026fd45c(&stack0x000016e0,0);
            if (*(long *)(lVar35 + 0x20) == 0) goto LAB_02491464;
            fVar51 = *(float *)(lVar35 + 0x2c);
            fVar45 = (float)FUN_026fd668(*(long *)(lVar35 + 0x20),0);
            if (*unaff_x27 == 0) goto LAB_02491464;
            in_stack_00000128 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
            if (*unaff_x27 == 0) goto LAB_02491464;
            fVar52 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
            if (*unaff_x27 == 0) goto LAB_02491464;
            fVar50 = *(float *)((long)unaff_x19 + 0x3fc);
            in_stack_00000138 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
            if (unaff_x19[0x1f] == 0) goto LAB_02491464;
            in_stack_00000138 = fVar56 * fVar52 * fVar50 * in_stack_00000138;
            in_stack_00000120 = (fVar49 / (float)iVar10) * fVar57 * in_stack_00000120;
            unaff_s9 = in_stack_00000120 * (fVar53 / fVar44) * fVar51 * fVar45;
            in_stack_00000120 = in_stack_00000120 / unaff_s9;
            in_stack_00000128 = in_stack_00000120 * in_stack_00000128;
            fVar49 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
            in_stack_00000120 = in_stack_00000120 * fVar49;
          }
          else {
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            iVar10 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            fVar53 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
            if (*(long *)(lVar35 + 0x20) == 0) goto LAB_02491464;
            fVar44 = *(float *)(lVar35 + 0x2c);
            fVar57 = in_stack_00000080._4_4_;
            if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
              fVar57 = 1.0;
            }
            fVar51 = (float)FUN_026fd668(*(long *)(lVar35 + 0x20),0);
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            in_stack_00000128 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            fVar45 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            fVar52 = *(float *)((long)unaff_x19 + 0x3fc);
            in_stack_00000138 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            in_stack_00000138 = fVar56 * fVar45 * fVar52 * in_stack_00000138;
            unaff_s9 = (fVar49 / (float)iVar10) * fVar53 * fVar57 * fVar44 * fVar51;
            in_stack_00000120 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
          }
          lVar28 = unaff_x19[0x6c];
          unaff_x19[200] = lVar35;
          if ((lVar28 == 0) || (lVar35 = *(long *)(lVar28 + 0x38), lVar35 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar35 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar35 = lVar35 + (int)*in_stack_00000148 * unaff_x21;
          *(undefined4 *)(lVar35 + 0x2c) = 1;
          *(float *)(lVar35 + 0x160) = unaff_s9;
          in_stack_00000130._4_4_ = 0.0;
          *(long *)(lVar35 + 0x40) = unaff_x19[0xd2];
          *(long *)(lVar35 + 0x38) = unaff_x19[0x1f];
          *(int *)(lVar35 + 0x58) = (int)unaff_x19[0x23];
          *(int *)(unaff_x19 + 0x23) = (int)lVar29;
          goto LAB_0248b384;
        }
        goto LAB_0248ab98;
      }
      if (iVar12 != 0) goto LAB_0248abc8;
LAB_0248af84:
      if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
      goto LAB_02491464;
      uVar27 = *in_stack_00000148;
      uVar11 = *(uint *)(lVar28 + 0x18);
      if (uVar11 <= uVar27)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = *(long *)(lVar28 + (int)uVar27 * unaff_x21 + 0x30);
      unaff_x19[200] = lVar29;
      plVar30 = (long *)System_Threading_Mutex_TypeInfo;
      uVar61 = unaff_w25;
    } while (lVar29 == 0);
    lVar35 = lVar28 + (int)uVar27 * unaff_x21;
    lVar29 = *(long *)(lVar35 + 0x38);
    unaff_x19[0x1f] = lVar29;
    unaff_x19[0x22] = *(long *)(lVar35 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar35 + 0x58);
    if (unaff_w20 == 0) {
LAB_0248b014:
      if (lVar29 == 0) goto LAB_02491464;
      fVar49 = *(float *)(unaff_x19 + 0x3c);
      iVar10 = FUN_026fd110(lVar29 + 0x50,0);
      lVar28 = unaff_x19[0x1f];
    }
    else {
      lVar35 = unaff_x19[0x8e];
      if (lVar35 == 0) goto LAB_02491464;
      if (*(uint *)(lVar35 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if ((*(int *)(lVar35 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar27 == *(uint *)(unaff_x19 + 0x92))) goto LAB_0248b014;
      if (uVar11 <= uVar27 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar29 == 0) goto LAB_02491464;
      fVar49 = *(float *)(lVar28 + (long)(int)(uVar27 - 1) * (long)iVar10 + 0x60);
      iVar10 = FUN_026fd110(lVar29 + 0x50,0);
      lVar28 = *unaff_x27;
    }
    if (lVar28 == 0) goto LAB_02491464;
    fVar57 = (float)FUN_026fd120(lVar28 + 0x50,0);
    fVar56 = in_stack_00000080._4_4_;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar56 = fVar53;
    }
    in_stack_00000120 = 0.0;
    in_stack_00000128 = 0.0;
    if ((unaff_w20 & unaff_w25 == 0x2026) == 0) {
      if (*unaff_x27 == 0) goto LAB_02491464;
      in_stack_00000128 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      in_stack_00000120 = (float)FUN_026fd180(*unaff_x27 + 0x50,0);
    }
    lVar28 = unaff_x19[200];
    if ((lVar28 == 0) || (*(long *)(lVar28 + 0x20) == 0)) goto LAB_02491464;
    fVar44 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar51 = *(float *)(lVar28 + 0x2c);
    fVar53 = (float)FUN_026fd668(*(long *)(lVar28 + 0x20),0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar45 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar52 = *(float *)((long)unaff_x19 + 0x3fc);
    in_stack_00000138 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
    lVar28 = unaff_x19[0x6c];
    if ((lVar28 == 0) || (lVar29 = *(long *)(lVar28 + 0x38), lVar29 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar29 = lVar29 + (int)*in_stack_00000148 * unaff_x21;
    *(undefined4 *)(lVar29 + 0x2c) = 0;
    fVar56 = ((in_stack_00000100 * fVar49) / (float)iVar10) * fVar57 * fVar56;
    unaff_s9 = fVar56 * fVar44 * fVar51 * fVar53;
    *(float *)(lVar29 + 0x160) = unaff_s9;
    uVar11 = *(uint *)(unaff_x19 + 0x23);
    in_stack_00000138 = fVar56 * fVar45 * fVar52 * in_stack_00000138;
    if (uVar11 == 0) {
      in_stack_00000130._4_4_ = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar29 = unaff_x19[0xe0];
      if (lVar29 == 0) goto LAB_02491464;
      if (*(uint *)(lVar29 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = *(long *)(lVar29 + (long)(int)uVar11 * 8 + 0x20);
      if (lVar29 == 0) goto LAB_02491464;
      in_stack_00000130._4_4_ = *(float *)(lVar29 + 0x4c);
    }
LAB_0248b384:
    unaff_s13 = 0.0;
    if (unaff_w25 != 3 && unaff_w25 != 0xad) {
      unaff_s13 = unaff_s9;
    }
LAB_0248b39c:
    unaff_s12 = 1.0;
    lVar28 = *(long *)(lVar28 + 0x38);
    if (lVar28 == 0) goto LAB_02491464;
    if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar28 = lVar28 + (int)*in_stack_00000148 * unaff_x21;
    *(short *)(lVar28 + 0x20) = (short)unaff_w25;
    *(int *)(lVar28 + 0x60) = (int)unaff_x19[0x3c];
    *(undefined4 *)(lVar28 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
    if ((unaff_x19[0x6c] == 0) || (lVar28 = *(long *)(unaff_x19[0x6c] + 0x38), lVar28 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar28 + (int)*in_stack_00000148 * unaff_x21 + 0x168) = (int)unaff_x19[0x2a];
    if ((unaff_x19[0x6c] == 0) || (lVar28 = *(long *)(unaff_x19[0x6c] + 0x38), lVar28 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(undefined4 *)(lVar28 + (int)*in_stack_00000148 * unaff_x21 + 0x170) =
         *(undefined4 *)((long)unaff_x19 + 0x154);
    if ((unaff_x19[0x6c] == 0) || (lVar28 = *(long *)(unaff_x19[0x6c] + 0x38), lVar28 == 0))
    goto LAB_02491464;
    uVar11 = *in_stack_00000148;
    FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
                 *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
    if (*(uint *)(lVar28 + 0x18) <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar15 = unaff_x28[1];
    uVar19 = *unaff_x28;
    lVar28 = lVar28 + (int)uVar11 * unaff_x21;
    *(undefined4 *)(lVar28 + 0x18c) = in_stack_00000890;
    *(undefined8 *)(lVar28 + 0x184) = uVar15;
    *(undefined8 *)(lVar28 + 0x17c) = uVar19;
    if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(undefined4 *)(lVar28 + (int)*in_stack_00000148 * unaff_x21 + 400) =
         *(undefined4 *)((long)unaff_x19 + 0x254);
    if ((unaff_x19[200] == 0) || (lVar28 = *(long *)(unaff_x19[200] + 0x20), lVar28 == 0))
    goto LAB_02491464;
    FUN_026fd62c(&stack0x00000bf8,lVar28,0);
    unaff_x28[0x1df] = in_stack_00000c00;
    unaff_x28[0x1de] = CONCAT44(in_stack_00000bfc,in_stack_00000bf8);
    unaff_x26 = in_stack_00000148;
    if ((int)unaff_w25 < 0x10000) goto LAB_0248b4f4;
    uVar11 = 0;
    fVar49 = unaff_s13;
  } while( true );
LAB_0248ef74:
  uVar11 = uVar24 - 1;
  if (*(uint *)(lVar28 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x50), lVar29 == 0))
  goto LAB_02491464;
  lVar16 = (long)(int)uVar11;
  lVar35 = lVar28 + lVar16 * 0x178;
  uVar2 = *(uint *)(lVar35 + 100);
  if (*(uint *)(lVar29 + 0x18) <= uVar2)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar38 = *(long *)(lVar35 + 0x38);
  uVar34 = (uint)*(ushort *)(lVar35 + 0x20);
  lVar37 = (long)(int)uVar2;
  lVar29 = lVar29 + lVar37 * 0x5c;
  uVar33 = *(uint *)(lVar29 + 0x3c);
  uVar61 = *(uint *)(lVar29 + 0x40);
  lVar35 = (long)(int)uVar61;
  iVar13 = *(int *)(lVar29 + 0x28);
  iVar14 = *(int *)(lVar29 + 0x2c);
  uVar42 = *(uint *)(lVar29 + 0x68);
  fVar46 = *(float *)(lVar29 + 0x5c);
  fVar54 = *(float *)(lVar29 + 0x60);
  iVar3 = *(int *)(lVar29 + 0x20);
  fVar51 = *(float *)(lVar29 + 0x4c);
  fVar52 = *(float *)(lVar29 + 0x54);
  fVar57 = *(float *)(lVar29 + 0x58);
  fVar55 = *(float *)(lVar29 + 0x6c);
  fVar50 = *(float *)(lVar29 + 0x70);
  fVar44 = *(float *)(lVar29 + 0x74);
  fVar45 = *(float *)(lVar29 + 0x78);
  fVar58 = fVar46 + fVar54;
  if ((int)uVar42 < 9) {
    switch(uVar42) {
    case 1:
      if ((char)unaff_x19[0x1d] == '\0') {
        fStack00000000000000c4 = fVar54 + 0.0;
      }
      else {
        fStack00000000000000c4 = 0.0 - fVar57;
      }
      break;
    case 2:
LAB_0248f124:
      fStack00000000000000c4 = (fVar54 + fVar46 * 0.5) - fVar57 * 0.5;
      break;
    default:
      goto switchD_0248f070_caseD_3;
    case 4:
      fStack00000000000000c4 = fVar58 - fVar57;
      if ((char)unaff_x19[0x1d] != '\0') {
        fStack00000000000000c4 = fVar58;
      }
      break;
    case 8:
      goto switchD_0248f070_caseD_8;
    }
LAB_0248f194:
    in_stack_000000b8 = 0;
  }
  else if (uVar42 == 0x10) {
switchD_0248f070_caseD_8:
    if (uVar34 < 0xad) {
      if ((uVar34 != 3) && (uVar34 != 10)) goto LAB_0248f0c8;
    }
    else if ((uVar34 != 0xad) && ((uVar34 != 0x200b && (uVar34 != 0x2060)))) {
LAB_0248f0c8:
      if (*(uint *)(lVar28 + 0x18) <= uVar33)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar4 = *(undefined2 *)(lVar28 + (long)(int)uVar33 * 0x178 + 0x20);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_016f9f84(uVar4,0);
      if ((uVar17 & 1) == 0) {
        bVar1 = (int)uVar2 < (int)unaff_x19[0x94];
      }
      else {
        bVar1 = false;
      }
      if ((fVar57 <= fVar46) && (!bVar1 && (uVar42 >> 4 & 1) == 0)) {
        fStack00000000000000c4 = fVar54;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c4 = fVar58;
        }
        goto LAB_0248f194;
      }
      if (((uVar24 == 1) || (uVar2 != uVar27)) || (uVar11 == *(uint *)((long)unaff_x19 + 0x31c))) {
        fStack00000000000000c4 = fVar54;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c4 = fVar58;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fStack0000000000000024 = (float)FUN_016fa418(uVar34,0);
        in_stack_000000b8 = 0;
      }
      else {
        cVar23 = (char)unaff_x19[0x1d];
        fVar54 = -fVar57;
        if (cVar23 != '\0') {
          fVar54 = fVar57;
        }
        if (*(uint *)(lVar28 + 0x18) <= uVar33)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar57 = 1.0;
        iVar14 = (int)*(char *)(lVar28 + (long)(int)uVar33 * 0x178 + 0x194) +
                 (-iVar3 - ((uint)fStack0000000000000024 & 1)) + iVar14 + -1;
        if (0 < iVar14) {
          fVar57 = *(float *)((long)unaff_x19 + 0x2d4);
        }
        if (iVar14 < 1) {
          iVar14 = 1;
        }
        if (uVar34 == 9) {
LAB_02490fe0:
          fVar57 = 1.0 - fVar57;
        }
        else {
          if (uVar34 != 0xa0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar17 = FUN_016fa418(uVar34,0);
            cVar23 = (char)unaff_x19[0x1d];
            if ((uVar17 & 1) != 0) goto LAB_02490fe0;
          }
          iVar14 = (iVar3 - (~(uint)fStack0000000000000024 & 1)) + iVar13;
        }
        fVar57 = ((fVar46 + fVar54) * fVar57) / (float)iVar14;
        if (cVar23 == '\0') {
          fStack00000000000000c4 = fStack00000000000000c4 + fVar57;
          in_stack_000000b8 =
               CONCAT44((float)((ulong)in_stack_000000b8 >> 0x20) + 0.0,
                        (float)in_stack_000000b8 + 0.0);
        }
        else {
          fStack00000000000000c4 = fStack00000000000000c4 - fVar57;
        }
      }
    }
  }
  else if (uVar42 == 0x20) {
    fVar57 = fVar55 + fVar44;
    goto LAB_0248f124;
  }
switchD_0248f070_caseD_3:
  uVar42 = (uint)*(undefined8 *)(lVar28 + 0x18);
  if (uVar42 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar29 = lVar28 + lVar16 * 0x178;
  fVar54 = fStack0000000000000090 + fStack00000000000000c4;
  fVar57 = SUB84(in_stack_00000088,0) + (float)in_stack_000000b8;
  fVar46 = (float)((ulong)in_stack_00000088 >> 0x20) + (float)((ulong)in_stack_000000b8 >> 0x20);
  plVar43 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)(lVar29 + 0x194) == '\0') goto LAB_0248fabc;
  iVar13 = *(int *)(lVar28 + lVar16 * 0x178 + 0x2c);
  if (iVar13 != 0) goto LAB_0248f808;
  fVar56 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar2,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
  case 0:
    lVar26 = lVar28 + lVar16 * 0x178;
    *(undefined4 *)(lVar26 + 0x84) = 0;
    *(undefined4 *)(lVar26 + 0xac) = 0;
    *(undefined4 *)(lVar26 + 0xd4) = 0x3f800000;
    fVar56 = 1.0;
    break;
  case 1:
    fVar45 = *(float *)(lVar28 + lVar16 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
      lVar26 = lVar28 + lVar16 * 0x178;
      fVar44 = (fStack00000000000000c4 + fVar45) - *(float *)(in_stack_00000070 + 0x230);
      fVar45 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      goto LAB_0248f2dc;
    }
    lVar26 = lVar28 + lVar16 * 0x178;
    fVar44 = fVar44 - fVar55;
    *(float *)(lVar26 + 0x84) = fVar56 + (fVar45 - fVar55) / fVar44;
    *(float *)(lVar26 + 0xac) = fVar56 + (*(float *)(lVar26 + 0x98) - fVar55) / fVar44;
    *(float *)(lVar26 + 0xd4) = fVar56 + (*(float *)(lVar26 + 0xc0) - fVar55) / fVar44;
    fVar56 = fVar56 + (*(float *)(lVar26 + 0xe8) - fVar55) / fVar44;
    break;
  case 2:
    lVar26 = lVar28 + lVar16 * 0x178;
    fVar45 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
    fVar44 = (fStack00000000000000c4 + *(float *)(lVar26 + 0x70)) -
             *(float *)(in_stack_00000070 + 0x230);
LAB_0248f2dc:
    *(float *)(lVar26 + 0x84) = fVar56 + fVar44 / fVar45;
    *(float *)(lVar26 + 0xac) =
         fVar56 + ((fStack00000000000000c4 + *(float *)(lVar26 + 0x98)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    *(float *)(lVar26 + 0xd4) =
         fVar56 + ((fStack00000000000000c4 + *(float *)(lVar26 + 0xc0)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    fVar56 = fVar56 + ((fStack00000000000000c4 + *(float *)(lVar26 + 0xe8)) -
                      *(float *)(in_stack_00000070 + 0x230)) /
                      (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x61]) {
    case 0:
      lVar26 = lVar28 + lVar16 * 0x178;
      *(undefined4 *)(lVar26 + 0x88) = 0;
      *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar26 + 0xd8) = 0;
      *(undefined4 *)(lVar26 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar26 = lVar28 + lVar16 * 0x178;
      fVar45 = fVar45 - fVar50;
      fVar44 = fVar56 + (*(float *)(lVar26 + 0x74) - fVar50) / fVar45;
      fVar45 = fVar56 + (*(float *)(lVar26 + 0x9c) - fVar50) / fVar45;
      *(float *)(lVar26 + 0x88) = fVar44;
      *(float *)(lVar26 + 0xb0) = fVar45;
      *(float *)(lVar26 + 0xd8) = fVar44;
      *(float *)(lVar26 + 0x100) = fVar45;
      break;
    case 2:
      lVar26 = lVar28 + lVar16 * 0x178;
      fVar44 = fVar56 + (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                        (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar26 + 0x88) = fVar44;
      fVar45 = *(float *)(unaff_x19 + 0x9b);
      fVar50 = *(float *)(unaff_x19 + 0x9c);
      *(float *)(lVar26 + 0xd8) = fVar44;
      fVar44 = fVar56 + (*(float *)(lVar26 + 0x9c) - fVar45) / (fVar50 - fVar45);
      *(float *)(lVar26 + 0xb0) = fVar44;
      *(float *)(lVar26 + 0x100) = fVar44;
      break;
    case 3:
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
      uVar42 = (uint)*(undefined8 *)(lVar28 + 0x18);
    }
    if (uVar42 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar28 + lVar16 * 0x178;
    fVar44 = *(float *)(lVar26 + 0x15c);
    fVar45 = (1.0 - (*(float *)(lVar26 + 0x88) + *(float *)(lVar26 + 0xb0)) * fVar44) * 0.5;
    fVar50 = fVar56 + *(float *)(lVar26 + 0x88) * fVar44 + fVar45;
    fVar56 = fVar56 + fVar45 + *(float *)(lVar26 + 0xb0) * fVar44;
    *(float *)(lVar26 + 0x84) = fVar50;
    *(float *)(lVar26 + 0xac) = fVar50;
    *(float *)(lVar26 + 0xd4) = fVar56;
    break;
  default:
    goto switchD_0248f240_default;
  }
  *(float *)(lVar28 + lVar16 * 0x178 + 0xfc) = fVar56;
switchD_0248f240_default:
  switch((int)unaff_x19[0x61]) {
  case 0:
    if (uVar42 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar28 + lVar16 * 0x178;
    *(undefined4 *)(lVar26 + 0x88) = 0;
    *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar26 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar26 + 0x100) = 0;
    break;
  case 1:
    if (uVar11 < uVar42) {
      lVar26 = lVar28 + lVar16 * 0x178;
      fVar51 = fVar51 - fVar52;
      fVar56 = (*(float *)(lVar26 + 0x74) - fVar52) / fVar51;
      fVar51 = (*(float *)(lVar26 + 0x9c) - fVar52) / fVar51;
      *(float *)(lVar26 + 0x88) = fVar56;
      goto LAB_0248f644;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  case 2:
    if (uVar42 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar28 + lVar16 * 0x178;
    fVar56 = (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
    *(float *)(lVar26 + 0x88) = fVar56;
    fVar51 = (*(float *)(lVar26 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_0248f644:
    *(float *)(lVar26 + 0xb0) = fVar51;
    *(float *)(lVar26 + 0xd8) = fVar51;
    *(float *)(lVar26 + 0x100) = fVar56;
    break;
  case 3:
    if (uVar42 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar28 + lVar16 * 0x178;
    fVar51 = *(float *)(lVar26 + 0x15c);
    fVar44 = (1.0 - (*(float *)(lVar26 + 0x84) + *(float *)(lVar26 + 0xd4)) / fVar51) * 0.5;
    fVar56 = *(float *)(lVar26 + 0x84) / fVar51 + fVar44;
    fVar44 = fVar44 + *(float *)(lVar26 + 0xd4) / fVar51;
    *(float *)(lVar26 + 0x88) = fVar56;
    *(float *)(lVar26 + 0xb0) = fVar44;
    *(float *)(lVar26 + 0x100) = fVar56;
    *(float *)(lVar26 + 0xd8) = fVar44;
  }
  if (uVar42 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar26 = lVar28 + lVar16 * 0x178;
  fVar56 = ABS(fVar49) * *(float *)(lVar26 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
  if ((*(char *)(lVar26 + 0x5c) == '\0') && ((*(byte *)(lVar28 + lVar16 * 0x178 + 400) & 1) != 0)) {
    fVar56 = -fVar56;
  }
  lVar26 = lVar28 + lVar16 * 0x178;
  fVar51 = *(float *)(lVar26 + 0x88);
  fVar45 = *(float *)(lVar26 + 0x84);
  fVar44 = -2.1474836e+09;
  if (fVar45 != INFINITY) {
    fVar44 = (float)(int)fVar45;
  }
  fVar50 = *(float *)(lVar26 + 0xd4);
  fVar55 = *(float *)(lVar26 + 0xd8);
  fVar52 = -2.1474836e+09;
  if (fVar51 != INFINITY) {
    fVar52 = (float)(int)fVar51;
  }
  uVar60 = FUN_024e0374(fVar45 - fVar44,fVar51 - fVar52);
  *(undefined4 *)(lVar26 + 0x84) = uVar60;
  if (*(uint *)(lVar28 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar55 = fVar55 - fVar52;
  *(float *)(lVar26 + 0x88) = fVar56;
  uVar60 = FUN_024e0374(fVar45 - fVar44,fVar55);
  *(undefined4 *)(lVar28 + lVar16 * 0x178 + 0xac) = uVar60;
  if (*(uint *)(lVar28 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar50 = fVar50 - fVar44;
  *(float *)(lVar28 + lVar16 * 0x178 + 0xb0) = fVar56;
  fVar44 = (float)FUN_024e0374(fVar50,fVar55);
  *(float *)(lVar26 + 0xd4) = fVar44;
  if (*(uint *)(lVar28 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar26 + 0xd8) = fVar56;
  uVar60 = FUN_024e0374(fVar50,fVar51 - fVar52);
  *(undefined4 *)(lVar28 + lVar16 * 0x178 + 0xfc) = uVar60;
  uVar42 = (uint)*(undefined8 *)(lVar28 + 0x18);
  if (uVar42 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar28 + lVar16 * 0x178 + 0x100) = fVar56;
LAB_0248f808:
  if (((int)uVar11 < (int)unaff_x19[100]) &&
     (iStack00000000000000a4 < *(int *)((long)unaff_x19 + 0x324))) {
    if (((int)uVar2 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar42 <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = lVar28 + lVar16 * 0x178;
      *(ulong *)(lVar29 + 0x70) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar29 + 0x70) >> 0x20),
                    fVar54 + (float)*(undefined8 *)(lVar29 + 0x70));
      *(float *)(lVar29 + 0x78) = fVar46 + *(float *)(lVar29 + 0x78);
      plVar43 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(uint *)(lVar28 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = lVar28 + lVar16 * 0x178;
      *(ulong *)(lVar29 + 0x98) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar29 + 0x98) >> 0x20),
                    fVar54 + (float)*(undefined8 *)(lVar29 + 0x98));
      *(float *)(lVar29 + 0xa0) = fVar46 + *(float *)(lVar29 + 0xa0);
      uVar42 = *(uint *)(lVar28 + 0x18);
LAB_0248fa4c:
      if (uVar42 <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = lVar28 + lVar16 * 0x178;
      *(ulong *)(lVar29 + 0xc0) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar29 + 0xc0) >> 0x20),
                    fVar54 + (float)*(undefined8 *)(lVar29 + 0xc0));
      *(float *)(lVar29 + 200) = fVar46 + *(float *)(lVar29 + 200);
      if (*(uint *)(lVar28 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = lVar28 + lVar16 * 0x178;
      *(ulong *)(lVar29 + 0xe8) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar29 + 0xe8) >> 0x20),
                    fVar54 + (float)*(undefined8 *)(lVar29 + 0xe8));
      *(float *)(lVar29 + 0xf0) = fVar46 + *(float *)(lVar29 + 0xf0);
      if (iVar13 != 0) goto LAB_0248f9d0;
LAB_0248fa9c:
      pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0248faa8:
      (*pcVar32)();
      goto LAB_0248fabc;
    }
    if (((int)uVar2 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
      if (uVar11 < uVar42) {
        if (*(uint *)(lVar28 + lVar16 * 0x178 + 0x68) != uStack0000000000000030) goto LAB_0248f8d8;
        lVar29 = lVar28 + lVar16 * 0x178;
        *(ulong *)(lVar29 + 0x70) =
             CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar29 + 0x70) >> 0x20),
                      fVar54 + (float)*(undefined8 *)(lVar29 + 0x70));
        *(float *)(lVar29 + 0x78) = fVar46 + *(float *)(lVar29 + 0x78);
        if (uVar11 < *(uint *)(lVar28 + 0x18)) {
          lVar29 = lVar28 + lVar16 * 0x178;
          *(ulong *)(lVar29 + 0x98) =
               CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar29 + 0x98) >> 0x20),
                        fVar54 + (float)*(undefined8 *)(lVar29 + 0x98));
          *(float *)(lVar29 + 0xa0) = fVar46 + *(float *)(lVar29 + 0xa0);
          uVar42 = *(uint *)(lVar28 + 0x18);
          plVar43 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          goto LAB_0248fa4c;
        }
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    }
  }
LAB_0248f8d8:
  if (uVar42 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  puVar7 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  lVar26 = lVar28 + lVar16 * 0x178;
  uVar60 = *(undefined4 *)
            (*(undefined8 **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8) + 1);
  *(undefined8 *)(lVar26 + 0x70) =
       **(undefined8 **)
         (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
         0xb8);
  *(undefined4 *)(lVar26 + 0x78) = uVar60;
  plVar43 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(uint *)(lVar28 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar26 = lVar28 + lVar16 * 0x178;
  uVar60 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar26 + 0xa0) = uVar60;
  if (*(uint *)(lVar28 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar26 = lVar28 + lVar16 * 0x178;
  uVar60 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar26 + 200) = uVar60;
  if (*(uint *)(lVar28 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar26 = lVar28 + lVar16 * 0x178;
  uVar60 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar26 + 0xf0) = uVar60;
  if (*(uint *)(lVar28 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined1 *)(lVar29 + 0x194) = 0;
  if (iVar13 == 0) goto LAB_0248fa9c;
LAB_0248f9d0:
  if (iVar13 == 1) {
    pcVar32 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_0248faa8;
  }
LAB_0248fabc:
  if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar29 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar29 = lVar29 + lVar16 * 0x178;
  uVar19 = *(undefined8 *)(lVar29 + 0x11c);
  *(undefined8 *)(lVar29 + 0x11c) =
       CONCAT44(fVar57 + (float)((ulong)uVar19 >> 0x20),fVar54 + (float)uVar19);
  *(float *)(lVar29 + 0x124) = fVar46 + *(float *)(lVar29 + 0x124);
  if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar29 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar29 = lVar29 + lVar16 * 0x178;
  *(ulong *)(lVar29 + 0x110) =
       CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar29 + 0x110) >> 0x20),
                fVar54 + (float)*(undefined8 *)(lVar29 + 0x110));
  *(float *)(lVar29 + 0x118) = fVar46 + *(float *)(lVar29 + 0x118);
  if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar29 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar29 = lVar29 + lVar16 * 0x178;
  *(ulong *)(lVar29 + 0x128) =
       CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar29 + 0x128) >> 0x20),
                fVar54 + (float)*(undefined8 *)(lVar29 + 0x128));
  *(float *)(lVar29 + 0x130) = fVar46 + *(float *)(lVar29 + 0x130);
  if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar29 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar29 = lVar29 + lVar16 * 0x178;
  *(float *)(lVar29 + 0x134) = fVar54 + *(float *)(lVar29 + 0x134);
  *(ulong *)(lVar29 + 0x138) =
       CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar29 + 0x138) >> 0x20),
                fVar57 + (float)*(undefined8 *)(lVar29 + 0x138));
  lVar29 = *in_stack_00000150;
  if ((lVar29 == 0) || (lVar26 = *(long *)(lVar29 + 0x38), lVar26 == 0)) goto LAB_02491464;
  uVar42 = *(uint *)(lVar26 + 0x18);
  if (uVar42 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar39 = lVar26 + lVar16 * 0x178;
  *(ulong *)(lVar39 + 0x140) =
       CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar39 + 0x140) >> 0x20),
                fVar54 + (float)*(undefined8 *)(lVar39 + 0x140));
  *(ulong *)(lVar39 + 0x148) =
       CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar39 + 0x148) >> 0x20),
                fVar57 + (float)*(undefined8 *)(lVar39 + 0x148));
  *(float *)(lVar39 + 0x150) = fVar57 + *(float *)(lVar39 + 0x150);
  if (uVar2 == uVar27) {
    uVar27 = *in_stack_00000148 - 1;
    if (uVar11 == uVar27) goto LAB_0248fccc;
  }
  else {
    lVar29 = *(long *)(lVar29 + 0x50);
    if (lVar29 == 0) goto LAB_02491464;
    if (*(uint *)(lVar29 + 0x18) <= uVar27)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar39 = (long)(int)uVar27;
    lVar40 = lVar29 + lVar39 * 0x5c;
    fVar44 = fVar57 + *(float *)(lVar40 + 0x54);
    *(ulong *)(lVar40 + 0x4c) =
         CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar40 + 0x4c) >> 0x20),
                  fVar57 + (float)*(undefined8 *)(lVar40 + 0x4c));
    *(float *)(lVar40 + 0x54) = fVar44;
    *(float *)(lVar40 + 0x58) = fVar54 + *(float *)(lVar40 + 0x58);
    if (uVar42 <= *(uint *)(lVar40 + 0x34))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar60 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar40 + 0x34) * 0x178 + 0x11c);
    lVar29 = lVar29 + lVar39 * 0x5c;
    *(float *)(lVar29 + 0x70) = fVar44;
    *(undefined4 *)(lVar29 + 0x6c) = uVar60;
    lVar29 = *in_stack_00000150;
    if ((lVar29 == 0) || (lVar26 = *(long *)(lVar29 + 0x50), lVar26 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar26 + 0x18) <= uVar27)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar29 = *(long *)(lVar29 + 0x38);
    if (lVar29 == 0) goto LAB_02491464;
    uVar27 = *(uint *)(lVar26 + lVar39 * 0x5c + 0x40);
    if (*(uint *)(lVar29 + 0x18) <= uVar27)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar26 + lVar39 * 0x5c;
    *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar29 + (long)(int)uVar27 * 0x178 + 0x128);
    *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
    uVar27 = *in_stack_00000148 - 1;
LAB_0248fccc:
    if (uVar11 == uVar27) {
      lVar29 = *in_stack_00000150;
      if ((lVar29 == 0) || (lVar26 = *(long *)(lVar29 + 0x50), lVar26 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar26 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar39 = lVar26 + lVar37 * 0x5c;
      fVar44 = fVar57 + *(float *)(lVar39 + 0x54);
      *(ulong *)(lVar39 + 0x4c) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar39 + 0x4c) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar39 + 0x4c));
      *(float *)(lVar39 + 0x54) = fVar44;
      *(float *)(lVar39 + 0x58) = fVar54 + *(float *)(lVar39 + 0x58);
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_02491464;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(lVar39 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar60 = *(undefined4 *)(lVar29 + (long)(int)*(uint *)(lVar39 + 0x34) * 0x178 + 0x11c);
      lVar26 = lVar26 + lVar37 * 0x5c;
      *(float *)(lVar26 + 0x70) = fVar44;
      *(undefined4 *)(lVar26 + 0x6c) = uVar60;
      lVar29 = *in_stack_00000150;
      if ((lVar29 == 0) || (lVar26 = *(long *)(lVar29 + 0x50), lVar26 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar26 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_02491464;
      uVar27 = *(uint *)(lVar26 + lVar37 * 0x5c + 0x40);
      if (*(uint *)(lVar29 + 0x18) <= uVar27)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar26 = lVar26 + lVar37 * 0x5c;
      *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar29 + (long)(int)uVar27 * 0x178 + 0x128);
      *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
    }
  }
  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar17 = FUN_016f9468(uVar34,0);
  if (((((uVar17 & 1) == 0) && (1 < uVar34 - 0x2010)) && (uVar34 != 0xad)) && (uVar34 != 0x2d)) {
    if (bVar8) {
      if (((uVar24 != 1) && ((int)uVar11 < (int)(*(uint *)(lVar28 + 0x18) - 1))) &&
         (((int)uVar11 < (int)*in_stack_00000148 && ((uVar34 == 0x2019 || (uVar34 == 0x27)))))) {
        if (*(uint *)(lVar28 + 0x18) <= uVar24 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar4 = *(undefined2 *)(lVar28 + _in_stack_00000128 + -0x438);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_016f9468(uVar4,0);
        if ((uVar17 & 1) != 0) {
          if (*(uint *)(lVar28 + 0x18) <= uVar24)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar4 = *(undefined2 *)(lVar28 + _in_stack_00000128 + -0x148);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar17 = FUN_016f9468(uVar4,0);
          if ((uVar17 & 1) != 0) goto LAB_0248fee0;
        }
      }
    }
    else {
      if (uVar24 != 1) {
LAB_024909a0:
        bVar8 = false;
        goto LAB_0248fee8;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_016f93a0(uVar34,0);
      if ((uVar17 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_016f68bc(uVar34,0);
        if (((uVar34 != 0x200b) && ((uVar17 & 1) == 0)) && (*in_stack_00000148 != 1))
        goto LAB_024909a0;
      }
    }
    if (uVar11 == *in_stack_00000148 - 1) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_016f9468(uVar34,0);
      iVar13 = iVar12;
      if ((uVar17 & 1) == 0) goto LAB_02490204;
    }
    else {
LAB_02490204:
      iVar13 = uVar24 - 2;
    }
    lVar29 = *in_stack_00000150;
    if (lVar29 == 0) goto LAB_02491464;
    lVar26 = *(long *)(lVar29 + 0x40);
    if (lVar26 == 0) goto LAB_02491464;
    uVar27 = *(uint *)(lVar29 + 0x24);
    iVar14 = *(int *)(lVar26 + 0x18);
    if (iVar14 < (int)(uVar27 + 1)) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147b84((long *)(lVar29 + 0x40),iVar14 + 1,
                   *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
      lVar29 = *in_stack_00000150;
      if (lVar29 == 0) goto LAB_02491464;
    }
    lVar26 = *(long *)(lVar29 + 0x40);
    if (lVar26 == 0) goto LAB_02491464;
    if (*(uint *)(lVar26 + 0x18) <= uVar27)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar26 + (long)(int)uVar27 * 0x18;
    *(long **)(lVar26 + 0x20) = unaff_x19;
    *(uint *)(lVar26 + 0x28) = uStack0000000000000114;
    *(int *)(lVar26 + 0x2c) = iVar13;
    *(uint *)(lVar26 + 0x30) = (iVar13 - uStack0000000000000114) + 1;
    lVar26 = *(long *)(lVar29 + 0x50);
    *(int *)(lVar29 + 0x24) = *(int *)(lVar29 + 0x24) + 1;
    if (lVar26 == 0) goto LAB_02491464;
    if (*(uint *)(lVar26 + 0x18) <= uVar2)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar26 + lVar37 * 0x5c;
    bVar8 = false;
    iStack00000000000000a4 = iStack00000000000000a4 + 1;
    *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
  }
  else {
    if (!bVar8) {
      uStack0000000000000114 = uVar11;
    }
    if (uVar11 == *in_stack_00000148 - 1) {
      lVar29 = *in_stack_00000150;
      if (lVar29 == 0) goto LAB_02491464;
      lVar26 = *(long *)(lVar29 + 0x40);
      if (lVar26 == 0) goto LAB_02491464;
      uVar27 = *(uint *)(lVar29 + 0x24);
      iVar13 = *(int *)(lVar26 + 0x18);
      if (iVar13 < (int)(uVar27 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar29 + 0x40),iVar13 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar29 = *in_stack_00000150;
        if (lVar29 == 0) goto LAB_02491464;
      }
      lVar26 = *(long *)(lVar29 + 0x40);
      if (lVar26 == 0) goto LAB_02491464;
      if (*(uint *)(lVar26 + 0x18) <= uVar27)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar26 = lVar26 + (long)(int)uVar27 * 0x18;
      *(long **)(lVar26 + 0x20) = unaff_x19;
      *(uint *)(lVar26 + 0x28) = uStack0000000000000114;
      *(uint *)(lVar26 + 0x2c) = uVar11;
      *(uint *)(lVar26 + 0x30) = uVar24 - uStack0000000000000114;
      lVar26 = *(long *)(lVar29 + 0x50);
      *(int *)(lVar29 + 0x24) = *(int *)(lVar29 + 0x24) + 1;
      if (lVar26 == 0) goto LAB_02491464;
      if (*(uint *)(lVar26 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar26 = lVar26 + lVar37 * 0x5c;
      iStack00000000000000a4 = iStack00000000000000a4 + 1;
      *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
    }
LAB_0248fee0:
    bVar8 = true;
  }
LAB_0248fee8:
  if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
  goto LAB_02491464;
  uVar27 = *(uint *)(lVar29 + 0x18);
  if (uVar27 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar29 + lVar16 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar9) {
LAB_0248ff18:
      if (uVar27 <= uVar24 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar37 = *unaff_x19;
      uVar60 = *(undefined4 *)(lVar29 + _in_stack_00000128 + -0x330);
      uVar48 = *(undefined4 *)(lVar29 + _in_stack_00000128 + -0x2f8);
LAB_02490474:
      pcVar32 = *(code **)(lVar37 + 0x908);
LAB_0249047c:
      (*pcVar32)(fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,uVar60,
                 fStack00000000000000cc,0,fStack0000000000000058,uVar48);
      puVar7 = System_Threading_Mutex_TypeInfo;
      lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar29 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar29 = *(long *)puVar7;
      }
LAB_024904cc:
      bVar9 = false;
      fVar53 = 0.0;
      fStack00000000000000cc = *(float *)(*(long *)(lVar29 + 0xb8) + 0x15a8);
      in_stack_000000c8 = 0.0;
    }
    else {
LAB_024903d8:
      bVar9 = false;
    }
  }
  else {
    lVar29 = lVar29 + lVar16 * 0x178;
    iVar13 = *(int *)(lVar29 + 0x68);
    *(int *)(lVar29 + 0x16c) = iVar10;
    if ((((int)unaff_x19[100] < (int)uVar11) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
       (((int)unaff_x19[0x5b] == 5 && (iVar13 + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar17 = FUN_016f68bc(uVar34,0);
    if ((uVar34 != 0x200b) && ((uVar17 & 1) == 0)) {
      lVar29 = *in_stack_00000150;
      if ((lVar29 == 0) || (lVar37 = *(long *)(lVar29 + 0x38), lVar37 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar37 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar44 = *(float *)(lVar37 + lVar16 * 0x178 + 0x160);
      if (fVar53 <= fVar44) {
        fVar53 = fVar44;
      }
      if (in_stack_000000c8 <= ABS(fVar56)) {
        in_stack_000000c8 = ABS(fVar56);
      }
      if ((float)iVar13 != fStack0000000000000048) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar29 = *in_stack_00000150;
          if (lVar29 == 0) goto LAB_02491464;
          lVar37 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        else {
          lVar37 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        fStack00000000000000cc = *(float *)(lVar37 + 0x15a8);
      }
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_02491464;
      if (*(uint *)(lVar29 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0x1e] == 0) goto LAB_02491464;
      fVar51 = *(float *)(lVar29 + lVar16 * 0x178 + 0x14c);
      fVar44 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
      fVar51 = fVar51 + fVar53 * fVar44;
      fStack0000000000000048 = (float)iVar13;
      if (fVar51 <= fStack00000000000000cc) {
        fStack00000000000000cc = fVar51;
      }
    }
    if (!bVar9) {
      bVar9 = false;
      if ((((uVar34 == 0xd) || ((uVar34 | 1) == 0xb)) || ((int)uVar61 < (int)uVar11)) || (!bVar1))
      goto LAB_024904e8;
      if (uVar11 == uVar61) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_016fa418(uVar34,0);
        if ((uVar17 & 1) != 0) goto LAB_024903d8;
      }
      if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar29 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = lVar29 + lVar16 * 0x178;
      fStack0000000000000058 = *(float *)(lVar29 + 0x160);
      fStack0000000000000054 = *(float *)(lVar29 + 0x11c);
      bVar9 = fVar53 != 0.0;
      fVar44 = fStack0000000000000058;
      if (bVar9) {
        fVar44 = fVar53;
      }
      fVar53 = fVar44;
      _bStack000000000000005c = *(uint *)(lVar29 + 0x168);
      fStack0000000000000050 = 0.0;
      fVar44 = fVar56;
      if (bVar9) {
        fVar44 = in_stack_000000c8;
      }
      fStack000000000000004c = fStack00000000000000cc;
      in_stack_000000c8 = fVar44;
    }
    if (*in_stack_00000148 == 1) {
      if ((*in_stack_00000150 != 0) && (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 != 0))
      {
        if (uVar11 < *(uint *)(lVar29 + 0x18)) {
          lVar29 = lVar29 + lVar16 * 0x178;
          lVar37 = *unaff_x19;
          uVar60 = *(undefined4 *)(lVar29 + 0x128);
          uVar48 = *(undefined4 *)(lVar29 + 0x160);
          goto LAB_02490474;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    if ((uVar11 == uVar33) || ((int)uVar61 <= (int)uVar11)) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_016f68bc(uVar34,0);
      if ((*in_stack_00000150 != 0) && (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 != 0))
      {
        if (uVar34 == 0x200b || (uVar17 & 1) != 0) {
          lVar37 = lVar35;
          if (*(uint *)(lVar29 + 0x18) <= uVar61)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
          lVar37 = lVar16;
          if (*(uint *)(lVar29 + 0x18) <= uVar11)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        lVar29 = lVar29 + lVar37 * 0x178;
        uVar60 = *(undefined4 *)(lVar29 + 0x128);
        uVar48 = *(undefined4 *)(lVar29 + 0x160);
        pcVar32 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_0249047c;
      }
      goto LAB_02491464;
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 != 0))
      {
        uVar27 = *(uint *)(lVar29 + 0x18);
        goto LAB_0248ff18;
      }
      goto LAB_02491464;
    }
    if ((int)uVar11 < (int)(*in_stack_00000148 - 1)) {
      if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar29 + 0x18) <= uVar24)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar17 = FUN_024a9e4c(_bStack000000000000005c,*(undefined4 *)(lVar29 + _in_stack_00000128),0);
      if ((uVar17 & 1) == 0) {
        if ((*in_stack_00000150 != 0) &&
           (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 != 0)) {
          if (uVar11 < *(uint *)(lVar29 + 0x18)) {
            lVar29 = lVar29 + lVar16 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,
                       *(undefined4 *)(lVar29 + 0x128),fStack00000000000000cc,0,
                       fStack0000000000000058,*(undefined4 *)(lVar29 + 0x160));
            puVar7 = System_Threading_Mutex_TypeInfo;
            lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar29 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar29 = *(long *)puVar7;
            }
            goto LAB_024904cc;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        goto LAB_02491464;
      }
    }
    bVar9 = true;
  }
LAB_024904e8:
  if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar29 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (lVar38 == 0) goto LAB_02491464;
  uVar27 = *(uint *)(lVar29 + lVar16 * 0x178 + 400);
  fVar44 = (float)FUN_026fd1f0(lVar38 + 0x50,0);
  if ((uVar27 >> 6 & 1) == 0) {
    if (bVar5) {
      if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar29 + 0x18) <= uVar24 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar60 = *(undefined4 *)(lVar29 + _in_stack_00000128 + -0x330);
      pcVar32 = *(code **)(*unaff_x19 + 0x908);
      fVar57 = in_stack_00000080._4_4_ * fVar44 + *(float *)(lVar29 + _in_stack_00000128 + -0x30c);
LAB_02490a68:
      (*pcVar32)(in_stack_00000078._4_4_,in_stack_00000068._4_4_,uStack0000000000000060,uVar60,
                 fVar57,0,in_stack_00000080._4_4_,in_stack_00000080._4_4_);
    }
LAB_02490a9c:
    bVar5 = false;
  }
  else {
    lVar29 = *in_stack_00000150;
    if ((lVar29 == 0) || (lVar37 = *(long *)(lVar29 + 0x38), lVar37 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar37 + 0x18) <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar37 + lVar16 * 0x178 + 0x174) = iVar10;
    if ((((int)unaff_x19[100] < (int)uVar11) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar37 + lVar16 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar34 == 0xd) || ((uVar34 | 1) == 0xb)) || ((int)uVar61 < (int)uVar11)) ||
       (bVar5 || !bVar1)) {
LAB_02490668:
      if (!bVar5) goto LAB_02490a9c;
    }
    else {
      if (uVar11 == uVar61) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_016fa418(uVar34,0);
        if ((uVar17 & 1) != 0) goto LAB_02490668;
        lVar29 = *in_stack_00000150;
        if (lVar29 == 0) goto LAB_02491464;
      }
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_02491464;
      if (*(uint *)(lVar29 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = lVar29 + lVar16 * 0x178;
      fStack0000000000000038 = *(float *)(lVar29 + 0x60);
      in_stack_00000080._4_4_ = *(float *)(lVar29 + 0x160);
      fStack0000000000000034 = *(float *)(lVar29 + 0x14c);
      in_stack_00000078._4_4_ = *(float *)(lVar29 + 0x11c);
      in_stack_00000068._4_4_ = fVar44 * in_stack_00000080._4_4_ + fStack0000000000000034;
      uStack0000000000000060 = 0;
    }
    uVar27 = *in_stack_00000148;
    if (uVar27 == 1) {
      if (*in_stack_00000150 != 0) {
        lVar29 = *(long *)(*in_stack_00000150 + 0x38);
joined_r0x024907c8:
        if (lVar29 != 0) {
          if (uVar11 < *(uint *)(lVar29 + 0x18)) {
            lVar29 = lVar29 + lVar16 * 0x178;
            lVar35 = *unaff_x19;
            uVar60 = *(undefined4 *)(lVar29 + 0x128);
            fVar57 = *(float *)(lVar29 + 0x14c);
LAB_024907e8:
            pcVar32 = *(code **)(lVar35 + 0x908);
LAB_02490a64:
            fVar57 = fVar44 * in_stack_00000080._4_4_ + fVar57;
            goto LAB_02490a68;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      goto LAB_02491464;
    }
    if (uVar11 == uVar33) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_016f68bc(uVar34,0);
      if ((*in_stack_00000150 != 0) && (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 != 0))
      {
        uVar27 = *(uint *)(lVar29 + 0x18);
        if (uVar34 == 0x200b || (uVar17 & 1) != 0) {
          if (uVar27 <= uVar61)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
LAB_02490a40:
          lVar35 = lVar16;
          if (uVar27 <= uVar11)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
LAB_02490a48:
        lVar29 = lVar29 + lVar35 * 0x178;
        fVar57 = *(float *)(lVar29 + 0x14c);
        uVar60 = *(undefined4 *)(lVar29 + 0x128);
        pcVar32 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_02490a64;
      }
      goto LAB_02491464;
    }
    if ((int)uVar11 < (int)uVar27) {
      lVar29 = *in_stack_00000150;
      if ((lVar29 != 0) && (lVar37 = *(long *)(lVar29 + 0x38), lVar37 != 0)) {
        if (uVar24 < *(uint *)(lVar37 + 0x18)) {
          if (*(float *)(lVar37 + _in_stack_00000128 + -0x108) == fStack0000000000000038) {
            fVar51 = *(float *)(lVar37 + _in_stack_00000128 + -0x1c);
            if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar17 = FUN_024aa280(fVar57 + fVar51,fStack0000000000000034,0);
            if ((uVar17 & 1) != 0) {
              uVar27 = *in_stack_00000148;
              goto LAB_024908ec;
            }
            lVar29 = *in_stack_00000150;
            if (lVar29 == 0) goto LAB_02491464;
          }
          lVar29 = *(long *)(lVar29 + 0x38);
          if (lVar29 != 0) {
            uVar27 = *(uint *)(lVar29 + 0x18);
            if ((int)uVar11 <= (int)uVar61) goto LAB_02490a40;
            if (uVar61 < uVar27) goto LAB_02490a48;
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          goto LAB_02491464;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_024908ec:
    if ((int)uVar11 < (int)uVar27) {
      iVar13 = FUN_02681c0c(lVar38,0);
      if (*(uint *)(lVar28 + 0x18) <= uVar24)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = *(long *)(lVar28 + _in_stack_00000128 + -0x130);
      if (lVar29 == 0) goto LAB_02491464;
      iVar14 = FUN_02681c0c(lVar29,0);
      if (iVar13 != iVar14) {
        if (*in_stack_00000150 != 0) {
          lVar29 = *(long *)(*in_stack_00000150 + 0x38);
          goto joined_r0x024907c8;
        }
        goto LAB_02491464;
      }
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 != 0))
      {
        if (uVar24 - 2 < *(uint *)(lVar29 + 0x18)) {
          lVar35 = *unaff_x19;
          uVar60 = *(undefined4 *)(lVar29 + _in_stack_00000128 + -0x330);
          fVar57 = *(float *)(lVar29 + _in_stack_00000128 + -0x30c);
          goto LAB_024907e8;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    bVar5 = true;
  }
  if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
  goto LAB_02491464;
  uVar27 = (uint)*(undefined8 *)(lVar29 + 0x18);
  if (uVar27 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar29 + lVar16 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar6) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
    }
LAB_02490b04:
    bVar6 = false;
  }
  else {
    if ((((int)unaff_x19[100] < (int)uVar11) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar29 + lVar16 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar6) {
      if ((((uVar34 == 0xd) || ((uVar34 | 1) == 0xb)) || ((int)uVar61 < (int)uVar11)) || (!bVar1))
      goto LAB_02490b04;
      if (uVar11 == uVar61) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_016fa418(uVar34,0);
        if ((uVar17 & 1) != 0) goto LAB_02490b04;
      }
      puVar7 = System_Threading_Mutex_TypeInfo;
      lVar35 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar35 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar35 = *(long *)puVar7;
      }
      if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
      goto LAB_02491464;
      uVar27 = (uint)*(undefined8 *)(lVar29 + 0x18);
      if (uVar27 <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar35 = *(long *)(lVar35 + 0xb8);
      lVar37 = lVar29 + lVar16 * 0x178;
      in_stack_00001798 = *(undefined8 *)(lVar37 + 0x184);
      in_stack_00001790 = *(undefined8 *)(lVar37 + 0x17c);
      fStack00000000000000a8 = *(float *)(lVar35 + 0x1598);
      in_stack_000017a0 = *(float *)(lVar37 + 0x18c);
      fStack00000000000000ac = *(float *)(lVar35 + 0x159c);
      fStack0000000000000098 = *(float *)(lVar35 + 0x15a0);
      in_stack_000000a0 = *(float *)(lVar35 + 0x15a4);
      uStack0000000000000094 = 0;
    }
    if (uVar27 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar29 = lVar29 + lVar16 * 0x178;
    fVar44 = *(float *)(lVar29 + 0x128);
    fVar52 = *(float *)(lVar29 + 0x188);
    uVar15 = *(undefined8 *)(lVar29 + 0x17c);
    fVar55 = *(float *)(lVar29 + 0x184);
    uVar19 = *(undefined8 *)(lVar29 + 0x184);
    fVar50 = *(float *)(lVar29 + 0x18c);
    fVar57 = *(float *)(lVar29 + 0x11c);
    fVar51 = *(float *)(lVar29 + 0x148);
    fVar45 = *(float *)(lVar29 + 0x150);
    in_stack_00000158 = uVar15;
    fStack0000000000000160 = fVar55;
    fStack0000000000000164 = fVar52;
    in_stack_00000168 = fVar50;
    in_stack_00000170 = in_stack_00001790;
    in_stack_00000178 = in_stack_00001798;
    in_stack_00000180 = in_stack_000017a0;
    uVar17 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
    lVar29 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if ((uVar17 & 1) == 0) {
      if (*(int *)(lVar29 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar29);
      }
      fVar44 = fVar44 + (float)in_stack_00001798;
      fVar57 = fVar57 - (float)((ulong)in_stack_00001790 >> 0x20);
      fVar51 = fVar51 + (float)((ulong)in_stack_00001798 >> 0x20);
      if (fVar57 <= fStack00000000000000a8) {
        fStack00000000000000a8 = fVar57;
      }
      if (fVar45 - in_stack_000017a0 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar45 - in_stack_000017a0;
      }
      if (fStack0000000000000098 <= fVar44) {
        fStack0000000000000098 = fVar44;
      }
      if (in_stack_000000a0 <= fVar51) {
        in_stack_000000a0 = fVar51;
      }
    }
    else {
      if (*(int *)(lVar29 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar29);
      }
      fVar57 = (fVar57 + (fStack0000000000000098 - (float)in_stack_00001798)) * 0.5;
      if (fVar45 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar45;
      }
      if (in_stack_000000a0 <= fVar51) {
        in_stack_000000a0 = fVar51;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar57,
                 in_stack_000000a0,uStack0000000000000094);
      fStack00000000000000ac = fVar45 - fVar50;
      fStack0000000000000098 = fVar44 + fVar55;
      uStack0000000000000094 = 0;
      in_stack_000000a0 = fVar51 + fVar52;
      fStack00000000000000a8 = fVar57;
      in_stack_00001790 = uVar15;
      in_stack_00001798 = uVar19;
      in_stack_000017a0 = fVar50;
    }
    if (((*in_stack_00000148 == 1) || (uVar11 == uVar33)) ||
       (((int)uVar61 <= (int)uVar11 || (!bVar1)))) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
  }
  uVar11 = *in_stack_00000148;
  iVar12 = iVar12 + 1;
  _in_stack_00000128 = _in_stack_00000128 + 0x178;
  bVar1 = (int)uVar11 <= (int)uVar24;
  uVar27 = uVar2;
  uVar24 = uVar24 + 1;
  if (bVar1) goto LAB_02491038;
  goto LAB_0248ef74;
LAB_0248b4f4:
  param_1 = *(long *)Newtonsoft_Json_JsonReader_State_TypeInfo;
  in_stack_000017bc = unaff_w25;
  goto code_r0x0248b500;
LAB_02491038:
  lVar28 = *in_stack_00000150;
  if (lVar28 != 0) {
    iVar10 = uVar2 + 1;
    plVar30 = (long *)PTR_DAT_033ed410;
LAB_02491068:
    *(uint *)(lVar28 + 0x18) = uVar11;
    lVar29 = unaff_x19[0xd3];
    *(int *)(lVar28 + 0x2c) = iVar10;
    iVar10 = iStack00000000000000a4;
    if ((int)uVar11 < 1) {
      iVar10 = 1;
    }
    if (iStack00000000000000a4 == 0) {
      iVar10 = 1;
    }
    *(int *)(lVar28 + 0x1c) = (int)lVar29;
    *(int *)(lVar28 + 0x24) = iVar10;
    *(int *)(lVar28 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar17 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar17 & 1) == 0)) {
LAB_02491468:
      lVar28 = *(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
LAB_02491474:
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar28 = unaff_x19[0xda];
    if (lVar28 != 0) {
      (**(code **)(lVar28 + 0x18))
                (*(undefined8 *)(lVar28 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar28 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x60), lVar28 == 0))
      goto LAB_02491464;
      if (*(int *)(*plVar30 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar28 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      FUN_024e8000(lVar28 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar28 = *(long *)(unaff_x19[0x6c] + 0x60), lVar28 != 0)) {
        if (*(int *)(lVar28 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar28 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar28 = *(long *)(unaff_x19[0x6c] + 0x60), lVar28 != 0)) {
            if (*(int *)(lVar28 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar28 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar28 = *(long *)(unaff_x19[0x6c] + 0x60), lVar28 != 0)) {
                if (*(int *)(lVar28 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar28 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar28 = *(long *)(unaff_x19[0x6c] + 0x60), lVar28 != 0)) {
                    if (*(int *)(lVar28 + 0x18) == 0)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar28 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        lVar28 = *in_stack_00000150;
                        if (lVar28 != 0) {
                          lVar35 = 0;
                          lVar29 = 0;
                          do {
                            uVar17 = lVar29 + 1;
                            if ((long)*(int *)(lVar28 + 0x34) <= (long)uVar17) goto LAB_02491468;
                            lVar28 = *(long *)(lVar28 + 0x60);
                            if (lVar28 == 0) break;
                            if (*(int *)(*plVar30 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            if (*(uint *)(lVar28 + 0x18) <= uVar17)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            FUN_024e7ecc(lVar28 + lVar35 + 0x70,0);
                            lVar28 = unaff_x19[0xe0];
                            if (lVar28 == 0) break;
                            if (*(uint *)(lVar28 + 0x18) <= uVar17)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            uVar19 = *(undefined8 *)(lVar28 + lVar29 * 8 + 0x28);
                            if (*(int *)(*plVar43 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar18 = FUN_0268b4e0(uVar19,0,0);
                            if ((uVar18 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                if ((*in_stack_00000150 == 0) ||
                                   (lVar28 = *(long *)(*in_stack_00000150 + 0x60), lVar28 == 0))
                                break;
                                if (*(int *)(*plVar30 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (*(uint *)(lVar28 + 0x18) <= uVar17)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                                ;
                                FUN_024e8000(lVar28 + lVar35 + 0x70,1,0);
                              }
                              lVar28 = unaff_x19[0xe0];
                              if (lVar28 == 0) break;
                              if (*(uint *)(lVar28 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar28 = *(long *)(lVar28 + lVar29 * 8 + 0x28);
                              if (lVar28 == 0) break;
                              lVar28 = FUN_024eefa0(lVar28,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar16 = *(long *)(*in_stack_00000150 + 0x60), lVar16 == 0))
                              break;
                              if (*(uint *)(lVar16 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar28 == 0) break;
                              FUN_0266b9c4(lVar28,*(undefined8 *)(lVar16 + lVar35 + 0x80),0);
                              lVar28 = unaff_x19[0xe0];
                              if (lVar28 == 0) break;
                              if (*(uint *)(lVar28 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar28 = *(long *)(lVar28 + lVar29 * 8 + 0x28);
                              if (lVar28 == 0) break;
                              lVar28 = FUN_024eefa0(lVar28,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar16 = *(long *)(*in_stack_00000150 + 0x60), lVar16 == 0))
                              break;
                              if (*(uint *)(lVar16 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar28 == 0) break;
                              FUN_0266bbc8(lVar28,*(undefined8 *)(lVar16 + lVar35 + 0x98),0);
                              lVar28 = unaff_x19[0xe0];
                              if (lVar28 == 0) break;
                              if (*(uint *)(lVar28 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar28 = *(long *)(lVar28 + lVar29 * 8 + 0x28);
                              if (lVar28 == 0) break;
                              lVar28 = FUN_024eefa0(lVar28,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar16 = *(long *)(*in_stack_00000150 + 0x60), lVar16 == 0))
                              break;
                              if (*(uint *)(lVar16 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar28 == 0) break;
                              FUN_0266bc74(lVar28,*(undefined8 *)(lVar16 + lVar35 + 0xa0),0);
                              lVar28 = unaff_x19[0xe0];
                              if (lVar28 == 0) break;
                              if (*(uint *)(lVar28 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar28 = *(long *)(lVar28 + lVar29 * 8 + 0x28);
                              if (lVar28 == 0) break;
                              lVar28 = FUN_024eefa0(lVar28,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar16 = *(long *)(*in_stack_00000150 + 0x60), lVar16 == 0))
                              break;
                              if (*(uint *)(lVar16 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar28 == 0) break;
                              FUN_0266c1dc(lVar28,*(undefined8 *)(lVar16 + lVar35 + 0xa8),0);
                              lVar28 = unaff_x19[0xe0];
                              if (lVar28 == 0) break;
                              if (*(uint *)(lVar28 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar28 = *(long *)(lVar28 + lVar29 * 8 + 0x28);
                              if ((lVar28 == 0) || (lVar28 = FUN_024eefa0(lVar28,0), lVar28 == 0))
                              break;
                              FUN_0266ed90(lVar28,0);
                            }
                            lVar28 = *in_stack_00000150;
                            lVar29 = lVar29 + 1;
                            lVar35 = lVar35 + 0x50;
                          } while (lVar28 != 0);
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
  }
LAB_02491464:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


