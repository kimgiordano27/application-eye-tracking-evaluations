/*
FUNCTION_NAME: FUN_059701f0
ENTRY_POINT: 059701f0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_059701f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar1 = PTR_DAT_069fc720;
  if ((DAT_06dc127b & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0acf0);
    FUN_02d965b8(PTR_DAT_06a0ad18);
    FUN_02d965b8(PTR_DAT_06a1bd48);
    FUN_02d965b8(UnityEngine_InputForUI_InputManagerProvider_Time_TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_InputRemoting_Subscriber_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a1ea48);
    FUN_02d965b8(UnityEngine_InputSystem_InputSettings_UpdateMode_TypeInfo);
    FUN_02d965b8(System_Runtime_Serialization_XmlObjectSerializer_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0ad38);
    FUN_02d965b8(PTR_DAT_06a0ad40);
    FUN_02d965b8(PTR_DAT_06a0ad50);
    FUN_02d965b8(UnityEngine_InputSystem_LowLevel_InputState_StateChangeMonitorDelegate_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0ad68);
    FUN_02d965b8(System_Collections_Generic_Dictionary<Column,_float>_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_CVRRenderModels__GetComponentStatePacked_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_CVRSystem__GetControllerStatePacked_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_CVRSystem__GetControllerStateWithPosePacked_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_CVRSystem__PollNextEventPacked_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Callback_RequestCallback_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaSimpleTypeUnion_TypeInfo);
    FUN_02d965b8(Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass0_0_TypeInfo);
    FUN_02d965b8(Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass6_0_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaSubstitutionGroup_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaSubstitutionGroupV1Compat_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaTotalDigitsFacet_TypeInfo);
    FUN_02d965b8(UnityEngine_Camera_CameraCallback_TypeInfo);
    FUN_02d965b8(UnityEngine_Rendering_CameraCaptureBridge_CameraEntry_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaUnique_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0add0);
    FUN_02d965b8(PTR_DAT_069fc720);
    FUN_02d965b8(PTR_DAT_06a0ae00);
    DAT_06dc127b = 1;
  }
  plVar6 = (long *)FUN_02d966a4(*(undefined8 *)puVar1,0x29);
  puVar1 = PTR_DAT_069fb9c0;
  lVar10 = *(long *)(PTR_DAT_069fb9c0 + 0x10);
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
  }
  lVar10 = FUN_054f73b4(lVar10 + 0x20,0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if ((lVar10 != 0) &&
     (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_05971014:
    uVar8 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar8,0);
  }
  puVar2 = PTR_DAT_06a1ea48;
  if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
    plVar6[5] = lVar10;
    LeanTween__value(plVar6 + 5,lVar10);
    lVar10 = FUN_054f73b4(*(undefined8 *)puVar2,0);
    if ((lVar10 != 0) &&
       (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
    goto LAB_05971014;
    if (2 < *(uint *)(plVar6 + 3)) {
      plVar6[6] = lVar10;
      LeanTween__value(plVar6 + 6,lVar10);
      lVar10 = FUN_054f73b4(*(long *)(puVar1 + 0x28) + 0x20,0);
      if ((lVar10 != 0) &&
         (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
      goto LAB_05971014;
      if ((*(uint *)(plVar6 + 3) & 0xfffffffc) != 0) {
        plVar6[7] = lVar10;
        LeanTween__value(plVar6 + 7,lVar10);
        lVar10 = FUN_054f73b4(*(long *)(puVar1 + 0x88) + 0x20,0);
        if ((lVar10 != 0) &&
           (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
        goto LAB_05971014;
        if (4 < *(uint *)(plVar6 + 3)) {
          plVar6[8] = lVar10;
          LeanTween__value(plVar6 + 8,lVar10);
          lVar10 = FUN_054f73b4(*(long *)(puVar1 + 0x30) + 0x20,0);
          if ((lVar10 != 0) &&
             (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
          goto LAB_05971014;
          if (5 < *(uint *)(plVar6 + 3)) {
            plVar6[9] = lVar10;
            LeanTween__value(plVar6 + 9,lVar10);
            lVar10 = FUN_054f73b4(*(long *)(puVar1 + 0x18) + 0x20,0);
            if ((lVar10 != 0) &&
               (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
            goto LAB_05971014;
            if (6 < *(uint *)(plVar6 + 3)) {
              plVar6[10] = lVar10;
              LeanTween__value(plVar6 + 10,lVar10);
              lVar10 = FUN_054f73b4(*(long *)(puVar1 + 0x38) + 0x20,0);
              if ((lVar10 != 0) &&
                 (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
              goto LAB_05971014;
              if ((*(uint *)(plVar6 + 3) & 0xfffffff8) != 0) {
                plVar6[0xb] = lVar10;
                LeanTween__value(plVar6 + 0xb,lVar10);
                lVar10 = FUN_054f73b4(*(long *)(puVar1 + 0x40) + 0x20,0);
                if ((lVar10 != 0) &&
                   (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                goto LAB_05971014;
                if (8 < *(uint *)(plVar6 + 3)) {
                  plVar6[0xc] = lVar10;
                  LeanTween__value(plVar6 + 0xc,lVar10);
                  lVar10 = FUN_054f73b4(*(long *)(puVar1 + 0x48) + 0x20,0);
                  if ((lVar10 != 0) &&
                     (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0
                     )) goto LAB_05971014;
                  if (9 < *(uint *)(plVar6 + 3)) {
                    plVar6[0xd] = lVar10;
                    LeanTween__value(plVar6 + 0xd,lVar10);
                    lVar10 = FUN_054f73b4(*(long *)(puVar1 + 0x50) + 0x20,0);
                    if ((lVar10 != 0) &&
                       (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar7 == 0)) goto LAB_05971014;
                    if (10 < *(uint *)(plVar6 + 3)) {
                      plVar6[0xe] = lVar10;
                      LeanTween__value(plVar6 + 0xe,lVar10);
                      lVar10 = FUN_054f73b4(*(long *)(puVar1 + 0x68) + 0x20,0);
                      if ((lVar10 != 0) &&
                         (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar7 == 0)) goto LAB_05971014;
                      if (0xb < *(uint *)(plVar6 + 3)) {
                        plVar6[0xf] = lVar10;
                        LeanTween__value(plVar6 + 0xf,lVar10);
                        lVar10 = FUN_054f73b4(*(long *)(puVar1 + 0x70) + 0x20,0);
                        if ((lVar10 != 0) &&
                           (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar7 == 0)) goto LAB_05971014;
                        if (0xc < *(uint *)(plVar6 + 3)) {
                          plVar6[0x10] = lVar10;
                          LeanTween__value(plVar6 + 0x10,lVar10);
                          lVar10 = FUN_054f73b4(*(long *)(puVar1 + 0x78) + 0x20,0);
                          if ((lVar10 != 0) &&
                             (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar6 + 0x40)),
                             lVar7 == 0)) goto LAB_05971014;
                          if (0xd < *(uint *)(plVar6 + 3)) {
                            plVar6[0x11] = lVar10;
                            LeanTween__value(plVar6 + 0x11,lVar10);
                            lVar10 = FUN_054f73b4(*(long *)(puVar1 + 0x80) + 0x20,0);
                            if ((lVar10 != 0) &&
                               (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar6 + 0x40)),
                               lVar7 == 0)) goto LAB_05971014;
                            puVar2 = PTR_DAT_06a0ad50;
                            if (0xe < *(uint *)(plVar6 + 3)) {
                              plVar6[0x12] = lVar10;
                              LeanTween__value(plVar6 + 0x12,lVar10);
                              lVar10 = FUN_054f73b4(*(undefined8 *)puVar2,0);
                              if ((lVar10 != 0) &&
                                 (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar6 + 0x40))
                                 , lVar7 == 0)) goto LAB_05971014;
                              puVar2 = PTR_DAT_06a0ad40;
                              if ((*(uint *)(plVar6 + 3) & 0xfffffff0) != 0) {
                                plVar6[0x13] = lVar10;
                                LeanTween__value(plVar6 + 0x13,lVar10);
                                lVar10 = FUN_054f73b4(*(undefined8 *)puVar2,0);
                                if ((lVar10 != 0) &&
                                   (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                       (*plVar6 + 0x40)), lVar7 == 0
                                   )) goto LAB_05971014;
                                puVar2 = PTR_DAT_06a0add0;
                                if (0x10 < *(uint *)(plVar6 + 3)) {
                                  plVar6[0x14] = lVar10;
                                  LeanTween__value(plVar6 + 0x14,lVar10);
                                  lVar10 = FUN_054f73b4(*(undefined8 *)puVar2,0);
                                  if ((lVar10 != 0) &&
                                     (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                         (*plVar6 + 0x40)),
                                     lVar7 == 0)) goto LAB_05971014;
                                  if (0x11 < *(uint *)(plVar6 + 3)) {
                                    plVar6[0x15] = lVar10;
                                    LeanTween__value(plVar6 + 0x15,lVar10);
                                    lVar10 = FUN_054f73b4(*(long *)(puVar1 + 0x90) + 0x20,0);
                                    if ((lVar10 != 0) &&
                                       (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                           (*plVar6 + 0x40)),
                                       lVar7 == 0)) goto LAB_05971014;
                                    puVar2 = PTR_DAT_06a0ad68;
                                    if (0x12 < *(uint *)(plVar6 + 3)) {
                                      plVar6[0x16] = lVar10;
                                      LeanTween__value(plVar6 + 0x16,lVar10);
                                      lVar10 = FUN_054f73b4(*(undefined8 *)puVar2,0);
                                      if ((lVar10 != 0) &&
                                         (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                             (*plVar6 + 0x40)),
                                         lVar7 == 0)) goto LAB_05971014;
                                      puVar2 = PTR_DAT_06a0ad18;
                                      if (0x13 < *(uint *)(plVar6 + 3)) {
                                        plVar6[0x17] = lVar10;
                                        LeanTween__value(plVar6 + 0x17,lVar10);
                                        lVar10 = FUN_054f73b4(*(undefined8 *)puVar2,0);
                                        if ((lVar10 != 0) &&
                                           (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                               (*plVar6 + 0x40)),
                                           lVar7 == 0)) goto LAB_05971014;
                                        puVar2 = PTR_DAT_06a1bd48;
                                        if (0x14 < *(uint *)(plVar6 + 3)) {
                                          plVar6[0x18] = lVar10;
                                          LeanTween__value(plVar6 + 0x18,lVar10);
                                          lVar10 = FUN_054f73b4(*(undefined8 *)puVar2,0);
                                          if ((lVar10 != 0) &&
                                             (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                                 (*plVar6 + 0x40)),
                                             lVar7 == 0)) goto LAB_05971014;
                                          if (0x15 < *(uint *)(plVar6 + 3)) {
                                            plVar6[0x19] = lVar10;
                                            LeanTween__value(plVar6 + 0x19,lVar10);
                                            lVar10 = FUN_054f73b4(*(long *)(puVar1 + 0xe0) + 0x20,0)
                                            ;
                                            if ((lVar10 != 0) &&
                                               (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                                   (*plVar6 + 0x40))
                                               , lVar7 == 0)) goto LAB_05971014;
                                            puVar1 = PTR_DAT_06a0ad38;
                                            if (0x16 < *(uint *)(plVar6 + 3)) {
                                              plVar6[0x1a] = lVar10;
                                              LeanTween__value(plVar6 + 0x1a,lVar10);
                                              lVar10 = FUN_054f73b4(*(undefined8 *)puVar1,0);
                                              if ((lVar10 != 0) &&
                                                 (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                                     (*plVar6 + 0x40
                                                                                     )), lVar7 == 0)
                                                 ) goto LAB_05971014;
                                              puVar1 = PTR_DAT_06a0acf0;
                                              if (0x17 < *(uint *)(plVar6 + 3)) {
                                                plVar6[0x1b] = lVar10;
                                                LeanTween__value(plVar6 + 0x1b,lVar10);
                                                lVar10 = FUN_054f73b4(*(undefined8 *)puVar1,0);
                                                if ((lVar10 != 0) &&
                                                   (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8 *
                                                                                       )(*plVar6 +
                                                                                        0x40)),
                                                   lVar7 == 0)) goto LAB_05971014;
                                                puVar1 = PTR_DAT_06a0ae00;
                                                if (0x18 < *(uint *)(plVar6 + 3)) {
                                                  plVar6[0x1c] = lVar10;
                                                  LeanTween__value(plVar6 + 0x1c,lVar10);
                                                  lVar10 = FUN_054f73b4(*(undefined8 *)puVar1,0);
                                                  if ((lVar10 != 0) &&
                                                     (lVar7 = thunk_FUN_02dd3048(lVar10,*(undefined8
                                                                                          *)(*plVar6
                                                                                            + 0x40))
                                                     , lVar7 == 0)) goto LAB_05971014;
                                                  puVar1 = 
                                                  System_Collections_Generic_Dictionary<Column,_float>_TypeInfo
                                                  ;
                                                  if (0x19 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x1d] = lVar10;
                                                    LeanTween__value(plVar6 + 0x1d,lVar10);
                                                    lVar10 = FUN_054f73b4(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05971014;
                                                  puVar1 = 
                                                  OVR_OpenVR_CVRRenderModels__GetComponentStatePacked_TypeInfo
                                                  ;
                                                  if (0x1a < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x1e] = lVar10;
                                                    LeanTween__value(plVar6 + 0x1e,lVar10);
                                                    lVar10 = FUN_054f73b4(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05971014;
                                                  puVar1 = 
                                                  OVR_OpenVR_CVRSystem__GetControllerStatePacked_TypeInfo
                                                  ;
                                                  if (0x1b < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x1f] = lVar10;
                                                    LeanTween__value(plVar6 + 0x1f,lVar10);
                                                    lVar10 = FUN_054f73b4(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05971014;
                                                  puVar1 = 
                                                  OVR_OpenVR_CVRSystem__GetControllerStateWithPosePacked_TypeInfo
                                                  ;
                                                  if (0x1c < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x20] = lVar10;
                                                    LeanTween__value(plVar6 + 0x20,lVar10);
                                                    lVar10 = FUN_054f73b4(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05971014;
                                                  puVar1 = 
                                                  OVR_OpenVR_CVRSystem__PollNextEventPacked_TypeInfo
                                                  ;
                                                  if (0x1d < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x21] = lVar10;
                                                    LeanTween__value(plVar6 + 0x21,lVar10);
                                                    lVar10 = FUN_054f73b4(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05971014;
                                                  puVar1 = 
                                                  Oculus_Platform_Callback_RequestCallback_TypeInfo;
                                                  if (0x1e < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x22] = lVar10;
                                                    LeanTween__value(plVar6 + 0x22,lVar10);
                                                    lVar10 = FUN_054f73b4(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05971014;
                                                  puVar1 = 
                                                  System_Xml_Schema_XmlSchemaSimpleTypeUnion_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar6 + 3) & 0xffffffe0) != 0) {
                                                    plVar6[0x23] = lVar10;
                                                    LeanTween__value(plVar6 + 0x23,lVar10);
                                                    lVar10 = FUN_054f73b4(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05971014;
                                                  puVar1 = 
                                                  Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass0_0_TypeInfo
                                                  ;
                                                  if (0x20 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x24] = lVar10;
                                                    LeanTween__value(plVar6 + 0x24,lVar10);
                                                    lVar10 = FUN_054f73b4(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05971014;
                                                  puVar1 = 
                                                  Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass6_0_TypeInfo
                                                  ;
                                                  if (0x21 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x25] = lVar10;
                                                    LeanTween__value(plVar6 + 0x25,lVar10);
                                                    lVar10 = FUN_054f73b4(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05971014;
                                                  puVar1 = 
                                                  System_Xml_Schema_XmlSchemaSubstitutionGroup_TypeInfo
                                                  ;
                                                  if (0x22 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x26] = lVar10;
                                                    LeanTween__value(plVar6 + 0x26,lVar10);
                                                    lVar10 = FUN_054f73b4(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05971014;
                                                  puVar1 = 
                                                  System_Xml_Schema_XmlSchemaSubstitutionGroupV1Compat_TypeInfo
                                                  ;
                                                  if (0x23 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x27] = lVar10;
                                                    LeanTween__value(plVar6 + 0x27,lVar10);
                                                    lVar10 = FUN_054f73b4(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05971014;
                                                  puVar1 = 
                                                  System_Xml_Schema_XmlSchemaTotalDigitsFacet_TypeInfo
                                                  ;
                                                  if (0x24 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x28] = lVar10;
                                                    LeanTween__value(plVar6 + 0x28,lVar10);
                                                    lVar10 = FUN_054f73b4(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05971014;
                                                  puVar1 = 
                                                  UnityEngine_Camera_CameraCallback_TypeInfo;
                                                  if (0x25 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x29] = lVar10;
                                                    LeanTween__value(plVar6 + 0x29,lVar10);
                                                    lVar10 = FUN_054f73b4(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05971014;
                                                  puVar1 = 
                                                  UnityEngine_Rendering_CameraCaptureBridge_CameraEntry_TypeInfo
                                                  ;
                                                  if (0x26 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x2a] = lVar10;
                                                    LeanTween__value(plVar6 + 0x2a,lVar10);
                                                    lVar10 = FUN_054f73b4(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05971014;
                                                  puVar1 = 
                                                  System_Xml_Schema_XmlSchemaUnique_TypeInfo;
                                                  if (0x27 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x2b] = lVar10;
                                                    LeanTween__value(plVar6 + 0x2b,lVar10);
                                                    lVar10 = FUN_054f73b4(*(undefined8 *)puVar1,0);
                                                    if ((lVar10 != 0) &&
                                                       (lVar7 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                                                  goto LAB_05971014;
                                                  puVar5 = 
                                                  UnityEngine_InputSystem_LowLevel_InputState_StateChangeMonitorDelegate_TypeInfo
                                                  ;
                                                  puVar4 = 
                                                  UnityEngine_InputSystem_InputSettings_UpdateMode_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  UnityEngine_InputSystem_InputRemoting_Subscriber_TypeInfo
                                                  ;
                                                  puVar2 = 
                                                  UnityEngine_InputForUI_InputManagerProvider_Time_TypeInfo
                                                  ;
                                                  puVar1 = 
                                                  System_Runtime_Serialization_XmlObjectSerializer_TypeInfo
                                                  ;
                                                  if (0x28 < *(uint *)(plVar6 + 3)) {
                                                    plVar6[0x2c] = lVar10;
                                                    LeanTween__value(plVar6 + 0x2c,lVar10);
                                                    **(long **)(*(long *)puVar1 + 0xb8) =
                                                         (long)plVar6;
                                                    LeanTween__value(*(undefined8 *)
                                                                      (*(long *)puVar1 + 0xb8),
                                                                     plVar6);
                                                    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar5
                                                                              );
                                                    FUN_03b78e40(uVar8,0,*(undefined8 *)puVar4,0);
                                                    puVar9 = (undefined8 *)
                                                             (*(long *)(*(long *)puVar1 + 0xb8) + 8)
                                                    ;
                                                    *puVar9 = uVar8;
                                                    LeanTween__value(puVar9,uVar8);
                                                    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_04b6fdb8(uVar8,*(undefined8 *)puVar2);
                                                    puVar9 = (undefined8 *)
                                                             (*(long *)(*(long *)puVar1 + 0xb8) +
                                                             0x10);
                                                    *puVar9 = uVar8;
                                                    LeanTween__value(puVar9,uVar8);
                                                    return;
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
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


