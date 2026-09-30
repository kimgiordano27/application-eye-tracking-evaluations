/*
FUNCTION_NAME: OVRPlugin$$set_tiledMultiResLevel
ENTRY_POINT: 05672b98
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05672f00) */

void OVRPlugin__set_tiledMultiResLevel(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long *unaff_x19;
  long lVar9;
  long unaff_x20;
  long *plVar10;
  int iVar11;
  long unaff_x21;
  ulong in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  long in_stack_00000058;
  undefined8 *in_stack_00000060;
  long *in_stack_00000068;
  ulong in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000090;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  FUN_02d965b8();
  FUN_02d965b8(System_Collections_Generic_List<LobbyPlayerJoined>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<LocalDataStore>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<LocalKeyword>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x67a) = 1;
  puVar1 = PTR_DAT_06a0f1a0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_00000090 = 0;
  in_stack_00000068 = (long *)0x0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  if (unaff_x19[0x33] != 0) {
    if (unaff_x19[0x32] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(int *)(unaff_x19[0x32] + 0x18) != 0) {
      if (*(int *)(*(long *)PTR_DAT_06a0f1a0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      in_stack_000000c8 = FUN_0564de84(0xe,0);
      puVar3 = System_Collections_Generic_List<LocalKeyword>_TypeInfo;
      puVar2 = System_Collections_Generic_List<LocalDataStore>_TypeInfo;
      in_stack_00000060 = &stack0x000000c8;
      in_stack_00000058 = 0;
      if (*(long *)(unaff_x20 + 0x10) != 0) {
        lVar4 = unaff_x19[0x32];
        if (lVar4 != 0) {
          iVar11 = 0;
          do {
            if (*(int *)(lVar4 + 0x18) <= iVar11) goto LAB_05672d54;
            FUN_04018b68(&stack0x00000030,lVar4,iVar11,*(undefined8 *)puVar2);
            FUN_0569edf0(&stack0x00000030,
                         *(long *)(unaff_x20 + 0x10) + (in_stack_00000030 >> 0x20) * 0x28,0);
            in_stack_000000c0 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
            in_stack_000000a8 = in_stack_00000038;
            in_stack_000000a0 = in_stack_00000030;
            in_stack_000000b8 = in_stack_00000048;
            in_stack_000000b0 = in_stack_00000040;
            uVar5 = FUN_056a0370(&stack0x000000a0,0);
            if ((uVar5 & 1) != 0) {
              uVar6 = (**(code **)(*unaff_x19 + 0x188))();
              FUN_05657bf4(&stack0x00000030,uVar6,0);
              in_stack_000000c0 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
              in_stack_000000a8 = in_stack_00000038;
              in_stack_000000a0 = in_stack_00000030;
              in_stack_000000b8 = in_stack_00000048;
              in_stack_000000b0 = in_stack_00000040;
            }
            lVar4 = unaff_x19[0x32];
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_04018b68(&stack0x00000030,lVar4,iVar11,*(undefined8 *)puVar2);
            in_stack_00000090 = uStack0000000000000050;
            in_stack_00000078 = in_stack_00000038;
            in_stack_00000070 = in_stack_00000030;
            in_stack_00000088 = in_stack_00000048;
            in_stack_00000080 = in_stack_00000040;
            FUN_0567cef8();
            uStack0000000000000050 = 0;
            in_stack_00000038 = (undefined8 *)0x0;
            in_stack_00000030 = 0;
            in_stack_00000048 = 0;
            in_stack_00000040 = 0;
            FUN_04018bd0(lVar4,iVar11,&stack0x00000030,*(undefined8 *)puVar3);
            lVar4 = unaff_x19[0x32];
            iVar11 = iVar11 + 1;
          } while (lVar4 != 0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
LAB_05672d54:
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      in_stack_00000068 = (long *)FUN_0564de84(0xf,0);
      plVar10 = (long *)unaff_x19[0x33];
      in_stack_00000038 = &stack0x00000068;
      in_stack_00000030 = 0;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar4 = *plVar10;
      lVar9 = unaff_x19[0x32];
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)System_Collections_Generic_List<ERSideWalkInstance>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05672ddc;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02dd004c(plVar10,*(long *)
                                     System_Collections_Generic_List<ERSideWalkInstance>_TypeInfo,0)
      ;
LAB_05672ddc:
      (*(code *)*puVar7)(plVar10,lVar9,puVar7[1]);
      plVar10 = in_stack_00000068;
      if (in_stack_00000068 != (long *)0x0) {
        lVar4 = *in_stack_00000068;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_05672e50;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_02dd004c(in_stack_00000068,*(long *)PTR_DAT_069fbff0,0);
LAB_05672e50:
        (*(code *)*puVar7)(plVar10,puVar7[1]);
      }
      plVar10 = (long *)*in_stack_00000060;
      if (plVar10 != (long *)0x0) {
        lVar4 = *plVar10;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_05672ec0;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)PTR_DAT_069fbff0,0);
LAB_05672ec0:
        (*(code *)*puVar7)(plVar10,puVar7[1]);
      }
      if (in_stack_00000058 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858();
      }
    }
  }
  return;
}


