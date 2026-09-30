/*
FUNCTION_NAME: FUN_051b0254
ENTRY_POINT: 051b0254
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_14;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x051b09b8) */
/* WARNING: Removing unreachable block (ram,0x051b0670) */
/* WARNING: Removing unreachable block (ram,0x051b09cc) */
/* WARNING: Removing unreachable block (ram,0x051b08d8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_051b0254(long *param_1)

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
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
                    /* try { // try from 051b0260 to 052b027f has its CatchHandler @ 051b04a0 */
  if ((DAT_06a51e08 & 1) == 0) {
    FUN_02d4dc40(PlayFab_DataModels_SetObjectsResponse_var);
                    /* try { // try from 051b0290 to 052b029b has its CatchHandler @ 051b0514 */
    FUN_02d4dc40(PlayFab_ClientModels_SetPlayerSecretRequest_var);
                    /* try { // try from 051b02a0 to 052b02ab has its CatchHandler @ 051b04ec */
    FUN_02d4dc40(PlayFab_ClientModels_SetPlayerSecretResult_var);
    FUN_02d4dc40(PlayFab_ProfilesModels_SetProfileLanguageRequest_var);
                    /* try { // try from 051b02b0 to 052b02bb has its CatchHandler @ 051b04e8 */
    FUN_02d4dc40(System_ComponentModel_SByteConverter_var);
                    /* try { // try from 051b02c0 to 052b02cb has its CatchHandler @ 051b0594 */
    FUN_02d4dc40(System_RuntimeType_var);
    FUN_02d4dc40(UnityEngine_UIElements_StyleSheets_ScalableImage_var);
                    /* try { // try from 051b02dc to 052b02e3 has its CatchHandler @ 051b050c */
    FUN_02d4dc40(System_Resources_RuntimeResourceSet_var);
    FUN_02d4dc40(PlayFab_ProfilesModels_SetProfileLanguageResponse_var);
    FUN_02d4dc40(PlayFab_EventsModels_SetTelemetryKeyActiveRequest_var);
                    /* try { // try from 051b02f8 to 052b0303 has its CatchHandler @ 051b04cc */
    FUN_02d4dc40(PlayFab_EventsModels_SetTelemetryKeyActiveResponse_var);
    FUN_02d4dc40(PTR_DAT_0664c218);
                    /* try { // try from 051b0310 to 052b032f has its CatchHandler @ 051b04e4 */
    FUN_02d4dc40(PTR_DAT_0664c220);
    FUN_02d4dc40(UnityEngine_InputSystem_Processors_ScaleProcessor_var);
    FUN_02d4dc40(UnityEngine_UIElements_SetupDragAndDropArgs_var);
                    /* try { // try from 051b0338 to 052b0347 has its CatchHandler @ 051b04bc */
    FUN_02d4dc40(PTR_DAT_0664c228);
    DAT_06a51e08 = 1;
  }
  puVar7 = PlayFab_EventsModels_SetTelemetryKeyActiveRequest_var;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  auVar18 = ZEXT816(0);
  auVar6 = ZEXT816(0);
  if (param_1[0x35] != 0) {
    iVar8 = *(int *)(param_1[0x35] + 0x20);
    puVar1 = (undefined8 *)PlayFab_EventsModels_SetTelemetryKeyActiveResponse_var;
    puVar2 = (undefined8 *)PlayFab_ProfilesModels_SetProfileLanguageRequest_var;
    puVar3 = (undefined8 *)PlayFab_ClientModels_SetPlayerSecretResult_var;
    puVar4 = (undefined8 *)System_Resources_RuntimeResourceSet_var;
    puVar5 = (undefined8 *)PTR_DAT_0664c218;
    if (0 < iVar8) {
      do {
        local_70 = param_1[0x35];
        thunk_FUN_02d5b8bc(local_70,0);
        if (param_1[0x35] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        uVar11 = FUN_03a8bc6c(param_1[0x35],*(undefined8 *)puVar7);
        FUN_051b0ae0(param_1,uVar11);
        RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(local_70,0);
        iVar8 = iVar8 + -1;
        puVar1 = (undefined8 *)PlayFab_EventsModels_SetTelemetryKeyActiveResponse_var;
        puVar2 = (undefined8 *)PlayFab_ProfilesModels_SetProfileLanguageRequest_var;
        puVar3 = (undefined8 *)PlayFab_ClientModels_SetPlayerSecretResult_var;
        puVar4 = (undefined8 *)System_Resources_RuntimeResourceSet_var;
        puVar5 = (undefined8 *)PTR_DAT_0664c218;
      } while (iVar8 != 0);
    }
    while( true ) {
      local_78 = param_1[0xc];
      thunk_FUN_02d5b8bc(local_78,0);
      lVar12 = param_1[0xc];
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      if (*(int *)(lVar12 + 0x20) < 1) break;
      lVar12 = FUN_03a8bc6c(lVar12,*puVar1);
      RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(local_78,0);
      auVar6._8_8_ = local_90._8_8_;
      auVar6._0_8_ = local_90._0_8_;
      auVar18._8_8_ = local_a0._8_8_;
      auVar18._0_8_ = local_a0._0_8_;
      if (lVar12 == 0) goto LAB_051b0998;
      (**(code **)(lVar12 + 0x18))(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
    }
    RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(local_78,0);
    local_80 = param_1[0x31];
    local_68 = 0;
    thunk_FUN_02d5b8bc(local_80,0);
    lVar12 = param_1[0x31];
    if (lVar12 != 0) {
      uVar17 = 0;
      do {
        if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar17) {
LAB_051b08b4:
          RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(local_80,0);
          if (local_68 == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            if (*(long *)(local_68 + 0x58) != 0) {
              uVar10 = *(undefined4 *)(local_68 + 0x54);
              plVar16 = param_1 + 10;
              *plVar16 = local_68;
              *(undefined4 *)(param_1 + 9) = uVar10;
              thunk_FUN_02dc1ef0(plVar16);
              auVar18 = local_a0;
              auVar6 = local_90;
              if (local_68 == 0) goto LAB_051b0998;
              (**(code **)(*param_1 + 0x278))
                        (param_1,*(undefined8 *)(local_68 + 0x58),*(undefined8 *)(*param_1 + 0x280))
              ;
              param_1[10] = 0;
              thunk_FUN_02dc1ef0(plVar16,0);
              auVar18 = local_a0;
              auVar6 = local_90;
              if (local_68 == 0) goto LAB_051b0998;
              FUN_051b1834();
              auVar18 = local_a0;
              auVar6 = local_90;
              if (local_68 == 0) goto LAB_051b0998;
              FUN_051b18a0();
              uVar10 = 1;
            }
          }
          return uVar10;
        }
        if (*(uint *)(lVar12 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4def0();
        }
        lVar12 = *(long *)(lVar12 + (long)(int)uVar17 * 8 + 0x20);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar13 = *(long *)(lVar12 + 0x28);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        if (0 < *(int *)(lVar13 + 0x20)) {
          local_68 = FUN_03a8bc6c(lVar13,*(undefined8 *)
                                          PlayFab_EventsModels_SetTelemetryKeyActiveRequest_var);
          goto LAB_051b08b4;
        }
        if (*(long *)(lVar12 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        iVar8 = FUN_03936a14(*(long *)(lVar12 + 0x20),
                             *(undefined8 *)UnityEngine_UIElements_StyleSheets_ScalableImage_var);
        if (0 < iVar8) {
          if (*(long *)(lVar12 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          auVar18 = FUN_0393699c(*(long *)(lVar12 + 0x20),
                                 *(undefined8 *)
                                  PlayFab_ProfilesModels_SetProfileLanguageResponse_var);
          local_a0 = auVar18;
          auVar18 = FUN_03590d9c(local_a0,*(undefined8 *)
                                           PlayFab_ClientModels_SetPlayerSecretRequest_var);
          local_90 = auVar18;
          iVar8 = 0x7fffffff;
          while( true ) {
            uVar14 = FUN_03590ea0(local_90,*puVar3);
            if ((uVar14 & 1) == 0) break;
            iVar9 = FUN_03590e54(local_90,*puVar2);
            if (*(long *)(lVar12 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            lVar13 = FUN_03936ca8(*(long *)(lVar12 + 0x20),iVar9,*puVar4);
            if (iVar9 < *(int *)(lVar12 + 0x4c)) {
LAB_051b05f8:
              lVar13 = param_1[2];
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              *(int *)(lVar13 + 0x108) = *(int *)(lVar13 + 0x108) + 1;
              if (param_1[0x32] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              FUN_03a8a65c(param_1[0x32],iVar9,*(undefined8 *)PTR_DAT_0664c220);
            }
            else {
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              if (*(int *)(lVar13 + 0x14) < *(int *)(lVar12 + 0x48)) goto LAB_051b05f8;
              if ((iVar9 < iVar8) && (*(int *)(lVar13 + 0x14) <= *(int *)(lVar12 + 0x48))) {
                iVar8 = iVar9;
              }
            }
          }
          FUN_03590f2c(local_90,*(undefined8 *)PlayFab_DataModels_SetObjectsResponse_var);
          lVar13 = *(long *)(lVar12 + 0x20);
          while( true ) {
            lVar15 = param_1[0x32];
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            if (*(int *)(lVar15 + 0x20) < 1) break;
            uVar10 = FUN_03a8a7d8(lVar15,*puVar5);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            lVar15 = FUN_03936ca8(lVar13,uVar10,*puVar4);
            FUN_0393715c(lVar13,uVar10,*(undefined8 *)System_ComponentModel_SByteConverter_var);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            FUN_051b1834(lVar15);
            FUN_051b18a0(lVar15);
          }
          if (iVar8 != 0x7fffffff) {
            if (param_1[2] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            *(int *)(param_1[2] + 0x10c) = iVar8 - *(int *)(lVar12 + 0x4c);
            if (*(long *)(lVar12 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            local_68 = FUN_03936ca8(*(long *)(lVar12 + 0x20),iVar8,*puVar4);
          }
          if (local_68 == 0) goto LAB_051b0734;
          if (*(long *)(lVar12 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          FUN_0393715c(*(long *)(lVar12 + 0x20),*(undefined4 *)(local_68 + 0x18),
                       *(undefined8 *)System_ComponentModel_SByteConverter_var);
          if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          *(undefined4 *)(lVar12 + 0x4c) = *(undefined4 *)(local_68 + 0x18);
          goto LAB_051b08b4;
        }
        if (local_68 == 0) {
LAB_051b0734:
          if (*(long *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          iVar8 = FUN_03936a14(*(long *)(lVar12 + 0x18),
                               *(undefined8 *)UnityEngine_UIElements_StyleSheets_ScalableImage_var);
          if (0 < iVar8) {
            if (*(long *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            FUN_03936c30(*(long *)(lVar12 + 0x18),*(int *)(lVar12 + 0x48) + 1,&local_68,
                         *(undefined8 *)System_RuntimeType_var);
            if (local_68 != 0) {
              if (*(char *)(local_68 + 0x11) == '\b') {
                if (*(int *)(local_68 + 0x38) < 1) {
                  iVar8 = *(int *)(local_68 + 0x14);
                  *(int *)(lVar12 + 0x48) = iVar8 + *(int *)(local_68 + 0x28) + -1;
                  if (*(long *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d4dee8();
                  }
                  FUN_0393715c(*(long *)(lVar12 + 0x18),iVar8,
                               *(undefined8 *)System_ComponentModel_SByteConverter_var);
                }
                else {
                  local_68 = 0;
                }
              }
              else {
                uVar10 = *(undefined4 *)(local_68 + 0x14);
                *(undefined4 *)(lVar12 + 0x48) = uVar10;
                if (*(long *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d4dee8();
                }
                FUN_0393715c(*(long *)(lVar12 + 0x18),uVar10,
                             *(undefined8 *)System_ComponentModel_SByteConverter_var);
              }
              goto LAB_051b08b4;
            }
          }
        }
        lVar12 = param_1[0x31];
        uVar17 = uVar17 + 1;
      } while (lVar12 != 0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
LAB_051b0998:
  local_a0 = auVar18;
  local_90 = auVar6;
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


