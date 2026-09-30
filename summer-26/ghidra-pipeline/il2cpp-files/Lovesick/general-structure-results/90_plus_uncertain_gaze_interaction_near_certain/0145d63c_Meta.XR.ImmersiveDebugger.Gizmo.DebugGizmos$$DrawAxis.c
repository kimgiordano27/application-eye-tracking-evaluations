/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$DrawAxis
ENTRY_POINT: 0145d63c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 182
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_11;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_11
*/


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawAxis(undefined **param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  long lVar12;
  long unaff_x19;
  undefined8 *unaff_x20;
  int iVar13;
  long unaff_x21;
  int unaff_w22;
  long lVar14;
  uint uVar15;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long lVar16;
  undefined8 *unaff_x26;
  long *unaff_x28;
  long *unaff_x29;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 uStack0000000000000050;
  uint uStack0000000000000054;
  uint uStack0000000000000058;
  int iStack000000000000005c;
  uint uStack0000000000000068;
  undefined4 uStack000000000000006c;
  
  do {
    FUN_0132138c(param_2,unaff_w22,&stack0x00000068,*(undefined8 *)param_1[0x113]);
    if ((CONCAT44(uStack000000000000006c,uStack0000000000000068) == 0) ||
       (lVar3 = *(long *)(CONCAT44(uStack000000000000006c,uStack0000000000000068) + 0x10),
       lVar3 == 0)) goto LAB_0145eaf0;
    uVar4 = FUN_015fe250(lVar3,*(undefined8 *)
                                Method_UnityEngine_ProBuilder_MeshOperations_AppendElements_CreatePolygonWithHole__
                         ,0);
    if ((uVar4 & 1) == 0) {
      if ((*unaff_x29 == 0) || (lVar3 = *(long *)(*unaff_x29 + 0x70), lVar3 == 0))
      goto LAB_0145eaf0;
      FUN_0132138c(lVar3,unaff_w22,&stack0x00000068,*(undefined8 *)StringLiteral_11624);
      if ((CONCAT44(uStack000000000000006c,uStack0000000000000068) == 0) ||
         (lVar3 = *(long *)(CONCAT44(uStack000000000000006c,uStack0000000000000068) + 0x10),
         lVar3 == 0)) goto LAB_0145eaf0;
      uVar4 = FUN_015fe250(lVar3,*(undefined8 *)
                                  Method_System_Net_FtpWebRequest_TimedSubmitRequestHelper__,0);
      if ((uVar4 & 1) == 0) {
        if ((*unaff_x29 == 0) || (lVar3 = *(long *)(*unaff_x29 + 0x70), lVar3 == 0))
        goto LAB_0145eaf0;
        FUN_0132138c(lVar3,unaff_w22,&stack0x00000068,*(undefined8 *)StringLiteral_11624);
        if ((CONCAT44(uStack000000000000006c,uStack0000000000000068) == 0) ||
           (lVar3 = *(long *)(CONCAT44(uStack000000000000006c,uStack0000000000000068) + 0x10),
           lVar3 == 0)) goto LAB_0145eaf0;
        uVar4 = FUN_015fe250(lVar3,*(undefined8 *)System_Xml_Schema_Datatype_QName_TypeInfo,0);
        if ((uVar4 & 1) == 0) goto LAB_0145d734;
      }
    }
    do {
      if (*(int *)(unaff_x21 + 0x18) < 2) {
        FUN_00ac20f0();
      }
LAB_0145d734:
      do {
        lVar3 = *unaff_x29;
        unaff_w22 = unaff_w22 + 1;
        if ((lVar3 == 0) || (lVar14 = *(long *)(lVar3 + 0x80), lVar14 == 0)) goto LAB_0145eaf0;
        if (*(int *)(lVar14 + 0x18) <= unaff_w22) {
          lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                                    );
          if (lVar3 == 0) goto LAB_0145eaf0;
          FUN_01320e50(lVar3,*(undefined8 *)
                              System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo);
          lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                       UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
          if (lVar14 == 0) goto LAB_0145eaf0;
          FUN_01320e50(lVar14,*(undefined8 *)PTR_DAT_033f6e48);
          lVar12 = *unaff_x29;
          if (lVar12 == 0) goto LAB_0145eaf0;
                    /* catch() { ... } // from try @ 0145d7d0 with catch @ 0145d79c
                       catch() { ... } // from try @ 0145d844 with catch @ 0145d79c */
          uVar15 = 0;
          goto LAB_0145d7a0;
        }
        cVar10 = *(char *)(lVar3 + 0x49);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar4 = FUN_01457470(unaff_w22,cVar10 != '\0',lVar14);
      } while ((uVar4 & 1) == 0);
      if ((*unaff_x29 == 0) || (lVar3 = *(long *)(*unaff_x29 + 0x70), lVar3 == 0))
      goto LAB_0145eaf0;
      FUN_0132138c(lVar3,unaff_w22,&stack0x00000068,*(undefined8 *)StringLiteral_11624);
      if ((CONCAT44(uStack000000000000006c,uStack0000000000000068) == 0) ||
         (lVar3 = *(long *)(CONCAT44(uStack000000000000006c,uStack0000000000000068) + 0x10),
         lVar3 == 0)) goto LAB_0145eaf0;
      uVar4 = FUN_015fe250(lVar3,*unaff_x24,0);
      if ((uVar4 & 1) == 0) {
        if ((*unaff_x29 == 0) || (lVar3 = *(long *)(*unaff_x29 + 0x70), lVar3 == 0))
        goto LAB_0145eaf0;
        FUN_0132138c(lVar3,unaff_w22,&stack0x00000068,*(undefined8 *)StringLiteral_11624);
        if ((CONCAT44(uStack000000000000006c,uStack0000000000000068) == 0) ||
           (lVar3 = *(long *)(CONCAT44(uStack000000000000006c,uStack0000000000000068) + 0x10),
           lVar3 == 0)) goto LAB_0145eaf0;
        uVar4 = FUN_015fe250(lVar3,*(undefined8 *)PTR_DAT_033ec030,0);
        if ((uVar4 & 1) != 0) goto LAB_0145d5c4;
        if ((*unaff_x29 == 0) || (lVar3 = *(long *)(*unaff_x29 + 0x70), lVar3 == 0))
        goto LAB_0145eaf0;
        FUN_0132138c(lVar3,unaff_w22,&stack0x00000068,*(undefined8 *)StringLiteral_11624);
        if ((CONCAT44(uStack000000000000006c,uStack0000000000000068) == 0) ||
           (lVar3 = *(long *)(CONCAT44(uStack000000000000006c,uStack0000000000000068) + 0x10),
           lVar3 == 0)) goto LAB_0145eaf0;
        uVar4 = FUN_015fe250(lVar3,*(undefined8 *)
                                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass61_0_<DOJump>b__0__
                             ,0);
        if ((uVar4 & 1) != 0) goto LAB_0145d5c4;
        if ((*unaff_x29 == 0) || (lVar3 = *(long *)(*unaff_x29 + 0x70), lVar3 == 0))
        goto LAB_0145eaf0;
        FUN_0132138c(lVar3,unaff_w22,&stack0x00000068,*(undefined8 *)StringLiteral_11624);
        if ((CONCAT44(uStack000000000000006c,uStack0000000000000068) == 0) ||
           (lVar3 = *(long *)(CONCAT44(uStack000000000000006c,uStack0000000000000068) + 0x10),
           lVar3 == 0)) goto LAB_0145eaf0;
        uVar4 = FUN_015fe250(lVar3,*(undefined8 *)Method_UnityEngine_Component_GetComponent<Note>__,
                             0);
        if ((uVar4 & 1) != 0) goto LAB_0145d5c4;
      }
      else {
LAB_0145d5c4:
        if (*(int *)(unaff_x21 + 0x18) < 2) {
          FUN_00ac20f0();
        }
      }
      if ((*unaff_x29 == 0) || (lVar3 = *(long *)(*unaff_x29 + 0x70), lVar3 == 0))
      goto LAB_0145eaf0;
      FUN_0132138c(lVar3,unaff_w22,&stack0x00000068,*(undefined8 *)StringLiteral_11624);
      if ((CONCAT44(uStack000000000000006c,uStack0000000000000068) == 0) ||
         (lVar3 = *(long *)(CONCAT44(uStack000000000000006c,uStack0000000000000068) + 0x10),
         lVar3 == 0)) goto LAB_0145eaf0;
      uVar4 = FUN_015fe250(lVar3,*unaff_x25,0);
    } while ((uVar4 & 1) != 0);
    if ((*unaff_x29 == 0) || (param_2 = *(long *)(*unaff_x29 + 0x70), param_2 == 0))
    goto LAB_0145eaf0;
    param_1 = &StringLiteral_11349;
  } while( true );
LAB_0145d7a0:
  lVar16 = *(long *)(lVar12 + 0x80);
  if (lVar16 == 0) goto LAB_0145eaf0;
  if (*(int *)(lVar16 + 0x18) <= (int)uVar15) {
    if (*(int *)(lVar14 + 0x18) < 1) goto LAB_0145d954;
    if (lVar12 != 0) {
      iVar13 = 0;
      goto LAB_0145d88c;
    }
    goto LAB_0145eaf0;
  }
  cVar10 = *(char *)(lVar12 + 0x49);
                    /* try { // try from 0145d7bc to 0155d7cf has its CatchHandler @ 0145d800 */
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
                    /* try { // try from 0145d7d0 to 0155d817 has its CatchHandler @ 0145d79c */
  uVar4 = FUN_01457470(uVar15,cVar10 != '\0',lVar16);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0145d7bc with catch @ 0145d800
                        */
  if ((((uVar4 & 1) != 0) && (1 < *(int *)(unaff_x21 + 0x18))) &&
     (uStack0000000000000068 = uVar15, uVar4 = FUN_01322618(), (uVar4 & 1) == 0)) {
                    /* try { // try from 0145d818 to 0155d81b has its CatchHandler @ 0145d82c */
    if ((*unaff_x29 == 0) || (lVar12 = *(long *)(*unaff_x29 + 0x70), lVar12 == 0))
    goto LAB_0145eaf0;
                    /* catch() { ... } // from try @ 0145d818 with catch @ 0145d82c */
    FUN_0132138c(lVar12,uVar15,&stack0x00000068,*(undefined8 *)StringLiteral_11624);
                    /* try { // try from 0145d834 to 0155d843 has its CatchHandler @ 0145d858 */
    if (CONCAT44(uStack000000000000006c,uStack0000000000000068) == 0) goto LAB_0145eaf0;
                    /* try { // try from 0145d844 to 0155d84f has its CatchHandler @ 0145d79c */
                    /* try { // try from 0145d850 to 0155d857 has its CatchHandler @ 0145d858 */
    FUN_00ac1158(lVar3,*(undefined8 *)
                        (CONCAT44(uStack000000000000006c,uStack0000000000000068) + 0x10),
                 *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0145d834 with catch @ 0145d858
                       catch(type#2 @ 00000000) { ... } // from try @ 0145d850 with catch @ 0145d858
                        */
    FUN_00ac20f0(lVar14,uVar15,*unaff_x26);
  }
  lVar12 = *unaff_x29;
  uVar15 = uVar15 + 1;
  if (lVar12 == 0) goto LAB_0145eaf0;
  goto LAB_0145d7a0;
LAB_0145d954:
  if (0 < *(int *)(lVar3 + 0x18)) {
    uVar5 = FUN_01325140(lVar3,*(undefined8 *)
                                Method_UnityEngine_Events_UnityEvent<MRUKAnchor>__ctor__);
    uVar5 = FUN_01600f98(*(undefined8 *)
                          Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__,
                         uVar5,0);
    uVar5 = FUN_015f5b28(*(undefined8 *)System_Action<List<XRTargetEvaluator>>_TypeInfo,uVar5,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_026610e4(uVar5,0);
  }
  puVar2 = Method_System_Collections_Generic_Dictionary<string,_List<string>>__ctor__;
  lVar3 = *unaff_x29;
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x58) != 0)) {
    iVar13 = *(int *)(lVar3 + 0x18);
    if ((*(int *)(*(long *)(lVar3 + 0x58) + 0x18) == 1) &&
       ((*(char *)(lVar3 + 0x27) == '\0' && (*(char *)(lVar3 + 0x49) == '\0')))) {
      if (2 < *(int *)(unaff_x19 + 0x28)) {
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)puVar2,0);
        lVar3 = *unaff_x29;
        if (lVar3 == 0) goto LAB_0145eaf0;
      }
      if (*(long *)(lVar3 + 0x58) == 0) goto LAB_0145eaf0;
      FUN_0132138c(*(long *)(lVar3 + 0x58),0,&stack0x00000068,*(undefined8 *)PTR_DAT_033ee2d8);
      if (CONCAT44(uStack000000000000006c,uStack0000000000000068) == 0) goto LAB_0145eaf0;
      FUN_01444f94(CONCAT44(uStack000000000000006c,uStack0000000000000068),0);
      if ((*unaff_x29 == 0) || (lVar3 = *(long *)(*unaff_x29 + 0x58), lVar3 == 0))
      goto LAB_0145eaf0;
      FUN_0132138c(lVar3,0,&stack0x00000068,*(undefined8 *)PTR_DAT_033ee2d8);
      if (CONCAT44(uStack000000000000006c,uStack0000000000000068) == 0) goto LAB_0145eaf0;
      FUN_014450f0(CONCAT44(uStack000000000000006c,uStack0000000000000068),4,0);
      lVar3 = *unaff_x29;
      iStack000000000000005c = 0;
      if (lVar3 == 0) goto LAB_0145eaf0;
      iVar13 = 0;
    }
    puVar2 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__;
    iStack000000000000005c = 0;
    while (*(long *)(lVar3 + 0x58) != 0) {
      if (*(int *)(*(long *)(lVar3 + 0x58) + 0x18) <= iStack000000000000005c) {
        *(int *)(lVar3 + 0x18) = iVar13;
        if (3 < *(int *)(unaff_x19 + 0x28)) {
          in_stack_00000020 = FUN_02040648(in_stack_00000008,0);
          if (*(int *)(*(long *)Newtonsoft_Json_Linq_JToken_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)Newtonsoft_Json_Linq_JToken_TypeInfo);
          }
          uVar5 = FUN_01789268(&stack0x00000020,0);
          uVar5 = FUN_015f5b28(*(undefined8 *)
                                Method_Unity_Jobs_IJobExtensions_Schedule<DeferredLights_CullLightsJob>__
                               ,uVar5,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02660dac(uVar5,0);
        }
        return 0;
      }
      if (3 < *(int *)(unaff_x19 + 0x28)) {
        uVar5 = FUN_0176eb1c((long)&stack0x00000058 + 4,0);
        if ((*unaff_x29 == 0) || (lVar3 = *(long *)(*unaff_x29 + 0x58), lVar3 == 0)) break;
        uStack0000000000000050 = *(undefined4 *)(lVar3 + 0x18);
        uVar6 = FUN_0176eb1c(&stack0x00000050,0);
        uVar5 = FUN_0160073c(*(undefined8 *)PTR_DAT_033ede28,uVar5,*(undefined8 *)StringLiteral_504,
                             uVar6,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar5,0);
        lVar3 = *unaff_x29;
        if (lVar3 == 0) break;
      }
      if (*(long *)(lVar3 + 0x58) == 0) break;
      FUN_0132138c(*(long *)(lVar3 + 0x58),iStack000000000000005c,&stack0x00000068,
                   *(undefined8 *)PTR_DAT_033ee2d8);
      plVar1 = (long *)CONCAT44(uStack000000000000006c,uStack0000000000000068);
      if (plVar1 == (long *)0x0) break;
      plVar1[7] = 0x100000001;
      uStack0000000000000054 = 1;
      uStack0000000000000058 = 1;
      lVar3 = *unaff_x29;
      if (lVar3 == 0) break;
      uVar4 = 0;
      while( true ) {
        if (*(long *)(lVar3 + 0x70) == 0) goto LAB_0145eaf0;
        if ((long)*(int *)(*(long *)(lVar3 + 0x70) + 0x18) <= (long)uVar4) break;
        cVar10 = *(char *)(lVar3 + 0x49);
        uVar5 = *(undefined8 *)(lVar3 + 0x80);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar7 = FUN_01457470(uVar4 & 0xffffffff,cVar10 != '\0',uVar5);
        if ((uVar7 & 1) != 0) {
          lVar3 = plVar1[2];
          if (lVar3 == 0) goto LAB_0145eaf0;
          if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_0145eaf4;
          lVar3 = *(long *)(lVar3 + uVar4 * 8 + 0x20);
          if (4 < *(int *)(unaff_x19 + 0x28)) {
            in_stack_00000018._4_4_ = iStack000000000000005c;
            uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                       ,(long)&stack0x00000018 + 4);
            if ((*unaff_x29 == 0) || (lVar14 = *(long *)(*unaff_x29 + 0x70), lVar14 == 0))
            goto LAB_0145eaf0;
            FUN_0132138c(lVar14,uVar4 & 0xffffffff,&stack0x00000068,
                         *(undefined8 *)StringLiteral_11624);
            if (CONCAT44(uStack000000000000006c,uStack0000000000000068) == 0) goto LAB_0145eaf0;
            uVar5 = FUN_01600b5c(*(undefined8 *)StringLiteral_4207,uVar5,
                                 *(undefined8 *)
                                  (CONCAT44(uStack000000000000006c,uStack0000000000000068) + 0x10),0
                                );
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02660dac(uVar5,0);
          }
          if (lVar3 == 0) goto LAB_0145eaf0;
          in_stack_00000038 = *(undefined8 *)(lVar3 + 0x48);
          uVar5 = *(undefined8 *)(lVar3 + 0x40);
          in_stack_00000048 = *(undefined8 *)(lVar3 + 0x58);
          in_stack_00000040 = *(undefined8 *)(lVar3 + 0x50);
          in_stack_00000030 = uVar5;
          fVar17 = (float)FUN_01431624(&stack0x00000030,0);
          _fStack0000000000000028 = CONCAT44((float)uVar5,fVar17);
          fVar19 = (float)uVar5;
          if (DAT_03774e1e == '\0') {
            thunk_FUN_00d48444(puVar2);
            fVar17 = (float)_fStack0000000000000028;
            DAT_03774e1e = '\x01';
            fVar19 = fStack000000000000002c;
          }
          if ((fVar17 == *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 8)) &&
             (fVar19 == *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc))) {
LAB_0145dcac:
            cVar10 = '\x01';
          }
          else {
            if ((*unaff_x29 == 0) || (lVar14 = *(long *)(*unaff_x29 + 0x58), lVar14 == 0))
            goto LAB_0145eaf0;
            if ((*(int *)(lVar14 + 0x18) < 2) || (*(int *)(unaff_x19 + 0x28) < 2))
            goto LAB_0145dcac;
            plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
            if (plVar8 == (long *)0x0) goto LAB_0145eaf0;
            if ((*(long *)Method_System_Collections_Generic_List<char>_Clear__ != 0) &&
               (lVar14 = thunk_FUN_00d6225c(*(long *)
                                             Method_System_Collections_Generic_List<char>_Clear__,
                                            *(undefined8 *)(*plVar8 + 0x40)), lVar14 == 0))
            goto LAB_0145eaf8;
            if ((int)plVar8[3] == 0) goto LAB_0145eaf4;
            plVar8[4] = *(long *)Method_System_Collections_Generic_List<char>_Clear__;
            lVar14 = FUN_01444238(lVar3,0);
            if ((lVar14 != 0) &&
               (lVar12 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0))
            goto LAB_0145eaf8;
            uVar15 = *(uint *)(plVar8 + 3);
            if (uVar15 < 2) goto LAB_0145eaf4;
            plVar8[5] = lVar14;
            if (*(long *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetStateMachine__
                != 0) {
              lVar14 = thunk_FUN_00d6225c(*(long *)
                                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetStateMachine__
                                          ,*(undefined8 *)(*plVar8 + 0x40));
              if (lVar14 == 0) goto LAB_0145eaf8;
              uVar15 = *(uint *)(plVar8 + 3);
            }
            if (uVar15 < 3) goto LAB_0145eaf4;
            plVar8[6] = *(long *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetStateMachine__
            ;
            in_stack_00000038 = *(undefined8 *)(lVar3 + 0x48);
            uVar5 = *(undefined8 *)(lVar3 + 0x40);
            in_stack_00000048 = *(undefined8 *)(lVar3 + 0x58);
            in_stack_00000040 = *(undefined8 *)(lVar3 + 0x50);
            in_stack_00000030 = uVar5;
            uVar18 = FUN_01431624(&stack0x00000030,0);
            _fStack0000000000000028 = CONCAT44((int)uVar5,uVar18);
            lVar14 = FUN_0269109c(&stack0x00000028,0);
            if ((lVar14 != 0) &&
               (lVar12 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0))
            goto LAB_0145eaf8;
            uVar15 = *(uint *)(plVar8 + 3);
            if (uVar15 < 4) goto LAB_0145eaf4;
            plVar8[7] = lVar14;
            if (*(long *)Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__ != 0
               ) {
              lVar14 = thunk_FUN_00d6225c(*(long *)
                                           Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__
                                          ,*(undefined8 *)(*plVar8 + 0x40));
              if (lVar14 == 0) goto LAB_0145eaf8;
              uVar15 = *(uint *)(plVar8 + 3);
            }
            if (uVar15 < 5) goto LAB_0145eaf4;
            plVar8[8] = *(long *)
                         Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__;
            if (*unaff_x29 == 0) goto LAB_0145eaf0;
            lVar14 = FUN_0176eb1c(*unaff_x29 + 0x28,0);
            if ((lVar14 != 0) &&
               (lVar12 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0))
            goto LAB_0145eaf8;
            if (*(uint *)(plVar8 + 3) < 6) goto LAB_0145eaf4;
            plVar8[9] = lVar14;
            uVar5 = FUN_01600844(plVar8,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02661754(uVar5,0);
            cVar10 = DAT_03774e1e;
          }
          fVar19 = *(float *)(plVar1 + 6);
          fVar17 = *(float *)((long)plVar1 + 0x34);
          _fStack0000000000000028 = plVar1[6];
          if (cVar10 == '\0') {
            thunk_FUN_00d48444(puVar2);
            DAT_03774e1e = '\x01';
            fVar17 = fStack000000000000002c;
            fVar19 = fStack0000000000000028;
          }
          if ((fVar19 != *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 8)) ||
             (fVar17 != *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc))) {
            lVar14 = *unaff_x29;
            if ((lVar14 == 0) || (*(long *)(lVar14 + 0x58) == 0)) goto LAB_0145eaf0;
            if (((1 < *(int *)(*(long *)(lVar14 + 0x58) + 0x18)) &&
                (*(char *)(lVar14 + 0x27) != '\0')) && (1 < *(int *)(unaff_x19 + 0x28))) {
              plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
              if (plVar8 == (long *)0x0) goto LAB_0145eaf0;
              if ((*(long *)Method_System_Collections_Generic_List<char>_Clear__ != 0) &&
                 (lVar14 = thunk_FUN_00d6225c(*(long *)
                                               Method_System_Collections_Generic_List<char>_Clear__,
                                              *(undefined8 *)(*plVar8 + 0x40)), lVar14 == 0))
              goto LAB_0145eaf8;
              if ((int)plVar8[3] == 0) goto LAB_0145eaf4;
              plVar8[4] = *(long *)Method_System_Collections_Generic_List<char>_Clear__;
              lVar14 = FUN_01444238(lVar3,0);
              if ((lVar14 != 0) &&
                 (lVar12 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0))
              goto LAB_0145eaf8;
              uVar15 = *(uint *)(plVar8 + 3);
              if (uVar15 < 2) goto LAB_0145eaf4;
              plVar8[5] = lVar14;
              if (*(long *)UnityEngine_XR_ARFoundation_ARSession_<Initialize>d__39_TypeInfo != 0) {
                lVar14 = thunk_FUN_00d6225c(*(long *)
                                             UnityEngine_XR_ARFoundation_ARSession_<Initialize>d__39_TypeInfo
                                            ,*(undefined8 *)(*plVar8 + 0x40));
                if (lVar14 == 0) goto LAB_0145eaf8;
                uVar15 = *(uint *)(plVar8 + 3);
              }
              if (uVar15 < 3) goto LAB_0145eaf4;
              plVar8[6] = *(long *)UnityEngine_XR_ARFoundation_ARSession_<Initialize>d__39_TypeInfo;
              _fStack0000000000000028 = plVar1[6];
              lVar14 = FUN_0269109c(&stack0x00000028,0);
              if ((lVar14 != 0) &&
                 (lVar12 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0))
              goto LAB_0145eaf8;
              uVar15 = *(uint *)(plVar8 + 3);
              if (uVar15 < 4) goto LAB_0145eaf4;
              plVar8[7] = lVar14;
              if (*(long *)Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__ !=
                  0) {
                lVar14 = thunk_FUN_00d6225c(*(long *)
                                             Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__
                                            ,*(undefined8 *)(*plVar8 + 0x40));
                if (lVar14 == 0) goto LAB_0145eaf8;
                uVar15 = *(uint *)(plVar8 + 3);
              }
              if (uVar15 < 5) goto LAB_0145eaf4;
              plVar8[8] = *(long *)
                           Method_System_Net_FtpWebRequest_<>c_<get_ClientCertificates>b__114_0__;
              if (*unaff_x29 == 0) goto LAB_0145eaf0;
              lVar14 = FUN_0176eb1c(*unaff_x29 + 0x28,0);
              if ((lVar14 != 0) &&
                 (lVar12 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0))
              goto LAB_0145eaf8;
              if (*(uint *)(plVar8 + 3) < 6) goto LAB_0145eaf4;
              plVar8[9] = lVar14;
              uVar5 = FUN_01600844(plVar8,0);
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_02661754(uVar5,0);
            }
          }
          uVar7 = FUN_014440c0(lVar3,0);
          uVar15 = 0x80000000;
          if ((uVar7 & 1) != 0) {
            lVar14 = plVar1[5];
            fVar19 = *(float *)((long)plVar1 + 0x2c);
            lVar12 = plVar1[6];
            uVar20 = *(undefined4 *)((long)plVar1 + 0x34);
            uVar5 = *(undefined8 *)(unaff_x19 + 0x20);
            uVar18 = *(undefined4 *)(unaff_x19 + 0x28);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            fVar17 = (float)FUN_01459ad4((int)lVar14,fVar19,(int)lVar12,uVar20,lVar3,uVar5,uVar18);
            uVar11 = 0x80000000;
            if (fVar17 * fVar19 != INFINITY) {
              uVar11 = (int)(fVar17 * fVar19);
            }
            if ((int)(uStack0000000000000054 * uStack0000000000000058) < (int)uVar11) {
              if (4 < *(int *)(unaff_x19 + 0x28)) {
                plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
                if (plVar8 == (long *)0x0) goto LAB_0145eaf0;
                if ((*(long *)StringLiteral_12496 != 0) &&
                   (lVar14 = thunk_FUN_00d6225c(*(long *)StringLiteral_12496,
                                                *(undefined8 *)(*plVar8 + 0x40)), lVar14 == 0))
                goto LAB_0145eaf8;
                if ((int)plVar8[3] == 0) goto LAB_0145eaf4;
                plVar8[4] = *(long *)StringLiteral_12496;
                lVar14 = FUN_01444238(lVar3,0);
                if ((lVar14 != 0) &&
                   (lVar12 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0
                   )) goto LAB_0145eaf8;
                uVar11 = *(uint *)(plVar8 + 3);
                if (uVar11 < 2) goto LAB_0145eaf4;
                plVar8[5] = lVar14;
                if (*(long *)StringLiteral_3287 != 0) {
                  lVar14 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,
                                              *(undefined8 *)(*plVar8 + 0x40));
                  if (lVar14 == 0) goto LAB_0145eaf8;
                  uVar11 = *(uint *)(plVar8 + 3);
                }
                if (uVar11 < 3) goto LAB_0145eaf4;
                plVar8[6] = *(long *)StringLiteral_3287;
                _fStack0000000000000028 = CONCAT44(fVar19,fVar17);
                lVar14 = FUN_0269109c(&stack0x00000028,0);
                if ((lVar14 != 0) &&
                   (lVar12 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0
                   )) goto LAB_0145eaf8;
                uVar11 = *(uint *)(plVar8 + 3);
                if (uVar11 < 4) goto LAB_0145eaf4;
                plVar8[7] = lVar14;
                if (*(long *)System_Collections_Generic_IList<Vector3>_TypeInfo != 0) {
                  lVar14 = thunk_FUN_00d6225c(*(long *)
                                               System_Collections_Generic_IList<Vector3>_TypeInfo,
                                              *(undefined8 *)(*plVar8 + 0x40));
                  if (lVar14 == 0) goto LAB_0145eaf8;
                  uVar11 = *(uint *)(plVar8 + 3);
                }
                if (uVar11 < 5) goto LAB_0145eaf4;
                plVar8[8] = *(long *)System_Collections_Generic_IList<Vector3>_TypeInfo;
                lVar14 = FUN_0176eb1c(&stack0x00000058,0);
                if ((lVar14 != 0) &&
                   (lVar12 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0
                   )) goto LAB_0145eaf8;
                uVar11 = *(uint *)(plVar8 + 3);
                if (uVar11 < 6) goto LAB_0145eaf4;
                plVar8[9] = lVar14;
                if (*(long *)StringLiteral_3287 != 0) {
                  lVar14 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,
                                              *(undefined8 *)(*plVar8 + 0x40));
                  if (lVar14 == 0) goto LAB_0145eaf8;
                  uVar11 = *(uint *)(plVar8 + 3);
                }
                if (uVar11 < 7) goto LAB_0145eaf4;
                plVar8[10] = *(long *)StringLiteral_3287;
                lVar14 = FUN_0176eb1c((long)&stack0x00000050 + 4,0);
                if ((lVar14 != 0) &&
                   (lVar12 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0
                   )) goto LAB_0145eaf8;
                if (*(uint *)(plVar8 + 3) < 8) goto LAB_0145eaf4;
                plVar8[0xb] = lVar14;
                uVar5 = FUN_01600844(plVar8,0);
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)StringLiteral_302);
                }
                FUN_02660dac(uVar5,0);
              }
              uStack0000000000000058 = 0x80000000;
              if (fVar17 != INFINITY) {
                uStack0000000000000058 = (int)fVar17;
              }
              uStack0000000000000054 = uVar15;
              if (fVar19 != INFINITY) {
                uStack0000000000000054 = (int)fVar19;
              }
            }
            if (4 < *(int *)(unaff_x19 + 0x28)) {
              if ((*unaff_x29 == 0) || (lVar14 = *(long *)(*unaff_x29 + 0x70), lVar14 == 0))
              goto LAB_0145eaf0;
              FUN_0132138c(lVar14,uVar4 & 0xffffffff,&stack0x00000068,
                           *(undefined8 *)StringLiteral_11624);
              if (CONCAT44(uStack000000000000006c,uStack0000000000000068) == 0) goto LAB_0145eaf0;
              uVar6 = *(undefined8 *)
                       (CONCAT44(uStack000000000000006c,uStack0000000000000068) + 0x10);
              in_stack_00000018._4_4_ = iStack000000000000005c;
              uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                         ,(long)&stack0x00000018 + 4);
              if ((plVar1[3] == 0) || (lVar14 = *(long *)(plVar1[3] + 0x10), lVar14 == 0))
              goto LAB_0145eaf0;
              FUN_0132138c(lVar14,0,&stack0x00000068,
                           *(undefined8 *)
                            Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
                          );
              if (CONCAT44(uStack000000000000006c,uStack0000000000000068) == 0) goto LAB_0145eaf0;
              uVar9 = FUN_0144461c(CONCAT44(uStack000000000000006c,uStack0000000000000068),0);
              uVar5 = FUN_01600ba0(*(undefined8 *)StringLiteral_895,uVar6,uVar5,uVar9,0);
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_02660dac(uVar5,0);
            }
          }
          uVar7 = FUN_014440c0(lVar3,0);
          if ((uVar7 & 1) == 0) {
            lVar14 = plVar1[5];
            fVar19 = *(float *)((long)plVar1 + 0x2c);
            lVar12 = plVar1[6];
            uVar20 = *(undefined4 *)((long)plVar1 + 0x34);
            uVar5 = *(undefined8 *)(unaff_x19 + 0x20);
            uVar18 = *(undefined4 *)(unaff_x19 + 0x28);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            fVar17 = (float)FUN_01459ad4((int)lVar14,fVar19,(int)lVar12,uVar20,lVar3,uVar5,uVar18);
            uVar11 = uVar15;
            if (fVar17 * fVar19 != INFINITY) {
              uVar11 = (int)(fVar17 * fVar19);
            }
            if ((int)(uStack0000000000000054 * uStack0000000000000058) < (int)uVar11) {
              if (4 < *(int *)(unaff_x19 + 0x28)) {
                plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
                if (plVar8 == (long *)0x0) goto LAB_0145eaf0;
                if ((*(long *)StringLiteral_12496 != 0) &&
                   (lVar14 = thunk_FUN_00d6225c(*(long *)StringLiteral_12496,
                                                *(undefined8 *)(*plVar8 + 0x40)), lVar14 == 0)) {
LAB_0145eaf8:
                  uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar5,0);
                }
                if ((int)plVar8[3] == 0) goto LAB_0145eaf4;
                plVar8[4] = *(long *)StringLiteral_12496;
                lVar3 = FUN_01444238(lVar3,0);
                if ((lVar3 != 0) &&
                   (lVar14 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar8 + 0x40)), lVar14 == 0)
                   ) goto LAB_0145eaf8;
                uVar11 = *(uint *)(plVar8 + 3);
                if (uVar11 < 2) goto LAB_0145eaf4;
                plVar8[5] = lVar3;
                if (*(long *)StringLiteral_3287 != 0) {
                  lVar3 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,
                                             *(undefined8 *)(*plVar8 + 0x40));
                  if (lVar3 == 0) goto LAB_0145eaf8;
                  uVar11 = *(uint *)(plVar8 + 3);
                }
                if (uVar11 < 3) goto LAB_0145eaf4;
                plVar8[6] = *(long *)StringLiteral_3287;
                _fStack0000000000000028 = CONCAT44(fVar19,fVar17);
                lVar3 = FUN_0269109c(&stack0x00000028,0);
                if ((lVar3 != 0) &&
                   (lVar14 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar8 + 0x40)), lVar14 == 0)
                   ) goto LAB_0145eaf8;
                uVar11 = *(uint *)(plVar8 + 3);
                if (uVar11 < 4) goto LAB_0145eaf4;
                plVar8[7] = lVar3;
                if (*(long *)System_Collections_Generic_IList<Vector3>_TypeInfo != 0) {
                  lVar3 = thunk_FUN_00d6225c(*(long *)
                                              System_Collections_Generic_IList<Vector3>_TypeInfo,
                                             *(undefined8 *)(*plVar8 + 0x40));
                  if (lVar3 == 0) goto LAB_0145eaf8;
                  uVar11 = *(uint *)(plVar8 + 3);
                }
                if (uVar11 < 5) goto LAB_0145eaf4;
                plVar8[8] = *(long *)System_Collections_Generic_IList<Vector3>_TypeInfo;
                lVar3 = FUN_0176eb1c(&stack0x00000058,0);
                if ((lVar3 != 0) &&
                   (lVar14 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar8 + 0x40)), lVar14 == 0)
                   ) goto LAB_0145eaf8;
                uVar11 = *(uint *)(plVar8 + 3);
                if (uVar11 < 6) goto LAB_0145eaf4;
                plVar8[9] = lVar3;
                if (*(long *)StringLiteral_3287 != 0) {
                  lVar3 = thunk_FUN_00d6225c(*(long *)StringLiteral_3287,
                                             *(undefined8 *)(*plVar8 + 0x40));
                  if (lVar3 == 0) goto LAB_0145eaf8;
                  uVar11 = *(uint *)(plVar8 + 3);
                }
                if (uVar11 < 7) goto LAB_0145eaf4;
                plVar8[10] = *(long *)StringLiteral_3287;
                lVar3 = FUN_0176eb1c((long)&stack0x00000050 + 4,0);
                if ((lVar3 != 0) &&
                   (lVar14 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar8 + 0x40)), lVar14 == 0)
                   ) goto LAB_0145eaf8;
                if (*(uint *)(plVar8 + 3) < 8) goto LAB_0145eaf4;
                plVar8[0xb] = lVar3;
                uVar5 = FUN_01600844(plVar8,0);
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)StringLiteral_302);
                }
                FUN_02660dac(uVar5,0);
              }
              uStack0000000000000058 = uVar15;
              if (fVar17 != INFINITY) {
                uStack0000000000000058 = (int)fVar17;
              }
              uStack0000000000000054 = uVar15;
              if (fVar19 != INFINITY) {
                uStack0000000000000054 = (int)fVar19;
              }
            }
          }
        }
        lVar3 = *unaff_x29;
        uVar4 = uVar4 + 1;
        if (lVar3 == 0) goto LAB_0145eaf0;
      }
      if (*(char *)(lVar3 + 0x26) != '\0') {
        if ((int)uStack0000000000000058 <= iVar13 * 5) {
          uVar5 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
          uVar5 = FUN_015f6780(*(undefined8 *)Method_System_Net_WebConnectionStream_Write__,uVar5,0)
          ;
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02661754(uVar5,0);
        }
        if ((int)uStack0000000000000054 <= iVar13 * 5) {
          uVar5 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
          uVar5 = FUN_015f6780(*(undefined8 *)StringLiteral_2854,uVar5,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02661754(uVar5,0);
        }
        uVar15 = uStack0000000000000058;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = uStack0000000000000054;
        if ((uVar15 & uVar15 - 1) == 0) {
          uStack0000000000000058 = uStack0000000000000058 + iVar13 * -2;
        }
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if ((uVar11 & uVar11 - 1) == 0) {
          uStack0000000000000054 = uStack0000000000000054 + iVar13 * -2;
        }
        if ((int)uStack0000000000000058 < 1) {
          uStack0000000000000058 = 1;
        }
        if ((int)uStack0000000000000054 < 1) {
          uStack0000000000000054 = 1;
        }
      }
      if (4 < *(int *)(unaff_x19 + 0x28)) {
        uVar5 = FUN_0176eb1c(&stack0x00000058,0);
        uVar6 = FUN_0176eb1c((long)&stack0x00000050 + 4,0);
        uVar5 = FUN_0160073c(*(undefined8 *)
                              UnityEngine_InputSystem_Composites_ButtonWithTwoModifiers_var,uVar5,
                             *(undefined8 *)StringLiteral_3287,uVar6,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar5,0);
      }
      *(uint *)(plVar1 + 7) = uStack0000000000000058;
      *(uint *)((long)plVar1 + 0x3c) = uStack0000000000000054;
      iStack000000000000005c = iStack000000000000005c + 1;
      lVar3 = *unaff_x29;
      if (lVar3 == 0) break;
    }
  }
  goto LAB_0145eaf0;
LAB_0145d88c:
  do {
    lVar12 = *(long *)(lVar12 + 0x80);
    FUN_0132138c(lVar14,iVar13,&stack0x00000068,*unaff_x20);
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uStack0000000000000068) {
LAB_0145eaf4:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(undefined1 *)(lVar12 + (long)(int)uStack0000000000000068 * 4 + 0x20) = 1;
    if (*unaff_x29 == 0) break;
    lVar12 = *(long *)(*unaff_x29 + 0x80);
    FUN_0132138c(lVar14,iVar13,&stack0x00000068,*unaff_x20);
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uStack0000000000000068) goto LAB_0145eaf4;
    *(undefined1 *)(lVar12 + (long)(int)uStack0000000000000068 * 4 + 0x21) = 1;
    if (*unaff_x29 == 0) break;
    lVar12 = *(long *)(*unaff_x29 + 0x80);
    FUN_0132138c(lVar14,iVar13,&stack0x00000068,*unaff_x20);
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uStack0000000000000068) goto LAB_0145eaf4;
    *(undefined1 *)(lVar12 + (long)(int)uStack0000000000000068 * 4 + 0x22) = 1;
    iVar13 = iVar13 + 1;
    if (*(int *)(lVar14 + 0x18) <= iVar13) goto LAB_0145d954;
    lVar12 = *unaff_x29;
  } while (lVar12 != 0);
LAB_0145eaf0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


