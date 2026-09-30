/*
FUNCTION_NAME: System.Xml.XmlException$$FormatUserMessage
ENTRY_POINT: 05723cdc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


void System_Xml_XmlException__FormatUserMessage(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  long in_x9;
  uint in_w11;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  int unaff_w24;
  long lVar13;
  long *plVar14;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  undefined8 uVar15;
  long *unaff_x29;
  
code_r0x05723cdc:
                    /* catch() { ... } // from try @ 05723bcc with catch @ 05723cdc */
                    /* catch() { ... } // from try @ 05723bb8 with catch @ 05723ce0 */
                    /* catch() { ... } // from try @ 05723b9c with catch @ 05723ce4 */
  if (in_w11 < *(byte *)(param_1 + 0x130)) goto LAB_05723f08;
                    /* catch() { ... } // from try @ 05723b90 with catch @ 05723ce8 */
                    /* catch() { ... } // from try @ 05723b6c with catch @ 05723cec */
                    /* catch() { ... } // from try @ 05723b3c with catch @ 05723cf0 */
                    /* catch() { ... } // from try @ 0572382c with catch @ 05723cf4 */
                    /* catch() { ... } // from try @ 05723c98 with catch @ 05723cf8 */
  if (*(long *)(*(long *)(in_x9 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) != param_1)
  goto LAB_05723f08;
                    /* catch() { ... } // from try @ 05723a64 with catch @ 05723cfc */
  lVar9 = unaff_x23[0xd];
                    /* catch() { ... } // from try @ 057239d4 with catch @ 05723d00 */
  unaff_w24 = unaff_w24 + 1;
                    /* catch() { ... } // from try @ 05723948 with catch @ 05723d04 */
  if (lVar9 != 0) {
LAB_05723ca0:
    iVar6 = FUN_05079c6c(lVar9,0);
    if (unaff_w24 < iVar6) {
      plVar8 = (long *)unaff_x23[0xd];
      if (plVar8 == (long *)0x0) goto LAB_05723f3c;
      plVar8 = (long *)(**(code **)(*plVar8 + 0x308))
                                 (plVar8,unaff_w24,*(undefined8 *)(*plVar8 + 0x310));
      if (plVar8 != (long *)0x0) goto LAB_05723cd0;
LAB_05723f08:
      FUN_058572c8(unaff_x28,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_Add__
                   ,unaff_x23,0);
    }
LAB_05723f24:
    do {
      FUN_05725d60(unaff_x28,unaff_x23);
      do {
        while( true ) {
          unaff_w22 = unaff_w22 + 1;
          if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_05723f3c;
          iVar6 = FUN_05079c6c(*(long *)(unaff_x19 + 0x58),0);
          if (iVar6 <= unaff_w22) {
            lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>__ctor__
                                      );
            FUN_03abf108(lVar9,*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                        );
            plVar8 = *(long **)(unaff_x19 + 0x60);
            if (plVar8 == (long *)0x0) goto LAB_05723f3c;
            iVar6 = FUN_05079c6c(plVar8,0);
            puVar5 = Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__;
            puVar4 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__;
            puVar3 = 
            System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo;
            if (iVar6 < 1) goto FUN_057245cc;
            iVar6 = 0;
            plVar14 = (long *)
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
            ;
            goto LAB_05723fa4;
          }
          plVar8 = *(long **)(unaff_x19 + 0x58);
          if ((plVar8 == (long *)0x0) ||
             (unaff_x23 = (long *)(**(code **)(*plVar8 + 0x308))
                                            (plVar8,unaff_w22,*(undefined8 *)(*plVar8 + 0x310)),
             unaff_x23 == (long *)0x0)) goto LAB_05723f3c;
          bVar1 = *(byte *)(*unaff_x23 + 0x130);
          bVar2 = *(byte *)(*unaff_x29 + 0x130);
          if ((bVar1 < bVar2) ||
             (lVar9 = *(long *)(*unaff_x23 + 200),
             *(long *)(lVar9 + (ulong)bVar2 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(unaff_x23);
          }
          lVar13 = unaff_x23[9];
          iVar6 = (int)unaff_x23[0xc];
          if (lVar13 == 0) {
            if (iVar6 != 3) goto LAB_05723f24;
            bVar2 = *(byte *)(*unaff_x26 + 0x130);
            if ((bVar1 < bVar2) || (*(long *)(lVar9 + (ulong)bVar2 * 8 + -8) != *unaff_x26))
            goto LAB_05723f3c;
            lVar9 = unaff_x23[8];
            if (*(int *)(*(long *)UnityEngine_UIElements_ChangeEvent<Color>_TypeInfo + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar10 = FUN_058658f4(lVar9,0,0);
            if ((uVar10 & 1) == 0) goto LAB_05723f24;
            lVar9 = unaff_x23[0xd];
            if (lVar9 == 0) goto LAB_05723f3c;
            unaff_w24 = 0;
            goto LAB_05723ca0;
          }
          if (iVar6 == 3) break;
          if (iVar6 == 2) {
                    /* catch() { ... } // from try @ 057238f8 with catch @ 05723d0c */
                    /* catch() { ... } // from try @ 057238e0 with catch @ 05723d10 */
                    /* catch() { ... } // from try @ 057238c8 with catch @ 05723d14 */
            if (lVar13 == *(long *)(unaff_x28 + 0x58)) goto LAB_05723f24;
                    /* catch() { ... } // from try @ 057238a4 with catch @ 05723d18 */
                    /* catch() { ... } // from try @ 05723884 with catch @ 05723d1c */
                    /* catch() { ... } // from try @ 05723874 with catch @ 05723d20 */
                    /* catch() { ... } // from try @ 05723868 with catch @ 05723d24 */
            bVar2 = *(byte *)(*(long *)
                               Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__ +
                             0x130);
                    /* catch() { ... } // from try @ 05723ae8 with catch @ 05723d28 */
                    /* catch() { ... } // from try @ 05723c8c with catch @ 05723d2c */
                    /* catch() { ... } // from try @ 05723c88 with catch @ 05723d30 */
                    /* catch() { ... } // from try @ 05723c84 with catch @ 05723d34 */
                    /* catch() { ... } // from try @ 05723c80 with catch @ 05723d38 */
                    /* catch() { ... } // from try @ 05723628 with catch @ 05723d3c */
            if ((bVar1 < bVar2) ||
               (*(long *)(lVar9 + (ulong)bVar2 * 8 + -8) !=
                *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__))
            goto LAB_05723f3c;
                    /* catch() { ... } // from try @ 0572319c with catch @ 05723d40 */
            lVar9 = unaff_x23[0xd];
                    /* catch() { ... } // from try @ 05723c7c with catch @ 05723d44 */
            if (lVar9 == 0) {
                    /* catch() { ... } // from try @ 05723c78 with catch @ 05723d48 */
                    /* catch() { ... } // from try @ 05723c90 with catch @ 05723d4c */
                    /* catch() { ... } // from try @ 05723c5c with catch @ 05723d50 */
                    /* catch() { ... } // from try @ 05723478 with catch @ 05723d54 */
                    /* catch() { ... } // from try @ 0572346c with catch @ 05723d58 */
              lVar9 = **(long **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
            }
                    /* catch() { ... } // from try @ 05723460 with catch @ 05723d5c */
            if (unaff_x21 == (long *)0x0) goto LAB_05723f3c;
                    /* catch() { ... } // from try @ 05723450 with catch @ 05723d60 */
                    /* catch() { ... } // from try @ 05723198 with catch @ 05723d64
                       catch() { ... } // from try @ 0572333c with catch @ 05723d64
                       catch() { ... } // from try @ 0572344c with catch @ 05723d64
                       catch() { ... } // from try @ 05723624 with catch @ 05723d64
                       catch() { ... } // from try @ 057236f0 with catch @ 05723d64
                       catch() { ... } // from try @ 057239d0 with catch @ 05723d64
                       catch() { ... } // from try @ 057239fc with catch @ 05723d64
                       catch() { ... } // from try @ 05723a60 with catch @ 05723d64
                       catch() { ... } // from try @ 05723b68 with catch @ 05723d64 */
                    /* catch() { ... } // from try @ 057237a0 with catch @ 05723d68 */
                    /* catch() { ... } // from try @ 057233ec with catch @ 05723d6c */
                    /* catch() { ... } // from try @ 05723778 with catch @ 05723d70 */
                    /* catch() { ... } // from try @ 057233c4 with catch @ 05723d74 */
            uVar10 = (**(code **)(*unaff_x21 + 0x348))
                               (unaff_x21,lVar13,*(undefined8 *)(*unaff_x21 + 0x350));
                    /* catch() { ... } // from try @ 05723220 with catch @ 05723d78 */
            if ((uVar10 & 1) == 0) {
                    /* catch() { ... } // from try @ 05723258 with catch @ 05723d7c */
                    /* catch() { ... } // from try @ 057236a8 with catch @ 05723d80 */
                    /* catch() { ... } // from try @ 05723c58 with catch @ 05723d84 */
                    /* catch() { ... } // from try @ 05723c54 with catch @ 05723d88 */
                    /* catch() { ... } // from try @ 05723c50 with catch @ 05723d8c */
                    /* catch() { ... } // from try @ 05723c4c with catch @ 05723d90 */
              (**(code **)(*unaff_x21 + 0x308))
                        (unaff_x21,lVar13,*(undefined8 *)(*unaff_x21 + 0x310));
            }
                    /* catch() { ... } // from try @ 05723548 with catch @ 05723d94 */
                    /* catch() { ... } // from try @ 05723508 with catch @ 05723d98 */
                    /* catch() { ... } // from try @ 05723c48 with catch @ 05723d9c */
                    /* catch() { ... } // from try @ 05723c44 with catch @ 05723da0 */
                    /* catch() { ... } // from try @ 05723238 with catch @ 05723da4 */
            if ((*(long *)(unaff_x28 + 0x58) == 0) ||
               (plVar8 = (long *)FUN_0576b140(*(long *)(unaff_x28 + 0x58),0), plVar8 == (long *)0x0)
               ) goto LAB_05723f3c;
                    /* catch() { ... } // from try @ 0572377c with catch @ 05723da8 */
                    /* catch() { ... } // from try @ 057233c8 with catch @ 05723dac */
            uVar10 = (**(code **)(*plVar8 + 0x348))(plVar8,lVar9,*(undefined8 *)(*plVar8 + 0x350));
            if ((uVar10 & 1) != 0) goto LAB_05723f24;
            if ((*(long *)(unaff_x28 + 0x58) == 0) ||
               (plVar8 = (long *)FUN_0576b140(*(long *)(unaff_x28 + 0x58),0), plVar8 == (long *)0x0)
               ) goto LAB_05723f3c;
            (**(code **)(*plVar8 + 0x308))(plVar8,lVar9,*(undefined8 *)(*plVar8 + 0x310));
            goto LAB_05723f24;
          }
          if (iVar6 != 1) goto LAB_05723f24;
          plVar8 = *(long **)(unaff_x28 + 0x90);
          if (plVar8 == (long *)0x0) goto LAB_05723f3c;
          lVar9 = (**(code **)(*plVar8 + 0x308))(plVar8,lVar13,*(undefined8 *)(*plVar8 + 0x310));
          if (lVar9 == 0) goto LAB_05723ed4;
        }
        plVar8 = *(long **)(unaff_x28 + 0xb0);
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d4730);
          FUN_05079bb8(plVar8,0);
          *(long **)(unaff_x28 + 0xb0) = plVar8;
        }
        uVar15 = *(undefined8 *)(unaff_x28 + 0xa8);
        lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>__ctor__
                                  );
        bVar1 = *(byte *)(*unaff_x26 + 0x130);
        if (*(byte *)(*unaff_x23 + 0x130) < bVar1) {
          plVar14 = (long *)0x0;
        }
        else {
          plVar14 = unaff_x23;
          if (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x26) {
            plVar14 = (long *)0x0;
          }
        }
        FUN_05116b38(lVar9,0);
        *(long **)(lVar9 + 0x10) = plVar14;
        *(undefined8 *)(lVar9 + 0x18) = uVar15;
        if (plVar8 == (long *)0x0) goto LAB_05723f3c;
        (**(code **)(*plVar8 + 0x308))(plVar8,lVar9,*(undefined8 *)(*plVar8 + 0x310));
        plVar8 = *(long **)(unaff_x28 + 0x90);
        if (plVar8 == (long *)0x0) goto LAB_05723f3c;
        lVar9 = (**(code **)(*plVar8 + 0x308))(plVar8,lVar13,*(undefined8 *)(*plVar8 + 0x310));
        unaff_x26 = (long *)
                    Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
        ;
        unaff_x29 = (long *)Method_UnityEngine_UIElements_BaseField<float>_get_rawValue__;
      } while (lVar9 != 0);
LAB_05723ed4:
      plVar8 = *(long **)(unaff_x28 + 0x90);
      if (plVar8 == (long *)0x0) break;
      (**(code **)(*plVar8 + 0x2a8))(plVar8,lVar13,unaff_x23,*(undefined8 *)(*plVar8 + 0x2b0));
      System_Xml_XmlUrlResolver__GetEntity(unaff_x28,lVar13);
    } while( true );
  }
  goto LAB_05723f3c;
LAB_05723cd0:
  param_1 = *unaff_x27;
  in_x9 = *plVar8;
  in_w11 = (uint)*(byte *)(in_x9 + 0x130);
  goto code_r0x05723cdc;
LAB_05723fa4:
  do {
    lVar13 = (**(code **)(*plVar8 + 0x308))(plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
    if (lVar13 == 0) goto LAB_05723f3c;
    *(long *)(lVar13 + 0x28) = unaff_x19;
    plVar11 = (long *)(**(code **)(*plVar8 + 0x308))(plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
    if (plVar11 == (long *)0x0) {
LAB_05724010:
      plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                  (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
      if (plVar11 != (long *)0x0) {
        lVar13 = *(long *)puVar4;
        bVar1 = *(byte *)(lVar13 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar13))
        goto LAB_05724058;
        plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                    (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        if (plVar11 != (long *)0x0) {
          lVar13 = *(long *)puVar4;
          bVar1 = *(byte *)(lVar13 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar13))
          goto LAB_05724640;
        }
        FUN_0572740c(unaff_x28,plVar11);
        uVar15 = FUN_05769f9c();
        if (plVar11 != (long *)0x0) {
LAB_05724540:
          lVar13 = plVar11[0xd];
          goto System_Xml_XmlException__get_LineNumber;
        }
        goto LAB_05723f3c;
      }
LAB_05724058:
      plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                  (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
      if (plVar11 == (long *)0x0) {
LAB_057240a0:
        plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                    (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        if (plVar11 != (long *)0x0) {
          bVar1 = *(byte *)(*plVar14 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *plVar14)) {
            plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                        (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
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
        plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                    (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        if (plVar11 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ +
                           0x130);
          if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__)) {
            plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                        (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
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
            uVar15 = FUN_0576a064();
            if (plVar11 != (long *)0x0) {
              lVar13 = plVar11[0x18];
              goto System_Xml_XmlException__get_LineNumber;
            }
            goto LAB_05723f3c;
          }
        }
        plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                    (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        if (plVar11 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                           + 0x130);
          if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
             )) {
            plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                        (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
            if (plVar11 == (long *)0x0) {
              FUN_05728564(unaff_x28,0);
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            bVar1 = *(byte *)(*(long *)
                               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                             + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)
                 Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
               )) {
LAB_05724640:
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar11);
            }
            FUN_05728564(unaff_x28,plVar11);
            uVar15 = *(undefined8 *)(unaff_x19 + 0xa0);
            goto LAB_05724540;
          }
        }
        plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                    (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        if (plVar11 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                           + 0x130);
          if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
             )) {
            uVar15 = (**(code **)(*plVar8 + 0x308))(plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
            plVar11 = (long *)FUN_02a7e998(uVar15,*(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                                          );
            FUN_05728728(unaff_x28,plVar11);
            if (plVar11 != (long *)0x0) {
              uVar15 = *(undefined8 *)(unaff_x19 + 0xa8);
              goto LAB_05724540;
            }
            goto LAB_05723f3c;
          }
        }
        plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                    (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        if (plVar11 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x27 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x27)) {
            plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                        (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
            if (plVar11 == (long *)0x0) {
LAB_057245a4:
              plVar11 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*unaff_x27 + 0x130);
              if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_057245a4;
              if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27) {
                plVar11 = (long *)0x0;
              }
            }
            FUN_0572897c(unaff_x28,plVar11);
            goto System_Xml_XmlException__get_Message;
          }
        }
        uVar15 = (**(code **)(*plVar8 + 0x308))(plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        FUN_058572c8(unaff_x28,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                     ,uVar15,0);
        uVar15 = (**(code **)(*plVar8 + 0x308))(plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        if (lVar9 == 0) goto LAB_05723f3c;
        FUN_02e441a0(lVar9,uVar15,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
                    );
      }
      else {
        lVar13 = *(long *)puVar3;
        bVar1 = *(byte *)(lVar13 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar13))
        goto LAB_057240a0;
        plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                    (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        if (plVar11 != (long *)0x0) {
          lVar13 = *(long *)puVar3;
          bVar1 = *(byte *)(lVar13 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar13))
          goto LAB_05724640;
        }
        FUN_05727504(unaff_x28,plVar11,0);
LAB_057243d8:
        uVar15 = FUN_0576a000();
        if (plVar11 == (long *)0x0) goto LAB_05723f3c;
        uVar12 = FUN_0577ac88(plVar11,0);
        FUN_05856a70(unaff_x28,uVar15,uVar12,plVar11,0);
        plVar14 = (long *)
                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
        ;
      }
    }
    else {
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5))
      goto LAB_05724010;
      FUN_057272a8(unaff_x28,plVar11);
      uVar15 = FUN_05769f38();
      lVar13 = plVar11[0x10];
System_Xml_XmlException__get_LineNumber:
      FUN_05856a70(unaff_x28,uVar15,lVar13,plVar11,0);
    }
System_Xml_XmlException__get_Message:
    iVar6 = iVar6 + 1;
    iVar7 = FUN_05079c6c(plVar8,0);
  } while (iVar6 < iVar7);
FUN_057245cc:
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
  ;
  if (lVar9 == 0) {
LAB_05723f3c:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (0 < *(int *)(lVar9 + 0x18)) {
    iVar6 = 0;
    do {
      lVar13 = *(long *)(unaff_x19 + 0x60);
      uVar15 = FUN_03abf644(lVar9,iVar6,*(undefined8 *)puVar3);
      if (lVar13 == 0) goto LAB_05723f3c;
      FUN_0577173c(lVar13,uVar15,0);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(lVar9 + 0x18));
  }
  return;
}


