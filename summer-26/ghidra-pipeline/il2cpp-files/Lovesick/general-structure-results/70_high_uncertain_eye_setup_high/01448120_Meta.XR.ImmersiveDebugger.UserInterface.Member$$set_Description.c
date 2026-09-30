/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$set_Description
ENTRY_POINT: 01448120
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Member__set_Description
               (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  undefined8 unaff_x22;
  undefined8 uVar7;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a8;
  
  while( true ) {
    lVar5 = *(long *)(param_1 + 0x10);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    FUN_02661304(unaff_x22,**(undefined8 **)(lVar5 + 0xb8),0);
    uVar10 = *(undefined4 *)(unaff_x28 + 0x24);
    uVar8 = FUN_014315a4(&stack0x00000080,0);
    uVar4 = param_3;
    uVar7 = param_4;
    uVar12 = param_5;
    uVar9 = FUN_014315a4(&stack0x00000060,0);
    lVar5 = *(long *)(unaff_x28 + 0x10);
    if (lVar5 == 0) break;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_01448240;
    lVar5 = *(long *)(lVar5 + 0x20);
    if (lVar5 == 0) break;
    in_stack_00000048 = *(undefined8 *)(lVar5 + 0x28);
    in_stack_00000040 = *(undefined8 *)(lVar5 + 0x20);
    in_stack_00000058 = *(undefined8 *)(lVar5 + 0x38);
    in_stack_00000050 = *(undefined8 *)(lVar5 + 0x30);
    FUN_014315a4(&stack0x00000040,0);
    FUN_013e934c(uVar8,param_3,param_4,param_5,uVar9,uVar4,uVar7,uVar12,uVar10,5,0);
    do {
      lVar5 = *(long *)(unaff_x28 + 0x18);
      unaff_w21 = unaff_w21 + 1;
      if (lVar5 == 0) goto LAB_0144823c;
      while( true ) {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) goto LAB_0144823c;
        if (unaff_w21 < *(int *)(lVar5 + 0x18)) break;
        do {
          in_stack_00000028._4_4_ = in_stack_00000028._4_4_ + 1;
          if (*(int *)(in_stack_00000020 + 0x18) <= in_stack_00000028._4_4_) {
            return;
          }
          FUN_0132138c(in_stack_00000020,in_stack_00000028._4_4_,&stack0x000000a8,
                       *(undefined8 *)PTR_DAT_033ee2d8);
          if (in_stack_000000a8 == 0) goto LAB_0144823c;
        } while (*(char *)(in_stack_000000a8 + 0x20) == '\0');
        lVar5 = *(long *)(in_stack_000000a8 + 0x18);
        if (lVar5 == 0) goto LAB_0144823c;
        unaff_w21 = 0;
        unaff_x28 = in_stack_000000a8;
      }
      FUN_0132138c(lVar5,unaff_w21,&stack0x000000a8,*unaff_x25);
      if (in_stack_000000a8 == 0) goto LAB_0144823c;
      in_stack_00000098 = *(undefined8 *)(in_stack_000000a8 + 0x30);
      in_stack_00000090 = *(undefined8 *)(in_stack_000000a8 + 0x28);
      in_stack_00000088 = *(undefined8 *)(in_stack_000000a8 + 0x20);
      in_stack_00000080 = *(undefined8 *)(in_stack_000000a8 + 0x18);
      in_stack_00000078 = *(undefined8 *)(in_stack_000000a8 + 0x70);
      in_stack_00000070 = *(undefined8 *)(in_stack_000000a8 + 0x68);
      in_stack_00000068 = *(undefined8 *)(in_stack_000000a8 + 0x60);
      uVar11 = *(undefined8 *)(in_stack_000000a8 + 0x58);
      uVar10 = *(undefined4 *)(unaff_x28 + 0x24);
      in_stack_00000060 = uVar11;
      uVar8 = FUN_014315a4(&stack0x00000080,0);
      uVar4 = uVar11;
      uVar7 = param_4;
      uVar12 = param_5;
      uVar9 = FUN_014315a4(&stack0x00000060,0);
      lVar5 = *(long *)(unaff_x28 + 0x10);
      if (lVar5 == 0) goto LAB_0144823c;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_01448240;
      lVar5 = *(long *)(lVar5 + 0x20);
      if (lVar5 == 0) goto LAB_0144823c;
      in_stack_00000048 = *(undefined8 *)(lVar5 + 0x28);
      in_stack_00000040 = *(undefined8 *)(lVar5 + 0x20);
      in_stack_00000058 = *(undefined8 *)(lVar5 + 0x38);
      in_stack_00000050 = *(undefined8 *)(lVar5 + 0x30);
      FUN_014315a4(&stack0x00000040,0);
      uVar1 = FUN_013e934c(uVar8,uVar11,param_4,param_5,uVar9,uVar4,uVar7,uVar12,uVar10,3,0);
    } while ((uVar1 & 1) != 0);
    plVar2 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,0xb);
    if (plVar2 == (long *)0x0) break;
    if ((*unaff_x29 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(*unaff_x29,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0)) {
LAB_01448244:
      uVar4 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar4,0);
    }
    if ((int)plVar2[3] == 0) goto LAB_01448240;
    plVar2[4] = *unaff_x29;
    if (((*(long *)(unaff_x28 + 0x18) == 0) ||
        (lVar5 = *(long *)(*(long *)(unaff_x28 + 0x18) + 0x10), lVar5 == 0)) ||
       (FUN_0132138c(lVar5,unaff_w21,&stack0x000000a8,*unaff_x25), in_stack_000000a8 == 0)) break;
    lVar5 = *(long *)(in_stack_000000a8 + 0x78);
    if ((lVar5 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
    goto LAB_01448244;
    uVar6 = *(uint *)(plVar2 + 3);
    if (uVar6 < 2) {
LAB_01448240:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar2[5] = lVar5;
    if (*(long *)Method_UnityEngine_UIElements_StyleDataRef<TransformData>_CopyFrom__ != 0) {
      lVar5 = thunk_FUN_00d6225c(*(long *)
                                  Method_UnityEngine_UIElements_StyleDataRef<TransformData>_CopyFrom__
                                 ,*(undefined8 *)(*plVar2 + 0x40));
      if (lVar5 == 0) goto LAB_01448244;
      uVar6 = *(uint *)(plVar2 + 3);
    }
    if (uVar6 < 3) goto LAB_01448240;
    plVar2[6] = *(long *)Method_UnityEngine_UIElements_StyleDataRef<TransformData>_CopyFrom__;
    in_stack_00000048 = in_stack_00000088;
    in_stack_00000040 = in_stack_00000080;
    in_stack_00000058 = in_stack_00000098;
    in_stack_00000050 = in_stack_00000090;
    uVar4 = in_stack_00000080;
    lVar5 = FUN_0143182c(&stack0x00000040,0);
    uVar10 = (undefined4)uVar4;
    if ((lVar5 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
    goto LAB_01448244;
    uVar6 = *(uint *)(plVar2 + 3);
    if (uVar6 < 4) goto LAB_01448240;
    plVar2[7] = lVar5;
    if (*(long *)UnityEngine_Rendering_Universal_DecalDrawDBufferSystem_TypeInfo != 0) {
      lVar5 = thunk_FUN_00d6225c(*(long *)
                                  UnityEngine_Rendering_Universal_DecalDrawDBufferSystem_TypeInfo,
                                 *(undefined8 *)(*plVar2 + 0x40));
      if (lVar5 == 0) goto LAB_01448244;
      uVar6 = *(uint *)(plVar2 + 3);
    }
    if (uVar6 < 5) goto LAB_01448240;
    plVar2[8] = *(long *)UnityEngine_Rendering_Universal_DecalDrawDBufferSystem_TypeInfo;
    uStack0000000000000030 = FUN_014315a4(&stack0x00000060,0);
    uStack0000000000000038 = (undefined4)param_4;
    uStack000000000000003c = (undefined4)param_5;
    uStack0000000000000034 = uVar10;
    lVar5 = FUN_02688ad8(&stack0x00000030,*(undefined8 *)StringLiteral_12992,0);
    if ((lVar5 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
    goto LAB_01448244;
    uVar6 = *(uint *)(plVar2 + 3);
    if (uVar6 < 6) goto LAB_01448240;
    plVar2[9] = lVar5;
    if (*unaff_x19 != 0) {
      lVar5 = thunk_FUN_00d6225c(*unaff_x19,*(undefined8 *)(*plVar2 + 0x40));
      if (lVar5 == 0) goto LAB_01448244;
      uVar6 = *(uint *)(plVar2 + 3);
    }
    if (uVar6 < 7) goto LAB_01448240;
    plVar2[10] = *unaff_x19;
    if (((*(long *)(unaff_x28 + 0x18) == 0) ||
        (lVar5 = *(long *)(*(long *)(unaff_x28 + 0x18) + 0x10), lVar5 == 0)) ||
       (FUN_0132138c(lVar5,unaff_w21,&stack0x000000a8,*unaff_x25), in_stack_000000a8 == 0)) break;
    in_stack_00000058 = *(undefined8 *)(in_stack_000000a8 + 0x50);
    in_stack_00000050 = *(undefined8 *)(in_stack_000000a8 + 0x48);
    in_stack_00000048 = *(undefined8 *)(in_stack_000000a8 + 0x40);
    uVar4 = *(undefined8 *)(in_stack_000000a8 + 0x38);
    in_stack_00000040 = uVar4;
    uStack0000000000000030 = FUN_014315a4(&stack0x00000040,0);
    uStack0000000000000034 = (undefined4)uVar4;
    uStack0000000000000038 = (undefined4)param_4;
    uStack000000000000003c = (undefined4)param_5;
    lVar5 = FUN_02688ad8(&stack0x00000030,*unaff_x26,0);
    if ((lVar5 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
    goto LAB_01448244;
    uVar6 = *(uint *)(plVar2 + 3);
    if (uVar6 < 8) goto LAB_01448240;
    plVar2[0xb] = lVar5;
    if (*unaff_x24 != 0) {
      lVar5 = thunk_FUN_00d6225c(*unaff_x24,*(undefined8 *)(*plVar2 + 0x40));
      if (lVar5 == 0) goto LAB_01448244;
      uVar6 = *(uint *)(plVar2 + 3);
    }
    if (uVar6 < 9) goto LAB_01448240;
    plVar2[0xc] = *unaff_x24;
    lVar5 = *(long *)(unaff_x28 + 0x10);
    if (lVar5 == 0) break;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_01448240;
    lVar5 = *(long *)(lVar5 + 0x20);
    if (lVar5 == 0) break;
    in_stack_00000048 = *(undefined8 *)(lVar5 + 0x28);
    param_3 = *(undefined8 *)(lVar5 + 0x20);
    in_stack_00000058 = *(undefined8 *)(lVar5 + 0x38);
    in_stack_00000050 = *(undefined8 *)(lVar5 + 0x30);
    in_stack_00000040 = param_3;
    uStack0000000000000030 = FUN_014315a4(&stack0x00000040,0);
    uStack0000000000000034 = (undefined4)param_3;
    uStack0000000000000038 = (undefined4)param_4;
    uStack000000000000003c = (undefined4)param_5;
    lVar5 = FUN_02688ad8(&stack0x00000030,*unaff_x26,0);
    if ((lVar5 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
    goto LAB_01448244;
    uVar6 = *(uint *)(plVar2 + 3);
    if (uVar6 < 10) goto LAB_01448240;
    plVar2[0xd] = lVar5;
    if (*unaff_x20 != 0) {
      lVar5 = thunk_FUN_00d6225c(*unaff_x20,*(undefined8 *)(*plVar2 + 0x40));
      if (lVar5 == 0) goto LAB_01448244;
      uVar6 = *(uint *)(plVar2 + 3);
    }
    if (uVar6 < 0xb) goto LAB_01448240;
    plVar2[0xe] = *unaff_x20;
    uVar4 = FUN_01600844(plVar2,0);
    lVar3 = *unaff_x27;
    lVar5 = *(long *)(lVar3 + 0x38);
    if (lVar5 == 0) {
      FUN_00d59478(lVar3);
      lVar5 = *(long *)(lVar3 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar5 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    uVar7 = **(undefined8 **)(lVar5 + 0xb8);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02661304(uVar4,uVar7,0);
    if (((*(long *)(unaff_x28 + 0x18) == 0) ||
        (lVar5 = *(long *)(*(long *)(unaff_x28 + 0x18) + 0x10), lVar5 == 0)) ||
       (FUN_0132138c(lVar5,unaff_w21,&stack0x000000a8,*unaff_x25), in_stack_000000a8 == 0)) break;
    uVar4 = FUN_01600424(*(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<Type,_bool>_TryGetValue__,
                         *(undefined8 *)(in_stack_000000a8 + 0x78),*(undefined8 *)PTR_DAT_033ec228,0
                        );
    lVar3 = *unaff_x27;
    lVar5 = *(long *)(lVar3 + 0x38);
    if (lVar5 == 0) {
      FUN_00d59478(lVar3);
      lVar5 = *(long *)(lVar3 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar5 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    unaff_x22 = FUN_01600be4(uVar4,**(undefined8 **)(lVar5 + 0xb8),0);
    lVar3 = *unaff_x27;
    lVar5 = *(long *)(lVar3 + 0x38);
    if (lVar5 == 0) {
      FUN_00d59478(lVar3);
      lVar5 = *(long *)(lVar3 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    param_1 = *(long *)(lVar3 + 0x38);
  }
LAB_0144823c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


