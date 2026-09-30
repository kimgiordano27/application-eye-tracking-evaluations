/*
FUNCTION_NAME: System.Net.HttpListenerRequest$$IsPredefinedScheme
ENTRY_POINT: 05c15238
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 124
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x05c15804) */
/* WARNING: Removing unreachable block (ram,0x05c15968) */

void System_Net_HttpListenerRequest__IsPredefinedScheme(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long lVar17;
  undefined8 in_stack_00000028;
  
  uVar9 = (**(code **)(param_1 + 0x1c8))(param_2,*(undefined8 *)(param_1 + 0x1d0));
                    /* catch() { ... } // from try @ 05c15230 with catch @ 05c15240 */
                    /* try { // try from 05c15244 to 05d1524b has its CatchHandler @ 05c15328 */
                    /* try { // try from 05c1524c to 05d1527f has its CatchHandler @ 05c13a64 */
                    /* catch() { ... } // from try @ 05c14ff4 with catch @ 05c15250 */
                    /* catch() { ... } // from try @ 05c14ff0 with catch @ 05c15254 */
  lVar17 = *(long *)(unaff_x19 + 0x40);
                    /* catch() { ... } // from try @ 05c13f8c with catch @ 05c15258 */
                    /* catch() { ... } // from try @ 05c14fec with catch @ 05c1525c */
                    /* catch() { ... } // from try @ 05c14fe4 with catch @ 05c15260 */
  uVar9 = FUN_0536d554(*(undefined8 *)(unaff_x19 + 0x30),
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_Start<HttpClient_<CreateWebRequestAsync>d__3>__
                       ,uVar9,0);
                    /* catch() { ... } // from try @ 05c14fdc with catch @ 05c15264 */
  if (lVar17 == 0) goto LAB_05c1595c;
                    /* try { // try from 05c15280 to 05d15283 has its CatchHandler @ 05c15290 */
  FUN_05cee21c(lVar17,*(undefined8 *)PTR_DAT_069ff558,uVar9,0);
  puVar3 = Mono_Security_PKCS7_SignedData_TypeInfo;
  if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05c1595c;
                    /* catch() { ... } // from try @ 05c15280 with catch @ 05c15290 */
                    /* try { // try from 05c15294 to 05d1529b has its CatchHandler @ 05c15328 */
                    /* try { // try from 05c1529c to 05d152bf has its CatchHandler @ 05c13a64 */
  lVar17 = FUN_05ccbaa0(*(long *)(unaff_x19 + 0x40),
                        *(undefined8 *)Mono_Security_PKCS7_SignedData_TypeInfo,0);
                    /* catch() { ... } // from try @ 05c146ac with catch @ 05c152a0 */
  if (lVar17 == 0) {
                    /* catch() { ... } // from try @ 05c14648 with catch @ 05c152a4 */
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05c1595c;
                    /* try { // try from 05c152c0 to 05d152c3 has its CatchHandler @ 05c152d0 */
    FUN_05cee21c(*(long *)(unaff_x19 + 0x40),*(undefined8 *)puVar3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<string,_StylePropertyId>_TryGetValue__
                 ,0);
  }
                    /* catch() { ... } // from try @ 05c152c0 with catch @ 05c152d0 */
                    /* try { // try from 05c152d4 to 05d152db has its CatchHandler @ 05c15328 */
  if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
                    /* try { // try from 05c152dc to 05d15303 has its CatchHandler @ 05c13a64 */
                    /* catch() { ... } // from try @ 05c13f24 with catch @ 05c152e0 */
  uVar9 = FUN_0547e2f8(0);
  puVar3 = Unity_Networking_QoS_UcgQosServer_var;
                    /* catch() { ... } // from try @ 05c13ec0 with catch @ 05c152e4 */
                    /* catch() { ... } // from try @ 05c14fd4 with catch @ 05c152e8 */
  if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05c1595c;
                    /* try { // try from 05c15304 to 05d15307 has its CatchHandler @ 05c15314 */
  lVar17 = FUN_05ccbaa0(*(long *)(unaff_x19 + 0x40),
                        *(undefined8 *)Unity_Networking_QoS_UcgQosServer_var,0);
  if (lVar17 == 0) {
                    /* catch() { ... } // from try @ 05c15304 with catch @ 05c15314 */
    lVar17 = *(long *)(unaff_x19 + 0x40);
                    /* try { // try from 05c15318 to 05d1531f has its CatchHandler @ 05c15328 */
                    /* try { // try from 05c15320 to 05d1532b has its CatchHandler @ 05c13a64 */
    if (*(int *)(*(long *)PTR_DAT_069fc268 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
                    /* catch() { ... } // from try @ 05c15144 with catch @ 05c15328
                       catch() { ... } // from try @ 05c15188 with catch @ 05c15328
                       catch() { ... } // from try @ 05c151e8 with catch @ 05c15328
                       catch() { ... } // from try @ 05c15244 with catch @ 05c15328
                       catch() { ... } // from try @ 05c15294 with catch @ 05c15328
                       catch() { ... } // from try @ 05c152d4 with catch @ 05c15328
                       catch() { ... } // from try @ 05c15318 with catch @ 05c15328 */
    in_stack_00000028 = FUN_054c8c2c(0);
    uVar10 = FUN_054c995c(&stack0x00000028,*(undefined8 *)PTR_DAT_06a0a500,uVar9,0);
    if (lVar17 == 0) goto LAB_05c1595c;
    FUN_05cee21c(lVar17,*(undefined8 *)puVar3,uVar10,0);
  }
  if (*(char *)(unaff_x19 + 0x78) == '\0') {
    if ((*(char *)(unaff_x19 + 0x28) == '\0') && ((unaff_x22 & 1) != 0)) {
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(undefined1 *)(unaff_x19 + 0x28) = 1;
    }
    else if (*(char *)(unaff_x19 + 0x28) == '\0') goto LAB_05c153c4;
    lVar17 = *(long *)(unaff_x19 + 0x40);
    uVar9 = FUN_054e6bbc(unaff_x19 + 0x20,uVar9,0);
    if (lVar17 == 0) goto LAB_05c1595c;
    FUN_05cee21c(lVar17,*(undefined8 *)PTR_DAT_06a0db58,uVar9,0);
  }
LAB_05c153c4:
  puVar3 = OVRPlugin_OVRP_1_121_0_TypeInfo;
  if ((*(long *)(unaff_x19 + 0x80) == 0) ||
     (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x10), lVar17 == 0)) goto LAB_05c1595c;
  if ((*(char *)(unaff_x19 + 0x28) == '\0') && (*(char *)(unaff_x19 + 0x78) == '\0')) {
    uVar9 = *(undefined8 *)(lVar17 + 0x48);
    lVar17 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar17 = *(long *)puVar3;
    }
    uVar11 = FUN_05508644(uVar9,*(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x10),0);
    if ((uVar11 & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0x78) = 1;
    }
  }
  iVar1 = *(int *)(unaff_x19 + 0x68);
  uVar8 = 1;
  if ((((0xe < iVar1 - 400U) || ((1 << (ulong)(iVar1 - 400U & 0x1f) & 0x6901U) == 0)) &&
      (iVar1 != 500)) && (iVar1 != 0x1f7)) {
    if ((*(long *)(unaff_x19 + 0x80) == 0) ||
       (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x10), lVar17 == 0)) goto LAB_05c1595c;
    uVar8 = FUN_05d12a28(lVar17,0);
    uVar8 = uVar8 ^ 1;
  }
  puVar3 = OVRPlugin_OVRP_1_119_0_TypeInfo;
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
  puVar2 = PTR_DAT_069fb9c0;
  if ((*(long *)(unaff_x19 + 0x80) == 0) ||
     (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x28), lVar17 == 0)) goto LAB_05c1595c;
  if (*(int *)(lVar17 + 100) < 100) {
    if ((uVar8 & 1) == 0) {
      lVar17 = *(long *)(unaff_x19 + 0x40);
      uVar9 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48));
      uVar9 = FUN_0536388c(*(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<string,_StylePropertyId>__ctor__
                           ,uVar9,0);
      if (lVar17 == 0) goto LAB_05c1595c;
      FUN_05cee21c(lVar17,*(undefined8 *)OVRPlugin_OVRP_1_43_0_TypeInfo,uVar9,0);
      puVar4 = OVRPlugin_OVRP_1_121_0_TypeInfo;
      if ((*(long *)(unaff_x19 + 0x80) == 0) ||
         (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x10), lVar17 == 0)) goto LAB_05c1595c;
      uVar9 = *(undefined8 *)(lVar17 + 0x48);
      lVar17 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar17 = *(long *)puVar4;
      }
      uVar11 = FUN_055085d0(uVar9,*(undefined8 *)(*(long *)(lVar17 + 0xb8) + 8),0);
      if ((uVar11 & 1) != 0) {
        lVar17 = *(long *)(unaff_x19 + 0x40);
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
      lVar17 = *(long *)(unaff_x19 + 0x40);
      puVar13 = (undefined8 *)PTR_DAT_06a132d8;
joined_r0x05c155a4:
      if (lVar17 == 0) goto LAB_05c1595c;
      FUN_05cee21c(lVar17,*(undefined8 *)puVar3,*puVar13,0);
    }
  }
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05c1595c;
    FUN_05cee21c(*(long *)(unaff_x19 + 0x40),*(undefined8 *)Mono_Security_PKCS7_SignerInfo_TypeInfo,
                 *(long *)(unaff_x19 + 0x60),0);
  }
  puVar7 = Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>__ctor__;
  puVar6 = Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector>_set_Item__;
  puVar5 = Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector>_TryGetValue__;
  puVar4 = PTR_DAT_069fbff8;
  puVar3 = PTR_DAT_069fbff0;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    plVar12 = (long *)FUN_05cfb52c(*(long *)(unaff_x19 + 0x38),0);
    do {
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar15 = *plVar12;
      lVar17 = *(long *)puVar4;
      uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar11 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar17) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05c15684;
          }
          uVar11 = uVar11 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar11 != 0);
      }
      puVar13 = (undefined8 *)FUN_02dd004c(plVar12,lVar17,0);
LAB_05c15684:
      uVar11 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar11 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_02dd3048(plVar12,*(undefined8 *)puVar3);
        if (plVar12 == (long *)0x0) break;
        lVar15 = *plVar12;
        lVar17 = *(long *)puVar3;
        uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar11 == 0) goto LAB_05c157a0;
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_05c15788;
      }
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar15 = *plVar12;
      lVar17 = *(long *)puVar4;
      uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar11 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar17) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_05c156ec;
          }
          uVar11 = uVar11 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar11 != 0);
      }
      puVar13 = (undefined8 *)FUN_02dd004c(plVar12,lVar17,1);
LAB_05c156ec:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((plVar14 != (long *)0x0) && (*plVar14 != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar14);
      }
      lVar17 = *(long *)(unaff_x19 + 0x40);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar9 = FUN_05c159d0(plVar14);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_05cee21c(lVar17,*(undefined8 *)puVar7,uVar9,0);
    } while( true );
  }
  goto LAB_05c15808;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar16 = piVar16 + 4;
    if (uVar11 == 0) break;
LAB_05c15788:
    if (*(long *)(piVar16 + -2) == lVar17) {
      puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_05c157ec;
    }
  }
LAB_05c157a0:
  puVar13 = (undefined8 *)FUN_02dd004c(plVar12,lVar17,0);
LAB_05c157ec:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_05c15808:
  plVar12 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a18830);
  FUN_054a1e3c();
  uVar10 = *(undefined8 *)(unaff_x19 + 0x58);
  uVar9 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar2 + 0x48));
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x248))
              (plVar12,*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<string,_StylePropertyId>_Add__,
               uVar10,uVar9,*(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(*plVar12 + 0x250));
    uVar9 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar9 = FUN_05c15c6c(uVar9);
    (**(code **)(*plVar12 + 0x238))(plVar12,uVar9,*(undefined8 *)(*plVar12 + 0x240));
    (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
    if ((unaff_x21 != (long *)0x0) && (lVar17 = (**(code **)(*unaff_x21 + 0x198))(), lVar17 != 0)) {
      plVar12 = (long *)(unaff_x19 + 0x50);
      if (*plVar12 == 0) {
        if ((*(long *)(unaff_x19 + 0x80) == 0) ||
           (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x28), lVar17 == 0)) goto LAB_05c1595c;
        lVar17 = FUN_05d10a10(lVar17,0);
        *plVar12 = lVar17;
        LeanTween__value(plVar12,lVar17);
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


