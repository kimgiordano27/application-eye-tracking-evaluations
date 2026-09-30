/*
FUNCTION_NAME: UnityEngine.SceneManagement.SceneManager$$GetActiveScene
ENTRY_POINT: 065dce90
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_file_logging_hits_3;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_SceneManagement_SceneManager__GetActiveScene(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  undefined8 in_stack_00000058;
  
  FUN_02f07e70();
  FUN_02f07e70(System_IO_Enumeration_FileSystemName_TypeInfo);
  FUN_02f07e70(System_Diagnostics_FileVersionInfo_TypeInfo);
  FUN_02f07e70(PTR_DAT_06d03010);
  FUN_02f07e70(System_Net_FileWebRequest_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xc45) = 1;
  puVar3 = System_IO_FileStream_TypeInfo;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  lVar11 = *(long *)(unaff_x19 + 0x158);
  plVar1 = (long *)(unaff_x19 + 0x158);
  if (lVar11 == 0) {
LAB_065dcf08:
    puVar2 = System_Net_FileWebRequest_TypeInfo;
    if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_065dd0b4;
    uVar7 = FUN_04cfe588(*(long *)(unaff_x19 + 0x150),*(undefined8 *)puVar3);
    lVar11 = FUN_02f07f14(*(undefined8 *)puVar2,uVar7);
    *plVar1 = lVar11;
    thunk_FUN_02f411dc(plVar1,lVar11);
  }
  else {
    if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_065dd0b4;
    iVar6 = FUN_04cfe588(*(long *)(unaff_x19 + 0x150),*(undefined8 *)System_IO_FileStream_TypeInfo);
    if (*(int *)(lVar11 + 0x18) < iVar6) goto LAB_065dcf08;
  }
  puVar5 = System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo;
  puVar4 = System_IO_FileStreamAsyncResult_TypeInfo;
  puVar2 = PTR_DAT_06d03010;
  if (*(long *)(unaff_x19 + 0x150) != 0) {
    FUN_04cfed38(*(long *)(unaff_x19 + 0x150),
                 *(undefined8 *)System_IO_FileNotFoundException_TypeInfo);
    in_stack_00000038 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000000;
    in_stack_00000048 = in_stack_00000018;
    in_stack_00000040 = in_stack_00000010;
    in_stack_00000058 = in_stack_00000028;
    in_stack_00000050 = in_stack_00000020;
    while (uVar9 = FUN_04ed4b48(&stack0x00000030,*(undefined8 *)puVar5), (uVar9 & 1) != 0) {
      FUN_065dd124(in_stack_00000048 & 0xffffffff,in_stack_00000048._4_4_,
                   in_stack_00000050 & 0xffffffff);
    }
    FUN_04ed4c80(&stack0x00000030,*(undefined8 *)puVar4);
    if (*(long *)(unaff_x19 + 0x150) != 0) {
      iVar6 = FUN_04cfe588(*(long *)(unaff_x19 + 0x150),*(undefined8 *)puVar3);
      if (iVar6 < *(int *)(unaff_x19 + 0x16c)) {
        lVar12 = (long)iVar6;
        lVar11 = (long)iVar6 * 0x84 + 0x20;
        do {
          lVar10 = *plVar1;
          if (lVar10 == 0) goto LAB_065dd0b4;
          if (*(uint *)(lVar10 + 0x18) <= (uint)lVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          FUN_0672f30c(0xbf800000,lVar10 + lVar11,0);
          lVar12 = lVar12 + 1;
          lVar11 = lVar11 + 0x84;
        } while (lVar12 < *(int *)(unaff_x19 + 0x16c));
      }
      if (*(long *)(unaff_x19 + 0x150) != 0) {
        lVar11 = *(long *)(unaff_x19 + 0x128);
        uVar13 = *(undefined8 *)(unaff_x19 + 0x158);
        uVar8 = FUN_04cfe588(*(long *)(unaff_x19 + 0x150),*(undefined8 *)puVar3);
        uVar7 = *(undefined4 *)(unaff_x19 + 0x16c);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)puVar2);
        }
        uVar7 = Newtonsoft_Json_Serialization_JsonProperty__get_DeclaringType(uVar8,uVar7,0);
        if (lVar11 != 0) {
          FUN_06727900(lVar11,uVar13,uVar7,0);
          if (*(long *)(unaff_x19 + 0x150) != 0) {
            uVar7 = FUN_04cfe588(*(long *)(unaff_x19 + 0x150),*(undefined8 *)puVar3);
            *(undefined4 *)(unaff_x19 + 0x16c) = uVar7;
            return;
          }
        }
      }
    }
  }
LAB_065dd0b4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


