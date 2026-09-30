/*
FUNCTION_NAME: Unity.Serialization.Json.JsonValidator$$Dispose
ENTRY_POINT: 0338917c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_Serialization_Json_JsonValidator__Dispose(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  byte bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  int iVar9;
  long unaff_x25;
  undefined8 *puVar10;
  uint uVar11;
  long unaff_x27;
  undefined8 *puVar12;
  long lVar13;
  long unaff_x29;
  long *plVar14;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  int iStack0000000000000078;
  int iStack000000000000007c;
  
  puVar1 = PTR_DAT_03cbe508;
  puVar12 = *(undefined8 **)(unaff_x27 + 0xe40);
  plVar14 = *(long **)(unaff_x29 + 0xd78);
  puVar10 = *(undefined8 **)(unaff_x25 + 0xe20);
  iVar9 = 0;
  do {
    if (*(int *)(param_1 + 0x18) <= iVar9) {
      return;
    }
    plVar4 = (long *)FUN_021a228c(param_1,iVar9,*(undefined8 *)System_Xml_IDtdAttributeInfo_TypeInfo
                                 );
    uVar11 = 0;
    do {
      if ((*plVar4 == 0) || (lVar8 = *(long *)(*plVar4 + 0x50), lVar8 == 0)) goto LAB_033896c4;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) {
LAB_033896e8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar13 = (long)(int)uVar11;
      lVar8 = *(long *)(lVar8 + lVar13 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_033896c4;
      Animancer_FadeGroup__get_TargetWeight
                (lVar8,&stack0x00000008,
                 *(undefined8 *)
                  UnityEngine_Networking_PlayerConnection_IEditorPlayerConnection_TypeInfo);
      in_stack_00000038 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000008;
      in_stack_00000040 = in_stack_00000018;
      while (uVar5 = FUN_021b51c8(&stack0x00000030,*puVar12), (uVar5 & 1) != 0) {
        FUN_01b7a454(&stack0x00000030,&stack0x00000050,
                     *(undefined8 *)UnityEngine_UIElements_IEditableElement_TypeInfo);
        uVar2 = in_stack_00000050;
        in_stack_00000028 = in_stack_00000050;
        lVar8 = *(long *)(unaff_x19 + 0x78);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar8 = *(long *)(lVar8 + lVar13 * 8 + 0x20);
        if (*(int *)(*plVar14 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar5 = FUN_03389790(uVar2);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c(uVar5,uVar5 & 0xffffffff);
        }
        lVar8 = FUN_021a228c(lVar8,uVar5 & 0xffffffff,*puVar10);
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        bVar3 = FUN_033897e4(*(long *)(unaff_x19 + 0x10),&stack0x00000028);
        *(byte *)(lVar8 + 0x14) = bVar3 & 1;
        if (*(long *)(lVar8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        in_stack_00000058._4_4_ = iVar9;
        FUN_01b5f01c(*(long *)(lVar8 + 8),(long)&stack0x00000058 + 4,*(undefined8 *)puVar1);
        *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + 1;
      }
      FUN_021b51c4(&stack0x00000030,
                   *(undefined8 *)Unity_Services_Economy_IEconomyPurchasesApiClientApi_TypeInfo);
      if ((*plVar4 == 0) || (lVar8 = *(long *)(*plVar4 + 0x58), lVar8 == 0)) goto LAB_033896c4;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_033896e8;
      lVar8 = *(long *)(lVar8 + lVar13 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_033896c4;
      Animancer_FadeGroup__get_TargetWeight
                (lVar8,&stack0x00000008,
                 *(undefined8 *)
                  UnityEngine_Networking_PlayerConnection_IEditorPlayerConnection_TypeInfo);
      in_stack_00000038 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000008;
      in_stack_00000040 = in_stack_00000018;
      while (uVar5 = FUN_021b51c8(&stack0x00000030,*puVar12), (uVar5 & 1) != 0) {
        FUN_01b7a454(&stack0x00000030,&stack0x00000060,
                     *(undefined8 *)UnityEngine_UIElements_IEditableElement_TypeInfo);
        uVar2 = in_stack_00000060;
        in_stack_00000020 = in_stack_00000060;
        lVar8 = *(long *)(unaff_x19 + 0x78);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar8 = *(long *)(lVar8 + lVar13 * 8 + 0x20);
        if (*(int *)(*plVar14 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar5 = FUN_03389790(uVar2);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c(uVar5,uVar5 & 0xffffffff);
        }
        plVar6 = (long *)FUN_021a228c(lVar8,uVar5 & 0xffffffff,*puVar10);
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        bVar3 = FUN_033897e4(*(long *)(unaff_x19 + 0x10),&stack0x00000020);
        *(byte *)((long)plVar6 + 0x14) = bVar3 & 1;
        if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        in_stack_00000068._4_4_ = iVar9;
        FUN_01b5f01c(*plVar6,(long)&stack0x00000068 + 4,*(undefined8 *)puVar1);
        *(undefined1 *)((long)plVar4 + 0x1e) = *(undefined1 *)((long)plVar6 + 0x14);
        *(int *)(plVar4 + 3) = (int)plVar4[3] + 1;
      }
      FUN_021b51c4(&stack0x00000030,
                   *(undefined8 *)Unity_Services_Economy_IEconomyPurchasesApiClientApi_TypeInfo);
      if ((*plVar4 == 0) || (lVar8 = *(long *)(*plVar4 + 0x60), lVar8 == 0)) goto LAB_033896c4;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_033896e8;
      lVar8 = *(long *)(lVar8 + lVar13 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_033896c4;
      Animancer_FadeGroup__get_TargetWeight
                (lVar8,&stack0x00000008,
                 *(undefined8 *)
                  UnityEngine_Networking_PlayerConnection_IEditorPlayerConnection_TypeInfo);
      in_stack_00000038 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000008;
      in_stack_00000040 = in_stack_00000018;
      while (uVar5 = FUN_021b51c8(&stack0x00000030,*puVar12), (uVar5 & 1) != 0) {
        FUN_01b7a454(&stack0x00000030,&stack0x00000070,
                     *(undefined8 *)UnityEngine_UIElements_IEditableElement_TypeInfo);
        uVar2 = in_stack_00000070;
        if (*(int *)(*plVar14 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar5 = FUN_03389790(uVar2);
        uVar7 = uVar5 & 0xffffffff;
        lVar8 = *(long *)(unaff_x19 + 0x78);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c(uVar5,uVar7);
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar8 = *(long *)(lVar8 + lVar13 * 8 + 0x20);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c(0,uVar7);
        }
        plVar6 = (long *)FUN_021a228c(lVar8,uVar7,*puVar10);
        *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
        if (plVar6[1] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iStack0000000000000078 = iVar9;
        FUN_01b5f01c(plVar6[1],&stack0x00000078,*(undefined8 *)puVar1);
        if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iStack000000000000007c = iVar9;
        FUN_01b5f01c(*plVar6,(long)&stack0x00000078 + 4,*(undefined8 *)puVar1);
      }
      FUN_021b51c4(&stack0x00000030,
                   *(undefined8 *)Unity_Services_Economy_IEconomyPurchasesApiClientApi_TypeInfo);
      uVar11 = uVar11 + 1;
    } while (uVar11 != 2);
    param_1 = *(long *)(unaff_x19 + 0x80);
    iVar9 = iVar9 + 1;
  } while (param_1 != 0);
LAB_033896c4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


