/*
FUNCTION_NAME: FUN_06384d34
ENTRY_POINT: 06384d34
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x063855b8) */
/* WARNING: Removing unreachable block (ram,0x063858d4) */
/* WARNING: Removing unreachable block (ram,0x063857a0) */

void FUN_06384d34(float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,long *param_9,
                 long param_10,undefined8 *param_11,ulong param_12,long param_13,undefined1 param_14
                 )

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  int *piVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong local_330;
  undefined1 *local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2d8;
  undefined1 *puStack_2d0;
  undefined1 *local_2c8;
  undefined1 *puStack_2c0;
  long local_2b8;
  undefined8 *puStack_2b0;
  long **local_2a8;
  undefined1 *puStack_2a0;
  undefined4 *local_298;
  undefined1 *puStack_290;
  undefined8 *local_288;
  undefined8 *puStack_280;
  undefined8 *local_278;
  undefined8 *puStack_270;
  undefined8 *local_268;
  undefined8 *puStack_260;
  undefined8 *local_258;
  undefined8 *puStack_250;
  undefined8 *local_248;
  undefined1 *puStack_240;
  undefined1 *local_238;
  undefined1 *puStack_230;
  undefined1 *local_228;
  long lStack_220;
  undefined1 *local_218;
  undefined1 *puStack_210;
  undefined4 *local_208;
  undefined8 *puStack_200;
  undefined1 *local_1f8;
  undefined4 *puStack_1f0;
  undefined1 *local_1e8;
  undefined1 *puStack_1e0;
  undefined1 *local_1d8;
  undefined1 *puStack_1d0;
  undefined1 *local_1c8;
  long *plStack_1c0;
  undefined4 *local_1b8;
  int *piStack_1b0;
  int *local_1a8;
  undefined1 *puStack_1a0;
  undefined4 local_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_14c [3];
  undefined4 local_140;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  undefined8 local_f0;
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  long local_e0;
  undefined1 local_d8 [4];
  int local_d4;
  undefined1 local_d0 [4];
  undefined4 local_cc;
  int local_c8;
  undefined1 local_c4 [4];
  long local_c0;
  long *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  
  fVar17 = param_4;
  local_c4[0] = param_14;
  local_c0 = param_10;
  local_b8 = param_9;
  local_b0 = param_5;
  local_ac = param_6;
  local_a8 = param_7;
  local_a4 = param_8;
  fVar18 = param_2;
  fVar19 = param_3;
  if ((DAT_06bcc9ba & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8fb0);
    FUN_02f08768(PTR_DAT_067c8f48);
    FUN_02f08768(PTR_DAT_067ce5d0);
    FUN_02f08768(
                Method_UnityEngine_XR_ARFoundation_InternalUtils_SubsystemUtils_TryGetLoadedSubsystem<XRSessionSubsystem>__
                );
    FUN_02f08768(Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector4>_TypeInfo);
    FUN_02f08768(StringLiteral_8675);
    FUN_02f08768(StringLiteral_8033);
    FUN_02f08768(PTR_DAT_067c9638);
    FUN_02f08768(PTR_DAT_067cc608);
    FUN_02f08768(Method_Oculus_Platform_Message<ProductList>__ctor__);
    FUN_02f08768(StringLiteral_8676);
    FUN_02f08768(StringLiteral_8677);
    DAT_06bcc9ba = 1;
  }
  local_c8 = 0;
  local_cc = 0;
  local_d0[0] = 0;
  local_d4 = 0;
  local_d8[0] = 0;
  local_e0 = 0;
  local_e4[0] = 0;
  local_e8[0] = 0;
  local_f0 = 0;
  local_f4[0] = 0;
  local_f8[0] = 0;
  local_100 = 0;
  local_108 = 0;
  local_10c[0] = 0;
  local_110[0] = 0;
  local_114[0] = 0;
  local_118[0] = 0;
  local_11c[0] = 0;
  local_120[0] = 0;
  local_124[0] = 0;
  local_128[0] = 0;
  local_12c[0] = 0;
  local_130[0] = 0;
  local_134[0] = 0;
  local_138[0] = 0;
  local_140 = 0;
  local_14c[0] = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_194 = 0;
  if (param_13 == 0) {
    return;
  }
  lVar7 = FUN_0623c008(param_9,0);
  if (lVar7 == 0) {
    return;
  }
  local_c8 = FUN_06143350(0);
  puVar2 = 
  Method_UnityEngine_XR_ARFoundation_InternalUtils_SubsystemUtils_TryGetLoadedSubsystem<XRSessionSubsystem>__
  ;
  if (*(int *)(*(long *)
                Method_UnityEngine_XR_ARFoundation_InternalUtils_SubsystemUtils_TryGetLoadedSubsystem<XRSessionSubsystem>__
              + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)
                        Method_UnityEngine_XR_ARFoundation_InternalUtils_SubsystemUtils_TryGetLoadedSubsystem<XRSessionSubsystem>__
                      );
  }
  FUN_06149270(0);
  FUN_06384ab0(param_9);
  fVar14 = (float)FUN_0638417c(param_9);
  fVar15 = (float)FUN_063841a4(param_9);
  uVar8 = FUN_06384114(param_9);
  if (*(int *)(*(long *)PTR_DAT_067cc608 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)PTR_DAT_067cc608);
  }
                    /* try { // try from 06384f5c to 0648502f has its CatchHandler @ 06384f5c
                       catch() { ... } // from try @ 06384f5c with catch @ 06384f5c
                       catch() { ... } // from try @ 0638509c with catch @ 06384f5c
                       catch() { ... } // from try @ 063850c4 with catch @ 06384f5c
                       catch() { ... } // from try @ 063850f0 with catch @ 06384f5c
                       catch() { ... } // from try @ 06385114 with catch @ 06384f5c */
  FUN_06286840(uVar8,param_10,param_9,0);
  uVar16 = FUN_0623c01c(param_9,0);
  if (*(int *)(*(long *)Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector4>_TypeInfo
              + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_06140f40(uVar16,fVar18,fVar19,fVar17,0);
  FUN_0623c1bc(param_9,0);
  FUN_06149238(0);
  lVar7 = FUN_0613ef74(0);
  if (lVar7 == 0) goto LAB_063858d0;
  iVar4 = FUN_0613e484(lVar7,0);
  if (iVar4 != 8) {
    if (*(char *)((long)param_9 + 0x34c) != '\0') {
      lVar7 = (**(code **)(*param_9 + 0x228))(param_9,*(undefined8 *)(*param_9 + 0x230));
      if (lVar7 != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar8 = FUN_0614a0e8(0);
        uVar9 = FUN_06149a1c(uVar8,0);
        if ((uVar9 & 1) != 0) {
                    /* try { // try from 06385030 to 06485037 has its CatchHandler @ 063850cc */
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_0614a150(0,0);
          lVar7 = (**(code **)(*param_9 + 0x228))(param_9,*(undefined8 *)(*param_9 + 0x230));
          if (lVar7 == 0) goto LAB_063858d0;
          *(undefined4 *)(lVar7 + 0x3c) = 0;
        }
      }
      *(undefined1 *)((long)param_9 + 0x34c) = 0;
    }
    puVar3 = PTR_DAT_067ce5d0;
    if (*(char *)((long)param_9 + 0x34d) != '\0') {
                    /* try { // try from 06385074 to 0648509b has its CatchHandler @ 063850d0 */
      if ((char)param_9[0x6b] == '\0') goto LAB_0638528c;
      lVar7 = param_9[0x6a];
      if (*(int *)(*(long *)PTR_DAT_067ce5d0 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (DAT_06bb7dc5 == '\0') {
                    /* try { // try from 0638509c to 064850bf has its CatchHandler @ 06384f5c */
        FUN_02f08768(PTR_DAT_067ce5d0);
        DAT_06bb7dc5 = '\x01';
      }
      lVar10 = *(long *)puVar3;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
                    /* try { // try from 063850c0 to 064850c3 has its CatchHandler @ 063850c8 */
        lVar10 = *(long *)puVar3;
      }
                    /* try { // try from 063850c4 to 064850eb has its CatchHandler @ 06384f5c */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 063850c0 with catch @ 063850c8
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 06385030 with catch @ 063850cc
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 06385074 with catch @ 063850d0
                        */
      if (lVar7 == **(long **)(lVar10 + 0xb8)) {
LAB_06385234:
                    /* try { // try from 06385238 to 06485263 has its CatchHandler @ 06385298 */
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        iVar4 = FUN_0614a0e8(0);
        if ((iVar4 == 0) && (*(char *)((long)param_9 + 0x2ed) != '\0')) {
LAB_06385258:
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 06385264 to 06485287 has its CatchHandler @ 06385120 */
            thunk_FUN_02f6670c();
          }
          FUN_061499a4(0);
        }
      }
      else {
        lVar7 = param_9[0x6a];
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
                    /* try { // try from 063850ec to 064850ef has its CatchHandler @ 06385108 */
        if (DAT_06bcc094 == '\0') {
                    /* try { // try from 063850f0 to 0648510b has its CatchHandler @ 06384f5c */
          FUN_02f08768(PTR_DAT_067ce5d0);
          DAT_06bcc094 = '\x01';
        }
        lVar10 = *(long *)puVar3;
                    /* catch() { ... } // from try @ 063850ec with catch @ 06385108 */
                    /* try { // try from 0638510c to 06485113 has its CatchHandler @ 0638511c */
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
                    /* try { // try from 06385114 to 0648511f has its CatchHandler @ 06384f5c */
          lVar10 = *(long *)puVar3;
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0638510c with catch @ 0638511c
                        */
                    /* try { // try from 06385120 to 064851f3 has its CatchHandler @ 06385120
                       catch() { ... } // from try @ 06385120 with catch @ 06385120
                       catch() { ... } // from try @ 06385264 with catch @ 06385120
                       catch() { ... } // from try @ 0638528c with catch @ 06385120
                       catch() { ... } // from try @ 063852b8 with catch @ 06385120
                       catch() { ... } // from try @ 063852dc with catch @ 06385120 */
        if (lVar7 == *(long *)(*(long *)(lVar10 + 0xb8) + 8)) goto LAB_06385234;
        lVar7 = FUN_0613ef74(0);
        if (lVar7 == 0) goto LAB_063858d0;
        iVar4 = FUN_0613e484(lVar7,0);
        if (iVar4 == 4) {
          lVar7 = FUN_0613ef74(0);
          if (lVar7 == 0) goto LAB_063858d0;
          uVar5 = FUN_0613e010(lVar7,0);
          if ((uVar5 & 0xffef) == 9) {
            lVar7 = FUN_0613ef74(0);
            if (lVar7 == 0) goto LAB_063858d0;
            FUN_06140c08(lVar7,0);
          }
        }
        puVar3 = Method_Oculus_Platform_Message<ProductList>__ctor__;
        lVar7 = param_9[0x6a];
        if (*(int *)(*(long *)Method_Oculus_Platform_Message<ProductList>__ctor__ + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (DAT_06bc1c6a == '\0') {
          FUN_02f08768(Method_Oculus_Platform_Message<ProductList>__ctor__);
          DAT_06bc1c6a = '\x01';
        }
        lVar10 = *(long *)puVar3;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar10 = *(long *)puVar3;
        }
        if (lVar7 != **(long **)(lVar10 + 0xb8)) {
          lVar7 = param_9[0x6a];
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
                    /* try { // try from 063851f4 to 064851fb has its CatchHandler @ 06385294 */
          if (DAT_06bc1c69 == '\0') {
            FUN_02f08768(Method_Oculus_Platform_Message<ProductList>__ctor__);
            DAT_06bc1c69 = '\x01';
          }
          lVar10 = *(long *)puVar3;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar10 = *(long *)puVar3;
          }
          if (lVar7 != *(long *)(*(long *)(lVar10 + 0xb8) + 8)) goto LAB_0638528c;
          goto LAB_06385258;
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
                    /* try { // try from 06385288 to 0648528b has its CatchHandler @ 06385290 */
        FUN_061499cc(0);
      }
LAB_0638528c:
                    /* try { // try from 0638528c to 064852b3 has its CatchHandler @ 06385120 */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 06385288 with catch @ 06385290
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 063851f4 with catch @ 06385294
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 06385238 with catch @ 06385298
                        */
      lVar7 = (**(code **)(*param_9 + 0x228))(param_9,*(undefined8 *)(*param_9 + 0x230));
      if (lVar7 != 0) {
                    /* try { // try from 063852b4 to 064852b7 has its CatchHandler @ 063852d0 */
        lVar7 = (**(code **)(*param_9 + 0x228))(param_9,*(undefined8 *)(*param_9 + 0x230));
                    /* try { // try from 063852b8 to 064852d3 has its CatchHandler @ 06385120 */
        if (lVar7 == 0) goto LAB_063858d0;
        iVar4 = *(int *)(lVar7 + 0x3c);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 063852b4 with catch @ 063852d0 */
          thunk_FUN_02f6670c();
        }
                    /* try { // try from 063852d4 to 064852db has its CatchHandler @ 063852e4 */
        iVar6 = FUN_0614a0e8(0);
        puVar3 = PTR_DAT_067ce5d0;
                    /* try { // try from 063852dc to 064852e7 has its CatchHandler @ 06385120 */
        if (iVar4 != iVar6) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 063852d4 with catch @ 063852e4
                        */
                    /* try { // try from 063852e8 to 064853d7 has its CatchHandler @ 063852e8
                       catch() { ... } // from try @ 063852e8 with catch @ 063852e8
                       catch() { ... } // from try @ 06385450 with catch @ 063852e8
                       catch() { ... } // from try @ 063854b0 with catch @ 063852e8
                       catch() { ... } // from try @ 063854dc with catch @ 063852e8
                       catch() { ... } // from try @ 06385500 with catch @ 063852e8 */
          lVar7 = param_9[0x6a];
          if (*(int *)(*(long *)PTR_DAT_067ce5d0 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (DAT_06bb7dc5 == '\0') {
            FUN_02f08768(PTR_DAT_067ce5d0);
            DAT_06bb7dc5 = '\x01';
          }
          lVar10 = *(long *)puVar3;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar10 = *(long *)puVar3;
          }
          if (lVar7 != **(long **)(lVar10 + 0xb8)) {
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar16 = FUN_0614a0e8(0);
            *(undefined4 *)((long)param_9 + 0x35c) = uVar16;
          }
        }
        lVar7 = (**(code **)(*param_9 + 0x228))(param_9,*(undefined8 *)(*param_9 + 0x230));
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)puVar2);
        }
        uVar16 = FUN_0614a0e8(0);
        if (lVar7 == 0) goto LAB_063858d0;
        *(undefined4 *)(lVar7 + 0x3c) = uVar16;
      }
      puVar2 = PTR_DAT_067ce5d0;
      *(undefined1 *)((long)param_9 + 0x34d) = 0;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (DAT_06bb7dc5 == '\0') {
        FUN_02f08768(PTR_DAT_067ce5d0);
        DAT_06bb7dc5 = '\x01';
      }
      lVar7 = *(long *)puVar2;
                    /* try { // try from 063853d8 to 064853df has its CatchHandler @ 063854b8 */
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar7 = *(long *)puVar2;
      }
      param_9[0x6a] = **(long **)(lVar7 + 0xb8);
    }
  }
  lVar7 = FUN_0613ef74(0);
  if (lVar7 == 0) goto LAB_063858d0;
  local_cc = FUN_0613e484(lVar7,0);
  puStack_2c0 = local_e8;
  local_d0[0] = 1;
  puStack_2d0 = local_c4;
  local_2d8 = 0;
  local_2c8 = local_e4;
                    /* try { // try from 06385420 to 0648544f has its CatchHandler @ 063854bc */
  local_2b8 = (long)&local_f0 + 4;
  puStack_2b0 = &local_f0;
  local_2a8 = &local_b8;
  puStack_2a0 = local_f4;
  local_298 = local_14c;
  puStack_290 = local_f8;
  local_288 = &local_100;
  puStack_280 = &uStack_158;
                    /* try { // try from 06385450 to 064854ab has its CatchHandler @ 063852e8 */
  local_278 = &local_160;
  puStack_270 = &uStack_168;
  local_268 = &local_170;
  puStack_260 = &uStack_178;
  local_258 = &local_180;
  puStack_250 = &uStack_188;
  local_248 = &local_108;
  puStack_240 = local_10c;
  local_238 = local_110;
  puStack_230 = local_114;
  local_228 = local_118;
  lStack_220 = (long)&local_190 + 4;
  local_218 = local_11c;
  puStack_210 = local_120;
  local_208 = &local_cc;
                    /* try { // try from 063854ac to 064854af has its CatchHandler @ 063854b4 */
  puStack_200 = &local_190;
                    /* try { // try from 063854b0 to 064854d7 has its CatchHandler @ 063852e8 */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 063854ac with catch @ 063854b4
                        */
  local_1f8 = local_124;
                    /* catch(type#1 @ 06402238) { ... } // from try @ 063853d8 with catch @ 063854b8
                        */
  puStack_1f0 = &local_194;
                    /* catch(type#1 @ 06402238) { ... } // from try @ 06385420 with catch @ 063854bc
                        */
  uStack_318 = param_11[1];
  local_320 = *param_11;
  uStack_308 = param_11[3];
  uStack_310 = param_11[2];
  local_1e8 = local_128;
  puStack_1e0 = local_12c;
  local_d4 = 0;
  local_1d8 = local_130;
                    /* try { // try from 063854d8 to 064854db has its CatchHandler @ 063854f4 */
  puStack_1d0 = local_d0;
                    /* try { // try from 063854dc to 064854f7 has its CatchHandler @ 063852e8 */
  local_1c8 = local_134;
  plStack_1c0 = &local_c0;
  uStack_2f8 = param_11[5];
  local_300 = param_11[4];
  uStack_2e8 = param_11[7];
  uStack_2f0 = param_11[6];
                    /* catch() { ... } // from try @ 063854d8 with catch @ 063854f4 */
  local_1b8 = &local_b0;
                    /* try { // try from 063854f8 to 064854ff has its CatchHandler @ 06385508 */
  piStack_1b0 = &local_d4;
                    /* try { // try from 06385500 to 0648550b has its CatchHandler @ 063852e8 */
  local_1a8 = &local_c8;
  puStack_1a0 = local_138;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 063854f8 with catch @ 06385508
                        */
                    /* try { // try from 0638550c to 064855ef has its CatchHandler @ 0638550c
                       catch() { ... } // from try @ 0638550c with catch @ 0638550c
                       catch() { ... } // from try @ 0638566c with catch @ 0638550c
                       catch() { ... } // from try @ 063856bc with catch @ 0638550c
                       catch() { ... } // from try @ 063856e8 with catch @ 0638550c
                       catch() { ... } // from try @ 0638570c with catch @ 0638550c */
  local_330 = local_330 & 0xffffffffffffff00;
  FUN_06143500(param_1,param_2,param_3,param_4,&local_330,&local_320,0);
  puVar2 = StringLiteral_8033;
  local_328 = local_d8;
  local_d8[0] = (undefined1)local_330;
  local_330 = 0;
  lVar7 = *(long *)StringLiteral_8033;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar7 = *(long *)puVar2;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x148);
  if (lVar7 != 0) {
    FUN_0609aee8(lVar7,0);
  }
  local_e0 = lVar7;
  (**(code **)(param_13 + 0x18))(*(undefined8 *)(param_13 + 0x40),*(undefined8 *)(param_13 + 0x28));
  if (local_e0 != 0) {
    FUN_0609af70(local_e0,0);
  }
  FUN_06143544(local_328,0);
  if (local_330 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 063858cc with catch @ 063858dc
                        */
    FUN_02f089c0();
  }
  FUN_02f01804(&local_2d8);
                    /* try { // try from 063855f0 to 064855f7 has its CatchHandler @ 063856c4 */
  if (local_c0 == 0) goto LAB_063858d0;
  iVar4 = FUN_0613e484(local_c0,0);
  if (iVar4 == 8) {
    fVar17 = (float)FUN_0638417c(local_b8);
    if (DAT_06bb42c0 == '\0') {
      FUN_02f08768(PTR_DAT_067c8fa8);
      DAT_06bb42c0 = '\x01';
    }
    puVar2 = PTR_DAT_067c8fa8;
    fVar18 = DAT_011b0568;
                    /* try { // try from 06385634 to 0648566b has its CatchHandler @ 063856c8 */
    fVar20 = **(float **)(*(long *)PTR_DAT_067c8fa8 + 0xb8);
    fVar19 = ABS(fVar14);
    if (ABS(fVar14) <= ABS(fVar17)) {
      fVar19 = ABS(fVar17);
    }
                    /* try { // try from 0638566c to 064856b7 has its CatchHandler @ 0638550c */
    fVar1 = fVar19 * DAT_011b0568;
    if (fVar19 * DAT_011b0568 <= fVar20 * 8.0) {
      fVar1 = fVar20 * 8.0;
    }
    fVar17 = ABS(fVar17 - fVar14);
    if (fVar17 < fVar1) {
      fVar17 = (float)FUN_063841a4(local_b8);
      if (DAT_06bb42c0 == '\0') {
        FUN_02f08768(PTR_DAT_067c8fa8);
        DAT_06bb42c0 = '\x01';
      }
                    /* try { // try from 063856b8 to 064856bb has its CatchHandler @ 063856c0 */
                    /* try { // try from 063856bc to 064856e3 has its CatchHandler @ 0638550c */
      fVar20 = **(float **)(*(long *)puVar2 + 0xb8);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 063856b8 with catch @ 063856c0
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 063855f0 with catch @ 063856c4
                        */
      fVar19 = ABS(fVar15);
      if (ABS(fVar15) <= ABS(fVar17)) {
        fVar19 = ABS(fVar17);
      }
                    /* catch(type#1 @ 06402238) { ... } // from try @ 06385634 with catch @ 063856c8
                        */
      fVar1 = fVar19 * fVar18;
      if (fVar19 * fVar18 <= fVar20 * 8.0) {
        fVar1 = fVar20 * 8.0;
      }
      fVar17 = ABS(fVar17 - fVar15);
      fVar14 = fVar15;
                    /* try { // try from 063856e4 to 064856e7 has its CatchHandler @ 06385700 */
      if (fVar17 < fVar1) goto LAB_063857c0;
    }
                    /* try { // try from 063856e8 to 06485703 has its CatchHandler @ 0638550c */
                    /* catch() { ... } // from try @ 063856e4 with catch @ 06385700 */
                    /* try { // try from 06385704 to 0648570b has its CatchHandler @ 06385714 */
                    /* try { // try from 0638570c to 06485717 has its CatchHandler @ 0638550c */
    if (((((param_12 & 1) == 0) || (fVar18 = (float)FUN_060aea14(0), param_1 != fVar18)) ||
        (param_2 != fVar17)) || ((param_3 != fVar20 || (param_4 != fVar14)))) {
      FUN_0623b938(local_b8,8,0);
    }
    else {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06385704 with catch @ 06385714
                        */
                    /* try { // try from 06385718 to 064857eb has its CatchHandler @ 06385718
                       catch() { ... } // from try @ 06385718 with catch @ 06385718
                       catch() { ... } // from try @ 0638585c with catch @ 06385718
                       catch() { ... } // from try @ 06385884 with catch @ 06385718
                       catch() { ... } // from try @ 063858b0 with catch @ 06385718
                       catch() { ... } // from try @ 063858d4 with catch @ 06385718 */
      plVar11 = (long *)FUN_06249390(local_b8,0);
      uVar8 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c8fb0);
      FUN_05054f60(uVar8,local_b8,*(undefined8 *)StringLiteral_8675,0);
      if (plVar11 == (long *)0x0) goto LAB_063858d0;
      lVar7 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_067c9638) {
                    /* try { // try from 0638585c to 0648587f has its CatchHandler @ 06385718 */
            puVar12 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_06385864;
          }
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar9 != 0);
      }
      puVar12 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)PTR_DAT_067c9638,1);
LAB_06385864:
      (*(code *)*puVar12)(plVar11,uVar8,puVar12[1]);
    }
  }
LAB_063857c0:
  if (local_c0 == 0) goto LAB_063858d0;
  iVar4 = FUN_0613e484(local_c0,0);
  if (iVar4 != 0xb) {
    if (local_c0 == 0) goto LAB_063858d0;
    iVar4 = FUN_0613e484(local_c0,0);
                    /* try { // try from 063857ec to 064857f3 has its CatchHandler @ 0638588c */
    if (iVar4 != 0xc) {
      if (local_c8 < local_d4) {
        iVar4 = *(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4);
        puVar12 = (undefined8 *)StringLiteral_8676;
      }
      else {
                    /* try { // try from 06385830 to 0648585b has its CatchHandler @ 06385890 */
        if (local_c8 <= local_d4) goto LAB_06385878;
        iVar4 = *(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4);
        puVar12 = (undefined8 *)StringLiteral_8677;
      }
      if (iVar4 == 0) {
        thunk_FUN_02f6670c();
      }
      UnityEngine_TextCore_Text_TextGenerator__get_m_LineOffset(*puVar12,0);
    }
  }
LAB_06385878:
  if (local_c0 != 0) {
                    /* try { // try from 06385880 to 06485883 has its CatchHandler @ 06385888 */
                    /* try { // try from 06385884 to 064858ab has its CatchHandler @ 06385718 */
    iVar4 = FUN_0613e484(local_c0,0);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 06385880 with catch @ 06385888
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 063857ec with catch @ 0638588c
                        */
    if (iVar4 == 0xc) {
                    /* catch(type#1 @ 06402238) { ... } // from try @ 06385830 with catch @ 06385890
                        */
      FUN_0623b938(local_b8,0x800,0);
    }
                    /* try { // try from 063858ac to 064858af has its CatchHandler @ 063858c8 */
                    /* try { // try from 063858b0 to 064858cb has its CatchHandler @ 06385718 */
                    /* catch() { ... } // from try @ 063858ac with catch @ 063858c8 */
                    /* try { // try from 063858cc to 064858d3 has its CatchHandler @ 063858dc */
    return;
  }
LAB_063858d0:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


