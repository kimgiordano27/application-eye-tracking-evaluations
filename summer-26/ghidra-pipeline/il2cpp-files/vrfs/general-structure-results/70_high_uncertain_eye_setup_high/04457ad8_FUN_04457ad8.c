/*
FUNCTION_NAME: FUN_04457ad8
ENTRY_POINT: 04457ad8
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_04457ad8(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if ((bRam000000000723ded9 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06dfafe8);
    thunk_FUN_0159f088(PTR_DAT_06e2edd0);
    thunk_FUN_0159f088(PTR_DAT_06de7730);
    thunk_FUN_0159f088(PTR_DAT_06da6ad8);
    thunk_FUN_0159f088(PTR_DAT_06daa068);
    thunk_FUN_0159f088(PTR_DAT_06df73b8);
    thunk_FUN_0159f088(PTR_DAT_06e01990);
    thunk_FUN_0159f088(PTR_DAT_06e673a0);
    thunk_FUN_0159f088(PTR_DAT_06da9da0);
    thunk_FUN_0159f088(PTR_DAT_06e0b5d0);
    thunk_FUN_0159f088(PTR_DAT_06e473e8);
    bRam000000000723ded9 = 1;
  }
  puVar6 = PTR_DAT_06e0b5d0;
  puVar5 = PTR_DAT_06e01990;
  puVar4 = PTR_DAT_06de7730;
  uVar3 = DAT_0534c250;
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar12 = 0;
    plVar1 = (long *)(param_1 + 0x28);
    do {
      iVar2 = *(int *)(param_1 + 0x18);
      if (iVar2 == 2) {
        lVar7 = thunk_FUN_015d056c(*(undefined8 *)puVar5);
        if (lVar7 == 0) {
LAB_044580e4:
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        FUN_051dfe68(lVar7,0);
        lVar8 = FUN_01a256fc(lVar7,*(undefined8 *)PTR_DAT_06e2edd0);
        uVar13 = FUN_051d85c4(0);
        if (lVar8 == 0) goto LAB_044580e4;
        Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
                  (lVar8,uVar13,0);
        lVar8 = FUN_051df7a8(lVar7,0);
        if (lVar8 == 0) goto LAB_044580e4;
        FUN_04f1b500(uVar3,uVar3,uVar3,lVar8,0);
        lVar8 = FUN_051df7a8(lVar7,0);
        uVar13 = FUN_051d3bbc(0xc2be0000,0x42be0000,0);
        uVar14 = FUN_051d3bbc(0xc2be0000,0x42be0000,0);
        if (lVar8 == 0) goto LAB_044580e4;
                    /* try { // try from 04457e38 to 04557e87 has its CatchHandler @ 04457e38
                       catch() { ... } // from try @ 04457e38 with catch @ 04457e38
                       catch() { ... } // from try @ 04457ecc with catch @ 04457e38
                       catch() { ... } // from try @ 04457f04 with catch @ 04457e38
                       catch() { ... } // from try @ 04457f34 with catch @ 04457e38
                       catch() { ... } // from try @ 04457fa8 with catch @ 04457e38 */
        FUN_04f1aa00(uVar13,0x40a00000,uVar14,lVar8,0);
        lVar8 = thunk_FUN_015d056c(*(undefined8 *)puVar5);
        if (lVar8 == 0) goto LAB_044580e4;
        FUN_051dfe68(lVar8,0);
        plVar9 = (long *)FUN_01a256fc(lVar8,*(undefined8 *)PTR_DAT_06da6ad8);
        if (plVar9 == (long *)0x0) goto LAB_044580e4;
        lVar8 = FUN_04ec902c(plVar9,0);
                    /* try { // try from 04457e88 to 04557ecb has its CatchHandler @ 04457f04 */
        uVar13 = FUN_051df7a8(lVar7,0);
        if (lVar8 == 0) goto LAB_044580e4;
        FUN_04f1b7a8(lVar8,uVar13,0,0);
        (**(code **)(*plVar9 + 0x2a8))
                  (0x3f800000,0x3f800000,0,0x3f800000,plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
                    /* try { // try from 04457ecc to 04557ef7 has its CatchHandler @ 04457e38 */
        FUN_04ec7fb8(plVar9,0x402,0);
        FUN_04ec7bc4(0x42c00000,plVar9,0);
                    /* try { // try from 04457ef8 to 04557f03 has its CatchHandler @ 04457f04 */
        (**(code **)(*plVar9 + 0x558))
                  (plVar9,*(undefined8 *)puVar6,*(undefined8 *)(*plVar9 + 0x560));
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 04457e88 with catch @ 04457f04
                       catch(type#1 @ 06a5a440) { ... } // from try @ 04457ef8 with catch @ 04457f04
                       try { // try from 04457f04 to 04557f1b has its CatchHandler @ 04457e38 */
        lVar7 = FUN_01a256fc(lVar7,*(undefined8 *)puVar4);
        *plVar1 = lVar7;
                    /* try { // try from 04457f1c to 04557f33 has its CatchHandler @ 04457fa0 */
        thunk_FUN_01656ef8(plVar1,lVar7);
        if (*plVar1 == 0) goto LAB_044580e4;
        *(undefined4 *)(*plVar1 + 0x6c) = 0;
      }
      else if (iVar2 == 1) {
                    /* try { // try from 04457f34 to 04557f8f has its CatchHandler @ 04457e38 */
        lVar7 = thunk_FUN_015d056c(*(undefined8 *)puVar5);
        if (lVar7 == 0) goto LAB_044580e4;
        FUN_051dfe68(lVar7,0);
        lVar8 = FUN_051df7a8(lVar7,0);
        uVar13 = FUN_051d3bbc(0xc2be0000,0x42be0000,0);
        uVar14 = FUN_051d3bbc(0xc2be0000,0x42be0000,0);
        if (lVar8 == 0) goto LAB_044580e4;
                    /* try { // try from 04457f90 to 04557f9f has its CatchHandler @ 04457fa0 */
        FUN_04f1aa00(uVar13,0x3e800000,uVar14,lVar8,0);
                    /* catch() { ... } // from try @ 04457f1c with catch @ 04457fa0
                       catch() { ... } // from try @ 04457f90 with catch @ 04457fa0 */
                    /* try { // try from 04457fa4 to 04557fa7 has its CatchHandler @ 04457fb0 */
                    /* try { // try from 04457fa8 to 04557fb3 has its CatchHandler @ 04457e38 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04457fa4 with catch @ 04457fb0
                        */
        lVar8 = FUN_01a256fc(lVar7,*(undefined8 *)PTR_DAT_06df73b8);
        uVar13 = FUN_01ebd174(*(undefined8 *)PTR_DAT_06e473e8,*(undefined8 *)PTR_DAT_06da9da0);
        if (lVar8 == 0) goto LAB_044580e4;
        FUN_0204986c(lVar8,uVar13,0);
        lVar10 = FUN_0431ae70(lVar8,*(undefined8 *)PTR_DAT_06dfafe8);
        lVar11 = FUN_02049830(lVar8,0);
        if ((lVar11 == 0) || (uVar13 = FUN_02049eac(lVar11,0), lVar10 == 0)) goto LAB_044580e4;
        FUN_0486b720(lVar10,uVar13,0);
        FUN_020498f4(lVar8,7,0);
        FUN_020498b0(lVar8,0x60,0);
        FUN_020499d4(0x3f800000,0x3f800000,0,0x3f800000,lVar8,0);
        FUN_020497ec(lVar8,*(undefined8 *)puVar6,0);
        lVar7 = FUN_01a256fc(lVar7,*(undefined8 *)puVar4);
        *plVar1 = lVar7;
        thunk_FUN_01656ef8(plVar1,lVar7);
        if (*plVar1 == 0) goto LAB_044580e4;
        *(undefined4 *)(*plVar1 + 0x6c) = 1;
      }
      else {
                    /* try { // try from 04457bfc to 04557c4f has its CatchHandler @ 04457bfc
                       catch() { ... } // from try @ 04457bfc with catch @ 04457bfc
                       catch() { ... } // from try @ 04457cb4 with catch @ 04457bfc
                       catch() { ... } // from try @ 04457ce4 with catch @ 04457bfc
                       catch() { ... } // from try @ 04457d60 with catch @ 04457bfc */
        if (iVar2 == 0) {
          lVar7 = thunk_FUN_015d056c(*(undefined8 *)puVar5);
          if (lVar7 == 0) goto LAB_044580e4;
          FUN_051dfe68(lVar7,0);
          lVar8 = FUN_051df7a8(lVar7,0);
          uVar13 = FUN_051d3bbc(0xc2be0000,0x42be0000,0);
                    /* try { // try from 04457c50 to 04557cb3 has its CatchHandler @ 04457cb4 */
          uVar14 = FUN_051d3bbc(0xc2be0000,0x42be0000,0);
          if (lVar8 == 0) goto LAB_044580e4;
          FUN_04f1aa00(uVar13,0x3e800000,uVar14,lVar8,0);
          plVar9 = (long *)FUN_01a256fc(lVar7,*(undefined8 *)PTR_DAT_06daa068);
          if (plVar9 == (long *)0x0) goto LAB_044580e4;
          (**(code **)(*plVar9 + 0x5f8))(plVar9,1,*(undefined8 *)(*plVar9 + 0x600));
          lVar8 = FUN_04ec902c(plVar9,0);
          if (lVar8 == 0) goto LAB_044580e4;
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 04457c50 with catch @ 04457cb4
                       try { // try from 04457cb4 to 04557ccb has its CatchHandler @ 04457bfc */
          FUN_04f1dae4(0x3f000000,0,lVar8,0);
                    /* try { // try from 04457ccc to 04557ce3 has its CatchHandler @ 04457d58 */
          FUN_04ec7fb8(plVar9,0x402,0);
          FUN_04ec7bc4(0x42c00000,plVar9,0);
                    /* try { // try from 04457ce4 to 04557d47 has its CatchHandler @ 04457bfc */
          lVar8 = plVar9[0x65];
          if (lVar8 == 0) goto LAB_044580e4;
          *(undefined4 *)(lVar8 + 0x18) = 0;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          (**(code **)(*plVar9 + 0x2a8))
                    (0x3f800000,0x3f800000,0,0x3f800000,plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
          (**(code **)(*plVar9 + 0x558))
                    (plVar9,*(undefined8 *)puVar6,*(undefined8 *)(*plVar9 + 0x560));
          FUN_04ec8c34(plVar9,*(undefined1 *)(param_1 + 0x20),0);
                    /* try { // try from 04457d48 to 04557d57 has its CatchHandler @ 04457d58 */
          uVar13 = FUN_01a256fc(lVar7,*(undefined8 *)puVar4);
          *(undefined8 *)(param_1 + 0x28) = uVar13;
                    /* catch() { ... } // from try @ 04457ccc with catch @ 04457d58
                       catch() { ... } // from try @ 04457d48 with catch @ 04457d58 */
                    /* try { // try from 04457d5c to 04557d5f has its CatchHandler @ 04457d68 */
          thunk_FUN_01656ef8(plVar1,uVar13);
                    /* try { // try from 04457d60 to 04557d6b has its CatchHandler @ 04457bfc */
          lVar7 = *(long *)(param_1 + 0x28);
          if (lVar7 == 0) goto LAB_044580e4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04457d5c with catch @ 04457d68
                        */
          *(undefined4 *)(lVar7 + 0x6c) = 0;
          *(undefined1 *)(lVar7 + 0x70) = *(undefined1 *)(param_1 + 0x20);
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_1 + 0x1c));
  }
  return;
}


