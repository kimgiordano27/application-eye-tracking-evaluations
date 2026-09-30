/*
FUNCTION_NAME: FUN_077f1384
ENTRY_POINT: 077f1384
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_6
*/


void FUN_077f1384(float param_1,float param_2,undefined1 param_3 [16],undefined8 param_4,
                 long param_5,undefined8 param_6)

{
  float *pfVar1;
  long *plVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  
  puVar4 = Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_get_Current__;
  if ((DAT_082721e3 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d88f80);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<SubmitRequest>_Dispose__);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<LocomotionProvider>_Dispose__);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<LocomotionProvider>_MoveNext__);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<SubmitRequest>_MoveNext__);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<StyleValueManaged>_get_Current__)
    ;
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<SubmitRequest>_get_Current__);
    FUN_0373b518(PTR_DAT_07d996c0);
    FUN_0373b518(PTR_DAT_07d98670);
    FUN_0373b518(PTR_DAT_07d99ad0);
    FUN_0373b518(PTR_DAT_07d99a60);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<SubsystemWithProvider>_Dispose__)
    ;
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<SubsystemWithProvider>_MoveNext__
                );
    FUN_0373b518(PTR_DAT_07d98668);
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<SubsystemWithProvider>_get_Current__
                );
    FUN_0373b518(PTR_DAT_07d996b8);
    FUN_0373b518(PTR_DAT_07d99a68);
    FUN_0373b518(PTR_DAT_07d99ad8);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<TMP_Text>_Dispose__);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<TMP_Text>_MoveNext__);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<TMP_Text>_get_Current__);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<Tab>_Dispose__);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<Tab>_MoveNext__);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<Tab>_get_Current__);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<TcpClient>_Dispose__);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<StyleSheet>_MoveNext__);
    FUN_0373b518(PTR_DAT_07d96030);
    FUN_0373b518(PTR_DAT_07d99ae8);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<TcpClient>_MoveNext__);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<TcpClient>_get_Current__);
    FUN_0373b518(PTR_DAT_07d99af8);
    DAT_082721e3 = 1;
  }
  puVar7 = Method_System_Collections_Generic_List_Enumerator<SubmitRequest>_Dispose__;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  puVar4 = Method_System_Collections_Generic_List_Enumerator<StyleSheet>_MoveNext__;
  FUN_050899e4(param_5,param_6,0,*(undefined8 *)puVar7);
  pfVar1 = (float *)(param_5 + 0x55c);
  *(undefined8 *)pfVar1 = DAT_0158aea8;
  FUN_077f1024(param_3._0_8_,param_5);
  FUN_077f11c4(param_4,param_5);
  fVar18 = *(float *)(param_5 + 0x560);
  fVar19 = *(float *)(param_5 + 0x55c);
  if (fVar18 < *(float *)(param_5 + 0x55c)) {
    *pfVar1 = fVar18;
    fVar19 = fVar18;
  }
  if (param_2 <= fVar18) {
    fVar18 = param_2;
  }
  fVar3 = param_1;
  if (param_1 <= fVar18) {
    fVar3 = fVar18;
    fVar18 = param_1;
  }
  if (param_1 < fVar19) {
    fVar18 = fVar19;
  }
  FUN_077f0134(fVar18,param_5);
  FUN_077f0318(fVar3,param_5);
  lVar13 = *(long *)puVar4;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar13 = *(long *)puVar4;
  }
  FUN_0771878c(param_5,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x2f8),0);
  puVar7 = Method_System_Collections_Generic_List_Enumerator<LocomotionProvider>_MoveNext__;
  if (*(long *)(param_5 + 0x4e8) != 0) {
                    /* try { // try from 077f162c to 078f16a3 has its CatchHandler @ 077f162c
                       catch() { ... } // from try @ 077f162c with catch @ 077f162c
                       catch() { ... } // from try @ 077f16ec with catch @ 077f162c
                       catch() { ... } // from try @ 077f1768 with catch @ 077f162c */
    FUN_0771878c(*(long *)(param_5 + 0x4e8),
                 *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x300),0);
    lVar13 = FUN_05088d34(param_5,*(undefined8 *)puVar7);
    if (lVar13 != 0) {
      FUN_0771878c(lVar13,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x308),0);
      FUN_07716200(param_5,1,0);
      *(undefined4 *)(param_5 + 0x558) = 3;
      lVar13 = FUN_05088d34(param_5,*(undefined8 *)puVar7);
      puVar5 = PTR_DAT_07d96030;
      if (lVar13 != 0) {
        FUN_07716200(lVar13,0,0);
                    /* try { // try from 077f16a4 to 078f16af has its CatchHandler @ 077f172c */
        lVar13 = thunk_FUN_037788cc(*(undefined8 *)puVar5);
        FUN_07716630(lVar13,0);
        if (lVar13 != 0) {
                    /* try { // try from 077f16bc to 078f16cb has its CatchHandler @ 077f1728 */
                    /* try { // try from 077f16cc to 078f16d3 has its CatchHandler @ 077f1724 */
          FUN_077162ac(lVar13,*(undefined8 *)PTR_DAT_07d99af8,0);
                    /* try { // try from 077f16d8 to 078f16eb has its CatchHandler @ 077f1720 */
          FUN_0771878c(lVar13,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x310),0);
                    /* try { // try from 077f16ec to 078f1743 has its CatchHandler @ 077f162c */
          lVar14 = FUN_05088d34(param_5,*(undefined8 *)puVar7);
          if (lVar14 != 0) {
            FUN_0771dbc4(lVar14,lVar13,0);
            lVar13 = thunk_FUN_037788cc(*(undefined8 *)puVar5);
            FUN_07716630(lVar13,0);
            if (lVar13 != 0) {
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 077f16d8 with catch @ 077f1720
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 077f16cc with catch @ 077f1724
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 077f16bc with catch @ 077f1728
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 077f16a4 with catch @ 077f172c
                        */
              FUN_077162ac(lVar13,*(undefined8 *)PTR_DAT_07d99ae8,0);
              plVar2 = (long *)(param_5 + 0x528);
              *(long *)(param_5 + 0x528) = lVar13;
                    /* try { // try from 077f1744 to 078f1747 has its CatchHandler @ 077f1754 */
              thunk_FUN_037aeb94(plVar2,lVar13);
              puVar8 = Method_System_Collections_Generic_List_Enumerator<TcpClient>_Dispose__;
              puVar6 = PTR_DAT_07d98668;
              if (*(long *)(param_5 + 0x528) != 0) {
                    /* catch() { ... } // from try @ 077f1744 with catch @ 077f1754 */
                    /* try { // try from 077f175c to 078f1767 has its CatchHandler @ 077f177c */
                    /* try { // try from 077f1768 to 078f1773 has its CatchHandler @ 077f162c */
                FUN_0771878c(*(long *)(param_5 + 0x528),
                             *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x318),0);
                    /* try { // try from 077f1774 to 078f177b has its CatchHandler @ 077f177c */
                lVar13 = *(long *)(param_5 + 0x528);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 077f175c with catch @ 077f177c
                       catch(type#2 @ 00000000) { ... } // from try @ 077f1774 with catch @ 077f177c
                        */
                uVar15 = thunk_FUN_037788cc(*(undefined8 *)puVar6);
                FUN_0440b9a8(uVar15,param_5,*(undefined8 *)puVar8,0);
                if (lVar13 != 0) {
                  FUN_03efc8a0(lVar13,uVar15,0,*(undefined8 *)PTR_DAT_07d98670);
                  lVar13 = FUN_05088d34(param_5,*(undefined8 *)puVar7);
                  if (lVar13 != 0) {
                    FUN_0771dbc4(lVar13,*plVar2,0);
                    lVar13 = thunk_FUN_037788cc(*(undefined8 *)puVar5);
                    FUN_07716630(lVar13,0);
                    if (lVar13 != 0) {
                      FUN_077162ac(lVar13,*(undefined8 *)
                                           Method_System_Collections_Generic_List_Enumerator<TcpClient>_MoveNext__
                                   ,0);
                      *(long *)(param_5 + 0x530) = lVar13;
                      thunk_FUN_037aeb94((undefined8 *)(param_5 + 0x530),lVar13);
                      lVar13 = thunk_FUN_037788cc(*(undefined8 *)puVar5);
                      FUN_07716630(lVar13,0);
                      if (lVar13 != 0) {
                        FUN_077162ac(lVar13,*(undefined8 *)
                                             Method_System_Collections_Generic_List_Enumerator<TcpClient>_get_Current__
                                     ,0);
                        *(long *)(param_5 + 0x538) = lVar13;
                        thunk_FUN_037aeb94((long *)(param_5 + 0x538),lVar13);
                        if (*(long *)(param_5 + 0x530) != 0) {
                          FUN_0771878c(*(long *)(param_5 + 0x530),
                                       *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 800),0);
                          lVar13 = *(long *)(param_5 + 0x538);
                          if (lVar13 != 0) {
                            FUN_0771878c(lVar13,*(undefined8 *)
                                                 (*(long *)(*(long *)puVar4 + 0xb8) + 0x328),0);
                            if (*plVar2 != 0) {
                              FUN_0771dbc4(*plVar2,*(undefined8 *)(param_5 + 0x530),0);
                              puVar12 = 
                              Method_System_Collections_Generic_List_Enumerator<Tab>_get_Current__;
                              puVar11 = 
                              Method_System_Collections_Generic_List_Enumerator<Tab>_MoveNext__;
                              puVar10 = 
                              Method_System_Collections_Generic_List_Enumerator<TMP_Text>_MoveNext__
                              ;
                              puVar9 = 
                              Method_System_Collections_Generic_List_Enumerator<SubsystemWithProvider>_MoveNext__
                              ;
                              puVar8 = 
                              Method_System_Collections_Generic_List_Enumerator<SubsystemWithProvider>_Dispose__
                              ;
                              puVar6 = 
                              Method_System_Collections_Generic_List_Enumerator<SubmitRequest>_MoveNext__
                              ;
                              puVar5 = PTR_DAT_07d996b8;
                              puVar4 = PTR_DAT_07d88f80;
                              if (*plVar2 != 0) {
                                FUN_0771dbc4(*plVar2,*(undefined8 *)(param_5 + 0x538),0);
                                uVar15 = thunk_FUN_037788cc(*(undefined8 *)puVar4);
                                FUN_061a7ce0(uVar15,param_5,*(undefined8 *)puVar11,0);
                                uVar16 = thunk_FUN_037788cc(*(undefined8 *)puVar4);
                                FUN_061a7ce0(uVar16,param_5,*(undefined8 *)puVar12,0);
                                uVar17 = thunk_FUN_037788cc(*(undefined8 *)puVar9);
                                FUN_05447b40(uVar17,0,uVar15,uVar16,*(undefined8 *)puVar8);
                                *(undefined8 *)(param_5 + 0x540) = uVar17;
                                thunk_FUN_037aeb94(param_5 + 0x540,uVar17);
                                uVar15 = FUN_05088d34(param_5,*(undefined8 *)puVar7);
                                FUN_07769880(uVar15,*(undefined8 *)(param_5 + 0x540),0);
                                fVar18 = (float)param_4;
                                *(float *)(param_5 + 0x55c) = param_3._0_4_;
                                *(float *)(param_5 + 0x560) = fVar18;
                                uVar15 = param_3._0_8_;
                                if (fVar18 < param_3._0_4_) {
                                  *pfVar1 = fVar18;
                                  uVar15 = param_4;
                                }
                                if (param_2 <= fVar18) {
                                  fVar18 = param_2;
                                }
                                fVar19 = param_1;
                                if (param_1 <= fVar18) {
                                  fVar19 = fVar18;
                                  fVar18 = param_1;
                                }
                                if (param_1 < (float)uVar15) {
                                  fVar18 = (float)uVar15;
                                }
                                FUN_05088e94(fVar18,fVar19,param_5,*(undefined8 *)puVar6);
                                FUN_077f0610(param_5);
                                uVar15 = thunk_FUN_037788cc(*(undefined8 *)puVar5);
                                FUN_0440b9a8(uVar15,param_5,*(undefined8 *)puVar10,0);
                                FUN_03efc8a0(param_5,uVar15,0,*(undefined8 *)PTR_DAT_07d996c0);
                                uVar15 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                                                          
                                                  Method_System_Collections_Generic_List_Enumerator<SubsystemWithProvider>_get_Current__
                                                  );
                                FUN_0440b9a8(uVar15,param_5,
                                             *(undefined8 *)
                                              Method_System_Collections_Generic_List_Enumerator<TMP_Text>_Dispose__
                                             ,0);
                                FUN_03efc8a0(param_5,uVar15,0,
                                             *(undefined8 *)
                                              Method_System_Collections_Generic_List_Enumerator<SubmitRequest>_get_Current__
                                            );
                                uVar15 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d99a68);
                                FUN_0440b9a8(uVar15,param_5,
                                             *(undefined8 *)
                                              Method_System_Collections_Generic_List_Enumerator<Tab>_Dispose__
                                             ,0);
                                FUN_03efc8a0(param_5,uVar15,0,*(undefined8 *)PTR_DAT_07d99a60);
                                uVar15 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d99ad8);
                                FUN_0440b9a8(uVar15,param_5,
                                             *(undefined8 *)
                                              Method_System_Collections_Generic_List_Enumerator<TMP_Text>_get_Current__
                                             ,0);
                                FUN_03efc8a0(param_5,uVar15,0,*(undefined8 *)PTR_DAT_07d99ad0);
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
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


