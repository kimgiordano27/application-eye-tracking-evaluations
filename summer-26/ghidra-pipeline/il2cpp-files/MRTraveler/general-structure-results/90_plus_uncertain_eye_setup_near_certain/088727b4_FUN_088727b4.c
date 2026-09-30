/*
FUNCTION_NAME: FUN_088727b4
ENTRY_POINT: 088727b4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_088727b4(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
                 long *param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  float *pfVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  float fVar22;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulong uVar23;
  
  if ((DAT_0943deb4 & 1) == 0) {
    FUN_03c8f898(System_Collections_Generic_List<JsonObject>_TypeInfo);
    FUN_03c8f898(System_Collections_Generic_List<JsonObject>_TypeInfo);
    FUN_03c8f898(System_Collections_Generic_List<JsonPosition>_TypeInfo);
    FUN_03c8f898(System_Collections_Generic_List<JsonProperty>_TypeInfo);
    FUN_03c8f898(System_Func<OvrGpuSkinnerDrawCall,_bool>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08e88500);
    FUN_03c8f898(PTR_DAT_08e88588);
    FUN_03c8f898(PTR_DAT_08e98c70);
    FUN_03c8f898(System_Collections_Generic_List<Item_Heliport>_TypeInfo);
    FUN_03c8f898(PTR_DAT_08e88220);
    FUN_03c8f898(PTR_DAT_08e88230);
    FUN_03c8f898(PTR_DAT_08e6abb8);
    FUN_03c8f898(System_Collections_Generic_List<JsonSchema>_TypeInfo);
    FUN_03c8f898(System_Collections_Generic_List<JsonSchemaModel>_TypeInfo);
    FUN_03c8f898(System_Collections_Generic_List<JsonSchemaNode>_TypeInfo);
    DAT_0943deb4 = 1;
  }
  lVar10 = FUN_08693790(param_5,0);
  if (lVar10 != 0) {
    FUN_085ea000(lVar10,0);
    lVar10 = FUN_08693790(param_5,0);
    if (lVar10 != 0) {
      param_3 = param_3 * 0.5;
      FUN_085ea000(lVar10,0);
      param_4 = param_4 * 0.5;
      if ((int)param_5[0x20] == 0) {
        *(float *)((long)param_5 + 0x114) = param_3;
        *(float *)(param_5 + 0x23) = param_4;
        fVar26 = 0.0;
        fVar27 = 0.0;
      }
      else {
        lVar10 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e6abb8,3);
        if (lVar10 == 0) goto LAB_08873048;
        uVar13 = (uint)*(ulong *)(lVar10 + 0x18);
        if (((uVar13 == 0) || (*(float *)(lVar10 + 0x20) = param_3, uVar13 == 1)) ||
           (*(float *)(lVar10 + 0x24) = param_4, uVar13 < 3)) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        *(int *)(lVar10 + 0x28) = (int)param_5[0x22];
        fVar25 = param_3;
        if (1 < (int)uVar13) {
          fVar25 = param_4;
          if (param_3 <= param_4) {
            fVar25 = param_3;
          }
          lVar14 = (*(ulong *)(lVar10 + 0x18) & 0xffffffff) - 2;
          if (lVar14 != 0) {
            pfVar15 = (float *)(lVar10 + 0x28);
            fVar26 = fVar25;
            do {
              fVar25 = *pfVar15;
              if (fVar26 <= *pfVar15) {
                fVar25 = fVar26;
              }
              lVar14 = lVar14 + -1;
              pfVar15 = pfVar15 + 1;
              fVar26 = fVar25;
            } while (lVar14 != 0);
          }
        }
        fVar27 = param_3 - fVar25;
        fVar26 = param_4 - fVar25;
        *(float *)((long)param_5 + 0x114) = fVar25;
        *(float *)(param_5 + 0x23) = fVar25;
      }
      puVar1 = PTR_DAT_08e88588;
      lVar10 = param_5[0x24];
      if (lVar10 != 0) {
        lVar14 = *(long *)(lVar10 + 0x10);
        lVar16 = *(long *)PTR_DAT_08e88588;
                    /* try { // try from 088729a8 to 08972c03 has its CatchHandler @ 088729a8
                       catch() { ... } // from try @ 088729a8 with catch @ 088729a8
                       catch() { ... } // from try @ 08872cc0 with catch @ 088729a8
                       catch() { ... } // from try @ 08872d0c with catch @ 088729a8
                       catch() { ... } // from try @ 08872d6c with catch @ 088729a8
                       catch() { ... } // from try @ 08872d88 with catch @ 088729a8
                       catch() { ... } // from try @ 08872ddc with catch @ 088729a8 */
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 2;
        if (lVar14 != 0) {
          if (*(int *)(lVar14 + 0x18) == 0) {
            FUN_052d9e34(0,param_4,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          else {
            *(undefined4 *)(lVar10 + 0x18) = 1;
            *(undefined4 *)(lVar14 + 0x20) = 0;
            *(float *)(lVar14 + 0x24) = param_4;
          }
          puVar8 = System_Collections_Generic_List<JsonSchemaNode>_TypeInfo;
          puVar7 = System_Collections_Generic_List<JsonProperty>_TypeInfo;
          puVar6 = System_Collections_Generic_List<JsonPosition>_TypeInfo;
          puVar5 = System_Collections_Generic_List<JsonObject>_TypeInfo;
          puVar20 = (undefined8 *)System_Collections_Generic_List<JsonObject>_TypeInfo;
          puVar4 = System_Collections_Generic_List<Item_Heliport>_TypeInfo;
          puVar3 = PTR_DAT_08e88500;
          puVar2 = PTR_DAT_08e88230;
          fVar25 = 0.0;
          do {
            uVar21 = FUN_088726a8(fVar25,param_5,1);
            lVar10 = param_5[0x24];
            if (lVar10 == 0) goto LAB_08873048;
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar16 = *(long *)puVar1;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_08873048;
            uVar13 = *(uint *)(lVar10 + 0x18);
            fVar22 = fVar26 + (float)uVar21;
            uVar23 = (ulong)(uint)fVar22;
            if (uVar13 < *(uint *)(lVar14 + 0x18)) {
              lVar14 = lVar14 + (long)(int)uVar13 * 8;
              *(uint *)(lVar10 + 0x18) = uVar13 + 1;
              *(float *)(lVar14 + 0x20) = fVar27 + fVar25;
              *(float *)(lVar14 + 0x24) = fVar22;
            }
            else {
              FUN_052d9e34(lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70)
                          );
            }
            fVar25 = fVar25 + *(float *)(param_5 + 0x21);
          } while (fVar25 < (float)uVar21);
          Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_SpaceDiscoveryResult>
                    (param_5[0x24],*(undefined8 *)puVar5);
          if (0x7f800000 < ((uint)uVar23 & 0x7fffffff)) {
            lVar10 = param_5[0x24];
            if (lVar10 == 0) goto LAB_08873048;
            FUN_052db534(lVar10,*(int *)(lVar10 + 0x18) + -1,*(undefined8 *)puVar4);
          }
          while (fVar25 = (float)uVar21, 0.0 < fVar25) {
            fVar22 = (float)FUN_088726a8(uVar21,param_5,0);
            lVar10 = param_5[0x24];
            if (lVar10 == 0) goto LAB_08873048;
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar16 = *(long *)puVar1;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_08873048;
            uVar13 = *(uint *)(lVar10 + 0x18);
            uVar23 = (ulong)(uint)(fVar26 + fVar25);
            if (uVar13 < *(uint *)(lVar14 + 0x18)) {
              lVar14 = lVar14 + (long)(int)uVar13 * 8;
              *(uint *)(lVar10 + 0x18) = uVar13 + 1;
              *(float *)(lVar14 + 0x20) = fVar27 + fVar22;
              *(float *)(lVar14 + 0x24) = fVar26 + fVar25;
            }
            else {
              FUN_052d9e34(lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70)
                          );
            }
            uVar21 = (ulong)(uint)(fVar25 - *(float *)(param_5 + 0x21));
          }
          lVar10 = param_5[0x24];
          if (lVar10 != 0) {
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar16 = *(long *)puVar1;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar14 != 0) {
              uVar13 = *(uint *)(lVar10 + 0x18);
              if (uVar13 < *(uint *)(lVar14 + 0x18)) {
                lVar14 = lVar14 + (long)(int)uVar13 * 8;
                *(uint *)(lVar10 + 0x18) = uVar13 + 1;
                *(float *)(lVar14 + 0x20) = param_3;
                *(undefined4 *)(lVar14 + 0x24) = 0;
              }
              else {
                uVar23 = 0;
                FUN_052d9e34(param_3,lVar10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              lVar10 = param_5[0x24];
              if (lVar10 != 0) {
                iVar17 = 1;
                do {
                  if (*(int *)(lVar10 + 0x18) + -1 <= iVar17) {
                    /* try { // try from 08872cb8 to 08972cbf has its CatchHandler @ 08872d14 */
                    uVar11 = FUN_04608898(lVar10,*puVar20);
                    /* try { // try from 08872cc0 to 08972cf7 has its CatchHandler @ 088729a8 */
                    uVar11 = FUN_04624874(uVar11,*(undefined8 *)puVar6);
                    lVar14 = *(long *)puVar8;
                    if (*(int *)(lVar14 + 0xe0) == 0) {
                      thunk_FUN_03cd7500(lVar14);
                      lVar14 = *(long *)puVar8;
                    }
                    lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
                    if (lVar16 == 0) {
                    /* try { // try from 08872cf8 to 08972cfb has its CatchHandler @ 08872d28 */
                    /* try { // try from 08872cfc to 08972cff has its CatchHandler @ 08872d18 */
                      if (*(int *)(lVar14 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 08872c40 with catch @ 08872d0c
                       try { // try from 08872d0c to 08972d4b has its CatchHandler @ 088729a8 */
                    /* catch() { ... } // from try @ 08872d00 with catch @ 08872d10 */
                        thunk_FUN_03cd7500(lVar14);
                    /* catch() { ... } // from try @ 08872cb8 with catch @ 08872d14
                       catch() { ... } // from try @ 08872d04 with catch @ 08872d14 */
                        lVar14 = *(long *)puVar8;
                      }
                    /* catch() { ... } // from try @ 08872c04 with catch @ 08872d18
                       catch() { ... } // from try @ 08872cfc with catch @ 08872d18 */
                    /* catch() { ... } // from try @ 08872c94 with catch @ 08872d24 */
                      uVar19 = **(undefined8 **)(lVar14 + 0xb8);
                    /* catch() { ... } // from try @ 08872cf8 with catch @ 08872d28 */
                    /* catch() { ... } // from try @ 08872c80 with catch @ 08872d2c */
                      lVar16 = thunk_FUN_03cf5234(*(undefined8 *)
                                                   System_Func<OvrGpuSkinnerDrawCall,_bool>_TypeInfo
                                                 );
                    /* catch() { ... } // from try @ 08872c64 with catch @ 08872d30 */
                      FUN_04d64e68(lVar16,uVar19,
                                   *(undefined8 *)
                                    System_Collections_Generic_List<JsonSchema>_TypeInfo,0);
                    /* try { // try from 08872d4c to 08972d4f has its CatchHandler @ 08872db8 */
                      plVar12 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
                      *plVar12 = lVar16;
                      thunk_FUN_03d233cc(plVar12,lVar16);
                    /* try { // try from 08872d64 to 08972d6b has its CatchHandler @ 08872df0 */
                    /* try { // try from 08872d6c to 08972d83 has its CatchHandler @ 088729a8 */
                      puVar20 = (undefined8 *)System_Collections_Generic_List<JsonObject>_TypeInfo;
                    }
                    uVar11 = FUN_0462b98c(uVar11,lVar16,*(undefined8 *)puVar7);
                    /* try { // try from 08872d84 to 08972d87 has its CatchHandler @ 08872dc4 */
                    /* try { // try from 08872d88 to 08972daf has its CatchHandler @ 088729a8 */
                    FUN_052da044(lVar10,uVar11,*(undefined8 *)puVar3);
                    lVar14 = param_5[0x24];
                    uVar11 = FUN_04608898(lVar14,*puVar20);
                    uVar11 = FUN_04624874(uVar11,*(undefined8 *)puVar6);
                    lVar10 = *(long *)puVar8;
                    /* try { // try from 08872db0 to 08972ddb has its CatchHandler @ 08872df0 */
                    /* catch() { ... } // from try @ 08872d4c with catch @ 08872db8 */
                    if (*(int *)(lVar10 + 0xe0) == 0) {
                      thunk_FUN_03cd7500(lVar10);
                    /* catch() { ... } // from try @ 08872d84 with catch @ 08872dc4 */
                      lVar10 = *(long *)puVar8;
                    }
                    lVar16 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
                    if (lVar16 == 0) {
                      if (*(int *)(lVar10 + 0xe0) == 0) {
                    /* try { // try from 08872de8 to 08972def has its CatchHandler @ 08872df0 */
                        thunk_FUN_03cd7500(lVar10);
                    /* catch() { ... } // from try @ 08872d64 with catch @ 08872df0
                       catch() { ... } // from try @ 08872db0 with catch @ 08872df0
                       catch() { ... } // from try @ 08872de8 with catch @ 08872df0 */
                        lVar10 = *(long *)puVar8;
                      }
                      uVar19 = **(undefined8 **)(lVar10 + 0xb8);
                      lVar16 = thunk_FUN_03cf5234(*(undefined8 *)
                                                   System_Func<OvrGpuSkinnerDrawCall,_bool>_TypeInfo
                                                 );
                      FUN_04d64e68(lVar16,uVar19,
                                   *(undefined8 *)
                                    System_Collections_Generic_List<JsonSchemaModel>_TypeInfo,0);
                      plVar12 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x10);
                      *plVar12 = lVar16;
                      thunk_FUN_03d233cc(plVar12,lVar16);
                    }
                    uVar11 = FUN_0462b98c(uVar11,lVar16,*(undefined8 *)puVar7);
                    if ((lVar14 != 0) &&
                       (FUN_052da044(lVar14,uVar11,*(undefined8 *)puVar3), param_6 != 0)) {
                      FUN_087fd08c(param_6,0);
                      puVar1 = PTR_DAT_08e79740;
                      lVar10 = param_5[0x24];
                      if (lVar10 != 0) {
                        iVar17 = 0;
                        iVar18 = 2;
                        goto LAB_08872e94;
                      }
                    }
                    break;
                  }
                  fVar26 = (float)FUN_052d9b30(lVar10,iVar17,*(undefined8 *)puVar2);
                  fVar27 = (float)uVar23;
                  if (param_5[0x24] == 0) break;
                    /* try { // try from 08872c04 to 08972c2b has its CatchHandler @ 08872d18 */
                  FUN_052d9b30(param_5[0x24],iVar17,*(undefined8 *)puVar2);
                  lVar10 = param_5[0x24];
                  if (lVar10 == 0) break;
                  if (fVar27 <= fVar26) {
                    fVar26 = (float)FUN_052d9b30(lVar10,iVar17,*(undefined8 *)puVar2);
                    /* try { // try from 08872c64 to 08972c6b has its CatchHandler @ 08872d30 */
                    if (param_5[0x24] == 0) break;
                    fVar27 = (float)FUN_052d9b30(param_5[0x24],iVar17 + -1,*(undefined8 *)puVar2);
                    uVar23 = (ulong)(uint)*(float *)((long)param_5 + 0x10c);
                    /* try { // try from 08872c80 to 08972c8b has its CatchHandler @ 08872d2c */
                    if (fVar26 - fVar27 < *(float *)((long)param_5 + 0x10c)) goto LAB_08872c8c;
                  }
                  else {
                    FUN_052d9b30(lVar10,iVar17 + -1,*(undefined8 *)puVar2);
                    if (param_5[0x24] == 0) break;
                    fVar26 = fVar27;
                    FUN_052d9b30(param_5[0x24],iVar17,*(undefined8 *)puVar2);
                    /* try { // try from 08872c40 to 08972c47 has its CatchHandler @ 08872d0c */
                    uVar23 = (ulong)(uint)(fVar27 - fVar26);
                    if (fVar27 - fVar26 < *(float *)((long)param_5 + 0x10c)) {
LAB_08872c8c:
                      if (param_5[0x24] == 0) break;
                    /* try { // try from 08872c94 to 08972c9f has its CatchHandler @ 08872d24 */
                      FUN_052db534(param_5[0x24],iVar17,*(undefined8 *)puVar4);
                      iVar17 = iVar17 + -1;
                    }
                  }
                  lVar10 = param_5[0x24];
                  iVar17 = iVar17 + 1;
                } while (lVar10 != 0);
              }
            }
          }
        }
      }
    }
  }
  goto LAB_08873048;
  while( true ) {
    iVar17 = iVar17 + 1;
    uVar11 = FUN_052d9b30(param_5[0x24],iVar17,*(undefined8 *)puVar2);
    (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
    uVar9 = FUN_03dbeecc(0);
    if (DAT_09411abd == '\0') {
      FUN_03c8f898(puVar1);
      DAT_09411abd = '\x01';
    }
    FUN_087fd1a8(uVar11,uVar23,0,**(undefined4 **)(*(long *)puVar1 + 0xb8),
                 (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],0,0,param_6,uVar9,0);
    if (DAT_09411abd == '\0') {
      FUN_03c8f898(puVar1);
      DAT_09411abd = '\x01';
    }
    uVar24 = **(undefined4 **)(*(long *)puVar1 + 0xb8);
    uVar23 = (ulong)(uint)(*(undefined4 **)(*(long *)puVar1 + 0xb8))[1];
    (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
    uVar9 = FUN_03dbeecc(0);
    if (DAT_09411abd == '\0') {
      FUN_03c8f898(puVar1);
      DAT_09411abd = '\x01';
    }
    FUN_087fd1a8(uVar24,uVar23,0,**(undefined4 **)(*(long *)puVar1 + 0xb8),
                 (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],0,0,param_6,uVar9,0);
    FUN_087fd2d8(param_6,iVar18 + -2,iVar18 + -1,iVar18,0);
    lVar10 = param_5[0x24];
    iVar18 = iVar18 + 3;
    if (lVar10 == 0) break;
LAB_08872e94:
    if (*(int *)(lVar10 + 0x18) + -1 <= iVar17) {
      return;
    }
    uVar11 = FUN_052d9b30(lVar10,iVar17,*(undefined8 *)puVar2);
    (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
    uVar9 = FUN_03dbeecc(0);
    if (DAT_09411abd == '\0') {
      FUN_03c8f898(puVar1);
      DAT_09411abd = '\x01';
    }
    FUN_087fd1a8(uVar11,uVar23,0,**(undefined4 **)(*(long *)puVar1 + 0xb8),
                 (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],0,0,param_6,uVar9,0);
    if (param_5[0x24] == 0) break;
  }
LAB_08873048:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


