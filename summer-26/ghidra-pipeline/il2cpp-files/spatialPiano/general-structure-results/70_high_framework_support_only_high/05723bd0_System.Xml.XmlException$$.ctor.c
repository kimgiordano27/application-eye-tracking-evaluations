/*
FUNCTION_NAME: System.Xml.XmlException$$.ctor
ENTRY_POINT: 05723bd0
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


void System_Xml_XmlException___ctor(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long lVar14;
  long *plVar15;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  
code_r0x05723bd0:
  bVar1 = *(byte *)(param_1 + 0x130);
  if ((bVar1 < *(byte *)(param_3 + 0x130)) ||
     (lVar13 = *(long *)(param_1 + 200),
     *(long *)(lVar13 + (ulong)*(byte *)(param_3 + 0x130) * 8 + -8) != param_3)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(unaff_x23);
  }
  lVar14 = unaff_x23[9];
  iVar6 = (int)unaff_x23[0xc];
                    /* try { // try from 05723bfc to 05823bff has its CatchHandler @ 05723e30 */
  if (lVar14 == 0) {
                    /* try { // try from 05723c3c to 05823c3f has its CatchHandler @ 05723dc0 */
                    /* try { // try from 05723c40 to 05823c43 has its CatchHandler @ 05723dbc */
    if (iVar6 == 3) {
                    /* try { // try from 05723c44 to 05823c47 has its CatchHandler @ 05723da0 */
                    /* try { // try from 05723c48 to 05823c4b has its CatchHandler @ 05723d9c */
      bVar2 = *(byte *)(*unaff_x26 + 0x130);
                    /* try { // try from 05723c4c to 05823c4f has its CatchHandler @ 05723d90 */
                    /* try { // try from 05723c50 to 05823c53 has its CatchHandler @ 05723d8c */
                    /* try { // try from 05723c54 to 05823c57 has its CatchHandler @ 05723d88 */
                    /* try { // try from 05723c58 to 05823c5b has its CatchHandler @ 05723d84 */
                    /* try { // try from 05723c5c to 05823c5f has its CatchHandler @ 05723d50 */
                    /* try { // try from 05723c60 to 05823c77 has its CatchHandler @ 057230e4 */
      if ((bVar1 < bVar2) || (*(long *)(lVar13 + (ulong)bVar2 * 8 + -8) != *unaff_x26))
      goto LAB_05723f3c;
      lVar13 = unaff_x23[8];
                    /* try { // try from 05723c78 to 05823c7b has its CatchHandler @ 05723d48 */
      if (*(int *)(*(long *)UnityEngine_UIElements_ChangeEvent<Color>_TypeInfo + 0xe4) == 0) {
                    /* try { // try from 05723c7c to 05823c7f has its CatchHandler @ 05723d44 */
        thunk_FUN_02f6670c();
      }
                    /* try { // try from 05723c80 to 05823c83 has its CatchHandler @ 05723d38 */
                    /* try { // try from 05723c84 to 05823c87 has its CatchHandler @ 05723d34 */
                    /* try { // try from 05723c88 to 05823c8b has its CatchHandler @ 05723d30 */
                    /* try { // try from 05723c8c to 05823c8f has its CatchHandler @ 05723d2c */
      uVar9 = FUN_058658f4(lVar13,0,0);
                    /* try { // try from 05723c90 to 05823c97 has its CatchHandler @ 05723d4c */
      if ((uVar9 & 1) != 0) {
        lVar13 = unaff_x23[0xd];
                    /* try { // try from 05723c98 to 05823c9b has its CatchHandler @ 05723cf8 */
        if (lVar13 == 0) goto LAB_05723f3c;
                    /* catch() { ... } // from try @ 05723a14 with catch @ 05723c9c
                       try { // try from 05723c9c to 05823e4b has its CatchHandler @ 057230e4 */
        iVar6 = 0;
                    /* catch() { ... } // from try @ 057239ac with catch @ 05723ca0 */
                    /* catch() { ... } // from try @ 05723974 with catch @ 05723ca4 */
                    /* catch() { ... } // from try @ 05723b8c with catch @ 05723ca8 */
                    /* catch() { ... } // from try @ 05723944 with catch @ 05723cac */
        while (iVar7 = FUN_05079c6c(lVar13,0), iVar6 < iVar7) {
                    /* catch() { ... } // from try @ 05723860 with catch @ 05723cb0 */
          plVar8 = (long *)unaff_x23[0xd];
                    /* catch() { ... } // from try @ 05723aa0 with catch @ 05723cb4 */
          if (plVar8 == (long *)0x0) goto LAB_05723f3c;
                    /* catch() { ... } // from try @ 05723ac0 with catch @ 05723cb8 */
                    /* catch() { ... } // from try @ 05723a28 with catch @ 05723cbc */
                    /* catch() { ... } // from try @ 05723a20 with catch @ 05723cc0 */
                    /* catch() { ... } // from try @ 05723a00 with catch @ 05723cc4 */
                    /* catch() { ... } // from try @ 057239b0 with catch @ 05723cc8 */
          plVar8 = (long *)(**(code **)(*plVar8 + 0x308))
                                     (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
                    /* catch() { ... } // from try @ 05723984 with catch @ 05723ccc */
          if (plVar8 == (long *)0x0) {
LAB_05723f08:
            FUN_058572c8(unaff_x28,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_Add__
                         ,unaff_x23,0);
            break;
          }
                    /* catch() { ... } // from try @ 05723978 with catch @ 05723cd0 */
                    /* catch() { ... } // from try @ 05723b20 with catch @ 05723cd4 */
                    /* catch() { ... } // from try @ 05723b04 with catch @ 05723cd8 */
          bVar1 = *(byte *)(*unaff_x27 + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27))
          goto LAB_05723f08;
          lVar13 = unaff_x23[0xd];
          iVar6 = iVar6 + 1;
          if (lVar13 == 0) goto LAB_05723f3c;
        }
      }
    }
  }
  else {
                    /* try { // try from 05723c00 to 05823c03 has its CatchHandler @ 05723e28 */
                    /* try { // try from 05723c04 to 05823c07 has its CatchHandler @ 05723e20 */
    if (iVar6 == 3) {
      plVar8 = *(long **)(unaff_x28 + 0xb0);
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d4730);
        FUN_05079bb8(plVar8,0);
        *(long **)(unaff_x28 + 0xb0) = plVar8;
      }
      uVar11 = *(undefined8 *)(unaff_x28 + 0xa8);
      lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>__ctor__
                                 );
      bVar1 = *(byte *)(*unaff_x26 + 0x130);
      if (*(byte *)(*unaff_x23 + 0x130) < bVar1) {
        plVar15 = (long *)0x0;
      }
      else {
        plVar15 = unaff_x23;
        if (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x26) {
          plVar15 = (long *)0x0;
        }
      }
      FUN_05116b38(lVar13,0);
      *(long **)(lVar13 + 0x10) = plVar15;
      *(undefined8 *)(lVar13 + 0x18) = uVar11;
      if (plVar8 == (long *)0x0) goto LAB_05723f3c;
      (**(code **)(*plVar8 + 0x308))(plVar8,lVar13,*(undefined8 *)(*plVar8 + 0x310));
      plVar8 = *(long **)(unaff_x28 + 0x90);
      if (plVar8 == (long *)0x0) goto LAB_05723f3c;
      lVar13 = (**(code **)(*plVar8 + 0x308))(plVar8,lVar14,*(undefined8 *)(*plVar8 + 0x310));
      unaff_x29 = (long *)Method_UnityEngine_UIElements_BaseField<float>_get_rawValue__;
      unaff_x26 = (long *)
                  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
      ;
joined_r0x05723ed0:
      if (lVar13 == 0) {
        plVar8 = *(long **)(unaff_x28 + 0x90);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x2a8))(plVar8,lVar14,unaff_x23,*(undefined8 *)(*plVar8 + 0x2b0));
          System_Xml_XmlUrlResolver__GetEntity(unaff_x28,lVar14);
          goto LAB_05723f24;
        }
        goto LAB_05723f3c;
      }
      goto LAB_05723f30;
    }
                    /* try { // try from 05723c08 to 05823c0b has its CatchHandler @ 05723e18 */
                    /* try { // try from 05723c0c to 05823c0f has its CatchHandler @ 05723e0c */
    if (iVar6 == 2) {
      if (lVar14 != *(long *)(unaff_x28 + 0x58)) {
        bVar2 = *(byte *)(*(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__
                         + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(lVar13 + (ulong)bVar2 * 8 + -8) !=
            *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__))
        goto LAB_05723f3c;
        lVar13 = unaff_x23[0xd];
        if (lVar13 == 0) {
          lVar13 = **(long **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
        }
        if (unaff_x21 == (long *)0x0) goto LAB_05723f3c;
        uVar9 = (**(code **)(*unaff_x21 + 0x348))
                          (unaff_x21,lVar14,*(undefined8 *)(*unaff_x21 + 0x350));
        if ((uVar9 & 1) == 0) {
          (**(code **)(*unaff_x21 + 0x308))(unaff_x21,lVar14,*(undefined8 *)(*unaff_x21 + 0x310));
        }
        if ((*(long *)(unaff_x28 + 0x58) == 0) ||
           (plVar8 = (long *)FUN_0576b140(*(long *)(unaff_x28 + 0x58),0), plVar8 == (long *)0x0))
        goto LAB_05723f3c;
        uVar9 = (**(code **)(*plVar8 + 0x348))(plVar8,lVar13,*(undefined8 *)(*plVar8 + 0x350));
        if ((uVar9 & 1) != 0) goto LAB_05723f24;
        if ((*(long *)(unaff_x28 + 0x58) == 0) ||
           (plVar8 = (long *)FUN_0576b140(*(long *)(unaff_x28 + 0x58),0), plVar8 == (long *)0x0))
        goto LAB_05723f3c;
        (**(code **)(*plVar8 + 0x308))(plVar8,lVar13,*(undefined8 *)(*plVar8 + 0x310));
      }
    }
    else {
                    /* try { // try from 05723c10 to 05823c13 has its CatchHandler @ 05723e08 */
                    /* try { // try from 05723c14 to 05823c17 has its CatchHandler @ 05723e00 */
      if (iVar6 == 1) {
                    /* try { // try from 05723c18 to 05823c1b has its CatchHandler @ 05723dfc */
        plVar8 = *(long **)(unaff_x28 + 0x90);
                    /* try { // try from 05723c1c to 05823c1f has its CatchHandler @ 05723df4 */
        if (plVar8 != (long *)0x0) {
                    /* try { // try from 05723c20 to 05823c23 has its CatchHandler @ 05723df0 */
                    /* try { // try from 05723c24 to 05823c27 has its CatchHandler @ 05723dec */
                    /* try { // try from 05723c28 to 05823c2b has its CatchHandler @ 05723de8 */
                    /* try { // try from 05723c2c to 05823c2f has its CatchHandler @ 05723dd4 */
                    /* try { // try from 05723c30 to 05823c33 has its CatchHandler @ 05723dcc */
          lVar13 = (**(code **)(*plVar8 + 0x308))(plVar8,lVar14,*(undefined8 *)(*plVar8 + 0x310));
                    /* try { // try from 05723c34 to 05823c37 has its CatchHandler @ 05723dc8 */
          goto joined_r0x05723ed0;
        }
        goto LAB_05723f3c;
      }
    }
  }
LAB_05723f24:
  FUN_05725d60(unaff_x28,unaff_x23);
LAB_05723f30:
  unaff_w22 = unaff_w22 + 1;
  if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_05723f3c;
  iVar6 = FUN_05079c6c(*(long *)(unaff_x19 + 0x58),0);
  if (iVar6 <= unaff_w22) {
    lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>__ctor__
                               );
    FUN_03abf108(lVar13,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                );
    plVar8 = *(long **)(unaff_x19 + 0x60);
    if (plVar8 == (long *)0x0) goto LAB_05723f3c;
    iVar6 = FUN_05079c6c(plVar8,0);
    puVar5 = Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__;
    puVar4 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__;
    puVar3 = System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo;
    if (iVar6 < 1) goto FUN_057245cc;
    iVar6 = 0;
    plVar15 = (long *)
              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
    ;
    goto LAB_05723fa4;
  }
  plVar8 = *(long **)(unaff_x19 + 0x58);
  if ((plVar8 == (long *)0x0) ||
     (unaff_x23 = (long *)(**(code **)(*plVar8 + 0x308))
                                    (plVar8,unaff_w22,*(undefined8 *)(*plVar8 + 0x310)),
     unaff_x23 == (long *)0x0)) goto LAB_05723f3c;
  param_3 = *unaff_x29;
  param_1 = *unaff_x23;
  goto code_r0x05723bd0;
LAB_05723fa4:
  do {
    lVar14 = (**(code **)(*plVar8 + 0x308))(plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
    if (lVar14 == 0) goto LAB_05723f3c;
    *(long *)(lVar14 + 0x28) = unaff_x19;
    plVar10 = (long *)(**(code **)(*plVar8 + 0x308))(plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
    if (plVar10 == (long *)0x0) {
LAB_05724010:
      plVar10 = (long *)(**(code **)(*plVar8 + 0x308))
                                  (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
      if (plVar10 != (long *)0x0) {
        lVar14 = *(long *)puVar4;
        bVar1 = *(byte *)(lVar14 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != lVar14))
        goto LAB_05724058;
        plVar10 = (long *)(**(code **)(*plVar8 + 0x308))
                                    (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        if (plVar10 != (long *)0x0) {
          lVar14 = *(long *)puVar4;
          bVar1 = *(byte *)(lVar14 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != lVar14))
          goto LAB_05724640;
        }
        FUN_0572740c(unaff_x28,plVar10);
        uVar11 = FUN_05769f9c();
        if (plVar10 != (long *)0x0) {
LAB_05724540:
          lVar14 = plVar10[0xd];
          goto System_Xml_XmlException__get_LineNumber;
        }
        goto LAB_05723f3c;
      }
LAB_05724058:
      plVar10 = (long *)(**(code **)(*plVar8 + 0x308))
                                  (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
      if (plVar10 == (long *)0x0) {
LAB_057240a0:
        plVar10 = (long *)(**(code **)(*plVar8 + 0x308))
                                    (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        if (plVar10 != (long *)0x0) {
          bVar1 = *(byte *)(*plVar15 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) == *plVar15)) {
            plVar10 = (long *)(**(code **)(*plVar8 + 0x308))
                                        (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
            if (plVar10 != (long *)0x0) {
              bVar1 = *(byte *)(*plVar15 + 0x130);
              if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *plVar15))
              goto LAB_05724640;
            }
            FUN_05727d7c(unaff_x28,plVar10,0);
            goto LAB_057243d8;
          }
        }
        plVar10 = (long *)(**(code **)(*plVar8 + 0x308))
                                    (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        if (plVar10 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ +
                           0x130);
          if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__)) {
            plVar10 = (long *)(**(code **)(*plVar8 + 0x308))
                                        (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
            if (plVar10 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ +
                               0x130);
              if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__))
              goto LAB_05724640;
            }
            FUN_0572831c(unaff_x28,plVar10);
            uVar11 = FUN_0576a064();
            if (plVar10 != (long *)0x0) {
              lVar14 = plVar10[0x18];
              goto System_Xml_XmlException__get_LineNumber;
            }
            goto LAB_05723f3c;
          }
        }
        plVar10 = (long *)(**(code **)(*plVar8 + 0x308))
                                    (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        if (plVar10 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                           + 0x130);
          if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
             )) {
            plVar10 = (long *)(**(code **)(*plVar8 + 0x308))
                                        (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
            if (plVar10 == (long *)0x0) {
              FUN_05728564(unaff_x28,0);
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            bVar1 = *(byte *)(*(long *)
                               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                             + 0x130);
            if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)
                 Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
               )) {
LAB_05724640:
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar10);
            }
            FUN_05728564(unaff_x28,plVar10);
            uVar11 = *(undefined8 *)(unaff_x19 + 0xa0);
            goto LAB_05724540;
          }
        }
        plVar10 = (long *)(**(code **)(*plVar8 + 0x308))
                                    (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        if (plVar10 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                           + 0x130);
          if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
             )) {
            uVar11 = (**(code **)(*plVar8 + 0x308))(plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
            plVar10 = (long *)FUN_02a7e998(uVar11,*(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                                          );
            FUN_05728728(unaff_x28,plVar10);
            if (plVar10 != (long *)0x0) {
              uVar11 = *(undefined8 *)(unaff_x19 + 0xa8);
              goto LAB_05724540;
            }
            goto LAB_05723f3c;
          }
        }
        plVar10 = (long *)(**(code **)(*plVar8 + 0x308))
                                    (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        if (plVar10 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x27 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x27)) {
            plVar10 = (long *)(**(code **)(*plVar8 + 0x308))
                                        (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
            if (plVar10 == (long *)0x0) {
LAB_057245a4:
              plVar10 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*unaff_x27 + 0x130);
              if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_057245a4;
              if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27) {
                plVar10 = (long *)0x0;
              }
            }
            FUN_0572897c(unaff_x28,plVar10);
            goto System_Xml_XmlException__get_Message;
          }
        }
        uVar11 = (**(code **)(*plVar8 + 0x308))(plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        FUN_058572c8(unaff_x28,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                     ,uVar11,0);
        uVar11 = (**(code **)(*plVar8 + 0x308))(plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        if (lVar13 == 0) goto LAB_05723f3c;
        FUN_02e441a0(lVar13,uVar11,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
                    );
      }
      else {
        lVar14 = *(long *)puVar3;
        bVar1 = *(byte *)(lVar14 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != lVar14))
        goto LAB_057240a0;
        plVar10 = (long *)(**(code **)(*plVar8 + 0x308))
                                    (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        if (plVar10 != (long *)0x0) {
          lVar14 = *(long *)puVar3;
          bVar1 = *(byte *)(lVar14 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != lVar14))
          goto LAB_05724640;
        }
        FUN_05727504(unaff_x28,plVar10,0);
LAB_057243d8:
        uVar11 = FUN_0576a000();
        if (plVar10 == (long *)0x0) goto LAB_05723f3c;
        uVar12 = FUN_0577ac88(plVar10,0);
        FUN_05856a70(unaff_x28,uVar11,uVar12,plVar10,0);
        plVar15 = (long *)
                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
        ;
      }
    }
    else {
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5))
      goto LAB_05724010;
      FUN_057272a8(unaff_x28,plVar10);
      uVar11 = FUN_05769f38();
      lVar14 = plVar10[0x10];
System_Xml_XmlException__get_LineNumber:
      FUN_05856a70(unaff_x28,uVar11,lVar14,plVar10,0);
    }
System_Xml_XmlException__get_Message:
    iVar6 = iVar6 + 1;
    iVar7 = FUN_05079c6c(plVar8,0);
  } while (iVar6 < iVar7);
FUN_057245cc:
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
  ;
  if (lVar13 != 0) {
    if (0 < *(int *)(lVar13 + 0x18)) {
      iVar6 = 0;
      do {
        lVar14 = *(long *)(unaff_x19 + 0x60);
        uVar11 = FUN_03abf644(lVar13,iVar6,*(undefined8 *)puVar3);
        if (lVar14 == 0) goto LAB_05723f3c;
        FUN_0577173c(lVar14,uVar11,0);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar13 + 0x18));
    }
    return;
  }
LAB_05723f3c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


