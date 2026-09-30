/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleGlobalMeshSpawner$$ReceiveCreatedRoom
ENTRY_POINT: 06dbe744
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner__ReceiveCreatedRoom(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long *in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e7e268);
  FUN_03c8f898(PTR_DAT_08e90850);
  *(undefined1 *)(unaff_x21 + 0xbf8) = 1;
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = (long *)0x0;
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    uVar7 = FUN_06a4e574();
    if ((uVar7 & 1) == 0) {
      lVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e697c0);
      FUN_052124c0(lVar8,*(undefined8 *)PTR_DAT_08e697c8);
      if (*(long *)(unaff_x20 + 0x10) != 0) {
        FUN_06a4e7b0(*(long *)(unaff_x20 + 0x10),*(undefined8 *)PTR_DAT_08e90828);
        puVar5 = PTR_DAT_08e90840;
        puVar4 = PTR_DAT_08e81bd0;
        puVar3 = PTR_DAT_08e69a78;
        puVar2 = PTR_DAT_08e695f0;
        in_stack_00000038 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000000;
        in_stack_00000048 = in_stack_00000018;
        in_stack_00000040 = in_stack_00000010;
        in_stack_00000050 = in_stack_00000020;
        while (uVar7 = FUN_04aa6440(&stack0x00000030,*(undefined8 *)puVar5),
              plVar6 = in_stack_00000048, uVar12 = in_stack_00000040, (uVar7 & 1) != 0) {
          if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar9 = thunk_FUN_03d12a58(in_stack_00000048,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar7 = FUN_07119344(uVar9);
          if ((uVar7 & 1) == 0) {
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            uVar7 = FUN_06db5dc4();
            if ((uVar7 & 1) != 0) {
              plVar11 = (long *)FUN_07103780();
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              uVar7 = FUN_07119344(plVar11,0,0);
              if ((uVar7 & 1) == 0) {
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                uVar7 = FUN_07119344(uVar9,plVar11,0);
                if ((uVar7 & 1) == 0) {
                  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03c8fb30();
                  }
                  uVar7 = (**(code **)(*plVar11 + 0x5d8))(plVar11,*(undefined8 *)(*plVar11 + 0x5e0))
                  ;
                  if (((uVar7 & 1) != 0) && (*plVar6 == *(long *)PTR_DAT_08e69d78)) {
                    if (*(int *)(*(long *)PTR_DAT_08e6b480 + 0xe0) == 0) {
                      thunk_FUN_03cd7500();
                    }
                    uVar7 = FUN_0713951c(plVar11,plVar6,&stack0x00000028,0);
                    if ((uVar7 & 1) != 0) {
                      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03c8fb30();
                      }
                      lVar13 = *(long *)(lVar8 + 0x10);
                      lVar14 = *(long *)puVar3;
                      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03c8fb30();
                      }
                      uVar1 = *(uint *)(lVar8 + 0x18);
                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                        puVar10 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                        *puVar10 = uVar12;
                        thunk_FUN_03d233cc(puVar10,uVar12);
                      }
                      else {
                        FUN_05212cf4(lVar8,uVar12,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                  }
                }
                else {
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03c8fb30();
                  }
                  lVar13 = *(long *)(lVar8 + 0x10);
                  lVar14 = *(long *)puVar3;
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03c8fb30();
                  }
                  uVar1 = *(uint *)(lVar8 + 0x18);
                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                    puVar10 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                    *puVar10 = uVar12;
                    thunk_FUN_03d233cc(puVar10,uVar12);
                  }
                  else {
                    FUN_05212cf4(lVar8,uVar12,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
              }
              else {
                uVar12 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e90850);
                if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                FUN_06df94c0(uVar12,0,0);
              }
            }
          }
          else {
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar13 = *(long *)(lVar8 + 0x10);
            lVar14 = *(long *)puVar3;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              puVar10 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
              *puVar10 = uVar12;
              thunk_FUN_03d233cc(puVar10,uVar12);
            }
            else {
              FUN_05212cf4(lVar8,uVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        FUN_04aa6560(&stack0x00000030,*(undefined8 *)PTR_DAT_08e90838);
        if (*(long *)(unaff_x20 + 0x20) != 0) {
          FUN_06a4e36c();
          return lVar8;
        }
      }
    }
    else if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar8 = FUN_06a4e300();
      return lVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


