/*
FUNCTION_NAME: MedleyGraveyardStatue.<DissolvingCoroutine>d__36$$System.IDisposable.Dispose
ENTRY_POINT: 00f32f10
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] MedleyGraveyardStatue_<DissolvingCoroutine>d__36__System_IDisposable_Dispose(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  int iVar11;
  long unaff_x29;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  puVar3 = UnityEngine_UIElements_ReusableListViewItem_TypeInfo;
  plVar12 = *(long **)(unaff_x29 + 0x540);
  uVar6 = FUN_00f2ace0();
  lVar9 = *plVar12;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar9);
  }
  FUN_00f42470(&stack0x00000020);
  in_stack_00000068 = in_stack_00000028;
  in_stack_00000060 = in_stack_00000020;
  in_stack_00000078 = in_stack_00000038;
  in_stack_00000070 = in_stack_00000030;
  lVar9 = *(long *)(*(long *)puVar3 + 0x20);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  lVar9 = **(long **)(lVar9 + 0xc0);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_00d5941c();
  }
  pcVar7 = (char *)thunk_FUN_00d32ed4(&stack0x00000060,*(undefined8 *)(lVar9 + 0x80));
  puVar3 = Method_System_Collections_Generic_Dictionary<Graphic,_int>__ctor__;
  if (*pcVar7 != '\0') {
    FUN_0123eb18(&stack0x00000060,&stack0x00000020,
                 *(undefined8 *)Method_System_Collections_Generic_Dictionary<Graphic,_int>__ctor__);
    uVar8 = FUN_015fe7e8(in_stack_00000028,uVar6,0);
    puVar4 = StringLiteral_232;
    if ((uVar8 & 1) != 0) {
      lVar9 = *(long *)StringLiteral_232;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar9 = *(long *)puVar4;
      }
      uVar1 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8);
      uVar2 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10);
      FUN_0123eb18(&stack0x00000060,&stack0x00000020,*(undefined8 *)puVar3);
      if (*(int *)(*plVar12 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      auVar13 = FUN_00f42064(uVar6);
      auVar13 = FUN_00f2f724(uVar1,uVar2,auVar13._0_8_,auVar13._8_8_);
      puVar3 = PTR_DAT_033f3390;
      if ((auVar13._0_8_ & 0xff) == 0) {
MedleyGraveyardStatue_<DieCorourtine>d__41___ctor:
        uVar6 = FUN_00f31998();
        *unaff_x19 = uVar6;
        return auVar13;
      }
      if (in_stack_00000058 != 0) {
        FUN_0132138c(in_stack_00000058,0,&stack0x00000020,*(undefined8 *)PTR_DAT_033f3390);
        auVar14 = FUN_00f3324c();
        if (*(int *)(*(long *)StringLiteral_232 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        auVar13 = FUN_00f2f724(auVar13._0_8_,auVar13._8_8_,auVar14._0_8_,auVar14._8_8_);
        if ((auVar13._0_8_ & 0xff) == 0) {
          return auVar13;
        }
        if (in_stack_00000058 != 0) {
          iVar11 = 1;
          do {
            puVar4 = 
            Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_get_Current__
            ;
            if (*(int *)(in_stack_00000058 + 0x18) <= iVar11) {
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_List_Enumerator<SerializationErrorCallback>_get_Current__
                          + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar8 = FUN_00f2ff10();
              puVar3 = Method_FullSerializer_fsBaseConverter_SerializeMember<WrapMode>__;
              if ((uVar8 & 1) != 0) {
                lVar9 = FUN_00f29ea8();
                lVar10 = *(long *)puVar4;
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_00d32864(lVar10);
                }
                if ((lVar9 == 0) ||
                   (FUN_01299bc0(lVar9,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10),
                                 &stack0x00000020,*(undefined8 *)puVar3), in_stack_00000020 == 0))
                break;
                uVar6 = FUN_00f2ace0();
                uVar5 = FUN_0176ee4c(uVar6,0);
                if (*(long *)(unaff_x20 + 0x40) == 0) break;
                FUN_00f40a68(*(long *)(unaff_x20 + 0x40),uVar5,*unaff_x21,0);
              }
              _in_stack_00000020 = auVar13;
              uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_232,&stack0x00000020);
              thunk_FUN_00d93c64(uVar6,0);
              goto MedleyGraveyardStatue_<DieCorourtine>d__41___ctor;
            }
            FUN_0132138c(in_stack_00000058,iVar11,&stack0x00000020,*(undefined8 *)puVar3);
            in_stack_00000048 = in_stack_00000028;
            in_stack_00000040 = in_stack_00000020;
            in_stack_00000050 = in_stack_00000030;
            uVar6 = FUN_00f41bd8(&stack0x00000040,*unaff_x21,0);
            *unaff_x21 = uVar6;
            iVar11 = iVar11 + 1;
          } while (in_stack_00000058 != 0);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  auVar13 = FUN_00f3324c();
  return auVar13;
}


