/*
FUNCTION_NAME: FUN_06414a70
ENTRY_POINT: 06414a70
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06414a70(long *param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  bool bVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  int iVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  
                    /* try { // try from 06414a94 to 06514a97 has its CatchHandler @ 06414d3c */
  uVar20 = param_3;
  if ((bRam00000000071cd75b & 1) == 0) {
    FUN_02f07e70(
                System_Collections_Generic_Dictionary<Type,_NetworkBehaviour_ReadersForType>_TypeInfo
                );
    FUN_02f07e70(PTR_DAT_06d069a8);
                    /* try { // try from 06414ac0 to 06514ac3 has its CatchHandler @ 06414d28 */
    FUN_02f07e70(
                System_Collections_Generic_Dictionary<Type,_NetworkBehaviourUtils_MetaData>_TypeInfo
                );
    FUN_02f07e70(PTR_DAT_06d066b8);
    FUN_02f07e70(System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo)
    ;
                    /* try { // try from 06414ae0 to 06514ae7 has its CatchHandler @ 06414d30 */
                    /* try { // try from 06414ae8 to 06514af3 has its CatchHandler @ 06414d38 */
    FUN_02f07e70(PTR_DAT_06d0b870);
    uVar20 = param_3 & 0xffffffff;
    bRam00000000071cd75b = 1;
  }
  puVar17 = System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo;
  puVar16 = System_Collections_Generic_Dictionary<Type,_NetworkBehaviourUtils_MetaData>_TypeInfo;
  puVar15 = PTR_DAT_06d066b8;
  bVar18 = (uVar20 & 1) == 0;
  uVar21 = 8;
                    /* try { // try from 06414b04 to 06514b17 has its CatchHandler @ 06414d34 */
  if (bVar18) {
    uVar21 = 4;
  }
  lVar22 = param_1[2];
  uVar26 = 0;
  if (uVar21 != 0) {
    uVar26 = 0xfffc / uVar21;
  }
  iVar23 = 0x24;
  if (bVar18) {
    iVar23 = 6;
  }
                    /* try { // try from 06414b24 to 06514b3b has its CatchHandler @ 06414d44 */
  if ((int)uVar26 <= (int)param_2) {
    param_2 = uVar26;
  }
  if (lVar22 != 0) {
                    /* try { // try from 06414b3c to 06514cf3 has its CatchHandler @ 06414224 */
    iVar10 = param_2 * uVar21;
    iVar11 = 0;
    if (uVar21 != 0) {
      iVar11 = *(int *)(lVar22 + 0x18) / (int)uVar21;
    }
    FUN_03738014(param_1 + 2,iVar10,*(undefined8 *)PTR_DAT_06d066b8);
    plVar7 = param_1 + 3;
    FUN_03738014(plVar7,iVar10,*(undefined8 *)puVar15);
    plVar8 = param_1 + 4;
    FUN_03738138(plVar8,iVar10,*(undefined8 *)puVar17);
    ES3Types_ES3Type__ReadInto<ParticleSystem_SizeBySpeedModule>
              (param_1 + 5,iVar10,*(undefined8 *)puVar16);
    ES3Types_ES3Type__ReadInto<ParticleSystem_SizeBySpeedModule>
              (param_1 + 6,iVar10,*(undefined8 *)puVar16);
    FUN_0373470c(param_1 + 7,iVar10,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<Type,_NetworkBehaviour_ReadersForType>_TypeInfo
                );
    plVar9 = param_1 + 8;
    FUN_03735398(plVar9,param_2 * iVar23,*(undefined8 *)PTR_DAT_06d069a8);
    puVar15 = PTR_DAT_06d0b870;
    if (iVar11 < (int)param_2) {
      lVar22 = (long)iVar11;
      uVar26 = iVar23 * iVar11 + 0x11;
      uVar24 = uVar21 * iVar11 + 3;
      do {
        lVar19 = *(long *)puVar15;
        lVar25 = *plVar7;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar19 = *(long *)puVar15;
        }
        if (lVar25 == 0) goto LAB_06415344;
        uVar12 = uVar24 - 3;
        if (*(uint *)(lVar25 + 0x18) <= uVar12) {
LAB_06415340:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        uVar28 = *(undefined4 *)(*(long *)(lVar19 + 0xb8) + 0xc);
        lVar25 = lVar25 + (long)(int)uVar12 * 0xc;
        *(undefined8 *)(lVar25 + 0x20) = *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 4);
        *(undefined4 *)(lVar25 + 0x28) = uVar28;
        lVar19 = *plVar7;
        if (lVar19 == 0) goto LAB_06415344;
        uVar13 = uVar24 - 2;
        if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_06415340;
        uVar28 = *(undefined4 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0xc);
        lVar19 = lVar19 + (long)(int)uVar13 * 0xc;
        *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 4);
        *(undefined4 *)(lVar19 + 0x28) = uVar28;
        lVar19 = *plVar7;
        if (lVar19 == 0) goto LAB_06415344;
        uVar14 = uVar24 - 1;
        if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_06415340;
        uVar28 = *(undefined4 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0xc);
        lVar19 = lVar19 + (long)(int)uVar14 * 0xc;
        *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 4);
        *(undefined4 *)(lVar19 + 0x28) = uVar28;
        lVar19 = *plVar7;
        if (lVar19 == 0) goto LAB_06415344;
                    /* try { // try from 06414cf4 to 06514cf7 has its CatchHandler @ 06414d40 */
        if (*(uint *)(lVar19 + 0x18) <= uVar24) goto LAB_06415340;
                    /* try { // try from 06414cf8 to 06514cfb has its CatchHandler @ 06414224 */
                    /* try { // try from 06414cfc to 06514cff has its CatchHandler @ 06414d2c */
                    /* try { // try from 06414d00 to 06514d03 has its CatchHandler @ 06414d24 */
                    /* try { // try from 06414d04 to 06514d07 has its CatchHandler @ 06414d20 */
        uVar28 = *(undefined4 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0xc);
                    /* try { // try from 06414d08 to 06514d5b has its CatchHandler @ 06414224 */
                    /* catch() { ... } // from try @ 06414a4c with catch @ 06414d0c */
        lVar19 = lVar19 + (long)(int)uVar24 * 0xc;
                    /* catch() { ... } // from try @ 06414a1c with catch @ 06414d10 */
        *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 4);
                    /* catch() { ... } // from try @ 06414a5c with catch @ 06414d14 */
        *(undefined4 *)(lVar19 + 0x28) = uVar28;
                    /* catch() { ... } // from try @ 0641499c with catch @ 06414d18 */
        lVar19 = *plVar8;
                    /* catch() { ... } // from try @ 064149c4 with catch @ 06414d1c */
        if (lVar19 == 0) goto LAB_06415344;
                    /* catch() { ... } // from try @ 06414a30 with catch @ 06414d20
                       catch() { ... } // from try @ 06414d04 with catch @ 06414d20 */
                    /* catch() { ... } // from try @ 06414d00 with catch @ 06414d24 */
                    /* catch() { ... } // from try @ 06414ac0 with catch @ 06414d28 */
        if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_06415340;
                    /* catch() { ... } // from try @ 06414cfc with catch @ 06414d2c */
                    /* catch() { ... } // from try @ 06414ae0 with catch @ 06414d30 */
        lVar19 = lVar19 + (long)(int)uVar12 * 0x10;
                    /* catch() { ... } // from try @ 06414b04 with catch @ 06414d34 */
                    /* catch() { ... } // from try @ 06414ae8 with catch @ 06414d38 */
        uVar27 = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x10);
                    /* catch() { ... } // from try @ 06414a94 with catch @ 06414d3c */
        *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x18);
        *(undefined8 *)(lVar19 + 0x20) = uVar27;
                    /* catch() { ... } // from try @ 06414cf4 with catch @ 06414d40 */
        lVar19 = *plVar8;
                    /* catch() { ... } // from try @ 06414b24 with catch @ 06414d44 */
        if (lVar19 == 0) goto LAB_06415344;
        if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_06415340;
        lVar19 = lVar19 + (long)(int)uVar13 * 0x10;
                    /* try { // try from 06414d5c to 06514d5f has its CatchHandler @ 06414d80 */
                    /* try { // try from 06414d60 to 06514d83 has its CatchHandler @ 06414224 */
        uVar27 = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x10);
        *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x18);
        *(undefined8 *)(lVar19 + 0x20) = uVar27;
        lVar19 = *plVar8;
        if (lVar19 == 0) goto LAB_06415344;
        if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_06415340;
                    /* catch() { ... } // from try @ 06414d5c with catch @ 06414d80 */
        lVar19 = lVar19 + (long)(int)uVar14 * 0x10;
                    /* try { // try from 06414d84 to 06514d8f has its CatchHandler @ 06414da4 */
        uVar27 = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x10);
        *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x18);
        *(undefined8 *)(lVar19 + 0x20) = uVar27;
                    /* try { // try from 06414d90 to 06514d9b has its CatchHandler @ 06414224 */
        lVar19 = *plVar8;
        if (lVar19 == 0) goto LAB_06415344;
                    /* try { // try from 06414d9c to 06514da3 has its CatchHandler @ 06414da4 */
        if (*(uint *)(lVar19 + 0x18) <= uVar24) goto LAB_06415340;
                    /* catch() { ... } // from try @ 06414d84 with catch @ 06414da4
                       catch() { ... } // from try @ 06414d9c with catch @ 06414da4 */
        lVar19 = lVar19 + (long)(int)uVar24 * 0x10;
        uVar27 = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x10);
        *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x18);
        *(undefined8 *)(lVar19 + 0x20) = uVar27;
        if ((param_3 & 1) != 0) {
          lVar19 = *(long *)puVar15;
          lVar25 = *plVar7;
          if (*(int *)(lVar19 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
            lVar19 = *(long *)puVar15;
          }
          if (lVar25 == 0) goto LAB_06415344;
          uVar1 = uVar24 + 1;
          if (*(uint *)(lVar25 + 0x18) <= uVar1) goto LAB_06415340;
          uVar28 = *(undefined4 *)(*(long *)(lVar19 + 0xb8) + 0xc);
          lVar25 = lVar25 + (long)(int)uVar1 * 0xc;
          *(undefined8 *)(lVar25 + 0x20) = *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 4);
          *(undefined4 *)(lVar25 + 0x28) = uVar28;
          lVar19 = *plVar7;
          if (lVar19 == 0) goto LAB_06415344;
          uVar2 = uVar24 + 2;
          if (*(uint *)(lVar19 + 0x18) <= uVar2) goto LAB_06415340;
          lVar19 = lVar19 + (long)(int)uVar2 * 0xc;
          uVar28 = *(undefined4 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0xc);
          *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 4);
          *(undefined4 *)(lVar19 + 0x28) = uVar28;
          lVar19 = *plVar7;
          if (lVar19 == 0) goto LAB_06415344;
          uVar3 = uVar24 + 3;
          if (*(uint *)(lVar19 + 0x18) <= uVar3) goto LAB_06415340;
          lVar19 = lVar19 + (long)(int)uVar3 * 0xc;
          uVar28 = *(undefined4 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0xc);
          *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 4);
          *(undefined4 *)(lVar19 + 0x28) = uVar28;
          lVar19 = *plVar7;
          if (lVar19 == 0) goto LAB_06415344;
          uVar4 = uVar24 + 4;
          if (*(uint *)(lVar19 + 0x18) <= uVar4) goto LAB_06415340;
          lVar19 = lVar19 + (long)(int)uVar4 * 0xc;
          uVar28 = *(undefined4 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0xc);
          *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 4);
          *(undefined4 *)(lVar19 + 0x28) = uVar28;
          lVar19 = *plVar8;
          if (lVar19 == 0) goto LAB_06415344;
          if (*(uint *)(lVar19 + 0x18) <= uVar1) goto LAB_06415340;
          lVar19 = lVar19 + (long)(int)uVar1 * 0x10;
          uVar27 = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x10);
          *(undefined8 *)(lVar19 + 0x28) =
               *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x18);
          *(undefined8 *)(lVar19 + 0x20) = uVar27;
          lVar19 = *plVar8;
          if (lVar19 == 0) goto LAB_06415344;
          if (*(uint *)(lVar19 + 0x18) <= uVar2) goto LAB_06415340;
          lVar19 = lVar19 + (long)(int)uVar2 * 0x10;
          uVar27 = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x10);
          *(undefined8 *)(lVar19 + 0x28) =
               *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x18);
          *(undefined8 *)(lVar19 + 0x20) = uVar27;
          lVar19 = *plVar8;
          if (lVar19 == 0) goto LAB_06415344;
          if (*(uint *)(lVar19 + 0x18) <= uVar3) goto LAB_06415340;
          lVar19 = lVar19 + (long)(int)uVar3 * 0x10;
          uVar27 = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x10);
          *(undefined8 *)(lVar19 + 0x28) =
               *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x18);
          *(undefined8 *)(lVar19 + 0x20) = uVar27;
          lVar19 = *plVar8;
          if (lVar19 == 0) goto LAB_06415344;
          if (*(uint *)(lVar19 + 0x18) <= uVar4) goto LAB_06415340;
          lVar19 = lVar19 + (long)(int)uVar4 * 0x10;
          uVar27 = *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x10);
          *(undefined8 *)(lVar19 + 0x28) =
               *(undefined8 *)(*(long *)(*(long *)puVar15 + 0xb8) + 0x18);
          *(undefined8 *)(lVar19 + 0x20) = uVar27;
        }
        lVar19 = *plVar9;
        if (lVar19 == 0) goto LAB_06415344;
        uVar1 = *(uint *)(lVar19 + 0x18);
        if (uVar1 <= uVar26 - 0x11) goto LAB_06415340;
        *(uint *)(lVar19 + (long)(int)(uVar26 - 0x11) * 4 + 0x20) = uVar12;
        if (uVar1 <= uVar26 - 0x10) goto LAB_06415340;
        *(uint *)(lVar19 + (long)(int)(uVar26 - 0x10) * 4 + 0x20) = uVar13;
        if (uVar1 <= uVar26 - 0xf) goto LAB_06415340;
        *(uint *)(lVar19 + (long)(int)(uVar26 - 0xf) * 4 + 0x20) = uVar14;
        if (uVar1 <= uVar26 - 0xe) goto LAB_06415340;
        *(uint *)(lVar19 + (long)(int)(uVar26 - 0xe) * 4 + 0x20) = uVar14;
        if (uVar1 <= uVar26 - 0xd) goto LAB_06415340;
        *(uint *)(lVar19 + (long)(int)(uVar26 - 0xd) * 4 + 0x20) = uVar24;
        if (uVar1 <= uVar26 - 0xc) goto LAB_06415340;
        *(uint *)(lVar19 + (long)(int)(uVar26 - 0xc) * 4 + 0x20) = uVar12;
        if ((param_3 & 1) != 0) {
          if (uVar1 <= uVar26 - 0xb) goto LAB_06415340;
          iVar10 = uVar24 + 1;
          *(int *)(lVar19 + (long)(int)(uVar26 - 0xb) * 4 + 0x20) = iVar10;
          if (uVar1 <= uVar26 - 10) goto LAB_06415340;
          iVar11 = uVar24 + 2;
          *(int *)(lVar19 + (long)(int)(uVar26 - 10) * 4 + 0x20) = iVar11;
          if (uVar1 <= uVar26 - 9) goto LAB_06415340;
          *(uint *)(lVar19 + (long)(int)(uVar26 - 9) * 4 + 0x20) = uVar13;
          if (uVar1 <= uVar26 - 8) goto LAB_06415340;
          *(uint *)(lVar19 + (long)(int)(uVar26 - 8) * 4 + 0x20) = uVar13;
          if (uVar1 <= uVar26 - 7) goto LAB_06415340;
          *(uint *)(lVar19 + (long)(int)(uVar26 - 7) * 4 + 0x20) = uVar12;
          if (uVar1 <= uVar26 - 6) goto LAB_06415340;
          *(int *)(lVar19 + (long)(int)(uVar26 - 6) * 4 + 0x20) = iVar10;
          if (uVar1 <= uVar26 - 5) goto LAB_06415340;
          *(uint *)(lVar19 + (long)(int)(uVar26 - 5) * 4 + 0x20) = uVar24;
          if (uVar1 <= uVar26 - 4) goto LAB_06415340;
          *(uint *)(lVar19 + (long)(int)(uVar26 - 4) * 4 + 0x20) = uVar14;
          if (uVar1 <= uVar26 - 3) goto LAB_06415340;
          iVar5 = uVar24 + 3;
          *(int *)(lVar19 + (long)(int)(uVar26 - 3) * 4 + 0x20) = iVar5;
          if (uVar1 <= uVar26 - 2) goto LAB_06415340;
          *(int *)(lVar19 + (long)(int)(uVar26 - 2) * 4 + 0x20) = iVar5;
          if (uVar1 <= uVar26 - 1) goto LAB_06415340;
          iVar6 = uVar24 + 4;
          *(int *)(lVar19 + (long)(int)(uVar26 - 1) * 4 + 0x20) = iVar6;
          if (uVar1 <= uVar26) goto LAB_06415340;
          *(uint *)(lVar19 + (long)(int)uVar26 * 4 + 0x20) = uVar24;
          if (uVar1 <= uVar26 + 1) goto LAB_06415340;
          *(uint *)(lVar19 + (long)(int)(uVar26 + 1) * 4 + 0x20) = uVar13;
          if (uVar1 <= uVar26 + 2) goto LAB_06415340;
          *(int *)(lVar19 + (long)(int)(uVar26 + 2) * 4 + 0x20) = iVar11;
          if (uVar1 <= uVar26 + 3) goto LAB_06415340;
          *(int *)(lVar19 + (long)(int)(uVar26 + 3) * 4 + 0x20) = iVar5;
          if (uVar1 <= uVar26 + 4) goto LAB_06415340;
          *(int *)(lVar19 + (long)(int)(uVar26 + 4) * 4 + 0x20) = iVar5;
          if (uVar1 <= uVar26 + 5) goto LAB_06415340;
          *(uint *)(lVar19 + (long)(int)(uVar26 + 5) * 4 + 0x20) = uVar14;
          if (uVar1 <= uVar26 + 6) goto LAB_06415340;
          *(uint *)(lVar19 + (long)(int)(uVar26 + 6) * 4 + 0x20) = uVar13;
          if (uVar1 <= uVar26 + 7) goto LAB_06415340;
          *(int *)(lVar19 + (long)(int)(uVar26 + 7) * 4 + 0x20) = iVar10;
          if (uVar1 <= uVar26 + 8) goto LAB_06415340;
          *(uint *)(lVar19 + (long)(int)(uVar26 + 8) * 4 + 0x20) = uVar12;
          if (uVar1 <= uVar26 + 9) goto LAB_06415340;
          *(uint *)(lVar19 + (long)(int)(uVar26 + 9) * 4 + 0x20) = uVar24;
          if (uVar1 <= uVar26 + 10) goto LAB_06415340;
          *(uint *)(lVar19 + (long)(int)(uVar26 + 10) * 4 + 0x20) = uVar24;
          if (uVar1 <= uVar26 + 0xb) goto LAB_06415340;
          *(int *)(lVar19 + (long)(int)(uVar26 + 0xb) * 4 + 0x20) = iVar6;
          if (uVar1 <= uVar26 + 0xc) goto LAB_06415340;
          *(int *)(lVar19 + (long)(int)(uVar26 + 0xc) * 4 + 0x20) = iVar10;
          if (uVar1 <= uVar26 + 0xd) goto LAB_06415340;
          *(int *)(lVar19 + (long)(int)(uVar26 + 0xd) * 4 + 0x20) = iVar6;
          if (uVar1 <= uVar26 + 0xe) goto LAB_06415340;
          *(int *)(lVar19 + (long)(int)(uVar26 + 0xe) * 4 + 0x20) = iVar5;
          if (uVar1 <= uVar26 + 0xf) goto LAB_06415340;
          *(int *)(lVar19 + (long)(int)(uVar26 + 0xf) * 4 + 0x20) = iVar11;
          if (uVar1 <= uVar26 + 0x10) goto LAB_06415340;
          *(int *)(lVar19 + (long)(int)(uVar26 + 0x10) * 4 + 0x20) = iVar11;
          if (uVar1 <= uVar26 + 0x11) goto LAB_06415340;
          *(int *)(lVar19 + (long)(int)(uVar26 + 0x11) * 4 + 0x20) = iVar10;
          if (uVar1 <= uVar26 + 0x12) goto LAB_06415340;
          *(int *)(lVar19 + (long)(int)(uVar26 + 0x12) * 4 + 0x20) = iVar6;
        }
        lVar22 = lVar22 + 1;
        uVar26 = uVar26 + iVar23;
        uVar24 = uVar24 + uVar21;
      } while (lVar22 != (int)param_2);
      if (*param_1 != 0) {
        FUN_066a8844(*param_1,param_1[2],0);
        if (*param_1 != 0) {
          FUN_066a88f0(*param_1,param_1[3],0);
          if (*param_1 != 0) {
            FUN_066a899c(*param_1,param_1[4],0);
            if (*param_1 != 0) {
              FUN_066aa03c(*param_1,*plVar9,0);
              return;
            }
          }
        }
      }
    }
    else if (*param_1 != 0) {
      FUN_066aa03c(*param_1,param_1[8],0);
      if (*param_1 != 0) {
        FUN_066a8844(*param_1,param_1[2],0);
        if (*param_1 != 0) {
          FUN_066a88f0(*param_1,param_1[3],0);
          if (*param_1 != 0) {
            FUN_066a899c(*param_1,*plVar8,0);
            return;
          }
        }
      }
    }
  }
LAB_06415344:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


