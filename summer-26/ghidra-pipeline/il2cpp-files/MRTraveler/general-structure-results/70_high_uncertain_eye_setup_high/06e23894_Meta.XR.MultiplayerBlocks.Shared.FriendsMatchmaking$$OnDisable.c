/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking$$OnDisable
ENTRY_POINT: 06e23894
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__OnDisable(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  long unaff_x20;
  ulong uVar15;
  long lVar16;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e93690);
  FUN_03c8f898(PTR_DAT_08e699d0);
  FUN_03c8f898(PTR_DAT_08e6a338);
  FUN_03c8f898(PTR_DAT_08e7e268);
  FUN_03c8f898(PTR_DAT_08e7e248);
  FUN_03c8f898(PTR_DAT_08e93698);
  FUN_03c8f898(PTR_DAT_08e936a0);
  FUN_03c8f898(PTR_DAT_08e936a8);
  *(undefined1 *)(unaff_x20 + 0x50) = 1;
  if (*(long *)(unaff_x19 + 0x28) == 0) {
    return;
  }
  lVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6a338);
  FUN_06f82b08(lVar7,0);
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_0699d86c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_08e93688);
    puVar5 = PTR_DAT_08e936a8;
    puVar4 = PTR_DAT_08e93690;
    puVar3 = PTR_DAT_08e7e280;
    puVar2 = PTR_DAT_08e699d0;
    lVar13 = *(long *)(unaff_x19 + 0x28);
    if (lVar13 != 0) {
      lVar16 = 0;
      uVar15 = 0;
      do {
        if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar15) {
          FUN_06e23e14();
          if (lVar7 != 0) {
            iVar6 = FUN_06f7cb5c(lVar7,0);
            if (iVar6 < 1) {
              return;
            }
            plVar12 = (long *)thunk_FUN_03d12a58();
            if (plVar12 != (long *)0x0) {
              uVar9 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
              uVar10 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e93698,lVar7,0);
              if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
                thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
              }
              FUN_06dfdedc(uVar9,uVar10,0,0);
              return;
            }
          }
          break;
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        lVar14 = *(long *)(lVar13 + lVar16 + 0x28);
        if ((lVar14 == 0) || (*(long *)(lVar14 + 0x18) == 0)) {
          uStack000000000000000c = (int)uVar15;
          uVar9 = thunk_FUN_03cf4e64(*(undefined8 *)puVar2,(long)&stack0x00000008 + 4);
          uVar9 = FUN_06f6be0c(*(undefined8 *)puVar5,uVar9,0);
          if (lVar7 == 0) break;
LAB_06e23a68:
          FUN_06f84868(lVar7,uVar9,0);
        }
        else {
          if (*(long *)(unaff_x19 + 0x30) == 0) break;
          uVar1 = *(undefined4 *)(lVar13 + lVar16 + 0x20);
          uVar8 = FUN_0699d8d8(*(long *)(unaff_x19 + 0x30),uVar1,*(undefined8 *)puVar3);
          if ((uVar8 & 1) != 0) {
            uStack000000000000000c = (int)uVar15;
            uVar9 = thunk_FUN_03cf4e64(*(undefined8 *)puVar2,(long)&stack0x00000008 + 4);
            uStack0000000000000008 = uVar1;
            uVar10 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e7e248,&stack0x00000008);
            if (*(long *)(unaff_x19 + 0x30) != 0) {
              in_stack_00000000._4_4_ =
                   FUN_0699d650(*(long *)(unaff_x19 + 0x30),uVar1,*(undefined8 *)PTR_DAT_08e7e288);
              uVar11 = thunk_FUN_03cf4e64(*(undefined8 *)puVar2,(long)&stack0x00000000 + 4);
              uVar9 = FUN_06f75284(*(undefined8 *)PTR_DAT_08e936a0,uVar9,uVar10,uVar11,0);
              if (lVar7 != 0) goto LAB_06e23a68;
            }
            break;
          }
          if (*(long *)(unaff_x19 + 0x30) == 0) break;
          FUN_0699d6d8(*(long *)(unaff_x19 + 0x30),uVar1,uVar15 & 0xffffffff,*(undefined8 *)puVar4);
        }
        lVar13 = *(long *)(unaff_x19 + 0x28);
        uVar15 = uVar15 + 1;
        lVar16 = lVar16 + 0x10;
      } while (lVar13 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


