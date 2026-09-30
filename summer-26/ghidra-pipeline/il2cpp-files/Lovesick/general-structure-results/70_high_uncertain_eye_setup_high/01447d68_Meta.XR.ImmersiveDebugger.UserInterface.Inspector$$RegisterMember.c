/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Inspector$$RegisterMember
ENTRY_POINT: 01447d68
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


void Meta_XR_ImmersiveDebugger_UserInterface_Inspector__RegisterMember
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
               undefined8 param_4,undefined1 *param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  undefined8 uVar7;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a8;
  
  do {
    uStack0000000000000048 = in_stack_00000088;
    uStack0000000000000040 = in_stack_00000080;
    uStack0000000000000058 = in_stack_00000098;
    uStack0000000000000050 = in_stack_00000090;
    uVar5 = in_stack_00000080;
    lVar2 = FUN_0143182c(param_5,param_6);
    uVar11 = (undefined4)uVar5;
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
LAB_01448244:
      uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar5,0);
    }
    uVar6 = *(uint *)(unaff_x22 + 3);
    if (uVar6 < 4) {
LAB_01448240:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    unaff_x22[7] = lVar2;
    if (*(long *)UnityEngine_Rendering_Universal_DecalDrawDBufferSystem_TypeInfo != 0) {
      lVar2 = thunk_FUN_00d6225c(*(long *)
                                  UnityEngine_Rendering_Universal_DecalDrawDBufferSystem_TypeInfo,
                                 *(undefined8 *)(*unaff_x22 + 0x40));
      if (lVar2 == 0) goto LAB_01448244;
      uVar6 = *(uint *)(unaff_x22 + 3);
    }
    if (uVar6 < 5) goto LAB_01448240;
    unaff_x22[8] = *(long *)UnityEngine_Rendering_Universal_DecalDrawDBufferSystem_TypeInfo;
    uStack0000000000000030 = FUN_014315a4(&stack0x00000060,0);
    uStack0000000000000038 = (undefined4)param_3;
    uStack000000000000003c = (undefined4)param_4;
    uStack0000000000000034 = uVar11;
    lVar2 = FUN_02688ad8(&stack0x00000030,*(undefined8 *)StringLiteral_12992,0);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0))
    goto LAB_01448244;
    uVar6 = *(uint *)(unaff_x22 + 3);
    if (uVar6 < 6) goto LAB_01448240;
    unaff_x22[9] = lVar2;
    if (*unaff_x19 != 0) {
      lVar2 = thunk_FUN_00d6225c(*unaff_x19,*(undefined8 *)(*unaff_x22 + 0x40));
      if (lVar2 == 0) goto LAB_01448244;
      uVar6 = *(uint *)(unaff_x22 + 3);
    }
    if (uVar6 < 7) goto LAB_01448240;
    unaff_x22[10] = *unaff_x19;
    if (((*(long *)(unaff_x28 + 0x18) == 0) ||
        (lVar2 = *(long *)(*(long *)(unaff_x28 + 0x18) + 0x10), lVar2 == 0)) ||
       (FUN_0132138c(lVar2,unaff_w21,&stack0x000000a8,*unaff_x25), in_stack_000000a8 == 0))
    goto LAB_0144823c;
    uStack0000000000000058 = *(undefined8 *)(in_stack_000000a8 + 0x50);
    uStack0000000000000050 = *(undefined8 *)(in_stack_000000a8 + 0x48);
    uStack0000000000000048 = *(undefined8 *)(in_stack_000000a8 + 0x40);
    uVar5 = *(undefined8 *)(in_stack_000000a8 + 0x38);
    uStack0000000000000040 = uVar5;
    uStack0000000000000030 = FUN_014315a4(&stack0x00000040,0);
    uStack0000000000000034 = (undefined4)uVar5;
    uStack0000000000000038 = (undefined4)param_3;
    uStack000000000000003c = (undefined4)param_4;
    lVar2 = FUN_02688ad8(&stack0x00000030,*unaff_x26,0);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0))
    goto LAB_01448244;
    uVar6 = *(uint *)(unaff_x22 + 3);
    if (uVar6 < 8) goto LAB_01448240;
    unaff_x22[0xb] = lVar2;
    if (*unaff_x24 != 0) {
      lVar2 = thunk_FUN_00d6225c(*unaff_x24,*(undefined8 *)(*unaff_x22 + 0x40));
      if (lVar2 == 0) goto LAB_01448244;
      uVar6 = *(uint *)(unaff_x22 + 3);
    }
    if (uVar6 < 9) goto LAB_01448240;
    unaff_x22[0xc] = *unaff_x24;
    lVar2 = *(long *)(unaff_x28 + 0x10);
    if (lVar2 == 0) {
LAB_0144823c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(lVar2 + 0x18) == 0) goto LAB_01448240;
    lVar2 = *(long *)(lVar2 + 0x20);
    if (lVar2 == 0) goto LAB_0144823c;
    uStack0000000000000048 = *(undefined8 *)(lVar2 + 0x28);
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    uStack0000000000000058 = *(undefined8 *)(lVar2 + 0x38);
    uStack0000000000000050 = *(undefined8 *)(lVar2 + 0x30);
    uStack0000000000000040 = uVar5;
    uStack0000000000000030 = FUN_014315a4(&stack0x00000040,0);
    uStack0000000000000034 = (undefined4)uVar5;
    uStack0000000000000038 = (undefined4)param_3;
    uStack000000000000003c = (undefined4)param_4;
    lVar2 = FUN_02688ad8(&stack0x00000030,*unaff_x26,0);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0))
    goto LAB_01448244;
    uVar6 = *(uint *)(unaff_x22 + 3);
    if (uVar6 < 10) goto LAB_01448240;
    unaff_x22[0xd] = lVar2;
    if (*unaff_x20 != 0) {
      lVar2 = thunk_FUN_00d6225c(*unaff_x20,*(undefined8 *)(*unaff_x22 + 0x40));
      if (lVar2 == 0) goto LAB_01448244;
      uVar6 = *(uint *)(unaff_x22 + 3);
    }
    if (uVar6 < 0xb) goto LAB_01448240;
    unaff_x22[0xe] = *unaff_x20;
    uVar4 = FUN_01600844(unaff_x22,0);
    lVar3 = *unaff_x27;
    lVar2 = *(long *)(lVar3 + 0x38);
    if (lVar2 == 0) {
      FUN_00d59478(lVar3);
      lVar2 = *(long *)(lVar3 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_00d5941c();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar2 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_00d5941c();
    }
    uVar7 = **(undefined8 **)(lVar2 + 0xb8);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02661304(uVar4,uVar7,0);
    if (((*(long *)(unaff_x28 + 0x18) == 0) ||
        (lVar2 = *(long *)(*(long *)(unaff_x28 + 0x18) + 0x10), lVar2 == 0)) ||
       (FUN_0132138c(lVar2,unaff_w21,&stack0x000000a8,*unaff_x25), in_stack_000000a8 == 0))
    goto LAB_0144823c;
    uVar4 = FUN_01600424(*(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<Type,_bool>_TryGetValue__,
                         *(undefined8 *)(in_stack_000000a8 + 0x78),*(undefined8 *)PTR_DAT_033ec228,0
                        );
    lVar3 = *unaff_x27;
    lVar2 = *(long *)(lVar3 + 0x38);
    if (lVar2 == 0) {
      FUN_00d59478(lVar3);
      lVar2 = *(long *)(lVar3 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_00d5941c();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar2 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_00d5941c();
    }
    uVar4 = FUN_01600be4(uVar4,**(undefined8 **)(lVar2 + 0xb8),0);
    lVar3 = *unaff_x27;
    lVar2 = *(long *)(lVar3 + 0x38);
    if (lVar2 == 0) {
      FUN_00d59478(lVar3);
      lVar2 = *(long *)(lVar3 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_00d5941c();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar2 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_00d5941c();
    }
    FUN_02661304(uVar4,**(undefined8 **)(lVar2 + 0xb8),0);
    uVar11 = *(undefined4 *)(unaff_x28 + 0x24);
    uVar9 = FUN_014315a4(&stack0x00000080,0);
    uVar4 = uVar5;
    uVar7 = param_3;
    uVar8 = param_4;
    uVar10 = FUN_014315a4(&stack0x00000060,0);
    lVar2 = *(long *)(unaff_x28 + 0x10);
    if (lVar2 == 0) goto LAB_0144823c;
    if (*(int *)(lVar2 + 0x18) == 0) goto LAB_01448240;
    lVar2 = *(long *)(lVar2 + 0x20);
    if (lVar2 == 0) goto LAB_0144823c;
    uStack0000000000000048 = *(undefined8 *)(lVar2 + 0x28);
    uStack0000000000000040 = *(undefined8 *)(lVar2 + 0x20);
    uStack0000000000000058 = *(undefined8 *)(lVar2 + 0x38);
    uStack0000000000000050 = *(undefined8 *)(lVar2 + 0x30);
    FUN_014315a4(&stack0x00000040,0);
    FUN_013e934c(uVar9,uVar5,param_3,param_4,uVar10,uVar4,uVar7,uVar8,uVar11,5,0);
    do {
      lVar2 = *(long *)(unaff_x28 + 0x18);
      unaff_w21 = unaff_w21 + 1;
      if (lVar2 == 0) goto LAB_0144823c;
      while( true ) {
        lVar2 = *(long *)(lVar2 + 0x10);
        if (lVar2 == 0) goto LAB_0144823c;
        if (unaff_w21 < *(int *)(lVar2 + 0x18)) break;
        do {
          in_stack_00000028._4_4_ = in_stack_00000028._4_4_ + 1;
          if (*(int *)(in_stack_00000020 + 0x18) <= in_stack_00000028._4_4_) {
            return;
          }
          FUN_0132138c(in_stack_00000020,in_stack_00000028._4_4_,&stack0x000000a8,
                       *(undefined8 *)PTR_DAT_033ee2d8);
          if (in_stack_000000a8 == 0) goto LAB_0144823c;
        } while (*(char *)(in_stack_000000a8 + 0x20) == '\0');
        lVar2 = *(long *)(in_stack_000000a8 + 0x18);
        if (lVar2 == 0) goto LAB_0144823c;
        unaff_w21 = 0;
        unaff_x28 = in_stack_000000a8;
      }
      FUN_0132138c(lVar2,unaff_w21,&stack0x000000a8,*unaff_x25);
      if (in_stack_000000a8 == 0) goto LAB_0144823c;
      in_stack_00000098 = *(undefined8 *)(in_stack_000000a8 + 0x30);
      in_stack_00000090 = *(undefined8 *)(in_stack_000000a8 + 0x28);
      in_stack_00000088 = *(undefined8 *)(in_stack_000000a8 + 0x20);
      in_stack_00000080 = *(undefined8 *)(in_stack_000000a8 + 0x18);
      in_stack_00000078 = *(undefined8 *)(in_stack_000000a8 + 0x70);
      in_stack_00000070 = *(undefined8 *)(in_stack_000000a8 + 0x68);
      in_stack_00000068 = *(undefined8 *)(in_stack_000000a8 + 0x60);
      uVar10 = *(undefined8 *)(in_stack_000000a8 + 0x58);
      uVar11 = *(undefined4 *)(unaff_x28 + 0x24);
      in_stack_00000060 = uVar10;
      uVar8 = FUN_014315a4(&stack0x00000080,0);
      uVar5 = uVar10;
      uVar4 = param_3;
      uVar7 = param_4;
      uVar9 = FUN_014315a4(&stack0x00000060,0);
      lVar2 = *(long *)(unaff_x28 + 0x10);
      if (lVar2 == 0) goto LAB_0144823c;
      if (*(int *)(lVar2 + 0x18) == 0) goto LAB_01448240;
      lVar2 = *(long *)(lVar2 + 0x20);
      if (lVar2 == 0) goto LAB_0144823c;
      uStack0000000000000048 = *(undefined8 *)(lVar2 + 0x28);
      uStack0000000000000040 = *(undefined8 *)(lVar2 + 0x20);
      uStack0000000000000058 = *(undefined8 *)(lVar2 + 0x38);
      uStack0000000000000050 = *(undefined8 *)(lVar2 + 0x30);
      FUN_014315a4(&stack0x00000040,0);
      uVar1 = FUN_013e934c(uVar8,uVar10,param_3,param_4,uVar9,uVar5,uVar4,uVar7,uVar11,3,0);
    } while ((uVar1 & 1) != 0);
    unaff_x22 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,0xb);
    if (unaff_x22 == (long *)0x0) goto LAB_0144823c;
    if ((*unaff_x29 != 0) &&
       (lVar2 = thunk_FUN_00d6225c(*unaff_x29,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0))
    goto LAB_01448244;
    if ((int)unaff_x22[3] == 0) goto LAB_01448240;
    unaff_x22[4] = *unaff_x29;
    if (((*(long *)(unaff_x28 + 0x18) == 0) ||
        (lVar2 = *(long *)(*(long *)(unaff_x28 + 0x18) + 0x10), lVar2 == 0)) ||
       (FUN_0132138c(lVar2,unaff_w21,&stack0x000000a8,*unaff_x25), in_stack_000000a8 == 0))
    goto LAB_0144823c;
    lVar2 = *(long *)(in_stack_000000a8 + 0x78);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0))
    goto LAB_01448244;
    uVar6 = *(uint *)(unaff_x22 + 3);
    if (uVar6 < 2) goto LAB_01448240;
    unaff_x22[5] = lVar2;
    if (*(long *)Method_UnityEngine_UIElements_StyleDataRef<TransformData>_CopyFrom__ != 0) {
      lVar2 = thunk_FUN_00d6225c(*(long *)
                                  Method_UnityEngine_UIElements_StyleDataRef<TransformData>_CopyFrom__
                                 ,*(undefined8 *)(*unaff_x22 + 0x40));
      if (lVar2 == 0) goto LAB_01448244;
      uVar6 = *(uint *)(unaff_x22 + 3);
    }
    if (uVar6 < 3) goto LAB_01448240;
    param_5 = (undefined1 *)&stack0x00000040;
    param_6 = 0;
    unaff_x22[6] = *(long *)Method_UnityEngine_UIElements_StyleDataRef<TransformData>_CopyFrom__;
  } while( true );
}


