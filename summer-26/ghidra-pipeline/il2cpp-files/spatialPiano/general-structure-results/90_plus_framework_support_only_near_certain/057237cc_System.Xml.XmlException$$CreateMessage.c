/*
FUNCTION_NAME: System.Xml.XmlException$$CreateMessage
ENTRY_POINT: 057237cc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


void System_Xml_XmlException__CreateMessage(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long *plVar17;
  long lVar18;
  long unaff_x28;
  
  if (2 < *(uint *)(unaff_x24 + 0x18)) {
    *(undefined8 *)(unaff_x24 + 0x30) = param_1;
    uVar10 = (**(code **)(*unaff_x23 + 0x188))();
    if ((*(uint *)(unaff_x24 + 0x18) & 0xfffffffc) != 0) {
      *(undefined8 *)(unaff_x24 + 0x38) = uVar10;
      FUN_058574dc();
      FUN_057251c0();
      plVar17 = (long *)Method_UnityEngine_UIElements_BaseField<float>_get_rawValue__;
      lVar11 = *(long *)(unaff_x19 + 0x58);
      if (lVar11 != 0) {
                    /* try { // try from 05723860 to 05823863 has its CatchHandler @ 05723cb0 */
                    /* try { // try from 05723868 to 0582386f has its CatchHandler @ 05723d24 */
        iVar9 = 0;
                    /* try { // try from 05723874 to 05823883 has its CatchHandler @ 05723d20 */
        while (iVar7 = FUN_05079c6c(lVar11,0), iVar9 < iVar7) {
                    /* try { // try from 05723884 to 058238a3 has its CatchHandler @ 05723d1c */
          plVar12 = *(long **)(unaff_x19 + 0x58);
          if ((plVar12 == (long *)0x0) ||
             (plVar12 = (long *)(**(code **)(*plVar12 + 0x308))
                                          (plVar12,iVar9,*(undefined8 *)(*plVar12 + 0x310)),
             plVar12 == (long *)0x0)) goto LAB_05723f3c;
                    /* try { // try from 057238a4 to 058238bb has its CatchHandler @ 05723d18 */
          bVar1 = *(byte *)(*plVar17 + 0x130);
                    /* try { // try from 057238c8 to 058238df has its CatchHandler @ 05723d14 */
          if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *plVar17))
          goto LAB_05724640;
          lVar11 = plVar12[9];
                    /* try { // try from 057238e0 to 058238f7 has its CatchHandler @ 05723d10 */
          plVar12[5] = unaff_x19;
          uVar10 = FUN_05725cd4();
          if (plVar12[7] == 0) {
            if ((int)plVar12[0xc] == 1) {
                    /* try { // try from 05723910 to 05823927 has its CatchHandler @ 05723d08 */
              if (lVar11 == 0) {
LAB_05723924:
                    /* try { // try from 05723944 to 05823947 has its CatchHandler @ 05723cac */
                    /* try { // try from 05723948 to 05823953 has its CatchHandler @ 05723d04 */
                uVar10 = FUN_05857240();
              }
            }
            else if ((lVar11 == 0) && ((int)plVar12[0xc] == 3)) goto LAB_05723924;
          }
          else {
                    /* try { // try from 057238f8 to 0582390f has its CatchHandler @ 05723d0c */
            uVar10 = FUN_05725b7c();
          }
          iVar7 = (int)plVar12[0xc];
          if (iVar7 == 1) {
            if (plVar12[9] != 0) {
LAB_05723a48:
              if (lVar11 == 0) goto LAB_05723f3c;
LAB_05723a4c:
              if (*(long *)(lVar11 + 0x48) == 0) {
                if ((unaff_x22 != 0) && (*(int *)(unaff_x22 + 0x10) != 0)) {
                  lVar11 = FUN_057225e0();
                  plVar12[9] = lVar11;
                }
              }
              else {
                uVar13 = FUN_04f6dc3c(*(undefined8 *)(unaff_x19 + 0x48),*(long *)(lVar11 + 0x48),0);
                if ((uVar13 & 1) != 0) {
                  FUN_05857408();
                }
              }
              FUN_057234c0();
            }
          }
          else if (iVar7 == 3) {
            if (lVar11 != 0) {
              FUN_0572583c(uVar10,plVar12);
              goto LAB_05723a4c;
            }
          }
          else {
            if (iVar7 != 2) goto LAB_05723a48;
                    /* try { // try from 05723974 to 05823977 has its CatchHandler @ 05723ca4 */
                    /* try { // try from 05723978 to 05823983 has its CatchHandler @ 05723cd0 */
            bVar1 = *(byte *)(*(long *)
                               Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__ +
                             0x130);
                    /* try { // try from 05723984 to 0582399b has its CatchHandler @ 05723ccc */
            if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__))
            goto LAB_05723f3c;
            lVar18 = plVar12[0xd];
                    /* try { // try from 057239ac to 058239af has its CatchHandler @ 05723ca0 */
            uVar13 = thunk_FUN_04f6d944(lVar18,*(undefined8 *)(unaff_x19 + 0x48),0);
                    /* try { // try from 057239b0 to 058239bf has its CatchHandler @ 05723cc8 */
            if ((uVar13 & 1) != 0) {
              FUN_058572c8();
            }
                    /* try { // try from 057239d0 to 058239d3 has its CatchHandler @ 05723d64 */
            if (lVar11 == 0) {
              if (lVar18 != 0) {
                if (*(int *)(lVar18 + 0x10) == 0) {
                  FUN_05857240();
                }
                else {
                  FUN_05725b7c();
                }
              }
            }
            else {
                    /* try { // try from 057239d4 to 058239df has its CatchHandler @ 05723d00 */
              uVar13 = FUN_04f6dc3c(lVar18,*(undefined8 *)(lVar11 + 0x48),0);
              if ((uVar13 & 1) != 0) {
                    /* try { // try from 057239fc to 058239ff has its CatchHandler @ 05723d64 */
                    /* try { // try from 05723a00 to 05823a0b has its CatchHandler @ 05723cc4 */
                FUN_05857408();
              }
              uVar10 = *(undefined8 *)(unaff_x28 + 0xa8);
                    /* try { // try from 05723a14 to 05823a17 has its CatchHandler @ 05723c9c */
              *(long *)(unaff_x28 + 0xa8) = lVar11;
              FUN_057234c0();
              *(undefined8 *)(unaff_x28 + 0xa8) = uVar10;
            }
          }
          lVar11 = *(long *)(unaff_x19 + 0x58);
          iVar9 = iVar9 + 1;
          if (lVar11 == 0) goto LAB_05723f3c;
        }
        *(long *)(unaff_x28 + 0x60) = unaff_x19;
        FUN_05725968();
        FUN_05725d60();
        if (unaff_x22 == 0) {
          unaff_x22 = **(long **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
        }
        *(long *)(unaff_x28 + 0x50) = unaff_x22;
        FUN_05726060();
        plVar12 = *(long **)(unaff_x28 + 0x90);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x2b8))(plVar12,*(undefined8 *)(*plVar12 + 0x2c0));
          puVar4 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_labelElement__;
          lVar11 = *(long *)(unaff_x19 + 0x58);
          if (lVar11 != 0) {
            iVar9 = 0;
            plVar12 = (long *)
                      Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
            ;
            goto LAB_05723b94;
          }
        }
      }
      goto LAB_05723f3c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
LAB_05723b94:
  iVar7 = FUN_05079c6c(lVar11,0);
  if (iVar7 <= iVar9) {
    lVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>__ctor__
                               );
    FUN_03abf108(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                );
    plVar17 = *(long **)(unaff_x19 + 0x60);
    if (plVar17 != (long *)0x0) {
      iVar9 = FUN_05079c6c(plVar17,0);
      puVar6 = Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__;
      puVar5 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__;
      puVar3 = System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo;
      if (iVar9 < 1) goto FUN_057245cc;
      iVar9 = 0;
      plVar14 = (long *)
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
      ;
      goto LAB_05723fa4;
    }
    goto LAB_05723f3c;
  }
  plVar14 = *(long **)(unaff_x19 + 0x58);
  if ((plVar14 == (long *)0x0) ||
     (plVar14 = (long *)(**(code **)(*plVar14 + 0x308))
                                  (plVar14,iVar9,*(undefined8 *)(*plVar14 + 0x310)),
     plVar14 == (long *)0x0)) goto LAB_05723f3c;
  bVar1 = *(byte *)(*plVar14 + 0x130);
  bVar2 = *(byte *)(*plVar17 + 0x130);
  if ((bVar1 < bVar2) ||
     (lVar11 = *(long *)(*plVar14 + 200), *(long *)(lVar11 + (ulong)bVar2 * 8 + -8) != *plVar17)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(plVar14);
  }
  lVar18 = plVar14[9];
  iVar7 = (int)plVar14[0xc];
  if (lVar18 == 0) {
    if (iVar7 == 3) {
      bVar2 = *(byte *)(*plVar12 + 0x130);
      if ((bVar1 < bVar2) || (*(long *)(lVar11 + (ulong)bVar2 * 8 + -8) != *plVar12))
      goto LAB_05723f3c;
      lVar11 = plVar14[8];
      if (*(int *)(*(long *)UnityEngine_UIElements_ChangeEvent<Color>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar13 = FUN_058658f4(lVar11,0,0);
      if ((uVar13 & 1) != 0) {
        lVar11 = plVar14[0xd];
        if (lVar11 == 0) goto LAB_05723f3c;
        iVar7 = 0;
        while (iVar8 = FUN_05079c6c(lVar11,0), iVar7 < iVar8) {
          plVar15 = (long *)plVar14[0xd];
          if (plVar15 == (long *)0x0) goto LAB_05723f3c;
          plVar15 = (long *)(**(code **)(*plVar15 + 0x308))
                                      (plVar15,iVar7,*(undefined8 *)(*plVar15 + 0x310));
          if (plVar15 == (long *)0x0) {
LAB_05723f08:
            FUN_058572c8(unaff_x28,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_Add__
                         ,plVar14,0);
            break;
          }
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4))
          goto LAB_05723f08;
          lVar11 = plVar14[0xd];
          iVar7 = iVar7 + 1;
          if (lVar11 == 0) goto LAB_05723f3c;
        }
      }
    }
  }
  else {
    if (iVar7 == 3) {
      plVar17 = *(long **)(unaff_x28 + 0xb0);
      if (plVar17 == (long *)0x0) {
        plVar17 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d4730);
        FUN_05079bb8(plVar17,0);
        *(long **)(unaff_x28 + 0xb0) = plVar17;
      }
      uVar10 = *(undefined8 *)(unaff_x28 + 0xa8);
      lVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>__ctor__
                                 );
      bVar1 = *(byte *)(*plVar12 + 0x130);
      if (*(byte *)(*plVar14 + 0x130) < bVar1) {
        plVar15 = (long *)0x0;
      }
      else {
        plVar15 = plVar14;
        if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *plVar12) {
          plVar15 = (long *)0x0;
        }
      }
      FUN_05116b38(lVar11,0);
      *(long **)(lVar11 + 0x10) = plVar15;
      *(undefined8 *)(lVar11 + 0x18) = uVar10;
      if (plVar17 == (long *)0x0) goto LAB_05723f3c;
      (**(code **)(*plVar17 + 0x308))(plVar17,lVar11,*(undefined8 *)(*plVar17 + 0x310));
      plVar17 = *(long **)(unaff_x28 + 0x90);
      if (plVar17 == (long *)0x0) goto LAB_05723f3c;
      lVar11 = (**(code **)(*plVar17 + 0x308))(plVar17,lVar18,*(undefined8 *)(*plVar17 + 0x310));
      plVar17 = (long *)Method_UnityEngine_UIElements_BaseField<float>_get_rawValue__;
      plVar12 = (long *)
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
      ;
joined_r0x05723ed0:
      if (lVar11 == 0) {
        plVar15 = *(long **)(unaff_x28 + 0x90);
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x2a8))(plVar15,lVar18,plVar14,*(undefined8 *)(*plVar15 + 0x2b0));
          System_Xml_XmlUrlResolver__GetEntity(unaff_x28,lVar18);
          goto LAB_05723f24;
        }
        goto LAB_05723f3c;
      }
      goto LAB_05723f30;
    }
    if (iVar7 == 2) {
      if (lVar18 != *(long *)(unaff_x28 + 0x58)) {
        bVar2 = *(byte *)(*(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__
                         + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(lVar11 + (ulong)bVar2 * 8 + -8) !=
            *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__))
        goto LAB_05723f3c;
        lVar11 = plVar14[0xd];
        if (lVar11 == 0) {
          lVar11 = **(long **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
        }
        if (unaff_x21 == (long *)0x0) goto LAB_05723f3c;
        uVar13 = (**(code **)(*unaff_x21 + 0x348))
                           (unaff_x21,lVar18,*(undefined8 *)(*unaff_x21 + 0x350));
        if ((uVar13 & 1) == 0) {
          (**(code **)(*unaff_x21 + 0x308))(unaff_x21,lVar18,*(undefined8 *)(*unaff_x21 + 0x310));
        }
        if ((*(long *)(unaff_x28 + 0x58) == 0) ||
           (plVar15 = (long *)FUN_0576b140(*(long *)(unaff_x28 + 0x58),0), plVar15 == (long *)0x0))
        goto LAB_05723f3c;
        uVar13 = (**(code **)(*plVar15 + 0x348))(plVar15,lVar11,*(undefined8 *)(*plVar15 + 0x350));
        if ((uVar13 & 1) != 0) goto LAB_05723f24;
        if ((*(long *)(unaff_x28 + 0x58) == 0) ||
           (plVar15 = (long *)FUN_0576b140(*(long *)(unaff_x28 + 0x58),0), plVar15 == (long *)0x0))
        goto LAB_05723f3c;
        (**(code **)(*plVar15 + 0x308))(plVar15,lVar11,*(undefined8 *)(*plVar15 + 0x310));
      }
    }
    else if (iVar7 == 1) {
      plVar15 = *(long **)(unaff_x28 + 0x90);
      if (plVar15 != (long *)0x0) {
        lVar11 = (**(code **)(*plVar15 + 0x308))(plVar15,lVar18,*(undefined8 *)(*plVar15 + 0x310));
        goto joined_r0x05723ed0;
      }
      goto LAB_05723f3c;
    }
  }
LAB_05723f24:
  FUN_05725d60(unaff_x28,plVar14);
LAB_05723f30:
  lVar11 = *(long *)(unaff_x19 + 0x58);
  iVar9 = iVar9 + 1;
  if (lVar11 == 0) goto LAB_05723f3c;
  goto LAB_05723b94;
LAB_05723fa4:
  do {
    lVar18 = (**(code **)(*plVar17 + 0x308))(plVar17,iVar9,*(undefined8 *)(*plVar17 + 0x310));
    if (lVar18 == 0) goto LAB_05723f3c;
    *(long *)(lVar18 + 0x28) = unaff_x19;
    plVar12 = (long *)(**(code **)(*plVar17 + 0x308))
                                (plVar17,iVar9,*(undefined8 *)(*plVar17 + 0x310));
    if (plVar12 == (long *)0x0) {
LAB_05724010:
      plVar12 = (long *)(**(code **)(*plVar17 + 0x308))
                                  (plVar17,iVar9,*(undefined8 *)(*plVar17 + 0x310));
      if (plVar12 != (long *)0x0) {
        lVar18 = *(long *)puVar5;
        bVar1 = *(byte *)(lVar18 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != lVar18))
        goto LAB_05724058;
        plVar12 = (long *)(**(code **)(*plVar17 + 0x308))
                                    (plVar17,iVar9,*(undefined8 *)(*plVar17 + 0x310));
        if (plVar12 != (long *)0x0) {
          lVar18 = *(long *)puVar5;
          bVar1 = *(byte *)(lVar18 + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != lVar18))
          goto LAB_05724640;
        }
        FUN_0572740c(unaff_x28,plVar12);
        uVar10 = FUN_05769f9c();
        if (plVar12 != (long *)0x0) {
LAB_05724540:
          lVar18 = plVar12[0xd];
          goto System_Xml_XmlException__get_LineNumber;
        }
        goto LAB_05723f3c;
      }
LAB_05724058:
      plVar12 = (long *)(**(code **)(*plVar17 + 0x308))
                                  (plVar17,iVar9,*(undefined8 *)(*plVar17 + 0x310));
      if (plVar12 == (long *)0x0) {
LAB_057240a0:
        plVar12 = (long *)(**(code **)(*plVar17 + 0x308))
                                    (plVar17,iVar9,*(undefined8 *)(*plVar17 + 0x310));
        if (plVar12 != (long *)0x0) {
          bVar1 = *(byte *)(*plVar14 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) == *plVar14)) {
            plVar12 = (long *)(**(code **)(*plVar17 + 0x308))
                                        (plVar17,iVar9,*(undefined8 *)(*plVar17 + 0x310));
            if (plVar12 != (long *)0x0) {
              bVar1 = *(byte *)(*plVar14 + 0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *plVar14))
              goto LAB_05724640;
            }
            FUN_05727d7c(unaff_x28,plVar12,0);
            goto LAB_057243d8;
          }
        }
        plVar12 = (long *)(**(code **)(*plVar17 + 0x308))
                                    (plVar17,iVar9,*(undefined8 *)(*plVar17 + 0x310));
        if (plVar12 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ +
                           0x130);
          if ((bVar1 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__)) {
            plVar12 = (long *)(**(code **)(*plVar17 + 0x308))
                                        (plVar17,iVar9,*(undefined8 *)(*plVar17 + 0x310));
            if (plVar12 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ +
                               0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__))
              goto LAB_05724640;
            }
            FUN_0572831c(unaff_x28,plVar12);
            uVar10 = FUN_0576a064();
            if (plVar12 != (long *)0x0) {
              lVar18 = plVar12[0x18];
              goto System_Xml_XmlException__get_LineNumber;
            }
            goto LAB_05723f3c;
          }
        }
        plVar12 = (long *)(**(code **)(*plVar17 + 0x308))
                                    (plVar17,iVar9,*(undefined8 *)(*plVar17 + 0x310));
        if (plVar12 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                           + 0x130);
          if ((bVar1 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
             )) {
            plVar12 = (long *)(**(code **)(*plVar17 + 0x308))
                                        (plVar17,iVar9,*(undefined8 *)(*plVar17 + 0x310));
            if (plVar12 == (long *)0x0) {
              FUN_05728564(unaff_x28,0);
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            bVar1 = *(byte *)(*(long *)
                               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                             + 0x130);
            if ((bVar1 <= *(byte *)(*plVar12 + 0x130)) &&
               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)
                 Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
               )) {
              FUN_05728564(unaff_x28,plVar12);
              uVar10 = *(undefined8 *)(unaff_x19 + 0xa0);
              goto LAB_05724540;
            }
            goto LAB_05724640;
          }
        }
        plVar12 = (long *)(**(code **)(*plVar17 + 0x308))
                                    (plVar17,iVar9,*(undefined8 *)(*plVar17 + 0x310));
        if (plVar12 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                           + 0x130);
          if ((bVar1 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
             )) {
            uVar10 = (**(code **)(*plVar17 + 0x308))
                               (plVar17,iVar9,*(undefined8 *)(*plVar17 + 0x310));
            plVar12 = (long *)FUN_02a7e998(uVar10,*(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                                          );
            FUN_05728728(unaff_x28,plVar12);
            if (plVar12 != (long *)0x0) {
              uVar10 = *(undefined8 *)(unaff_x19 + 0xa8);
              goto LAB_05724540;
            }
            goto LAB_05723f3c;
          }
        }
        plVar12 = (long *)(**(code **)(*plVar17 + 0x308))
                                    (plVar17,iVar9,*(undefined8 *)(*plVar17 + 0x310));
        if (plVar12 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) {
            plVar12 = (long *)(**(code **)(*plVar17 + 0x308))
                                        (plVar17,iVar9,*(undefined8 *)(*plVar17 + 0x310));
            if (plVar12 == (long *)0x0) {
LAB_057245a4:
              plVar12 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
              if (*(byte *)(*plVar12 + 0x130) < bVar1) goto LAB_057245a4;
              if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4) {
                plVar12 = (long *)0x0;
              }
            }
            FUN_0572897c(unaff_x28,plVar12);
            goto System_Xml_XmlException__get_Message;
          }
        }
        uVar10 = (**(code **)(*plVar17 + 0x308))(plVar17,iVar9,*(undefined8 *)(*plVar17 + 0x310));
        FUN_058572c8(unaff_x28,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                     ,uVar10,0);
        uVar10 = (**(code **)(*plVar17 + 0x308))(plVar17,iVar9,*(undefined8 *)(*plVar17 + 0x310));
        if (lVar11 == 0) goto LAB_05723f3c;
        FUN_02e441a0(lVar11,uVar10,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
                    );
      }
      else {
        lVar18 = *(long *)puVar3;
        bVar1 = *(byte *)(lVar18 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != lVar18))
        goto LAB_057240a0;
        plVar12 = (long *)(**(code **)(*plVar17 + 0x308))
                                    (plVar17,iVar9,*(undefined8 *)(*plVar17 + 0x310));
        if (plVar12 != (long *)0x0) {
          lVar18 = *(long *)puVar3;
          bVar1 = *(byte *)(lVar18 + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != lVar18)) {
LAB_05724640:
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar12);
          }
        }
        FUN_05727504(unaff_x28,plVar12,0);
LAB_057243d8:
        uVar10 = FUN_0576a000();
        if (plVar12 == (long *)0x0) goto LAB_05723f3c;
        uVar16 = FUN_0577ac88(plVar12,0);
        FUN_05856a70(unaff_x28,uVar10,uVar16,plVar12,0);
        plVar14 = (long *)
                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
        ;
      }
    }
    else {
      bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6))
      goto LAB_05724010;
      FUN_057272a8(unaff_x28,plVar12);
      uVar10 = FUN_05769f38();
      lVar18 = plVar12[0x10];
System_Xml_XmlException__get_LineNumber:
      FUN_05856a70(unaff_x28,uVar10,lVar18,plVar12,0);
    }
System_Xml_XmlException__get_Message:
    iVar9 = iVar9 + 1;
    iVar7 = FUN_05079c6c(plVar17,0);
  } while (iVar9 < iVar7);
FUN_057245cc:
  puVar4 = 
  Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
  ;
  if (lVar11 != 0) {
    if (0 < *(int *)(lVar11 + 0x18)) {
      iVar9 = 0;
      do {
        lVar18 = *(long *)(unaff_x19 + 0x60);
        uVar10 = FUN_03abf644(lVar11,iVar9,*(undefined8 *)puVar4);
        if (lVar18 == 0) goto LAB_05723f3c;
        FUN_0577173c(lVar18,uVar10,0);
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(lVar11 + 0x18));
    }
    return;
  }
LAB_05723f3c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


