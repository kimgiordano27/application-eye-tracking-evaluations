/*
FUNCTION_NAME: PlayFab.PlayFabCloudScriptAPI$$UnregisterFunction
ENTRY_POINT: 051b0354
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_9;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x051b09b8) */
/* WARNING: Removing unreachable block (ram,0x051b0670) */
/* WARNING: Removing unreachable block (ram,0x051b09cc) */
/* WARNING: Removing unreachable block (ram,0x051b08d8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 PlayFab_PlayFabCloudScriptAPI__UnregisterFunction(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *unaff_x19;
  long *plVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  
  puVar7 = PlayFab_EventsModels_SetTelemetryKeyActiveRequest_var;
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
                    /* try { // try from 051b0358 to 052b035f has its CatchHandler @ 051b04ac */
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  auVar17 = ZEXT816(0);
  auVar6 = ZEXT816(0);
  if (param_1 == 0) {
LAB_051b0998:
    _uStack0000000000000020 = auVar17;
    _uStack0000000000000030 = auVar6;
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  iVar8 = *(int *)(param_1 + 0x20);
                    /* try { // try from 051b0370 to 052b037b has its CatchHandler @ 051b04a4 */
  puVar1 = (undefined8 *)PlayFab_EventsModels_SetTelemetryKeyActiveResponse_var;
  puVar2 = (undefined8 *)PlayFab_ProfilesModels_SetProfileLanguageRequest_var;
  puVar3 = (undefined8 *)PlayFab_ClientModels_SetPlayerSecretResult_var;
  puVar4 = (undefined8 *)System_Resources_RuntimeResourceSet_var;
  puVar5 = (undefined8 *)PTR_DAT_0664c218;
  if (0 < iVar8) {
    do {
      in_stack_00000050 = unaff_x19[0x35];
      thunk_FUN_02d5b8bc(in_stack_00000050,0);
                    /* try { // try from 051b038c to 052b0397 has its CatchHandler @ 051b0490 */
      if (unaff_x19[0x35] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_03a8bc6c(unaff_x19[0x35],*(undefined8 *)puVar7);
                    /* try { // try from 051b03a4 to 052b03c3 has its CatchHandler @ 051b049c */
      FUN_051b0ae0();
      RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(in_stack_00000050,0);
      iVar8 = iVar8 + -1;
      puVar1 = (undefined8 *)PlayFab_EventsModels_SetTelemetryKeyActiveResponse_var;
      puVar2 = (undefined8 *)PlayFab_ProfilesModels_SetProfileLanguageRequest_var;
      puVar3 = (undefined8 *)PlayFab_ClientModels_SetPlayerSecretResult_var;
      puVar4 = (undefined8 *)System_Resources_RuntimeResourceSet_var;
      puVar5 = (undefined8 *)PTR_DAT_0664c218;
    } while (iVar8 != 0);
  }
  while( true ) {
    in_stack_00000048 = unaff_x19[0xc];
    thunk_FUN_02d5b8bc(in_stack_00000048,0);
    lVar11 = unaff_x19[0xc];
                    /* try { // try from 051b0450 to 052b0477 has its CatchHandler @ 051b0480 */
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 051b0248 with catch @ 051b0494 */
      FUN_02d4dee8();
    }
    if (*(int *)(lVar11 + 0x20) < 1) break;
    lVar11 = FUN_03a8bc6c(lVar11,*puVar1);
    RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(in_stack_00000048,0);
    auVar6._8_8_ = uStack0000000000000038;
    auVar6._0_8_ = uStack0000000000000030;
    auVar17._8_8_ = uStack0000000000000028;
    auVar17._0_8_ = uStack0000000000000020;
                    /* try { // try from 051b0478 to 052b047b has its CatchHandler @ 051b04c0 */
                    /* try { // try from 051b047c to 052b047f has its CatchHandler @ 051b04bc */
    if (lVar11 == 0) goto LAB_051b0998;
                    /* catch() { ... } // from try @ 051b0450 with catch @ 051b0480 */
                    /* catch() { ... } // from try @ 051b042c with catch @ 051b0484 */
                    /* catch() { ... } // from try @ 051b0418 with catch @ 051b0488 */
                    /* catch() { ... } // from try @ 051b0404 with catch @ 051b048c */
    (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
                    /* catch() { ... } // from try @ 051b038c with catch @ 051b0490 */
  }
                    /* catch() { ... } // from try @ 051b03e0 with catch @ 051b04d8 */
                    /* catch() { ... } // from try @ 051b03dc with catch @ 051b04dc */
                    /* catch() { ... } // from try @ 051b03d8 with catch @ 051b04e0 */
  RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(in_stack_00000048,0);
                    /* catch() { ... } // from try @ 051b0310 with catch @ 051b04e4 */
  in_stack_00000040 = unaff_x19[0x31];
                    /* catch() { ... } // from try @ 051b02b0 with catch @ 051b04e8 */
  in_stack_00000058 = 0;
  thunk_FUN_02d5b8bc(in_stack_00000040,0);
  lVar11 = unaff_x19[0x31];
  if (lVar11 != 0) {
    uVar16 = 0;
    do {
      if ((int)*(uint *)(lVar11 + 0x18) <= (int)uVar16) {
LAB_051b08b4:
        RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(in_stack_00000040,0);
        if (in_stack_00000058 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          if (*(long *)(in_stack_00000058 + 0x58) != 0) {
            uVar10 = *(undefined4 *)(in_stack_00000058 + 0x54);
            plVar15 = unaff_x19 + 10;
            *plVar15 = in_stack_00000058;
            *(undefined4 *)(unaff_x19 + 9) = uVar10;
            thunk_FUN_02dc1ef0(plVar15);
            auVar17 = _uStack0000000000000020;
            auVar6 = _uStack0000000000000030;
            if (in_stack_00000058 == 0) goto LAB_051b0998;
            (**(code **)(*unaff_x19 + 0x278))();
            unaff_x19[10] = 0;
            thunk_FUN_02dc1ef0(plVar15,0);
            auVar17 = _uStack0000000000000020;
            auVar6 = _uStack0000000000000030;
            if (in_stack_00000058 == 0) goto LAB_051b0998;
            FUN_051b1834();
            auVar17 = _uStack0000000000000020;
            auVar6 = _uStack0000000000000030;
            if (in_stack_00000058 == 0) goto LAB_051b0998;
            FUN_051b18a0();
            uVar10 = 1;
          }
        }
        return uVar10;
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      lVar11 = *(long *)(lVar11 + (long)(int)uVar16 * 8 + 0x20);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar12 = *(long *)(lVar11 + 0x28);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      if (0 < *(int *)(lVar12 + 0x20)) {
        in_stack_00000058 =
             FUN_03a8bc6c(lVar12,*(undefined8 *)
                                  PlayFab_EventsModels_SetTelemetryKeyActiveRequest_var);
        goto LAB_051b08b4;
      }
      if (*(long *)(lVar11 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      iVar8 = FUN_03936a14(*(long *)(lVar11 + 0x20),
                           *(undefined8 *)UnityEngine_UIElements_StyleSheets_ScalableImage_var);
      if (0 < iVar8) {
        if (*(long *)(lVar11 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        auVar17 = FUN_0393699c(*(long *)(lVar11 + 0x20),
                               *(undefined8 *)PlayFab_ProfilesModels_SetProfileLanguageResponse_var)
        ;
        _uStack0000000000000020 = auVar17;
        auVar17 = FUN_03590d9c(&stack0x00000020,
                               *(undefined8 *)PlayFab_ClientModels_SetPlayerSecretRequest_var);
        _uStack0000000000000030 = auVar17;
        iVar8 = 0x7fffffff;
        while( true ) {
          uVar13 = FUN_03590ea0(&stack0x00000030,*puVar3);
          if ((uVar13 & 1) == 0) break;
          iVar9 = FUN_03590e54(&stack0x00000030,*puVar2);
          if (*(long *)(lVar11 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar12 = FUN_03936ca8(*(long *)(lVar11 + 0x20),iVar9,*puVar4);
          if (iVar9 < *(int *)(lVar11 + 0x4c)) {
LAB_051b05f8:
            lVar12 = unaff_x19[2];
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            *(int *)(lVar12 + 0x108) = *(int *)(lVar12 + 0x108) + 1;
            if (unaff_x19[0x32] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            FUN_03a8a65c(unaff_x19[0x32],iVar9,*(undefined8 *)PTR_DAT_0664c220);
          }
          else {
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            if (*(int *)(lVar12 + 0x14) < *(int *)(lVar11 + 0x48)) goto LAB_051b05f8;
            if ((iVar9 < iVar8) && (*(int *)(lVar12 + 0x14) <= *(int *)(lVar11 + 0x48))) {
              iVar8 = iVar9;
            }
          }
        }
        FUN_03590f2c(&stack0x00000030,*(undefined8 *)PlayFab_DataModels_SetObjectsResponse_var);
        lVar12 = *(long *)(lVar11 + 0x20);
        while( true ) {
          lVar14 = unaff_x19[0x32];
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          if (*(int *)(lVar14 + 0x20) < 1) break;
          uVar10 = FUN_03a8a7d8(lVar14,*puVar5);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar14 = FUN_03936ca8(lVar12,uVar10,*puVar4);
          FUN_0393715c(lVar12,uVar10,*(undefined8 *)System_ComponentModel_SByteConverter_var);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          FUN_051b1834(lVar14);
          FUN_051b18a0(lVar14);
        }
        if (iVar8 != 0x7fffffff) {
          if (unaff_x19[2] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          *(int *)(unaff_x19[2] + 0x10c) = iVar8 - *(int *)(lVar11 + 0x4c);
          if (*(long *)(lVar11 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          in_stack_00000058 = FUN_03936ca8(*(long *)(lVar11 + 0x20),iVar8,*puVar4);
        }
        if (in_stack_00000058 == 0) goto LAB_051b0734;
        if (*(long *)(lVar11 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_0393715c(*(long *)(lVar11 + 0x20),*(undefined4 *)(in_stack_00000058 + 0x18),
                     *(undefined8 *)System_ComponentModel_SByteConverter_var);
        if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        *(undefined4 *)(lVar11 + 0x4c) = *(undefined4 *)(in_stack_00000058 + 0x18);
        goto LAB_051b08b4;
      }
      if (in_stack_00000058 == 0) {
LAB_051b0734:
        if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        iVar8 = FUN_03936a14(*(long *)(lVar11 + 0x18),
                             *(undefined8 *)UnityEngine_UIElements_StyleSheets_ScalableImage_var);
        if (0 < iVar8) {
          if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          FUN_03936c30(*(long *)(lVar11 + 0x18),*(int *)(lVar11 + 0x48) + 1,&stack0x00000058,
                       *(undefined8 *)System_RuntimeType_var);
          if (in_stack_00000058 != 0) {
            if (*(char *)(in_stack_00000058 + 0x11) == '\b') {
              if (*(int *)(in_stack_00000058 + 0x38) < 1) {
                iVar8 = *(int *)(in_stack_00000058 + 0x14);
                *(int *)(lVar11 + 0x48) = iVar8 + *(int *)(in_stack_00000058 + 0x28) + -1;
                if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d4dee8();
                }
                FUN_0393715c(*(long *)(lVar11 + 0x18),iVar8,
                             *(undefined8 *)System_ComponentModel_SByteConverter_var);
              }
              else {
                in_stack_00000058 = 0;
              }
            }
            else {
              uVar10 = *(undefined4 *)(in_stack_00000058 + 0x14);
              *(undefined4 *)(lVar11 + 0x48) = uVar10;
              if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              FUN_0393715c(*(long *)(lVar11 + 0x18),uVar10,
                           *(undefined8 *)System_ComponentModel_SByteConverter_var);
            }
            goto LAB_051b08b4;
          }
        }
      }
      lVar11 = unaff_x19[0x31];
      uVar16 = uVar16 + 1;
    } while (lVar11 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


