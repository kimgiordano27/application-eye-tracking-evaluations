/*
FUNCTION_NAME: PlayFab.PlayFabCloudScriptInstanceAPI$$.ctor
ENTRY_POINT: 051b04ec
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x051b09b8) */
/* WARNING: Removing unreachable block (ram,0x051b0670) */
/* WARNING: Removing unreachable block (ram,0x051b09cc) */
/* WARNING: Removing unreachable block (ram,0x051b08d8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 PlayFab_PlayFabCloudScriptInstanceAPI___ctor(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *unaff_x19;
  long *plVar8;
  undefined8 *unaff_x24;
  uint uVar9;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 uStack0000000000000040;
  long lStack0000000000000058;
  
                    /* catch() { ... } // from try @ 051b02a0 with catch @ 051b04ec */
  lStack0000000000000058 = 0;
  uStack0000000000000040 = param_1;
                    /* catch() { ... } // from try @ 051b0154 with catch @ 051b04f0 */
                    /* catch() { ... } // from try @ 051b0004 with catch @ 051b04f4 */
  thunk_FUN_02d5b8bc();
                    /* catch() { ... } // from try @ 051b01a0 with catch @ 051b04f8 */
  lVar7 = unaff_x19[0x31];
                    /* catch() { ... } // from try @ 051aff94 with catch @ 051b04fc */
                    /* catch() { ... } // from try @ 051b03cc with catch @ 051b0500 */
                    /* catch() { ... } // from try @ 051aff14 with catch @ 051b0504 */
  if (lVar7 != 0) {
                    /* catch() { ... } // from try @ 051b0128 with catch @ 051b0508 */
    uVar9 = 0;
    do {
                    /* catch() { ... } // from try @ 051b02dc with catch @ 051b050c */
                    /* catch() { ... } // from try @ 051b03c8 with catch @ 051b0510 */
                    /* catch() { ... } // from try @ 051b0290 with catch @ 051b0514
                       catch() { ... } // from try @ 051b03d4 with catch @ 051b0514 */
      if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar9) goto LAB_051b08b4;
                    /* catch() { ... } // from try @ 051b01c8 with catch @ 051b0518
                       catch() { ... } // from try @ 051b03d0 with catch @ 051b0518 */
      if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
                    /* try { // try from 051b051c to 052b0527 has its CatchHandler @ 051b0594 */
      lVar7 = *(long *)(lVar7 + (long)(int)uVar9 * 8 + 0x20);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar4 = *(long *)(lVar7 + 0x28);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
                    /* try { // try from 051b0538 to 052b053f has its CatchHandler @ 051b058c */
      if (0 < *(int *)(lVar4 + 0x20)) {
        lStack0000000000000058 =
             FUN_03a8bc6c(lVar4,*(undefined8 *)PlayFab_EventsModels_SetTelemetryKeyActiveRequest_var
                         );
        goto LAB_051b08b4;
      }
                    /* try { // try from 051b0540 to 052b0587 has its CatchHandler @ 051afde8 */
      if (*(long *)(lVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      iVar1 = FUN_03936a14(*(long *)(lVar7 + 0x20),
                           *(undefined8 *)UnityEngine_UIElements_StyleSheets_ScalableImage_var);
      if (iVar1 < 1) {
        if (lStack0000000000000058 == 0) goto LAB_051b0734;
      }
      else {
        if (*(long *)(lVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        auVar10 = FUN_0393699c(*(long *)(lVar7 + 0x20),
                               *(undefined8 *)PlayFab_ProfilesModels_SetProfileLanguageResponse_var)
        ;
        _in_stack_00000020 = auVar10;
        auVar10 = FUN_03590d9c(&stack0x00000020,
                               *(undefined8 *)PlayFab_ClientModels_SetPlayerSecretRequest_var);
        _in_stack_00000030 = auVar10;
        iVar1 = 0x7fffffff;
        while( true ) {
          uVar5 = FUN_03590ea0(&stack0x00000030,*unaff_x29);
          if ((uVar5 & 1) == 0) break;
          iVar2 = FUN_03590e54(&stack0x00000030,*unaff_x27);
          if (*(long *)(lVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar4 = FUN_03936ca8(*(long *)(lVar7 + 0x20),iVar2,*unaff_x28);
          if (iVar2 < *(int *)(lVar7 + 0x4c)) {
LAB_051b05f8:
            lVar4 = unaff_x19[2];
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            *(int *)(lVar4 + 0x108) = *(int *)(lVar4 + 0x108) + 1;
            if (unaff_x19[0x32] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            FUN_03a8a65c(unaff_x19[0x32],iVar2,*(undefined8 *)PTR_DAT_0664c220);
          }
          else {
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            if (*(int *)(lVar4 + 0x14) < *(int *)(lVar7 + 0x48)) goto LAB_051b05f8;
            if ((iVar2 < iVar1) && (*(int *)(lVar4 + 0x14) <= *(int *)(lVar7 + 0x48))) {
              iVar1 = iVar2;
            }
          }
        }
        FUN_03590f2c(&stack0x00000030,*(undefined8 *)PlayFab_DataModels_SetObjectsResponse_var);
        lVar4 = *(long *)(lVar7 + 0x20);
        while( true ) {
          lVar6 = unaff_x19[0x32];
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          if (*(int *)(lVar6 + 0x20) < 1) break;
          uVar3 = FUN_03a8a7d8(lVar6,*unaff_x24);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar6 = FUN_03936ca8(lVar4,uVar3,*unaff_x28);
          FUN_0393715c(lVar4,uVar3,*(undefined8 *)System_ComponentModel_SByteConverter_var);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          FUN_051b1834(lVar6);
          FUN_051b18a0(lVar6);
        }
        if (iVar1 != 0x7fffffff) {
          if (unaff_x19[2] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          *(int *)(unaff_x19[2] + 0x10c) = iVar1 - *(int *)(lVar7 + 0x4c);
          if (*(long *)(lVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lStack0000000000000058 = FUN_03936ca8(*(long *)(lVar7 + 0x20),iVar1,*unaff_x28);
        }
        if (lStack0000000000000058 != 0) {
          if (*(long *)(lVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          FUN_0393715c(*(long *)(lVar7 + 0x20),*(undefined4 *)(lStack0000000000000058 + 0x18),
                       *(undefined8 *)System_ComponentModel_SByteConverter_var);
          if (lStack0000000000000058 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          *(undefined4 *)(lVar7 + 0x4c) = *(undefined4 *)(lStack0000000000000058 + 0x18);
          goto LAB_051b08b4;
        }
LAB_051b0734:
        if (*(long *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        iVar1 = FUN_03936a14(*(long *)(lVar7 + 0x18),
                             *(undefined8 *)UnityEngine_UIElements_StyleSheets_ScalableImage_var);
        if (0 < iVar1) {
          if (*(long *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          FUN_03936c30(*(long *)(lVar7 + 0x18),*(int *)(lVar7 + 0x48) + 1,&stack0x00000058,
                       *(undefined8 *)System_RuntimeType_var);
          if (lStack0000000000000058 != 0) {
            if (*(char *)(lStack0000000000000058 + 0x11) == '\b') {
              if (*(int *)(lStack0000000000000058 + 0x38) < 1) {
                iVar1 = *(int *)(lStack0000000000000058 + 0x14);
                *(int *)(lVar7 + 0x48) = iVar1 + *(int *)(lStack0000000000000058 + 0x28) + -1;
                if (*(long *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d4dee8();
                }
                FUN_0393715c(*(long *)(lVar7 + 0x18),iVar1,
                             *(undefined8 *)System_ComponentModel_SByteConverter_var);
              }
              else {
                lStack0000000000000058 = 0;
              }
            }
            else {
              uVar3 = *(undefined4 *)(lStack0000000000000058 + 0x14);
              *(undefined4 *)(lVar7 + 0x48) = uVar3;
              if (*(long *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              FUN_0393715c(*(long *)(lVar7 + 0x18),uVar3,
                           *(undefined8 *)System_ComponentModel_SByteConverter_var);
            }
LAB_051b08b4:
            RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(uStack0000000000000040,0);
            if ((lStack0000000000000058 != 0) && (*(long *)(lStack0000000000000058 + 0x58) != 0)) {
              uVar3 = *(undefined4 *)(lStack0000000000000058 + 0x54);
              plVar8 = unaff_x19 + 10;
              *plVar8 = lStack0000000000000058;
              *(undefined4 *)(unaff_x19 + 9) = uVar3;
              thunk_FUN_02dc1ef0(plVar8);
              if (lStack0000000000000058 != 0) {
                (**(code **)(*unaff_x19 + 0x278))();
                unaff_x19[10] = 0;
                thunk_FUN_02dc1ef0(plVar8,0);
                if (lStack0000000000000058 != 0) {
                  FUN_051b1834();
                  if (lStack0000000000000058 != 0) {
                    FUN_051b18a0();
                    return 1;
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            return 0;
          }
        }
      }
      lVar7 = unaff_x19[0x31];
      uVar9 = uVar9 + 1;
    } while (lVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


