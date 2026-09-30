/*
FUNCTION_NAME: FUN_0703307c
ENTRY_POINT: 0703307c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_7
*/


long FUN_0703307c(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                 long param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  byte bVar19;
  long lVar20;
  int *piVar21;
  byte bVar22;
  undefined4 *puVar23;
  long lVar24;
  uint *puVar25;
  uint uVar26;
  int iVar27;
  void *__src;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  long local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined1 local_74 [4];
  undefined8 local_68;
  
  puVar7 = OVRPlugin_OVRP_1_51_0_TypeInfo;
  local_68 = param_6;
  if ((DAT_07eebdde & 1) == 0) {
    FUN_03642964(OVRPlugin_OVRP_1_86_0_TypeInfo);
    FUN_03642964(SlideShowScrollViewPro_FadeCanvas_<FadeInNow>d__8_TypeInfo);
    FUN_03642964(System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo);
    FUN_03642964(Unity_AppUI_Core_NotificationManager_ICallback_TypeInfo);
    FUN_03642964(PTR_DAT_079f4d70);
    FUN_03642964(PTR_DAT_07a06cb8);
    FUN_03642964(PTR_DAT_07a2abf8);
    FUN_03642964(PTR_DAT_07a00ff8);
    FUN_03642964(OVR_OpenVR_IVROverlay__GetOverlayTextureSize_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_84_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_85_0_TypeInfo);
    FUN_03642964(PTR_DAT_079f4e28);
    FUN_03642964(OVRPlugin_OVRP_1_51_0_TypeInfo);
    FUN_03642964(Oculus_Interaction_Input_ControllerAnimatedHand_<>c_TypeInfo);
    FUN_03642964(PTR_DAT_079ff4c8);
    DAT_07eebdde = 1;
  }
  lVar13 = *(long *)puVar7;
  local_74[0] = 0;
  local_80 = 0;
  local_f8 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar13 = *(long *)puVar7;
  }
  FUN_06eaa264(local_74,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x20),0);
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar13 = FUN_07043090(param_4,*(undefined8 *)OVRPlugin_OVRP_1_86_0_TypeInfo);
  lVar14 = FUN_06fa1008(param_4,*(undefined8 *)
                                 SlideShowScrollViewPro_FadeCanvas_<FadeInNow>d__8_TypeInfo);
                    /* try { // try from 07033208 to 071334db has its CatchHandler @ 07033208
                       catch() { ... } // from try @ 07033208 with catch @ 07033208
                       catch() { ... } // from try @ 070336dc with catch @ 07033208
                       catch() { ... } // from try @ 0703380c with catch @ 07033208
                       catch() { ... } // from try @ 07033820 with catch @ 07033208
                       catch() { ... } // from try @ 07033874 with catch @ 07033208 */
  lVar15 = FUN_06fa1008(param_4,*(undefined8 *)
                                 System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo
                       );
  puVar7 = PTR_DAT_079ff4c8;
  lVar16 = *(long *)PTR_DAT_079ff4c8;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar16 = *(long *)puVar7;
  }
  lVar20 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x70);
  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x78);
  *(undefined4 *)(lVar20 + 0x18) = 0;
  *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  *(undefined4 *)(lVar16 + 0x18) = 0;
  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  *(undefined4 *)(lVar13 + 0x40) = 0x10;
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar28 = *(undefined4 *)(param_5 + 0xb8);
  *(undefined4 *)(lVar13 + 0x2c) = *(undefined4 *)(param_5 + 0xd4);
  *(undefined4 *)(lVar13 + 0x1c) = uVar28;
  uVar28 = FUN_07036110(uVar28,param_5);
  *(undefined4 *)(lVar13 + 0x20) = uVar28;
  *(undefined4 *)(lVar13 + 0x24) = param_2;
  *(undefined4 *)(lVar13 + 0x28) = param_3;
  uVar28 = *(undefined4 *)(param_5 + 0x90);
  uVar29 = *(undefined4 *)(param_5 + 0xa0);
  *(undefined2 *)(lVar13 + 0x58) = 0;
  *(undefined4 *)(lVar13 + 0xac) = 0;
  *(undefined4 *)(lVar13 + 0x14) = uVar28;
  *(undefined4 *)(lVar13 + 0x18) = uVar28;
  *(undefined4 *)(lVar13 + 0x34) = uVar29;
  *(undefined4 *)(lVar13 + 0x38) = uVar29;
  *(undefined8 *)(lVar13 + 0xa4) = 0;
  *(undefined8 *)(lVar13 + 0x9c) = 0;
  *(undefined8 *)(lVar13 + 0x94) = 0;
  *(undefined8 *)(lVar13 + 0x8c) = 0;
  *(undefined8 *)(lVar13 + 0x84) = 0;
  *(undefined8 *)(lVar13 + 0x7c) = 0;
  *(undefined8 *)(lVar13 + 0x74) = 0;
  *(undefined8 *)(lVar13 + 0x6c) = 0;
  *(undefined8 *)(lVar13 + 100) = 0;
  *(undefined8 *)(lVar13 + 0x5c) = 0;
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  bVar9 = false;
  if (*(char *)(param_5 + 0x8c) != '\0') {
    bVar9 = *(int *)(param_5 + 0x88) == 1;
  }
  lVar16 = *(long *)(lVar15 + 0x20);
  uVar3 = *(undefined8 *)(lVar15 + 0x28);
  iVar5 = *(int *)(lVar15 + 0x10);
  fVar32 = *(float *)(lVar14 + 0x1a8);
  *(bool *)(lVar13 + 0x11) = bVar9;
  uVar17 = FUN_071cbae0(0);
  if ((uVar17 & 1) == 0) {
    bVar19 = 0;
  }
  else {
    bVar19 = *(byte *)(lVar13 + 0x11);
  }
  bVar9 = 0.0 < fVar32;
  *(byte *)(lVar13 + 0x10) = bVar19 & bVar9;
  if ((char)local_68 == '\0') {
    bVar10 = false;
  }
  else {
    iVar11 = FUN_0493c17c(&local_68,*(undefined8 *)OVRPlugin_OVRP_1_85_0_TypeInfo);
    bVar10 = iVar11 == 2;
  }
  if (*(char *)(param_5 + 0x9c) == '\0') {
    bVar10 = false;
  }
  else if (*(int *)(param_5 + 0x94) == 1) {
    bVar10 = true;
  }
  *(bool *)(lVar13 + 0x31) = bVar10;
  uVar17 = FUN_071cbae0(0);
  if ((uVar17 & 1) == 0) {
    bVar19 = 0;
  }
  else {
    bVar19 = 0;
    if (*(char *)(lVar13 + 0x31) != '\0') {
      bVar19 = *(byte *)(lVar15 + 0x30) ^ 1;
    }
  }
  cVar4 = *(char *)(lVar13 + 0x10);
  bVar19 = bVar19 & bVar9;
  *(byte *)(lVar13 + 0x30) = bVar19;
  if ((cVar4 == '\0') && (bVar19 == 0)) goto LAB_07033c90;
  if (iVar5 == -1) {
LAB_07033424:
    bVar9 = false;
  }
  else {
    __src = (void *)(lVar16 + (long)iVar5 * 0x74);
    memmove(&local_f0,__src,0x74);
    uVar18 = FUN_07201a74(&local_f0,0);
    if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar17 = FUN_071c0684(uVar18,0,0);
    if ((uVar17 & 1) == 0) goto LAB_07033424;
    memmove(&local_f0,__src,0x74);
    lVar14 = FUN_07201a74(&local_f0,0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    iVar11 = FUN_07193118(lVar14,0);
    bVar9 = iVar11 != 0;
  }
  bVar19 = false;
  if (cVar4 != '\0') {
    bVar19 = bVar9;
  }
  *(byte *)(lVar13 + 0x10) = bVar19;
  puVar8 = OVR_OpenVR_IVROverlay__GetOverlayTextureSize_TypeInfo;
  puVar6 = PTR_DAT_079f4e28;
  iVar11 = (int)uVar3;
  bVar9 = (bool)bVar19;
  if (*(char *)(lVar13 + 0x30) == '\0') {
joined_r0x07033500:
    if (bVar9 == false) goto LAB_07033c90;
  }
  else {
    if (iVar11 < 1) {
      bVar9 = false;
    }
    else {
      iVar27 = 0;
      do {
        if (iVar5 != iVar27) {
          uVar18 = FUN_03dba484(lVar16,uVar3,iVar27,*(undefined8 *)puVar8);
          iVar12 = FUN_07201b00(uVar18,0);
          if ((iVar12 == 0) || (iVar12 = FUN_07201b00(uVar18,0), iVar12 == 2)) {
            lVar14 = FUN_07201a74(uVar18,0);
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            uVar17 = FUN_071c24dc(lVar14,0,0);
            if ((uVar17 & 1) == 0) {
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              iVar12 = FUN_07193118(lVar14,0);
                    /* try { // try from 070334dc to 071334df has its CatchHandler @ 07033828 */
              if (iVar12 != 0) {
                bVar22 = 1;
                goto LAB_070334f0;
              }
            }
          }
        }
                    /* try { // try from 070334e0 to 071334f7 has its CatchHandler @ 07033830 */
        iVar27 = iVar27 + 1;
      } while (iVar11 != iVar27);
      bVar22 = 0;
LAB_070334f0:
      bVar19 = *(byte *)(lVar13 + 0x10);
      bVar9 = (bool)(*(byte *)(lVar13 + 0x30) & bVar22);
    }
    *(bool *)(lVar13 + 0x30) = bVar9;
    if (bVar19 == 0) goto joined_r0x07033500;
  }
  puVar6 = PTR_DAT_079fb3d0;
  if (0 < iVar11) {
    iVar27 = 0;
    do {
      if ((*(char *)(lVar13 + 0x10) == '\0') && (iVar5 == iVar27)) {
                    /* try { // try from 07033540 to 0713356f has its CatchHandler @ 0703383c */
        lVar14 = *(long *)puVar7;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar14 = *(long *)puVar7;
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x70);
        if (DAT_07ed7e32 == '\0') {
          FUN_03642964(puVar6);
          DAT_07ed7e32 = '\x01';
        }
        puVar8 = PTR_DAT_07a06cb8;
        if (lVar14 == 0) {
LAB_07033ccc:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        puVar23 = *(undefined4 **)(*(long *)puVar6 + 0xb8);
        lVar15 = *(long *)(lVar14 + 0x10);
        uVar28 = *puVar23;
        uVar29 = puVar23[1];
        uVar30 = puVar23[2];
        uVar31 = puVar23[3];
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_07033ccc;
                    /* try { // try from 070335a8 to 071335d7 has its CatchHandler @ 07033838 */
        uVar26 = *(uint *)(lVar14 + 0x18);
        if (uVar26 < *(uint *)(lVar15 + 0x18)) {
          lVar15 = lVar15 + (long)(int)uVar26 * 0x10;
          *(uint *)(lVar14 + 0x18) = uVar26 + 1;
          *(undefined4 *)(lVar15 + 0x20) = uVar28;
          *(undefined4 *)(lVar15 + 0x24) = uVar29;
          *(undefined4 *)(lVar15 + 0x28) = uVar30;
          *(undefined4 *)(lVar15 + 0x2c) = uVar31;
        }
        else {
          FUN_04641714(lVar14,*(undefined8 *)
                               (*(long *)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0) + 0x70));
        }
        lVar15 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x78);
        if (lVar15 == 0) {
LAB_07033cd0:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar14 = *(long *)(lVar15 + 0x10);
        lVar20 = *(long *)PTR_DAT_079f4d70;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_07033cd0;
        puVar25 = (uint *)(lVar15 + 0x18);
        uVar26 = *puVar25;
        if (*(uint *)(lVar14 + 0x18) <= uVar26) {
          FUN_04526fb8(lVar15,0,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                    /* try { // try from 07033808 to 0713380b has its CatchHandler @ 07033834 */
          goto LAB_07033bf4;
        }
LAB_07033864:
        uVar28 = 0;
LAB_07033868:
                    /* catch() { ... } // from try @ 0703385c with catch @ 07033868 */
                    /* try { // try from 0703386c to 07133873 has its CatchHandler @ 0703387c */
        *puVar25 = uVar26 + 1;
                    /* try { // try from 07033874 to 0713387f has its CatchHandler @ 07033208 */
        *(undefined4 *)(lVar14 + (long)(int)uVar26 * 4 + 0x20) = uVar28;
      }
      else if ((*(char *)(lVar13 + 0x30) == '\0') && (iVar5 != iVar27)) {
        lVar14 = *(long *)puVar7;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_036a1978();
                    /* try { // try from 070335f0 to 071335f3 has its CatchHandler @ 07033824 */
          lVar14 = *(long *)puVar7;
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x70);
        if (DAT_07ed7e32 == '\0') {
          FUN_03642964(puVar6);
                    /* try { // try from 0703360c to 0713360f has its CatchHandler @ 07033840 */
          DAT_07ed7e32 = '\x01';
        }
        puVar8 = PTR_DAT_07a06cb8;
        if (lVar14 == 0) {
LAB_07033cd8:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        puVar23 = *(undefined4 **)(*(long *)puVar6 + 0xb8);
        lVar15 = *(long *)(lVar14 + 0x10);
                    /* try { // try from 07033628 to 07133647 has its CatchHandler @ 0703382c */
        uVar28 = *puVar23;
        uVar29 = puVar23[1];
        uVar30 = puVar23[2];
        uVar31 = puVar23[3];
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_07033cd8;
        uVar26 = *(uint *)(lVar14 + 0x18);
                    /* try { // try from 07033654 to 0713365b has its CatchHandler @ 07033820 */
        if (uVar26 < *(uint *)(lVar15 + 0x18)) {
          lVar15 = lVar15 + (long)(int)uVar26 * 0x10;
          *(uint *)(lVar14 + 0x18) = uVar26 + 1;
          *(undefined4 *)(lVar15 + 0x20) = uVar28;
          *(undefined4 *)(lVar15 + 0x24) = uVar29;
          *(undefined4 *)(lVar15 + 0x28) = uVar30;
          *(undefined4 *)(lVar15 + 0x2c) = uVar31;
        }
        else {
                    /* try { // try from 0703380c to 07133813 has its CatchHandler @ 07033208 */
                    /* try { // try from 07033814 to 07133817 has its CatchHandler @ 0703383c */
                    /* try { // try from 07033818 to 0713381b has its CatchHandler @ 07033838 */
                    /* try { // try from 0703381c to 0713381f has its CatchHandler @ 07033840 */
          FUN_04641714(lVar14,*(undefined8 *)
                               (*(long *)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0) + 0x70));
        }
                    /* catch() { ... } // from try @ 07033654 with catch @ 07033820
                       try { // try from 07033820 to 0713385b has its CatchHandler @ 07033208 */
                    /* catch() { ... } // from try @ 070335f0 with catch @ 07033824 */
                    /* catch() { ... } // from try @ 070334dc with catch @ 07033828 */
        lVar15 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x78);
                    /* catch() { ... } // from try @ 07033628 with catch @ 0703382c */
        if (lVar15 == 0) {
LAB_07033cd4:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
                    /* catch() { ... } // from try @ 070334e0 with catch @ 07033830 */
                    /* catch() { ... } // from try @ 07033808 with catch @ 07033834 */
                    /* catch() { ... } // from try @ 070335a8 with catch @ 07033838
                       catch() { ... } // from try @ 07033818 with catch @ 07033838 */
        lVar14 = *(long *)(lVar15 + 0x10);
                    /* catch() { ... } // from try @ 07033540 with catch @ 0703383c
                       catch() { ... } // from try @ 07033814 with catch @ 0703383c */
                    /* catch() { ... } // from try @ 0703360c with catch @ 07033840
                       catch() { ... } // from try @ 070336a0 with catch @ 07033840
                       catch() { ... } // from try @ 0703381c with catch @ 07033840 */
        lVar20 = *(long *)PTR_DAT_079f4d70;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_07033cd4;
        puVar25 = (uint *)(lVar15 + 0x18);
        uVar26 = *puVar25;
                    /* try { // try from 0703385c to 0713385f has its CatchHandler @ 07033868 */
        if (uVar26 < *(uint *)(lVar14 + 0x18)) goto LAB_07033864;
                    /* catch() { ... } // from try @ 0703386c with catch @ 0703387c */
        FUN_04526fb8(lVar15,0,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
      }
      else {
        uVar18 = FUN_03dba484(lVar16,uVar3,iVar27,
                              *(undefined8 *)OVR_OpenVR_IVROverlay__GetOverlayTextureSize_TypeInfo);
        lVar14 = FUN_07201a74(uVar18,0);
                    /* try { // try from 070336a0 to 071336db has its CatchHandler @ 07033840 */
        local_f8 = 0;
        if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar17 = FUN_071c0684(lVar14,0,0);
        if ((uVar17 & 1) != 0) {
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar15 = FUN_071bd1a0(lVar14,0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
                    /* try { // try from 070336dc to 07133807 has its CatchHandler @ 07033208 */
          FUN_03d193e4(lVar15,&local_f8,
                       *(undefined8 *)Unity_AppUI_Core_NotificationManager_ICallback_TypeInfo);
        }
        lVar15 = local_f8;
        if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar17 = FUN_071c630c(lVar15,0);
        if ((uVar17 & 1) == 0) {
LAB_0703372c:
          lVar15 = *(long *)puVar7;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar15 = *(long *)puVar7;
          }
          lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x70);
          if (lVar15 == 0) {
LAB_07033cdc:
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar20 = *(long *)(lVar15 + 0x10);
          uVar28 = *(undefined4 *)(param_5 + 0xd8);
          uVar29 = *(undefined4 *)(param_5 + 0xdc);
          lVar24 = *(long *)PTR_DAT_07a06cb8;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar20 == 0) goto LAB_07033cdc;
          uVar26 = *(uint *)(lVar15 + 0x18);
          if (uVar26 < *(uint *)(lVar20 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar26 + 1;
            puVar23 = (undefined4 *)(lVar20 + (long)(int)uVar26 * 0x10 + 0x20);
            *puVar23 = uVar28;
LAB_07033790:
            puVar23[1] = uVar29;
            *(undefined8 *)(puVar23 + 2) = 0;
          }
          else {
            FUN_04641714(uVar28,uVar29,0,0,lVar15,
                         *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          if (local_f8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          if (*(char *)(local_f8 + 0x20) != '\0') goto LAB_0703372c;
          lVar15 = *(long *)puVar7;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar15 = *(long *)puVar7;
          }
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x70);
          uVar28 = FUN_07192be8(lVar14,0);
          uVar29 = FUN_07192c9c(lVar14,0);
          if (lVar15 == 0) {
LAB_07033d20:
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar20 = *(long *)(lVar15 + 0x10);
          lVar24 = *(long *)PTR_DAT_07a06cb8;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar20 == 0) goto LAB_07033d20;
          uVar26 = *(uint *)(lVar15 + 0x18);
          if (uVar26 < *(uint *)(lVar20 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar26 + 1;
            puVar23 = (undefined4 *)(lVar20 + (long)(int)uVar26 * 0x10 + 0x20);
            *puVar23 = uVar28;
            goto LAB_07033790;
          }
          FUN_04641714(uVar28,uVar29,0,0,lVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
        lVar15 = local_f8;
        if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar17 = FUN_071c630c(lVar15,0);
        if ((uVar17 & 1) != 0) {
          if (local_f8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          iVar12 = *(int *)(local_f8 + 0x30);
          lVar15 = *(long *)Oculus_Interaction_Input_ControllerAnimatedHand_<>c_TypeInfo;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar15 = *(long *)Oculus_Interaction_Input_ControllerAnimatedHand_<>c_TypeInfo;
          }
          if (iVar12 == **(int **)(lVar15 + 0xb8)) {
            lVar15 = *(long *)puVar7;
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_036a1978();
              lVar15 = *(long *)puVar7;
            }
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x78);
            uVar28 = FUN_07193418(lVar14,0);
            if (lVar15 == 0) {
LAB_07033d04:
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar14 = *(long *)(lVar15 + 0x10);
            lVar20 = *(long *)PTR_DAT_079f4d70;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_07033d04;
            puVar25 = (uint *)(lVar15 + 0x18);
            uVar26 = *puVar25;
            if (uVar26 < *(uint *)(lVar14 + 0x18)) goto LAB_07033868;
            FUN_04526fb8(lVar15,uVar28,
                         *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            goto LAB_07033bf4;
          }
        }
        lVar14 = local_f8;
        if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar17 = FUN_071c630c(lVar14,0);
        if ((uVar17 & 1) != 0) {
          if (local_f8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          iVar12 = *(int *)(local_f8 + 0x30);
          lVar14 = *(long *)Oculus_Interaction_Input_ControllerAnimatedHand_<>c_TypeInfo;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar14 = *(long *)Oculus_Interaction_Input_ControllerAnimatedHand_<>c_TypeInfo;
          }
          piVar21 = *(int **)(lVar14 + 0xb8);
          if (iVar12 != *piVar21) {
            if (local_f8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar12 = *(int *)(local_f8 + 0x30);
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_036a1978();
              piVar21 = *(int **)(*(long *)
                                   Oculus_Interaction_Input_ControllerAnimatedHand_<>c_TypeInfo +
                                 0xb8);
            }
            lVar14 = *(long *)puVar7;
            iVar1 = iVar12;
            if (piVar21[3] <= iVar12) {
              iVar1 = piVar21[3];
            }
            iVar2 = piVar21[1];
            if (piVar21[1] <= iVar12) {
              iVar2 = iVar1;
            }
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_036a1978();
                    /* try { // try from 07033b88 to 0713403b has its CatchHandler @ 07033b88
                       catch() { ... } // from try @ 07033b88 with catch @ 07033b88
                       catch() { ... } // from try @ 0703438c with catch @ 07033b88
                       catch() { ... } // from try @ 07034480 with catch @ 07033b88
                       catch() { ... } // from try @ 0703449c with catch @ 07033b88
                       catch() { ... } // from try @ 07034590 with catch @ 07033b88 */
              lVar14 = *(long *)puVar7;
            }
            lVar15 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x78);
            uVar28 = FUN_06f8a4bc(param_5,iVar2,0);
            if (lVar15 == 0) {
LAB_07033d18:
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar14 = *(long *)(lVar15 + 0x10);
            lVar20 = *(long *)PTR_DAT_079f4d70;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_07033d18;
            puVar25 = (uint *)(lVar15 + 0x18);
            uVar26 = *puVar25;
            if (uVar26 < *(uint *)(lVar14 + 0x18)) goto LAB_07033868;
            FUN_04526fb8(lVar15,uVar28,
                         *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            goto LAB_07033bf4;
          }
        }
        lVar14 = *(long *)puVar7;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar14 = *(long *)puVar7;
        }
        lVar15 = *(long *)Oculus_Interaction_Input_ControllerAnimatedHand_<>c_TypeInfo;
        lVar20 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x78);
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_036a1978(lVar15);
          lVar15 = *(long *)Oculus_Interaction_Input_ControllerAnimatedHand_<>c_TypeInfo;
        }
        uVar28 = FUN_06f8a4bc(param_5,*(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x10),0);
        if (lVar20 == 0) {
LAB_07033ce0:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar14 = *(long *)(lVar20 + 0x10);
        lVar15 = *(long *)PTR_DAT_079f4d70;
        *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_07033ce0;
        puVar25 = (uint *)(lVar20 + 0x18);
        uVar26 = *puVar25;
        if (uVar26 < *(uint *)(lVar14 + 0x18)) goto LAB_07033868;
        FUN_04526fb8(lVar20,uVar28,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
LAB_07033bf4:
      iVar27 = iVar27 + 1;
    } while (iVar11 != iVar27);
  }
  lVar14 = *(long *)puVar7;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar14 = *(long *)puVar7;
  }
  *(undefined8 *)(lVar13 + 0x48) = *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x70);
  thunk_FUN_036b7ad0();
  *(undefined8 *)(lVar13 + 0x50) = *(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x78);
  thunk_FUN_036b7ad0();
  bVar9 = false;
  if (*(char *)(param_5 + 0xe0) != '\0') {
    if (*(char *)(lVar13 + 0x10) == '\0') {
      bVar9 = *(char *)(lVar13 + 0x30) != '\0';
    }
    else {
      bVar9 = true;
    }
  }
  *(bool *)(lVar13 + 0x3c) = bVar9;
LAB_07033c90:
  FUN_06eaa270(local_74,0);
  return lVar13;
}


