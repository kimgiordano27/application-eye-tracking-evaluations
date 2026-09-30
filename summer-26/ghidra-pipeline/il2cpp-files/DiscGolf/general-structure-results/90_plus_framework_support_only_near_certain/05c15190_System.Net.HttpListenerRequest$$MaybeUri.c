/*
FUNCTION_NAME: System.Net.HttpListenerRequest$$MaybeUri
ENTRY_POINT: 05c15190
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 124
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x05c15804) */
/* WARNING: Removing unreachable block (ram,0x05c15968) */

void System_Net_HttpListenerRequest__MaybeUri(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  int *piVar17;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar18;
  ulong unaff_x22;
  undefined8 in_stack_00000028;
  
                    /* try { // try from 05c15190 to 05d151d3 has its CatchHandler @ 05c13a64 */
                    /* catch() { ... } // from try @ 05c15028 with catch @ 05c15194 */
                    /* catch() { ... } // from try @ 05c15024 with catch @ 05c15198 */
  FUN_02d965b8(
              Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_ContainsKey__
              );
                    /* catch() { ... } // from try @ 05c1501c with catch @ 05c1519c */
                    /* catch() { ... } // from try @ 05c15020 with catch @ 05c151a0 */
                    /* catch() { ... } // from try @ 05c149b4 with catch @ 05c151a4 */
  FUN_02d965b8(PTR_DAT_06a0a500);
                    /* catch() { ... } // from try @ 05c149d8 with catch @ 05c151a8 */
                    /* catch() { ... } // from try @ 05c14bac with catch @ 05c151ac */
                    /* catch() { ... } // from try @ 05c14b48 with catch @ 05c151b0 */
  FUN_02d965b8(OVRPlugin_OVRP_1_119_0_TypeInfo);
                    /* catch() { ... } // from try @ 05c15010 with catch @ 05c151b4 */
                    /* catch() { ... } // from try @ 05c15008 with catch @ 05c151b8 */
  FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_Remove__);
  *(undefined1 *)(unaff_x21 + 0x6e6) = 1;
  plVar18 = *(long **)(unaff_x19 + 0x18);
  in_stack_00000028 = 0;
                    /* try { // try from 05c151d4 to 05d151d7 has its CatchHandler @ 05c151e4 */
  if (plVar18 == (long *)0x0) {
    plVar18 = (long *)FUN_05389424(0);
  }
                    /* catch() { ... } // from try @ 05c151d4 with catch @ 05c151e4 */
                    /* try { // try from 05c151e8 to 05d151ef has its CatchHandler @ 05c15328 */
  if (*(long *)(unaff_x19 + 0x30) != 0) {
                    /* try { // try from 05c151f0 to 05d1522f has its CatchHandler @ 05c13a64 */
                    /* catch() { ... } // from try @ 05c1417c with catch @ 05c151f4 */
                    /* catch() { ... } // from try @ 05c1471c with catch @ 05c151f8 */
                    /* catch() { ... } // from try @ 05c15004 with catch @ 05c151fc */
                    /* catch() { ... } // from try @ 05c15000 with catch @ 05c15200 */
                    /* catch() { ... } // from try @ 05c14118 with catch @ 05c15204 */
                    /* catch() { ... } // from try @ 05c14744 with catch @ 05c15208 */
                    /* catch() { ... } // from try @ 05c14910 with catch @ 05c1520c */
                    /* catch() { ... } // from try @ 05c148ac with catch @ 05c15210 */
    if ((*(long *)(unaff_x19 + 0x18) == 0) ||
       (iVar7 = FUN_0537232c(*(long *)(unaff_x19 + 0x30),
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_Remove__
                             ,4,0), iVar7 != -1)) {
                    /* catch() { ... } // from try @ 05c14ff8 with catch @ 05c15214 */
      lVar9 = *(long *)(unaff_x19 + 0x40);
      if (lVar9 == 0) goto LAB_05c1595c;
      uVar15 = *(undefined8 *)(unaff_x19 + 0x30);
    }
    else {
      plVar12 = *(long **)(unaff_x19 + 0x18);
                    /* try { // try from 05c15230 to 05d15233 has its CatchHandler @ 05c15240 */
      if (plVar12 == (long *)0x0) goto LAB_05c1595c;
      uVar15 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
      lVar9 = *(long *)(unaff_x19 + 0x40);
      uVar15 = FUN_0536d554(*(undefined8 *)(unaff_x19 + 0x30),
                            *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_Start<HttpClient_<CreateWebRequestAsync>d__3>__
                            ,uVar15,0);
      if (lVar9 == 0) goto LAB_05c1595c;
    }
    FUN_05cee21c(lVar9,*(undefined8 *)PTR_DAT_069ff558,uVar15,0);
  }
  puVar2 = Mono_Security_PKCS7_SignedData_TypeInfo;
  if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05c1595c;
  lVar9 = FUN_05ccbaa0(*(long *)(unaff_x19 + 0x40),
                       *(undefined8 *)Mono_Security_PKCS7_SignedData_TypeInfo,0);
  if (lVar9 == 0) {
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05c1595c;
    FUN_05cee21c(*(long *)(unaff_x19 + 0x40),*(undefined8 *)puVar2,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<string,_StylePropertyId>_TryGetValue__
                 ,0);
  }
  if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar15 = FUN_0547e2f8(0);
  puVar2 = Unity_Networking_QoS_UcgQosServer_var;
  if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05c1595c;
  lVar9 = FUN_05ccbaa0(*(long *)(unaff_x19 + 0x40),
                       *(undefined8 *)Unity_Networking_QoS_UcgQosServer_var,0);
  if (lVar9 == 0) {
    lVar9 = *(long *)(unaff_x19 + 0x40);
    if (*(int *)(*(long *)PTR_DAT_069fc268 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    in_stack_00000028 = FUN_054c8c2c(0);
    uVar10 = FUN_054c995c(&stack0x00000028,*(undefined8 *)PTR_DAT_06a0a500,uVar15,0);
    if (lVar9 == 0) goto LAB_05c1595c;
    FUN_05cee21c(lVar9,*(undefined8 *)puVar2,uVar10,0);
  }
  if (*(char *)(unaff_x19 + 0x78) == '\0') {
    if ((*(char *)(unaff_x19 + 0x28) == '\0') && ((unaff_x22 & 1) != 0)) {
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(undefined1 *)(unaff_x19 + 0x28) = 1;
    }
    else if (*(char *)(unaff_x19 + 0x28) == '\0') goto LAB_05c153c4;
    lVar9 = *(long *)(unaff_x19 + 0x40);
    uVar15 = FUN_054e6bbc(unaff_x19 + 0x20,uVar15,0);
    if (lVar9 == 0) goto LAB_05c1595c;
    FUN_05cee21c(lVar9,*(undefined8 *)PTR_DAT_06a0db58,uVar15,0);
  }
LAB_05c153c4:
  puVar2 = OVRPlugin_OVRP_1_121_0_TypeInfo;
  if ((*(long *)(unaff_x19 + 0x80) == 0) ||
     (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x10), lVar9 == 0)) goto LAB_05c1595c;
  if ((*(char *)(unaff_x19 + 0x28) == '\0') && (*(char *)(unaff_x19 + 0x78) == '\0')) {
    uVar15 = *(undefined8 *)(lVar9 + 0x48);
    lVar9 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar9 = *(long *)puVar2;
    }
    uVar11 = FUN_05508644(uVar15,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10),0);
    if ((uVar11 & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0x78) = 1;
    }
  }
  iVar7 = *(int *)(unaff_x19 + 0x68);
  uVar8 = 1;
  if ((((0xe < iVar7 - 400U) || ((1 << (ulong)(iVar7 - 400U & 0x1f) & 0x6901U) == 0)) &&
      (iVar7 != 500)) && (iVar7 != 0x1f7)) {
    if ((*(long *)(unaff_x19 + 0x80) == 0) ||
       (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x10), lVar9 == 0)) goto LAB_05c1595c;
    uVar8 = FUN_05d12a28(lVar9,0);
    uVar8 = uVar8 ^ 1;
  }
  puVar2 = OVRPlugin_OVRP_1_119_0_TypeInfo;
  if (*(char *)(unaff_x19 + 0x48) != '\x01' || (uVar8 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05c1595c;
    FUN_05cee21c(*(long *)(unaff_x19 + 0x40),*(undefined8 *)OVRPlugin_OVRP_1_119_0_TypeInfo,
                 *(undefined8 *)PTR_DAT_06a132d8,0);
    uVar8 = 1;
  }
  if (*(char *)(unaff_x19 + 0x78) != '\0') {
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05c1595c;
    FUN_05cee21c(*(long *)(unaff_x19 + 0x40),*(undefined8 *)OVRPlugin_OVRP_1_129_0_TypeInfo,
                 *(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
  }
  puVar1 = PTR_DAT_069fb9c0;
  if ((*(long *)(unaff_x19 + 0x80) == 0) ||
     (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x28), lVar9 == 0)) goto LAB_05c1595c;
  if (*(int *)(lVar9 + 100) < 100) {
    if ((uVar8 & 1) == 0) {
      lVar9 = *(long *)(unaff_x19 + 0x40);
      uVar15 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48));
      uVar15 = FUN_0536388c(*(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<string,_StylePropertyId>__ctor__
                            ,uVar15,0);
      if (lVar9 == 0) goto LAB_05c1595c;
      FUN_05cee21c(lVar9,*(undefined8 *)OVRPlugin_OVRP_1_43_0_TypeInfo,uVar15,0);
      puVar3 = OVRPlugin_OVRP_1_121_0_TypeInfo;
      if ((*(long *)(unaff_x19 + 0x80) == 0) ||
         (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x10), lVar9 == 0)) goto LAB_05c1595c;
      uVar15 = *(undefined8 *)(lVar9 + 0x48);
      lVar9 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar9 = *(long *)puVar3;
      }
      uVar11 = FUN_055085d0(uVar15,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8),0);
      if ((uVar11 & 1) != 0) {
        lVar9 = *(long *)(unaff_x19 + 0x40);
        puVar13 = (undefined8 *)
                  Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_ContainsKey__
        ;
        goto joined_r0x05c155a4;
      }
    }
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x98) = 1;
    if ((uVar8 & 1) == 0) {
      lVar9 = *(long *)(unaff_x19 + 0x40);
      puVar13 = (undefined8 *)PTR_DAT_06a132d8;
joined_r0x05c155a4:
      if (lVar9 == 0) goto LAB_05c1595c;
      FUN_05cee21c(lVar9,*(undefined8 *)puVar2,*puVar13,0);
    }
  }
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05c1595c;
    FUN_05cee21c(*(long *)(unaff_x19 + 0x40),*(undefined8 *)Mono_Security_PKCS7_SignerInfo_TypeInfo,
                 *(long *)(unaff_x19 + 0x60),0);
  }
  puVar6 = Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>__ctor__;
  puVar5 = Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector>_set_Item__;
  puVar4 = Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector>_TryGetValue__;
  puVar3 = PTR_DAT_069fbff8;
  puVar2 = PTR_DAT_069fbff0;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    plVar12 = (long *)FUN_05cfb52c(*(long *)(unaff_x19 + 0x38),0);
    do {
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar16 = *plVar12;
      lVar9 = *(long *)puVar3;
      uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar11 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar9) {
            puVar13 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_05c15684;
          }
          uVar11 = uVar11 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar11 != 0);
      }
      puVar13 = (undefined8 *)FUN_02dd004c(plVar12,lVar9,0);
LAB_05c15684:
      uVar11 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar11 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_02dd3048(plVar12,*(undefined8 *)puVar2);
        if (plVar12 == (long *)0x0) break;
        lVar16 = *plVar12;
        lVar9 = *(long *)puVar2;
        uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar11 == 0) goto LAB_05c157a0;
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        goto LAB_05c15788;
      }
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar16 = *plVar12;
      lVar9 = *(long *)puVar3;
      uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar11 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar9) {
            puVar13 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_05c156ec;
          }
          uVar11 = uVar11 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar11 != 0);
      }
      puVar13 = (undefined8 *)FUN_02dd004c(plVar12,lVar9,1);
LAB_05c156ec:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((plVar14 != (long *)0x0) && (*plVar14 != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar14);
      }
      lVar9 = *(long *)(unaff_x19 + 0x40);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar15 = FUN_05c159d0(plVar14);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_05cee21c(lVar9,*(undefined8 *)puVar6,uVar15,0);
    } while( true );
  }
  goto LAB_05c15808;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar17 = piVar17 + 4;
    if (uVar11 == 0) break;
LAB_05c15788:
    if (*(long *)(piVar17 + -2) == lVar9) {
      puVar13 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_05c157ec;
    }
  }
LAB_05c157a0:
  puVar13 = (undefined8 *)FUN_02dd004c(plVar12,lVar9,0);
LAB_05c157ec:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_05c15808:
  plVar12 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a18830);
  FUN_054a1e3c();
  uVar10 = *(undefined8 *)(unaff_x19 + 0x58);
  uVar15 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x48));
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x248))
              (plVar12,*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<string,_StylePropertyId>_Add__,
               uVar10,uVar15,*(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(*plVar12 + 0x250));
    uVar15 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar15 = FUN_05c15c6c(uVar15);
    (**(code **)(*plVar12 + 0x238))(plVar12,uVar15,*(undefined8 *)(*plVar12 + 0x240));
    (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
    if ((plVar18 != (long *)0x0) &&
       (lVar9 = (**(code **)(*plVar18 + 0x198))(plVar18,*(undefined8 *)(*plVar18 + 0x1a0)),
       lVar9 != 0)) {
      plVar18 = (long *)(unaff_x19 + 0x50);
      if (*plVar18 == 0) {
        if ((*(long *)(unaff_x19 + 0x80) == 0) ||
           (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x28), lVar9 == 0)) goto LAB_05c1595c;
        lVar9 = FUN_05d10a10(lVar9,0);
        *plVar18 = lVar9;
        LeanTween__value(plVar18,lVar9);
      }
      if (unaff_x20 != (long *)0x0) {
        (**(code **)(*unaff_x20 + 0x208))();
        *(undefined1 *)(unaff_x19 + 0x88) = 1;
        return;
      }
    }
  }
LAB_05c1595c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


