/*
FUNCTION_NAME: System.Xml.XmlException$$GetObjectData
ENTRY_POINT: 05723a1c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_8;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


void System_Xml_XmlException__GetObjectData(void)

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
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  undefined8 unaff_x24;
  long lVar16;
  long unaff_x25;
  long lVar17;
  long *plVar18;
  long unaff_x28;
  long *unaff_x29;
  
  do {
                    /* try { // try from 05723a20 to 05823a27 has its CatchHandler @ 05723cc0 */
    *(long *)(unaff_x28 + 0xa8) = unaff_x25;
    FUN_057234c0();
                    /* try { // try from 05723a28 to 05823a3f has its CatchHandler @ 05723cbc */
    *(undefined8 *)(unaff_x28 + 0xa8) = unaff_x24;
LAB_05723abc:
                    /* try { // try from 05723ac0 to 05823ac7 has its CatchHandler @ 05723cb8 */
    unaff_w23 = unaff_w23 + 1;
    if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_05723f3c;
    iVar7 = FUN_05079c6c(*(long *)(unaff_x19 + 0x58),0);
    if (iVar7 <= unaff_w23) {
                    /* try { // try from 05723b20 to 05823b27 has its CatchHandler @ 05723cd4 */
      *(long *)(unaff_x28 + 0x60) = unaff_x19;
      FUN_05725968();
      FUN_05725d60();
      if (unaff_x22 == 0) {
                    /* try { // try from 05723b3c to 05823b43 has its CatchHandler @ 05723cf0 */
        unaff_x22 = **(long **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
      }
      *(long *)(unaff_x28 + 0x50) = unaff_x22;
      FUN_05726060();
      plVar10 = *(long **)(unaff_x28 + 0x90);
      if (plVar10 == (long *)0x0) goto LAB_05723f3c;
                    /* try { // try from 05723b68 to 05823b6b has its CatchHandler @ 05723d64 */
                    /* try { // try from 05723b6c to 05823b77 has its CatchHandler @ 05723cec */
      (**(code **)(*plVar10 + 0x2b8))(plVar10,*(undefined8 *)(*plVar10 + 0x2c0));
      puVar4 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_labelElement__;
      lVar17 = *(long *)(unaff_x19 + 0x58);
      if (lVar17 == 0) goto LAB_05723f3c;
      iVar7 = 0;
      plVar10 = (long *)
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
      ;
      break;
    }
    plVar10 = *(long **)(unaff_x19 + 0x58);
    if ((plVar10 == (long *)0x0) ||
       (plVar11 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,unaff_w23,*(undefined8 *)(*plVar10 + 0x310)),
       plVar11 == (long *)0x0)) goto LAB_05723f3c;
    bVar1 = *(byte *)(*unaff_x29 + 0x130);
    if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29))
    goto LAB_05724640;
    unaff_x25 = plVar11[9];
    plVar11[5] = unaff_x19;
    uVar12 = FUN_05725cd4();
    if (plVar11[7] == 0) {
      if ((int)plVar11[0xc] == 1) {
        if (unaff_x25 == 0) {
LAB_05723924:
          uVar12 = FUN_05857240();
        }
      }
      else if ((unaff_x25 == 0) && ((int)plVar11[0xc] == 3)) goto LAB_05723924;
    }
    else {
      uVar12 = FUN_05725b7c();
    }
    iVar7 = (int)plVar11[0xc];
    if (iVar7 == 1) goto LAB_05723a40;
    if (iVar7 == 3) {
      if (unaff_x25 != 0) {
        FUN_0572583c(uVar12,plVar11);
        goto LAB_05723a4c;
      }
      goto LAB_05723abc;
    }
    if (iVar7 != 2) goto LAB_05723a48;
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__ +
                     0x130);
    if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__))
    goto LAB_05723f3c;
    lVar17 = plVar11[0xd];
    uVar13 = thunk_FUN_04f6d944(lVar17,*(undefined8 *)(unaff_x19 + 0x48),0);
    if ((uVar13 & 1) != 0) {
      FUN_058572c8();
    }
    if (unaff_x25 == 0) {
      if (lVar17 != 0) {
        if (*(int *)(lVar17 + 0x10) == 0) {
                    /* try { // try from 05723b04 to 05823b0b has its CatchHandler @ 05723cd8 */
          FUN_05857240();
        }
        else {
                    /* try { // try from 05723ae8 to 05823aef has its CatchHandler @ 05723d28 */
          FUN_05725b7c();
        }
      }
      goto LAB_05723abc;
    }
    uVar13 = FUN_04f6dc3c(lVar17,*(undefined8 *)(unaff_x25 + 0x48),0);
    if ((uVar13 & 1) != 0) {
      FUN_05857408();
    }
    unaff_x24 = *(undefined8 *)(unaff_x28 + 0xa8);
  } while( true );
LAB_05723b94:
  iVar8 = FUN_05079c6c(lVar17,0);
  if (iVar8 <= iVar7) {
    lVar17 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>__ctor__
                               );
    FUN_03abf108(lVar17,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                );
    plVar10 = *(long **)(unaff_x19 + 0x60);
    if (plVar10 != (long *)0x0) {
      iVar7 = FUN_05079c6c(plVar10,0);
      puVar6 = Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__;
      puVar5 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__;
      puVar3 = System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo;
      if (iVar7 < 1) goto FUN_057245cc;
      iVar7 = 0;
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
                                  (plVar14,iVar7,*(undefined8 *)(*plVar14 + 0x310)),
     plVar14 == (long *)0x0)) goto LAB_05723f3c;
  bVar1 = *(byte *)(*plVar14 + 0x130);
  bVar2 = *(byte *)(*unaff_x29 + 0x130);
  if ((bVar1 < bVar2) ||
     (lVar17 = *(long *)(*plVar14 + 200), *(long *)(lVar17 + (ulong)bVar2 * 8 + -8) != *unaff_x29))
  {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(plVar14);
  }
  lVar16 = plVar14[9];
  iVar8 = (int)plVar14[0xc];
  if (lVar16 == 0) {
    if (iVar8 == 3) {
      bVar2 = *(byte *)(*plVar10 + 0x130);
      if ((bVar1 < bVar2) || (*(long *)(lVar17 + (ulong)bVar2 * 8 + -8) != *plVar10))
      goto LAB_05723f3c;
      lVar17 = plVar14[8];
      if (*(int *)(*(long *)UnityEngine_UIElements_ChangeEvent<Color>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar13 = FUN_058658f4(lVar17,0,0);
      if ((uVar13 & 1) != 0) {
        lVar17 = plVar14[0xd];
        if (lVar17 == 0) goto LAB_05723f3c;
        iVar8 = 0;
        while (iVar9 = FUN_05079c6c(lVar17,0), iVar8 < iVar9) {
          plVar11 = (long *)plVar14[0xd];
          if (plVar11 == (long *)0x0) goto LAB_05723f3c;
          plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                      (plVar11,iVar8,*(undefined8 *)(*plVar11 + 0x310));
          if (plVar11 == (long *)0x0) {
LAB_05723f08:
            FUN_058572c8(unaff_x28,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_Add__
                         ,plVar14,0);
            break;
          }
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4))
          goto LAB_05723f08;
          lVar17 = plVar14[0xd];
          iVar8 = iVar8 + 1;
          if (lVar17 == 0) goto LAB_05723f3c;
        }
      }
    }
  }
  else {
    if (iVar8 == 3) {
      plVar11 = *(long **)(unaff_x28 + 0xb0);
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d4730);
        FUN_05079bb8(plVar11,0);
        *(long **)(unaff_x28 + 0xb0) = plVar11;
      }
      uVar12 = *(undefined8 *)(unaff_x28 + 0xa8);
      lVar17 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>__ctor__
                                 );
      bVar1 = *(byte *)(*plVar10 + 0x130);
      if (*(byte *)(*plVar14 + 0x130) < bVar1) {
        plVar18 = (long *)0x0;
      }
      else {
        plVar18 = plVar14;
        if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *plVar10) {
          plVar18 = (long *)0x0;
        }
      }
      FUN_05116b38(lVar17,0);
      *(long **)(lVar17 + 0x10) = plVar18;
      *(undefined8 *)(lVar17 + 0x18) = uVar12;
      if (plVar11 == (long *)0x0) goto LAB_05723f3c;
      (**(code **)(*plVar11 + 0x308))(plVar11,lVar17,*(undefined8 *)(*plVar11 + 0x310));
      plVar10 = *(long **)(unaff_x28 + 0x90);
      if (plVar10 == (long *)0x0) goto LAB_05723f3c;
      lVar17 = (**(code **)(*plVar10 + 0x308))(plVar10,lVar16,*(undefined8 *)(*plVar10 + 0x310));
      unaff_x29 = (long *)Method_UnityEngine_UIElements_BaseField<float>_get_rawValue__;
      plVar10 = (long *)
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
      ;
joined_r0x05723ed0:
      if (lVar17 == 0) {
        plVar11 = *(long **)(unaff_x28 + 0x90);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x2a8))(plVar11,lVar16,plVar14,*(undefined8 *)(*plVar11 + 0x2b0));
          System_Xml_XmlUrlResolver__GetEntity(unaff_x28,lVar16);
          goto LAB_05723f24;
        }
        goto LAB_05723f3c;
      }
      goto LAB_05723f30;
    }
    if (iVar8 == 2) {
      if (lVar16 != *(long *)(unaff_x28 + 0x58)) {
        bVar2 = *(byte *)(*(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__
                         + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(lVar17 + (ulong)bVar2 * 8 + -8) !=
            *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__))
        goto LAB_05723f3c;
        lVar17 = plVar14[0xd];
        if (lVar17 == 0) {
          lVar17 = **(long **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
        }
        if (unaff_x21 == (long *)0x0) goto LAB_05723f3c;
        uVar13 = (**(code **)(*unaff_x21 + 0x348))
                           (unaff_x21,lVar16,*(undefined8 *)(*unaff_x21 + 0x350));
        if ((uVar13 & 1) == 0) {
          (**(code **)(*unaff_x21 + 0x308))(unaff_x21,lVar16,*(undefined8 *)(*unaff_x21 + 0x310));
        }
        if ((*(long *)(unaff_x28 + 0x58) == 0) ||
           (plVar11 = (long *)FUN_0576b140(*(long *)(unaff_x28 + 0x58),0), plVar11 == (long *)0x0))
        goto LAB_05723f3c;
        uVar13 = (**(code **)(*plVar11 + 0x348))(plVar11,lVar17,*(undefined8 *)(*plVar11 + 0x350));
        if ((uVar13 & 1) != 0) goto LAB_05723f24;
        if ((*(long *)(unaff_x28 + 0x58) == 0) ||
           (plVar11 = (long *)FUN_0576b140(*(long *)(unaff_x28 + 0x58),0), plVar11 == (long *)0x0))
        goto LAB_05723f3c;
        (**(code **)(*plVar11 + 0x308))(plVar11,lVar17,*(undefined8 *)(*plVar11 + 0x310));
      }
    }
    else if (iVar8 == 1) {
      plVar11 = *(long **)(unaff_x28 + 0x90);
      if (plVar11 != (long *)0x0) {
        lVar17 = (**(code **)(*plVar11 + 0x308))(plVar11,lVar16,*(undefined8 *)(*plVar11 + 0x310));
        goto joined_r0x05723ed0;
      }
      goto LAB_05723f3c;
    }
  }
LAB_05723f24:
  FUN_05725d60(unaff_x28,plVar14);
LAB_05723f30:
  lVar17 = *(long *)(unaff_x19 + 0x58);
  iVar7 = iVar7 + 1;
  if (lVar17 == 0) goto LAB_05723f3c;
  goto LAB_05723b94;
LAB_05723a40:
  if (plVar11[9] != 0) {
LAB_05723a48:
    if (unaff_x25 == 0) goto LAB_05723f3c;
LAB_05723a4c:
    if (*(long *)(unaff_x25 + 0x48) == 0) {
      if ((unaff_x22 != 0) && (*(int *)(unaff_x22 + 0x10) != 0)) {
        lVar17 = FUN_057225e0();
                    /* try { // try from 05723aa0 to 05823aa7 has its CatchHandler @ 05723cb4 */
        plVar11[9] = lVar17;
      }
    }
    else {
      uVar13 = FUN_04f6dc3c(*(undefined8 *)(unaff_x19 + 0x48),*(long *)(unaff_x25 + 0x48),0);
                    /* try { // try from 05723a60 to 05823a63 has its CatchHandler @ 05723d64 */
      if ((uVar13 & 1) != 0) {
                    /* try { // try from 05723a64 to 05823a8b has its CatchHandler @ 05723cfc */
        FUN_05857408();
      }
    }
    FUN_057234c0();
  }
  goto LAB_05723abc;
LAB_05723fa4:
  do {
    lVar16 = (**(code **)(*plVar10 + 0x308))(plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
    if (lVar16 == 0) goto LAB_05723f3c;
    *(long *)(lVar16 + 0x28) = unaff_x19;
    plVar11 = (long *)(**(code **)(*plVar10 + 0x308))
                                (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
    if (plVar11 == (long *)0x0) {
LAB_05724010:
      plVar11 = (long *)(**(code **)(*plVar10 + 0x308))
                                  (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
      if (plVar11 != (long *)0x0) {
        lVar16 = *(long *)puVar5;
        bVar1 = *(byte *)(lVar16 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar16))
        goto LAB_05724058;
        plVar11 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar11 != (long *)0x0) {
          lVar16 = *(long *)puVar5;
          bVar1 = *(byte *)(lVar16 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar16))
          goto LAB_05724640;
        }
        FUN_0572740c(unaff_x28,plVar11);
        uVar12 = FUN_05769f9c();
        if (plVar11 != (long *)0x0) {
LAB_05724540:
          lVar16 = plVar11[0xd];
          goto System_Xml_XmlException__get_LineNumber;
        }
        goto LAB_05723f3c;
      }
LAB_05724058:
      plVar11 = (long *)(**(code **)(*plVar10 + 0x308))
                                  (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
      if (plVar11 == (long *)0x0) {
LAB_057240a0:
        plVar11 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar11 != (long *)0x0) {
          bVar1 = *(byte *)(*plVar14 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *plVar14)) {
            plVar11 = (long *)(**(code **)(*plVar10 + 0x308))
                                        (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
            if (plVar11 != (long *)0x0) {
              bVar1 = *(byte *)(*plVar14 + 0x130);
              if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *plVar14))
              goto LAB_05724640;
            }
            FUN_05727d7c(unaff_x28,plVar11,0);
            goto LAB_057243d8;
          }
        }
        plVar11 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar11 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ +
                           0x130);
          if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__)) {
            plVar11 = (long *)(**(code **)(*plVar10 + 0x308))
                                        (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
            if (plVar11 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ +
                               0x130);
              if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__))
              goto LAB_05724640;
            }
            FUN_0572831c(unaff_x28,plVar11);
            uVar12 = FUN_0576a064();
            if (plVar11 != (long *)0x0) {
              lVar16 = plVar11[0x18];
              goto System_Xml_XmlException__get_LineNumber;
            }
            goto LAB_05723f3c;
          }
        }
        plVar11 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar11 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                           + 0x130);
          if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
             )) {
            plVar11 = (long *)(**(code **)(*plVar10 + 0x308))
                                        (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
            if (plVar11 == (long *)0x0) {
              FUN_05728564(unaff_x28,0);
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            bVar1 = *(byte *)(*(long *)
                               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                             + 0x130);
            if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)
                 Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
               )) {
              FUN_05728564(unaff_x28,plVar11);
              uVar12 = *(undefined8 *)(unaff_x19 + 0xa0);
              goto LAB_05724540;
            }
            goto LAB_05724640;
          }
        }
        plVar11 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar11 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                           + 0x130);
          if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
             )) {
            uVar12 = (**(code **)(*plVar10 + 0x308))
                               (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
            plVar11 = (long *)FUN_02a7e998(uVar12,*(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                                          );
            FUN_05728728(unaff_x28,plVar11);
            if (plVar11 != (long *)0x0) {
              uVar12 = *(undefined8 *)(unaff_x19 + 0xa8);
              goto LAB_05724540;
            }
            goto LAB_05723f3c;
          }
        }
        plVar11 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar11 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) {
            plVar11 = (long *)(**(code **)(*plVar10 + 0x308))
                                        (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
            if (plVar11 == (long *)0x0) {
LAB_057245a4:
              plVar11 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
              if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_057245a4;
              if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4) {
                plVar11 = (long *)0x0;
              }
            }
            FUN_0572897c(unaff_x28,plVar11);
            goto System_Xml_XmlException__get_Message;
          }
        }
        uVar12 = (**(code **)(*plVar10 + 0x308))(plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
        FUN_058572c8(unaff_x28,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                     ,uVar12,0);
        uVar12 = (**(code **)(*plVar10 + 0x308))(plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
        if (lVar17 == 0) goto LAB_05723f3c;
        FUN_02e441a0(lVar17,uVar12,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
                    );
      }
      else {
        lVar16 = *(long *)puVar3;
        bVar1 = *(byte *)(lVar16 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar16))
        goto LAB_057240a0;
        plVar11 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar11 != (long *)0x0) {
          lVar16 = *(long *)puVar3;
          bVar1 = *(byte *)(lVar16 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar16)) {
LAB_05724640:
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar11);
          }
        }
        FUN_05727504(unaff_x28,plVar11,0);
LAB_057243d8:
        uVar12 = FUN_0576a000();
        if (plVar11 == (long *)0x0) goto LAB_05723f3c;
        uVar15 = FUN_0577ac88(plVar11,0);
        FUN_05856a70(unaff_x28,uVar12,uVar15,plVar11,0);
        plVar14 = (long *)
                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
        ;
      }
    }
    else {
      bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6))
      goto LAB_05724010;
      FUN_057272a8(unaff_x28,plVar11);
      uVar12 = FUN_05769f38();
      lVar16 = plVar11[0x10];
System_Xml_XmlException__get_LineNumber:
      FUN_05856a70(unaff_x28,uVar12,lVar16,plVar11,0);
    }
System_Xml_XmlException__get_Message:
    iVar7 = iVar7 + 1;
    iVar8 = FUN_05079c6c(plVar10,0);
  } while (iVar7 < iVar8);
FUN_057245cc:
  puVar4 = 
  Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
  ;
  if (lVar17 != 0) {
    if (0 < *(int *)(lVar17 + 0x18)) {
      iVar7 = 0;
      do {
        lVar16 = *(long *)(unaff_x19 + 0x60);
        uVar12 = FUN_03abf644(lVar17,iVar7,*(undefined8 *)puVar4);
        if (lVar16 == 0) goto LAB_05723f3c;
        FUN_0577173c(lVar16,uVar12,0);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(lVar17 + 0x18));
    }
    return;
  }
LAB_05723f3c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


